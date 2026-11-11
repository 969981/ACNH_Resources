
uint FUN_0065b1f0(ulong param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(byte *)(&DAT_04c7a332 + (param_1 & 0xffffffff) * 0xe) != 0) {
    uVar1 = (param_2 - 1U) / (uint)*(byte *)(&DAT_04c7a332 + (param_1 & 0xffffffff) * 0xe);
  }
  return (uVar1 + 1) * (uint)(ushort)(&DAT_04c7a330)[(param_1 & 0xffffffff) * 0x1c] >> 3;
}

