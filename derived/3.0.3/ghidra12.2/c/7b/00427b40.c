
ulong FUN_00427b40(long *param_1)

{
  ulong *puVar1;
  uint uVar2;
  
  puVar1 = (ulong *)*param_1;
  if (puVar1 == (ulong *)0x0) {
    return 0;
  }
  while( true ) {
    uVar2 = (uint)*puVar1;
    if ((uVar2 >> 0x10 & 1) != 0) {
      uVar2 = (uVar2 & 0xffff) - (uVar2 >> 1 & 0x5555);
      uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
      return puVar1[(ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
    }
    if ((*puVar1 & 1) != 0) break;
    puVar1 = (ulong *)puVar1[1];
    if (puVar1 == (ulong *)0x0) {
      return 0;
    }
  }
  return 0;
}

