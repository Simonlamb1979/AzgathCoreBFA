/* ------------------------------------ */
/* AUTHOR   Azgath                      */
/*    FOR   Az'gath Private Server      */
/* ------------------------------------ */

#include "Player.h"
#include "WorldSession.h"
#include "CollectionMgr.h"
#include "Chat.h"

class azgath_achievement_second_mount : public PlayerScript {
private:
    const uint32 explorationsecondAchievement = 13250;

public:
    azgath_achievement_second_mount() : PlayerScript("azgath_achievement_second_mount") {}

    void OnUpdate(Player* player, uint32 /*diff*/) {
        player->CompletedAchievement(explorationsecondAchievement);
            }
};

void AddSC_azgath_achievement_second_mount() {
    new azgath_achievement_second_mount();
}