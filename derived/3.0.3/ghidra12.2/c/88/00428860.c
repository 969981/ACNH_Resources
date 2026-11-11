
bool FUN_00428860(ulong *param_1)

{
  ulong *puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  while (uVar2 = (uint)*puVar1, (uVar2 >> 0x13 & 1) == 0) {
    puVar1 = (ulong *)puVar1[1];
    if (puVar1 == (ulong *)0x0) {
      return false;
    }
  }
  uVar2 = (uVar2 & 0x7ffff) - (uVar2 >> 1 & 0x15555);
  uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
  if (puVar1[(ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] == 0) {
    return false;
  }
  while( true ) {
    uVar2 = (uint)*param_1;
    if ((uVar2 >> 6 & 1) != 0) {
      if (param_1 == (ulong *)0x0) {
        return false;
      }
      uVar2 = (uVar2 & 0x3f) - (uVar2 >> 1 & 0x15);
      uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
      return param_1[(ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] != 0;
    }
    if ((*param_1 & 1) != 0) break;
    param_1 = (ulong *)param_1[1];
    if (param_1 == (ulong *)0x0) {
      return false;
    }
  }
  return false;
}

