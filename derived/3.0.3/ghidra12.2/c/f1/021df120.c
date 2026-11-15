
undefined4 FUN_021df120(undefined8 *param_1)

{
  char cVar1;
  char cVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  plVar8 = (long *)*param_1;
  cVar1 = *(char *)(param_1 + 1);
  cVar2 = *(char *)((long)param_1 + 10);
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  if (plVar8 == (long *)0x0) {
    return 0;
  }
  uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0);
  puVar3 = PTR_DAT_04bb30a0;
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  if (cVar1 == '\0') {
    return 0;
  }
  if (cVar2 == '\0') {
    return 0;
  }
  lVar7 = plVar8[0x77];
  iVar5 = *(int *)(lVar7 + 0xad44);
  if (iVar5 == 2) {
    if ((*(byte *)(lVar7 + 0xad54) & 10) != 0) {
      iVar5 = 2;
      goto LAB_021df1e4;
    }
  }
  else if (iVar5 == 1) {
    if ((*(byte *)(lVar7 + 0xad54) & 6) != 0) {
      iVar5 = 1;
      goto LAB_021df1e4;
    }
  }
  else if ((iVar5 != 0) ||
          ((*(int *)(lVar7 + 0xad40) < 0 && ((*(byte *)(lVar7 + 0xad54) >> 1 & 1) == 0)))) {
    iVar5 = 0;
    goto LAB_021df1e4;
  }
  iVar5 = *(int *)(lVar7 + 0xad48);
LAB_021df1e4:
  if (iVar5 == 0) {
    return 0;
  }
  if (iVar5 != 2) {
    if (iVar5 != 1) {
      return 0;
    }
    uVar4 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0);
    if ((uVar4 & 0xfffffffe) == 4) {
      return 1;
    }
    uVar4 = FUN_00a86724(*(undefined8 *)puVar3);
    if ((uVar4 & 0xfffffffe) == 6) {
      return 3;
    }
  }
  puVar3 = PTR_DAT_04bb30a0;
  iVar5 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0);
  if (iVar5 == 5) {
    return 2;
  }
  iVar5 = FUN_00a86724(*(undefined8 *)puVar3);
  if (iVar5 == 7) {
    return 4;
  }
  return 0;
}

