
void FUN_03962720(long param_1,uint *param_2,uint param_3,uint param_4,int param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  long lVar9;
  short *psVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  uint local_58;
  uint uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar9 = 0;
  if (*(long *)(param_2 + 2) != 0) {
    lVar9 = (*DAT_04c61fd0)();
  }
  uVar12 = (ulong)*param_2;
  iVar15 = (param_4 + 2) * param_3;
  sVar3 = (short)iVar15;
  sVar5 = (short)param_3;
  if (param_5 != 1) {
    if (param_5 != 0) {
      return;
    }
    if (param_3 == 0) {
      if (param_4 < 2) {
        uVar11 = 0;
      }
      else {
        uVar14 = 1;
        do {
          uVar14 = uVar14 + (1 << (ulong)(param_6 & 0x1f));
        } while (uVar14 < param_4);
        uVar11 = 0;
      }
    }
    else {
      uVar11 = 0;
      uVar14 = 0;
      iVar13 = 1 << (ulong)(param_6 & 0x1f);
      psVar10 = (short *)(uVar12 + lVar9 + 4);
      do {
        sVar8 = (short)uVar14;
        psVar10[-1] = sVar8;
        uVar14 = uVar14 + iVar13;
        psVar10[-2] = sVar5 + sVar8;
        sVar8 = 0;
        if (param_3 != 0) {
          sVar8 = (short)(uVar14 / param_3);
        }
        uVar11 = uVar11 + 3;
        *psVar10 = ((short)uVar14 - sVar8 * sVar5) + sVar5;
        psVar10 = psVar10 + 3;
      } while (uVar14 < param_3);
      if (1 < param_4) {
        uVar14 = iVar13 + 1;
        uVar17 = 1;
        uVar18 = param_3;
        do {
          sVar8 = (short)uVar17;
          uVar17 = uVar17 + iVar13;
          uVar1 = param_4;
          if ((int)uVar14 <= (int)param_4) {
            uVar1 = uVar14;
          }
          psVar10 = (short *)(uVar12 + lVar9 + 6 + (long)(int)uVar11 * 2);
          uVar2 = param_4;
          if ((int)uVar17 <= (int)param_4) {
            uVar2 = uVar17;
          }
          uVar19 = 0;
          uVar11 = (ulong)(int)uVar11;
          do {
            sVar6 = (short)uVar19;
            sVar4 = sVar5 * (short)uVar1 + sVar6;
            psVar10[-3] = sVar4;
            uVar19 = uVar19 + iVar13;
            sVar7 = 0;
            if (param_3 != 0) {
              sVar7 = (short)(uVar19 / param_3);
            }
            *psVar10 = sVar4;
            psVar10[-2] = (short)uVar18 + sVar6;
            uVar11 = uVar11 + 6;
            sVar7 = (short)uVar19 - sVar7 * sVar5;
            sVar4 = sVar7 + sVar8 * sVar5;
            psVar10[-1] = sVar4;
            psVar10[1] = sVar4;
            psVar10[2] = sVar7 + (short)uVar2 * sVar5;
            psVar10 = psVar10 + 6;
          } while (uVar19 < param_3);
          uVar14 = uVar14 + iVar13;
          uVar18 = uVar18 + iVar13 * param_3;
        } while (uVar17 < param_4);
        if (param_3 == 0) goto LAB_03962a08;
        iVar13 = 1 << (ulong)(param_6 & 0x1f);
      }
      iVar15 = iVar15 - iVar13;
      uVar14 = 0;
      psVar10 = (short *)(uVar12 + (long)(int)uVar11 * 2 + lVar9 + 2);
      iVar16 = iVar15;
      do {
        uVar14 = uVar14 + iVar13;
        psVar10[-1] = (short)iVar16;
        uVar11 = (ulong)((int)uVar11 + 3);
        sVar8 = 0;
        if (param_3 != 0) {
          sVar8 = (short)(uVar14 / param_3);
        }
        *psVar10 = sVar3;
        iVar16 = iVar16 - iVar13;
        psVar10[1] = (short)iVar15 + (sVar8 * sVar5 - (short)uVar14);
        psVar10 = psVar10 + 3;
      } while (uVar14 < param_3);
    }
LAB_03962a08:
    local_58 = *param_2;
    uStack_54 = param_2[1];
    local_50 = *(undefined8 *)(param_2 + 2);
    uStack_48 = *(undefined8 *)(param_2 + 4);
    FUN_03901480(param_1,&local_58,1,uVar11);
    uVar20 = 4;
    goto LAB_03962a2c;
  }
  uVar14 = 1 << (ulong)(param_6 & 0x1f);
  if (param_4 < uVar14) {
LAB_0396298c:
    uVar11 = 0;
  }
  else {
    if (param_3 == 0) {
      uVar17 = uVar14;
      do {
        uVar17 = uVar17 + uVar14;
      } while (uVar17 <= param_4);
      goto LAB_0396298c;
    }
    uVar11 = 0;
    uVar17 = uVar14;
    iVar15 = uVar14 * param_3;
    do {
      uVar18 = 0;
      uVar11 = (ulong)(int)uVar11;
      do {
        psVar10 = (short *)(lVar9 + uVar12 + uVar11 * 2);
        sVar8 = (short)uVar18;
        uVar18 = uVar18 + uVar14;
        uVar11 = uVar11 + 2;
        *psVar10 = (short)iVar15 + sVar8;
        sVar8 = 0;
        if (param_3 != 0) {
          sVar8 = (short)(uVar18 / param_3);
        }
        psVar10[1] = ((short)uVar18 - sVar8 * sVar5) + (short)uVar17 * sVar5;
      } while (uVar18 < param_3);
      uVar17 = uVar17 + uVar14;
      iVar15 = iVar15 + uVar14 * param_3;
    } while (uVar17 <= param_4);
  }
  if (param_3 != 0) {
    sVar8 = (short)param_4 * sVar5;
    uVar17 = 0;
    psVar10 = (short *)(uVar12 + (long)(int)uVar11 * 2 + lVar9 + 4);
    do {
      sVar4 = (short)uVar17;
      psVar10[-2] = sVar4;
      uVar17 = uVar17 + uVar14;
      psVar10[-1] = sVar8 + sVar4;
      uVar11 = (ulong)((int)uVar11 + 4);
      *psVar10 = sVar5 + sVar8 + sVar4;
      psVar10[1] = sVar3;
      psVar10 = psVar10 + 4;
    } while (uVar17 < param_3);
  }
  local_58 = *param_2;
  uStack_54 = param_2[1];
  local_50 = *(undefined8 *)(param_2 + 2);
  uStack_48 = *(undefined8 *)(param_2 + 4);
  uVar20 = 1;
  FUN_03901480(param_1,&local_58,1,uVar11);
LAB_03962a2c:
  *(undefined4 *)(param_1 + 0xc) = uVar20;
  return;
}

