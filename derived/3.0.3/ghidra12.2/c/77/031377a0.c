
undefined4 FUN_031377a0(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x30);
  uVar2 = 0xffffffff;
  if ((-1 < (int)uVar4) && ((int)uVar4 < (int)*(uint *)(param_1 + 0x18))) {
    if (uVar4 < *(uint *)(param_1 + 0x18)) {
      lVar3 = param_1 + 8;
      uVar1 = uVar4 + 1 & 3;
      if (2 < uVar4) {
        uVar4 = uVar4 + 1 & 0xfffffffc;
        do {
          uVar4 = uVar4 - 4;
          lVar3 = *(long *)(*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) + 8);
        } while (uVar4 != 0);
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        lVar3 = *(long *)(lVar3 + 8);
      }
    }
    else {
      lVar3 = 0;
    }
    uVar2 = 0xffffffff;
    if ((lVar3 != 0) && (lVar3 = lVar3 - *(int *)(param_1 + 0x1c), lVar3 != 0)) {
      uVar2 = *(undefined4 *)(lVar3 + 0x270);
    }
  }
  return uVar2;
}

