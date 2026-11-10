
void FUN_001dbfc8(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_001dbfc8(param_1,*param_2);
  FUN_001dbfc8(param_1,param_2[1]);
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  param_2[9] = puVar1;
  FUN_0018b1a0();
  param_2[4] = puVar1;
  FUN_0018b1a0();
  FUN_00187e4c(param_2);
  return;
}

