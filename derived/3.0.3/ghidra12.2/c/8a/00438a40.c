
long FUN_00438a40(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_2 + -4);
  lVar2 = (**(code **)(*param_1 + 0x40))(param_1,param_2 - iVar1);
  return lVar2 - iVar1;
}

