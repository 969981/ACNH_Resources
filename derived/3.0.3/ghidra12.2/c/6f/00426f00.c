
void FUN_00426f00(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  
  puVar1 = param_2;
  while( true ) {
    uVar3 = (uint)*puVar1;
    if ((uVar3 >> 0xc & 1) != 0) break;
    if (((*puVar1 & 1) != 0) || (puVar1 = (ulong *)puVar1[1], puVar1 == (ulong *)0x0))
    goto LAB_00426f88;
  }
  if ((puVar1 != (ulong *)0x0) &&
     (uVar3 = (uVar3 & 0xfff) - (uVar3 >> 1 & 0x555),
     uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333),
     puVar1[(ulong)((uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] != 0)) {
    *param_1 = puVar1[(ulong)((uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
    param_1[1] = (ulong)param_2;
    while( true ) {
      if (param_2 == (ulong *)0x0) {
        param_1[2] = 0;
        return;
      }
      uVar2 = *param_2;
      if (((uint)uVar2 >> 2 & 1) != 0) break;
      param_2 = (ulong *)param_2[1];
    }
    uVar2 = param_2[(uVar2 >> 1 & 1) + (uVar2 & 1) + 2];
    param_1[2] = uVar2;
    if ((uVar2 & 1) == 0) {
      return;
    }
    FUN_0043dd30(uVar2 & 0xfffffffffffffffe);
    return;
  }
LAB_00426f88:
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}

