#include "Define.h"
#include "GossipDef.h"
#include "Item.h"
#include "Language.h"
#include "Player.h"
#include "ScriptedGossip.h"
#include "ScriptMgr.h"
#include "Spell.h"
#include "Chat.h"
#include "DB2Stores.h"
#include "Group.h"
#include "InstanceSaveMgr.h"
#include "InstanceScript.h"
#include "Language.h"
#include "MapManager.h"
#include "ObjectAccessor.h"
#include "ObjectMgr.h"
#include "Player.h"
#include "RBAC.h"
#include "WorldSession.h"
#include "Creature.h"
#include "Map.h"
class npc_instance_reset : public CreatureScript
{
public:
    npc_instance_reset() : CreatureScript("npc_instance_reset")
    {
    }
 
    bool OnGossipHello(Player *player, Creature *creature)
    {
        player->PlayerTalkClass->ClearMenus();
        AddGossipItemFor(player, GOSSIP_ICON_TRAINER, "Je voudrais réinitialiser les instances.", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF + 1);
        SendGossipMenuFor(player, DEFAULT_GOSSIP_MESSAGE, creature->GetGUID());
        return true;
    }
 
   bool OnGossipSelect(Player *player, Creature* creature, uint32 /*sender*/, uint32 action)
    {
       player->PlayerTalkClass->ClearMenus();
       if (!player)
           return true;

       if (action == GOSSIP_ACTION_INFO_DEF + 1)
       {
           uint16 counter = 0;
           uint16 MapId = 0;
           creature->Whisper("Vos instances ont été réinitialisées.", LANG_UNIVERSAL, player);
           for (DifficultyEntry const* difficulty : sDifficultyStore)
           {
               auto binds = player->GetBoundInstances(Difficulty(difficulty->ID));
               if (binds != player->m_boundInstances.end())
               {
                   for (auto itr = binds->second.begin(); itr != binds->second.end();)
                   {
                       InstanceSave* save = itr->second.save;
                       if (itr->first != player->GetMapId() && (!MapId || MapId == itr->first))
                       {
                           player->UnbindInstance(itr, binds);
                           counter++;
                           break;
                       }
                       else
                           ++itr;
                   }
               }
           }
       }
       
       CloseGossipMenuFor(player);
       return true;
   }
};
 
void AddSC_npc_instance_reset()
{
    new npc_instance_reset();
}
