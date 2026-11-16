
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_02662ba0(uint param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  int *piVar12;
  undefined *local_78;
  char *pcStack_70;
  undefined *local_68;
  char *pcStack_60;
  undefined *local_58;
  long local_50;
  undefined1 local_48;
  byte local_47;
  
  if ((9 < param_1) || (DAT_05574040 == 0)) {
    return 0xffffffff;
  }
  puVar8 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar6 = (**(code **)(*(long *)*puVar8 + 0x38))();
    if (lVar6 == 0) {
      return 0xffffffff;
    }
    lVar6 = lVar6 + 0x70;
  }
  else {
    if (puVar8 == (undefined8 *)0x0) {
      return 0xffffffff;
    }
    if ((long *)puVar8[0x26] == (long *)0x0) {
      return 0xffffffff;
    }
    lVar6 = (**(code **)(*(long *)puVar8[0x26] + 0x38))();
    if (lVar6 == 0) {
      return 0xffffffff;
    }
  }
  lVar6 = lVar6 + (ulong)param_1 * 0x10798;
  if (*(long **)(lVar6 + 0x140) == (long *)0x0) {
    uVar7 = 0;
  }
  else {
    puVar8 = (undefined8 *)**(long **)(lVar6 + 0x140);
    uVar7 = 0;
    if (puVar8 != (undefined8 *)0x0) {
      uVar7 = (**(code **)*puVar8)();
    }
  }
  pbVar2 = (byte *)(*(long *)(lVar6 + 0x128) + *(long *)(lVar6 + 0x120));
  uVar9 = (ulong)*pbVar2;
  if ((uVar9 < 0x23) && (bVar3 = pbVar2[1], bVar3 <= (byte)PTR_DAT_04bc27f0[uVar9])) {
    uVar11 = (uint)(&DAT_053e6eb8)[uVar9] >> (ulong)(bVar3 & 0x1f) & 1;
  }
  else {
    uVar11 = 0;
  }
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar6 + 0x140) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar6 + 0x140) + 8), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  if (uVar11 == 0) {
    return 0xffffffff;
  }
  local_48 = 1;
  local_50 = lVar6 + 0x118;
  if ((*(long **)(lVar6 + 0x140) == (long *)0x0) ||
     (puVar8 = (undefined8 *)**(long **)(lVar6 + 0x140), puVar8 == (undefined8 *)0x0)) {
    bVar3 = 0;
  }
  else {
    bVar3 = (**(code **)*puVar8)();
  }
  local_47 = bVar3 & 1;
  local_58 = PTR_DAT_04bb67a0 + 0x10;
  lVar10 = *(long *)(lVar6 + 0x128) + *(long *)(lVar6 + 0x120);
  piVar12 = (int *)(lVar10 + 4);
  if (*(int *)(lVar10 + 0x20) != 0 && *piVar12 != 0) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_60 = "InteriorCoordinator";
    local_68 = puVar1;
    iVar4 = FUN_02746e10(lVar10 + 0x3c,&local_68);
    if (iVar4 != 0) goto LAB_026630bc;
    pcStack_70 = "ExteriorCoordinator";
    local_78 = puVar1;
    iVar4 = FUN_02746e10(lVar10 + 0x3c,&local_78);
    if (iVar4 != 0) goto LAB_026630bc;
    lVar10 = *(long *)(lVar6 + 0x128) + *(long *)(lVar6 + 0x120);
  }
  if (*(int *)(lVar10 + 0x610) != 0 && *(int *)(lVar10 + 0x5f4) != 0) {
    piVar12 = (int *)(lVar10 + 0x5f4);
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_60 = "InteriorCoordinator";
    local_68 = puVar1;
    iVar4 = FUN_02746e10(lVar10 + 0x62c,&local_68);
    if (iVar4 != 0) goto LAB_026630bc;
    pcStack_70 = "ExteriorCoordinator";
    local_78 = puVar1;
    iVar4 = FUN_02746e10(lVar10 + 0x62c,&local_78);
    if (iVar4 != 0) goto LAB_026630bc;
    lVar10 = *(long *)(lVar6 + 0x128) + *(long *)(lVar6 + 0x120);
  }
  if (*(int *)(lVar10 + 0xc00) != 0 && *(int *)(lVar10 + 0xbe4) != 0) {
    piVar12 = (int *)(lVar10 + 0xbe4);
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_60 = "InteriorCoordinator";
    local_68 = puVar1;
    iVar4 = FUN_02746e10(lVar10 + 0xc1c,&local_68);
    if (iVar4 != 0) goto LAB_026630bc;
    pcStack_70 = "ExteriorCoordinator";
    local_78 = puVar1;
    iVar4 = FUN_02746e10(lVar10 + 0xc1c,&local_78);
    if (iVar4 != 0) goto LAB_026630bc;
    lVar10 = *(long *)(lVar6 + 0x128) + *(long *)(lVar6 + 0x120);
  }
  if (*(int *)(lVar10 + 0x11f0) != 0 && *(int *)(lVar10 + 0x11d4) != 0) {
    piVar12 = (int *)(lVar10 + 0x11d4);
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_60 = "InteriorCoordinator";
    local_68 = puVar1;
    iVar4 = FUN_02746e10(lVar10 + 0x120c,&local_68);
    if (iVar4 != 0) goto LAB_026630bc;
    pcStack_70 = "ExteriorCoordinator";
    local_78 = puVar1;
    iVar4 = FUN_02746e10(lVar10 + 0x120c,&local_78);
    if (iVar4 != 0) goto LAB_026630bc;
    lVar10 = *(long *)(lVar6 + 0x128) + *(long *)(lVar6 + 0x120);
  }
  if (*(int *)(lVar10 + 0x17e0) != 0 && *(int *)(lVar10 + 0x17c4) != 0) {
    piVar12 = (int *)(lVar10 + 0x17c4);
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_60 = "InteriorCoordinator";
    local_68 = puVar1;
    iVar4 = FUN_02746e10(lVar10 + 0x17fc,&local_68);
    if (iVar4 != 0) goto LAB_026630bc;
    pcStack_70 = "ExteriorCoordinator";
    local_78 = puVar1;
    iVar4 = FUN_02746e10(lVar10 + 0x17fc,&local_78);
    if (iVar4 != 0) goto LAB_026630bc;
    lVar10 = *(long *)(lVar6 + 0x128) + *(long *)(lVar6 + 0x120);
  }
  if (*(int *)(lVar10 + 0x1dd0) != 0 && *(int *)(lVar10 + 0x1db4) != 0) {
    piVar12 = (int *)(lVar10 + 0x1db4);
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_60 = "InteriorCoordinator";
    local_68 = puVar1;
    iVar4 = FUN_02746e10(lVar10 + 0x1dec,&local_68);
    if (iVar4 != 0) goto LAB_026630bc;
    pcStack_70 = "ExteriorCoordinator";
    local_78 = puVar1;
    iVar4 = FUN_02746e10(lVar10 + 0x1dec,&local_78);
    if (iVar4 != 0) goto LAB_026630bc;
    lVar10 = *(long *)(lVar6 + 0x128) + *(long *)(lVar6 + 0x120);
  }
  if (*(int *)(lVar10 + 0x23c0) != 0 && *(int *)(lVar10 + 0x23a4) != 0) {
    piVar12 = (int *)(lVar10 + 0x23a4);
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_60 = "InteriorCoordinator";
    local_68 = puVar1;
    iVar4 = FUN_02746e10(lVar10 + 0x23dc,&local_68);
    if (iVar4 != 0) goto LAB_026630bc;
    pcStack_70 = "ExteriorCoordinator";
    local_78 = puVar1;
    iVar4 = FUN_02746e10(lVar10 + 0x23dc,&local_78);
    if (iVar4 != 0) goto LAB_026630bc;
    lVar10 = *(long *)(lVar6 + 0x128) + *(long *)(lVar6 + 0x120);
  }
  if (*(int *)(lVar10 + 0x29b0) == 0 || *(int *)(lVar10 + 0x2994) == 0) {
LAB_02662dd4:
    FUN_02640184(&local_58);
    return 0xffffffff;
  }
  piVar12 = (int *)(lVar10 + 0x2994);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_60 = "InteriorCoordinator";
  local_68 = puVar1;
  iVar4 = FUN_02746e10(lVar10 + 0x29cc,&local_68);
  if (iVar4 == 0) {
    pcStack_70 = "ExteriorCoordinator";
    local_78 = puVar1;
    iVar4 = FUN_02746e10(lVar10 + 0x29cc,&local_78);
    if (iVar4 == 0) goto LAB_02662dd4;
  }
LAB_026630bc:
  uVar5 = FUN_026698a0(piVar12);
  if ((bVar3 & 1) == 0) {
    return uVar5;
  }
  if (*(long *)(lVar6 + 0x140) == 0) {
    return uVar5;
  }
  puVar8 = *(undefined8 **)(*(long *)(lVar6 + 0x140) + 8);
  if (puVar8 == (undefined8 *)0x0) {
    return uVar5;
  }
  (**(code **)*puVar8)();
  return uVar5;
}

