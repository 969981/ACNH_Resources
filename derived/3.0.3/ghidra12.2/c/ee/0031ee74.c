
bool FUN_0031ee74(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x1c8);
  uVar1 = (param_3 + lVar2) - 1U & -lVar2;
  param_1[1] = param_2;
  param_1[2] = uVar1;
  lVar2 = FUN_0031e790(param_2,uVar1,lVar2);
  *param_1 = lVar2;
  return lVar2 != 0;
}

