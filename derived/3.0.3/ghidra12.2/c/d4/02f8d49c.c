
void FUN_02f8d49c(long param_1)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = FUN_02f85584();
  lVar4 = *(long *)(param_1 + 0x218);
  lVar3 = *(long *)(lVar4 + 0x580);
  if (uVar2 < 3) {
    if (lVar3 != 0) {
      FUN_030bfe80(lVar3,uVar2 == 0);
    }
    if (*(long *)(lVar4 + 0x588) != 0) {
      FUN_030bfe80(*(long *)(lVar4 + 0x588),uVar2 == 1);
    }
    lVar3 = *(long *)(lVar4 + 0x590);
    if (lVar3 == 0) {
      return;
    }
    bVar1 = uVar2 == 2;
  }
  else {
    if (lVar3 != 0) {
      FUN_030bfe80(lVar3,0);
    }
    if (*(long *)(lVar4 + 0x588) != 0) {
      FUN_030bfe80(*(long *)(lVar4 + 0x588),0);
    }
    lVar3 = *(long *)(lVar4 + 0x590);
    if (lVar3 == 0) {
      return;
    }
    bVar1 = false;
  }
  FUN_030bfe80(lVar3,bVar1);
  return;
}

