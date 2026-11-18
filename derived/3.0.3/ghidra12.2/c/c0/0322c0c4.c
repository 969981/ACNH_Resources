
void FUN_0322c0c4(long *param_1)

{
  undefined *puVar1;
  
  *(byte *)(param_1 + 0x43) = *(byte *)(param_1 + 0x43) & 0xfd;
  FUN_03f45838(param_1 + 0x45);
  puVar1 = PTR_DAT_04bcb3d8;
  if (param_1[0x44] != 0) {
    *(byte *)(param_1 + 0x43) = *(byte *)(param_1 + 0x43) & 0xfe;
    FUN_0383b748();
    FUN_03839fd0(*(undefined8 *)puVar1,param_1[0x44],0);
    param_1[0x44] = 0;
  }
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xfd;
  FUN_03f45838(param_1 + 0x4b);
  if (param_1[0x4a] != 0) {
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xfe;
    FUN_0383b748();
    FUN_03839fd0(*(undefined8 *)puVar1,param_1[0x4a],0);
    param_1[0x4a] = 0;
  }
  *(byte *)(param_1 + 0x4f) = *(byte *)(param_1 + 0x4f) & 0xfd;
  FUN_03f45838(param_1 + 0x51);
  if (param_1[0x50] != 0) {
    *(byte *)(param_1 + 0x4f) = *(byte *)(param_1 + 0x4f) & 0xfe;
    FUN_0383b748();
    FUN_03839fd0(*(undefined8 *)puVar1,param_1[0x50],0);
    param_1[0x50] = 0;
  }
  *(byte *)(param_1 + 0x55) = *(byte *)(param_1 + 0x55) & 0xfd;
  FUN_03f45838(param_1 + 0x57);
  if (param_1[0x56] != 0) {
    *(byte *)(param_1 + 0x55) = *(byte *)(param_1 + 0x55) & 0xfe;
    FUN_0383b748();
    FUN_03839fd0(*(undefined8 *)puVar1,param_1[0x56],0);
    param_1[0x56] = 0;
  }
  FUN_03838610(param_1 + 0x55);
  FUN_03838610(param_1 + 0x4f);
  FUN_03838610(param_1 + 0x49);
  FUN_03838610(param_1 + 0x43);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

