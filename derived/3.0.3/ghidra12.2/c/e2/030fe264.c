
void FUN_030fe264(long param_1)

{
  *(byte *)(param_1 + 0x460) = *(byte *)(param_1 + 0x460) & 0xfd;
  FUN_03f45838(param_1 + 0x470);
  if (*(long *)(param_1 + 0x468) != 0) {
    *(byte *)(param_1 + 0x460) = *(byte *)(param_1 + 0x460) & 0xfe;
    FUN_0383b748();
    FUN_03839fd0(*(undefined8 *)PTR_DAT_04bcb3d8,*(undefined8 *)(param_1 + 0x468),0);
    *(undefined8 *)(param_1 + 0x468) = 0;
  }
  FUN_03838610(param_1 + 0x460);
  FUN_030beff8(param_1);
  return;
}

