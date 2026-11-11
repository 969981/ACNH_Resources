
void FUN_003a1b7c(long *param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  
  lVar8 = *param_1;
  iVar5 = (int)param_1[0x13];
  uVar4 = *(ushort *)(lVar8 + 0xe4);
  param_1[3] = 0;
  param_1[4] = 8;
  param_1[5] = 0;
  param_1[6] = -1;
  iVar10 = 1;
  if (1 < (long)iVar5) {
    iVar10 = iVar5 + 1;
  }
  param_1[7] = 0;
  param_1[8] = 8;
  param_1[9] = 0;
  param_1[10] = -1;
  param_1[0xb] = 0;
  param_1[0xc] = 8;
  uVar1 = uVar4 + 0x1f >> 3 & 0x3ffc;
  param_1[0xd] = 0;
  param_1[0xe] = -1;
  param_1[0xf] = 0;
  param_1[0x10] = 8;
  param_1[0x11] = 0;
  param_1[0x12] = -1;
  bVar2 = *(byte *)(lVar8 + 0xea);
  lVar6 = (ulong)bVar2 << 2;
  param_1[3] = lVar6;
  bVar3 = *(byte *)(lVar8 + 0xea);
  lVar9 = (long)(int)(iVar10 * uVar1);
  lVar11 = (ulong)bVar3 * 4;
  lVar8 = (long)iVar5 * 0x48;
  param_1[7] = lVar11;
  param_1[0xb] = lVar9;
  param_1[0xf] = lVar8;
  param_1[1] = 0;
  param_1[2] = 8;
  if ((ulong)bVar2 == 0) {
    lVar6 = 0;
  }
  else {
    param_1[6] = 0;
    param_1[1] = lVar6;
  }
  if (bVar3 != 0) {
    uVar7 = (ulong)((int)lVar6 + 7) & 0x7f8;
    param_1[10] = uVar7;
    lVar6 = uVar7 + lVar11;
    param_1[1] = lVar6;
    param_1[2] = 8;
  }
  if (uVar1 != 0) {
    uVar7 = (ulong)((int)lVar6 + 7) & 0x1ff8;
    param_1[0xe] = uVar7;
    lVar6 = uVar7 + lVar9;
    param_1[1] = lVar6;
    param_1[2] = 8;
  }
  if (iVar5 != 0) {
    uVar7 = lVar6 + 7U & 0xfffffffffffffff8;
    param_1[0x12] = uVar7;
    param_1[1] = uVar7 + lVar8;
    param_1[2] = 8;
  }
  return;
}

