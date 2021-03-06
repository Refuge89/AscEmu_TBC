/*
 * AscEmu Framework based on ArcEmu MMORPG Server
 * Copyright (C) 2014-2015 AscEmu Team <http://www.ascemu.org/>
 * Copyright (C) 2008 <http://www.ArcEmu.org/>
 * Copyright (C) 2005-2007 Ascent Team
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __STDAFX_H
#define __STDAFX_H

#include "WorldConf.h"


#define DEBUG_LOG(...) sLog.Debug("DEBUG_LOG", __VA_ARGS__)

#include "Definitions.h"

#include <cstring>
#include <cstdlib>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include <fstream>

#ifdef WIN32
#include <array>
#else
#include <tr1/array>
#endif

#include "../shared/Common.h"
#include "../shared/MersenneTwister.h"
#include "../shared/WorldPacket.h"
#include "../shared/Log.h"
#include "../shared/ByteBuffer.h"
#include "../shared/StackBuffer.h"
#include "../shared/Config/ConfigEnv.h"
#include "../shared/crc32.h"
#include "../shared/LocationVector.h"

extern SERVER_DECL SessionLogWriter* Anticheat_Log;
extern SERVER_DECL SessionLogWriter* GMCommand_Log;
extern SERVER_DECL SessionLogWriter* Player_Log;

#define sCheatLog (*Anticheat_Log)
#define sGMLog (*GMCommand_Log)
#define sPlrLog (*Player_Log)

//#include <zlib.h>

#include "Database/DatabaseEnv.h"
#include "DBC/DBCStores.h"
#include "Database/dbcfile.h"

#include <Network/Network.h>

#include "../shared/Auth/MD5.h"
#include "../shared/Auth/BigNumber.h"
#include "../shared/Auth/Sha1.h"
#include "../shared/Auth/WowCrypt.h"
#include "../shared/CrashHandler.h"
#include "../shared/FastQueue.h"
#include "../shared/CircularQueue.h"
#include "../shared/Threading/RWLock.h"

#include "../shared/ascemu_getopt.h"

#include "Movement/MovementCommon.hpp"
#include "WUtil.h"

#include "UpdateFields.h"
#include "UpdateMask.h"
#include "Opcodes.h"

#ifdef CLUSTERING
#include "../arcemu-realmserver/WorkerOpcodes.h"
#endif

#include "Packets.h"

#include "CallBack.h"
#include "WordFilter.h"
#include "EventMgr.h"
#include "EventableObject.h"
#include "Object.h"
#include "LootMgr.h"
#include "Unit.h"

//VMAP
#include "ModelInstance.h"
#include "WorldModel.h"
#include "MapTree.h"
#include "BIH.h"
#include "VMapFactory.h"
#include "VMapManager2.h"
#include "VMapDefinitions.h"

#include "AddonMgr.h"
#include "AIInterface.h"
#include "AreaTrigger.h"
#include "BattlegroundMgr.h"
#include "AlteracValley.h"
#include "ArathiBasin.h"
#include "EyeOfTheStorm.h"
#include "CellHandler.h"
#include "Chat.h"
#include "Corpse.h"
#include "Quest.h"
#include "QuestMgr.h"
#include "Creature.h"
#include "DynamicObject.h"
#include "GameObject.h"
#include "Group.h"
#include "Guild.h"
#include "HonorHandler.h"
#include "ItemPrototype.h"
#include "Item.h"
#include "Container.h"
#include "AuctionHouse.h"
#include "AuctionMgr.h"
#include "LfgMgr.h"
#include "MailSystem.h"
#include "Map.h"
#include "MapCell.h"
#include "TerrainMgr.h"
#include "MiscHandler.h"
#include "NameTables.h"
#include "NPCHandler.h"
#include "Pet.h"
#include "WorldSocket.h"
#include "WorldSession.h"
#include "MapMgr.h"
#include "MapScriptInterface.h"
#include "Player.h"
#include "faction.h"
#include "Skill.h"
#include "SkillNameMgr.h"
#include "SpellNameHashes.h"
#include "Spell.h"
#include "SpellAuras.h"
#include "TaxiMgr.h"
#include "TransporterHandler.h"
#include "WarsongGulch.h"
#include "WeatherMgr.h"
#include "World.h"
#include "ItemInterface.h"
#include "Stats.h"
#include "WorldCreator.h"
#include "ObjectMgr.h"
#include "CThreads.h"
#include "ScriptMgr.h"
#include "Channel.h"
#include "ChannelMgr.h"
#include "ArenaTeam.h"
#include "Arenas.h"
#include "LogonCommClient.h"
#include "LogonCommHandler.h"
#include "MainServerDefines.h"
#include "WorldRunnable.h"
#include "Storage.h"
#include "ObjectStorage.h"
#include "DatabaseCleaner.h"
#include "DayWatcherThread.h"
#include "CommonScheduleThread.h"
#include "VoiceChatHandler.h"
#include "LocalizationMgr.h"

#ifdef CLUSTERING
#include "WorkerServerClient.h"
#include "ClusterInterface.h"
#endif

#include "CollideInterface.h"
#include "Master.h"
#include "BaseConsole.h"
#include "CConsole.h"
//#define COLLECTION_OF_UNTESTED_STUFF_AND_TESTERS 1
#include "SpeedDetector.h"
//#define PVP_REALM_MEANS_CONSTANT_PVP
#include "BufferPools/BufferPools.h"
#include "ProcCondHandler.h"

#include "MapManagement/MapManagementGlobals.hpp"

#endif
