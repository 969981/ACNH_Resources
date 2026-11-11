
ulong * FUN_00426e00(ulong *param_1,uint param_2)

{
  uint uVar1;
  
  do {
    if ((*param_1 & (ulong)param_2) != 0) {
      uVar1 = param_2 - 1 & (uint)*param_1;
      uVar1 = uVar1 - (uVar1 >> 1 & 0x55555555);
      uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
      return param_1 + (ulong)((uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2;
    }
    param_1 = (ulong *)param_1[1];
  } while (param_1 != (ulong *)0x0);
  return (ulong *)0x0;
}

