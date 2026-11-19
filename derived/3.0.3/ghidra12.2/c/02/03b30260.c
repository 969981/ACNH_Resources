
long * FUN_03b30260(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  
  if (((*PTR_DAT_04bd1b00 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd1b00), puVar4 = PTR_DAT_04bd1ae8, iVar5 != 0)) {
    if (((*PTR_DAT_04bd1af0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd1af0), puVar1 = PTR_DAT_04bd19e8, iVar5 != 0)) {
      if (((*PTR_DAT_04bd19f0 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd19f0), puVar2 = PTR_DAT_04bd19f8, iVar5 != 0)) {
        if (((*PTR_DAT_04bd1a00 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd1a00), puVar3 = PTR_DAT_04bd1a08, iVar5 != 0)) {
          if (((*PTR_DAT_04bd1a10 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd1a10), iVar5 != 0)) {
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
      __cxa_guard_release(PTR_DAT_04bd1af0);
    }
    *(undefined **)PTR_DAT_04bd1af8 = puVar4;
    __cxa_guard_release(PTR_DAT_04bd1b00);
  }
  if (param_1 != (long *)0x0) {
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1);
    if (puVar6 == (undefined8 *)PTR_DAT_04bd1af8) {
      return param_1;
    }
    do {
      puVar6 = (undefined8 *)*puVar6;
    } while (puVar6 != (undefined8 *)PTR_DAT_04bd1af8 && puVar6 != (undefined8 *)0x0);
    if (puVar6 != (undefined8 *)0x0) {
      return param_1;
    }
  }
  return (long *)0x0;
}

