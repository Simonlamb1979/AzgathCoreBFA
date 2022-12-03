/* ------------------------------------ */
/* AUTHOR   Azgath                      */
/*    FOR   Az'gath Private Server      */
/* ------------------------------------ */

#include "Player.h"
#include "WorldSession.h"
#include "CollectionMgr.h"
#include "Chat.h"

class azgath_achievement_third_mount : public PlayerScript {
private:
	const uint32 explorationthirdAchievement = 12556;
	const uint32 explorationthirdbisAchievement = 12558;
	const uint32 explorationthirdAchievement1 = 12561;
	const uint32 explorationthirdAchievement2 = 12557;
	const uint32 explorationthirdAchievement3 = 12559;
	const uint32 explorationthirdAchievement4 = 12560;
	const uint32 explorationthirdAchievement5 = 12947;
	const uint32 explorationthirdAchievement6 = 13144;
	const uint32 explorationthirdAchievement7 = 12510;
	const uint32 explorationthirdAchievement8 = 12988;
	const uint32 explorationthirdAchievement9 = 12593;
	const uint32 explorationthirdAchievement10 = 12473;
	const uint32 explorationthirdAchievement11 = 12497;
	const uint32 explorationthirdAchievement12 = 12496;
	const uint32 explorationthirdAchievement13 = 13250;
	const uint32 explorationthirdAchievement14 = 12989;
	const uint32 explorationthirdAchievement15 = 13712;
	const uint32 explorationthirdAchievement16 = 13776;

public:
	azgath_achievement_third_mount() : PlayerScript("azgath_achievement_third_mount") {}

	void OnUpdate(Player* player, uint32 /*diff*/) {
		player->CompletedAchievement(explorationthirdAchievement);
		player->CompletedAchievement(explorationthirdbisAchievement);
		player->CompletedAchievement(explorationthirdAchievement1);
		player->CompletedAchievement(explorationthirdAchievement2);
		player->CompletedAchievement(explorationthirdAchievement3);
		player->CompletedAchievement(explorationthirdAchievement4);
		player->CompletedAchievement(explorationthirdAchievement5);
		player->CompletedAchievement(explorationthirdAchievement6);
		player->CompletedAchievement(explorationthirdAchievement7);
		player->CompletedAchievement(explorationthirdAchievement8);
		player->CompletedAchievement(explorationthirdAchievement9);
		player->CompletedAchievement(explorationthirdAchievement10);
		player->CompletedAchievement(explorationthirdAchievement11);
		player->CompletedAchievement(explorationthirdAchievement12);
		player->CompletedAchievement(explorationthirdAchievement13);
		player->CompletedAchievement(explorationthirdAchievement14);
		player->CompletedAchievement(explorationthirdAchievement15);
		player->CompletedAchievement(explorationthirdAchievement16);
	}
};

void AddSC_azgath_achievement_third_mount() {
	new azgath_achievement_third_mount();
}