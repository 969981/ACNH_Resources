
int FUN_0033a8f0(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  for (lVar2 = *(long *)(*(long *)(param_1 + 0x4a8) + 0x38); lVar2 != 0;
      lVar2 = *(long *)(lVar2 + 0x68)) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

