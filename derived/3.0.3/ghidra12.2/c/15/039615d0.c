
void FUN_039615d0(long param_1,uint *param_2,uint param_3,uint param_4,int param_5,uint param_6)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  long lVar6;
  short *psVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  short sVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  uint local_58;
  uint uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar6 = 0;
  if (*(long *)(param_2 + 2) != 0) {
    lVar6 = (*DAT_04c61fd0)();
  }
  uVar9 = (ulong)*param_2;
  sVar5 = (short)param_3;
  sVar4 = (short)param_4;
  if (param_5 != 0) {
    if (param_5 == 1) {
      if (param_3 == 0) {
        if (param_4 != 1) {
          uVar16 = 0;
          do {
            uVar16 = uVar16 + (1 << (ulong)(param_6 & 0x1f));
          } while (uVar16 < param_4 - 1);
        }
        lVar8 = 0;
      }
      else {
        param_4 = param_4 - 1;
        sVar13 = (short)param_4 * sVar5;
        lVar8 = 0;
        uVar16 = 0;
        uVar11 = 1 << (ulong)(param_6 & 0x1f);
        psVar7 = (short *)(uVar9 + lVar6 + 6);
        do {
          sVar2 = (short)uVar16;
          psVar7[-2] = sVar2;
          uVar16 = uVar16 + uVar11;
          sVar3 = 0;
          if (param_3 != 0) {
            sVar3 = (short)(uVar16 / param_3);
          }
          psVar7[2] = sVar13 + sVar2;
          psVar7[-3] = sVar4 * sVar5;
          psVar7[-1] = sVar4 * sVar5 + 1;
          lVar8 = lVar8 + 6;
          sVar2 = ((short)uVar16 - sVar3 * sVar5) + sVar13;
          *psVar7 = sVar2;
          psVar7[1] = sVar2;
          psVar7 = psVar7 + 6;
        } while (uVar16 < param_3);
        if (param_4 != 0) {
          iVar12 = 0;
          uVar16 = 0;
          uVar15 = uVar11;
          do {
            sVar4 = (short)uVar16;
            uVar18 = 0;
            uVar1 = uVar15;
            if ((int)param_4 <= (int)uVar15) {
              uVar1 = param_4;
            }
            psVar7 = (short *)(uVar9 + lVar6 + 4 + (long)(int)lVar8 * 2);
            uVar16 = uVar16 + uVar11;
            lVar8 = (long)(int)lVar8;
            do {
              sVar3 = (short)uVar18;
              sVar13 = (short)iVar12 + sVar3;
              psVar7[-2] = sVar13;
              uVar18 = uVar18 + uVar11;
              sVar2 = 0;
              if (param_3 != 0) {
                sVar2 = (short)(uVar18 / param_3);
              }
              *psVar7 = sVar13;
              lVar8 = lVar8 + 4;
              psVar7[1] = sVar5 * (short)uVar1 + sVar3;
              psVar7[-1] = ((short)uVar18 - sVar2 * sVar5) + sVar4 * sVar5;
              psVar7 = psVar7 + 4;
            } while (uVar18 < param_3);
            iVar12 = iVar12 + uVar11 * param_3;
            uVar15 = uVar15 + uVar11;
          } while (uVar16 < param_4);
        }
      }
      local_58 = *param_2;
      uStack_54 = param_2[1];
      local_50 = *(undefined8 *)(param_2 + 2);
      uStack_48 = *(undefined8 *)(param_2 + 4);
      uVar19 = 1;
      FUN_03901480(param_1,&local_58,1,lVar8);
    }
    else {
      if (param_5 != 2) {
        return;
      }
      if (param_4 == 0) {
        uVar10 = 0;
        uVar16 = 0;
        sVar13 = 0;
      }
      else {
        iVar12 = 1 << (ulong)(param_6 & 0x1f);
        if (param_3 == 0) {
          uVar11 = 0;
          do {
            uVar11 = uVar11 + iVar12;
          } while (uVar11 < param_4);
          uVar10 = 0;
        }
        else {
          iVar14 = 0;
          uVar11 = 0;
          uVar10 = 0;
          do {
            uVar16 = 0;
            uVar10 = (ulong)(int)uVar10;
            do {
              sVar13 = (short)uVar16;
              uVar16 = uVar16 + iVar12;
              *(short *)(lVar6 + uVar9 + uVar10 * 2) = (short)iVar14 + sVar13;
              uVar10 = uVar10 + 1;
            } while (uVar16 < param_3);
            uVar11 = uVar11 + iVar12;
            iVar14 = iVar14 + iVar12 * param_3;
          } while (uVar11 < param_4);
        }
        uVar16 = (uint)uVar10;
        uVar15 = param_4 - 1;
        if ((int)uVar11 <= (int)(param_4 - 1)) {
          uVar15 = uVar11;
        }
        sVar13 = (short)uVar15;
      }
      if (param_3 != 0) {
        uVar11 = 0;
        psVar7 = (short *)(lVar6 + uVar9 + (long)(int)uVar10 * 2);
        do {
          sVar2 = (short)uVar11;
          uVar11 = uVar11 + (1 << (ulong)(param_6 & 0x1f));
          uVar16 = (int)uVar10 + 1;
          uVar10 = (ulong)uVar16;
          *psVar7 = sVar13 * sVar5 + sVar2;
          psVar7 = psVar7 + 1;
        } while (uVar11 < param_3);
      }
      psVar7 = (short *)(lVar6 + uVar9 + (long)(int)uVar16 * 2);
      *psVar7 = sVar4 * sVar5;
      psVar7[1] = sVar4 * sVar5 + 1;
      local_58 = *param_2;
      uStack_54 = param_2[1];
      local_50 = *(undefined8 *)(param_2 + 2);
      uStack_48 = *(undefined8 *)(param_2 + 4);
      FUN_03901480(param_1,&local_58,1,uVar16 + 2);
      uVar19 = 0;
    }
    goto LAB_03961a14;
  }
  if (param_3 == 0) {
    if (param_4 == 1) {
      uVar10 = 0;
    }
    else {
      uVar16 = 0;
      do {
        uVar16 = uVar16 + (1 << (ulong)(param_6 & 0x1f));
      } while (uVar16 < param_4 - 1);
      uVar10 = 0;
    }
  }
  else {
    uVar10 = 0;
    uVar16 = 0;
    uVar11 = 1 << (ulong)(param_6 & 0x1f);
    psVar7 = (short *)(uVar9 + lVar6 + 4);
    do {
      psVar7[-1] = (short)uVar16;
      uVar16 = uVar16 + uVar11;
      uVar10 = uVar10 + 3;
      sVar13 = 0;
      if (param_3 != 0) {
        sVar13 = (short)(uVar16 / param_3);
      }
      psVar7[-2] = sVar4 * sVar5;
      *psVar7 = (short)uVar16 - sVar13 * sVar5;
      psVar7 = psVar7 + 3;
    } while (uVar16 < param_3);
    param_4 = param_4 - 1;
    if (param_4 != 0) {
      iVar12 = 0;
      uVar16 = 0;
      uVar15 = uVar11;
      do {
        sVar13 = (short)uVar16;
        uVar16 = uVar16 + uVar11;
        uVar18 = uVar15;
        if ((int)param_4 <= (int)uVar15) {
          uVar18 = param_4;
        }
        psVar7 = (short *)(uVar9 + lVar6 + 6 + (long)(int)uVar10 * 2);
        uVar1 = param_4;
        if ((int)uVar16 <= (int)param_4) {
          uVar1 = uVar16;
        }
        uVar17 = 0;
        uVar10 = (ulong)(int)uVar10;
        do {
          sVar2 = sVar5 * (short)uVar18 + (short)uVar17;
          psVar7[-3] = (short)iVar12 + (short)uVar17;
          uVar17 = uVar17 + uVar11;
          sVar3 = 0;
          if (param_3 != 0) {
            sVar3 = (short)(uVar17 / param_3);
          }
          psVar7[-2] = sVar2;
          *psVar7 = sVar2;
          uVar10 = uVar10 + 6;
          sVar3 = (short)uVar17 - sVar3 * sVar5;
          sVar2 = sVar3 + sVar13 * sVar5;
          psVar7[-1] = sVar2;
          psVar7[1] = sVar3 + (short)uVar1 * sVar5;
          psVar7[2] = sVar2;
          psVar7 = psVar7 + 6;
        } while (uVar17 < param_3);
        iVar12 = iVar12 + uVar11 * param_3;
        uVar15 = uVar15 + uVar11;
      } while (uVar16 < param_4);
      if (param_3 == 0) goto LAB_039618fc;
      uVar11 = 1 << (ulong)(param_6 & 0x1f);
    }
    uVar16 = 0;
    sVar13 = (sVar4 + -1) * sVar5;
    psVar7 = (short *)(uVar9 + (long)(int)uVar10 * 2 + lVar6 + 2);
    do {
      sVar3 = (short)uVar16;
      uVar16 = uVar16 + uVar11;
      psVar7[-1] = sVar4 * sVar5 + 1;
      sVar2 = 0;
      if (param_3 != 0) {
        sVar2 = (short)(uVar16 / param_3);
      }
      psVar7[1] = sVar13 + sVar3;
      uVar10 = (ulong)((int)uVar10 + 3);
      *psVar7 = ((short)uVar16 - sVar2 * sVar5) + sVar13;
      psVar7 = psVar7 + 3;
    } while (uVar16 < param_3);
  }
LAB_039618fc:
  local_58 = *param_2;
  uStack_54 = param_2[1];
  local_50 = *(undefined8 *)(param_2 + 2);
  uStack_48 = *(undefined8 *)(param_2 + 4);
  FUN_03901480(param_1,&local_58,1,uVar10);
  uVar19 = 4;
LAB_03961a14:
  *(undefined4 *)(param_1 + 0xc) = uVar19;
  return;
}

