
long * FUN_03b30100(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  
  if (((*PTR_DAT_04bd1a50 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd1a50), puVar1 = PTR_DAT_04bd19e8, iVar4 != 0)) {
    if (((*PTR_DAT_04bd19f0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd19f0), puVar2 = PTR_DAT_04bd19f8, iVar4 != 0)) {
      if (((*PTR_DAT_04bd1a00 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd1a00), puVar3 = PTR_DAT_04bd1a08, iVar4 != 0)) {
        if (((*PTR_DAT_04bd1a10 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd1a10), iVar4 != 0)) {
          *(undefined8 *)puVar3 = 0;
          __cxa_guard_release(PTR_DAT_04bd1a10);
        }
        *(undefined **)puVar2 = puVar3;
        __cxa_guard_release(PTR_DAT_04bd1a00);
      }
      *(undefined **)puVar1 = puVar2;
      __cxa_guard_release(PTR_DAT_04bd19f0);
    }
    *(undefined **)PTR_DAT_04bd1a48 = puVar1;
    __cxa_guard_release(PTR_DAT_04bd1a50);
  }
  if (param_1 != (long *)0x0) {
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1);
    if (puVar5 == (undefined8 *)PTR_DAT_04bd1a48) {
      return param_1;
    }
    do {
      puVar5 = (undefined8 *)*puVar5;
    } while (puVar5 != (undefined8 *)PTR_DAT_04bd1a48 && puVar5 != (undefined8 *)0x0);
    if (puVar5 != (undefined8 *)0x0) {
      return param_1;
    }
  }
  return (long *)0x0;
}

