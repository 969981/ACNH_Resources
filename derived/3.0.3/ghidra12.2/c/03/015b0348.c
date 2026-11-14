
void FUN_015b0348(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = &PTR_LAB_049aeb88;
  param_1[0xcd] = PTR_DAT_04bd11b8 + 0x10;
  FUN_0390d560(param_1 + 0xcd);
  puVar1 = PTR_DAT_04bd1408;
  param_1[0xc9] = 0;
  param_1[0x70] = puVar1 + 0x10;
  FUN_0034f82c(param_1 + 0xc1);
  FUN_0034f6d0(param_1 + 0xa6);
  param_1[0x15] = puVar1 + 0x10;
  param_1[0x6e] = 0;
  FUN_0034f82c(param_1 + 0x66);
  FUN_0034f6d0(param_1 + 0x4b);
  FUN_03f2d448(param_1 + 9);
  *param_1 = &PTR_FUN_049ba290;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 0x18))();
  }
  param_1[1] = 0;
  return;
}

