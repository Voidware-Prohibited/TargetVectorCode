#include "Utility/TVGameplayTags.h"

namespace ActorTypeTags
{
	UE_DEFINE_GAMEPLAY_TAG(Player, TEXT("Game.Actor Type.Player"))
	UE_DEFINE_GAMEPLAY_TAG(AI, TEXT("Game.Actor Type.AI"))
	UE_DEFINE_GAMEPLAY_TAG(LevelActor, TEXT("Game.Actor Type.Level Actor"))
}

namespace PlayerFilterTags
{
	UE_DEFINE_GAMEPLAY_TAG(Fireteam, TEXT("Game.Player Filter.Fireteam"))
	UE_DEFINE_GAMEPLAY_TAG(Section, TEXT("Game.Player Filter.Section"))
	UE_DEFINE_GAMEPLAY_TAG(Organization, TEXT("Game.Player Filter.Organization"))
	UE_DEFINE_GAMEPLAY_TAG(All, TEXT("Game.Player Filter.All"))
}

namespace IDTypeTags
{
	UE_DEFINE_GAMEPLAY_TAG(Player, TEXT("Game.ID Type.Player"))
	UE_DEFINE_GAMEPLAY_TAG(AI, TEXT("Game.ID Type.AI"))
	UE_DEFINE_GAMEPLAY_TAG(Organization, TEXT("Game.ID Type.Organization"))
	UE_DEFINE_GAMEPLAY_TAG(Section, TEXT("Game.ID Type.Section"))
	UE_DEFINE_GAMEPLAY_TAG(Fireteam, TEXT("Game.ID Type.Fireteam"))
	UE_DEFINE_GAMEPLAY_TAG(LevelActor, TEXT("Game.ID Type.LevelActor"))
}

namespace ObjectCollisionTypeTags
{
	UE_DEFINE_GAMEPLAY_TAG(None, TEXT("Game.Object Collision Type.None"))
	UE_DEFINE_GAMEPLAY_TAG(Impact, TEXT("Game.Object Collision Type.Impact"))
	UE_DEFINE_GAMEPLAY_TAG(Overlap, TEXT("Game.Object Collision Type.Overlap"))
	UE_DEFINE_GAMEPLAY_TAG(Drag, TEXT("Game.Object Collision Type.Drag"))
	UE_DEFINE_GAMEPLAY_TAG(Roll, TEXT("Game.Object Collision Type.Roll"))
}

namespace SimpleCommsChannelTags
{
	UE_DEFINE_GAMEPLAY_TAG(Global, TEXT("Game.Simple Comms Channel.Global"))
	UE_DEFINE_GAMEPLAY_TAG(Area, TEXT("Game.Simple Comms Channel.Area"))
	UE_DEFINE_GAMEPLAY_TAG(Organization, TEXT("Game.Simple Comms Channel.Organization"))
	UE_DEFINE_GAMEPLAY_TAG(Command, TEXT("Game.Simple Comms Channel.Command"))
	UE_DEFINE_GAMEPLAY_TAG(Section, TEXT("Game.Simple Comms Channel.Section"))
	UE_DEFINE_GAMEPLAY_TAG(Fireteam, TEXT("Game.Simple Comms Channel.Fireteam"))
	UE_DEFINE_GAMEPLAY_TAG(Whisper, TEXT("Game.Simple Comms Channel.Whisper"))
}

namespace MarkerTypeTags
{
	UE_DEFINE_GAMEPLAY_TAG(Self, TEXT("Game.Marker Type.Self"))
	UE_DEFINE_GAMEPLAY_TAG(Organization, TEXT("Game.Marker Type.Organization"))
	UE_DEFINE_GAMEPLAY_TAG(Command, TEXT("Game.Marker Type.Command"))
	UE_DEFINE_GAMEPLAY_TAG(Section, TEXT("Game.Marker Type.Section"))
	UE_DEFINE_GAMEPLAY_TAG(Fireteam, TEXT("Game.Marker Type.Fireteam"))
	UE_DEFINE_GAMEPLAY_TAG(Global, TEXT("Game.Marker Type.Global"))
}

namespace SpectatorViewModeTags
{
	UE_DEFINE_GAMEPLAY_TAG(KillCam, TEXT("Game.Spectator View Mode.KillCam"))
	UE_DEFINE_GAMEPLAY_TAG(FirstPerson, TEXT("Game.Spectator View Mode.First Person"))
	UE_DEFINE_GAMEPLAY_TAG(FirstPersonAsItem, TEXT("Game.Spectator View Mode.First Person As Item"))
	UE_DEFINE_GAMEPLAY_TAG(ThirdPerson, TEXT("Game.Spectator View Mode.Third Person"))
	UE_DEFINE_GAMEPLAY_TAG(ThirdPersonAsItem, TEXT("Game.Spectator View Mode.Third Person As Item"))
	UE_DEFINE_GAMEPLAY_TAG(Fixed, TEXT("Game.Spectator View Mode.Fixed"))
	UE_DEFINE_GAMEPLAY_TAG(NearbyAI, TEXT("Game.Spectator View Mode.Nearby AI"))
}

