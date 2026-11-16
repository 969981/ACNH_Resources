
bool FUN_0283f464(long param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = *(int *)(lVar4 + 0x110);
    iVar3 = FUN_006f6900(lVar4 + 0x114,0x37acc,0);
    bVar2 = false;
    if (iVar1 == iVar3) {
      iVar1 = *(int *)(lVar4 + 0x37be0);
      iVar3 = FUN_006f6900(lVar4 + 0x37be4,0x3ce5c,0);
      bVar2 = iVar1 == iVar3;
    }
  }
  return bVar2;
}

