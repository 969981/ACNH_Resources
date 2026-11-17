
void FUN_02fed6a0(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = &PTR___cxa_pure_virtual_04aefeb0;
  if ((long *)param_1[0x4b] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x4b] + 8))();
  }
  puVar1 = PTR_DAT_04bc7ab8 + 0x10;
  param_1[0x40] = puVar1;
  FUN_03ebae78(param_1 + 0x41);
  param_1[0x35] = puVar1;
  FUN_03ebae78(param_1 + 0x36);
  param_1[0x2a] = puVar1;
  FUN_03ebae78(param_1 + 0x2b);
  param_1[0x1f] = puVar1;
  FUN_03ebae78(param_1 + 0x20);
  param_1[0x14] = puVar1;
  FUN_03ebae78(param_1 + 0x15);
  return;
}

