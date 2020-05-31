#pragma once
class IGameEvents
{
public:

	static IGameEvents g_gameEvents;
	static bool g_logGameEventMessages;





	/* 000 */	virtual void EventWriteAchievementEarned(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HaloTitleID, INT32 AchievementID);
	/* 001 */	virtual void EventWriteAshesToAshes(LPWSTR UserID, GUID PlayerSessionID);
	/* 002 */	virtual void EventWriteAssist(LPWSTR UserID, INT32 SectionID, GUID PlayerSessionID, LPWSTR MultiplayerCorrelationID, INT32 GameplayModeID, INT32 DifficultyLevelID, GUID RoundID, INT32 PlayerRoleID, INT32 PlayerWeaponID, INT32 EnemyRoleID, INT32 KillTypeID, float LocationX, float LocationY, float LocationZ, INT32 EnemyWeaponID, LPWSTR HaloTitleID, INT32 MapID, INT32 EnemyClassID, INT32 GameCategoryID, bool MatchMade);
	/* 003 */	virtual void EventWriteAudioLogClaimed(LPWSTR UserID, GUID PlayerSessionID, INT32 AudioLogID);
	/* 004 */	virtual void EventWriteBase(LPWSTR UserID, GUID PlayerSessionID);
	/* 005 */	virtual void EventWriteBetrayal(LPWSTR UserID, INT32 SectionID, GUID PlayerSessionID, LPWSTR MultiplayerCorrelationID, INT32 GameplayModeID, INT32 DifficultyLevelID, GUID RoundID, INT32 PlayerRoleID, INT32 PlayerWeaponID, INT32 EnemyRoleID, INT32 KillTypeID, float LocationX, float LocationY, float LocationZ, INT32 EnemyWeaponID, LPWSTR HaloTitleID, INT32 MapID, INT32 EnemyClassID, INT32 GameCategoryID, bool MatchMade);
	/* 006 */	virtual void EventWriteBIFactControllerSettings(LPWSTR UserID, GUID PlayerSessionID, bool IsGuest, LPWSTR HaloTitleID, INT32 GameCategoryID, INT32 ControllerConfigurationID, bool LookInverted);
	/* 007 */	virtual void EventWriteBIFactDeepLink(LPWSTR UserID, GUID PlayerSessionID);
	/* 008 */	virtual void EventWriteBIFactDeepLinkRecieve(LPWSTR UserID, GUID PlayerSessionID, LPWSTR DeepLinkCorrelationID, LPWSTR DeepLinkURL);
	/* 009 */	virtual void EventWriteBIFactDeepLinkSend(LPWSTR UserID, GUID PlayerSessionID, LPWSTR DeepLinkCorrelationID, LPWSTR DeepLinkURL);
	/* 010 */	virtual void EventWriteBIFactDualWield(LPWSTR UserID, GUID PlayerSessionID, bool IsGuest, LPWSTR HaloTitleID, INT32 GameCategoryID, INT32 LeftWeaponID, INT32 RightWeaponID, FILETIME DualWieldTimeStamp);
	/* 011 */	virtual void EventWriteBIFactGameSession(LPWSTR UserID, GUID PlayerSessionID, FILETIME SessionStartTimeStamp, FILETIME SessionEndTimeStamp, LPWSTR HaloTitleID, FILETIME SubTitleStartTimeStamp, FILETIME SubTitleEndTimeStamp, INT32 GameCategoryID, LPWSTR LocaleID, INT32 MapID, INT32 ArmorID, UINT64 SkullsUsed, LPWSTR HopperID, INT32 PlayerCount, bool Matchmade, INT32 MatchmakingRank, double MatchmakingRating, INT32 MatchmakingXP, bool Won, UINT64 Score, UINT64 TeamScore, INT32 Standing, bool FirstPlace, INT32 Kills, INT32 Deaths, INT32 Assists, INT32 Betrayals, INT32 Suicides);
	/* 012 */	virtual void EventWriteBIFactLoadout(LPWSTR UserID, GUID PlayerSessionID, bool IsGuest, LPWSTR HaloTitleID, INT32 GameCategoryID, INT32 PrimaryWeaponID, INT32 SecondaryWeaponID, INT32 GrenadeID, INT32 ShieldID);
	/* 013 */	virtual void EventWriteBIFactMatchmaking(LPWSTR UserID, GUID PlayerSessionID, bool IsGuest, LPWSTR LobbyID, FILETIME LobbyEntryTimeStamp, bool JoinedMatch, FILETIME JoinMatchTimeStamp, INT32 MatchmakingRank, double MatchmakingRating, INT32 MatchmakingXP, INT32 PartySize, GUID PartyID);
	/* 014 */	virtual void EventWriteBIFactMatchmakingDetails(LPWSTR UserID, GUID PlayerSessionID, INT32 NumPlayersInParty, bool GSRFired, bool BecameActiveInSession, bool ConnectedToPeerGameHost, bool GameStarted, FILETIME LobbyEntryTimeStamp, FILETIME LobbyExitTimeStamp, INT32 ExitReason, LPWSTR GameUniqiueID, bool IsArbiter, bool IsThunderheadGame, INT32 NumPlayers, INT32 NumPreserveSessionTicketsCreated);
	/* 015 */	virtual void EventWriteBIFactMedia(LPWSTR UserID, GUID PlayerSessionID, bool IsGuest, LPWSTR HaloTitleID, FILETIME MediaStartTimeStamp, bool WasSkipped, FILETIME MediaSkipTimeStamp, LPWSTR MediaID);
	/* 016 */	virtual void EventWriteBirdOfPrey(LPWSTR UserID, GUID PlayerSessionID);
	/* 017 */	virtual void EventWriteBitsAndPiecesDestroyed(LPWSTR UserID, GUID PlayerSessionID);
	/* 018 */	virtual void EventWriteBroadcastingAssist(LPWSTR UserID, GUID PlayerSessionID, FILETIME TimeStamp, INT32 CurrentAssists);
	/* 019 */	virtual void EventWriteBroadcastingDeath(LPWSTR UserID, GUID PlayerSessionID, FILETIME TimeStamp, LPWSTR VictimXuid, UINT32 VictimTeamID, LPWSTR KillerXuid, UINT32 KillerTeamID, LPWSTR AssistantXuids, UINT32 DamageReportingModifier, INT32 StockID, INT32 AttachmentIDs, INT32 DamageTypeID, INT32 CurrentDeaths);
	/* 020 */	virtual void EventWriteBroadcastingHeartbeat(LPWSTR UserID, GUID PlayerSessionID, INT64 Heartbeat);
	/* 021 */	virtual void EventWriteBroadcastingKill(LPWSTR UserID, GUID PlayerSessionID, FILETIME TimeStamp, LPWSTR VictimXuid, UINT32 VictimTeamID, LPWSTR KillerXuid, UINT32 KillerTeamID, LPWSTR AssistantXuids, UINT32 DamageReportingModifier, INT32 StockID, INT32 AttachmentIDs, INT32 DamageTypeID, INT32 CurrentKills);
	/* 022 */	virtual void EventWriteBroadcastingMatchEnd(LPWSTR UserID, GUID PlayerSessionID, FILETIME TimeStamp);
	/* 023 */	virtual void EventWriteBroadcastingMatchRoundEnd(LPWSTR UserID, GUID PlayerSessionID, FILETIME TimeStamp);
	/* 024 */	virtual void EventWriteBroadcastingMatchRoundStart(LPWSTR UserID, GUID PlayerSessionID, FILETIME TimeStamp, INT32 RoundNumber);
	/* 025 */	virtual void EventWriteBroadcastingMatchStart(LPWSTR UserID, GUID PlayerSessionID, FILETIME TimeStamp, INT32 MapVariantID, INT32 GameVariantID, LPWSTR PlaylistID);
	/* 026 */	virtual void EventWriteBroadcastingMedal(LPWSTR UserID, GUID PlayerSessionID, FILETIME TimeStamp, INT32 MedalID);
	/* 027 */	virtual void EventWriteBroadcastingPlayerJoined(LPWSTR UserID, GUID PlayerSessionID, FILETIME TimeStamp, INT32 TeamID);
	/* 028 */	virtual void EventWriteBroadcastingPlayerLeft(LPWSTR UserID, GUID PlayerSessionID, FILETIME TimeStamp);
	/* 029 */	virtual void EventWriteBroadcastingPlayerSpawn(LPWSTR UserID, GUID PlayerSessionID, FILETIME TimeStamp);
	/* 030 */	virtual void EventWriteBroadcastingPlayerSwitchedTeams(LPWSTR UserID, GUID PlayerSessionID, FILETIME TimeStamp, INT32 TeamID, LPWSTR WebColor);
	/* 031 */	virtual void EventWriteBroadcastingScore(LPWSTR UserID, GUID PlayerSessionID, INT32 ControllerIndex, FILETIME Timestamp, INT32 CurrentRoundScore, INT32 CurrentTotalScore, INT32 CurrentRoundTeamScore, INT32 CurrentTotalTeamScore);
	/* 032 */	virtual void EventWriteBroadcastingStart(LPWSTR UserID, GUID PlayerSessionID, UINT32 GameType, UINT32 Map, UINT32 TopPlayerRank, LPWSTR PlayerIDs, GUID MatchID, bool PlayerIsCaster, INT64 MatchStartTime);
	/* 033 */	virtual void EventWriteCampaignDifficulty(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HaloTitleID, LPWSTR CampaignDifficulty);
	/* 034 */	virtual void EventWriteChallengeCompleted(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HaloTitleID, INT32 ChallengeID);
	/* 035 */	virtual void EventWriteClassicModeSwitched(LPWSTR UserID, GUID PlayerSessionID, INT32 MapID);
	/* 036 */	virtual void EventWriteCleverGirl(LPWSTR UserID, GUID PlayerSessionID);
	/* 037 */	virtual void EventWriteClueClaimed(LPWSTR UserID, GUID PlayerSessionID, INT32 ClueID);
	/* 038 */	virtual void EventWriteCoopMissionCompleted(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HaloTitleID, INT32 MissionID, INT32 MapID, INT32 MissionScore, bool IronSkullUsed, bool BlackEyeSkullUsed, bool ToughLuckSkullUsed, bool CatchSkullUsed, bool CloudSkullUsed, bool FamineSkullUsed, bool ThunderstormSkullUsed, bool TiltSkullUsed, bool MythicSkullUsed, bool BlindSkullUsed, INT32 DifficultyID);
	/* 039 */	virtual void EventWriteCoopSpartanOpsMissionCompleted(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HaloTitleID, INT32 MapID, INT32 DifficultyID);
	/* 040 */	virtual void EventWriteCompletionCount(LPWSTR UserID, GUID PlayerSessionID, INT32 Count);
	/* 041 */	virtual void EventWriteCustomization(LPWSTR UserID, GUID PlayerSessionID, INT32 Texture0, INT32 Texture1, INT32 Color0, INT32 Color1, INT32 Color2, LPWSTR ServiceID, LPWSTR ClanID, INT32 AvatarID, INT32 NameplateID);
	/* 042 */	virtual void EventWriteDashboardContext(LPWSTR UserID, GUID PlayerSessionID, LPWSTR DashboardContext);
	/* 043 */	virtual void EventWriteDeath(LPWSTR UserID, INT32 SectionID, GUID PlayerSessionID, LPWSTR MultiplayerCorrelationID, INT32 GameplayModeID, INT32 DifficultyLevelID, GUID RoundID, INT32 PlayerRoleID, INT32 PlayerWeaponID, INT32 EnemyRoleID, INT32 KillTypeID, float LocationX, float LocationY, float LocationZ, INT32 EnemyWeaponID, LPWSTR HaloTitleID, INT32 MapID, INT32 EnemyClassID, INT32 GameCategoryID, bool MatchMade, bool HeadShot);
	/* 044 */	virtual void EventWriteDollFound(LPWSTR UserID, GUID PlayerSessionID, INT32 DollID);
	/* 045 */	virtual void EventWriteEliteWin(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HaloTitleID, bool MatchMade);
	/* 046 */	virtual void EventWriteEmblem(LPWSTR UserID, GUID PlayerSessionID, INT32 Texture0, INT32 Texture1, INT32 Color0, INT32 Color1, INT32 Color2);
	/* 047 */	virtual void EventWriteEnemyDefeated(LPWSTR UserID, INT32 SectionID, GUID PlayerSessionID, LPWSTR MultiplayerCorrelationID, INT32 GameplayModeID, INT32 DifficultyLevelID, GUID RoundID, INT32 PlayerRoleID, INT32 PlayerWeaponID, INT32 EnemyRoleID, INT32 KillTypeID, float LocationX, float LocationY, float LocationZ, INT32 EnemyWeaponID, LPWSTR HaloTitleID, INT32 MapID, INT32 EnemyClassID, INT32 GameCategoryID, bool MatchMade, bool HeadShot);
	/* 048 */	virtual void EventWriteFriendsBestedOnHeroLeaderboard(LPWSTR UserID, GUID PlayerSessionID, INT32 LeaderboardID, INT32 LeaderboardRows);
	/* 049 */	virtual void EventWriteGameProgress(LPWSTR UserID, GUID PlayerSessionID, float CompletionPercent);
	/* 050 */	virtual void EventWriteGameVarSaved(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HaloTitleID, INT32 BaseGameCategory, LPWSTR GameVarName);
	/* 051 */	virtual void EventWriteGrenadeStick(LPWSTR UserID, INT32 SectionID, GUID PlayerSessionID, LPWSTR MultiplayerCorrelationID, INT32 GameplayModeID, INT32 DifficultyLevelID, GUID RoundID, INT32 PlayerRoleID, INT32 PlayerWeaponID, INT32 EnemyRoleID, INT32 KillTypeID, float LocationX, float LocationY, float LocationZ, INT32 EnemyWeaponID, INT32 EnemyClassID);
	/* 052 */	virtual void EventWriteHelloNurse(LPWSTR UserID, GUID PlayerSessionID);
	/* 053 */	virtual void EventWriteInGamePresence(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HaloTitle, INT32 CampaignDifficulty, INT32 MultiplayerMap);
	/* 054 */	virtual void EventWriteISeeYou(LPWSTR UserID, GUID PlayerSessionID);
	/* 055 */	virtual void EventWriteJoinability(LPWSTR UserID, GUID PlayerSessionID, bool InGame);
	/* 056 */	virtual void EventWriteLobby(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HaloTitleID, LPWSTR Lobby);
	/* 057 */	virtual void EventWriteMainMenuPresence(LPWSTR UserID, GUID PlayerSessionID, LPWSTR MainMenuPresence);
	/* 058 */	virtual void EventWriteMapVarSaved(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HaloTitleID, INT32 BaseMapID, LPWSTR MapVarName);
	/* 059 */	virtual void EventWriteMatchmakingHopper(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HaloTitleID, LPWSTR MatchmakingHopper);
	/* 060 */	virtual void EventWriteMediaUsage(LPWSTR AppSessionID, LPWSTR AppSessionStartDateTime, UINT32 UserIDType, LPWSTR UserID, LPWSTR SubscriptionTierType, LPWSTR SubscriptionTier, LPWSTR MediaType, LPWSTR ProviderID, LPWSTR ProviderMediaID, LPWSTR ProviderMediaInstanceID, GUID BingID, UINT64 MediaLengthMs, UINT32 MediaControlAction, float PlaybackSpeed, UINT64 MediaPositionMs, UINT64 PlaybackDurationMs, LPWSTR AcquisitionType, LPWSTR AcquisitionContext, LPWSTR AcquisitionContextType, LPWSTR AcquisitionContextID, INT32 PlaybackIsStream, INT32 PlaybackIsTethered, LPWSTR MarketplaceLocation, LPWSTR ContentLocale, float TimeZoneOffset, UINT32 ScreenState);
	/* 061 */	virtual void EventWriteMeldOfferPresented(LPWSTR UserID, GUID PlayerSessionID, GUID OfferGuid, GUID ProductGuid, LPWSTR Page, INT32 SourceTileIndex);
	/* 062 */	virtual void EventWriteMeldOfferResponded(LPWSTR UserID, GUID PlayerSessionID, GUID OfferGuid, GUID ProductGuid, INT32 UpsellOutcome);
	/* 063 */	virtual void EventWriteMeldPageAction(LPWSTR UserID, GUID PlayerSessionID, INT32 ActionTypeID, INT32 ActionInputMethodID, LPWSTR Page, LPWSTR TemplateID, LPWSTR DestinationPage, LPWSTR Content, INT32 SourceTileIndex, INT32 SourceTileX, INT32 SourceTileY, INT32 SourceTileWidth, INT32 SourceTileHeight);
	/* 064 */	virtual void EventWriteMeldPageView(LPWSTR UserID, GUID PlayerSessionID, LPWSTR Page, LPWSTR RefererPage, INT32 PageTypeID, LPWSTR PageTags, LPWSTR TemplateID, LPWSTR Content, LPWSTR FilterContext, INT32 FilterDirection);
	/* 065 */	virtual void EventWriteMissionCompleted(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HaloTitleID, INT32 MapID, INT32 GameCategoryID, bool Coop, UINT64 TimePlayedMS, UINT64 DatePlayedUTC, INT32 DifficultyID, UINT64 MissionScore64, UINT64 SkullUsedFlags, INT32 NumPlayers, LPWSTR PlayerSectionStats, INT32 Kills, float Multiplier, INT32 Penalties, float SkullMultiplier, INT32 TotalSoloMissionsComplete, INT32 TotalCoopMissionsComplete);
	/* 066 */	virtual void EventWriteMortardomWraithsKilled(LPWSTR UserID, GUID PlayerSessionID);
	/* 067 */	virtual void EventWriteMultiplayerGameEngine(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HaloTitleID, LPWSTR MultiplayerGameEngine);
	/* 068 */	virtual void EventWriteMultiplayerMap(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HaloTitleID, LPWSTR MultiplayerMap);
	/* 069 */	virtual void EventWriteMultiplayerRoundEnd(LPWSTR UserID, GUID RoundID, INT32 SectionID, GUID PlayerSessionID, LPWSTR MultiplayerCorrelationID, INT32 GameplayModeID, INT32 MatchTypeID, INT32 DifficultyLevelID, float TimeInSeconds, INT32 ExitStatusID);
	/* 070 */	virtual void EventWriteMultiplayerRoundStart(LPWSTR UserID, GUID RoundID, INT32 SectionID, GUID PlayerSessionID, LPWSTR MultiplayerCorrelationID, INT32 GameplayModeID, INT32 MatchTypeID, INT32 DifficultyLevelID);
	/* 071 */	virtual void EventWriteNappersCaught(LPWSTR UserID, GUID PlayerSessionID);
	/* 072 */	virtual void EventWriteNewsStoryRead(LPWSTR UserID, GUID PlayerSessionID, LPWSTR StoryID);
	/* 073 */	virtual void EventWriteObjectiveEnd(LPWSTR UserID, INT32 SectionID, GUID PlayerSessionID, LPWSTR MultiplayerCorrelationID, INT32 GameplayModeID, INT32 DifficultyLevelID, INT32 ObjectiveID, INT32 ExitStatusID);
	/* 074 */	virtual void EventWriteObjectiveStart(LPWSTR UserID, INT32 SectionID, GUID PlayerSessionID, LPWSTR MultiplayerCorrelationID, INT32 GameplayModeID, INT32 DifficultyLevelID, INT32 ObjectiveID);
	/* 075 */	virtual void EventWritePageAction(LPWSTR UserID, GUID PlayerSessionID, INT32 ActionTypeID, INT32 ActionInputMethodID, LPWSTR Page, LPWSTR TemplateID, LPWSTR DestinationPage, LPWSTR Content);
	/* 076 */	virtual void EventWritePageView(LPWSTR UserID, GUID PlayerSessionID, LPWSTR Page, LPWSTR RefererPage, INT32 PageTypeID, LPWSTR PageTags, LPWSTR TemplateID, LPWSTR Content);
	/* 077 */	virtual void EventWritePhantomHunter(LPWSTR UserID, GUID PlayerSessionID);
	/* 078 */	virtual void EventWritePigsCanFly(LPWSTR UserID, GUID PlayerSessionID);
	/* 079 */	virtual void EventWritePlayerCheckedInToday(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HaloTitleID);
	/* 080 */	virtual void EventWritePlayerDefeated(LPWSTR UserID, INT32 SectionID, GUID PlayerSessionID, LPWSTR MultiplayerCorrelationID, INT32 GameplayModeID, INT32 DifficultyLevelID, GUID RoundID, INT32 PlayerRoleID, INT32 PlayerWeaponID, INT32 EnemyRoleID, INT32 EnemyWeaponID, float LocationX, float LocationY, float LocationZ);
	/* 081 */	virtual void EventWritePlayerGameResults(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HaloTitleID, INT32 GameIndex, INT32 GameIndexByCategory, INT32 GameIndexByTitle, INT32 GameIndexByTitleCategory, INT32 MapID, INT32 GameCategoryID, bool MatchMade, bool Won, UINT64 TimePlayedMS, UINT64 DatePlayedUTC, UINT64 Score64, INT32 Standing, bool FirstPlace, INT32 MedalCount, INT32 Kills, INT32 Deaths, INT32 Assists, INT32 HeadShots, INT32 MostKillsInARow, LPWSTR CustomStat1ID, INT32 CustomStat1, LPWSTR CustomStat2ID, INT32 CustomStat2, LPWSTR CustomStat3ID, INT32 CustomStat3, LPWSTR CustomStat4ID, INT32 CustomStat4, GUID MatchID);
	/* 082 */	virtual void EventWritePlayerGameResultsDamageStat(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HaloTitleID, INT32 GameIndex, INT32 MapID, bool MatchMade, INT32 DamageReportingType, INT32 DamageStatisticType, INT32 DamageCount, INT32 GameCategoryID);
	/* 083 */	virtual void EventWritePlayerGameResultsGriefingStat(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HaloTitleID, INT32 GameIndex, INT32 MapID, bool MatchMade, float Betrayals, float ShieldDamage, float BodyDamage, float BetrayalPenalty, float ShieldDamagePenalty, float BodyDamagePenalty);
	/* 084 */	virtual void EventWritePlayerGameResultsGriefingStats(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HaloTitleID, INT32 GameIndex, INT32 MapID, bool MatchMade, float Betrayals, float ShieldDamage, float BodyDamage, float BetrayalPenalty, float ShieldDamagePenalty, float BodyDamagePenalty);
	/* 085 */	virtual void EventWritePlayerGameResultsInterestStats(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HaloTitleID, INT32 GameCategoryID, INT32 GameIndex, INT32 MapID, bool MatchMade, INT32 OrdnanceDrops, INT32 OrdnanceStrikes, UINT64 TimeMSDriven, INT32 UnitsDriven, UINT64 TimeMSPiloted, INT32 UnitsPiloted, UINT64 TimeMSPassenger, INT32 UnitsMovedPassenger, UINT64 TimeMSOnFoot, INT32 UnitsMovedOnFoot, INT32 DriverAssists, INT32 ArmorAbilityUseJetpack, INT32 ArmorAbilityUseHologram, INT32 ArmorAbilityUseReflectiveShield, INT32 ArmorAbilityUseActiveCamo, INT32 ArmorAbilityUseThrusterPack, INT32 ArmorAbilityUseAutoTurret, INT32 ArmorAbilityUseXRay);
	/* 086 */	virtual void EventWritePlayerGameResultsMedal(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HaloTitleID, INT32 GameIndex, INT32 MapID, bool MatchMade, INT32 MedalType, INT32 MedalCount);
	/* 087 */	virtual void EventWritePlayerSessionEnd(LPWSTR UserID, GUID PlayerSessionID, LPWSTR MultiplayerCorrelationID, INT32 GameplayModeID, INT32 DifficultyLevelID, INT32 ExitStatusID);
	/* 088 */	virtual void EventWritePlayerSessionPause(LPWSTR UserID, GUID PlayerSessionID, LPWSTR MultiplayerCorrelationID);
	/* 089 */	virtual void EventWritePlayerSessionResume(LPWSTR UserID, GUID PlayerSessionID, LPWSTR MultiplayerCorrelationID, INT32 GameplayModeID, INT32 DifficultyLevelID);
	/* 090 */	virtual void EventWritePlayerSessionStart(LPWSTR UserID, GUID PlayerSessionID, LPWSTR MultiplayerCorrelationID, INT32 GameplayModeID, INT32 DifficultyLevelID);
	/* 091 */	virtual void EventWritePlayerSpawned(LPWSTR UserID, INT32 SectionID, GUID PlayerSessionID, LPWSTR MultiplayerCorrelationID, INT32 GameplayModeID, INT32 DifficultyLevelID, GUID RoundID, INT32 PlayerRoleID, float LocationX, float LocationY, float LocationZ);
	/* 092 */	virtual void EventWritePlaylistCompleted(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HaloTitleID, UINT32 PlaylistID, UINT64 Score64, UINT64 TimeMS, INT32 Penalties, LPWSTR MissionStats, bool IsCoop);
	/* 093 */	virtual void EventWritePlaylistProgress(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HaloTitleID, INT32 PlaylistID, INT32 NumMapsCompleted, UINT64 Score64, bool IsCoop, INT32 NumPlayers, bool ShouldPostTime, UINT64 TotalPlayListTimeMS);
	/* 094 */	virtual void EventWriteRankedStatsDNFInfo(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HopperName, double FinishesOverStarts, INT32 FinishesMinusStarts, INT32 FinishesPlusPenaltiesMinusStarts, double FinishesPlusPenaltiesOverStarts);
	/* 095 */	virtual void EventWriteRankedStatsOverride(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HopperName, double Rating, double Variance, INT32 Halo2Level, INT32 Halo2XP, bool IsRanked);
	/* 096 */	virtual void EventWriteRankedStatsPenalty(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HopperName, INT32 NumPenaltiesApplied);
	/* 097 */	virtual void EventWriteRankedStatsUpdate(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HopperName, double Rating, double Variance, INT32 Halo2Level, INT32 Halo2XP, bool IsRanked, bool PenaltyApplied);
	/* 098 */	virtual void EventWriteRankedUpSpartanIv(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HaloTitleID, INT32 SpartanIvRank, INT32 SpecialisationType);
	/* 099 */	virtual void EventWriteRealtimeFlagCaptured(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HaloTitleID, INT32 MapID, bool MatchMade);
	/* 100 */	virtual void EventWriteRealtimeMedal(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HaloTitleID, INT32 MapID, INT32 GameCategoryID, INT32 GameMode, bool MatchMade, INT32 MedalType, INT32 MedalCount);
	/* 101 */	virtual void EventWriteRealtimePilotedVehicle(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HaloTitleID, INT32 MapID, bool MatchMade, INT32 VehicleID, UINT64 TimeMS, INT32 Distance);
	/* 102 */	virtual void EventWriteRivalID(LPWSTR UserID, GUID PlayerSessionID, INT64 RivalID);
	/* 103 */	virtual void EventWriteSectionEnd(LPWSTR UserID, INT32 SectionID, GUID PlayerSessionID, LPWSTR MultiplayerCorrelationID, INT32 GameplayModeID, INT32 DifficultyLevelID, INT32 ExitStatusID, INT32 MissionID);
	/* 104 */	virtual void EventWriteSectionStart(LPWSTR UserID, INT32 SectionID, GUID PlayerSessionID, LPWSTR MultiplayerCorrelationID, INT32 GameplayModeID, INT32 DifficultyLevelID, INT32 MissionID);
	/* 105 */	virtual void EventWriteSectionStats(LPWSTR UserID, GUID PlayerSessionID, INT32 MissionID, INT32 SectionID, INT32 SectionOrdinal, float ScoreWithoutTimeBonus, float ScoreWithTimeBonus, float TimeInSeconds);
	/* 106 */	virtual void EventWriteSessionSizeUpdate(LPWSTR UserID, GUID PlayerSessionID, INT32 SessionSize, INT32 SessionSizeMax);
	/* 107 */	virtual void EventWriteSizeIsEverything(LPWSTR UserID, GUID PlayerSessionID);
	/* 108 */	virtual void EventWriteSkeetShooter(LPWSTR UserID, GUID PlayerSessionID);
	/* 109 */	virtual void EventWriteSkullClaimed(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HaloTitleID, INT32 SkullID, INT32 DifficultyID);
	/* 110 */	virtual void EventWriteSoloMissionCompleted(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HaloTitleID, INT32 MapID, INT32 DifficultyID, INT32 MissionScore, bool IronSkullUsed, bool BlackEyeSkullUsed, bool ToughLuckSkullUsed, bool CatchSkullUsed, bool CloudSkullUsed, bool FamineSkullUsed, bool ThunderstormSkullUsed, bool TiltSkullUsed, bool MythicSkullUsed, bool BlindSkullUsed);
	/* 111 */	virtual void EventWriteSoloSpartanOpsMissionCompleted(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HaloTitleID, INT32 MapID, INT32 DifficultyID);
	/* 112 */	virtual void EventWriteSpartanOpsMissionCompleted(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HaloTitleID, INT32 MapID, INT32 MissionID, INT32 DifficultyID, bool IsCoop);
	/* 113 */	virtual void EventWriteSupercombine(LPWSTR UserID, INT32 SectionID, GUID PlayerSessionID, LPWSTR MultiplayerCorrelationID, INT32 GameplayModeID, INT32 DifficultyLevelID, GUID RoundID, INT32 PlayerRoleID, INT32 PlayerWeaponID, INT32 EnemyRoleID, INT32 KillTypeID, float LocationX, float LocationY, float LocationZ, INT32 EnemyWeaponID, INT32 EnemyClassID);
	/* 114 */	virtual void EventWriteSurvivalSpace(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HaloTitleID, LPWSTR SurvivalSpace);
	/* 115 */	virtual void EventWriteTerminalFound(LPWSTR UserID, GUID PlayerSessionID, INT32 TerminalID);
	/* 116 */	virtual void EventWriteTerminalID(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HaloTitleID, INT32 SkullID, INT32 DifficultyID);
	/* 117 */	virtual void EventWriteTicketsEarned(LPWSTR UserID, GUID PlayerSessionID, INT32 TicketCount);
	/* 118 */	virtual void EventWriteTitleCompleted(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HaloTitleID);
	/* 119 */	virtual void EventWriteTitleLaunched(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HaloTitleID);
	/* 120 */	virtual void EventWriteValhallaSign(LPWSTR UserID, GUID PlayerSessionID, INT32 SignID);
	/* 121 */	virtual void EventWriteViewOffer(LPWSTR UserID, GUID PlayerSessionID, GUID OfferGuid, GUID ProductGuid);
	/* 122 */	virtual void EventWriteVIPStatusEarned(LPWSTR UserID, GUID PlayerSessionID);
	/* 123 */	virtual void EventWriteWhatAboutTanksDestroyed(LPWSTR UserID, GUID PlayerSessionID);
	/* 124 */	virtual void EventWriteWonWarGame(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HaloTitleID);
	/* 125 */	virtual void EventWriteZanzibarSign(LPWSTR UserID, GUID PlayerSessionID, INT32 SignID);
	/* 126 */	virtual void EventWriteFirefightGameResults(LPWSTR UserID, GUID PlayerSessionID, LPWSTR HaloTitleID, bool MatchMade, UINT64 TimePlayedMS, UINT32 Kills, UINT32 MostKillsInARow, UINT32 SetsCompleted, UINT32 WavesCompleted, UINT32 GeneratorsDestroyed);
	/* 127 */	virtual void EventWriteEnemyDefeated_0(); // probably zombie defeated as these are in alphabetical order
	/* 128 */	virtual void Member128();
	/* 129 */	virtual void Member129();
	/* 130 */	virtual void Member130();
	/* 131 */	virtual void Member131();
	/* 132 */	virtual void Member132();
	/* 133 */	virtual void Member133();
	/* 134 */	virtual INT64 Member134(INT64);
	/* 135 */	virtual void Member135();
	/* 136 */	virtual LPGUID GetSessionID();
	/* 137 */	virtual void Member137();
	/* 138 */	virtual void CheckpointSaved();
	/* 139 */	virtual void Member139();

