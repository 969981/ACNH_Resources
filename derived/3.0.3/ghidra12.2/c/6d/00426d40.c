
uint * FUN_00426d40(uint *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_2 - 1U & *param_1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x55555555);
  uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
  return param_1 + (ulong)((uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) * 2 + 4;
}

