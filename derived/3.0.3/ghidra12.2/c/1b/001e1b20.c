
void FUN_001e1b20(undefined8 *param_1)

{
  undefined *puVar1;
  
  *(undefined1 *)(param_1 + 3) = 0;
  puVar1 = PTR_DAT_04bc0ec8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = puVar1 + 0x10;
  param_1[5] = param_1 + 3;
  param_1[6] = 0x10;
  return;
}

