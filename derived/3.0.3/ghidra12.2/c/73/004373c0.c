
uint FUN_004373c0(ulong param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  
  uVar7 = param_1 >> 0x34 & 0x7ff;
  lVar5 = uVar7 - 0x3ff;
  uVar6 = param_1 & 0xfffffffffffff;
  uVar4 = (uint)(param_1 >> 0x3f);
  if (lVar5 == 0x400) {
    return ((uint)(uVar6 != 0) << 0x16 | (uint)(uVar6 >> 0x1d)) ^ uVar4 << 0x1f ^ 0x7f800000;
  }
  if (uVar7 != 0) {
    if (0x7f < lVar5) {
      return uVar4 << 0x1f ^ 0x7f800000;
    }
    if (uVar7 != 0x380 && -0x80 < lVar5) {
      iVar8 = (int)uVar7 + -0x380;
      uVar1 = 0x7fffff;
      iVar2 = iVar8;
      if ((param_1 & 0x10000000) != 0) {
        uVar1 = 0;
        iVar2 = (int)uVar7 + -0x37f;
      }
      uVar3 = (uint)(uVar6 >> 0x1d);
      if (uVar6 >> 0x1d == 0x7fffff) {
        iVar8 = iVar2;
        uVar3 = uVar1;
      }
      return uVar3 ^ uVar4 << 0x1f ^ iVar8 << 0x17;
    }
    if (-0x96 < lVar5) {
      return (int)(1L << (uVar7 - 0x36a & 0x3f)) +
             (int)((long)((uVar6 >> (0x39d - uVar7 & 0x3f)) + 1) >> 1) ^ uVar4 << 0x1f;
    }
    if (uVar7 == 0x369) {
      return (uint)(uVar6 != 0) ^ uVar4 << 0x1f;
    }
  }
  return uVar4 << 0x1f;
}

