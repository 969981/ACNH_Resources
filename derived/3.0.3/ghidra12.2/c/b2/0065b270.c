
int FUN_0065b270(ulong param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  param_1 = param_1 & 0xffffffff;
  uVar1 = 0;
  if (*(byte *)(&DAT_04c7a332 + param_1 * 0xe) != 0) {
    uVar1 = (param_2 - 1U) / (uint)*(byte *)(&DAT_04c7a332 + param_1 * 0xe);
  }
  uVar2 = 0;
  uVar3 = (uint)*(byte *)((long)&DAT_04c7a332 + param_1 * 0x38 + 1);
  if (uVar3 != 0) {
    uVar2 = (param_3 - 1U) / uVar3;
  }
  return (param_5 + (uVar2 + 1) * param_6) *
         ((uVar1 + 1) * (uint)(ushort)(&DAT_04c7a330)[param_1 * 0x1c] >> 3) +
         ((uint)(ushort)(&DAT_04c7a330)[param_1 * 0x1c] * param_4 >> 3);
}

