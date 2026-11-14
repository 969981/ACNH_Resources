
uint FUN_016967f8(long param_1,long param_2,long param_3,uint param_4)

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
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  
  iVar8 = *(int *)(param_2 + 8);
  if (DAT_05233980 < iVar8 + -1 || iVar8 + -2 < DAT_05233970) {
LAB_01696824:
    return param_4 & 1;
  }
  iVar9 = *(int *)(param_2 + 0xc);
  uVar12 = 1;
  if ((iVar9 + -2 < DAT_05233974) || (DAT_05233984 < iVar9 + -1)) {
LAB_016968bc:
    return param_4 & 1;
  }
  uVar6 = iVar8 + -2 >> 1;
  param_1 = param_1 + 8;
  uVar2 = (iVar9 + -2) * 0x80 & 0xffffff00;
  param_3 = param_3 + 8;
  uVar10 = 1 << (ulong)(uVar6 & 0x1f);
  if ((uVar2 + uVar6 >> 0xf == 0) &&
     (uVar14 = (ulong)(uVar2 + uVar6 >> 5), (*(uint *)(param_1 + uVar14 * 4) & uVar10) != 0)) {
    uVar3 = *(uint *)(param_3 + uVar14 * 4) & uVar10;
    uVar13 = uVar3 == 0 | param_4;
    if ((uVar3 == 0) || (DAT_05233980 < iVar8 + 1)) goto LAB_01696a74;
  }
  else if (DAT_05233980 < iVar8 + 1) goto LAB_016968bc;
  uVar7 = iVar8 >> 1;
  iVar1 = iVar8 + 3;
  uVar3 = 1 << (ulong)(uVar7 & 0x1f);
  if ((uVar2 + uVar7 >> 0xf == 0) &&
     (uVar14 = (ulong)(uVar2 + uVar7 >> 5), (*(uint *)(param_1 + uVar14 * 4) & uVar3) != 0)) {
    uVar4 = *(uint *)(param_3 + uVar14 * 4) & uVar3;
    uVar13 = uVar4 == 0 | param_4;
    uVar12 = 1;
    if ((uVar4 == 0) || (DAT_05233980 < iVar1)) goto LAB_01696a74;
  }
  else if (DAT_05233980 < iVar1) goto LAB_01696824;
  uVar4 = iVar8 + 2 >> 1;
  uVar11 = 1 << (ulong)(uVar4 & 0x1f);
  if ((uVar2 + uVar4 >> 0xf != 0) ||
     ((uVar14 = (ulong)(uVar2 + uVar4 >> 5), (*(uint *)(param_1 + uVar14 * 4) & uVar11) == 0 ||
      ((*(uint *)(param_3 + uVar14 * 4) & uVar11) != 0)))) {
    if (DAT_05233984 < iVar9 + 1) goto LAB_01696824;
    uVar2 = iVar9 << 7 & 0xffffff00;
    uVar12 = uVar2 + uVar6;
    if ((uVar12 >> 0xf == 0) &&
       (uVar14 = (ulong)(uVar12 >> 5), (*(uint *)(param_1 + uVar14 * 4) & uVar10) != 0)) {
      uVar5 = *(uint *)(param_3 + uVar14 * 4) & uVar10;
      uVar13 = uVar5 == 0 | param_4;
      uVar12 = 1;
      if ((uVar5 == 0) || (DAT_05233980 < iVar1)) goto LAB_01696a74;
    }
    else if (DAT_05233980 < iVar1) goto LAB_01696824;
    uVar2 = uVar2 + uVar4;
    uVar13 = uVar2 >> 0xf;
    if (uVar13 == 0) {
      uVar14 = (ulong)(uVar2 >> 5);
      uVar13 = *(uint *)(param_1 + uVar14 * 4);
      if (((uVar13 & uVar11) != 0) && ((*(uint *)(param_3 + uVar14 * 4) & uVar11) == 0)) {
        return 1;
      }
    }
    if (DAT_05233984 < iVar9 + 3) goto LAB_01696824;
    iVar8 = (iVar9 << 7 & 0xffffff00U) + 0x100;
    if (((iVar8 + uVar6 >> 0xf == 0) &&
        (uVar14 = (ulong)(iVar8 + uVar6 >> 5), (*(uint *)(param_1 + uVar14 * 4) & uVar10) != 0)) &&
       ((*(uint *)(param_3 + uVar14 * 4) & uVar10) == 0)) {
      return 1;
    }
    if ((iVar8 + uVar7 >> 0xf == 0) &&
       (uVar14 = (ulong)(iVar8 + uVar7 >> 5), (*(uint *)(param_1 + uVar14 * 4) & uVar3) != 0)) {
      uVar12 = 1;
      uVar3 = *(uint *)(param_3 + uVar14 * 4) & uVar3;
      uVar13 = uVar3 == 0 | param_4;
      if ((uVar3 == 0) || (DAT_05233980 < iVar1)) goto LAB_01696a74;
    }
    if (((iVar8 + uVar4 >> 0xf != 0) ||
        (uVar14 = (ulong)(iVar8 + uVar4 >> 5), (*(uint *)(param_1 + uVar14 * 4) & uVar11) == 0)) ||
       ((*(uint *)(param_3 + uVar14 * 4) & uVar11) != 0)) {
      uVar12 = 0;
LAB_01696a74:
      return uVar12 & uVar13;
    }
  }
  return 1;
}

