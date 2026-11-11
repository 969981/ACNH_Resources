
void FUN_00651d70(long param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  long lVar5;
  
  iVar1 = *(int *)(param_1 + 0x100);
  if (1 < iVar1) {
    pbVar4 = (byte *)(param_1 + 0xb);
    lVar5 = 1;
    bVar3 = *(byte *)(param_1 + 2);
    do {
      bVar2 = pbVar4[-1];
      if ((bVar2 < bVar3) || ((bVar2 <= bVar3 && (*pbVar4 <= pbVar4[-8])))) {
        FUN_00651f20(param_1,0,iVar1 + -1,&LAB_00651de0);
        return;
      }
      lVar5 = lVar5 + 1;
      pbVar4 = pbVar4 + 8;
      bVar3 = bVar2;
    } while (lVar5 < iVar1);
  }
  return;
}

