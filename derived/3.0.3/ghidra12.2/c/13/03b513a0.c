
long FUN_03b513a0(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if ((int)*(uint *)(param_1 + 0x208) <= (int)param_2) {
    return 0;
  }
  if (param_2 < *(uint *)(param_1 + 0x208)) {
    param_2 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
    lVar3 = param_1 + 0x1f8;
    uVar4 = param_2 + 1;
    uVar1 = uVar4 & 3;
    if (2 < param_2) {
      uVar4 = uVar4 & 0xfffffffc;
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
  lVar2 = 0;
  if (lVar3 != 0) {
    lVar2 = lVar3 - *(int *)(param_1 + 0x20c);
  }
  return lVar2;
}

