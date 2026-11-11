
void FUN_003b0a38(long *param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  lVar9 = *param_1;
  iVar6 = (int)param_1[1];
  uVar5 = *(ushort *)(lVar9 + 0x9e);
  param_1[6] = 0;
  param_1[7] = -1;
  param_1[8] = 0;
  param_1[9] = 8;
  iVar10 = 1;
  if (1 < (long)iVar6) {
    iVar10 = iVar6 + 1;
  }
  param_1[10] = 0;
  param_1[0xb] = -1;
  param_1[0xc] = 0;
  param_1[0xd] = 8;
  param_1[0xe] = 0;
  param_1[0xf] = -1;
  uVar2 = uVar5 + 0x1f >> 3 & 0x3ffc;
  param_1[0x10] = 0;
  param_1[0x11] = 8;
  lVar7 = (long)(int)(uVar2 * iVar10);
  param_1[0x12] = 0;
  param_1[0x13] = -1;
  param_1[0x14] = 0;
  param_1[0x15] = 8;
  param_1[0x16] = 0;
  param_1[0x17] = -1;
  param_1[4] = lVar7;
  param_1[5] = 8;
  uVar1 = *(ushort *)(lVar9 + 0xa2) + 7;
  uVar13 = (ulong)uVar1 & 0x1fff8;
  param_1[8] = uVar13;
  bVar3 = *(byte *)(lVar9 + 0x9d);
  lVar12 = (ulong)bVar3 * 8;
  param_1[0xc] = lVar12;
  bVar4 = *(byte *)(lVar9 + 0x9d);
  lVar11 = (long)iVar6 * 0x48;
  param_1[2] = 0;
  param_1[3] = 8;
  param_1[0x10] = lVar11;
  lVar9 = (ulong)bVar4 * 8;
  param_1[0x14] = lVar9;
  if (uVar2 == 0) {
    lVar7 = 0;
  }
  else {
    param_1[7] = 0;
    param_1[2] = lVar7;
  }
  if ((uVar1 & 0x1fff8) != 0) {
    uVar8 = lVar7 + 7U & 0xfffffffffffffff8;
    param_1[0xb] = uVar8;
    lVar7 = uVar8 + uVar13;
    param_1[2] = lVar7;
    param_1[3] = 8;
  }
  if (bVar3 != 0) {
    uVar13 = lVar7 + 7U & 0xfffffffffffffff8;
    param_1[0xf] = uVar13;
    lVar7 = uVar13 + lVar12;
    param_1[2] = lVar7;
    param_1[3] = 8;
  }
  if (iVar6 != 0) {
    uVar13 = lVar7 + 7U & 0xfffffffffffffff8;
    lVar7 = uVar13 + lVar11;
    param_1[0x13] = uVar13;
    param_1[2] = lVar7;
    param_1[3] = 8;
  }
  if (bVar4 != 0) {
    uVar13 = lVar7 + 7U & 0xfffffffffffffff8;
    param_1[0x17] = uVar13;
    param_1[2] = uVar13 + lVar9;
    param_1[3] = 8;
  }
  return;
}

