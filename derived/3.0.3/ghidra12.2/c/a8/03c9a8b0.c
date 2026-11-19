
long * FUN_03c9a8b0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  
  if (((*PTR_DAT_04bd4470 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd4470), puVar2 = PTR_DAT_04bd1a18, iVar4 != 0)) {
    if (((*PTR_DAT_04bd1a20 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd1a20), puVar3 = PTR_DAT_04bd1a28, iVar4 != 0)) {
      if (((*PTR_DAT_04bd1a30 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd1a30), puVar1 = PTR_DAT_04bc8f30, iVar4 != 0)) {
        if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar4 != 0)) {
          *(undefined8 *)puVar1 = 0;
          __cxa_guard_release(PTR_DAT_04bc8f38);
        }
        *(undefined **)puVar3 = puVar1;
        __cxa_guard_release(PTR_DAT_04bd1a30);
      }
      *(undefined **)puVar2 = puVar3;
      __cxa_guard_release(PTR_DAT_04bd1a20);
    }
    *(undefined **)PTR_DAT_04bd4468 = puVar2;
    __cxa_guard_release(PTR_DAT_04bd4470);
  }
  if (param_1 != (long *)0x0) {
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1);
    if (puVar5 == (undefined8 *)PTR_DAT_04bd4468) {
      return param_1;
    }
    do {
      puVar5 = (undefined8 *)*puVar5;
    } while (puVar5 != (undefined8 *)PTR_DAT_04bd4468 && puVar5 != (undefined8 *)0x0);
    if (puVar5 != (undefined8 *)0x0) {
      return param_1;
    }
  }
  return (long *)0x0;
}

