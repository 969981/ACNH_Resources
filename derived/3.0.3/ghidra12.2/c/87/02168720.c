
undefined8 * FUN_02168720(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  
  if (((*PTR_DAT_04bb7480 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb7480), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb7478 = PTR_DAT_04bb6d20 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb7480);
  }
  if (param_1 == (undefined8 *)0x0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    uVar2 = (**(code **)*param_1)(param_1,PTR_DAT_04bb7478);
    if ((uVar2 & 1) == 0) {
      param_1 = (undefined8 *)0x0;
    }
  }
  return param_1;
}

