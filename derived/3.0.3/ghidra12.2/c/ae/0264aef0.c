
void FUN_0264aef0(undefined4 *param_1)

{
  uint uVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  void *pvVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  undefined4 local_800;
  undefined4 local_7fc;
  undefined *local_7f8;
  undefined1 auStack_7f0 [1876];
  uint local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  undefined **local_88;
  undefined4 *puStack_80;
  undefined8 local_78;
  
  puVar5 = PTR_DAT_04bb46b0;
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    return;
  }
  lVar9 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*param_1);
  if (lVar9 == 0) {
    return;
  }
  lVar15 = lVar9 + 0x194b0;
  if (*(long *)(lVar9 + 0x194b8) == 0) {
    lVar15 = *(long *)(*(long *)puVar5 + 0x20);
    lVar9 = *(long *)(lVar15 + 0x1090);
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x1a540);
  }
  if ((lVar9 == 0) || (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0)) {
    uVar7 = 1;
  }
  else {
    uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
    uVar7 = uVar7 ^ 1;
  }
  local_7f8 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_7f0,0,0x754);
  uVar8 = nn::os::GetSystemTick();
  local_9c = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
  local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 2;
  local_94 = (local_98 ^ local_98 >> 0x1e) * 0x6c078965 + 3;
  local_90 = (local_94 ^ local_94 >> 0x1e) * 0x6c078965 + 4;
  pvVar10 = (void *)FUN_01a451fc(&local_7f8);
  memset(pvVar10,0,0x754);
  pvVar10 = (void *)(**(code **)(local_7f8 + 0x18))(&local_7f8);
  memset(pvVar10,0,0x754);
  puStack_80 = &local_800;
  local_800 = 0x13d;
  local_88 = &PTR_FUN_049ff4e8;
  FUN_008a1ba0(&local_7f8,&local_88);
  lVar9 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
  uVar18 = 0;
  do {
    if ((*(uint *)(lVar9 + (uVar18 >> 5) * 4) >> (ulong)((uint)uVar18 & 0x1f) & 1) != 0)
    goto LAB_0264b084;
    uVar8 = (uint)uVar18 + 1;
    uVar18 = (ulong)uVar8;
  } while (uVar8 != 15000);
  uVar18 = 0;
LAB_0264b084:
  lVar11 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
  puVar6 = PTR_DAT_04bbfe58;
  puVar5 = PTR_DAT_04bb37e0;
  iVar16 = 15000;
  do {
    if ((*(uint *)(lVar11 + (ulong)(iVar16 - 1U >> 5) * 4) >> (ulong)(iVar16 - 1U & 0x1f) & 1) != 0)
    break;
    iVar16 = iVar16 + -1;
  } while (iVar16 != 0);
  iVar17 = (int)uVar18;
joined_r0x0264b0c0:
  if (iVar16 == iVar17) {
    if ((((uVar7 & 1) == 0) && (*(long *)(lVar15 + 0x1090) != 0)) &&
       (puVar12 = *(undefined8 **)(*(long *)(lVar15 + 0x1090) + 0x18), puVar12 != (undefined8 *)0x0)
       ) {
      (**(code **)*puVar12)();
    }
    return;
  }
  puVar2 = (ushort *)(puVar6 + uVar18 * 8);
  if (0x752 < (uint)(uVar18 >> 3)) {
    puVar2 = (ushort *)puVar6;
  }
  puVar3 = (ushort *)puVar5;
  if ((uint)uVar18 < 0x3a99) {
    puVar3 = puVar2;
  }
  uVar4 = *puVar3;
  local_800 = *(undefined4 *)puVar3;
  local_7fc = *(undefined4 *)(puVar3 + 2);
  uVar8 = (uint)uVar4;
  if (uVar4 < 0x39e2) {
    if ((uVar8 - 0x3878 < 4 || uVar8 == 0x3390) || uVar4 == 0x365b) goto LAB_0264b1bc;
LAB_0264b2cc:
    if (uVar4 - 0x323b < 3) goto LAB_0264b1bc;
  }
  else {
    if (0x10 < uVar8 - 0x39e2 || (1 << (ulong)(uVar8 - 0x39e2 & 0x1f) & 0x18003U) == 0)
    goto LAB_0264b2cc;
LAB_0264b1bc:
    if ((*(long *)(lVar15 + 0x1090) != 0) &&
       (plVar13 = *(long **)(*(long *)(lVar15 + 0x1090) + 0x20), plVar13 != (long *)0x0)) {
      local_88 = *(undefined ***)(lVar15 + 0x1070);
      puStack_80 = *(undefined4 **)(lVar15 + 0x1078);
      local_78 = 0x754;
      (**(code **)(*plVar13 + 0x20))(plVar13,&local_88);
    }
    uVar14 = FUN_0277a1f4(*(long *)(lVar15 + 0x1078) + *(long *)(lVar15 + 0x1070),&local_800);
    if ((uVar14 & 1) != 0) {
      if ((*(long *)(lVar15 + 0x1090) != 0) &&
         (plVar13 = *(long **)(*(long *)(lVar15 + 0x1090) + 0x20), plVar13 != (long *)0x0)) {
        local_88 = *(undefined ***)(lVar15 + 0x1070);
        puStack_80 = *(undefined4 **)(lVar15 + 0x1078);
        local_78 = 0x754;
        (**(code **)(*plVar13 + 0x20))(plVar13,&local_88);
      }
      FUN_0277a328(*(long *)(lVar15 + 0x1078) + *(long *)(lVar15 + 0x1070),&local_800);
    }
  }
  do {
    uVar8 = (int)uVar18 + 1;
    uVar18 = (ulong)uVar8;
    if (0x752 < uVar8 >> 3) {
      uVar8 = 0x3a95;
      goto LAB_0264b280;
    }
  } while ((*(uint *)(lVar9 + (ulong)(uVar8 >> 5) * 4) >> (ulong)(uVar8 & 0x1f) & 1) == 0);
  goto LAB_0264b138;
  while( true ) {
    if ((*(uint *)(lVar9 + (ulong)(uVar8 >> 5) * 4) >> (ulong)(uVar8 & 0x1f) & 1) != 0)
    goto LAB_0264b134;
    uVar8 = uVar8 - 3;
    if (uVar8 == 0xfffffffd) break;
LAB_0264b280:
    uVar1 = uVar8 + 2;
    if (((*(uint *)(lVar9 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0) ||
       (uVar1 = uVar8 + 1,
       (*(uint *)(lVar9 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
      uVar8 = uVar1;
LAB_0264b134:
      uVar18 = (ulong)(uVar8 + 1);
      goto LAB_0264b138;
    }
  }
  uVar18 = 0;
LAB_0264b138:
  iVar17 = (int)uVar18;
  goto joined_r0x0264b0c0;
}

