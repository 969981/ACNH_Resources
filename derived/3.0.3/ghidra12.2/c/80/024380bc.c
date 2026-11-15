
/* WARNING: Type propagation algorithm not settling */

void FUN_024380bc(long param_1)

{
  byte *pbVar1;
  long lVar2;
  int iVar3;
  uint *puVar4;
  byte *pbVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  uint uVar9;
  char cVar10;
  short sVar11;
  int iVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  byte bVar18;
  byte bVar19;
  int iVar20;
  long lVar21;
  int iVar22;
  undefined4 local_1c4;
  undefined *local_1c0;
  char *local_1b8;
  int local_1b0;
  char *local_160;
  int local_158;
  undefined8 *local_108;
  int local_100;
  undefined1 local_94;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    local_6c = *(undefined4 *)(param_1 + 0x230);
    sVar11 = *(short *)PTR_DAT_04bb6298;
    if (sVar11 == -1) {
LAB_024381f4:
      FUN_016f742c(&local_68,&local_6c,0);
      if (*(int *)(param_1 + 0x178) == 0) goto LAB_0243820c;
    }
    else {
      local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,1);
      puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar11 * 8);
      if (0xff < (uint)(int)sVar11) {
        puVar4 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar4 >> 1 & 1) == 0) goto LAB_024381f4;
      local_68 = 0;
LAB_0243820c:
      local_64 = 10;
      local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,10);
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_024382fc;
    }
    plVar16 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar16 = *(long **)(param_1 + 0x4c8);
    }
    lVar15 = (**(code **)(*plVar16 + 0x148))();
    iVar20 = local_68 - *(int *)(lVar15 + 4);
    iVar22 = local_68;
    if (0xb60b5e < iVar20 + 0x5b05afU) {
      iVar12 = 0x15555560;
      iVar22 = -0x15555560;
      iVar20 = (int)((float)iVar20 * 0.3);
      if (iVar20 < 1) {
        iVar12 = -0x5b05b0;
      }
      else {
        iVar22 = 0x5b05b0;
      }
      iVar3 = iVar20;
      if (iVar12 <= iVar20) {
        iVar3 = iVar12;
      }
      if (iVar22 <= iVar20) {
        iVar22 = iVar3;
      }
      iVar22 = iVar22 + *(int *)(lVar15 + 4);
    }
    *(int *)(lVar15 + 4) = iVar22;
  }
  else {
    iVar22 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
    plVar16 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar16 = *(long **)(param_1 + 0x4c8);
    }
    lVar15 = (**(code **)(*plVar16 + 0x148))();
    iVar20 = iVar22 - *(int *)(lVar15 + 4);
    if (0xb60b5e < iVar20 + 0x5b05afU) {
      iVar12 = 0x15555560;
      iVar22 = -0x15555560;
      iVar20 = (int)((float)iVar20 * 0.3);
      if (iVar20 < 1) {
        iVar12 = -0x5b05b0;
      }
      else {
        iVar22 = 0x5b05b0;
      }
      iVar3 = iVar20;
      if (iVar12 <= iVar20) {
        iVar3 = iVar12;
      }
      if (iVar22 <= iVar20) {
        iVar22 = iVar3;
      }
      iVar22 = iVar22 + *(int *)(lVar15 + 4);
    }
    *(int *)(lVar15 + 4) = iVar22;
  }
LAB_024382fc:
  puVar14 = PTR_DAT_04bb47c0;
  puVar13 = PTR_DAT_04bb2020;
  lVar15 = *(long *)PTR_DAT_04bb47c0;
  if ((*(char *)(lVar15 + 0x19) != '\0') && (*(char *)(param_1 + 0x225d) == '\0')) {
    if (0 < *(int *)(param_1 + 0x2260)) {
      *(int *)(param_1 + 0x2260) = *(int *)(param_1 + 0x2260) + -1;
      return;
    }
    pbVar1 = (byte *)(param_1 + 0x1ee8);
    *(undefined1 *)(param_1 + 0x225d) = 1;
    lVar15 = *(long *)PTR_DAT_04bb39b0;
    if ((lVar15 != 0) && (*(int *)(lVar15 + 0x15c) != 0)) {
      pbVar5 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar15 + 0x15c) != 0) {
        pbVar5 = (byte *)(lVar15 + 0x158);
      }
      bVar19 = *pbVar1;
      bVar18 = *pbVar5;
      if (7 < bVar18) {
        bVar18 = 0xff;
      }
      if (7 < bVar19) {
        bVar19 = 0xff;
      }
      if (bVar18 != bVar19) goto LAB_024385f8;
    }
    FUN_0257a010(&local_1c0);
    if (local_1b8 != "Obj_Radio_RadioGymnastics") {
      iVar22 = 0x19;
      if (local_1b0 < 0x1a) {
        iVar22 = local_1b0 + -1;
      }
      memcpy(local_1b8,"Obj_Radio_RadioGymnastics",(long)iVar22);
      local_1b8[iVar22] = '\0';
    }
    if (local_160 != "SceneExit") {
      iVar22 = 9;
      if (local_158 < 10) {
        iVar22 = local_158 + -1;
      }
      memcpy(local_160,"SceneExit",(long)iVar22);
      local_160[iVar22] = '\0';
    }
    if (local_108 != &DAT_0407ebb1) {
      iVar22 = 0;
      if (local_100 < 1) {
        iVar22 = local_100 + -1;
      }
      memset(local_108,0,(long)iVar22);
      *(undefined1 *)((long)local_108 + (long)iVar22) = 0;
    }
    local_94 = 0;
    FUN_024480f0(param_1,&local_1c0);
