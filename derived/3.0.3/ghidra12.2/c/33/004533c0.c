
undefined8 FUN_004533c0(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x38))();
  (**(code **)(*param_1 + 0x40))(param_1,uVar1,param_2);
  return uVar1;
}

