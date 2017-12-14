-- 
SET @Event:=51;
SET @OGUID:=85097;
SET @CGUID = 87999;
 
DELETE FROM `gameobject` WHERE `guid` BETWEEN @OGUID+0 AND @OGUID+49;
INSERT INTO `gameobject` (`guid`,`id`,`map`,`spawnMask`,`phaseMask`,`position_x`,`position_y`,`position_z`,`orientation`,`rotation0`,`rotation1`,`rotation2`,`rotation3`,`spawntimesecs`,`animprogress`,`state`, `VerifiedBuild`) VALUES 
(@OGUID+0, 195063, 0, 1, 1, -9331.52, 182.493, 61.6, 0, 0, 0, 0, 1, 180, 100, 1, 0),
(@OGUID+1, 195063, 0, 1, 1, -9323.89, 179.863, 64.6421, 0, 0, 0, 0, 1, 180, 100, 1, 0),
(@OGUID+2, 182807, 0, 1, 1, -9326.85, 170.807, 62.8254, 0, 0, 0, 0, 1, 180, 100, 1, 0),
(@OGUID+3, 182807, 0, 1, 1, -9335.46, 175.405, 61.6072, 0, 0, 0, 0, 1, 180, 100, 1, 0),
(@OGUID+4, 195087, 0, 1, 1, -9333.99, 181.712, 61.5651, 4.14018, 0, 0, 0.87792, -0.478807, 300, 0, 1, 0),
(@OGUID+5, 195067, 0, 1, 1, -9352.43, 172.927, 61.5748, 0, 0, 0, 0, 1, 180, 100, 1, 0),
(@OGUID+6, 195067, 0, 1, 1, -9325.85, 176.738, 61.6842, 4.03415, 0, 0, 0.902059, -0.431613, 300, 0, 1, 0),
(@OGUID+7, 195067, 0, 1, 1, -9339.4, 177.75, 61.5578, 2.84035, 0, 0, 0.988678, 0.150053, 300, 0, 1, 0),
(@OGUID+8, 195067, 0, 1, 1, -9341.6, 186.007, 61.5588, 0.590182, 0, 0, 0.290827, 0.956776, 300, 0, 1, 0),
(@OGUID+9, 195067, 0, 1, 1, -9349.4, 172.027, 61.5583, 3.72, 0, 0, 0.958472, -0.285187, 300, 0, 1, 0),
(@OGUID+10, 195067, 0, 1, 1, -9333.49, 166.771, 61.5731, 4.50147, 0, 0, 0.777611, -0.628745, 300, 0, 1, 0),
(@OGUID+11, 195063, 0, 1, 1, -9340.66, 187.524, 61.5517, 0, 0, 0, 0, 1, 180, 100, 1, 0),
(@OGUID+12, 195063, 0, 1, 1, -9330.93, 172.332, 61.6442, 0, 0, 0, 0, 1, 180, 100, 1, 0),
(@OGUID+13, 195307, 0, 1, 1, -9328.34, 171.941, 62.8343, 3.00195, 0, 0, 0, 1, 180, 100, 1, 0),
(@OGUID+14, 195307, 0, 1, 1, -9351.13, 177.262, 62.7149, -2.30383, 0, 0, 0, 1, 180, 100, 1, 0),
(@OGUID+15, 195068, 0, 1, 1, -9328.37, 170.188, 61.6268, 0, 0, 0, 0, 1, 180, 100, 1, 0),
(@OGUID+16, 195068, 0, 1, 1, -9327.13, 181.863, 61.6551, 0, 0, 0, 0, 1, 180, 100, 1, 0),
(@OGUID+17, 195090, 0, 1, 1, -9319.35, 175.184, 61.6322, 5.94267, 0, 0, 0.169436, -0.985541, 300, 0, 1, 0),
(@OGUID+18, 195090, 0, 1, 1, -9321.89, 177.068, 61.6465, 5.64422, 0, 0, 0.314075, -0.949398, 300, 0, 1, 0),
(@OGUID+19, 195090, 0, 1, 1, -9324.42, 178.952, 61.9249, 5.64422, 0, 0, 0.314075, -0.949398, 300, 0, 1, 0),
(@OGUID+20, 195090, 0, 1, 1, -9327.35, 181.579, 61.6579, 5.76203, 0, 0, 0.257639, -0.966241, 300, 0, 1, 0),
(@OGUID+21, 195090, 0, 1, 1, -9329.68, 183.137, 61.6151, 5.69527, 0, 0, 0.289742, -0.957105, 300, 0, 1, 0),
(@OGUID+22, 195090, 0, 1, 1, -9332.5, 185.014, 61.5442, 5.69527, 0, 0, 0.289742, -0.957105, 300, 0, 1, 0),
(@OGUID+23, 195090, 0, 1, 1, -9336.77, 184.723, 61.5328, 1.08891, 0, 0, 0.517952, 0.85541, 300, 0, 1, 0),
(@OGUID+24, 195090, 0, 1, 1, -9340.96, 187.22, 61.5554, 0.865071, 0, 0, 0.419174, 0.907906, 300, 0, 1, 0),
(@OGUID+25, 195090, 0, 1, 1, -9347.4, 178.086, 61.558, 4.29726, 0, 0, 0.837647, -0.546212, 300, 0, 1, 0),
(@OGUID+26, 195090, 0, 1, 1, -9349.37, 175.371, 61.7816, 4.06557, 0, 0, 0.895168, -0.445729, 300, 0, 1, 0),
(@OGUID+27, 195090, 0, 1, 1, -9351.22, 172.514, 61.5657, 4.2737, 0, 0, 0.844024, -0.536305, 300, 0, 1, 0),
(@OGUID+28, 195090, 0, 1, 1, -9352.79, 169.484, 61.5833, 4.19909, 0, 0, 0.86344, -0.504452, 300, 0, 1, 0),
(@OGUID+29, 195090, 0, 1, 1, -9328.38, 163.069, 62.1162, 5.656, 0, 0, 0.308476, -0.951232, 300, 0, 1, 0),
(@OGUID+30, 195090, 0, 1, 1, -9324.64, 167.678, 61.5815, 2.66756, 0, 0, 0.972043, 0.234801, 300, 0, 1, 0),
(@OGUID+31, 195090, 0, 1, 1, -9327.99, 170.234, 61.6257, 2.49478, 0, 0, 0.948158, 0.317799, 300, 0, 1, 0),
(@OGUID+32, 195090, 0, 1, 1, -9330.76, 172.21, 61.6444, 2.42016, 0, 0, 0.935645, 0.352943, 300, 0, 1, 0),
(@OGUID+33, 195090, 0, 1, 1, -9333.31, 174.06, 61.6475, 2.60866, 0, 0, 0.964707, 0.263324, 300, 0, 1, 0),
(@OGUID+34, 195090, 0, 1, 1, -9335.44, 175.283, 61.6076, 2.62044, 0, 0, 0.966242, 0.257637, 300, 0, 1, 0),
(@OGUID+35, 195090, 0, 1, 1, -9329.47, 179.114, 61.7075, 1.27741, 0, 0, 0.596156, 0.802868, 300, 0, 1, 0),
(@OGUID+36, 195063, 0, 1, 1, -9334.96, 176.014, 63.3874, 0, 0, 0, 0, 1, 180, 100, 1, 0),
(@OGUID+37, 195069, 0, 1, 1, -9330.98, 181.918, 62.7222, 2.54818, 0, 0, 0, 1, 180, 100, 1, 0),
(@OGUID+38, 195066, 0, 1, 1, -9328.34, 170.201, 61.6675, 0, 0, 0, 0, 1, 180, 100, 1, 0),
(@OGUID+39, 195069, 0, 1, 1, -9331.48, 181.45, 62.7343, -0.890117, 0, 0, 0, 1, 180, 100, 1, 0),
(@OGUID+40, 195069, 0, 1, 1, -9332.01, 182.043, 62.6892, -0.157079, 0, 0, 0, 1, 180, 100, 1, 0),
(@OGUID+41, 195066, 0, 1, 1, -9327.13, 181.875, 61.6549, 0, 0, 0, 0, 1, 180, 100, 1, 0),
(@OGUID+42, 180885, 0, 1, 1, 1805.89, 217.134, 60.4, 1.51844, 0, 0, 0, 1, 180, 100, 1, 0),
(@OGUID+43, 180885, 1, 1, 1, 10050.3, 2118.06, 1329.64, 0.750491, 0, 0, 0, 1, 180, 100, 1, 0),
(@OGUID+44, 180885, 0, 1, 1, -5149.52, -854.931, 508.332, 0.750491, 0, 0, 0, 1, 180, 100, 1, 0),
(@OGUID+45, 180885, 0, 1, 1, -9331.44, 181.991, 61.63, 0.750491, 0, 0, 0, 1, 180, 100, 1, 0),
(@OGUID+46, 180885, 1, 1, 1, 1176.85, -4464.09, 21.3468, 0.750491, 0, 0, 0, 1, 180, 100, 1, 0),
(@OGUID+47, 180885, 1, 1, 1, -980.33, -71.8455, 19.5878, 0.750491, 0, 0, 0, 1, 180, 100, 1, 0),
(@OGUID+48, 180885, 530, 1, 1, 9411.2988, -6838.457, 16.25, 3.745755, 0, 0, 0, 1, 180, 100, 1, 0),
(@OGUID+49, 180885, 571, 1, 1, 5848.6821, 767.841, 640.5, 1.223739, 0, 0, 0, 1, 180, 100, 1, 0);

