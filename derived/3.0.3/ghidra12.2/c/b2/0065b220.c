
int FUN_0065b220(ulong param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  param_1 = param_1 & 0xffffffff;
  uVar1 = 0;
  uVar2 = (uint)*(byte *)((long)&DAT_04c7a332 + param_1 * 0x38 + 1);
  if (uVar2 != 0) {
    uVar1 = (param_3 - 1U) / uVar2;
  }
  uVar2 = 0;
  if (*(byte *)(&DAT_04c7a332 + param_1 * 0xe) != 0) {
    uVar2 = (param_2 - 1U) / (uint)*(byte *)(&DAT_04c7a332 + param_1 * 0xe);
  }
  return ((uVar2 + 1) * (uint)(ushort)(&DAT_04c7a330)[param_1 * 0x1c] >> 3) * (uVar1 + 1);
}

