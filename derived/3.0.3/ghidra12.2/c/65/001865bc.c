
void FUN_001865bc(long *param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong local_18;
  
  uVar7 = *param_2;
  *param_1 = 0;
  FUN_00186524(&local_18);
  iVar1 = ((int)(SUB168(SEXT816((long)uVar7) * SEXT816(0x1845c8a0ce512957),8) >> 0xd) -
          (SUB164(SEXT816((long)uVar7) * SEXT816(0x1845c8a0ce512957),0xc) >> 0x1f)) + 0x264965;
  iVar5 = (iVar1 * 4) / 0x23ab1;
  iVar3 = iVar5 * 0x23ab1;
  iVar2 = iVar3 + 6;
  if (-4 < iVar3) {
    iVar2 = iVar3 + 3;
  }
  iVar1 = iVar1 - (iVar2 >> 2);
  iVar6 = (iVar1 * 4000 + 4000) / 0x164b09;
  iVar3 = iVar6 * 0x5b5;
  iVar2 = iVar3 + 3;
  if (-1 < iVar3) {
    iVar2 = iVar3;
  }
  iVar1 = (iVar1 - (iVar2 >> 2)) + 0x1f;
  iVar2 = iVar1 * 0x50;
  iVar3 = iVar2 / 0x98f;
  iVar2 = iVar2 / 0x6925;
  uVar4 = (uint)((ulong)((long)(iVar3 * 0x98f) * -0x66666667) >> 0x20);
  *param_1 = (uVar7 % 0x3c | ((uVar7 / 0xe10) % 0x18) * 0x1000 | ((uVar7 / 0x3c) % 0x3c) * 0x40 |
              local_18 & 0xffffff0000000000 |
              ((ulong)(uint)(iVar6 + iVar5 * 100 + -0x1324 + iVar2) & 0x3fff) << 0x1a |
             (ulong)((iVar3 + iVar2 * -0xc) * 0x400000 + 0x800000) & 0x3c00000) +
             ((ulong)(((uVar4 >> 5) - ((int)uVar4 >> 0x1f)) + iVar1) & 0x1f) * 0x20000;
  return;
}

