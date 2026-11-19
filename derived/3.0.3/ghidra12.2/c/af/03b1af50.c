
undefined8 * FUN_03b1af50(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  
  if (((*PTR_DAT_04bd1c78 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04bd1c78), puVar1 = PTR_DAT_04bc93c0, iVar3 != 0)) {
    if (((*PTR_DAT_04bc93c8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc93c8), puVar2 = PTR_DAT_04bc93d0, iVar3 != 0)) {
      if (((*PTR_DAT_04bc93d8 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc93d8), iVar3 != 0)) {
        *(undefined8 *)puVar2 = 0;
        __cxa_guard_release(PTR_DAT_04bc93d8);
      }
      *(undefined **)puVar1 = puVar2;
      __cxa_guard_release(PTR_DAT_04bc93c8);
    }
    *(undefined **)PTR_DAT_04bd1c70 = puVar1;
    __cxa_guard_release(PTR_DAT_04bd1c78);
  }
  if (param_1 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)(**(code **)*param_1)(param_1);
    if (puVar4 == (undefined8 *)PTR_DAT_04bd1c70) {
      return param_1;
    }
    do {
      puVar4 = (undefined8 *)*puVar4;
    } while (puVar4 != (undefined8 *)PTR_DAT_04bd1c70 && puVar4 != (undefined8 *)0x0);
    if (puVar4 != (undefined8 *)0x0) {
      return param_1;
    }
  }
  return (undefined8 *)0x0;
}

