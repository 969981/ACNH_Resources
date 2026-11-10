
void FUN_001fd110(long *param_1,undefined8 param_2,long param_3)

{
  *param_1 = (long)(PTR_DAT_04bcca38 + 0x10);
  FUN_00196bb8(param_1 + 2);
  param_1[10] = param_3;
  FUN_0019c934(param_1 + 0xb);
  FUN_00186524(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[0x11] = 0x100000001;
  param_1[0x12] = (long)&PTR_LAB_04a426b8;
  param_1[0x15] = (long)(param_1 + 0x13);
  param_1[0x16] = 0x10;
  return;
}

