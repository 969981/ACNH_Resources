
void FUN_028dab60(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  long lVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  
  iVar11 = *param_1;
  iVar2 = param_1[3];
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  piVar13 = param_1 + 7;
  piVar13[0] = 0;
  piVar13[1] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  uVar6 = param_1[6] +
          (iVar11 * 0x1000 + (iVar11 >> 0x18) + ((iVar11 << 8) >> 0x12 & 0xfffc0U)) * 0x1000;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  puVar3 = PTR_DAT_04bb30a0;
  param_1[10] = 0;
  uVar6 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
  uVar5 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 2;
  uVar12 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 3;
  uVar12 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 4;
  if (param_2 - 2U < 3) {
    uVar6 = uVar6 ^ uVar6 * 0x800;
    uVar5 = uVar5 ^ uVar5 * 0x800;
    uVar1 = uVar6 ^ uVar12;
    lVar15 = 0;
    uVar16 = 5;
    uVar6 = uVar6 >> 8 ^ uVar12 >> 0x13 ^ uVar1;
    uVar14 = 6;
    uVar1 = uVar1 >> 0x1d;
    uVar6 = (int)((ulong)(uVar5 >> 8 ^ uVar6 >> 0x13 ^ uVar5 ^ uVar6) * (ulong)(0x15 - uVar1) >>
                 0x20) + 6;
    lVar9 = DAT_04da7238;
    do {
      if ((iVar2 < 0) || (*(int *)(lVar9 + 0x653a0) <= iVar2)) {
        uVar5 = 0;
      }
      else {
        puVar7 = (uint *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(lVar9 + 0x108) +
                                                                     (long)iVar2 * 8) + 0xd8) +
                                                  (uVar14 / 0x18) * -0xc0 + 0x30 + lVar15 * 8) +
                                     0xf0))();
        uVar5 = *puVar7;
        lVar9 = *(long *)PTR_DAT_04bb30a0;
      }
      uVar12 = (int)lVar15 + 6;
      iVar11 = param_1[(uVar16 / 0x18) * -0x18 + lVar15 + 0xc];
      if (((uVar12 < uVar6) || (uVar1 + uVar6 + 1 <= uVar12)) || (1 < uVar5)) {
        if (iVar11 == 5) {
          iVar11 = 8;
        }
        else {
          if (iVar11 != 6) goto LAB_028daccc;
          iVar11 = 7;
        }
        param_1[(uVar16 / 0x18) * -0x18 + lVar15 + 0xc] = iVar11;
        iVar11 = (int)lVar15 + 6;
        goto LAB_028dafb8;
      }
      iVar8 = 5;
      if (iVar11 - 5U < 2) {
        iVar8 = 6;
      }
      param_1[(uVar14 / 0x18) * -0x18 + lVar15 + 0xd] = iVar8;
LAB_028daccc:
      lVar15 = lVar15 + 1;
      uVar16 = uVar16 + 1;
      uVar14 = uVar14 + 1;
    } while ((int)lVar15 != 0x16);
    iVar11 = 0x1c;
LAB_028dafb8:
    uVar6 = (iVar11 + -1) % 0x18;
    uVar16 = (ulong)uVar6;
    if (0x17 < uVar6) {
      uVar16 = 0;
    }
    if (piVar13[uVar16] == 5) {
      iVar11 = 8;
    }
    else {
      if (piVar13[uVar16] != 6) goto LAB_028db008;
      iVar11 = 7;
    }
    piVar13[uVar16] = iVar11;
