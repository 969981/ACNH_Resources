
long * FUN_03c99680(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  
  if (((*PTR_DAT_04bd43e8 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd43e8), puVar4 = PTR_DAT_04bd1c28, iVar5 != 0)) {
    if (((*PTR_DAT_04bd1c30 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd1c30), puVar3 = PTR_DAT_04bd1be8, iVar5 != 0)) {
      if (((*PTR_DAT_04bd1bf0 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd1bf0), puVar2 = PTR_DAT_04bc91b0, iVar5 != 0)) {
        if (((*PTR_DAT_04bc91b8 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc91b8), puVar1 = PTR_DAT_04bc8f30, iVar5 != 0)) {
          if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar5 != 0)) {
            *(undefined8 *)puVar1 = 0;
            __cxa_guard_release(PTR_DAT_04bc8f38);
          }
          *(undefined **)puVar2 = puVar1;
          __cxa_guard_release(PTR_DAT_04bc91b8);
        }
        *(undefined **)puVar3 = puVar2;
        __cxa_guard_release(PTR_DAT_04bd1bf0);
      }
      *(undefined **)puVar4 = puVar3;
      __cxa_guard_release(PTR_DAT_04bd1c30);
    }
    *(undefined **)PTR_DAT_04bd43e0 = puVar4;
    __cxa_guard_release(PTR_DAT_04bd43e8);
  }
  if (param_1 != (long *)0x0) {
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1);
    if (puVar6 == (undefined8 *)PTR_DAT_04bd43e0) {
      return param_1;
    }
    do {
      puVar6 = (undefined8 *)*puVar6;
    } while (puVar6 != (undefined8 *)PTR_DAT_04bd43e0 && puVar6 != (undefined8 *)0x0);
    if (puVar6 != (undefined8 *)0x0) {
      return param_1;
    }
  }
  return (long *)0x0;
}

