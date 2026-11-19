
void FUN_03b332f8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = FUN_03b33850(param_1[0x20],param_1,param_2);
  if (lVar1 == 0) {
    return;
  }
  lVar3 = param_1[0x20];
  FUN_03b137d0(param_1 + 0x21,lVar1,0);
  lVar2 = (**(code **)(*param_1 + 0x58))(param_1,0);
  *(long **)(*(long *)(lVar2 + 0x18) + (long)*(char *)(lVar3 + 0x15e) * 0x10 + 8) = param_1 + 0x21;
  FUN_00384fe8(param_1,param_2,param_3);
  FUN_03b33ed4(param_1[0x20],lVar1);
  return;
}