namespace ActionTypeTags
{
	UE_DEFINE_GAMEPLAY_TAG(Connected, TEXT("Game.Action Type.Connected"))
	UE_DEFINE_GAMEPLAY_TAG(Disconnected, TEXT("Game.Action Type.Disconnected"))
	UE_DEFINE_GAMEPLAY_TAG(Kicked, TEXT("Game.Action Type.Kicked"))
	UE_DEFINE_GAMEPLAY_TAG(Banned, TEXT("Game.Action Type.Banned"))
	UE_DEFINE_GAMEPLAY_TAG(Died, TEXT("Game.Action Type.Died"))
	UE_DEFINE_GAMEPLAY_TAG(Killed, TEXT("Game.Action Type.Killed"))
	UE_DEFINE_GAMEPLAY_TAG(KillAssist, TEXT("Game.Action Type.Kill Assist"))
	UE_DEFINE_GAMEPLAY_TAG(DisabledVehicle, TEXT("Game.Action Type.Disabled Vehicle"))
	UE_DEFINE_GAMEPLAY_TAG(DisabledVehicleAssist, TEXT("Game.Action Type.Disabled Vehicle Assist"))
	UE_DEFINE_GAMEPLAY_TAG(DefendedZone, TEXT("Game.Action Type.Defended Zone"))
	UE_DEFINE_GAMEPLAY_TAG(OccupiedZone, TEXT("Game.Action Type.Occupied Zone"))
	UE_DEFINE_GAMEPLAY_TAG(ControlledZone, TEXT("Game.Action Type.Controlled Zone"))
	UE_DEFINE_GAMEPLAY_TAG(Supressed, TEXT("Game.Action Type.Supressed"))
	UE_DEFINE_GAMEPLAY_TAG(GaveCommand, TEXT("Game.Action Type.Gave Command"))
	UE_DEFINE_GAMEPLAY_TAG(CompletedObjective, TEXT("Game.Action Type.Completed Objective"))
	UE_DEFINE_GAMEPLAY_TAG(CompletedSideMission, TEXT("Game.Action Type.Completed Side Mission"))
	UE_DEFINE_GAMEPLAY_TAG(FoundSpecialItem, TEXT("Game.Action Type.Found Special Item"))
	UE_DEFINE_GAMEPLAY_TAG(MadeSpecialNPCContact, TEXT("Game.Action Type.Made Special NPC Contact"))
	UE_DEFINE_GAMEPLAY_TAG(MadeSpecialNPCAchievement, TEXT("Game.Action Type.Made Special NPC Achievement"))
	UE_DEFINE_GAMEPLAY_TAG(Incapacitated, TEXT("Game.Action Type.Incapacitated"))
	UE_DEFINE_GAMEPLAY_TAG(WipedFireteam, TEXT("Game.Action Type.Wiped Fireteam"))
	UE_DEFINE_GAMEPLAY_TAG(WipedSection, TEXT("Game.Action Type.Wiped Section"))
	UE_DEFINE_GAMEPLAY_TAG(CompletedMission, TEXT("Game.Action Type.Completed Mission"))
	UE_DEFINE_GAMEPLAY_TAG(Pet, TEXT("Game.Action Type.Pet"))
}

namespace RewardCriteriaTags
{
	UE_DEFINE_GAMEPLAY_TAG(Immeadiate, TEXT("Game.Reward Criteria.Immeadiate"))
	UE_DEFINE_GAMEPLAY_TAG(OnAction, TEXT("Game.Reward Criteria.On Action"))
	UE_DEFINE_GAMEPLAY_TAG(AfterLeavingZone, TEXT("Game.Reward Criteria.After Leaving Zone"))
	UE_DEFINE_GAMEPLAY_TAG(AfterObjectiveCompletion, TEXT("Game.Reward Criteria.After Objective Completion"))
	UE_DEFINE_GAMEPLAY_TAG(AfterMissionCompletion, TEXT("Game.Reward Criteria.After Mission Completion"))
	UE_DEFINE_GAMEPLAY_TAG(EndOfGame, TEXT("Game.Reward Criteria.End Of Game"))
	UE_DEFINE_GAMEPLAY_TAG(EndOfGameIfSameLife, TEXT("Game.Reward Criteria.End Of Game If Same Life"))
}

namespace BonusTypeTags
{
	UE_DEFINE_GAMEPLAY_TAG(Flat, TEXT("Game.Bonus Type.Flat"))
	UE_DEFINE_GAMEPLAY_TAG(Multiply, TEXT("Game.Bonus Type.Multiply"))
	UE_DEFINE_GAMEPLAY_TAG(MultiplyTotal, TEXT("Game.Bonus Type.Multiply Total"))
}

namespace ProjectileSonicsTags
{
	UE_DEFINE_GAMEPLAY_TAG(Subsonic, TEXT("Game.Projectile Sonics.Subsonic"))
	UE_DEFINE_GAMEPLAY_TAG(Supersonic, TEXT("Game.Projectile Sonics.Supersonic"))
}

namespace GameStartModeTags
{
	UE_DEFINE_GAMEPLAY_TAG(Headquarters, TEXT("Game.Game Start Mode.Headquarters"))
	UE_DEFINE_GAMEPLAY_TAG(Airdrop, TEXT("Game.Game Start Mode.Airdrop"))
	UE_DEFINE_GAMEPLAY_TAG(Random, TEXT("Game.Game Start Mode.Random"))
}