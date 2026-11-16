
void FUN_0264b2e0(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  void *pvVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  undefined4 local_800;
  undefined4 uStack_7fc;
  undefined *local_7f8;
  undefined1 auStack_7f0 [1876];
  uint local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  undefined **local_88;
  undefined1 *puStack_80;
  undefined8 local_78;
  
  puVar4 = PTR_DAT_04bb46b0;
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    return;
  }
  lVar8 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*param_1);
  if (lVar8 == 0) {
    return;
  }
  lVar14 = lVar8 + 0x194b0;
  if (*(long *)(lVar8 + 0x194b8) == 0) {
    lVar14 = *(long *)(*(long *)puVar4 + 0x20);
    lVar8 = *(long *)(lVar14 + 0x1090);
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x1a540);
  }
  if ((lVar8 == 0) || (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0)) {
    uVar6 = 1;
  }
  else {
    uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
    uVar6 = uVar6 ^ 1;
  }
  local_7f8 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_7f0,0,0x754);
  uVar7 = nn::os::GetSystemTick();
  local_9c = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
  local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 2;
  local_94 = (local_98 ^ local_98 >> 0x1e) * 0x6c078965 + 3;
  local_90 = (local_94 ^ local_94 >> 0x1e) * 0x6c078965 + 4;
  pvVar9 = (void *)FUN_01a451fc(&local_7f8);
  memset(pvVar9,0,0x754);
  pvVar9 = (void *)(**(code **)(local_7f8 + 0x18))(&local_7f8);
  memset(pvVar9,0,0x754);
  local_800 = 0xba;
  local_88 = &PTR_FUN_049ff448;
  puStack_80 = (undefined1 *)&local_800;
  FUN_008a1ba0(&local_7f8,&local_88);
  lVar8 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
  uVar17 = 0;
  do {
    if ((*(uint *)(lVar8 + (uVar17 >> 5) * 4) >> (ulong)((uint)uVar17 & 0x1f) & 1) != 0)
    goto LAB_0264b470;
    uVar7 = (uint)uVar17 + 1;
    uVar17 = (ulong)uVar7;
  } while (uVar7 != 15000);
  uVar17 = 0;
LAB_0264b470:
  lVar10 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
  puVar5 = PTR_DAT_04bbfe58;
  puVar4 = PTR_DAT_04bb37e0;
  iVar15 = 15000;
  do {
    if ((*(uint *)(lVar10 + (ulong)(iVar15 - 1U >> 5) * 4) >> (ulong)(iVar15 - 1U & 0x1f) & 1) != 0)
    break;
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
  iVar16 = (int)uVar17;
joined_r0x0264b4b0:
  if (iVar15 == iVar16) {
    if ((((uVar6 & 1) == 0) && (*(long *)(lVar14 + 0x1090) != 0)) &&
       (puVar11 = *(undefined8 **)(*(long *)(lVar14 + 0x1090) + 0x18), puVar11 != (undefined8 *)0x0)
       ) {
      (**(code **)*puVar11)();
    }
    return;
  }
  puVar2 = (undefined4 *)(puVar5 + uVar17 * 8);
  if (0x752 < (uint)(uVar17 >> 3)) {
    puVar2 = (undefined4 *)puVar5;
  }
  puVar3 = (undefined4 *)puVar4;
  if ((uint)uVar17 < 0x3a99) {
    puVar3 = puVar2;
  }
  local_800 = *puVar3;
  uStack_7fc = puVar3[1];
  if ((*(long *)(lVar14 + 0x1090) != 0) &&
     (plVar12 = *(long **)(*(long *)(lVar14 + 0x1090) + 0x20), plVar12 != (long *)0x0)) {
    local_88 = *(undefined ***)(lVar14 + 0x1070);
    local_78 = 0x754;
    puStack_80 = *(undefined1 **)(lVar14 + 0x1078);
    (**(code **)(*plVar12 + 0x20))(plVar12,&local_88);
  }
  uVar13 = FUN_0277a1f4(*(long *)(lVar14 + 0x1078) + *(long *)(lVar14 + 0x1070),&local_800);
  if ((uVar13 & 1) != 0) {
    if ((*(long *)(lVar14 + 0x1090) != 0) &&
       (plVar12 = *(long **)(*(long *)(lVar14 + 0x1090) + 0x20), plVar12 != (long *)0x0)) {
      local_88 = *(undefined ***)(lVar14 + 0x1070);
      local_78 = 0x754;
      puStack_80 = *(undefined1 **)(lVar14 + 0x1078);
      (**(code **)(*plVar12 + 0x20))(plVar12,&local_88);
    }
    FUN_0277a328(*(long *)(lVar14 + 0x1078) + *(long *)(lVar14 + 0x1070),&local_800);
  }
  do {
    uVar7 = (int)uVar17 + 1;
    uVar17 = (ulong)uVar7;
    if (0x752 < uVar7 >> 3) {
      uVar7 = 0x3a95;
      goto LAB_0264b600;
    }
  } while ((*(uint *)(lVar8 + (ulong)(uVar7 >> 5) * 4) >> (ulong)(uVar7 & 0x1f) & 1) == 0);
  goto LAB_0264b518;
  while( true ) {
    if ((*(uint *)(lVar8 + (ulong)(uVar7 >> 5) * 4) >> (ulong)(uVar7 & 0x1f) & 1) != 0)
    goto LAB_0264b514;
    uVar7 = uVar7 - 3;
    if (uVar7 == 0xfffffffd) break;
LAB_0264b600:
    uVar1 = uVar7 + 2;
    if (((*(uint *)(lVar8 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0) ||
       (uVar1 = uVar7 + 1,
       (*(uint *)(lVar8 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
      uVar7 = uVar1;
LAB_0264b514:
      uVar17 = (ulong)(uVar7 + 1);
      goto LAB_0264b518;
    }
  }
  uVar17 = 0;
LAB_0264b518:
  iVar16 = (int)uVar17;
  goto joined_r0x0264b4b0;
}

