
uint FUN_0028a648(ulong param_1)

{
  uint uVar1;
  
  uVar1 = (int)param_1 - ((uint)(param_1 >> 1) & 0x55555555);
  uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
  uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
  uVar1 = uVar1 + (uVar1 >> 8);
  return uVar1 + (uVar1 >> 0x10) & 0x3f;
}

