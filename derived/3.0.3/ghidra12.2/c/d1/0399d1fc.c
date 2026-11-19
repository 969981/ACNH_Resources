
void FUN_0399d1fc(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bd11b8;
  *param_1 = &PTR_FUN_04b69a70;
  param_1[0x10] = puVar1 + 0x10;
  FUN_0390d560();
  param_1[1] = puVar1 + 0x10;
  FUN_0390d560(param_1 + 1);
  return;
}

