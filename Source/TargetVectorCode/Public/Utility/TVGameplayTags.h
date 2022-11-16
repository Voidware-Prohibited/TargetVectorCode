#pragma once

#include "NativeGameplayTags.h"

namespace ActorTypeTags
{
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(AI)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(LevelActor)
}

namespace PlayerFilterTags
{
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Fireteam)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Section)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Organization)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(All)
}

namespace IDTypeTags
{
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(AI)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Organization)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Section)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Fireteam)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(LevelActor)
}

namespace ObjectCollisionTypeTags
{
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(None)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Impact)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Drag)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Roll)
}

namespace SimpleCommsChannelTags
{
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Global)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Area)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Organization)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Command)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Section)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Fireteam)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Whisper)
}

namespace MarkerTypeTags
{
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(AI)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Organization)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Command)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Section)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Fireteam)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(LevelActor)
}

namespace SpectatorViewModeTags
{
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(KillCam)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(FirstPerson)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(FirstPersonAsItem)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(ThirdPerson)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(ThirdPersonAsItem)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Fixed)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(NearbyAI)
}

namespace ActionTypeTags
{
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Connected)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Disconnected)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Kicked)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Banned)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Died)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Killed)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(KillAssist)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(DisabledVehicle)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(DisabledVehicleAssist)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(DefendedZone)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(OccupiedZone)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(ControlledZone)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Supressed)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(GaveCommand)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(CompletedObjective)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(CompletedSideMission)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(FoundSpecialItem)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(MadeSpecialNPCContact)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(MadeSpecialNPCAchievement)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Incapacitated)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(WipedFireteam)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(WipedSection)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(CompletedMission)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Pet)
}

namespace RewardCriteriaTags
{
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Immeadiate)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(OnAction)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(AfterLeavingZone)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(AfterObjectiveCompletion)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(AfterMissionCompletion)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(EndOfGame)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(EndOfGameIfSameLife)
}

namespace BonusTypeTags
{
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Flat)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Multiply)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(MultiplyTotal)
}

namespace ProjectileSonicsTags
{
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Subsonic)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Supersonic)
}

namespace GameStartModeTags
{
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Headquarters)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Airdrop)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Random)
}

namespace DamageTypeTags
{
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Impact)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Edge)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Burn)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Explosion)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Gas)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Poison)
	TARGETVECTORCODE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Illness)
}