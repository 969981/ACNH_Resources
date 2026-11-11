
void FUN_00386ec0(long param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  
  lVar5 = *(long *)(param_1 + 0x40);
  if (lVar5 != param_1 + 0x38) {
    iVar6 = 0;
    param_2 = param_2 + 0x18;
    do {
      lVar3 = param_2;
      iVar4 = iVar6;
      do {
        lVar3 = *(long *)(lVar3 + 8);
        bVar2 = iVar4 != 0;
        iVar4 = iVar4 + -1;
      } while (lVar3 != param_2 && bVar2);
      lVar1 = 0;
      if (lVar3 != param_2) {
        lVar1 = lVar3;
      }
      FUN_00386930(param_1,lVar5,lVar1);
      lVar5 = *(long *)(lVar5 + 8);
      iVar6 = iVar6 + 1;
    } while (lVar5 != param_1 + 0x38);
  }
  return;
}

