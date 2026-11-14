
byte FUN_016965d0(long param_1,long param_2,byte param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  
  iVar8 = *(int *)(param_2 + 8);
  if (DAT_05233980 < iVar8 + -1 || iVar8 + -2 < DAT_05233970) {
LAB_016965f8:
    return param_3 & 1;
  }
  iVar9 = *(int *)(param_2 + 0xc);
  if ((iVar9 + -2 < DAT_05233974) || (DAT_05233984 < iVar9 + -1)) goto LAB_016965f8;
  uVar6 = iVar8 + -2 >> 1;
  uVar2 = (iVar9 + -2) * 0x80 & 0xffffff00;
  param_1 = param_1 + 8;
  uVar10 = 1 << (ulong)(uVar6 & 0x1f);
  if (uVar2 + uVar6 >> 0xf == 0) {
    uVar4 = *(uint *)(param_1 + (ulong)(uVar2 + uVar6 >> 5) * 4) & uVar10;
    bVar12 = uVar4 != 0 | param_3;
    if ((uVar4 != 0) || (DAT_05233980 < iVar8 + 1)) goto LAB_016966bc;
  }
  else if (DAT_05233980 < iVar8 + 1) goto LAB_016965f8;
  uVar7 = iVar8 >> 1;
  iVar1 = iVar8 + 3;
  uVar4 = 1 << (ulong)(uVar7 & 0x1f);
  if (uVar2 + uVar7 >> 0xf == 0) {
    uVar5 = *(uint *)(param_1 + (ulong)(uVar2 + uVar7 >> 5) * 4) & uVar4;
    bVar12 = uVar5 != 0 | param_3;
    if ((uVar5 != 0) || (DAT_05233980 < iVar1)) goto LAB_016966bc;
  }
  else if (DAT_05233980 < iVar1) goto LAB_016965f8;
  uVar5 = iVar8 + 2 >> 1;
  uVar11 = 1 << (ulong)(uVar5 & 0x1f);
  if ((uVar2 + uVar5 >> 0xf != 0) ||
     ((*(uint *)(param_1 + (ulong)(uVar2 + uVar5 >> 5) * 4) & uVar11) == 0)) {
    if (DAT_05233984 < iVar9 + 1) goto LAB_016965f8;
    uVar3 = iVar9 << 7 & 0xffffff00;
    uVar2 = uVar3 + uVar6;
    if (uVar2 >> 0xf == 0) {
      uVar2 = *(uint *)(param_1 + (ulong)(uVar2 >> 5) * 4) & uVar10;
      bVar12 = uVar2 != 0 | param_3;
      if ((uVar2 != 0) || (DAT_05233980 < iVar1)) goto LAB_016966bc;
    }
    else if (DAT_05233980 < iVar1) goto LAB_016965f8;
    uVar3 = uVar3 + uVar5;
    if ((uVar3 >> 0xf != 0) || ((*(uint *)(param_1 + (ulong)(uVar3 >> 5) * 4) & uVar11) == 0)) {
      bVar12 = param_3;
      if (DAT_05233984 < iVar9 + 3) {
LAB_016966bc:
        return bVar12 & 1;
      }
      iVar8 = (iVar9 << 7 & 0xffffff00U) + 0x100;
      if ((iVar8 + uVar6 >> 0xf != 0) ||
         ((*(uint *)(param_1 + (ulong)(iVar8 + uVar6 >> 5) * 4) & uVar10) == 0)) {
        if ((iVar8 + uVar7 >> 0xf == 0) &&
           ((uVar4 = *(uint *)(param_1 + (ulong)(iVar8 + uVar7 >> 5) * 4) & uVar4,
            bVar12 = uVar4 != 0 | param_3, uVar4 != 0 || (DAT_05233980 < iVar1))))
        goto LAB_016966bc;
        if ((iVar8 + uVar5 >> 0xf != 0) ||
           ((*(uint *)(param_1 + (ulong)(iVar8 + uVar5 >> 5) * 4) & uVar11) == 0)) {
          return 0;
        }
      }
    }
  }
  return 1;
}

