
void FUN_02ef6b2c(long *param_1)

{
  undefined *puVar1;
  
  *param_1 = (long)&PTR_LAB_04adfc40;
  *(byte *)(param_1 + 0x4e) = *(byte *)(param_1 + 0x4e) & 0xfd;
  FUN_03f45838(param_1 + 0x50);
  puVar1 = PTR_DAT_04bcb3d8;
  if (param_1[0x4f] != 0) {
    *(byte *)(param_1 + 0x4e) = *(byte *)(param_1 + 0x4e) & 0xfe;
    FUN_0383b748();
    FUN_03839fd0(*(undefined8 *)puVar1,param_1[0x4f],0);
    param_1[0x4f] = 0;
  }
  *(byte *)(param_1 + 499) = *(byte *)(param_1 + 499) & 0xfd;
  FUN_03f45838(param_1 + 0x1f5);
  if (param_1[500] != 0) {
    *(byte *)(param_1 + 499) = *(byte *)(param_1 + 499) & 0xfe;
    FUN_0383b748();
    FUN_03839fd0(*(undefined8 *)puVar1,param_1[500],0);
    param_1[500] = 0;
  }
  DAT_056b6f18 = 0;
  FUN_03838610(param_1 + 499);
  param_1[0x1d4] = (long)(PTR_DAT_04bc7340 + 0x10);
  FUN_03ebae78(param_1 + 0x1d5);
  param_1[0x87] = (long)(PTR_DAT_04bc7370 + 0x10);
  FUN_03ebae78(param_1 + 0x88);
  FUN_03ebae78(param_1 + 0xb0);
  puVar1 = PTR_DAT_04bbb868 + 0x10;
  param_1[0x93] = (long)puVar1;
  param_1[0x54] = (long)puVar1;
  FUN_03838610(param_1 + 0x4e);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

