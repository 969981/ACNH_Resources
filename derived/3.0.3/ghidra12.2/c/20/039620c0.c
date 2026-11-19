
void FUN_039620c0(long param_1,uint *param_2,uint param_3,uint param_4,uint param_5,int param_6,
                 uint param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  short *psVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined4 uVar24;
  uint local_68;
  uint uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar13 = 0;
  if (*(long *)(param_2 + 2) != 0) {
    lVar13 = (*DAT_04c61fd0)();
  }
  uVar18 = (ulong)*param_2;
  iVar1 = param_3 << (ulong)(param_7 & 0x1f);
  uVar2 = 1 << (ulong)(param_7 & 0x1f);
  uVar19 = param_5 - uVar2;
  iVar14 = uVar19 * param_3;
  iVar3 = (uVar2 + param_4) * param_3;
  iVar21 = (iVar1 - param_3) + 1;
  sVar8 = (short)param_3;
  sVar12 = (short)uVar2;
  sVar11 = (short)iVar21;
  sVar7 = (short)iVar14;
  if (param_6 == 0) {
    if (param_3 == 0) {
      if (uVar2 < param_5) {
        uVar20 = uVar2;
        do {
          uVar20 = uVar20 + uVar2;
        } while (uVar20 < param_5);
        uVar16 = 0;
      }
      else {
        uVar16 = 0;
      }
LAB_03962528:
      uVar20 = 0;
      do {
        uVar20 = uVar20 + uVar2;
      } while (uVar20 <= param_4);
    }
    else {
      uVar16 = 0;
      uVar20 = 0;
      psVar17 = (short *)(uVar18 + lVar13 + 4);
      do {
        sVar5 = (short)uVar20;
        uVar20 = uVar20 + uVar2;
        psVar17[-1] = 0;
        psVar17[-2] = sVar11 + sVar5;
        sVar5 = 0;
        if (param_3 != 0) {
          sVar5 = (short)(uVar20 / param_3);
        }
        uVar16 = uVar16 + 3;
        *psVar17 = ((short)uVar20 - sVar5 * sVar8) + sVar11;
        psVar17 = psVar17 + 3;
      } while (uVar20 < param_3);
      if (uVar2 < param_5) {
        iVar22 = iVar1 + param_3 * (uVar2 - 1) + 1;
        iVar23 = iVar21;
        uVar20 = uVar2;
        do {
          uVar15 = 0;
          psVar17 = (short *)(uVar18 + lVar13 + 6 + (long)(int)uVar16 * 2);
          uVar16 = (ulong)(int)uVar16;
          do {
            sVar5 = (short)iVar23 + (short)uVar15;
            psVar17[-3] = (short)iVar22 + (short)uVar15;
            uVar15 = uVar15 + uVar2;
            sVar9 = 0;
            if (param_3 != 0) {
              sVar9 = (short)(uVar15 / param_3);
            }
            psVar17[-2] = sVar5;
            psVar17[1] = sVar5;
            uVar16 = uVar16 + 6;
            sVar9 = (short)uVar15 - sVar9 * sVar8;
            sVar5 = sVar9 + sVar11 + (short)uVar20 * sVar8;
            psVar17[-1] = sVar5;
            *psVar17 = sVar5;
            psVar17[2] = sVar9 + sVar11 + ((short)uVar20 - sVar12) * sVar8;
            psVar17 = psVar17 + 6;
          } while (uVar15 < param_3);
          uVar20 = uVar20 + uVar2;
          iVar22 = iVar22 + uVar2 * param_3;
          iVar23 = iVar23 + uVar2 * param_3;
        } while (uVar20 < param_5);
        if (param_3 == 0) goto LAB_03962528;
      }
      sVar5 = sVar11 + sVar7;
      iVar4 = uVar2 * param_3;
      iVar23 = 0;
      uVar20 = 0;
      iVar22 = iVar4;
      do {
        sVar9 = (short)uVar20;
        uVar20 = uVar20 + uVar2;
        uVar15 = 0;
        psVar17 = (short *)(uVar18 + lVar13 + 6 + (long)(int)uVar16 * 2);
        do {
          sVar6 = sVar5 + (short)iVar23 + (short)uVar15;
          psVar17[-3] = sVar5 + (short)iVar22 + (short)uVar15;
          uVar15 = uVar15 + uVar2;
          sVar10 = 0;
          if (param_3 != 0) {
            sVar10 = (short)(uVar15 / param_3);
          }
          psVar17[-2] = sVar6;
          psVar17[1] = sVar6;
          uVar16 = (ulong)((int)uVar16 + 6);
          sVar10 = (short)uVar15 - sVar10 * sVar8;
          sVar6 = sVar10 + sVar5 + (short)uVar20 * sVar8;
          psVar17[-1] = sVar6;
          *psVar17 = sVar6;
          psVar17[2] = sVar10 + sVar5 + sVar9 * sVar8;
          psVar17 = psVar17 + 6;
        } while (uVar15 < param_3);
        iVar22 = iVar22 + iVar4;
        iVar23 = iVar23 + iVar4;
      } while (uVar20 <= param_4);
    }
    if (uVar2 < uVar19) {
      if (param_3 == 0) {
        uVar20 = uVar2;
        do {
          uVar20 = uVar20 + uVar2;
        } while (uVar20 < uVar19);
      }
      else {
        iVar22 = iVar21 + iVar14 + iVar3;
        iVar21 = iVar21 + iVar14 + param_3 * (param_4 + uVar2 * 2);
        uVar20 = uVar2;
        iVar14 = iVar22;
        do {
          sVar5 = (short)iVar22;
          uVar15 = 0;
          psVar17 = (short *)(uVar18 + lVar13 + 6 + (long)(int)uVar16 * 2);
          do {
            sVar9 = (short)iVar14 + (short)uVar15;
            psVar17[-3] = (short)iVar21 + (short)uVar15;
            uVar15 = uVar15 + uVar2;
            sVar6 = 0;
            if (param_3 != 0) {
              sVar6 = (short)(uVar15 / param_3);
            }
            psVar17[-2] = sVar9;
            psVar17[1] = sVar9;
            uVar16 = (ulong)((int)uVar16 + 6);
            sVar6 = (short)uVar15 - sVar6 * sVar8;
            sVar9 = sVar6 + sVar5 + (short)uVar20 * sVar8;
            psVar17[-1] = sVar9;
            *psVar17 = sVar9;
            psVar17[2] = sVar6 + sVar5 + ((short)uVar20 - sVar12) * sVar8;
            psVar17 = psVar17 + 6;
          } while (uVar15 < param_3);
          uVar20 = uVar20 + uVar2;
          iVar21 = iVar21 + uVar2 * param_3;
          iVar14 = iVar14 + uVar2 * param_3;
        } while (uVar20 < uVar19);
      }
    }
    if (param_3 != 0) {
      uVar19 = 0;
      sVar12 = (short)iVar3 + sVar11 + sVar7 * 2;
      sVar11 = sVar12 - (short)iVar1;
      psVar17 = (short *)(uVar18 + (long)(int)uVar16 * 2 + lVar13 + 2);
      do {
        sVar5 = (short)uVar19;
        uVar19 = uVar19 + uVar2;
        psVar17[-1] = sVar12;
        sVar7 = 0;
        if (param_3 != 0) {
          sVar7 = (short)(uVar19 / param_3);
        }
        *psVar17 = sVar11 + sVar5;
        uVar16 = (ulong)((int)uVar16 + 3);
        psVar17[1] = ((short)uVar19 - sVar7 * sVar8) + sVar11;
        psVar17 = psVar17 + 3;
      } while (uVar19 < param_3);
    }
    local_68 = *param_2;
    uStack_64 = param_2[1];
    local_60 = *(undefined8 *)(param_2 + 2);
    uStack_58 = *(undefined8 *)(param_2 + 4);
    FUN_03901480(param_1,&local_68,1,uVar16);
    uVar24 = 4;
    goto LAB_039626f4;
  }
  if (param_6 != 1) {
    return;
  }
  if (param_3 == 0) {
    if (uVar2 < param_5) {
      uVar20 = uVar2;
      do {
        uVar20 = uVar20 + uVar2;
      } while (uVar20 < param_5);
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
    }
LAB_03962480:
    uVar20 = 0;
    do {
      uVar20 = uVar20 + uVar2;
    } while (uVar20 <= param_4);
  }
  else {
    uVar16 = 0;
    uVar20 = 0;
    do {
      sVar5 = (short)uVar20;
      psVar17 = (short *)(lVar13 + uVar18 + uVar16 * 2);
      uVar20 = uVar20 + uVar2;
      uVar16 = uVar16 + 2;
      *psVar17 = sVar11 + sVar5;
      psVar17[1] = 0;
    } while (uVar20 < param_3);
    if (uVar2 < param_5) {
      iVar22 = iVar1 + param_3 * (uVar2 - 1) + 1;
      iVar23 = iVar21;
      uVar20 = uVar2;
      do {
        psVar17 = (short *)(uVar18 + lVar13 + 4 + (long)(int)uVar16 * 2);
        uVar15 = 0;
        uVar16 = (ulong)(int)uVar16;
        do {
          uVar16 = uVar16 + 4;
          psVar17[-2] = (short)iVar22 + (short)uVar15;
          sVar5 = (short)iVar23 + (short)uVar15;
          uVar15 = uVar15 + uVar2;
          psVar17[-1] = sVar5;
          *psVar17 = sVar5;
          sVar5 = 0;
          if (param_3 != 0) {
            sVar5 = (short)(uVar15 / param_3);
          }
          psVar17[1] = ((short)uVar15 - sVar5 * sVar8) + sVar11 + ((short)uVar20 - sVar12) * sVar8;
          psVar17 = psVar17 + 4;
        } while (uVar15 < param_3);
        uVar20 = uVar20 + uVar2;
        iVar22 = iVar22 + uVar2 * param_3;
        iVar23 = iVar23 + uVar2 * param_3;
      } while (uVar20 < param_5);
      if (param_3 == 0) goto LAB_03962480;
    }
    sVar5 = sVar11 + sVar7;
    iVar4 = uVar2 * param_3;
    iVar23 = 0;
    uVar20 = 0;
    iVar22 = iVar4;
    do {
      sVar9 = (short)uVar20;
      uVar15 = 0;
      uVar20 = uVar20 + uVar2;
      psVar17 = (short *)(uVar18 + lVar13 + 4 + (long)(int)uVar16 * 2);
      do {
        sVar6 = sVar5 + (short)iVar23 + (short)uVar15;
        psVar17[-2] = sVar5 + (short)iVar22 + (short)uVar15;
        uVar15 = uVar15 + uVar2;
        sVar10 = 0;
        if (param_3 != 0) {
          sVar10 = (short)(uVar15 / param_3);
        }
        psVar17[-1] = sVar6;
        *psVar17 = sVar6;
        uVar16 = (ulong)((int)uVar16 + 4);
        psVar17[1] = ((short)uVar15 - sVar10 * sVar8) + sVar5 + sVar9 * sVar8;
        psVar17 = psVar17 + 4;
      } while (uVar15 < param_3);
      iVar22 = iVar22 + iVar4;
      iVar23 = iVar23 + iVar4;
    } while (uVar20 <= param_4);
  }
  if (uVar2 < uVar19) {
    if (param_3 == 0) {
      uVar20 = uVar2;
      do {
        uVar20 = uVar20 + uVar2;
      } while (uVar20 < uVar19);
    }
    else {
      iVar22 = iVar21 + iVar14 + iVar3;
      iVar21 = iVar21 + iVar14 + param_3 * (param_4 + uVar2 * 2);
      uVar20 = uVar2;
      iVar14 = iVar22;
      do {
        psVar17 = (short *)(uVar18 + lVar13 + 4 + (long)(int)uVar16 * 2);
        uVar15 = 0;
        do {
          sVar5 = (short)iVar14 + (short)uVar15;
          psVar17[-2] = (short)iVar21 + (short)uVar15;
          uVar15 = uVar15 + uVar2;
          sVar9 = 0;
          if (param_3 != 0) {
            sVar9 = (short)(uVar15 / param_3);
          }
          psVar17[-1] = sVar5;
          *psVar17 = sVar5;
          uVar16 = (ulong)((int)uVar16 + 4);
          psVar17[1] = ((short)uVar15 - sVar9 * sVar8) +
                       (short)iVar22 + ((short)uVar20 - sVar12) * sVar8;
          psVar17 = psVar17 + 4;
        } while (uVar15 < param_3);
        uVar20 = uVar20 + uVar2;
        iVar21 = iVar21 + uVar2 * param_3;
        iVar14 = iVar14 + uVar2 * param_3;
      } while (uVar20 < uVar19);
    }
  }
  if (param_3 != 0) {
    uVar19 = 0;
    sVar12 = (short)iVar3 + sVar11 + sVar7 * 2;
    sVar11 = sVar12 - (short)iVar1;
    psVar17 = (short *)(uVar18 + (long)(int)uVar16 * 2 + lVar13 + 4);
    do {
      sVar7 = sVar11 + (short)uVar19;
      uVar19 = uVar19 + uVar2;
      psVar17[-2] = sVar12;
      sVar5 = 0;
      if (param_3 != 0) {
        sVar5 = (short)(uVar19 / param_3);
      }
      psVar17[-1] = sVar7;
      *psVar17 = sVar7;
      uVar16 = (ulong)((int)uVar16 + 4);
      psVar17[1] = ((short)uVar19 - sVar5 * sVar8) + sVar11;
      psVar17 = psVar17 + 4;
    } while (uVar19 < param_3);
  }
  local_68 = *param_2;
  uStack_64 = param_2[1];
  local_60 = *(undefined8 *)(param_2 + 2);
  uStack_58 = *(undefined8 *)(param_2 + 4);
  uVar24 = 1;
  FUN_03901480(param_1,&local_68,1,uVar16);
LAB_039626f4:
  *(undefined4 *)(param_1 + 0xc) = uVar24;
  return;
}