DELETE FROM `game_event_gameobject` WHERE `guid` BETWEEN @OGUID+0 AND @OGUID+49 AND `eventEntry`=@Event;
INSERT INTO `game_event_gameobject` SELECT @Event, gameobject.guid FROM `gameobject` WHERE gameobject.guid BETWEEN @OGUID+0 AND @OGUID+49;

DELETE FROM `creature` WHERE `id` IN (35249);
DELETE FROM `creature` WHERE `guid` IN (145038, 144985);
DELETE FROM `game_event_creature` WHERE `guid` IN(145038, 144985);
DELETE FROM `game_event_creature` WHERE `guid` BETWEEN 144951 AND 145000;
DELETE FROM `creature_addon` WHERE `guid` BETWEEN 144951 AND 145000;
DELETE FROM `creature` WHERE `guid` BETWEEN @CGUID+0 AND @CGUID+13;
INSERT INTO `creature` (`guid`, `id`, `map`, `spawnMask`, `phaseMask`, `position_x`, `position_y`, `position_z`, `orientation`, `spawntimesecs`, `spawndist`, `MovementType`) VALUES
(@CGUID+0, 34382, 0, 1, 1, -9327.6, 178.975, 61.6973, 4.10484, 600, 0, 0),
(@CGUID+1, 35249, 0, 1, 1, -9346.44, 171.041, 61.5582, 2.74061, 300, 0, 0),
(@CGUID+2, 35249, 0, 1, 1, -9340.16, 183.339, 61.5512, 0.349854, 300, 0, 0),
(@CGUID+3, 34435, 0, 1, 1, -9354.72, 167.942, 61.665, 0.27367, 300, 0, 0),
(@CGUID+4, 35249, 0, 1, 1, -9342.2, 187.984, 61.5586, 5.25467, 300, 0, 0),
(@CGUID+5, 35249, 0, 1, 1, -9344.05, 175.877, 61.5584, 3.59669, 300, 0, 0),
(@CGUID+6, 35249, 0, 1, 1, -9318.67, 173.348, 61.613, 2.83957, 300, 0, 0),
(@CGUID+7, 35249, 0, 1, 1, -9329.31, 166.352, 61.5815, 1.76357, 300, 0, 0),
(@CGUID+8, 35249, 0, 1, 1, -9322.06, 168.47, 61.6066, 2.40367, 300, 0, 0),
(@CGUID+9, 35249, 0, 1, 1, -9349.19, 176.153, 61.726, 5.18634, 300, 0, 0),
(@CGUID+10, 35249, 0, 1, 1, -9350.81, 171.018, 61.7532, 1.0198, 300, 0, 00),
(@CGUID+11, 35249, 0, 1, 1, -9337.56, 188.283, 61.5117, 3.72314, 300, 0, 0),
(@CGUID+12, 34383, 0, 1, 1, -9330.46, 180.936, 61.6792, 4.1716, 300, 0, 0),
(@CGUID+13, 35249, 0, 1, 1, -9327.92, 185.507, 62.7096, 4.07265, 300, 0, 0);
UPDATE `creature` SET `equipment_id`=1 WHERE `id` IN (34382, 34383);

