
uint FUN_00975c90(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  if (((DAT_04cfae30 == 0) || (lVar4 = *(long *)(DAT_04cfae30 + 0xa8), lVar4 == 0)) ||
     (uVar1 = *(uint *)(param_1 + 8), (int)uVar1 < 0)) {
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  uVar3 = 0;
  if ((-1 < (int)uVar2) && (uVar1 < *(uint *)(lVar4 + 0x38) && uVar2 < *(uint *)(lVar4 + 0x3c))) {
    uVar1 = uVar1 + *(uint *)(lVar4 + 0x38) * uVar2;
    if (*(uint *)(lVar4 + 0x68) <= uVar1 || *(long *)(lVar4 + 0x70) == 0) {
      return 0;
    }
    uVar3 = *(uint *)(*(long *)(lVar4 + 0x70) + (long)(int)uVar1 * 4) >> 7 & 1;
  }
  return uVar3;
}

