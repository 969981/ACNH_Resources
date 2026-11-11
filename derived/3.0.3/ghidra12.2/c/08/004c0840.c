
void FUN_004c0840(long param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0043bf00(param_1 + 0x18,*param_2,param_2[1]);
  FUN_0043c080(param_1 + 8,uVar1);
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return;
}

