
undefined8 FUN_003e609c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_3,0);
  if (iVar1 == -1) {
    return 2;
  }
  uVar2 = FUN_003e5fe8(param_1,param_2,iVar1,0,param_4);
  return uVar2;
}

