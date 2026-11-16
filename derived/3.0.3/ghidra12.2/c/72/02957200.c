
void FUN_02957200(long param_1)

{
  uint uVar1;
  long *plVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  uint uVar12;
  void *pvVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  byte *pbVar17;
  byte *pbVar18;
  int iVar19;
  int iVar20;
  ulong uVar21;
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
  
  plVar2 = (long *)(param_1 + 0x1e8);
  pvVar13 = (void *)(**(code **)(*(long *)(param_1 + 0x1e8) + 0x18))(plVar2);
  memset(pvVar13,0,0x754);
  local_7f8 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_7f0,0,0x754);
  uVar12 = nn::os::GetSystemTick();
  local_9c = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 1;
  local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 2;
  local_94 = (local_98 ^ local_98 >> 0x1e) * 0x6c078965 + 3;
  local_90 = (local_94 ^ local_94 >> 0x1e) * 0x6c078965 + 4;
  pvVar13 = (void *)FUN_01a451fc(&local_7f8);
  memset(pvVar13,0,0x754);
  pbStack_80 = &local_7fc;
  local_7fc = 0x6b;
  uStack_7fb = 0;
  local_88 = &PTR_FUN_049ff448;
  FUN_008a1ba0(&local_7f8,&local_88);
  lVar14 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
  uVar21 = 0;
  do {
    if ((*(uint *)(lVar14 + (uVar21 >> 5) * 4) >> (ulong)((uint)uVar21 & 0x1f) & 1) != 0)
    goto LAB_02957330;
    uVar12 = (uint)uVar21 + 1;
    uVar21 = (ulong)uVar12;
  } while (uVar12 != 15000);
  uVar21 = 0;
LAB_02957330:
  lVar15 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
  puVar11 = PTR_DAT_04bbfe58;
  puVar10 = PTR_DAT_04bb5038;
  puVar9 = PTR_DAT_04bb37e0;
  puVar8 = PTR_DAT_04bb32e0;
  iVar19 = 15000;
  do {
    if ((*(uint *)(lVar15 + (ulong)(iVar19 - 1U >> 5) * 4) >> (ulong)(iVar19 - 1U & 0x1f) & 1) != 0)
    break;
    iVar19 = iVar19 + -1;
  } while (iVar19 != 0);
  iVar20 = (int)uVar21;
joined_r0x02957364:
  if (iVar19 == iVar20) {
    return;
  }
  lVar15 = *(long *)PTR_DAT_04bb39b0;
  pbVar18 = puVar8;
  if (lVar15 == 0) {
    if (7 < (byte)*puVar8) goto LAB_02957430;
LAB_029574a0:
    local_7fc = *pbVar18;
    if (7 < local_7fc) {
      local_7fc = 0xff;
    }
  }
  else {
    if (*(int *)(lVar15 + 0x15c) != 0) {
      pbVar18 = (byte *)(lVar15 + 0x158);
    }
    if ((*pbVar18 < 8) ||
       (((*(int *)(lVar15 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar18 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar18 < 8)))) goto LAB_029574a0;
LAB_02957430:
    pbVar18 = puVar10;
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) goto LAB_029574a0;
    lVar15 = **(long **)PTR_DAT_04bb27d0;
    bVar6 = *(byte *)(lVar15 + 0x473);
    pbVar17 = puVar10;
    if ((long)(char)bVar6 != 0xffffffffffffffff) {
      puVar3 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
      if (7 < bVar6) {
        puVar3 = (uint *)(lVar15 + 0x48);
      }
      if ((*puVar3 & 8) != 0) {
        pbVar17 = (byte *)(lVar15 + 0x471);
      }
    }
    local_7fc = *pbVar17;
    if (7 < local_7fc) goto LAB_029574a0;
  }
  puVar4 = (undefined8 *)(puVar11 + uVar21 * 8);
  if (0x752 < (uint)(uVar21 >> 3)) {
    puVar4 = (undefined8 *)puVar11;
  }
  puVar5 = (undefined8 *)puVar9;
  if ((uint)uVar21 < 0x3a99) {
    puVar5 = puVar4;
  }
  local_88 = (undefined **)*puVar5;
  uVar16 = FUN_0264a1e0(&local_7fc,&local_88);
  if ((uVar16 & 1) != 0) {
    local_88 = (undefined **)*puVar5;
    FUN_0277dedc(&local_88);
    lVar15 = (**(code **)(*plVar2 + 0x18))(plVar2);
    uVar12 = FUN_0277d6c4(&local_88);
    if ((uVar12 >> 3 & 0x1fff) < 0x753) {
      lVar7 = (ulong)((uVar12 & 0xffff) >> 5) * 4;
      *(uint *)(lVar15 + lVar7) = *(uint *)(lVar15 + lVar7) | 1 << (ulong)(uVar12 & 0x1f);
    }
  }
  do {
    uVar12 = (int)uVar21 + 1;
    uVar21 = (ulong)uVar12;
    if (0x752 < uVar12 >> 3) {
      uVar12 = 0x3a95;
      goto LAB_02957570;
    }
  } while ((*(uint *)(lVar14 + (ulong)(uVar12 >> 5) * 4) >> (ulong)(uVar12 & 0x1f) & 1) == 0);
  goto LAB_029573b8;
  while( true ) {
    uVar1 = uVar12 + 1;
    if ((*(uint *)(lVar14 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0)
    goto LAB_029573b0;
    if ((*(uint *)(lVar14 + (ulong)(uVar12 >> 5) * 4) >> (ulong)(uVar12 & 0x1f) & 1) != 0)
    goto LAB_029573b4;
    uVar12 = uVar12 - 3;
    if (uVar12 == 0xfffffffd) break;
LAB_02957570:
    uVar1 = uVar12 + 2;
    if ((*(uint *)(lVar14 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0) {
LAB_029573b0:
      uVar12 = uVar1;
LAB_029573b4:
      uVar21 = (ulong)(uVar12 + 1);
      goto LAB_029573b8;
    }
  }
  uVar21 = 0;
LAB_029573b8:
  iVar20 = (int)uVar21;
  goto joined_r0x02957364;
}

