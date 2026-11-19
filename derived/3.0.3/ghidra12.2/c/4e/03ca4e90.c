
undefined8 * FUN_03ca4e90(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (((DAT_05af0008 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&DAT_05af0008), puVar1 = PTR_DAT_04bd1c80, iVar2 != 0)) {
    if (((*PTR_DAT_04bd1c88 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd1c88), iVar2 != 0)) {
      if (((DAT_04c62ed0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04c62ed0), iVar2 != 0)) {
        DAT_04c62ec8 = 0;
        __cxa_guard_release(&DAT_04c62ed0);
      }
      *(undefined8 **)puVar1 = &DAT_04c62ec8;
      __cxa_guard_release(PTR_DAT_04bd1c88);
    }
    DAT_05af0000 = puVar1;
    __cxa_guard_release(&DAT_05af0008);
  }
  if (param_1 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)(**(code **)*param_1)(param_1);
    if ((undefined **)puVar3 == &DAT_05af0000) {
      return param_1;
    }
    do {
      puVar3 = (undefined8 *)*puVar3;
    } while ((undefined **)puVar3 != &DAT_05af0000 && puVar3 != (undefined8 *)0x0);
    if (puVar3 != (undefined8 *)0x0) {
      return param_1;
    }
  }
  return (undefined8 *)0x0;
}

