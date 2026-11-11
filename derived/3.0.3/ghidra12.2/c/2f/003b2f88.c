
void FUN_003b2f88(long *param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  lVar3 = 0;
  uVar4 = 8;
  uVar2 = *(ushort *)(*param_1 + 0x38);
  uVar6 = (ulong)uVar2;
  uVar1 = *(uint *)(*param_1 + 4);
  param_1[0xf] = -1;
  param_1[0xd] = 8;
  param_1[0xe] = 0;
  param_1[0x13] = -1;
  param_1[0x11] = 8;
  param_1[0x12] = 0;
  param_1[6] = 0;
  param_1[7] = -1;
  param_1[4] = uVar6 << 6;
  param_1[5] = 0x10;
  param_1[10] = 0;
  param_1[0xb] = -1;
  param_1[8] = uVar6 * 0x60;
  param_1[9] = 0x10;
  if (((uVar1 ^ 0xffffffff) & 0x300) == 0) {
    uVar4 = 0x10;
    lVar3 = uVar6 << 4;
    param_1[0xd] = 0x10;
  }
  uVar8 = 8;
  param_1[0xc] = lVar3;
  param_1[2] = 0;
  param_1[3] = 8;
  lVar5 = (long)(int)param_1[1] * 0x48;
  param_1[0x10] = lVar5;
  if (uVar2 == 0) {
    lVar7 = 0;
  }
  else {
    uVar8 = 0x10;
    param_1[7] = 0;
    param_1[0xb] = uVar6 << 6;
    lVar7 = uVar6 * 0xa0;
    param_1[2] = lVar7;
    param_1[3] = 0x10;
  }
  if (lVar3 != 0) {
    if (uVar8 <= uVar4) {
      uVar8 = uVar4;
    }
    uVar4 = (uVar4 + lVar7) - 1 & -uVar4;
    param_1[0xf] = uVar4;
    lVar7 = uVar4 + lVar3;
    param_1[2] = lVar7;
    param_1[3] = uVar8;
  }
  if ((int)param_1[1] != 0) {
    param_1[0x13] = lVar7;
    param_1[2] = lVar7 + lVar5;
    param_1[3] = uVar8;
  }
  return;
}

