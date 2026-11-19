
long * FUN_03c99160(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  
  if (((*PTR_DAT_04bd43b8 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04bd43b8), puVar2 = PTR_DAT_04bd1bd8, iVar3 != 0)) {
    if (((*PTR_DAT_04bd1be0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bd1be0), puVar1 = PTR_DAT_04bc8f30, iVar3 != 0)) {
      if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar3 != 0)) {
        *(undefined8 *)puVar1 = 0;
        __cxa_guard_release(PTR_DAT_04bc8f38);
      }
      *(undefined **)puVar2 = puVar1;
      __cxa_guard_release(PTR_DAT_04bd1be0);
    }
    *(undefined **)PTR_DAT_04bd43b0 = puVar2;
    __cxa_guard_release(PTR_DAT_04bd43b8);
  }
  if (param_1 != (long *)0x0) {
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1);
    if (puVar4 == (undefined8 *)PTR_DAT_04bd43b0) {
      return param_1;
    }
    do {
      puVar4 = (undefined8 *)*puVar4;
    } while (puVar4 != (undefined8 *)PTR_DAT_04bd43b0 && puVar4 != (undefined8 *)0x0);
    if (puVar4 != (undefined8 *)0x0) {
      return param_1;
    }
  }
  return (long *)0x0;
}

