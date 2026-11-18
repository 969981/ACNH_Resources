
void FUN_03580a60(long param_1)

{
  uint uVar1;
  undefined2 uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 0x248);
  iVar4 = -1;
  if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(param_1 + 0x230))) {
    lVar3 = param_1 + 0x220;
    uVar1 = uVar5 + 1 & 3;
    if (2 < uVar5) {
      uVar5 = uVar5 + 1 & 0xfffffffc;
      do {
        uVar5 = uVar5 - 4;
        lVar3 = *(long *)(*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) + 8);
      } while (uVar5 != 0);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      lVar3 = *(long *)(lVar3 + 8);
    }
    iVar4 = -1;
    if ((lVar3 != 0) && (lVar3 = lVar3 - *(int *)(param_1 + 0x234), lVar3 != 0)) {
      iVar4 = *(int *)(lVar3 + 0x270);
    }
  }
  if (DAT_05771760 == iVar4) {
    uVar2 = 0;
  }
  else if (DAT_05771768 == iVar4) {
    uVar2 = 1;
  }
  else if (DAT_05771770 == iVar4) {
    uVar2 = 2;
  }
  else if (DAT_05771778 == iVar4) {
    uVar2 = 3;
  }
  else if (DAT_05771780 == iVar4) {
    uVar2 = 4;
  }
  else if (DAT_05771788 == iVar4) {
    uVar2 = 5;
  }
  else if (DAT_05771790 == iVar4) {
    uVar2 = 6;
  }
  else if (DAT_05771798 == iVar4) {
    uVar2 = 7;
  }
  else if (DAT_057717a0 == iVar4) {
    uVar2 = 8;
  }
  else if (DAT_057717a8 == iVar4) {
    uVar2 = 9;
  }
  else {
    if (DAT_057717b0 != iVar4) {
      return;
    }
    uVar2 = 10;
  }
  *(undefined2 *)(param_1 + 0x350) = uVar2;
  return;
}

