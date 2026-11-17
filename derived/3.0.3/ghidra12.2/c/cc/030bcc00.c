
void FUN_030bcc00(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_04afccb8;
  *(byte *)(param_1 + 0xaa) = *(byte *)(param_1 + 0xaa) & 0xfd;
  FUN_03f45838(param_1 + 0xac);
  if (param_1[0xab] != 0) {
    *(byte *)(param_1 + 0xaa) = *(byte *)(param_1 + 0xaa) & 0xfe;
    FUN_0383b748();
    FUN_03839fd0(*(undefined8 *)PTR_DAT_04bcb3d8,param_1[0xab],0);
    param_1[0xab] = 0;
  }
  FUN_03838610(param_1 + 0xaa);
  FUN_0386e0e8(param_1 + 0x9f);
  FUN_03860d2c(param_1);
  return;
}

