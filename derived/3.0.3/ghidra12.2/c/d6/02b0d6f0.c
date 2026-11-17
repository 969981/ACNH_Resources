
void FUN_02b0d6f0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_04bbc310;
  puVar1 = PTR_DAT_04bbc2c8;
  *param_1 = &PTR_FUN_04aa18b8;
  param_1[0x16] = puVar2 + 0x10;
  param_1[0x52] = puVar1 + 0x10;
  FUN_03f457c4(param_1 + 0x6d);
  param_1[0x4d] = PTR_DAT_04bbc5d8 + 0x10;
  return;
}

