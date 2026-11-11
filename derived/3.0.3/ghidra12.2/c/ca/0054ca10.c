
long FUN_0054ca10(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  FUN_0043a3b0(param_3,param_1,0x120);
  FUN_00438670(param_3 + 0x90,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_3 + 200) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_3 + 0xc0) = uVar1;
  FUN_00482420(param_3 + 0x50,param_2);
  return param_3;
}

