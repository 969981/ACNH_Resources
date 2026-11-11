
long FUN_0054c3a0(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  FUN_0043a3b0(param_3,param_1,0xe0);
  FUN_00438670(param_3 + 0x70,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_3 + 0xa8) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_3 + 0xa0) = uVar1;
  FUN_00482420(param_3 + 0x30,param_2);
  return param_3;
}

