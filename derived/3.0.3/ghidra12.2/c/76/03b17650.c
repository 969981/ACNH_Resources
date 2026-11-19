
long * FUN_03b17650(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  
  if (((*PTR_DAT_04bd1cd8 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd1cd8), puVar3 = PTR_DAT_04bd1bf8, iVar4 != 0)) {
    if (((*PTR_DAT_04bd1c00 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd1c00), puVar2 = PTR_DAT_04bc9540, iVar4 != 0)) {
      if (((*PTR_DAT_04bc9548 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc9548), puVar1 = PTR_DAT_04bc8f30, iVar4 != 0)) {
        if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar4 != 0)) {
          *(undefined8 *)puVar1 = 0;
          __cxa_guard_release(PTR_DAT_04bc8f38);
        }
        *(undefined **)puVar2 = puVar1;
        __cxa_guard_release(PTR_DAT_04bc9548);
      }
      *(undefined **)puVar3 = puVar2;
      __cxa_guard_release(PTR_DAT_04bd1c00);
    }
    *(undefined **)PTR_DAT_04bd1cd0 = puVar3;
    __cxa_guard_release(PTR_DAT_04bd1cd8);
  }
  if (param_1 != (long *)0x0) {
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1);
    if (puVar5 == (undefined8 *)PTR_DAT_04bd1cd0) {
      return param_1;
    }
    do {
      puVar5 = (undefined8 *)*puVar5;
    } while (puVar5 != (undefined8 *)PTR_DAT_04bd1cd0 && puVar5 != (undefined8 *)0x0);
    if (puVar5 != (undefined8 *)0x0) {
      return param_1;
    }
  }
  return (long *)0x0;
}