	struct __declspec(align(8)) UnknownType
	{
		QWORD qword0;
		QWORD* qword1;
		QWORD* qword2;
		DWORD dword0;
		DWORD dword1;
		QWORD qword4;
		QWORD* qword5;
		QWORD* qword6;
		DWORD dword2;
		DWORD dword3;
		DWORD dword4;
		DWORD dword5;
	};

	_WORD word0;
	_WORD word1;
	GUID playerSessionId;
	__unaligned __declspec(align(1)) _QWORD qword0;
	__unaligned __declspec(align(1)) _QWORD qword1;
	__unaligned __declspec(align(1)) _QWORD qword2;
	__unaligned __declspec(align(1)) _QWORD qword3;
	__unaligned __declspec(align(1)) _QWORD qword4;
	__unaligned __declspec(align(1)) _QWORD qword5;
	__unaligned __declspec(align(1)) _QWORD qword6;
	__unaligned __declspec(align(1)) _QWORD qword7;
	_DWORD dword0;
	_DWORD dword1;
	_DWORD dword2;
	_RTL_CRITICAL_SECTION rtlCriticalSection;
	_QWORD qword8;
	UnknownType unknownStruct;
	_QWORD qword9;
	_QWORD qwordA;
	_QWORD qwordB;


};


/* functions defs also in `ecellcategory_services.bond`
virtual void ConnectedToLobbyHost(GUID MatchmakingAttemptId, GUID MpsdId);
virtual void ControlSchemeChanged(GUID MatchId, uint64 PlayerXuid, int32 ControlScheme);
virtual void CoopMissionCompleted(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId, int32 MissionId, int32 MapId, int32 MissionScore, bool IronSkullUsed, bool BlackEyeSkullUsed, bool ToughLuckSkullUsed, bool CatchSkullUsed, bool CloudSkullUsed, bool FamineSkullUsed, bool ThunderstormSkullUsed, bool TiltSkullUsed, bool MythicSkullUsed, bool BlindSkullUsed, int32 DifficultyId);
virtual void CoopSpartanOpsMissionCompleted(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId, int32 MapId, int32 DifficultyId);
virtual void GameplayEnd(GUID MatchId);
virtual void GameplayStart(GUID MatchId);
virtual void GraphicsConfiguration(int32 GpuDeviceId, std::string GpuName, std::string GpuVendor, std::string GpuAdapterDescription, std::string GpuDriverName, std::string GpuDriverVersion, int64 DedicatedVideoMemoryMB, int64 ShaderSystemMemory, int32 MonitorResolutionX, int32 MonitorResolutionY, std::string GpuNodeCount, std::string MonitorHdrCapabilities, bool IsHdr, int32 MonitorIndex, std::string MonitorModel);
virtual void GraphicsConfigurationUE(int32 GpuVendorId, int32 GpuDeviceId, int32 GpuDeviceRevision, std::string GpuVendor, std::string GpuAdapterDescription, std::string GpuDriverVersion, std::string GpuInternalDriverVersion, std::string GpuDriverDate, int64 DedicatedVideoMemoryMB, int32 MonitorResolutionX, int32 MonitorResolutionY, int32 MonitorDPI, std::string MonitorName, bool SupportsHdr, bool IsHdr, int32 DesktopResolutionX, int32 DesktopResolutionY, int32 MonitorCount);
virtual void HitchDetected(float BeforeFrameTime, float AfterFrameTime);
virtual void HostMigration(GUID MatchId, GUID PriorMatchId, GUID OriginalMatchId, int32 HostMigrationReasonId);
virtual void InstallState(int32 InstallStateIndex, uint32 ChunkId);
virtual void LogMessage(GUID LogSessionId, wchar_t* Category, wchar_t* Message);
virtual void MatchEnd(GUID MatchId, int32 EndReasonId);
virtual void MatchmakingStateChange(GUID MatchmakingAttemptId, std::string HopperName, GUID MpsdId, std::string OldStateName, std::string NewStateName, int32 RetryIndex, int32 ErrorId, int32 TimeFromPreviousInSeconds, int32 PartyStateIndex, int32 InstallStateIndex, GUID MatchId, std::string HopperStatName, bool IsMixTape);
virtual void MatchStart(GUID MatchId, std::string HopperName, int32 EngineTitleId, int32 GameBaseVariantId, wchar_t* GameVariantName, int32 MapId, std::string MapName, int32 CampaignDifficultyIndex, std::string CampaignSkulls, GUID PriorMatchId, GUID OriginalMatchId, int32 MatchTypeId, uint64 GameVariantHash, wchar_t* MapVariantName, uint64 MapVariantHash, std::string HopperStatName, int32 RewardsMatchType, std::string ClearanceId);
virtual void MixTapeParameters(GUID MatchmakingAttemptId, std::string MixTapeParams);
virtual void PartyStateChange(GUID MpsdId, uint64 PlayerXuid, bool IsFireteamLeader, int32 PartyStateIndex, int32 PlayerTypeId, bool IsPosseMember);
virtual void PerformanceSummary(GUID MatchId, float AverageFPS, std::vector<uint32> FrameRateBuckets, uint32 AverageMemoryUsedBytes, double AverageCpuLoadPercent, bool IsCinematic, uint64 AverageMemoryUsedBytesV2);
virtual void PerformanceSummaryEx(GUID MatchId, float AverageFPS, std::vector<uint32> FrameRateBuckets, uint64 AverageMemoryUsedBytes, double AverageCpuLoadPercent, uint32 MonitorIndex, uint32 MaxResolutionX, uint32 MaxResolutionY, uint32 AverageResolutionX, uint32 AverageResolutionY, bool IsWindowed);
virtual void PlayerJoinedMatch(uint64 PlayerXuid, GUID MatchId, int32 TeamId, bool IsJip, int32 PlayerId);
virtual void PlayerLeftMatch(GUID MatchId, int32 PlayerLeftReasonId, int32 PlayerId);
virtual void PlayerMatchSummary(uint64 PlayerXuid, GUID MatchId, int32 TeamId, bool IsJoinInProgress, int32 PlayerId, uint32 MatchDurationInSeconds, uint32 AveragePlayerLifetime, uint32 PlayerRank, int32 PlayerScore, uint32 PlayerKills, uint32 PlayerDeaths, uint32 PlayerHeadshotKills, int32 TeamRank, int32 TeamScore, bool IsDnf, int32 PlayerMatchDurationInSeconds, int32 MatchOutcomeId, std::vector<std::string> WeaponKillCount, std::vector<std::string> EnemiesKilled, std::vector<std::string> DeathSources, std::vector<std::string> MedalsEarned, int64 LevelsReached, std::string EventCounts);
virtual void PlayerStartingRankedStats(uint64 PlayerXuid, GUID MatchId, double StartingRating);
virtual void PlayerTeamChanged(uint64 PlayerXuid, int32 TeamId, int32 OldTeamId, int32 PlayerId);
virtual void PostMatchMmrUpdate(uint64 PlayerXuid, int32 PlayerId, double MmrRating, GUID MatchId);
virtual void SelectedLobbyHost(GUID MatchmakingAttemptId, GUID MpsdId, GUID MatchId);
virtual void SessionMetrics(std::string SessionTag, std::string Json);
virtual void SystemConfiguration(std::string OperatingSystemVersion, std::string ProcessorVendor, std::string ProcessorBrand, int64 SystemMemoryMB, int32 PhysicalCpuCount, int32 LogicalCpuCount);
virtual void TeamMatchSummary(GUID MatchId, int32 TeamId, int32 TeamRank, int32 TeamScore, int32 MatchOutcomeId);
virtual void TelemetrySessionStart(std::string MachineName, std::string BuildConfiguration, int32 ApplicationTypeId, bool IsThunderhead, std::string BuildVersion, int32 BuildChangelist, std::string BuildBranch, uint64 BuildDateTime, std::string CommandLine, wchar_t* SandboxId, std::string ExecutionPlatform, std::string SessionTag, int32 BuildSku);
virtual void UserEngaged(uint64 PlayerXuid, wchar_t* GamerTag);
*/