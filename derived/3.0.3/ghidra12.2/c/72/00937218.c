
void FUN_00937218(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_DAT_04bb5b80;
  puVar1 = PTR_DAT_04bb2cc0;
  *param_1 = &PTR_LAB_04928c18;
  param_1[0x9f5] = puVar1 + 0x10;
  puVar3 = PTR_DAT_04bbc1a0;
  param_1[0x50] = puVar2 + 0x10;
  param_1[0x9f0] = puVar3 + 0x10;
  param_1[0x9ea] = puVar3 + 0x10;
  FUN_0093c594(param_1 + 0x5df);
  FUN_0093c6a4(param_1 + 0x6d);
  param_1[0x58] = puVar1 + 0x10;
  return;
}

