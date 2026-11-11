
int FUN_004284f0(ulong *param_1)

{
  uint uVar1;
  short *psVar2;
  
  do {
    uVar1 = (uint)*param_1;
    if ((uVar1 >> 0x17 & 1) != 0) {
      if (param_1 == (ulong *)0x0) {
        return 0;
      }
      uVar1 = (uVar1 & 0x7fffff) - (uVar1 >> 1 & 0x155555);
      uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
      psVar2 = (short *)param_1[(ulong)((uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2]
      ;
      if (psVar2 == (short *)0x0) {
        return 0;
      }
      return (int)psVar2[1] + (int)*psVar2;
    }
    if ((*param_1 & 1) != 0) {
      return 0;
    }
    param_1 = (ulong *)param_1[1];
  } while (param_1 != (ulong *)0x0);
  return 0;
}