LAB_024385f8:
    local_1c4 = 1;
    FUN_02538020(pbVar1,&local_1c4,1,0,0);
    local_1c0 = PTR_DAT_04bb2020 + 0x10;
    local_1b8 = "PV_RadioGym_Join";
    FUN_01b5c520(&local_1c0,1,pbVar1);
    FUN_009c2998(*(undefined8 *)puVar14,pbVar1,0);
    return;
  }
  uVar8 = *(undefined4 *)(lVar15 + 0xc);
  uVar9 = *(uint *)(lVar15 + 0x14);
  iVar22 = *(int *)(lVar15 + 0x1c);
  cVar10 = *(char *)(lVar15 + 0x34);
  local_1c0 = PTR_DAT_04bb2020 + 0x10;
  local_1b8 = "GymnasticsActionNum";
  lVar15 = *(long *)(*(long *)(param_1 + 0x60) + 0x1138);
  if (lVar15 != 0) {
    if ((*(long *)(lVar15 + 0x78) == 0) ||
       (plVar16 = *(long **)(*(long *)(lVar15 + 0x78) + 0x48), plVar16 == (long *)0x0)) {
      lVar15 = *(long *)(lVar15 + 0x78);
    }
    else {
      (**(code **)(*plVar16 + 0x28))(plVar16,&local_1c0,uVar9);
      local_1c0 = puVar13 + 0x10;
      lVar15 = *(long *)(*(long *)(param_1 + 0x60) + 0x1138);
      local_1b8 = "GymnasticsLastDeepBreathing";
      if (lVar15 == 0) goto LAB_024383c8;
      lVar15 = *(long *)(lVar15 + 0x78);
    }
    local_1b8 = "GymnasticsLastDeepBreathing";
    local_1c0 = puVar13 + 0x10;
    if (lVar15 != 0) {
      local_1b8 = "GymnasticsLastDeepBreathing";
      local_1c0 = puVar13 + 0x10;
      plVar16 = *(long **)(lVar15 + 0x48);
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 0x38))(plVar16,&local_1c0,cVar10 != '\0');
      }
    }
  }
LAB_024383c8:
  if (iVar22 == 0) {
    return;
  }
  iVar20 = *(int *)(param_1 + 0xf64);
  pbVar1 = (byte *)(param_1 + 0x100c);
  local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,iVar20);
  if (*(char *)(param_1 + 0x1014) != '\0') goto LAB_024383e4;
  switch(iVar20) {
  case 1:
    bVar18 = *pbVar1 >> 1;
    break;
  case 2:
    bVar18 = *pbVar1 >> 2;
    break;
  case 3:
    bVar18 = *pbVar1 >> 3;
    break;
  case 4:
    bVar18 = *pbVar1 >> 4;
    break;
  case 5:
    bVar18 = *pbVar1 >> 5;
    break;
  case 6:
    bVar18 = *pbVar1 >> 6;
    break;
  case 7:
    if (-1 < (char)*pbVar1) goto LAB_024383e4;
    goto LAB_024386a4;
  default:
    bVar18 = *pbVar1;
  }
  if ((bVar18 & 1) == 0) {
LAB_024383e4:
    if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
      return;
    }
    if (7 < (ulong)*(byte *)(param_1 + 0x1ee8)) {
      return;
    }
    lVar15 = *(long *)puVar14 + (ulong)*(byte *)(param_1 + 0x1ee8) * 0x10;
    *(undefined1 *)(lVar15 + 0x58) = 0;
    *(int *)(lVar15 + 0x5c) = iVar22;
    *(ulong *)(lVar15 + 0x60) = CONCAT44(uVar8,uVar9);
    uVar17 = (ulong)*(byte *)(param_1 + 0x1ee8);
    if (7 < uVar17) {
      return;
    }
    lVar2 = *(long *)puVar14 + uVar17 * 0x10;
    lVar15 = *(long *)puVar14 + 0xd8;
    lVar21 = lVar15 + uVar17 * 0x28;
    if (*(long *)(lVar21 + 8) == *(long *)(lVar2 + 0x58) &&
        *(long *)(lVar21 + 0x10) == *(long *)(lVar2 + 0x60)) {
      return;
    }
    lVar6 = *(long *)(lVar2 + 0x58);
    uVar7 = *(undefined8 *)(lVar2 + 0x60);
    *(undefined1 *)(lVar15 + uVar17 * 0x28 + 0x18) = 1;
    *(long *)(lVar21 + 8) = lVar6;
    *(undefined8 *)(lVar21 + 0x10) = uVar7;
    return;
  }
LAB_024386a4:
  *(undefined1 *)(param_1 + 0x1014) = 1;
  if ((*(int *)(param_1 + 0x2258) == iVar20) && (uVar9 == *(byte *)(param_1 + 0x225c))) {
    return;
  }
  switch(iVar20) {
  case 1:
    local_64 = 0;
    break;
  case 2:
    local_64 = 1;
    break;
  case 3:
    local_64 = 2;
    break;
  case 4:
    local_64 = 3;
    break;
  case 5:
    local_64 = 4;
    break;
  case 6:
    local_64 = 5;
    break;
  case 7:
    local_64 = 6;
    break;
  default:
    goto switchD_024386ec_default;
  }
  FUN_02438754(param_1,&local_64);
switchD_024386ec_default:
  return;
}

