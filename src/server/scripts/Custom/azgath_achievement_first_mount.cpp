/* ------------------------------------ */
/* AUTHOR   Azgath                      */
/*    FOR   Az'gath Private Server      */
/* ------------------------------------ */

#include "Player.h"
#include "WorldSession.h"
#include "CollectionMgr.h"
#include "Chat.h"

class azgath_achievement_first_mount : public PlayerScript {
private:
    const uint32 explorationfirstAchievement = 12989;

public:
    azgath_achievement_first_mount() : PlayerScript("azgath_achievement_first_mount") {}

    void OnUpdate(Player* player, uint32 /*diff*/) {
        player->CompletedAchievement(explorationfirstAchievement);
            }
};

void AddSC_azgath_achievement_first_mount() {
    new azgath_achievement_first_mount();
}