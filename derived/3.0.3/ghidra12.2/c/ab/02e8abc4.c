
void FUN_02e8abc4(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 local_60;
  undefined8 local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined8 *puStack_40;
  undefined4 local_38;
  
  plVar6 = param_2 + 4;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  pcVar5 = (char *)param_2[5];
  if (pcVar5 == "") {
LAB_02e8ac24:
    if (((DAT_056a11a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056a11a0), iVar1 != 0)) {
      DAT_056a10c0 = PTR_DAT_04bb2020 + 0x10;
      DAT_056a10c8 = "Share";
      DAT_056a10d8 = &DAT_0407ebb1;
      DAT_056a10f8 = &DAT_0407ebb1;
      DAT_056a1118 = &DAT_0407ebb1;
      DAT_056a10e8 = "CategoryOnOff";
      DAT_056a1108 = "CategoryNum";
      DAT_056a1128 = "CategorySOnOff";
      DAT_056a1148 = "CategoryNumS";
      DAT_056a1168 = "ChangeScrollType";
      DAT_056a1138 = &DAT_0407ebb1;
      DAT_056a1158 = &DAT_0407ebb1;
      DAT_056a1178 = &DAT_0407ebb1;
      DAT_056a1188 = "WindowType";
      DAT_056a1198 = &DAT_0407ebb1;
      DAT_056a10d0 = DAT_056a10c0;
      DAT_056a10e0 = DAT_056a10c0;
      DAT_056a10f0 = DAT_056a10c0;
      DAT_056a1100 = DAT_056a10c0;
      DAT_056a1110 = DAT_056a10c0;
      DAT_056a1120 = DAT_056a10c0;
      DAT_056a1130 = DAT_056a10c0;
      DAT_056a1140 = DAT_056a10c0;
      DAT_056a1150 = DAT_056a10c0;
      DAT_056a1160 = DAT_056a10c0;
      DAT_056a1170 = DAT_056a10c0;
      DAT_056a1180 = DAT_056a10c0;
      DAT_056a1190 = DAT_056a10c0;
      __cxa_guard_release(&DAT_056a11a0);
    }
    if (((DAT_056a11b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056a11b8), iVar1 != 0)) {
      DAT_056a11a8 = 0x700000002;
      DAT_056a11b0 = &DAT_056a10c0;
      __cxa_guard_release(&DAT_056a11b8);
    }
    if (((DAT_056a11f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056a11f0), iVar1 != 0)) {
      DAT_056a11c0 = PTR_DAT_04bb2020 + 0x10;
      DAT_056a11c8 = "@T_L_00";
      DAT_056a11e8 = "@T_Icon_00";
      DAT_056a11d8 = "@T_R_00";
      DAT_056a11d0 = DAT_056a11c0;
      DAT_056a11e0 = DAT_056a11c0;
      __cxa_guard_release(&DAT_056a11f0);
    }
    if (((DAT_056a1218 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056a1218), iVar1 != 0)) {
      DAT_056a11f8 = PTR_DAT_04bb2020 + 0x10;
      DAT_056a1200 = "N_Pos_00";
      DAT_056a1210 = "P_Icon_00";
      DAT_056a1208 = DAT_056a11f8;
      __cxa_guard_release(&DAT_056a1218);
    }
    if (param_2[1] == 0) {
      return;
    }
    local_58 = *param_2;
    local_48 = &DAT_04ada1f8;
    puStack_40 = &DAT_056a11a8;
    puStack_50 = &DAT_04ada208;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar4 = *(long *)(param_2[1] + 0x10);
    lVar2 = lVar4 + 0x200;
    goto LAB_02e8acb0;
  }
  if (*pcVar5 == '/') {
    if (((((((pcVar5[1] != 'L') || (pcVar5[2] != '_')) || (pcVar5[3] != 'I')) ||
          ((pcVar5[4] != 't' || (pcVar5[5] != 'e')))) || (pcVar5[6] != 'm')) ||
        (((pcVar5[7] != 'B' || (pcVar5[8] != 'a')) ||
         ((pcVar5[9] != 'l' ||
          (((pcVar5[10] != 'l' || (pcVar5[0xb] != 'o')) || (pcVar5[0xc] != 'o')))))))) ||
       ((pcVar5[0xd] != 'n' || (pcVar5[0xe] != '_')))) goto LAB_02e8adfc;
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4fe0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4fe0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4fd8 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4fe0);
    }
    if ((puVar7 == (undefined8 *)0x0) ||
       (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fd8), (uVar3 & 1) == 0)) goto LAB_02e8adfc;
    if (((DAT_056a1280 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056a1280), iVar1 != 0)) {
      DAT_056a1220 = PTR_DAT_04bb2020 + 0x10;
      DAT_056a1228 = "Guide";
      DAT_056a1238 = &DAT_0407ebb1;
      DAT_056a1258 = &DAT_0407ebb1;
      DAT_056a1278 = &DAT_0407ebb1;
      DAT_056a1248 = "NumRotate";
      DAT_056a1268 = &DAT_04082ff4;
      DAT_056a1230 = DAT_056a1220;
      DAT_056a1240 = DAT_056a1220;
      DAT_056a1250 = DAT_056a1220;
      DAT_056a1260 = DAT_056a1220;
      DAT_056a1270 = DAT_056a1220;
      __cxa_guard_release(&DAT_056a1280);
    }
    puVar8 = &DAT_056a1288;
    if (((DAT_056a1298 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056a1298), iVar1 != 0)) {
      DAT_056a1288 = 0x300000002;
      DAT_056a1290 = &DAT_056a1220;
      __cxa_guard_release(&DAT_056a1298);
    }
    if (((DAT_056a12c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056a12c0), iVar1 != 0)) {
      DAT_056a12a0 = PTR_DAT_04bb2020 + 0x10;
      DAT_056a12a8 = "@T_Guide_00";
      DAT_056a12b8 = "@T_Icon_00";
      DAT_056a12b0 = DAT_056a12a0;
      __cxa_guard_release(&DAT_056a12c0);
    }
    if (((DAT_056a12d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056a12d8), iVar1 != 0)) {
      DAT_056a12c8 = PTR_DAT_04bb2020 + 0x10;
      DAT_056a12d0 = "P_TextSize_00";
      __cxa_guard_release(&DAT_056a12d8);
    }
    local_48 = &DAT_04ada218;
    puStack_50 = &DAT_04ada228;
