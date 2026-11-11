
void FUN_003d8d80(undefined4 param_1,long param_2,uint param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  
  iVar2 = *(int *)(param_2 + 0x46c);
  if (0 < iVar2 && param_3 != 0) {
    lVar4 = 1;
    puVar3 = (undefined4 *)(param_2 + (long)(param_4 + 1) * 4 + 0x10cec);
    do {
      if ((param_3 & 1) != 0) {
        *puVar3 = param_1;
        iVar2 = *(int *)(param_2 + 0x46c);
      }
      if (iVar2 <= lVar4) {
        return;
      }
      puVar3 = puVar3 + 0x20;
      lVar4 = lVar4 + 1;
      bVar1 = 1 < param_3;
      param_3 = param_3 >> 1;
    } while (bVar1);
  }
  return;
}

