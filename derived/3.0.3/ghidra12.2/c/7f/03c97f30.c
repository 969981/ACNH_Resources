
long * FUN_03c97f30(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  
  if (((*PTR_DAT_04bd4328 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04bd4328), puVar5 = PTR_DAT_04bd4108, iVar6 != 0)) {
    if (((*PTR_DAT_04bd4110 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bd4110), puVar3 = PTR_DAT_04bd1b50, iVar6 != 0)) {
      if (((*PTR_DAT_04bd1b58 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bd1b58), puVar4 = PTR_DAT_04bd1b60, iVar6 != 0)) {
        if (((*PTR_DAT_04bd1b68 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04bd1b68), puVar2 = PTR_DAT_04bc8f50, iVar6 != 0)) {
          if (((*PTR_DAT_04bc8f58 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc8f58), puVar1 = PTR_DAT_04bc8f30, iVar6 != 0))
          {
            if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar6 != 0)) {
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
      *(undefined **)puVar5 = puVar3;
      __cxa_guard_release(PTR_DAT_04bd4110);
    }
    *(undefined **)PTR_DAT_04bd4320 = puVar5;
    __cxa_guard_release(PTR_DAT_04bd4328);
  }
  if (param_1 != (long *)0x0) {
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1);
    if (puVar7 == (undefined8 *)PTR_DAT_04bd4320) {
      return param_1;
    }
    do {
      puVar7 = (undefined8 *)*puVar7;
    } while (puVar7 != (undefined8 *)PTR_DAT_04bd4320 && puVar7 != (undefined8 *)0x0);
    if (puVar7 != (undefined8 *)0x0) {
      return param_1;
    }
  }
  return (long *)0x0;
}

