
ulong FUN_004389a0(long *param_1,long param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_2 + param_3 + 0x10,0);
  uVar2 = lVar1 + (param_3 + -1) + 0x10U & (long)-param_3;
  *(long **)(uVar2 - 0x10) = param_1;
  *(int *)(uVar2 - 8) = (int)(param_2 + param_3);
  *(int *)(uVar2 - 4) = (int)uVar2 - (int)lVar1;
  return uVar2;
}

