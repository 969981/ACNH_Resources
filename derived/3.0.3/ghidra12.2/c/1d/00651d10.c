
int FUN_00651d10(long param_1,byte param_2,uint param_3)

{
  int iVar1;
  byte *pbVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x100) == 0) {
    return -1;
  }
  iVar1 = 0;
  pbVar2 = (byte *)(param_1 + 3);
  lVar3 = (long)*(int *)(param_1 + 0x100) << 3;
  while ((pbVar2[-1] != param_2 || (*pbVar2 != param_3))) {
    iVar1 = iVar1 + 1;
    pbVar2 = pbVar2 + 8;
    lVar3 = lVar3 + -8;
    if (lVar3 == 0) {
      return -1;
    }
  }
  return iVar1;
}

