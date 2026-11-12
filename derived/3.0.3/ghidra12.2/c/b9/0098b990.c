
void FUN_0098b990(long *param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  ulong uVar12;
  void *pvVar13;
  long lVar14;
  ulong uVar15;
  byte *pbVar16;
  long lVar17;
  int iVar18;
  undefined4 local_804;
  undefined *local_800;
  char *apcStack_7f8 [234];
  uint local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  byte local_8c [4];
  undefined **local_88;
  undefined4 *puStack_80;
  
  puVar7 = PTR_DAT_04bb2020;
  lVar17 = *(long *)PTR_DAT_04bb39b0;
  pbVar16 = PTR_DAT_04bb32e0;
  if (lVar17 == 0) {
LAB_0098ba28:
    if (*pbVar16 < 8) goto LAB_0098ba98;
LAB_0098ba34:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0098ba90:
      pbVar16 = PTR_DAT_04bb5038;
      goto LAB_0098ba98;
    }
    lVar17 = **(long **)PTR_DAT_04bb27d0;
    bVar5 = *(byte *)(lVar17 + 0x473);
    pbVar16 = PTR_DAT_04bb5038;
    if ((long)(char)bVar5 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar17 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
      if (7 < bVar5) {
        puVar2 = (uint *)(lVar17 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar16 = (byte *)(lVar17 + 0x471);
      }
    }
    local_8c[0] = *pbVar16;
    if (7 < local_8c[0]) goto LAB_0098ba90;
  }
  else {
    if (*(int *)(lVar17 + 0x15c) != 0) {
      pbVar16 = (byte *)(lVar17 + 0x158);
    }
    if (7 < *pbVar16) {
      if ((*(int *)(lVar17 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar16 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0098ba28;
      }
      goto LAB_0098ba34;
    }
LAB_0098ba98:
    local_8c[0] = *pbVar16;
    if (7 < local_8c[0]) {
      local_8c[0] = 0xff;
      goto LAB_0098bb10;
    }
  }
  if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
    iVar9 = FUN_02582d8c(local_8c,2);
    if (iVar9 < 0) goto LAB_0098bb10;
  }
  else {
    local_800 = (undefined *)CONCAT71(local_800._1_7_,local_8c[0]);
    uVar12 = FUN_01d3e2d0(**(long **)PTR_DAT_04bb27d0 + 8,&local_800);
    if ((uVar12 & 1) == 0) goto LAB_0098bb10;
  }
  local_800 = puVar7 + 0x10;
  apcStack_7f8[0] = "CatchFish";
  uVar10 = FUN_02798760(local_8c,&local_800);
  *(undefined4 *)(param_1 + 0xee) = uVar10;
LAB_0098bb10:
  local_800 = puVar7 + 0x10;
  apcStack_7f8[0] = "CatchInsect";
  uVar10 = FUN_02798760(local_8c,&local_800);
  *(undefined4 *)((long)param_1 + 0x774) = uVar10;
  pvVar13 = (void *)(**(code **)(*param_1 + 0x18))(param_1);
  memset(pvVar13,0,0x754);
  local_800 = PTR_DAT_04bbfe60 + 0x10;
  memset(apcStack_7f8,0,0x754);
  uVar11 = nn::os::GetSystemTick();
  local_a4 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
  local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 2;
  local_9c = (local_a0 ^ local_a0 >> 0x1e) * 0x6c078965 + 3;
  local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 4;
  pvVar13 = (void *)(**(code **)(local_800 + 0x18))(&local_800);
  memset(pvVar13,0,0x754);
  local_804 = 0x69;
  puStack_80 = &local_804;
  local_88 = &PTR_FUN_049ff448;
  FUN_008a1ba0(&local_800,&local_88);
  lVar17 = (**(code **)(local_800 + 0x20))(&local_800);
  uVar12 = 0;
  do {
    if ((*(uint *)(lVar17 + (uVar12 >> 5) * 4) >> (ulong)((uint)uVar12 & 0x1f) & 1) != 0)
    goto LAB_0098bc50;
    uVar11 = (uint)uVar12 + 1;
    uVar12 = (ulong)uVar11;
  } while (uVar11 != 15000);
  uVar12 = 0;
LAB_0098bc50:
  lVar14 = (**(code **)(local_800 + 0x20))(&local_800);
  puVar8 = PTR_DAT_04bbfe58;
  puVar7 = PTR_DAT_04bb37e0;
  iVar9 = 15000;
  do {
    if ((*(uint *)(lVar14 + (ulong)(iVar9 - 1U >> 5) * 4) >> (ulong)(iVar9 - 1U & 0x1f) & 1) != 0)
    break;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  if (iVar9 != (int)uVar12) {
LAB_0098c390:
    puVar3 = (undefined8 *)(puVar8 + uVar12 * 8);
    if (0x752 < (uint)(uVar12 >> 3)) {
      puVar3 = (undefined8 *)puVar8;
    }
    puVar4 = (undefined8 *)puVar7;
    if ((uint)uVar12 < 0x3a99) {
      puVar4 = puVar3;
    }
    local_88 = (undefined **)*puVar4;
    uVar15 = FUN_0264a1e0(local_8c,&local_88);
    if ((uVar15 & 1) != 0) {
      FUN_0277dedc(&local_88);
      lVar14 = (**(code **)(*param_1 + 0x18))(param_1);
      uVar11 = FUN_0277d6c4(&local_88);
      if ((uVar11 >> 3 & 0x1fff) < 0x753) {
        lVar6 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
        *(uint *)(lVar14 + lVar6) = *(uint *)(lVar14 + lVar6) | 1 << (ulong)(uVar11 & 0x1f);
      }
    }
    do {
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulong)uVar11;
      if (0x752 < uVar11 >> 3) {
        uVar11 = 0x3a95;
        goto LAB_0098c440;
      }
    } while ((*(uint *)(lVar17 + (ulong)(uVar11 >> 5) * 4) >> (ulong)(uVar11 & 0x1f) & 1) == 0);
    goto LAB_0098c388;
  }
LAB_0098bc94:
  local_800 = (undefined *)0x283;
  FUN_0277d4ac(&local_800);
  lVar17 = (**(code **)(*param_1 + 0x18))(param_1);
  uVar11 = FUN_0277d6c4(&local_800);
  if ((uVar11 >> 3 & 0x1fff) < 0x753) {
    lVar14 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
    *(uint *)(lVar17 + lVar14) =
         *(uint *)(lVar17 + lVar14) & (1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU);
  }
  local_800 = (undefined *)0x280;
  FUN_0277d4ac(&local_800);
  lVar17 = (**(code **)(*param_1 + 0x18))(param_1);
  uVar11 = FUN_0277d6c4(&local_800);
  if ((uVar11 >> 3 & 0x1fff) < 0x753) {
    lVar14 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
    *(uint *)(lVar17 + lVar14) =
         *(uint *)(lVar17 + lVar14) & (1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU);
  }
  local_800 = (undefined *)0x286;
  FUN_0277d4ac(&local_800);
  lVar17 = (**(code **)(*param_1 + 0x18))(param_1);
  uVar11 = FUN_0277d6c4(&local_800);
  if ((uVar11 >> 3 & 0x1fff) < 0x753) {
    lVar14 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
    *(uint *)(lVar17 + lVar14) =
         *(uint *)(lVar17 + lVar14) & (1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU);
  }
  local_800 = (undefined *)0x279;
  FUN_0277d4ac(&local_800);
  lVar17 = (**(code **)(*param_1 + 0x18))(param_1);
  uVar11 = FUN_0277d6c4(&local_800);
  if ((uVar11 >> 3 & 0x1fff) < 0x753) {
    lVar14 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
    *(uint *)(lVar17 + lVar14) =
         *(uint *)(lVar17 + lVar14) & (1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU);
  }
  local_800 = (undefined *)0x28b;
  FUN_0277d4ac(&local_800);
  lVar17 = (**(code **)(*param_1 + 0x18))(param_1);
  uVar11 = FUN_0277d6c4(&local_800);
  if ((uVar11 >> 3 & 0x1fff) < 0x753) {
    lVar14 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
    *(uint *)(lVar17 + lVar14) =
         *(uint *)(lVar17 + lVar14) & (1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU);
  }
  local_800 = (undefined *)0x268;
  FUN_0277d4ac(&local_800);
  lVar17 = (**(code **)(*param_1 + 0x18))(param_1);
  uVar11 = FUN_0277d6c4(&local_800);
  if ((uVar11 >> 3 & 0x1fff) < 0x753) {
    lVar14 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
    *(uint *)(lVar17 + lVar14) =
         *(uint *)(lVar17 + lVar14) & (1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU);
  }
  local_800 = (undefined *)0x272;
  FUN_0277d4ac(&local_800);
  FUN_0277dedc(&local_800);
  lVar17 = (**(code **)(*param_1 + 0x18))(param_1);
  uVar11 = FUN_0277d6c4(&local_800);
  if ((uVar11 >> 3 & 0x1fff) < 0x753) {
    lVar14 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
    *(uint *)(lVar17 + lVar14) = *(uint *)(lVar17 + lVar14) | 1 << (ulong)(uVar11 & 0x1f);
  }
  local_800 = (undefined *)0x271;
  FUN_0277d4ac(&local_800);
  FUN_0277dedc(&local_800);
  lVar17 = (**(code **)(*param_1 + 0x18))(param_1);
  uVar11 = FUN_0277d6c4(&local_800);
  if ((uVar11 >> 3 & 0x1fff) < 0x753) {
    lVar14 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
    *(uint *)(lVar17 + lVar14) = *(uint *)(lVar17 + lVar14) | 1 << (ulong)(uVar11 & 0x1f);
  }
  local_800 = (undefined *)0x247;
  FUN_0277d4ac(&local_800);
  FUN_0277dedc(&local_800);
  lVar17 = (**(code **)(*param_1 + 0x18))(param_1);
  uVar11 = FUN_0277d6c4(&local_800);
  if ((uVar11 >> 3 & 0x1fff) < 0x753) {
    lVar14 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
    *(uint *)(lVar17 + lVar14) = *(uint *)(lVar17 + lVar14) | 1 << (ulong)(uVar11 & 0x1f);
  }
  local_800 = (undefined *)0x14db;
  FUN_0277d4ac(&local_800);
  FUN_0277dedc(&local_800);
  lVar17 = (**(code **)(*param_1 + 0x18))(param_1);
  uVar11 = FUN_0277d6c4(&local_800);
  if ((uVar11 >> 3 & 0x1fff) < 0x753) {
    lVar14 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
    *(uint *)(lVar17 + lVar14) = *(uint *)(lVar17 + lVar14) | 1 << (ulong)(uVar11 & 0x1f);
  }
  local_800 = (undefined *)0x24e;
  FUN_0277d4ac(&local_800);
  FUN_0277dedc(&local_800);
  lVar17 = (**(code **)(*param_1 + 0x18))(param_1);
  uVar11 = FUN_0277d6c4(&local_800);
  if ((uVar11 >> 3 & 0x1fff) < 0x753) {
    lVar14 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
    *(uint *)(lVar17 + lVar14) = *(uint *)(lVar17 + lVar14) | 1 << (ulong)(uVar11 & 0x1f);
  }
  local_800 = (undefined *)0x26b;
  FUN_0277d4ac(&local_800);
  FUN_0277dedc(&local_800);
  lVar17 = (**(code **)(*param_1 + 0x18))(param_1);
  uVar11 = FUN_0277d6c4(&local_800);
  if ((uVar11 >> 3 & 0x1fff) < 0x753) {
    lVar14 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
    *(uint *)(lVar17 + lVar14) = *(uint *)(lVar17 + lVar14) | 1 << (ulong)(uVar11 & 0x1f);
  }
  local_800 = (undefined *)0x1cce;
  FUN_0277d4ac(&local_800);
  FUN_0277dedc(&local_800);
  lVar17 = (**(code **)(*param_1 + 0x18))(param_1);
  uVar11 = FUN_0277d6c4(&local_800);
  if ((uVar11 >> 3 & 0x1fff) < 0x753) {
    lVar14 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
    *(uint *)(lVar17 + lVar14) = *(uint *)(lVar17 + lVar14) | 1 << (ulong)(uVar11 & 0x1f);
  }
  local_800 = (undefined *)0x16e3;
  FUN_0277d4ac(&local_800);
  FUN_0277dedc(&local_800);
  lVar17 = (**(code **)(*param_1 + 0x18))(param_1);
  uVar11 = FUN_0277d6c4(&local_800);
  if ((uVar11 >> 3 & 0x1fff) < 0x753) {
    lVar14 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
    *(uint *)(lVar17 + lVar14) = *(uint *)(lVar17 + lVar14) | 1 << (ulong)(uVar11 & 0x1f);
  }
  local_800 = (undefined *)0xdd3;
  FUN_0277d4ac(&local_800);
  FUN_0277dedc(&local_800);
  lVar17 = (**(code **)(*param_1 + 0x18))(param_1);
  uVar11 = FUN_0277d6c4(&local_800);
  if ((uVar11 >> 3 & 0x1fff) < 0x753) {
    lVar14 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
    *(uint *)(lVar17 + lVar14) = *(uint *)(lVar17 + lVar14) | 1 << (ulong)(uVar11 & 0x1f);
  }
  local_800 = PTR_DAT_04bbfe60 + 0x10;
  memset(apcStack_7f8,0,0x754);
  uVar11 = nn::os::GetSystemTick();
  local_a4 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
  local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 2;
  local_9c = (local_a0 ^ local_a0 >> 0x1e) * 0x6c078965 + 3;
  local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 4;
  pvVar13 = (void *)FUN_01a451fc(&local_800);
  memset(pvVar13,0,0x754);
  local_804 = 0x6a;
  puStack_80 = &local_804;
  local_88 = &PTR_FUN_049ff448;
  FUN_008a1ba0(&local_800,&local_88);
  lVar17 = (**(code **)(local_800 + 0x20))(&local_800);
  uVar12 = 0;
  do {
    if ((*(uint *)(lVar17 + (uVar12 >> 5) * 4) >> (ulong)((uint)uVar12 & 0x1f) & 1) != 0)
    goto LAB_0098c2f0;
    uVar11 = (uint)uVar12 + 1;
    uVar12 = (ulong)uVar11;
  } while (uVar11 != 15000);
  uVar12 = 0;
LAB_0098c2f0:
  lVar14 = (**(code **)(local_800 + 0x20))(&local_800);
  puVar8 = PTR_DAT_04bbfe58;
  puVar7 = PTR_DAT_04bb37e0;
  iVar9 = 15000;
  do {
    if ((*(uint *)(lVar14 + (ulong)(iVar9 - 1U >> 5) * 4) >> (ulong)(iVar9 - 1U & 0x1f) & 1) != 0)
    break;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  iVar18 = (int)uVar12;
joined_r0x0098c330:
  if (iVar9 == iVar18) {
    FUN_013fd900(*(undefined8 *)PTR_DAT_04bb3d80);
    return;
  }
  puVar3 = (undefined8 *)(puVar8 + uVar12 * 8);
  if (0x752 < (uint)(uVar12 >> 3)) {
    puVar3 = (undefined8 *)puVar8;
  }
  puVar4 = (undefined8 *)puVar7;
  if ((uint)uVar12 < 0x3a99) {
    puVar4 = puVar3;
  }
  local_88 = (undefined **)*puVar4;
  uVar15 = FUN_0264a1e0(local_8c,&local_88);
  if ((uVar15 & 1) != 0) {
    FUN_0277dedc(&local_88);
    lVar14 = (**(code **)(*param_1 + 0x18))(param_1);
    uVar11 = FUN_0277d6c4(&local_88);
    if ((uVar11 >> 3 & 0x1fff) < 0x753) {
      lVar6 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
      *(uint *)(lVar14 + lVar6) = *(uint *)(lVar14 + lVar6) | 1 << (ulong)(uVar11 & 0x1f);
    }
  }
  do {
    uVar11 = (int)uVar12 + 1;
    uVar12 = (ulong)uVar11;
    if (0x752 < uVar11 >> 3) {
      uVar11 = 0x3a95;
      goto LAB_0098c570;
    }
  } while ((*(uint *)(lVar17 + (ulong)(uVar11 >> 5) * 4) >> (ulong)(uVar11 & 0x1f) & 1) == 0);
  goto LAB_0098c4b8;
  while( true ) {
    uVar1 = uVar11 + 1;
    if ((*(uint *)(lVar17 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0)
    goto LAB_0098c380;
    if ((*(uint *)(lVar17 + (ulong)(uVar11 >> 5) * 4) >> (ulong)(uVar11 & 0x1f) & 1) != 0)
    goto LAB_0098c384;
    uVar11 = uVar11 - 3;
    if (uVar11 == 0xfffffffd) break;
LAB_0098c440:
    uVar1 = uVar11 + 2;
    if ((*(uint *)(lVar17 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0) {
LAB_0098c380:
      uVar11 = uVar1;
LAB_0098c384:
      uVar12 = (ulong)(uVar11 + 1);
      goto LAB_0098c388;
    }
  }
  uVar12 = 0;
LAB_0098c388:
  if (iVar9 == (int)uVar12) goto LAB_0098bc94;
  goto LAB_0098c390;
  while( true ) {
    uVar1 = uVar11 + 1;
    if ((*(uint *)(lVar17 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0)
    goto LAB_0098c4b0;
    if ((*(uint *)(lVar17 + (ulong)(uVar11 >> 5) * 4) >> (ulong)(uVar11 & 0x1f) & 1) != 0)
    goto LAB_0098c4b4;
    uVar11 = uVar11 - 3;
    if (uVar11 == 0xfffffffd) break;
LAB_0098c570:
    uVar1 = uVar11 + 2;
    if ((*(uint *)(lVar17 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0) {
LAB_0098c4b0:
      uVar11 = uVar1;
LAB_0098c4b4:
      uVar12 = (ulong)(uVar11 + 1);
      goto LAB_0098c4b8;
    }
  }
  uVar12 = 0;
LAB_0098c4b8:
  iVar18 = (int)uVar12;
  goto joined_r0x0098c330;
}

