
long FUN_001869ec(ulong *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  short sVar8;
  
  uVar7 = *param_1;
  uVar4 = (uint)uVar7 >> 0x16 & 0xf;
  iVar5 = -0x7d1;
  if (2 < uVar4) {
    iVar5 = -2000;
  }
  uVar1 = iVar5 + ((uint)(uVar7 >> 0x1a) & 0x3fff);
  if (((int)uVar1 < 0) && (0xa3 < (uVar1 * -0x5c29000 & 0xffff | uVar1 * -0x5c29 >> 4 & 0xfff))) {
    if ((uVar1 * -0x170a4000 & 0xffff | uVar1 * -0x5c29 >> 2 & 0x3fff) < 0x290) {
      uVar6 = 0;
    }
    else {
      uVar6 = (uint)((uVar1 & 3) == 0);
    }
  }
  else {
    uVar6 = 1;
  }
  sVar8 = 9;
  if (2 < uVar4) {
    sVar8 = -3;
  }
  iVar3 = (int)(short)uVar1 / 100;
  iVar2 = iVar3 * 0x23ab1;
  iVar5 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar5 = iVar2;
  }
  iVar3 = (short)((short)uVar1 + (short)iVar3 * -100) * 0x5b5;
  iVar2 = iVar3 + 3;
  if (-1 < iVar3) {
    iVar2 = iVar3;
  }
  return (uVar7 & 0x3f) + (uVar7 >> 6 & 0x3f) * 0x3c + (uVar7 >> 0xc & 0x1f) * 0xe10 +
         (long)(int)(((uint)uVar7 >> 0x11 & 0x1f) + (iVar2 >> 2) + (iVar5 >> 2) +
                     (int)(short)((sVar8 + (short)uVar4) * 0x99 + 2) / 5 + uVar6 + 0x3a) * 0x15180;
}

