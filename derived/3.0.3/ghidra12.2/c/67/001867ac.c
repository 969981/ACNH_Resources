
long FUN_001867ac(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  short sVar9;
  short sVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  
  uVar11 = *param_1;
  uVar7 = (uint)uVar11 >> 0x16 & 0xf;
  iVar13 = -0x7d1;
  if (2 < uVar7) {
    iVar13 = -2000;
  }
  uVar1 = iVar13 + ((uint)(uVar11 >> 0x1a) & 0x3fff);
  if (((int)uVar1 < 0) && (0xa3 < (uVar1 * -0x5c29000 & 0xffff | uVar1 * -0x5c29 >> 4 & 0xfff))) {
    if ((uVar1 * -0x170a4000 & 0xffff | uVar1 * -0x5c29 >> 2 & 0x3fff) < 0x290) {
      uVar12 = 0;
    }
    else {
      uVar12 = (uint)((uVar1 & 3) == 0);
    }
  }
  else {
    uVar12 = 1;
  }
  uVar14 = *param_2;
  uVar8 = (uint)uVar14 >> 0x16 & 0xf;
  iVar13 = -0x7d1;
  if (2 < uVar8) {
    iVar13 = -2000;
  }
  uVar2 = iVar13 + ((uint)(uVar14 >> 0x1a) & 0x3fff);
  if (((int)uVar2 < 0) && (0xa3 < (uVar2 * -0x5c29000 & 0xffff | uVar2 * -0x5c29 >> 4 & 0xfff))) {
    if ((uVar2 * -0x170a4000 & 0xffff | uVar2 * -0x5c29 >> 2 & 0x3fff) < 0x290) {
      uVar15 = 0;
    }
    else {
      uVar15 = (uint)((uVar2 & 3) == 0);
    }
  }
  else {
    uVar15 = 1;
  }
  iVar4 = (int)(short)uVar1 / 100;
  iVar3 = (short)((short)uVar1 + (short)iVar4 * -100) * 0x5b5;
  iVar13 = iVar3 + 3;
  if (-1 < iVar3) {
    iVar13 = iVar3;
  }
  iVar4 = iVar4 * 0x23ab1;
  iVar3 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar3 = iVar4;
  }
  sVar9 = 9;
  if (2 < uVar7) {
    sVar9 = -3;
  }
  sVar10 = 9;
  if (2 < uVar8) {
    sVar10 = -3;
  }
  iVar4 = (int)(short)uVar2 / 100;
  iVar5 = iVar4 * 0x23ab1;
  iVar6 = (short)((short)uVar2 + (short)iVar4 * -100) * 0x5b5;
  iVar4 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar4 = iVar5;
  }
  iVar5 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar5 = iVar6;
  }
  return (((uVar11 & 0x3f) - (uVar14 & 0x3f)) +
          (long)(int)(((uint)(uVar11 >> 0xc) & 0x1f) - ((uint)(uVar14 >> 0xc) & 0x1f)) * 0xe10 +
          (long)(int)(((uint)(uVar11 >> 6) & 0x3f) - ((uint)(uVar14 >> 6) & 0x3f)) * 0x3c +
         ((long)(int)(((uint)uVar11 >> 0x11 & 0x1f) + (iVar13 >> 2) + (iVar3 >> 2) +
                      (int)(short)((sVar9 + (short)uVar7) * 0x99 + 2) / 5 + uVar12 + 0x3a) -
         (long)(int)(((uint)uVar14 >> 0x11 & 0x1f) + (iVar5 >> 2) + (iVar4 >> 2) +
                     (int)(short)((sVar10 + (short)uVar8) * 0x99 + 2) / 5 + uVar15 + 0x3a)) *
         0x15180) * 1000;
}

