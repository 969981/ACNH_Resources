
/* WARNING: Removing unreachable block (ram,0x02a0f5dc) */
/* WARNING: Removing unreachable block (ram,0x02a0f5b0) */
/* WARNING: Removing unreachable block (ram,0x02a0f580) */
/* WARNING: Removing unreachable block (ram,0x02a0f598) */
/* WARNING: Removing unreachable block (ram,0x02a0f5c8) */
/* WARNING: Removing unreachable block (ram,0x02a0f5fc) */

void FUN_02a0f1e0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined *puVar12;
  bool bVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  char *pcVar24;
  uint uVar25;
  undefined *puVar26;
  long lVar27;
  byte *local_80;
  undefined8 local_78;
  byte *local_70;
  char *pcStack_68;
  
  puVar26 = PTR_DAT_04bb2020;
  pbVar2 = (byte *)(param_1 + 0x19ff8);
  pbVar3 = PTR_DAT_04bb2020 + 0x10;
  local_78 = "BGMMgr_Compose";
  local_80 = pbVar3;
  uVar15 = FUN_038c9744(0,&local_80,*param_2,8,1,0);
  *(undefined8 *)(param_1 + 0x18) = uVar15;
  *pbVar2 = *pbVar2 & 0xfe;
  pcStack_68 = "Bgm_Base";
  local_78 = (char *)(param_1 + 0x1a008);
  local_80 = pbVar2;
  local_70 = pbVar3;
  FUN_0383167c(*(long *)PTR_DAT_04bb28b0 + 0xe8,&local_80);
  *(byte **)(param_1 + 0x1a048) = pbVar2;
  lVar27 = param_1 + 0x1a040;
  FUN_03f107e0(param_1 + 0x288,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_04bc42e0,0x20,
               0x10,0x80,0x400);
  *(long *)(param_1 + 0x4b8) = lVar27;
  *(undefined8 *)(param_1 + 0x294) = 0x3d08888941f00000;
  puVar12 = PTR_DAT_04bc3ee8;
  if (*(int *)(param_1 + 0x300) != 0) {
    plVar22 = *(long **)(param_1 + 0x308);
    lVar23 = (long)*(int *)(param_1 + 0x300) << 3;
    do {
      lVar18 = *(long *)(*plVar22 + 0x20);
      if (lVar18 != 0) {
        lVar19 = *(long *)puVar12;
        *(long *)(lVar18 + 0x110) = lVar27;
        lVar20 = *(long *)(lVar19 + 0xf0);
        if (lVar20 != 0) {
          iVar9 = *(int *)(lVar20 + 0xd0) + *(int *)(lVar20 + 0xcc) + -1;
          iVar14 = 0;
          if (*(int *)(lVar20 + 200) <= iVar9) {
            iVar14 = *(int *)(lVar20 + 200);
          }
          lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + (long)(iVar9 - iVar14) * 8);
          if ((lVar20 != 0) && (0 < *(int *)(lVar20 + 8))) goto LAB_02a0f2f4;
        }
        lVar19 = *(long *)(lVar19 + 0x128);
        if ((lVar19 == 0) || (*(int *)(lVar19 + 8) < 1)) {
          FUN_03be4980(*(undefined8 *)(*(long *)(lVar18 + 0x30) + 0x18),lVar27);
        }
      }
LAB_02a0f2f4:
      plVar22 = plVar22 + 1;
      lVar23 = lVar23 + -8;
    } while (lVar23 != 0);
  }
  lVar27 = param_1 + 0x19eb0;
  FUN_03f2de8c(lVar27);
  FUN_03f2dedc(lVar27,0);
  puVar16 = (undefined8 *)FUN_03f2d7f0(lVar27);
  if (((*PTR_DAT_04bb2828 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_04bb2828), iVar14 != 0)) {
    *(undefined **)PTR_DAT_04bb2820 = PTR_DAT_04bb2830 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb2828);
  }
  uVar17 = (**(code **)*puVar16)(puVar16,PTR_DAT_04bb2820);
  if ((uVar17 & 1) == 0) {
    puVar16 = (undefined8 *)0x0;
  }
  FUN_03f11f80(param_1 + 0x2a8,puVar16[1],*(undefined8 *)(param_1 + 0x18),param_1 + 0x288,
               *(undefined4 *)(param_1 + 0x4ec),*(undefined4 *)(param_1 + 0x4f0),
               *(undefined4 *)(param_1 + 0x4f4));
  local_80 = puVar26 + 0x10;
  local_78 = "OneRoomDemoOrder_v20000";
  if (*(int *)(param_1 + 0x300) == 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
LAB_02a0f514:
    *(undefined8 *)(param_1 + 0x28) = 0;
LAB_02a0f518:
    *(undefined8 *)(param_1 + 0x30) = 0;
LAB_02a0f51c:
    *(undefined8 *)(param_1 + 0x38) = 0;
LAB_02a0f520:
    *(undefined8 *)(param_1 + 0x40) = 0;
LAB_02a0f524:
    *(undefined8 *)(param_1 + 0x48) = 0;
LAB_02a0f528:
    *(undefined8 *)(param_1 + 0x50) = 0;
LAB_02a0f52c:
    *(undefined8 *)(param_1 + 0x58) = 0;
LAB_02a0f530:
    *(undefined8 *)(param_1 + 0x60) = 0;
LAB_02a0f534:
    *(undefined8 *)(param_1 + 0x68) = 0;
LAB_02a0f538:
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  else {
    plVar22 = *(long **)(param_1 + 0x308);
    plVar21 = plVar22 + *(int *)(param_1 + 0x300);
    do {
      lVar27 = *plVar22;
      pcVar24 = *(char **)(lVar27 + 0x10);
      (**(code **)(local_80 + 0x18))(&local_80);
      if (pcVar24 == local_78) goto LAB_02a0f4e0;
      uVar17 = 0;
      bVar13 = true;
      do {
        if (pcVar24[uVar17] != local_78[uVar17]) break;
        if (pcVar24[uVar17] == '\0') {
          if (bVar13) goto LAB_02a0f4e0;
          break;
        }
        if (pcVar24[uVar17 + 1] != local_78[uVar17 + 1]) break;
        if (pcVar24[uVar17 + 1] == '\0') goto LAB_02a0f4e0;
        if (pcVar24[uVar17 + 2] != local_78[uVar17 + 2]) break;
        if (pcVar24[uVar17 + 2] == '\0') goto LAB_02a0f4e0;
        bVar13 = uVar17 < 0x7fffe;
        uVar17 = uVar17 + 3;
      } while (uVar17 != 0x80001);
      plVar22 = plVar22 + 1;
    } while (plVar22 != plVar21);
    lVar27 = 0;
LAB_02a0f4e0:
    *(long *)(param_1 + 0x20) = lVar27;
    plVar22 = *(long **)(param_1 + 0x308);
    local_80 = PTR_DAT_04bb2020 + 0x10;
    local_78 = "IntroShareHouseOrder_v20000";
    puVar26 = PTR_DAT_04bb2020;
    if (*(int *)(param_1 + 0x300) == 0) goto LAB_02a0f514;
    plVar21 = plVar22 + *(int *)(param_1 + 0x300);
    do {
      lVar27 = *plVar22;
      pcVar24 = *(char **)(lVar27 + 0x10);
      (**(code **)(local_80 + 0x18))(&local_80);
      if (pcVar24 == local_78) goto LAB_02a0fc34;
      uVar17 = 0;
      bVar13 = true;
      do {
        if (pcVar24[uVar17] != local_78[uVar17]) break;
        if (pcVar24[uVar17] == '\0') {
          if (bVar13) goto LAB_02a0fc34;
          break;
        }
        if (pcVar24[uVar17 + 1] != local_78[uVar17 + 1]) break;
        if (pcVar24[uVar17 + 1] == '\0') goto LAB_02a0fc34;
        if (pcVar24[uVar17 + 2] != local_78[uVar17 + 2]) break;
        if (pcVar24[uVar17 + 2] == '\0') goto LAB_02a0fc34;
        bVar13 = uVar17 < 0x7fffe;
        uVar17 = uVar17 + 3;
      } while (uVar17 != 0x80001);
      plVar22 = plVar22 + 1;
    } while (plVar22 != plVar21);
    lVar27 = 0;
LAB_02a0fc34:
    *(long *)(param_1 + 0x28) = lVar27;
    plVar22 = *(long **)(param_1 + 0x308);
    local_80 = PTR_DAT_04bb2020 + 0x10;
    local_78 = "ShareHouseEndDemo_v20000";
    puVar26 = PTR_DAT_04bb2020;
    if (*(int *)(param_1 + 0x300) == 0) goto LAB_02a0f518;
    plVar21 = plVar22 + *(int *)(param_1 + 0x300);
    do {
      lVar27 = *plVar22;
      pcVar24 = *(char **)(lVar27 + 0x10);
      (**(code **)(local_80 + 0x18))(&local_80);
      if (pcVar24 == local_78) goto LAB_02a0fd10;
      uVar17 = 0;
      bVar13 = true;
      do {
        if (pcVar24[uVar17] != local_78[uVar17]) break;
        if (pcVar24[uVar17] == '\0') {
          if (bVar13) goto LAB_02a0fd10;
          break;
        }
        if (pcVar24[uVar17 + 1] != local_78[uVar17 + 1]) break;
        if (pcVar24[uVar17 + 1] == '\0') goto LAB_02a0fd10;
        if (pcVar24[uVar17 + 2] != local_78[uVar17 + 2]) break;
        if (pcVar24[uVar17 + 2] == '\0') goto LAB_02a0fd10;
        bVar13 = uVar17 < 0x7fffe;
        uVar17 = uVar17 + 3;
      } while (uVar17 != 0x80001);
      plVar22 = plVar22 + 1;
    } while (plVar22 != plVar21);
    lVar27 = 0;
LAB_02a0fd10:
    *(long *)(param_1 + 0x30) = lVar27;
    plVar22 = *(long **)(param_1 + 0x308);
    local_80 = PTR_DAT_04bb2020 + 0x10;
    local_78 = "HouseCompleteDemo_v20000";
    puVar26 = PTR_DAT_04bb2020;
    if (*(int *)(param_1 + 0x300) == 0) goto LAB_02a0f51c;
    plVar21 = plVar22 + *(int *)(param_1 + 0x300);
    do {
      lVar27 = *plVar22;
      pcVar24 = *(char **)(lVar27 + 0x10);
      (**(code **)(local_80 + 0x18))(&local_80);
      if (pcVar24 == local_78) goto LAB_02a0fdf0;
      uVar17 = 0;
      bVar13 = true;
      do {
        if (pcVar24[uVar17] != local_78[uVar17]) break;
        if (pcVar24[uVar17] == '\0') {
          if (bVar13) goto LAB_02a0fdf0;
          break;
        }
        if (pcVar24[uVar17 + 1] != local_78[uVar17 + 1]) break;
        if (pcVar24[uVar17 + 1] == '\0') goto LAB_02a0fdf0;
        if (pcVar24[uVar17 + 2] != local_78[uVar17 + 2]) break;
        if (pcVar24[uVar17 + 2] == '\0') goto LAB_02a0fdf0;
        bVar13 = uVar17 < 0x7fffe;
        uVar17 = uVar17 + 3;
      } while (uVar17 != 0x80001);
      plVar22 = plVar22 + 1;
    } while (plVar22 != plVar21);
    lVar27 = 0;
LAB_02a0fdf0:
    *(long *)(param_1 + 0x38) = lVar27;
    plVar22 = *(long **)(param_1 + 0x308);
    local_80 = PTR_DAT_04bb2020 + 0x10;
    local_78 = "FacilityCompleteDemo_v20000";
    puVar26 = PTR_DAT_04bb2020;
    if (*(int *)(param_1 + 0x300) == 0) goto LAB_02a0f520;
    plVar21 = plVar22 + *(int *)(param_1 + 0x300);
    do {
      lVar27 = *plVar22;
      pcVar24 = *(char **)(lVar27 + 0x10);
      (**(code **)(local_80 + 0x18))(&local_80);
      if (pcVar24 == local_78) goto LAB_02a0fed0;
      uVar17 = 0;
      bVar13 = true;
      do {
        if (pcVar24[uVar17] != local_78[uVar17]) break;
        if (pcVar24[uVar17] == '\0') {
          if (bVar13) goto LAB_02a0fed0;
          break;
        }
        if (pcVar24[uVar17 + 1] != local_78[uVar17 + 1]) break;
        if (pcVar24[uVar17 + 1] == '\0') goto LAB_02a0fed0;
        if (pcVar24[uVar17 + 2] != local_78[uVar17 + 2]) break;
        if (pcVar24[uVar17 + 2] == '\0') goto LAB_02a0fed0;
        bVar13 = uVar17 < 0x7fffe;
        uVar17 = uVar17 + 3;
      } while (uVar17 != 0x80001);
      plVar22 = plVar22 + 1;
    } while (plVar22 != plVar21);
    lVar27 = 0;
LAB_02a0fed0:
    *(long *)(param_1 + 0x40) = lVar27;
    plVar22 = *(long **)(param_1 + 0x308);
    local_80 = PTR_DAT_04bb2020 + 0x10;
    local_78 = "LookingForHouseSharePartner_v20000";
    puVar26 = PTR_DAT_04bb2020;
    if (*(int *)(param_1 + 0x300) == 0) goto LAB_02a0f524;
    plVar21 = plVar22 + *(int *)(param_1 + 0x300);
    do {
      lVar27 = *plVar22;
      pcVar24 = *(char **)(lVar27 + 0x10);
      (**(code **)(local_80 + 0x18))(&local_80);
      if (pcVar24 == local_78) goto LAB_02a0ffb0;
      uVar17 = 0;
      bVar13 = true;
      do {
        if (pcVar24[uVar17] != local_78[uVar17]) break;
        if (pcVar24[uVar17] == '\0') {
          if (bVar13) goto LAB_02a0ffb0;
          break;
        }
        if (pcVar24[uVar17 + 1] != local_78[uVar17 + 1]) break;
        if (pcVar24[uVar17 + 1] == '\0') goto LAB_02a0ffb0;
        if (pcVar24[uVar17 + 2] != local_78[uVar17 + 2]) break;
        if (pcVar24[uVar17 + 2] == '\0') goto LAB_02a0ffb0;
        bVar13 = uVar17 < 0x7fffe;
        uVar17 = uVar17 + 3;
      } while (uVar17 != 0x80001);
      plVar22 = plVar22 + 1;
    } while (plVar22 != plVar21);
    lVar27 = 0;
LAB_02a0ffb0:
    *(long *)(param_1 + 0x48) = lVar27;
    plVar22 = *(long **)(param_1 + 0x308);
    local_80 = PTR_DAT_04bb2020 + 0x10;
    local_78 = "OneRoomEditNpcHouse_v20000";
    puVar26 = PTR_DAT_04bb2020;
    if (*(int *)(param_1 + 0x300) == 0) goto LAB_02a0f528;
    plVar21 = plVar22 + *(int *)(param_1 + 0x300);
    do {
      lVar27 = *plVar22;
      pcVar24 = *(char **)(lVar27 + 0x10);
      (**(code **)(local_80 + 0x18))(&local_80);
      if (pcVar24 == local_78) goto LAB_02a10090;
      uVar17 = 0;
      bVar13 = true;
      do {
        if (pcVar24[uVar17] != local_78[uVar17]) break;
        if (pcVar24[uVar17] == '\0') {
          if (bVar13) goto LAB_02a10090;
          break;
        }
        if (pcVar24[uVar17 + 1] != local_78[uVar17 + 1]) break;
        if (pcVar24[uVar17 + 1] == '\0') goto LAB_02a10090;
        if (pcVar24[uVar17 + 2] != local_78[uVar17 + 2]) break;
        if (pcVar24[uVar17 + 2] == '\0') goto LAB_02a10090;
        bVar13 = uVar17 < 0x7fffe;
        uVar17 = uVar17 + 3;
      } while (uVar17 != 0x80001);
      plVar22 = plVar22 + 1;
    } while (plVar22 != plVar21);
    lVar27 = 0;
LAB_02a10090:
    *(long *)(param_1 + 0x50) = lVar27;
    plVar22 = *(long **)(param_1 + 0x308);
    local_80 = PTR_DAT_04bb2020 + 0x10;
    local_78 = "OneRoomEditFacility_v20000";
    puVar26 = PTR_DAT_04bb2020;
    if (*(int *)(param_1 + 0x300) == 0) goto LAB_02a0f52c;
    plVar21 = plVar22 + *(int *)(param_1 + 0x300);
    do {
      lVar27 = *plVar22;
      pcVar24 = *(char **)(lVar27 + 0x10);
      (**(code **)(local_80 + 0x18))(&local_80);
      if (pcVar24 == local_78) goto LAB_02a10170;
      uVar17 = 0;
      bVar13 = true;
      do {
        if (pcVar24[uVar17] != local_78[uVar17]) break;
        if (pcVar24[uVar17] == '\0') {
          if (bVar13) goto LAB_02a10170;
          break;
        }
        if (pcVar24[uVar17 + 1] != local_78[uVar17 + 1]) break;
        if (pcVar24[uVar17 + 1] == '\0') goto LAB_02a10170;
        if (pcVar24[uVar17 + 2] != local_78[uVar17 + 2]) break;
        if (pcVar24[uVar17 + 2] == '\0') goto LAB_02a10170;
        bVar13 = uVar17 < 0x7fffe;
        uVar17 = uVar17 + 3;
      } while (uVar17 != 0x80001);
      plVar22 = plVar22 + 1;
    } while (plVar22 != plVar21);
    lVar27 = 0;
LAB_02a10170:
    *(long *)(param_1 + 0x58) = lVar27;
    plVar22 = *(long **)(param_1 + 0x308);
    local_80 = PTR_DAT_04bb2020 + 0x10;
    local_78 = "RoomSketchApp_v20000";
    puVar26 = PTR_DAT_04bb2020;
    if (*(int *)(param_1 + 0x300) == 0) goto LAB_02a0f530;
    plVar21 = plVar22 + *(int *)(param_1 + 0x300);
    do {
      lVar27 = *plVar22;
      pcVar24 = *(char **)(lVar27 + 0x10);
      (**(code **)(local_80 + 0x18))(&local_80);
      if (pcVar24 == local_78) goto LAB_02a10250;
      uVar17 = 0;
      bVar13 = true;
      do {
        if (pcVar24[uVar17] != local_78[uVar17]) break;
        if (pcVar24[uVar17] == '\0') {
          if (bVar13) goto LAB_02a10250;
          break;
        }
        if (pcVar24[uVar17 + 1] != local_78[uVar17 + 1]) break;
        if (pcVar24[uVar17 + 1] == '\0') goto LAB_02a10250;
        if (pcVar24[uVar17 + 2] != local_78[uVar17 + 2]) break;
        if (pcVar24[uVar17 + 2] == '\0') goto LAB_02a10250;
        bVar13 = uVar17 < 0x7fffe;
        uVar17 = uVar17 + 3;
      } while (uVar17 != 0x80001);
      plVar22 = plVar22 + 1;
    } while (plVar22 != plVar21);
    lVar27 = 0;
LAB_02a10250:
    *(long *)(param_1 + 0x60) = lVar27;
    plVar22 = *(long **)(param_1 + 0x308);
    local_80 = PTR_DAT_04bb2020 + 0x10;
    local_78 = "09_JuneBrideStudio_v10200";
    puVar26 = PTR_DAT_04bb2020;
    if (*(int *)(param_1 + 0x300) == 0) goto LAB_02a0f534;
    plVar21 = plVar22 + *(int *)(param_1 + 0x300);
    do {
      lVar27 = *plVar22;
      pcVar24 = *(char **)(lVar27 + 0x10);
      (**(code **)(local_80 + 0x18))(&local_80);
      if (pcVar24 == local_78) goto LAB_02a10328;
      uVar17 = 0;
      bVar13 = true;
      do {
        if (pcVar24[uVar17] != local_78[uVar17]) break;
        if (pcVar24[uVar17] == '\0') {
          if (bVar13) goto LAB_02a10328;
          break;
        }
        if (pcVar24[uVar17 + 1] != local_78[uVar17 + 1]) break;
        if (pcVar24[uVar17 + 1] == '\0') goto LAB_02a10328;
        if (pcVar24[uVar17 + 2] != local_78[uVar17 + 2]) break;
        if (pcVar24[uVar17 + 2] == '\0') goto LAB_02a10328;
        bVar13 = uVar17 < 0x7fffe;
        uVar17 = uVar17 + 3;
      } while (uVar17 != 0x80001);
      plVar22 = plVar22 + 1;
    } while (plVar22 != plVar21);
    lVar27 = 0;
LAB_02a10328:
    *(long *)(param_1 + 0x68) = lVar27;
    plVar22 = *(long **)(param_1 + 0x308);
    local_80 = PTR_DAT_04bb2020 + 0x10;
    local_78 = "Announce_Rco";
    puVar26 = PTR_DAT_04bb2020;
    if (*(int *)(param_1 + 0x300) == 0) goto LAB_02a0f538;
    plVar21 = plVar22 + *(int *)(param_1 + 0x300);
    do {
      lVar27 = *plVar22;
      pcVar24 = *(char **)(lVar27 + 0x10);
      (**(code **)(local_80 + 0x18))(&local_80);
      if (pcVar24 == local_78) goto LAB_02a10400;
      uVar17 = 0;
      bVar13 = true;
      do {
        if (pcVar24[uVar17] != local_78[uVar17]) break;
        if (pcVar24[uVar17] == '\0') {
          if (bVar13) goto LAB_02a10400;
          break;
        }
        if (pcVar24[uVar17 + 1] != local_78[uVar17 + 1]) break;
        if (pcVar24[uVar17 + 1] == '\0') goto LAB_02a10400;
        if (pcVar24[uVar17 + 2] != local_78[uVar17 + 2]) break;
        if (pcVar24[uVar17 + 2] == '\0') goto LAB_02a10400;
        bVar13 = uVar17 < 0x7fffe;
        uVar17 = uVar17 + 3;
      } while (uVar17 != 0x80001);
      plVar22 = plVar22 + 1;
    } while (plVar22 != plVar21);
    lVar27 = 0;
LAB_02a10400:
    *(long *)(param_1 + 0x70) = lVar27;
    plVar22 = *(long **)(param_1 + 0x308);
    local_80 = PTR_DAT_04bb2020 + 0x10;
    local_78 = "HotelRoomEdit_v30000";
    puVar26 = PTR_DAT_04bb2020;
    if (*(int *)(param_1 + 0x300) != 0) {
      plVar21 = plVar22 + *(int *)(param_1 + 0x300);
      do {
        lVar27 = *plVar22;
        pcVar24 = *(char **)(lVar27 + 0x10);
        (**(code **)(local_80 + 0x18))(&local_80);
        if (pcVar24 == local_78) goto LAB_02a104d8;
        uVar17 = 0;
        bVar13 = true;
        do {
          if (pcVar24[uVar17] != local_78[uVar17]) break;
          if (pcVar24[uVar17] == '\0') {
            if (bVar13) goto LAB_02a104d8;
            break;
          }
          if (pcVar24[uVar17 + 1] != local_78[uVar17 + 1]) break;
          if (pcVar24[uVar17 + 1] == '\0') goto LAB_02a104d8;
          if (pcVar24[uVar17 + 2] != local_78[uVar17 + 2]) break;
          if (pcVar24[uVar17 + 2] == '\0') goto LAB_02a104d8;
          bVar13 = uVar17 < 0x7fffe;
          uVar17 = uVar17 + 3;
        } while (uVar17 != 0x80001);
        plVar22 = plVar22 + 1;
      } while (plVar22 != plVar21);
      lVar27 = 0;
LAB_02a104d8:
      *(long *)(param_1 + 0x78) = lVar27;
      puVar26 = PTR_DAT_04bb2020;
      plVar22 = *(long **)(param_1 + 0x308);
      local_80 = PTR_DAT_04bb2020 + 0x10;
      local_78 = "HotelVipRoomCompleteDemo_v30000";
      if (*(int *)(param_1 + 0x300) == 0) {
        lVar27 = 0;
      }
      else {
        plVar21 = plVar22 + *(int *)(param_1 + 0x300);
        while( true ) {
          lVar27 = *plVar22;
          pcVar24 = *(char **)(lVar27 + 0x10);
          (**(code **)(local_80 + 0x18))(&local_80);
          if (pcVar24 == local_78) break;
          uVar17 = 0;
          bVar13 = true;
          do {
            if (pcVar24[uVar17] != local_78[uVar17]) break;
            if (pcVar24[uVar17] == '\0') {
              if (bVar13) goto LAB_02a0f544;
              break;
            }
            if (pcVar24[uVar17 + 1] != local_78[uVar17 + 1]) break;
            if (pcVar24[uVar17 + 1] == '\0') goto LAB_02a0f544;
            if (pcVar24[uVar17 + 2] != local_78[uVar17 + 2]) break;
            if (pcVar24[uVar17 + 2] == '\0') goto LAB_02a0f544;
            bVar13 = uVar17 < 0x7fffe;
            uVar17 = uVar17 + 3;
          } while (uVar17 != 0x80001);
          plVar22 = plVar22 + 1;
          lVar27 = 0;
          if (plVar22 == plVar21) break;
        }
      }
      goto LAB_02a0f544;
    }
  }
  local_78 = (char *)0x0;
  lVar27 = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
LAB_02a0f544:
  *(long *)(param_1 + 0x80) = lVar27;
  uVar25 = 0;
  *(undefined4 *)(param_1 + 0x1a0a8) = 0;
  *(undefined4 *)(param_1 + 0x1a0ac) = 0;
  *(undefined4 *)(param_1 + 0x1a0b0) = 0;
  *(undefined4 *)(param_1 + 0x1a0b4) = 0;
  *(undefined4 *)(param_1 + 0x1a0b8) = 0;
  puVar12 = PTR_DAT_04bc3d98;
  pbVar2 = PTR_DAT_04bc3d98 + 0x10;
  *(undefined4 *)(param_1 + 0x1a0bc) = 0;
  do {
    lVar27 = (long)(int)uVar25;
    if (0xc < uVar25) {
      lVar27 = 0;
    }
    plVar22 = (long *)(param_1 + 0x1a1a8 + (long)(int)uVar25 * 0x30);
    uVar8 = (&DAT_04a98990)[lVar27 * 4];
    pcStack_68 = (&PTR_DAT_04a98998)[lVar27 * 2];
    *(undefined4 *)(plVar22 + 3) = uVar8;
    local_78 = (char *)CONCAT44(local_78._4_4_,uVar8);
    local_80 = pbVar2;
    local_70 = puVar26 + 0x10;
    (**(code **)(*plVar22 + 0x20))(plVar22,&local_80);
    uVar25 = uVar25 + 1;
  } while (uVar25 != 0xd);
  pbVar2 = puVar12 + 0x10;
  puVar26 = PTR_DAT_04bb2020 + 0x10;
  local_78._0_4_ = 0xd2166605;
  *(undefined4 *)(param_1 + 0x1a430) = 0xd2166605;
  pcStack_68 = &DAT_040d0921;
  local_80 = pbVar2;
  local_70 = puVar26;
  (**(code **)(*(long *)(param_1 + 0x1a418) + 0x20))((long *)(param_1 + 0x1a418),&local_80);
  plVar22 = (long *)(param_1 + 0x1a488);
  *(undefined4 *)(param_1 + 0x1a4a0) = 0;
  pcStack_68 = &DAT_040f5c41;
  local_78 = (char *)((ulong)local_78._4_4_ << 0x20);
  local_80 = pbVar2;
  local_70 = puVar26;
  (**(code **)(*plVar22 + 0x20))(plVar22,&local_80);
  local_80 = (byte *)0x0;
  *(long **)(param_1 + 0x1a120) = plVar22;
  FUN_029dab38(param_1 + 0x1aa88,&local_80);
  FUN_029dab38(param_1 + 0x1ae78,&local_80);
  local_80 = (byte *)0x0;
  FUN_029dab38(param_1 + 0x1b310,&local_80);
  FUN_029dab38(param_1 + 0x1b700,&local_80);
  local_78._0_4_ = 0xd14e277f;
  *(undefined4 *)(param_1 + 0x1bbc0) = 0xd14e277f;
  pcStack_68 = &DAT_040db31e;
  local_80 = pbVar2;
  local_70 = puVar26;
  (**(code **)(*(long *)(param_1 + 0x1bba8) + 0x20))((long *)(param_1 + 0x1bba8),&local_80);
  local_80 = (byte *)0x0;
  FUN_029f1874(param_1 + 0x1a518,&local_80);
  *(undefined2 *)(param_1 + 0x1a964) = 0;
  *(undefined8 *)(param_1 + 0x1a96c) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x1a958) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x1a948) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x1a950) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x1a97c) = 0xffffffffffffffff;
  plVar22 = (long *)(param_1 + 0x1a9d0);
  *(undefined8 *)(param_1 + 0x1a95c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x1a968) = 0;
  *(undefined8 *)(param_1 + 0x1a974) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 0x1a984) = 0;
  *(undefined8 *)(param_1 + 0x1a98c) = 0;
  *(undefined8 *)(param_1 + 0x1a994) = 0;
  *(undefined4 *)(param_1 + 0x1a9e8) = 0;
  local_78 = (char *)((ulong)local_78._4_4_ << 0x20);
  pcStack_68 = &DAT_040f5c41;
  local_80 = pbVar2;
  local_70 = puVar26;
  (**(code **)(*plVar22 + 0x20))(plVar22,&local_80);
  *(long **)(param_1 + 0x1a9a0) = plVar22;
  *(undefined4 *)(param_1 + 0x1aa50) = 0x26fc077a;
  local_78 = (char *)CONCAT44(local_78._4_4_,0x26fc077a);
  pcStack_68 = &DAT_040f5d2a;
  local_80 = pbVar2;
  local_70 = puVar26;
  (**(code **)(*(long *)(param_1 + 0x1aa38) + 0x20))((long *)(param_1 + 0x1aa38),&local_80);
  *(undefined4 *)(param_1 + 0x1aa74) = 0;
  *(undefined1 *)(param_1 + 0x1aa78) = 1;
  local_80 = *(byte **)(param_1 + 0x18);
  lVar27 = param_1 + 0x510;
  *(undefined4 *)(param_1 + 0x1bc20) = 0;
  FUN_02a1c124(lVar27,&local_80);
  uVar17 = (ulong)*(int *)(param_1 + 0x4f8);
  if (*(int *)(param_1 + 0x4f8) != 0) {
    plVar21 = *(long **)(param_1 + 0x500);
    plVar22 = plVar21;
    for (uVar6 = uVar17 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(long *)(*plVar22 + 0x118) = lVar27;
      plVar22 = plVar22 + 1;
    }
    if (2 < (uVar17 - 1 & 0x1fffffffffffffff)) {
      do {
        *(long *)(*plVar22 + 0x118) = lVar27;
        *(long *)(plVar22[1] + 0x118) = lVar27;
        *(long *)(plVar22[2] + 0x118) = lVar27;
        plVar1 = plVar22 + 3;
        plVar22 = plVar22 + 4;
        *(long *)(*plVar1 + 0x118) = lVar27;
      } while (plVar22 != plVar21 + uVar17);
    }
  }
  *(undefined8 *)(param_1 + 0x1bbf0) = 0;
  *(long *)(param_1 + 0x1bbe0) = param_1;
  *(undefined1 **)(param_1 + 0x1bbe8) = &LAB_02a10600;
  lVar27 = *(long *)(param_1 + 0x310);
  if ((lVar27 != 0) && (uVar25 = *(uint *)(param_1 + 0x31c), uVar25 != 0)) {
    uVar10 = 0;
    if (uVar25 != 0) {
      uVar10 = 0x90755e55 / uVar25;
    }
    uVar10 = 0x90755e55 - uVar10 * uVar25;
    uVar11 = uVar10;
    do {
      iVar14 = *(int *)(lVar27 + (-(ulong)(uVar11 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar11 << 3
                                 ));
      if (iVar14 == -0x6f8aa1ab) {
        uVar25 = *(uint *)(lVar27 + (long)(int)uVar11 * 8 + 4);
        if ((((*(uint *)(param_1 + 0x2e0) <= uVar25) ||
             (lVar23 = *(long *)(*(long *)(param_1 + 0x2e8) + (long)(int)uVar25 * 8), lVar23 == 0))
            || (*(long *)(lVar23 + 0xc0) == 0)) ||
           (*(int *)(lVar23 + 0xbc) <= *(int *)(lVar23 + 0xb8))) goto LAB_02a0fa0c;
        *(long *)(*(long *)(lVar23 + 0xc0) + (long)*(int *)(lVar23 + 0xb8) * 8) = param_1 + 0x1bbd8;
        *(int *)(lVar23 + 0xb8) = *(int *)(lVar23 + 0xb8) + 1;
        lVar27 = *(long *)(param_1 + 0x310);
        break;
      }
      if (iVar14 == 0) goto LAB_02a0fa0c;
      uVar7 = 0;
      if ((int)(uVar11 + 1) < (int)uVar25) {
        uVar7 = uVar11 + 1;
      }
      uVar11 = uVar7;
    } while (uVar7 != uVar10);
    if (lVar27 != 0) {
LAB_02a0fa0c:
      uVar25 = *(uint *)(param_1 + 0x31c);
      if (uVar25 != 0) {
        uVar10 = 0;
        if (uVar25 != 0) {
          uVar10 = 0x90755e55 / uVar25;
        }
        uVar10 = 0x90755e55 - uVar10 * uVar25;
        uVar11 = uVar10;
        do {
          iVar14 = *(int *)(lVar27 + (-(ulong)(uVar11 >> 0x1f) & 0xfffffff800000000 |
                                     (ulong)uVar11 << 3));
          if (iVar14 == -0x6f8aa1ab) {
            uVar25 = *(uint *)(lVar27 + (long)(int)uVar11 * 8 + 4);
            if ((uVar25 < *(uint *)(param_1 + 0x2e0)) &&
               (lVar23 = *(long *)(*(long *)(param_1 + 0x2e8) + (long)(int)uVar25 * 8), lVar23 != 0)
               ) {
              *(undefined1 *)(lVar23 + 0xc9) = 1;
              lVar27 = *(long *)(param_1 + 0x310);
            }
            break;
          }
          if (iVar14 == 0) break;
          uVar7 = 0;
          if ((int)(uVar11 + 1) < (int)uVar25) {
            uVar7 = uVar11 + 1;
          }
          uVar11 = uVar7;
        } while (uVar7 != uVar10);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x1bc10) = 0;
  *(long *)(param_1 + 0x1bc00) = param_1;
  *(undefined1 **)(param_1 + 0x1bc08) = &LAB_02a10a70;
  if ((lVar27 != 0) && (uVar25 = *(uint *)(param_1 + 0x31c), uVar25 != 0)) {
    uVar10 = 0;
    if (uVar25 != 0) {
      uVar10 = 0xb10edbfc / uVar25;
    }
    uVar10 = 0xb10edbfc - uVar10 * uVar25;
    uVar11 = uVar10;
    do {
      iVar14 = *(int *)(lVar27 + (-(ulong)(uVar11 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar11 << 3
                                 ));
      if (iVar14 == -0x4ef12404) {
        uVar25 = *(uint *)(lVar27 + (long)(int)uVar11 * 8 + 4);
        if ((((uVar25 < *(uint *)(param_1 + 0x2e0)) &&
             (lVar27 = *(long *)(*(long *)(param_1 + 0x2e8) + (long)(int)uVar25 * 8), lVar27 != 0))
            && (*(long *)(lVar27 + 0xc0) != 0)) &&
           (*(int *)(lVar27 + 0xb8) < *(int *)(lVar27 + 0xbc))) {
          *(long *)(*(long *)(lVar27 + 0xc0) + (long)*(int *)(lVar27 + 0xb8) * 8) =
               param_1 + 0x1bbf8;
          *(int *)(lVar27 + 0xb8) = *(int *)(lVar27 + 0xb8) + 1;
        }
        break;
      }
      if (iVar14 == 0) break;
      uVar7 = 0;
      if ((int)(uVar11 + 1) < (int)uVar25) {
        uVar7 = uVar11 + 1;
      }
      uVar11 = uVar7;
    } while (uVar7 != uVar10);
  }
  (**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
  *(undefined8 *)(param_1 + 0x1bc70) = 0;
  *(undefined8 *)(param_1 + 0x1bc90) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x1bc88) = 0;
  *(undefined8 *)(param_1 + 0x1bc78) = 0;
  *(undefined8 *)(param_1 + 0x1bc80) = 0;
  uVar25 = *(uint *)(param_1 + 0x38c);
  if (0 < (int)uVar25) {
    puVar4 = (undefined4 *)(param_1 + 0x88);
    if (uVar25 == 1) {
      uVar17 = 0;
    }
    else {
      uVar17 = 0;
      lVar27 = param_1;
      do {
        lVar23 = uVar17 * 4;
        puVar5 = (undefined4 *)(lVar27 + 0x88);
        if (0x7f < uVar17) {
          puVar5 = puVar4;
        }
        *puVar5 = *(undefined4 *)(*(long *)(param_1 + 0x3a8) + lVar23);
        puVar5 = (undefined4 *)(lVar27 + 0x8c);
        lVar27 = lVar27 + 8;
        uVar6 = uVar17 + 1;
        uVar17 = uVar17 + 2;
        if (0x7f < uVar6) {
          puVar5 = puVar4;
        }
        *puVar5 = *(undefined4 *)(*(long *)(param_1 + 0x3a8) + lVar23 + 4);
      } while (uVar17 != ((ulong)uVar25 & 0xfffffffe));
    }
    if ((uVar25 & 1) != 0) {
      puVar5 = puVar4 + uVar17;
      if (0x7f < uVar17) {
        puVar5 = puVar4;
      }
      *puVar5 = *(undefined4 *)(*(long *)(param_1 + 0x3a8) + uVar17 * 4);
    }
  }
  *(undefined1 *)(param_1 + 0x1bc37) = *(undefined1 *)(param_1 + 9);
  *(undefined4 *)(param_1 + 0x1bc38) = *(undefined4 *)(param_1 + 0x1bc2c);
  *(undefined4 *)(param_1 + 0x1bc3c) = *(undefined4 *)(param_1 + 0x1bc30);
  *(undefined1 *)(param_1 + 0x1bc40) = *(undefined1 *)(param_1 + 0x1bc34);
  *(undefined2 *)(param_1 + 0x1bc41) = *(undefined2 *)(param_1 + 0x1bc35);
  return;
}