DELETE FROM `game_event_creature` WHERE `guid` BETWEEN @CGUID+0 AND @CGUID+13 AND `eventEntry`=@Event;
INSERT INTO game_event_creature SELECT @Event, creature.guid FROM `creature` WHERE creature.guid BETWEEN @CGUID+0 AND @CGUID+13;

DELETE FROM `game_event_gameobject` WHERE `guid` BETWEEN 76237 AND 76550 AND eventEntry=51;
-- select * FROM `game_event_gameobject` WHERE `guid` IN (SELECT `guid` FROM `game_event_gameobject` WHERE `guid` IN (SELECT `guid` FROM `gameobject` WHERE `id` IN (195199, 195198, 195164, 195212, 195303, 195200, 195196, 179968, 195195, 195192, 195215, 195194, 195197, 195191))) AND `eventEntry`=51;
DELETE FROM `gameobject` WHERE `guid` IN (78695, 78713, 78756, 78582, 78693, 78479, 78690, 78711, 78691, 78694, 78478, 78692, 78696, 78635, 78703, 78592, 78583, 78697, 78669, 78670, 78712, 78710, 78702, 78584, 78715, 78757, 78594, 78593, 78585, 78597, 78595, 78596, 78668, 78698, 78700, 78701, 78714, 78755, 78709, 78704, 78480, 78699);
DELETE FROM `gameobject_addon` WHERE `guid` IN (78695, 78713, 78756, 78582, 78693, 78479, 78690, 78711, 78691, 78694, 78478, 78692, 78696, 78635, 78703, 78592, 78583, 78697, 78669, 78670, 78712, 78710, 78702, 78584, 78715, 78757, 78594, 78593, 78585, 78597, 78595, 78596, 78668, 78698, 78700, 78701, 78714, 78755, 78709, 78704, 78480, 78699);
DELETE FROM `game_event_gameobject` WHERE `guid` IN (78695, 78713, 78756, 78582, 78693, 78479, 78690, 78711, 78691, 78694, 78478, 78692, 78696, 78635, 78703, 78592, 78583, 78697, 78669, 78670, 78712, 78710, 78702, 78584, 78715, 78757, 78594, 78593, 78585, 78597, 78595, 78596, 78668, 78698, 78700, 78701, 78714, 78755, 78709, 78704, 78480, 78699);
