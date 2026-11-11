
ulong FUN_004274f0(ulong *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = 0;
  do {
    uVar2 = (uint)*param_1;
    if ((uVar2 >> 0x15 & 1) != 0) {
      uVar2 = (uVar2 & 0x1fffff) - (uVar2 >> 1 & 0x55555);
      uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
      uVar1 = param_1[(ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] | uVar1;
    }
  } while (((*param_1 & 1) == 0) && (param_1 = (ulong *)param_1[1], param_1 != (ulong *)0x0));
  return uVar1 & 0xffff;
}

