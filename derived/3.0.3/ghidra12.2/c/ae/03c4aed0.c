
long FUN_03c4aed0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_03ba2680();
  uVar2 = (**(code **)(*param_1 + 0x28))(param_1,param_3,lVar1);
  *(undefined8 *)(lVar1 + 0x90) = uVar2;
  return lVar1;
}

