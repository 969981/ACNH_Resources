
/* WARNING: Type propagation algorithm not settling */

void FUN_034240e0(undefined4 *param_1,byte *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  void *pvVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  int iVar23;
  long lVar24;
  int iVar25;
  uint local_830;
  uint local_82c;
  byte local_800 [4];
  undefined4 local_7fc;
  undefined *local_7f8;
  undefined1 auStack_7f0 [1876];
  uint local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  undefined **local_88;
  undefined4 *puStack_80;
  
  local_800[0] = *param_2;
  if (7 < local_800[0]) {
    local_800[0] = 0xff;
  }
  lVar15 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_800,1);
  if (lVar15 == 0) {
    return;
  }
  lVar24 = lVar15 + 0x194b0;
  plVar21 = (long *)(lVar15 + 0x194b8);
  lVar19 = *plVar21;
  if (lVar19 == 0) {
    plVar20 = *(long **)(*(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20) + 0x108);
    lVar8 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
  }
  else {
    plVar20 = *(long **)(lVar15 + 0x195b8);
    lVar8 = lVar24;
  }
  if ((plVar20 == (long *)0x0) || ((undefined8 *)*plVar20 == (undefined8 *)0x0)) {
    local_82c = 0;
  }
  else {
    local_82c = (*(code *)**(undefined8 **)*plVar20)();
    lVar19 = *plVar21;
  }
  if (lVar19 == 0) {
    plVar20 = *(long **)(*(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20) + 0xd0);
    lVar7 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
  }
  else {
    plVar20 = *(long **)(lVar15 + 0x19580);
    lVar7 = lVar24;
  }
  if ((plVar20 == (long *)0x0) || ((undefined8 *)*plVar20 == (undefined8 *)0x0)) {
    local_830 = 0;
  }
  else {
    local_830 = (*(code *)**(undefined8 **)*plVar20)();
    lVar19 = *plVar21;
  }
  if (lVar19 == 0) {
    lVar24 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    plVar21 = *(long **)(lVar24 + 0x178);
  }
  else {
    plVar21 = *(long **)(lVar15 + 0x19628);
  }
  if ((plVar21 == (long *)0x0) || ((undefined8 *)*plVar21 == (undefined8 *)0x0)) {
    uVar11 = 1;
  }
  else {
    uVar11 = (*(code *)**(undefined8 **)*plVar21)();
    uVar11 = uVar11 ^ 1;
  }
  local_7f8 = (undefined *)0x9d1;
  FUN_0277d4ac(&local_7f8);
  uVar12 = FUN_034246e0(*(long *)(lVar8 + 0xf0) + *(long *)(lVar8 + 0xe8),
                        *(long *)(lVar7 + 0xb8) + *(long *)(lVar7 + 0xb0),
                        *(long *)(lVar24 + 0x160) + *(long *)(lVar24 + 0x158),&local_7f8,param_3,0,0
                        ,0);
  local_7f8 = PTR_DAT_04bbfe60;
  *param_1 = uVar12;
  lVar15 = *(long *)(lVar8 + 0xe8);
  lVar4 = *(long *)(lVar8 + 0xf0);
  lVar19 = *(long *)(lVar7 + 0xb0);
  lVar5 = *(long *)(lVar7 + 0xb8);
  local_7f8 = local_7f8 + 0x10;
  lVar3 = *(long *)(lVar24 + 0x158);
  lVar6 = *(long *)(lVar24 + 0x160);
  memset(auStack_7f0,0,0x754);
  uVar13 = nn::os::GetSystemTick();
  local_9c = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
  local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 2;
  local_94 = (local_98 ^ local_98 >> 0x1e) * 0x6c078965 + 3;
  local_90 = (local_94 ^ local_94 >> 0x1e) * 0x6c078965 + 4;
  pvVar16 = (void *)(**(code **)(local_7f8 + 0x18))(&local_7f8);
  memset(pvVar16,0,0x754);
  pvVar16 = (void *)(**(code **)(local_7f8 + 0x18))(&local_7f8);
  memset(pvVar16,0,0x754);
  puStack_80 = &local_7fc;
  local_7fc = 0x61;
  local_88 = &PTR_FUN_049ff448;
  FUN_008a1ba0(&local_7f8,&local_88);
  lVar17 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
  iVar23 = 15000;
  do {
    if ((*(uint *)(lVar17 + (ulong)(iVar23 - 1U >> 5) * 4) >> (ulong)(iVar23 - 1U & 0x1f) & 1) != 0)
    break;
    iVar23 = iVar23 + -1;
  } while (iVar23 != 0);
  lVar17 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
  puVar10 = PTR_DAT_04bbfe58;
  puVar9 = PTR_DAT_04bb37e0;
  uVar22 = 0;
  do {
    if ((*(uint *)(lVar17 + (uVar22 >> 5) * 4) >> (ulong)((uint)uVar22 & 0x1f) & 1) != 0)
    goto LAB_034243e4;
    uVar13 = (uint)uVar22 + 1;
    uVar22 = (ulong)uVar13;
  } while (uVar13 != 15000);
  uVar22 = 0;
