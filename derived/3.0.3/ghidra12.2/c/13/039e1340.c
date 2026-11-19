
void FUN_039e1340(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x1d0);
  *(ushort *)(param_1 + 0x2a70) = *(ushort *)(param_1 + 0x2a70) | 0x28;
  if (iVar1 != 0) {
    lVar5 = *(long *)(param_1 + 0x1d8);
    iVar6 = 0;
    do {
      lVar3 = lVar5 + (long)iVar6 * 0x910;
      iVar2 = *(int *)(lVar3 + 0x610);
      if (iVar2 != 0) {
        iVar4 = 0;
        do {
          FUN_039e4150(lVar3,iVar4);
          iVar4 = iVar4 + 1;
        } while (iVar2 != iVar4);
      }
      iVar6 = iVar6 + 1;
    } while (iVar1 != iVar6);
  }
  FUN_039e0c70(param_1);
  return;
}

