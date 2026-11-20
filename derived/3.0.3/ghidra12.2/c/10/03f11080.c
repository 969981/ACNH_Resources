
undefined1  [16] FUN_03f11080(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if (((param_2 != 0) && (lVar5 = *(long *)(param_1 + 0x88), lVar5 != 0)) &&
     (uVar1 = *(uint *)(param_1 + 0x94), uVar1 != 0)) {
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = param_2 / uVar1;
    }
    uVar3 = param_2 - uVar3 * uVar1;
    uVar4 = uVar3;
    do {
      uVar2 = *(uint *)(lVar5 + (-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3));
      if (uVar2 == param_2) {
        uVar1 = *(uint *)(lVar5 + (long)(int)uVar4 * 8 + 4);
        if (((uVar1 < *(uint *)(param_1 + 0x58)) &&
            (lVar5 = *(long *)(*(long *)(param_1 + 0x60) + (long)(int)uVar1 * 8), lVar5 != 0)) &&
           (*(long *)(lVar5 + 0x30) != 0)) {
          auVar6 = FUN_03f1ee70();
          return auVar6;
        }
        break;
      }
      if (uVar2 == 0) break;
      uVar2 = 0;
      if ((int)(uVar4 + 1) < (int)uVar1) {
        uVar2 = uVar4 + 1;
      }
      uVar4 = uVar2;
    } while (uVar2 != uVar3);
  }
  return ZEXT816(0);
}

