
void FUN_013fd900(long param_1)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  void *pvVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  undefined4 local_7fc;
  undefined *local_7f8;
  undefined1 auStack_7f0 [1876];
  uint local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  undefined **local_88;
  undefined4 *puStack_80;
  
  plVar2 = (long *)(param_1 + 0x528);
  pvVar10 = (void *)(**(code **)(*(long *)(param_1 + 0x528) + 0x18))(plVar2);
  memset(pvVar10,0,0x754);
  plVar3 = (long *)(param_1 + 0xc98);
  pvVar10 = (void *)(**(code **)(*(long *)(param_1 + 0xc98) + 0x18))(plVar3);
  memset(pvVar10,0,0x754);
  local_7f8 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_7f0,0,0x754);
  uVar9 = nn::os::GetSystemTick();
  local_9c = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 1;
  local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 2;
  local_94 = (local_98 ^ local_98 >> 0x1e) * 0x6c078965 + 3;
  local_90 = (local_94 ^ local_94 >> 0x1e) * 0x6c078965 + 4;
  pvVar10 = (void *)FUN_01a451fc(&local_7f8);
  memset(pvVar10,0,0x754);
  puStack_80 = &local_7fc;
  local_7fc = 0x6a;
  local_88 = &PTR_FUN_049ff448;
  FUN_008a1ba0(&local_7f8,&local_88);
  plVar13 = *(long **)PTR_DAT_04bb5da0;
  lVar11 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
  uVar16 = 0;
  do {
    if ((*(uint *)(lVar11 + (uVar16 >> 5) * 4) >> (ulong)((uint)uVar16 & 0x1f) & 1) != 0)
    goto LAB_013fda60;
    uVar9 = (uint)uVar16 + 1;
    uVar16 = (ulong)uVar9;
  } while (uVar9 != 15000);
  uVar16 = 0;
LAB_013fda60:
  lVar12 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
  puVar8 = PTR_DAT_04bbfe58;
  puVar7 = PTR_DAT_04bb37e0;
  iVar14 = 15000;
  do {
    if ((*(uint *)(lVar12 + (ulong)(iVar14 - 1U >> 5) * 4) >> (ulong)(iVar14 - 1U & 0x1f) & 1) != 0)
    break;
    iVar14 = iVar14 + -1;
  } while (iVar14 != 0);
  iVar15 = (int)uVar16;
joined_r0x013fdaa0:
  if (iVar14 == iVar15) {
    return;
  }
  puVar4 = (undefined8 *)(puVar8 + uVar16 * 8);
  if (0x752 < (uint)(uVar16 >> 3)) {
    puVar4 = (undefined8 *)puVar8;
  }
  puVar5 = (undefined8 *)puVar7;
  if ((uint)uVar16 < 0x3a99) {
    puVar5 = puVar4;
  }
  local_88 = (undefined **)*puVar5;
  lVar12 = (**(code **)(*plVar13 + 0x20))(plVar13);
  uVar9 = FUN_0277d6c4(&local_88);
  if (((uVar9 >> 3 & 0x1fff) < 0x753) &&
     ((*(uint *)(lVar12 + (ulong)((uVar9 & 0xffff) >> 5) * 4) >> (ulong)(uVar9 & 0x1f) & 1) != 0)) {
    FUN_0277dedc(&local_88);
    lVar12 = (**(code **)(*plVar2 + 0x18))(plVar2);
    uVar9 = FUN_0277d6c4(&local_88);
    if ((uVar9 >> 3 & 0x1fff) < 0x753) {
      lVar6 = (ulong)((uVar9 & 0xffff) >> 5) * 4;
      *(uint *)(lVar12 + lVar6) = *(uint *)(lVar12 + lVar6) | 1 << (ulong)(uVar9 & 0x1f);
    }
    FUN_0277dedc(&local_88);
    lVar12 = (**(code **)(*plVar3 + 0x18))(plVar3);
    uVar9 = FUN_0277d6c4(&local_88);
    if ((uVar9 >> 3 & 0x1fff) < 0x753) {
      lVar6 = (ulong)((uVar9 & 0xffff) >> 5) * 4;
      *(uint *)(lVar12 + lVar6) = *(uint *)(lVar12 + lVar6) | 1 << (ulong)(uVar9 & 0x1f);
    }
  }
  do {
    uVar9 = (int)uVar16 + 1;
    uVar16 = (ulong)uVar9;
    if (0x752 < uVar9 >> 3) {
      uVar9 = 0x3a95;
      goto LAB_013fdc20;
    }
  } while ((*(uint *)(lVar11 + (ulong)(uVar9 >> 5) * 4) >> (ulong)(uVar9 & 0x1f) & 1) == 0);
  goto LAB_013fdae8;
  while( true ) {
    if ((*(uint *)(lVar11 + (ulong)(uVar9 >> 5) * 4) >> (ulong)(uVar9 & 0x1f) & 1) != 0)
    goto LAB_013fdae4;
    uVar9 = uVar9 - 3;
    if (uVar9 == 0xfffffffd) break;
LAB_013fdc20:
    uVar1 = uVar9 + 2;
    if (((*(uint *)(lVar11 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0) ||
       (uVar1 = uVar9 + 1,
       (*(uint *)(lVar11 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
      uVar9 = uVar1;
LAB_013fdae4:
      uVar16 = (ulong)(uVar9 + 1);
      goto LAB_013fdae8;
    }
  }
  uVar16 = 0;
LAB_013fdae8:
  iVar15 = (int)uVar16;
  goto joined_r0x013fdaa0;
}

