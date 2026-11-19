
undefined8 * FUN_03c94080(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  
  if (((*PTR_DAT_04bd40e0 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04bd40e0), puVar2 = PTR_DAT_04bd1c60, iVar3 != 0)) {
    if (((*PTR_DAT_04bd1c68 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bd1c68), puVar1 = PTR_DAT_04bc9550, iVar3 != 0)) {
      if (((*PTR_DAT_04bc9558 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc9558), iVar3 != 0)) {
        *(undefined8 *)puVar1 = 0;
        __cxa_guard_release(PTR_DAT_04bc9558);
      }
      *(undefined **)puVar2 = puVar1;
      __cxa_guard_release(PTR_DAT_04bd1c68);
    }
    *(undefined **)PTR_DAT_04bd40d8 = puVar2;
    __cxa_guard_release(PTR_DAT_04bd40e0);
  }
  if (param_1 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)(**(code **)*param_1)(param_1);
    if (puVar4 == (undefined8 *)PTR_DAT_04bd40d8) {
      return param_1;
    }
    do {
      puVar4 = (undefined8 *)*puVar4;
    } while (puVar4 != (undefined8 *)PTR_DAT_04bd40d8 && puVar4 != (undefined8 *)0x0);
    if (puVar4 != (undefined8 *)0x0) {
      return param_1;
    }
  }
  return (undefined8 *)0x0;
}

