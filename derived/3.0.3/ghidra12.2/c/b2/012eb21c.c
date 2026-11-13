
short * FUN_012eb21c(long param_1,long param_2,long param_3)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  
  iVar2 = *(int *)(param_1 + 0x28);
  iVar3 = *(int *)(param_2 + 8);
  if (iVar2 <= iVar3 && iVar3 <= *(int *)(param_1 + 8) + iVar2 + -1) {
    iVar4 = *(int *)(param_1 + 0x2c);
    iVar5 = *(int *)(param_2 + 0xc);
    if (iVar5 < iVar4) {
      return (short *)PTR_DAT_04bb37e0;
    }
    iVar6 = *(int *)(param_1 + 0xc);
    if (iVar6 + iVar4 + -1 < iVar5) {
      return (short *)PTR_DAT_04bb37e0;
    }
    uVar7 = (iVar5 - iVar4) + (iVar3 - iVar2) * iVar6;
    uVar8 = *(uint *)(param_1 + 0x10);
    if (uVar8 <= uVar7) {
      return (short *)PTR_DAT_04bb37e0;
    }
    lVar9 = *(long *)(param_1 + 0x18);
    psVar1 = (short *)(lVar9 + (long)(int)uVar7 * 8);
    if (*psVar1 != -3) {
      if (param_3 == 0) {
        return psVar1;
      }
      *(int *)(param_3 + 8) = iVar3;
      *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_2 + 0xc);
      return psVar1;
    }
    uVar7 = *(uint *)(lVar9 + (long)(int)uVar7 * 8 + 4);
    iVar5 = iVar5 - (uVar7 >> 0x18);
    iVar3 = iVar3 - (uVar7 >> 0x10 & 0xff);
    uVar7 = (iVar5 - iVar4) + (iVar3 - iVar2) * iVar6;
    if (uVar7 < uVar8) {
      if (param_3 != 0) {
        *(int *)(param_3 + 8) = iVar3;
        *(int *)(param_3 + 0xc) = iVar5;
        uVar8 = *(uint *)(param_1 + 0x10);
        lVar9 = *(long *)(param_1 + 0x18);
      }
      if (uVar8 <= uVar7) {
        uVar7 = 0;
      }
      return (short *)(lVar9 + (long)(int)uVar7 * 8);
    }
  }
  return &DAT_05586008;
}

