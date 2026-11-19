
long * FUN_03b305a0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  
  if (((*PTR_DAT_04bd1b10 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04bd1b10), puVar5 = PTR_DAT_04bd1a60, iVar6 != 0)) {
    if (((*PTR_DAT_04bd1a68 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bd1a68), puVar4 = PTR_DAT_04bd1a48, iVar6 != 0)) {
      if (((*PTR_DAT_04bd1a50 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bd1a50), puVar1 = PTR_DAT_04bd19e8, iVar6 != 0)) {
        if (((*PTR_DAT_04bd19f0 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04bd19f0), puVar2 = PTR_DAT_04bd19f8, iVar6 != 0)) {
          if (((*PTR_DAT_04bd1a00 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04bd1a00), puVar3 = PTR_DAT_04bd1a08, iVar6 != 0))
          {
            if (((*PTR_DAT_04bd1a10 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_04bd1a10), iVar6 != 0)) {
              *(undefined8 *)puVar3 = 0;
              __cxa_guard_release(PTR_DAT_04bd1a10);
            }
            *(undefined **)puVar2 = puVar3;
            __cxa_guard_release(PTR_DAT_04bd1a00);
          }
          *(undefined **)puVar1 = puVar2;
          __cxa_guard_release(PTR_DAT_04bd19f0);
        }
        *(undefined **)puVar4 = puVar1;
        __cxa_guard_release(PTR_DAT_04bd1a50);
      }
      *(undefined **)puVar5 = puVar4;
      __cxa_guard_release(PTR_DAT_04bd1a68);
    }
    *(undefined **)PTR_DAT_04bd1b08 = puVar5;
    __cxa_guard_release(PTR_DAT_04bd1b10);
  }
  if (param_1 != (long *)0x0) {
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1);
    if (puVar7 == (undefined8 *)PTR_DAT_04bd1b08) {
      return param_1;
    }
    do {
      puVar7 = (undefined8 *)*puVar7;
    } while (puVar7 != (undefined8 *)PTR_DAT_04bd1b08 && puVar7 != (undefined8 *)0x0);
    if (puVar7 != (undefined8 *)0x0) {
      return param_1;
    }
  }
  return (long *)0x0;
}

