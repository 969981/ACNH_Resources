
void FUN_03b1c650(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = FUN_03b181f0(param_2);
  if (lVar1 != 0) {
    param_3 = *(undefined8 *)(lVar1 + 0xe8);
  }
  (**(code **)(*param_1 + 0x228))(param_1,param_2,param_3,param_4);
  for (lVar1 = *(long *)(param_2 + 0x28); lVar1 != param_2 + 0x20; lVar1 = *(long *)(lVar1 + 8)) {
    FUN_03b1c650(param_1,lVar1 + -8,param_3,param_4);
  }
  return;
}

