
void FUN_013fd1e0(long param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  void *pvVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  byte *pbVar16;
  byte *pbVar17;
  int iVar18;
  int iVar19;
  ulong uVar20;
  byte local_7fc;
  undefined3 uStack_7fb;
  undefined *local_7f8;
  undefined1 auStack_7f0 [1876];
  uint local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  undefined **local_88;
  byte *pbStack_80;
  
  pvVar12 = (void *)(**(code **)(*(long *)(param_1 + 0x528) + 0x18))();
  memset(pvVar12,0,0x754);
  pvVar12 = (void *)(**(code **)(*(long *)(param_1 + 0xc98) + 0x18))();
  memset(pvVar12,0,0x754);
  local_7f8 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_7f0,0,0x754);
  uVar11 = nn::os::GetSystemTick();
  local_9c = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
  local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 2;
  local_94 = (local_98 ^ local_98 >> 0x1e) * 0x6c078965 + 3;
  local_90 = (local_94 ^ local_94 >> 0x1e) * 0x6c078965 + 4;
  pvVar12 = (void *)FUN_01a451fc(&local_7f8);
  memset(pvVar12,0,0x754);
  pbStack_80 = &local_7fc;
  local_7fc = 0x6a;
  uStack_7fb = 0;
  local_88 = &PTR_FUN_049ff448;
  FUN_008a1ba0(&local_7f8,&local_88);
  lVar13 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
  uVar20 = 0;
  do {
    if ((*(uint *)(lVar13 + (uVar20 >> 5) * 4) >> (ulong)((uint)uVar20 & 0x1f) & 1) != 0)
    goto LAB_013fd330;
    uVar11 = (uint)uVar20 + 1;
    uVar20 = (ulong)uVar11;
  } while (uVar11 != 15000);
  uVar20 = 0;
LAB_013fd330:
  lVar14 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
  puVar10 = PTR_DAT_04bbfe58;
  puVar9 = PTR_DAT_04bb5038;
  puVar8 = PTR_DAT_04bb39b0;
  puVar7 = PTR_DAT_04bb32e0;
  iVar18 = 15000;
  do {
    if ((*(uint *)(lVar14 + (ulong)(iVar18 - 1U >> 5) * 4) >> (ulong)(iVar18 - 1U & 0x1f) & 1) != 0)
    break;
    iVar18 = iVar18 + -1;
  } while (iVar18 != 0);
  iVar19 = (int)uVar20;
joined_r0x013fd370:
  if (iVar18 == iVar19) {
    return;
  }
  lVar14 = *(long *)puVar8;
  pbVar17 = puVar7;
  if (lVar14 == 0) {
    if (7 < (byte)*puVar7) goto LAB_013fd434;
LAB_013fd4a0:
    local_7fc = *pbVar17;
    if (7 < local_7fc) {
      local_7fc = 0xff;
    }
  }
  else {
    if (*(int *)(lVar14 + 0x15c) != 0) {
      pbVar17 = (byte *)(lVar14 + 0x158);
    }
    if ((*pbVar17 < 8) ||
       (((*(int *)(lVar14 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar17 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar17 < 8)))) goto LAB_013fd4a0;
LAB_013fd434:
    pbVar17 = puVar9;
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) goto LAB_013fd4a0;
    lVar14 = **(long **)PTR_DAT_04bb27d0;
    bVar5 = *(byte *)(lVar14 + 0x473);
    pbVar16 = puVar9;
    if ((long)(char)bVar5 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
      if (7 < bVar5) {
        puVar2 = (uint *)(lVar14 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar16 = (byte *)(lVar14 + 0x471);
      }
    }
    local_7fc = *pbVar16;
    if (7 < local_7fc) goto LAB_013fd4a0;
  }
  puVar3 = (undefined8 *)(puVar10 + uVar20 * 8);
  if (0x752 < (uint)(uVar20 >> 3)) {
    puVar3 = (undefined8 *)puVar10;
  }
  puVar4 = (undefined8 *)PTR_DAT_04bb37e0;
  if ((uint)uVar20 < 0x3a99) {
    puVar4 = puVar3;
  }
  local_88 = (undefined **)*puVar4;
  uVar15 = FUN_0264a1e0(&local_7fc,&local_88);
  if ((uVar15 & 1) != 0) {
    local_88 = (undefined **)*puVar4;
    FUN_0277dedc(&local_88);
    lVar14 = (**(code **)(*(long *)(param_1 + 0x528) + 0x18))();
    uVar11 = FUN_0277d6c4(&local_88);
    if ((uVar11 >> 3 & 0x1fff) < 0x753) {
      lVar6 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
      *(uint *)(lVar14 + lVar6) = *(uint *)(lVar14 + lVar6) | 1 << (ulong)(uVar11 & 0x1f);
    }
    local_88 = (undefined **)*puVar4;
    FUN_0277dedc(&local_88);
    lVar14 = (**(code **)(*(long *)(param_1 + 0xc98) + 0x18))();
    uVar11 = FUN_0277d6c4(&local_88);
    if ((uVar11 >> 3 & 0x1fff) < 0x753) {
      lVar6 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
      *(uint *)(lVar14 + lVar6) = *(uint *)(lVar14 + lVar6) | 1 << (ulong)(uVar11 & 0x1f);
    }
  }
  do {
    uVar11 = (int)uVar20 + 1;
    uVar20 = (ulong)uVar11;
    if (0x752 < uVar11 >> 3) {
      uVar11 = 0x3a95;
      goto LAB_013fd5e4;
    }
  } while ((*(uint *)(lVar13 + (ulong)(uVar11 >> 5) * 4) >> (ulong)(uVar11 & 0x1f) & 1) == 0);
  goto LAB_013fd3c8;
  while( true ) {
    uVar1 = uVar11 + 1;
    if ((*(uint *)(lVar13 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0)
    goto LAB_013fd3c0;
    if ((*(uint *)(lVar13 + (ulong)(uVar11 >> 5) * 4) >> (ulong)(uVar11 & 0x1f) & 1) != 0)
    goto LAB_013fd3c4;
    uVar11 = uVar11 - 3;
    if (uVar11 == 0xfffffffd) break;
LAB_013fd5e4:
    uVar1 = uVar11 + 2;
    if ((*(uint *)(lVar13 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0) {
LAB_013fd3c0:
      uVar11 = uVar1;
LAB_013fd3c4:
      uVar20 = (ulong)(uVar11 + 1);
      goto LAB_013fd3c8;
    }
  }
  uVar20 = 0;
LAB_013fd3c8:
  iVar19 = (int)uVar20;
  goto joined_r0x013fd370;
}