LAB_02e8af00:
    local_58 = *param_2;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    lVar4 = puVar7[2];
    lVar2 = lVar4 + 0x208;
    puStack_40 = puVar8;
  }
  else {
    if (*pcVar5 == '\0') goto LAB_02e8ac24;
LAB_02e8adfc:
    pcVar5 = (char *)param_2[5];
    if (((*pcVar5 == '/') && (((pcVar5[1] == 'L' && (pcVar5[2] == '_')) && (pcVar5[3] == 'G')))) &&
       ((((pcVar5[4] == 'e' && (pcVar5[5] == 'n')) && (pcVar5[6] == 'r')) &&
        ((pcVar5[7] == 'e' && (pcVar5[8] == '_')))))) {
      puVar7 = (undefined8 *)param_2[1];
      if (((*PTR_DAT_04bc4ff0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4ff0);
      }
      if ((puVar7 != (undefined8 *)0x0) &&
         (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4fe8), (uVar3 & 1) != 0)) {
        if (((DAT_056a1300 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056a1300), iVar1 != 0)) {
          DAT_056a12e0 = PTR_DAT_04bb2020 + 0x10;
          DAT_056a12e8 = "Select";
          DAT_056a12f8 = &DAT_0407ebb1;
          DAT_056a12f0 = DAT_056a12e0;
          __cxa_guard_release(&DAT_056a1300);
        }
        puVar8 = &DAT_056a1308;
        if (((DAT_056a1318 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056a1318), iVar1 != 0)) {
          DAT_056a1308 = 0x100000002;
          DAT_056a1310 = &DAT_056a12e0;
          __cxa_guard_release(&DAT_056a1318);
        }
        if (((DAT_056a1330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056a1330), iVar1 != 0)) {
          DAT_056a1320 = PTR_DAT_04bb2020 + 0x10;
          DAT_056a1328 = "@T_Key_00";
          __cxa_guard_release(&DAT_056a1330);
        }
        if (((DAT_056a1348 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056a1348), iVar1 != 0)) {
          DAT_056a1338 = PTR_DAT_04bb2020 + 0x10;
          DAT_056a1340 = "P_Icon_00";
          __cxa_guard_release(&DAT_056a1348);
        }
        local_48 = &DAT_04ada238;
        puStack_50 = &DAT_04ada248;
        goto LAB_02e8af00;
      }
    }
    pcVar5 = (char *)param_2[5];
    if (*pcVar5 != '/') {
      return;
    }
    if (pcVar5[1] != 'L') {
      return;
    }
    if (pcVar5[2] != '_') {
      return;
    }
    if (pcVar5[3] != 'B') {
      return;
    }
    if (pcVar5[4] != 't') {
      return;
    }
    if (pcVar5[5] != 'n') {
      return;
    }
    if (pcVar5[6] != 'L') {
      return;
    }
    if (pcVar5[7] != 'i') {
      return;
    }
    if (pcVar5[8] != 's') {
      return;
    }
    if (pcVar5[9] != 't') {
      return;
    }
    if (pcVar5[10] != '_') {
      return;
    }
    if (pcVar5[0xb] != '0') {
      return;
    }
    if (pcVar5[0xc] != '0') {
      return;
    }
    if (pcVar5[0xd] != '/') {
      return;
    }
    if (pcVar5[0xe] != 'L') {
      return;
    }
    if (pcVar5[0xf] != '_') {
      return;
    }
    if (pcVar5[0x10] != 'B') {
      return;
    }
    if (pcVar5[0x11] != 't') {
      return;
    }
    if (pcVar5[0x12] != 'n') {
      return;
    }
    if (pcVar5[0x13] != '_') {
      return;
    }
    puVar7 = (undefined8 *)param_2[1];
    if (((*PTR_DAT_04bc4e40 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e40), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4e38 = PTR_DAT_04bc4e48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e40);
    }
    if (puVar7 == (undefined8 *)0x0) {
      return;
    }
    uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e38);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (((DAT_056a14b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056a14b0), iVar1 != 0)) {
      DAT_056a1350 = PTR_DAT_04bb2020 + 0x10;
      DAT_056a1358 = "BtnListRandom";
      DAT_056a1368 = &DAT_0407ebb1;
      DAT_056a1388 = &DAT_0407ebb1;
      DAT_056a13a8 = &DAT_0407ebb1;
      DAT_056a1378 = "Remake";
      DAT_056a1398 = "RemakePos";
      DAT_056a13b8 = "IconOff";
      DAT_056a13d8 = "IconType";
      DAT_056a13f8 = "EditType";
      DAT_056a1418 = &DAT_0410025b;
      DAT_056a1438 = "State";
      DAT_056a1458 = "WallType";
      DAT_056a1478 = "BtnType";
      DAT_056a13c8 = &DAT_0407ebb1;
      DAT_056a13e8 = &DAT_0407ebb1;
      DAT_056a1408 = &DAT_0407ebb1;
      DAT_056a1428 = &DAT_0407ebb1;
      DAT_056a1448 = &DAT_0407ebb1;
      DAT_056a1468 = &DAT_0407ebb1;
      DAT_056a1488 = &DAT_0407ebb1;
      DAT_056a1498 = "CheckType";
      DAT_056a14a8 = &DAT_0407ebb1;
      DAT_056a1360 = DAT_056a1350;
      DAT_056a1370 = DAT_056a1350;
      DAT_056a1380 = DAT_056a1350;
      DAT_056a1390 = DAT_056a1350;
      DAT_056a13a0 = DAT_056a1350;
      DAT_056a13b0 = DAT_056a1350;
      DAT_056a13c0 = DAT_056a1350;
      DAT_056a13d0 = DAT_056a1350;
      DAT_056a13e0 = DAT_056a1350;
      DAT_056a13f0 = DAT_056a1350;
      DAT_056a1400 = DAT_056a1350;
      DAT_056a1410 = DAT_056a1350;
      DAT_056a1420 = DAT_056a1350;
      DAT_056a1430 = DAT_056a1350;
      DAT_056a1440 = DAT_056a1350;
      DAT_056a1450 = DAT_056a1350;
      DAT_056a1460 = DAT_056a1350;
      DAT_056a1470 = DAT_056a1350;
      DAT_056a1480 = DAT_056a1350;
      DAT_056a1490 = DAT_056a1350;
      DAT_056a14a0 = DAT_056a1350;
      __cxa_guard_release(&DAT_056a14b0);
    }
    if (((DAT_056a14c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056a14c8), iVar1 != 0)) {
      DAT_056a14b8 = 0xb00000002;
      DAT_056a14c0 = &DAT_056a1350;
      __cxa_guard_release(&DAT_056a14c8);
    }
    if (((DAT_056a1500 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056a1500), iVar1 != 0)) {
      DAT_056a14d0 = PTR_DAT_04bb2020 + 0x10;
      DAT_056a14d8 = "@T_SizeNumL_00";
      DAT_056a14f8 = "@T_SizeMultiply_00";
      DAT_056a14e8 = "@T_SizeNumR_00";
      DAT_056a14e0 = DAT_056a14d0;
      DAT_056a14f0 = DAT_056a14d0;
      __cxa_guard_release(&DAT_056a1500);
    }
    if (((DAT_056a1518 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056a1518), iVar1 != 0)) {
      DAT_056a1508 = PTR_DAT_04bb2020 + 0x10;
      DAT_056a1510 = "P_Icon_00";
      __cxa_guard_release(&DAT_056a1518);
    }
    local_58 = *param_2;
    local_48 = &DAT_04ada258;
    puStack_40 = &DAT_056a14b8;
    local_60 = *(undefined8 *)PTR_PTR_04bc4e50;
    puStack_50 = &DAT_04ada268;
    lVar4 = puVar7[2];
    lVar2 = lVar4 + 0x2c8;
  }
LAB_02e8acb0:
  local_38 = 1;
  FUN_0386e230(lVar2,lVar4,&local_60);
  return;
}

