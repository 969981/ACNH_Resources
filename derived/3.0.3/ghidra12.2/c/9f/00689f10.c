
void FUN_00689f10(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_048f28f0;
  *(undefined4 *)(param_1 + 3) = 0xbf800000;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  FUN_00689730(param_1 + 4);
  param_1[0x16] = 0;
  param_1[0x17] = 0x8000000000000000;
  param_1[0x18] = 0;
  param_1[0x19] = 0x8000000000000000;
  return;
}

