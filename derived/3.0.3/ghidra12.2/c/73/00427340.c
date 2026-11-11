
undefined4 FUN_00427340(ulong *param_1)

{
  uint uVar1;
  
  while( true ) {
    uVar1 = (uint)*param_1;
    if ((uVar1 >> 4 & 1) != 0) {
      uVar1 = (uVar1 & 0xf) - (uVar1 >> 1 & 5);
      uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
      return (int)param_1[(ulong)((uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
    }
    if ((*param_1 & 9) != 0) break;
    param_1 = (ulong *)param_1[1];
    if (param_1 == (ulong *)0x0) {
      return 0;
    }
  }
  return 0;
}

