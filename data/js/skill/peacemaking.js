function SkillRegistration()
{
	RegisterSkill( 9, true );	// Peacemaking
}

function onSkill( pUser, objType, skillUsed )
{
	var pSock = pUser.socket;
	if( pSock )
	{
		var myInstrument = GetInstrument( pUser );
		if( ValidateObject( myInstrument ) )
		{
			if( pUser.CheckSkill( 29, 0, 1000 ) && pUser.CheckSkill( 9, 0, 1000 ) )
			{
				PlayInstrument( pSock, myInstrument, true );
				AreaCharacterFunction( "PeaceMakeArea", pUser, 15 )
			}
			else
			{
				PlayInstrument( pSock, myInstrument, false );
				pSock.SysMessage( GetDictionaryEntry( 1441, pSock.Language ) );
			}
		}
		else
			pSock.SysMessage( GetDictionaryEntry( 1438, pSock.Language ) );
	}
	return true;
}

function GetInstrument( pUser )
{
	if( ValidateObject( pUser.pack ) )
	{
		for( var toCheck = pUser.pack.FirstItem(); !pUser.pack.FinishedItems(); toCheck = pUser.pack.NextItem() )
		{
			if( ValidateObject( toCheck ) )
			{
				switch( toCheck.id )
				{
				case 0x0E9C:
				case 0x0E9D:
				case 0x0E9E:
				case 0x0EB1:
				case 0x0EB2:
				case 0x0EB3:
				case 0x0EB4:
					return toCheck;
				default:
					break;
				}
			}
		}
	}
	return null;
}

function PlayInstrument( pSock, myInstrument, wellPlayed )
{
	var soundID;
	switch( myInstrument.id )
	{
	case 0x0E9C:	// Drum
		if( wellPlayed )
			soundID = 0x0038;
		else
			soundID = 0x0039;
		break;
	case 0x0E9D:	// Tambourine
	case 0x0E9E:
		if( wellPlayed )
			soundID = 0x0052;
		else
			soundID = 0x0053;
		break;
	case 0x0EB1:	// Standing Harp
		if( wellPlayed )
			soundID = 0x0043;
		else
			soundID = 0x0044;
		break;
	case 0x0EB2:	// Harp
		if( wellPlayed )
			soundID = 0x0045;
		else
			soundID = 0x0046;
		break;
	case 0x0EB3:	// Lute
	case 0x0EB4:
		if( wellPlayed )
			soundID = 0x004C;
		else
			soundID = 0x004D;
		break;
	default:
		return;
	}
	pSock.SoundEffect( soundID, true );
}

function PeaceMakeArea( pUser, targChar )
{
	var targSock = targChar.socket;
	if( targSock )
		targSock.SysMessage( GetDictionaryEntry( 1440, targSock.Language ) );

	if( targChar.atWar )
		targChar.atWar = false;
	targChar.target = null;
	targChar.attacker = null;
	targChar.attackFirst = false;
	return true;
}
