
undefined1  [16] FUN_00428460(ulong *param_1)

{
  short *psVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  
  do {
    uVar2 = (uint)*param_1;
    if ((uVar2 >> 0x17 & 1) != 0) {
      if (param_1 == (ulong *)0x0) {
        return ZEXT816(0);
      }
      uVar2 = (uVar2 & 0x7fffff) - (uVar2 >> 1 & 0x155555);
      uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
      psVar1 = (short *)param_1[(ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2]
      ;
      if (psVar1 == (short *)0x0) {
        return ZEXT816(0);
      }
      auVar3._0_8_ = psVar1 + 4;
      auVar3._8_8_ = auVar3._0_8_ + (long)*psVar1 * 4;
      return auVar3;
    }
    if ((*param_1 & 1) != 0) {
      return ZEXT816(0);
    }
    param_1 = (ulong *)param_1[1];
  } while (param_1 != (ulong *)0x0);
  return ZEXT816(0);
}

