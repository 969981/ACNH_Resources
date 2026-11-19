
long * FUN_03b17a70(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  
  if (((*PTR_DAT_04bd1d10 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd1d10), puVar3 = PTR_DAT_04bd1b50, iVar5 != 0)) {
    if (((*PTR_DAT_04bd1b58 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd1b58), puVar4 = PTR_DAT_04bd1b60, iVar5 != 0)) {
      if (((*PTR_DAT_04bd1b68 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd1b68), puVar2 = PTR_DAT_04bc8f50, iVar5 != 0)) {
        if (((*PTR_DAT_04bc8f58 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc8f58), puVar1 = PTR_DAT_04bc8f30, iVar5 != 0)) {
          if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar5 != 0)) {
            *(undefined8 *)puVar1 = 0;
            __cxa_guard_release(PTR_DAT_04bc8f38);
          }
          *(undefined **)puVar2 = puVar1;
          __cxa_guard_release(PTR_DAT_04bc8f58);
        }
        *(undefined **)puVar4 = puVar2;
        __cxa_guard_release(PTR_DAT_04bd1b68);
      }
      *(undefined **)puVar3 = puVar4;
      __cxa_guard_release(PTR_DAT_04bd1b58);
    }
    *(undefined **)PTR_DAT_04bd1d08 = puVar3;
    __cxa_guard_release(PTR_DAT_04bd1d10);
  }
  if (param_1 != (long *)0x0) {
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1);
    if (puVar6 == (undefined8 *)PTR_DAT_04bd1d08) {
      return param_1;
    }
    do {
      puVar6 = (undefined8 *)*puVar6;
    } while (puVar6 != (undefined8 *)PTR_DAT_04bd1d08 && puVar6 != (undefined8 *)0x0);
    if (puVar6 != (undefined8 *)0x0) {
      return param_1;
    }
  }
  return (long *)0x0;
}

