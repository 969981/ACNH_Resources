
void FUN_00b38fd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  
  iVar1 = *(int *)(param_1 + 0x15c);
  *(undefined4 *)(param_1 + 0x158) = 0;
  if (iVar1 < 1) {
    iVar3 = 0;
    if (0 < iVar1) goto LAB_00b39014;
  }
  else {
    **(undefined8 **)(param_1 + 0x160) = param_2;
    iVar1 = *(int *)(param_1 + 0x15c);
    iVar3 = *(int *)(param_1 + 0x158) + 1;
    *(int *)(param_1 + 0x158) = iVar3;
    if (iVar3 < iVar1) {
LAB_00b39014:
      *(undefined8 *)(*(long *)(param_1 + 0x160) + (long)iVar3 * 8) = param_3;
      iVar1 = *(int *)(param_1 + 0x15c);
      iVar3 = *(int *)(param_1 + 0x158) + 1;
      *(int *)(param_1 + 0x158) = iVar3;
    }
  }
  if (iVar3 < iVar1) {
    *(undefined8 *)(*(long *)(param_1 + 0x160) + (long)iVar3 * 8) = param_4;
    iVar3 = *(int *)(param_1 + 0x158) + 1;
    *(int *)(param_1 + 0x158) = iVar3;
    if (iVar3 < *(int *)(param_1 + 0x15c)) {
LAB_00b39060:
      *(undefined8 *)(*(long *)(param_1 + 0x160) + (long)iVar3 * 8) = param_5;
      *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + 1;
    }
  }
  else if (iVar3 < iVar1) goto LAB_00b39060;
  iVar1 = *(int *)(param_1 + 0x18c);
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (iVar1 < 1) {
    iVar3 = 0;
    if (0 < iVar1) goto LAB_00b390a4;
  }
  else {
    **(undefined8 **)(param_1 + 400) = param_6;
    iVar1 = *(int *)(param_1 + 0x18c);
    iVar3 = *(int *)(param_1 + 0x188) + 1;
    *(int *)(param_1 + 0x188) = iVar3;
    if (iVar3 < iVar1) {
LAB_00b390a4:
      *(undefined8 *)(*(long *)(param_1 + 400) + (long)iVar3 * 8) = param_7;
      iVar1 = *(int *)(param_1 + 0x18c);
      iVar3 = *(int *)(param_1 + 0x188) + 1;
      *(int *)(param_1 + 0x188) = iVar3;
    }
  }
  if (iVar3 < iVar1) {
    *(undefined8 *)(*(long *)(param_1 + 400) + (long)iVar3 * 8) = param_8;
    iVar3 = *(int *)(param_1 + 0x188) + 1;
    *(int *)(param_1 + 0x188) = iVar3;
    if (*(int *)(param_1 + 0x18c) <= iVar3) {
LAB_00b390e4:
      lVar5 = *(long *)(param_1 + 8);
      goto joined_r0x00b39118;
    }
  }
  else if (iVar1 <= iVar3) goto LAB_00b390e4;
  *(undefined8 *)(*(long *)(param_1 + 400) + (long)iVar3 * 8) = param_9;
  *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x188) + 1;
  lVar5 = *(long *)(param_1 + 8);
joined_r0x00b39118:
  if (lVar5 == 0) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar6 = *(long **)(lVar5 + 0x48);
  }
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  if ((((plVar6 == (long *)0x0) ||
       (uVar2 = (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bb37d0), (uVar2 & 1) == 0)) ||
      (*(int *)((long)plVar6 + 0x15c) != 10)) || ((int)plVar6[0xa0] != 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = (undefined4)plVar6[0x46];
  }
  *(undefined4 *)(param_1 + 0x1b8) = uVar4;
  return;
}

