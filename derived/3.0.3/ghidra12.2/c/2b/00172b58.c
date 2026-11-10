
undefined8 FUN_00172b58(long param_1,int param_2,int param_3)

{
  long lVar1;
  int iVar2;
  
  lVar1 = ((long)*(int *)(param_1 + 0xbc) - (long)param_3) + (long)param_2;
  iVar2 = (int)lVar1;
  if (lVar1 == iVar2) {
    *(int *)(param_1 + 0xbc) = iVar2;
    return 0;
  }
  return 0xffffffff;
}

