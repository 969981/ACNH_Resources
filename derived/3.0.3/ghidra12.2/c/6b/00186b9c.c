
long FUN_00186b9c(ulong *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  short sVar8;
  
  uVar5 = *param_1;
  if (uVar5 == *DAT_04c57e48) {
    return 0;
  }
  uVar4 = (uint)uVar5 >> 0x16 & 0xf;
  iVar6 = -0x7d1;
  if (2 < uVar4) {
    iVar6 = -2000;
  }
  uVar1 = iVar6 + ((uint)(uVar5 >> 0x1a) & 0x3fff);
  if (((int)uVar1 < 0) && (0xa3 < (uVar1 * -0x5c29000 & 0xffff | uVar1 * -0x5c29 >> 4 & 0xfff))) {
    if ((uVar1 * -0x170a4000 & 0xffff | uVar1 * -0x5c29 >> 2 & 0x3fff) < 0x290) {
      uVar7 = 0;
    }
    else {
      uVar7 = (uint)((uVar1 & 3) == 0);
    }
  }
  else {
    uVar7 = 1;
  }
  sVar8 = 9;
  if (2 < uVar4) {
    sVar8 = -3;
  }
  iVar3 = (int)(short)uVar1 / 100;
  iVar2 = iVar3 * 0x23ab1;
  iVar6 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar6 = iVar2;
  }
  iVar3 = (short)((short)uVar1 + (short)iVar3 * -100) * 0x5b5;
  iVar2 = iVar3 + 3;
  if (-1 < iVar3) {
    iVar2 = iVar3;
  }
  return (uVar5 & 0x3f) + (uVar5 >> 6 & 0x3f) * 0x3c + (uVar5 >> 0xc & 0x1f) * 0xe10 +
         (long)(int)(((uint)uVar5 >> 0x11 & 0x1f) + (iVar2 >> 2) + (iVar6 >> 2) +
                     (int)(short)((sVar8 + (short)uVar4) * 0x99 + 2) / 5 + uVar7 + 0x3a) * 0x15180 +
         0x386d4380;
}

