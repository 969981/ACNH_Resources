
int FUN_009b950c(ulong *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = *param_1;
  uVar1 = (int)uVar3 - ((uint)(uVar3 >> 1) & 0x55555555);
  uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
  uVar2 = (uint)(uVar3 >> 0x20);
  uVar2 = uVar2 - (uVar2 >> 1 & 0x55555555);
  uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
  uVar1 = uVar1 + (uVar1 >> 8);
  uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
  uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
  uVar2 = uVar2 + (uVar2 >> 8);
  return (uVar2 + (uVar2 >> 0x10) & 0x3f) + (uVar1 + (uVar1 >> 0x10) & 0x3f);
}

