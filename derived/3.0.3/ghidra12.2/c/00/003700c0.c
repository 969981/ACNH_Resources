
long * FUN_003700c0(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (((*PTR_DAT_04bc9588 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc9588), puVar1 = PTR_DAT_04bc8f30, iVar2 != 0)) {
    if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar2 != 0)) {
      *(undefined8 *)puVar1 = 0;
      __cxa_guard_release(PTR_DAT_04bc8f38);
    }
    *(undefined **)PTR_DAT_04bc9580 = puVar1;
    __cxa_guard_release(PTR_DAT_04bc9588);
  }
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1);
  if (puVar3 != (undefined8 *)PTR_DAT_04bc9580) {
    do {
      puVar3 = (undefined8 *)*puVar3;
    } while (puVar3 != (undefined8 *)PTR_DAT_04bc9580 && puVar3 != (undefined8 *)0x0);
    if (puVar3 == (undefined8 *)0x0) {
      return (long *)0x0;
    }
  }
  return param_1;
}