LAB_034243e4:
  if (iVar23 == (int)uVar22) {
    iVar25 = 0;
LAB_034243f4:
    local_7f8 = (undefined *)0x11ad;
    param_1[1] = iVar25;
    FUN_0277d4ac(&local_7f8);
    uVar12 = FUN_034246e0(*(long *)(lVar8 + 0xf0) + *(long *)(lVar8 + 0xe8),
                          *(long *)(lVar7 + 0xb8) + *(long *)(lVar7 + 0xb0),
                          *(long *)(lVar24 + 0x160) + *(long *)(lVar24 + 0x158),&local_7f8,param_3,0
                          ,0,0);
    param_1[2] = uVar12;
    local_7f8 = (undefined *)0x11ae;
    FUN_0277d4ac(&local_7f8);
    uVar12 = FUN_034246e0(*(long *)(lVar8 + 0xf0) + *(long *)(lVar8 + 0xe8),
                          *(long *)(lVar7 + 0xb8) + *(long *)(lVar7 + 0xb0),
                          *(long *)(lVar24 + 0x160) + *(long *)(lVar24 + 0x158),&local_7f8,param_3,0
                          ,0,0);
    param_1[3] = uVar12;
    local_7f8 = (undefined *)0x11af;
    FUN_0277d4ac(&local_7f8);
    uVar12 = FUN_034246e0(*(long *)(lVar8 + 0xf0) + *(long *)(lVar8 + 0xe8),
                          *(long *)(lVar7 + 0xb8) + *(long *)(lVar7 + 0xb0),
                          *(long *)(lVar24 + 0x160) + *(long *)(lVar24 + 0x158),&local_7f8,param_3,0
                          ,0,0);
    param_1[4] = uVar12;
    local_7f8 = (undefined *)0x11b0;
    FUN_0277d4ac(&local_7f8);
    uVar12 = FUN_034246e0(*(long *)(lVar8 + 0xf0) + *(long *)(lVar8 + 0xe8),
                          *(long *)(lVar7 + 0xb8) + *(long *)(lVar7 + 0xb0),
                          *(long *)(lVar24 + 0x160) + *(long *)(lVar24 + 0x158),&local_7f8,param_3,0
                          ,0,0);
    param_1[5] = uVar12;
    local_7f8 = (undefined *)0xddc;
    FUN_0277d4ac(&local_7f8);
    uVar12 = FUN_034246e0(*(long *)(lVar8 + 0xf0) + *(long *)(lVar8 + 0xe8),
                          *(long *)(lVar7 + 0xb8) + *(long *)(lVar7 + 0xb0),
                          *(long *)(lVar24 + 0x160) + *(long *)(lVar24 + 0x158),&local_7f8,param_3,0
                          ,0,0);
    param_1[6] = uVar12;
    if ((((uVar11 & 1) == 0) && (*(long *)(lVar24 + 0x178) != 0)) &&
       (puVar18 = *(undefined8 **)(*(long *)(lVar24 + 0x178) + 8), puVar18 != (undefined8 *)0x0)) {
      (**(code **)*puVar18)();
    }
    if ((((local_830 & 1) != 0) && (*(long *)(lVar7 + 0xd0) != 0)) &&
       (puVar18 = *(undefined8 **)(*(long *)(lVar7 + 0xd0) + 8), puVar18 != (undefined8 *)0x0)) {
      (**(code **)*puVar18)();
    }
    if ((((local_82c & 1) != 0) && (*(long *)(lVar8 + 0x108) != 0)) &&
       (puVar18 = *(undefined8 **)(*(long *)(lVar8 + 0x108) + 8), puVar18 != (undefined8 *)0x0)) {
      (**(code **)*puVar18)();
    }
    return;
  }
  iVar25 = 0;
LAB_03424610:
  puVar18 = (undefined8 *)(puVar10 + uVar22 * 8);
  if (0x752 < (uint)(uVar22 >> 3)) {
    puVar18 = (undefined8 *)puVar10;
  }
  puVar2 = (undefined8 *)puVar9;
  if ((uint)uVar22 < 0x3a99) {
    puVar2 = puVar18;
  }
  local_88 = (undefined **)*puVar2;
  iVar14 = FUN_034246e0(lVar4 + lVar15,lVar5 + lVar19,lVar6 + lVar3,&local_88,param_3,0,0,0);
  iVar25 = iVar14 + iVar25;
  do {
    uVar13 = (int)uVar22 + 1;
    uVar22 = (ulong)uVar13;
    if (0x752 < uVar13 >> 3) {
      uVar13 = 0x3a95;
      goto LAB_03424690;
    }
  } while ((*(uint *)(lVar17 + (ulong)(uVar13 >> 5) * 4) >> (ulong)(uVar13 & 0x1f) & 1) == 0);
  goto LAB_03424608;
  while( true ) {
    if ((*(uint *)(lVar17 + (ulong)(uVar13 >> 5) * 4) >> (ulong)(uVar13 & 0x1f) & 1) != 0)
    goto LAB_03424604;
    uVar13 = uVar13 - 3;
    if (uVar13 == 0xfffffffd) break;
LAB_03424690:
    uVar1 = uVar13 + 2;
    if (((*(uint *)(lVar17 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0) ||
       (uVar1 = uVar13 + 1,
       (*(uint *)(lVar17 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
      uVar13 = uVar1;
LAB_03424604:
      uVar22 = (ulong)(uVar13 + 1);
      goto LAB_03424608;
    }
  }
  uVar22 = 0;
LAB_03424608:
  if (iVar23 == (int)uVar22) goto LAB_034243f4;
  goto LAB_03424610;
}

