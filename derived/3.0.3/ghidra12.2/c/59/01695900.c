
undefined8 FUN_01695900(long param_1,long param_2,uint param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined *local_78;
  undefined *puStack_70;
  uint local_68;
  int iStack_64;
  undefined *local_60;
  int local_58;
  int iStack_54;
  
  local_68 = *(uint *)(param_2 + 8);
  iVar5 = *(int *)(param_2 + 0xc);
  uVar6 = local_68 - 2;
  iVar7 = local_68 - 1;
  iVar13 = iVar5 + -2;
  iVar14 = iVar5 + -1;
  bVar1 = (int)uVar6 < DAT_05233970 || DAT_05233980 < iVar7;
  if (((int)uVar6 < DAT_05233970 || DAT_05233980 < iVar7) ||
     (iVar13 < DAT_05233974 || DAT_05233984 < iVar14)) {
    if ((param_3 & 1) != 0) {
      return 1;
    }
  }
  else {
    iVar10 = iVar13;
    uVar11 = uVar6;
    do {
      uVar8 = uVar11 + iVar10 * 0x200;
      if ((uVar8 >> 0x11 == 0) &&
         ((*(uint *)(param_1 + 8 + (ulong)(uVar8 >> 5) * 4) >> (ulong)(uVar11 & 0x1f) & 1) != 0)) {
        return 1;
      }
      if ((int)uVar11 < iVar7) {
        uVar11 = uVar11 + 1;
      }
      else {
        iVar10 = iVar10 + 1;
        uVar11 = uVar6;
      }
    } while ((uVar6 != uVar11) || (iVar5 != iVar10));
  }
  local_58 = local_68 + 1;
  if (((int)local_68 < DAT_05233970) ||
     (((DAT_05233980 < local_58 || (iVar13 < DAT_05233974)) || (DAT_05233984 < iVar14)))) {
    if ((param_3 & 1) != 0) {
      return 1;
    }
  }
  else {
    iVar10 = iVar13;
    uVar11 = local_68;
    do {
      uVar8 = uVar11 + iVar10 * 0x200;
      if ((uVar8 >> 0x11 == 0) &&
         ((*(uint *)(param_1 + 8 + (ulong)(uVar8 >> 5) * 4) >> (ulong)(uVar11 & 0x1f) & 1) != 0)) {
        return 1;
      }
      if ((int)uVar11 < local_58) {
        uVar11 = uVar11 + 1;
      }
      else {
        iVar10 = iVar10 + 1;
        uVar11 = local_68;
      }
    } while ((local_68 != uVar11) || (iVar5 != iVar10));
  }
  uVar11 = local_68 + 2;
  iVar10 = local_68 + 3;
  if (((int)uVar11 < DAT_05233970 || DAT_05233980 < iVar10) ||
     ((iVar13 < DAT_05233974 || (DAT_05233984 < iVar14)))) {
    if ((param_3 & 1) != 0) {
      return 1;
    }
  }
  else {
    uVar8 = uVar11;
    do {
      uVar4 = uVar8 + iVar13 * 0x200;
      if ((uVar4 >> 0x11 == 0) &&
         ((*(uint *)(param_1 + 8 + (ulong)(uVar4 >> 5) * 4) >> (ulong)(uVar8 & 0x1f) & 1) != 0)) {
        return 1;
      }
      if ((int)uVar8 < iVar10) {
        uVar8 = uVar8 + 1;
      }
      else {
        iVar13 = iVar13 + 1;
        uVar8 = uVar11;
      }
    } while ((uVar11 != uVar8) || (iVar5 != iVar13));
  }
  if ((iVar5 < DAT_05233974 || bVar1) || (DAT_05233984 < iVar5 + 1)) {
    if ((param_3 & 1) != 0) {
      return 1;
    }
  }
  else {
    iVar13 = iVar5;
    uVar8 = uVar6;
    do {
      uVar4 = uVar8 + iVar13 * 0x200;
      if ((uVar4 >> 0x11 == 0) &&
         ((*(uint *)(param_1 + 8 + (ulong)(uVar4 >> 5) * 4) >> (ulong)(uVar8 & 0x1f) & 1) != 0)) {
        return 1;
      }
      if ((int)uVar8 < iVar7) {
        uVar8 = uVar8 + 1;
      }
      else {
        iVar13 = iVar13 + 1;
        uVar8 = uVar6;
      }
    } while ((uVar6 != uVar8) || (iVar5 + 2 != iVar13));
  }
  if ((iVar5 < DAT_05233974 || ((int)uVar11 < DAT_05233970 || DAT_05233980 < iVar10)) ||
     (DAT_05233984 < iVar5 + 1)) {
    if ((param_3 & 1) != 0) {
      return 1;
    }
  }
  else {
    iVar13 = iVar5;
    uVar8 = uVar11;
    do {
      uVar4 = uVar8 + iVar13 * 0x200;
      if ((uVar4 >> 0x11 == 0) &&
         ((*(uint *)(param_1 + 8 + (ulong)(uVar4 >> 5) * 4) >> (ulong)(uVar8 & 0x1f) & 1) != 0)) {
        return 1;
      }
      if ((int)uVar8 < iVar10) {
        uVar8 = uVar8 + 1;
      }
      else {
        iVar13 = iVar13 + 1;
        uVar8 = uVar11;
      }
    } while ((uVar11 != uVar8) || (iVar5 + 2 != iVar13));
  }
  iVar14 = iVar5 + 2;
  iVar13 = iVar5 + 3;
  if ((iVar14 < DAT_05233974 || bVar1) || (DAT_05233984 < iVar13)) {
    if ((param_3 & 1) != 0) {
      return 1;
    }
  }
  else {
    iVar12 = iVar14;
    uVar8 = uVar6;
    do {
      uVar4 = uVar8 + iVar12 * 0x200;
      if ((uVar4 >> 0x11 == 0) &&
         ((*(uint *)(param_1 + 8 + (ulong)(uVar4 >> 5) * 4) >> (ulong)(uVar8 & 0x1f) & 1) != 0)) {
        return 1;
      }
      if ((int)uVar8 < iVar7) {
        uVar8 = uVar8 + 1;
      }
      else {
        iVar12 = iVar12 + 1;
        uVar8 = uVar6;
      }
    } while ((uVar6 != uVar8) || (iVar5 + 4 != iVar12));
  }
  puVar2 = PTR_DAT_04bbc1a0 + 0x10;
  puVar3 = PTR_DAT_04bb2010 + 0x10;
  local_78 = puVar2;
  puStack_70 = puVar3;
  iStack_64 = iVar14;
  local_60 = puVar3;
  iStack_54 = iVar13;
  uVar9 = FUN_01695790(param_1,&local_78,param_3 & 1);
  if (((uVar9 & 1) == 0) &&
     (local_78 = puVar2, puStack_70 = puVar3, local_68 = uVar11, iStack_64 = iVar14,
     local_60 = puVar3, local_58 = iVar10, iStack_54 = iVar13,
     uVar9 = FUN_01695790(param_1,&local_78,param_3 & 1), (uVar9 & 1) == 0)) {
    return 0;
  }
  return 1;
}

