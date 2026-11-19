
int FUN_03c66ec8(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 0x30))(*(long **)(param_1 + 0x20),0);
  iVar1 = *(int *)(lVar2 + 0x20);
  lVar2 = (**(code **)(**(long **)(param_2 + 0x20) + 0x30))(*(long **)(param_2 + 0x20),0);
  return iVar1 - *(int *)(lVar2 + 0x20);
}