LAB_028db008:
    uVar6 = param_2 - 3;
    lVar15 = 0x1c;
    do {
      uVar5 = *(uint *)((long)param_1 + lVar15);
      if (0x14 < uVar5) {
        uVar5 = 0;
      }
      switch(uVar5) {
      case 5:
        iVar11 = 9;
        if (2 < uVar6) break;
        goto LAB_028db030;
      case 6:
        iVar11 = 10;
        goto joined_r0x028db098;
      case 7:
        iVar11 = 0xb;
joined_r0x028db098:
        if (uVar6 < 3) {
LAB_028db030:
          *(uint *)((long)param_1 + lVar15) = iVar11 + uVar6 * 4;
        }
        break;
      case 8:
        if (uVar6 < 3) {
          iVar11 = 0xc;
          goto LAB_028db030;
        }
      }
      lVar15 = lVar15 + 4;
      if (lVar15 == 0x7c) {
        return;
      }
    } while( true );
  }
  if (param_2 != 5) {
    if (param_2 != 1) {
      return;
    }
    lVar15 = 0;
    lVar9 = *(long *)PTR_DAT_04bb30a0;
    do {
      uVar6 = (int)lVar15 + 9;
      uVar5 = (int)lVar15 + 0x21;
      if (-1 < (int)uVar6) {
        uVar5 = uVar6;
      }
      uVar6 = uVar5 - 0x18;
      if ((int)uVar5 < 0x18) {
        uVar6 = uVar5;
      }
      if ((iVar2 < 0) || (*(int *)(lVar9 + 0x653a0) <= iVar2 || 0x17 < uVar6)) {
        iVar11 = param_1[lVar15 + 0xf];
LAB_028dae34:
        if (iVar11 - 1U < 2) {
          param_1[lVar15 + 0x10] = 2;
        }
        else {
          param_1[lVar15 + 0x10] = 1;
        }
      }
      else {
        puVar7 = (uint *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(lVar9 + 0x108) +
                                                                     (long)iVar2 * 8) + 0xd8) +
                                                 (ulong)uVar6 * 8) + 0xf0))();
        iVar11 = param_1[lVar15 + 0xf];
        lVar9 = *(long *)puVar3;
        if (*puVar7 < 2) goto LAB_028dae34;
        if (iVar11 == 1) {
          iVar11 = 4;
LAB_028daeb8:
          param_1[lVar15 + 0xf] = iVar11;
        }
        else if (iVar11 == 2) {
          iVar11 = 3;
          goto LAB_028daeb8;
        }
        param_1[lVar15 + 0x10] = 0;
      }
      lVar15 = lVar15 + 1;
      if (lVar15 == 0xc) {
        if (param_1[0x1b] == 2) {
          param_1[0x1b] = 3;
          return;
        }
        if (param_1[0x1b] == 1) {
          param_1[0x1b] = 4;
          return;
        }
        return;
      }
    } while( true );
  }
  uVar6 = uVar6 ^ uVar6 * 0x800;
  uVar5 = uVar5 ^ uVar5 * 0x800;
  uVar1 = uVar6 ^ uVar12;
  uVar6 = uVar6 >> 8 ^ uVar12 >> 0x13 ^ uVar1;
  uVar1 = uVar1 >> 0x1d;
  if ((iVar2 < 0) || (*(int *)(DAT_04da7238 + 0x653a0) <= iVar2)) {
    iVar11 = 0;
    uVar12 = 0;
  }
  else {
    puVar7 = (uint *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(DAT_04da7238 + 0x108) +
                                                                 (long)iVar2 * 8) + 0xd8) + 0x30) +
                                 0xf0))();
    uVar12 = *puVar7;
    iVar11 = param_1[0xc];
  }
  uVar6 = (uint)((ulong)(uVar5 >> 8 ^ uVar6 >> 0x13 ^ uVar5 ^ uVar6) * (ulong)(0xb - uVar1) >> 0x20)
  ;
  if (uVar6 == 0 && uVar12 < 2) {
    iVar8 = 0x11;
    if (iVar11 - 0x11U < 2) {
      iVar8 = 0x12;
    }
    param_1[0xd] = iVar8;
LAB_028db0f4:
    uVar1 = uVar1 + uVar6;
    if ((iVar2 < 0) || (*(int *)(DAT_04da7238 + 0x653a0) <= iVar2)) {
      uVar5 = 0;
    }
    else {
      puVar7 = (uint *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(DAT_04da7238 + 0x108)
                                                                   + (long)iVar2 * 8) + 0xd8) + 0x38
                                               ) + 0xf0))();
      uVar5 = *puVar7;
    }
    piVar10 = param_1 + 0xd;
    iVar11 = *piVar10;
    if ((uVar6 < 2 && uVar1 != 0) && uVar5 < 2) {
      iVar8 = 0x11;
      if (iVar11 - 0x11U < 2) {
        iVar8 = 0x12;
      }
      param_1[0xe] = iVar8;
    }
    else {
      iVar8 = 7;
      if (iVar11 == 0x11) goto LAB_028db690;
      if (iVar11 == 0x12) goto LAB_028db688;
    }
    if ((iVar2 < 0) || (*(int *)(DAT_04da7238 + 0x653a0) <= iVar2)) {
      uVar5 = 0;
    }
    else {
      puVar7 = (uint *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(DAT_04da7238 + 0x108)
                                                                   + (long)iVar2 * 8) + 0xd8) + 0x40
                                               ) + 0xf0))();
      uVar5 = *puVar7;
    }
    piVar10 = param_1 + 0xe;
    iVar11 = *piVar10;
    if ((uVar6 < 3 && 1 < uVar1) && uVar5 < 2) {
      iVar8 = 0x11;
      if (iVar11 - 0x11U < 2) {
        iVar8 = 0x12;
      }
      param_1[0xf] = iVar8;
    }
    else {
      iVar8 = 8;
      if (iVar11 == 0x11) goto LAB_028db690;
      if (iVar11 == 0x12) goto LAB_028db688;
    }
    if ((iVar2 < 0) || (*(int *)(DAT_04da7238 + 0x653a0) <= iVar2)) {
      uVar5 = 0;
    }
    else {
      puVar7 = (uint *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(DAT_04da7238 + 0x108)
                                                                   + (long)iVar2 * 8) + 0xd8) + 0x48
                                               ) + 0xf0))();
      uVar5 = *puVar7;
    }
    piVar10 = param_1 + 0xf;
    iVar11 = *piVar10;
    if ((uVar6 < 4 && 2 < uVar1) && uVar5 < 2) {
      iVar8 = 0x11;
      if (iVar11 - 0x11U < 2) {
        iVar8 = 0x12;
      }
      param_1[0x10] = iVar8;
    }
    else {
      iVar8 = 9;
      if (iVar11 == 0x11) goto LAB_028db690;
      if (iVar11 == 0x12) goto LAB_028db688;
    }
    if ((iVar2 < 0) || (*(int *)(DAT_04da7238 + 0x653a0) <= iVar2)) {
      uVar5 = 0;
    }
    else {
      puVar7 = (uint *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(DAT_04da7238 + 0x108)
                                                                   + (long)iVar2 * 8) + 0xd8) + 0x50
                                               ) + 0xf0))();
      uVar5 = *puVar7;
    }
    piVar10 = param_1 + 0x10;
    iVar11 = *piVar10;
    if ((uVar6 < 5 && 3 < uVar1) && uVar5 < 2) {
      iVar8 = 0x11;
      if (iVar11 - 0x11U < 2) {
        iVar8 = 0x12;
      }
      param_1[0x11] = iVar8;
    }
    else {
      iVar8 = 10;
      if (iVar11 == 0x11) goto LAB_028db690;
      if (iVar11 == 0x12) goto LAB_028db688;
    }
    if ((iVar2 < 0) || (*(int *)(DAT_04da7238 + 0x653a0) <= iVar2)) {
      bVar4 = true;
    }
    else {
      puVar7 = (uint *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(DAT_04da7238 + 0x108)
                                                                   + (long)iVar2 * 8) + 0xd8) + 0x58
                                               ) + 0xf0))();
      bVar4 = *puVar7 < 2;
    }
    piVar10 = param_1 + 0x11;
    iVar11 = *piVar10;
    if (((5 < uVar6) || (uVar1 < 5)) || (!bVar4)) {
      iVar8 = 0xb;
      if (iVar11 == 0x11) goto LAB_028db690;
      if (iVar11 == 0x12) goto LAB_028db688;
    }
    else {
      iVar8 = 0x11;
      if (iVar11 - 0x11U < 2) {
        iVar8 = 0x12;
      }
      param_1[0x12] = iVar8;
    }
    uVar5 = FUN_00a8dde0(DAT_04da7238,iVar2,0xc);
    piVar10 = param_1 + 0x12;
    iVar11 = *piVar10;
    if (((uVar6 < 7) && (5 < uVar1)) && (uVar5 < 2)) {
      iVar8 = 0x11;
      if (iVar11 - 0x11U < 2) {
        iVar8 = 0x12;
      }
      param_1[0x13] = iVar8;
    }
    else {
      iVar8 = 0xc;
      if (iVar11 == 0x11) goto LAB_028db690;
      if (iVar11 == 0x12) goto LAB_028db688;
    }
    uVar5 = FUN_00a8dde0(DAT_04da7238,iVar2,0xd);
    piVar10 = param_1 + 0x13;
    iVar11 = *piVar10;
    if (((uVar6 < 8) && (6 < uVar1)) && (uVar5 < 2)) {
      iVar8 = 0x11;
      if (iVar11 - 0x11U < 2) {
        iVar8 = 0x12;
      }
      param_1[0x14] = iVar8;
    }
    else {
      iVar8 = 0xd;
      if (iVar11 == 0x11) goto LAB_028db690;
      if (iVar11 == 0x12) goto LAB_028db688;
    }
    uVar5 = FUN_00a8dde0(DAT_04da7238,iVar2,0xe);
    piVar10 = param_1 + 0x14;
    iVar11 = *piVar10;
    if (((uVar6 < 9) && (7 < uVar1)) && (uVar5 < 2)) {
      iVar8 = 0x11;
      if (iVar11 - 0x11U < 2) {
        iVar8 = 0x12;
      }
      param_1[0x15] = iVar8;
    }
    else {
      iVar8 = 0xe;
      if (iVar11 == 0x11) goto LAB_028db690;
      if (iVar11 == 0x12) goto LAB_028db688;
    }
    uVar5 = FUN_00a8dde0(DAT_04da7238,iVar2,0xf);
    piVar10 = param_1 + 0x15;
    iVar11 = *piVar10;
    if (((uVar6 < 10) && (8 < uVar1)) && (uVar5 < 2)) {
      iVar8 = 0x11;
      if (iVar11 - 0x11U < 2) {
        iVar8 = 0x12;
      }
      param_1[0x16] = iVar8;
    }
    else {
      iVar8 = 0xf;
      if (iVar11 == 0x11) goto LAB_028db690;
      if (iVar11 == 0x12) goto LAB_028db688;
    }
    uVar6 = FUN_00a8dde0(DAT_04da7238,iVar2,0x10);
    piVar10 = param_1 + 0x16;
    iVar11 = *piVar10;
    if ((uVar1 < 10) || (1 < uVar6)) {
      iVar8 = 0x10;
      if (iVar11 == 0x11) goto LAB_028db690;
      if (iVar11 == 0x12) goto LAB_028db688;
    }
    else {
      iVar8 = 0x11;
      if (iVar11 - 0x11U < 2) {
        iVar8 = 0x12;
      }
      param_1[0x17] = iVar8;
    }
    uVar6 = FUN_00a8dde0(DAT_04da7238,iVar2,0x11);
    piVar10 = param_1 + 0x17;
    iVar8 = *piVar10;
    if ((uVar1 < 0xb) || (1 < uVar6)) {
      if (iVar8 == 0x11) goto LAB_028db690;
      if (iVar8 == 0x12) {
        iVar8 = 0x11;
        goto LAB_028db688;
      }
    }
    else {
      if (iVar8 - 0x11U < 2) {
        iVar8 = 0x12;
        param_1[0x18] = 0x12;
        goto LAB_028db698;
      }
      param_1[0x18] = 0x11;
    }
    iVar8 = 0x12;
  }
  else {
    piVar10 = param_1 + 0xc;
    iVar8 = 6;
    if (iVar11 == 0x12) {
LAB_028db688:
      iVar11 = 0x13;
    }
    else {
      if (iVar11 != 0x11) goto LAB_028db0f4;
LAB_028db690:
      iVar11 = 0x14;
    }
    *piVar10 = iVar11;
  }
LAB_028db698:
  if (piVar13[iVar8 - 1U] == 0x12) {
    iVar11 = 0x13;
  }
  else {
    if (piVar13[iVar8 - 1U] != 0x11) {
      return;
    }
    iVar11 = 0x14;
  }
  piVar13[iVar8 - 1U] = iVar11;
  return;
}

