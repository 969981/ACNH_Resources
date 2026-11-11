
int FUN_003e5ee8(long *param_1,long *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x10))();
  if ((iVar1 == 0) && (*param_2 != 0)) {
    FUN_003ceb10();
    return 0;
  }
  return iVar1;
}

