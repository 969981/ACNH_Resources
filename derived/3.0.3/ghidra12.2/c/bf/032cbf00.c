
long * FUN_032cbf00(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  
  if (((*PTR_DAT_04bc9480 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc9480), puVar2 = PTR_DAT_04bc9468, iVar3 != 0)) {
    if (((*PTR_DAT_04bc9470 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc9470), puVar1 = PTR_DAT_04bc8f30, iVar3 != 0)) {
      if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar3 != 0)) {
        *(undefined8 *)puVar1 = 0;
        __cxa_guard_release(PTR_DAT_04bc8f38);
      }
      *(undefined **)puVar2 = puVar1;
      __cxa_guard_release(PTR_DAT_04bc9470);
    }
    *(undefined **)PTR_DAT_04bc9478 = puVar2;
    __cxa_guard_release(PTR_DAT_04bc9480);
  }
  if (param_1 != (long *)0x0) {
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1);
    if (puVar4 == (undefined8 *)PTR_DAT_04bc9478) {
      return param_1;
    }
    do {
      puVar4 = (undefined8 *)*puVar4;
    } while (puVar4 != (undefined8 *)PTR_DAT_04bc9478 && puVar4 != (undefined8 *)0x0);
    if (puVar4 != (undefined8 *)0x0) {
      return param_1;
    }
  }
  return (long *)0x0;
}

