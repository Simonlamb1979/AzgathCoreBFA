/* ------------------------------------ */
/* AUTHOR   Azgath                      */
/*    FOR   Az'gath Private Server      */
/* ------------------------------------ */

#include "Player.h"
#include "WorldSession.h"
#include "CollectionMgr.h"
#include "Chat.h"

class azgath_achievement_battlepet : public PlayerScript {
private:
	const uint32 battlepetAchievementraiseapetlevel_3 = 7433;
	const uint32 battlepetAchievementraiseapetlevel_5 = 6566;

public:
	azgath_achievement_battlepet() : PlayerScript("azgath_achievement_battlepet") {}

	void OnUpdate(Player* player, uint32 /*diff*/) {
		player->CompletedAchievement(battlepetAchievementraiseapetlevel_3);
		player->CompletedAchievement(battlepetAchievementraiseapetlevel_5);
	}
};

void AddSC_azgath_achievement_battlepet() {
	new azgath_achievement_battlepet();
}