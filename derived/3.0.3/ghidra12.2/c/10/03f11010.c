
undefined4 FUN_03f11010(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  
  if (((param_2 != 0) && (lVar5 = *(long *)(param_1 + 0x138), lVar5 != 0)) &&
     (uVar1 = *(uint *)(param_1 + 0x144), uVar1 != 0)) {
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = param_2 / uVar1;
    }
    uVar3 = param_2 - uVar3 * uVar1;
    uVar4 = uVar3;
    do {
      uVar2 = *(uint *)(lVar5 + (-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3));
      if (uVar2 == param_2) {
        return *(undefined4 *)(lVar5 + (long)(int)uVar4 * 8 + 4);
      }
      if (uVar2 == 0) {
        return 0xffffffff;
      }
      uVar2 = 0;
      if ((int)(uVar4 + 1) < (int)uVar1) {
        uVar2 = uVar4 + 1;
      }
      uVar4 = uVar2;
    } while (uVar2 != uVar3);
  }
  return 0xffffffff;
}

