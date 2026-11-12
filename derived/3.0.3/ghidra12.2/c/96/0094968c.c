
uint FUN_0094968c(long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = *(uint *)(param_2 + 8);
  if (((int)uVar2 < 0) || (uVar1 = *(uint *)(param_2 + 0xc), (int)uVar1 < 0)) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0x80);
  if (*(uint *)(lVar3 + 0x38) <= uVar2 || *(uint *)(lVar3 + 0x3c) <= uVar1) {
    return 0;
  }
  uVar2 = uVar2 + *(uint *)(lVar3 + 0x38) * uVar1;
  if (uVar2 < *(uint *)(lVar3 + 0x48) && *(long *)(lVar3 + 0x50) != 0) {
    lVar3 = *(long *)(lVar3 + 0x50) + (long)(int)uVar2 * 0x34;
    uVar2 = (uint)*(byte *)(lVar3 + 0x30);
    if ((((uVar2 < 0x49) &&
         ((*(uint *)(param_3 + (long)((int)uVar2 >> 5) * 4) >> (ulong)(uVar2 & 0x1f) & 1) != 0)) &&
        (uVar2 = (uint)*(byte *)(lVar3 + 0x31), uVar2 < 0x49)) &&
       ((((*(uint *)(param_3 + (long)((int)uVar2 >> 5) * 4) >> (ulong)(uVar2 & 0x1f) & 1) != 0 &&
         (uVar2 = (uint)*(byte *)(lVar3 + 0x32), uVar2 < 0x49)) &&
        (((*(uint *)(param_3 + (long)((int)uVar2 >> 5) * 4) >> (ulong)(uVar2 & 0x1f) & 1) != 0 &&
         (uVar2 = (uint)*(byte *)(lVar3 + 0x33), uVar2 < 0x49)))))) {
      return *(uint *)(param_3 + (long)((int)uVar2 >> 5) * 4) >> (ulong)(uVar2 & 0x1f) & 1;
    }
  }
  return 0;
}

