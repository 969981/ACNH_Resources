
undefined1  [16] FUN_00428010(ulong *param_1)

{
  uint uVar1;
  short *psVar2;
  undefined1 auVar3 [16];
  
  while( true ) {
    uVar1 = (uint)*param_1;
    if ((uVar1 >> 0x17 & 1) != 0) break;
    if ((*param_1 & 1) != 0) goto LAB_0042808c;
    param_1 = (ulong *)param_1[1];
    if (param_1 == (ulong *)0x0) {
      return ZEXT816(0);
    }
  }
  if (param_1 == (ulong *)0x0) {
    return ZEXT816(0);
  }
  uVar1 = (uVar1 & 0x7fffff) - (uVar1 >> 1 & 0x155555);
  uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
  psVar2 = (short *)param_1[(ulong)((uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
  if (psVar2 != (short *)0x0) {
    auVar3._8_8_ = psVar2 + 4 + ((long)psVar2[1] + (long)*psVar2) * 4;
    auVar3._0_8_ = psVar2 + 4;
    return auVar3;
  }
LAB_0042808c:
  return ZEXT816(0);
}

