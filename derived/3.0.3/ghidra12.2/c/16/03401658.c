
void FUN_03401658(long param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  long *plVar4;
  
  if (((*PTR_DAT_04bc4d18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4d18), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc4d10 = PTR_DAT_04bc4d20 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4d18);
  }
  if ((param_2 == (undefined8 *)0x0) ||
     (uVar2 = (**(code **)*param_2)(param_2,PTR_DAT_04bc4d10), (uVar2 & 1) == 0)) {
    if (((*PTR_DAT_04bc57b8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc57b8), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc57b0 = PTR_DAT_04bc57c0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc57b8);
    }
    if ((param_2 == (undefined8 *)0x0) ||
       (uVar2 = (**(code **)*param_2)(param_2,PTR_DAT_04bc57b0), (uVar2 & 1) == 0)) {
      if (((*PTR_DAT_04bc8388 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc8388), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc8380 = PTR_DAT_04bc4d20 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc8388);
      }
      if (param_2 == (undefined8 *)0x0) {
        return;
      }
      uVar2 = (**(code **)*param_2)(param_2,PTR_DAT_04bc8380);
      if ((uVar2 & 1) == 0) {
        return;
      }
      iVar1 = *(int *)(param_1 + 0x128);
      if (*(int *)(param_1 + 300) <= iVar1) {
        return;
      }
      piVar3 = (int *)(param_1 + 0x128);
      plVar4 = (long *)(param_1 + 0x130);
    }
    else {
      piVar3 = (int *)(param_1 + 0x98);
      iVar1 = *piVar3;
      if (*(int *)(param_1 + 0x9c) <= iVar1) {
        return;
      }
      plVar4 = (long *)(param_1 + 0xa0);
    }
  }
  else {
    piVar3 = (int *)(param_1 + 8);
    iVar1 = *piVar3;
    if (*(int *)(param_1 + 0xc) <= iVar1) {
      return;
    }
    plVar4 = (long *)(param_1 + 0x10);
  }
  *(undefined8 **)(*plVar4 + (long)iVar1 * 8) = param_2;
  *piVar3 = *piVar3 + 1;
  return;
}

