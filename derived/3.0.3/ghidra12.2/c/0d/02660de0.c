
undefined8 FUN_02660de0(uint param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  undefined *local_48;
  char *pcStack_40;
  undefined **local_38;
  long local_30;
  undefined1 local_28;
  byte local_27;
  
  if ((9 < param_1) || (DAT_05574040 == 0)) {
    return 0;
  }
  puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar4 = (**(code **)(*(long *)*puVar6 + 0x38))();
    if (lVar4 == 0) {
      return 0;
    }
    lVar4 = lVar4 + 0x70;
  }
  else {
    if (puVar6 == (undefined8 *)0x0) {
      return 0;
    }
    if ((long *)puVar6[0x26] == (long *)0x0) {
      return 0;
    }
    lVar4 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
    if (lVar4 == 0) {
      return 0;
    }
  }
  lVar4 = lVar4 + (ulong)param_1 * 0x10798;
  if (*(long **)(lVar4 + 0x140) == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar6 = (undefined8 *)**(long **)(lVar4 + 0x140);
    uVar5 = 0;
    if (puVar6 != (undefined8 *)0x0) {
      uVar5 = (**(code **)*puVar6)();
    }
  }
  pbVar1 = (byte *)(*(long *)(lVar4 + 0x128) + *(long *)(lVar4 + 0x120));
  uVar7 = (ulong)*pbVar1;
  if ((uVar7 < 0x23) && (bVar2 = pbVar1[1], bVar2 <= (byte)PTR_DAT_04bc27f0[uVar7])) {
    uVar9 = (uint)(&DAT_053e6eb8)[uVar7] >> (ulong)(bVar2 & 0x1f) & 1;
  }
  else {
    uVar9 = 0;
  }
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar4 + 0x140) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar4 + 0x140) + 8), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  if (uVar9 == 0) {
    return 0;
  }
  local_28 = 1;
  local_30 = lVar4 + 0x118;
  if ((*(long **)(lVar4 + 0x140) == (long *)0x0) ||
     (puVar6 = (undefined8 *)**(long **)(lVar4 + 0x140), puVar6 == (undefined8 *)0x0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = (**(code **)*puVar6)();
  }
  local_27 = bVar2 & 1;
  local_38 = &PTR_FUN_04934f30;
  lVar8 = *(long *)(lVar4 + 0x128) + *(long *)(lVar4 + 0x120);
  if (*(int *)(lVar8 + 0x20) != 0 && *(int *)(lVar8 + 4) != 0) {
    local_48 = PTR_DAT_04bb2020 + 0x10;
    pcStack_40 = "ExteriorCoordinator";
    iVar3 = FUN_02746e10(lVar8 + 0x3c,&local_48);
    if (iVar3 != 0) goto LAB_02661184;
    lVar8 = *(long *)(lVar4 + 0x128) + *(long *)(lVar4 + 0x120);
  }
  if (*(int *)(lVar8 + 0x610) != 0 && *(int *)(lVar8 + 0x5f4) != 0) {
    local_48 = PTR_DAT_04bb2020 + 0x10;
    pcStack_40 = "ExteriorCoordinator";
    iVar3 = FUN_02746e10(lVar8 + 0x62c,&local_48);
    if (iVar3 != 0) goto LAB_02661184;
    lVar8 = *(long *)(lVar4 + 0x128) + *(long *)(lVar4 + 0x120);
  }
  if (*(int *)(lVar8 + 0xc00) != 0 && *(int *)(lVar8 + 0xbe4) != 0) {
    local_48 = PTR_DAT_04bb2020 + 0x10;
    pcStack_40 = "ExteriorCoordinator";
    iVar3 = FUN_02746e10(lVar8 + 0xc1c,&local_48);
    if (iVar3 != 0) goto LAB_02661184;
    lVar8 = *(long *)(lVar4 + 0x128) + *(long *)(lVar4 + 0x120);
  }
  if (*(int *)(lVar8 + 0x11f0) != 0 && *(int *)(lVar8 + 0x11d4) != 0) {
    local_48 = PTR_DAT_04bb2020 + 0x10;
    pcStack_40 = "ExteriorCoordinator";
    iVar3 = FUN_02746e10(lVar8 + 0x120c,&local_48);
    if (iVar3 != 0) goto LAB_02661184;
    lVar8 = *(long *)(lVar4 + 0x128) + *(long *)(lVar4 + 0x120);
  }
  if (*(int *)(lVar8 + 0x17e0) != 0 && *(int *)(lVar8 + 0x17c4) != 0) {
    local_48 = PTR_DAT_04bb2020 + 0x10;
    pcStack_40 = "ExteriorCoordinator";
    iVar3 = FUN_02746e10(lVar8 + 0x17fc,&local_48);
    if (iVar3 != 0) goto LAB_02661184;
    lVar8 = *(long *)(lVar4 + 0x128) + *(long *)(lVar4 + 0x120);
  }
  if (*(int *)(lVar8 + 0x1dd0) != 0 && *(int *)(lVar8 + 0x1db4) != 0) {
    local_48 = PTR_DAT_04bb2020 + 0x10;
    pcStack_40 = "ExteriorCoordinator";
    iVar3 = FUN_02746e10(lVar8 + 0x1dec,&local_48);
    if (iVar3 != 0) goto LAB_02661184;
    lVar8 = *(long *)(lVar4 + 0x128) + *(long *)(lVar4 + 0x120);
  }
  if (*(int *)(lVar8 + 0x23c0) != 0 && *(int *)(lVar8 + 0x23a4) != 0) {
    local_48 = PTR_DAT_04bb2020 + 0x10;
    pcStack_40 = "ExteriorCoordinator";
    iVar3 = FUN_02746e10(lVar8 + 0x23dc,&local_48);
    if (iVar3 != 0) goto LAB_02661184;
    lVar8 = *(long *)(lVar4 + 0x128) + *(long *)(lVar4 + 0x120);
  }
  if (*(int *)(lVar8 + 0x29b0) != 0 && *(int *)(lVar8 + 0x2994) != 0) {
    local_48 = PTR_DAT_04bb2020 + 0x10;
    pcStack_40 = "ExteriorCoordinator";
    iVar3 = FUN_02746e10(lVar8 + 0x29cc,&local_48);
    if (iVar3 != 0) {
LAB_02661184:
      if ((((bVar2 & 1) != 0) && (*(long *)(lVar4 + 0x140) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar4 + 0x140) + 8), puVar6 != (undefined8 *)0x0)) {
        (**(code **)*puVar6)();
      }
      return 1;
    }
  }
  FUN_02640184(&local_38);
  return 0;
}

