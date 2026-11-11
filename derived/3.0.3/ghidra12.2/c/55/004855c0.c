
void FUN_004855c0(uint param_1,ushort *param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  
  uVar1 = param_1 & 0x7fffffff;
  uVar3 = (ushort)(param_1 >> 0x10) & 0x8000;
  if (uVar1 < 0x477fe001) {
    uVar2 = uVar1 + 0xc8000000;
    if (uVar1 >> 0x17 < 0x71) {
      uVar2 = (param_1 & 0x7fffff | 0x800000) >> (ulong)(0x71 - (uVar1 >> 0x17) & 0x1f);
    }
    *param_2 = (ushort)(uVar2 + (uVar2 >> 0xd & 1) + 0xfff >> 0xd) & 0x7fff | uVar3;
    return;
  }
  uVar4 = 0x7c00;
  if ((param_1 & 0x7fffff) != 0 && (~param_1 & 0x7f800000) == 0) {
    uVar4 = 0x7fff;
  }
  *param_2 = uVar4 | uVar3;
  return;
}

