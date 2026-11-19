
void FUN_03961a40(long param_1,uint *param_2,uint param_3,uint param_4,int param_5,uint param_6)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  long lVar8;
  short *psVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  undefined2 *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  uint local_58;
  uint uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar8 = 0;
  if (*(long *)(param_2 + 2) != 0) {
    lVar8 = (*DAT_04c61fd0)();
  }
  uVar11 = (ulong)*param_2;
  uVar7 = param_4 >> 1;
  sVar3 = (short)uVar7 + 1;
  sVar4 = (short)param_3;
  if (param_5 == 0) {
    if (param_3 == 0) {
      if (1 < param_4) {
        uVar16 = 0;
        do {
          uVar16 = uVar16 + (1 << (ulong)(param_6 & 0x1f));
        } while (uVar16 < uVar7);
      }
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
      uVar16 = 0;
      uVar17 = 1 << (ulong)(param_6 & 0x1f);
      puVar15 = (undefined2 *)(uVar11 + lVar8 + 4);
      do {
        *puVar15 = (short)uVar16;
        uVar16 = uVar16 + uVar17;
        lVar12 = lVar12 + 3;
        sVar6 = 0;
        if (param_3 != 0) {
          sVar6 = (short)(uVar16 / param_3);
        }
        puVar15[-2] = sVar3 * sVar4;
        puVar15[-1] = (short)uVar16 - sVar6 * sVar4;
        puVar15 = puVar15 + 3;
      } while (uVar16 < param_3);
      if (1 < param_4) {
        iVar10 = 0;
        uVar16 = 0;
        uVar14 = uVar17;
        do {
          sVar3 = (short)uVar16;
          uVar16 = uVar16 + uVar17;
          uVar18 = uVar14;
          if ((int)uVar7 <= (int)uVar14) {
            uVar18 = uVar7;
          }
          psVar9 = (short *)(uVar11 + lVar8 + 6 + (long)(int)lVar12 * 2);
          uVar1 = uVar7;
          if ((int)uVar16 <= (int)uVar7) {
            uVar1 = uVar16;
          }
          uVar19 = 0;
          lVar12 = (long)(int)lVar12;
          do {
            sVar6 = sVar4 * (short)uVar18 + (short)uVar19;
            psVar9[-3] = (short)iVar10 + (short)uVar19;
            uVar19 = uVar19 + uVar17;
            sVar5 = 0;
            if (param_3 != 0) {
              sVar5 = (short)(uVar19 / param_3);
            }
            psVar9[-1] = sVar6;
            *psVar9 = sVar6;
            lVar12 = lVar12 + 6;
            sVar5 = (short)uVar19 - sVar5 * sVar4;
            sVar6 = sVar5 + sVar3 * sVar4;
            psVar9[-2] = sVar6;
            psVar9[1] = sVar6;
            psVar9[2] = sVar5 + (short)uVar1 * sVar4;
            psVar9 = psVar9 + 6;
          } while (uVar19 < param_3);
          iVar10 = iVar10 + uVar17 * param_3;
          uVar14 = uVar14 + uVar17;
        } while (uVar16 < uVar7);
      }
    }
    local_58 = *param_2;
    uStack_54 = param_2[1];
    local_50 = *(undefined8 *)(param_2 + 2);
    uStack_48 = *(undefined8 *)(param_2 + 4);
    FUN_03901480(param_1,&local_58,1,lVar12);
    uVar20 = 4;
  }
  else if (param_5 == 1) {
    if (param_3 == 0) {
      if (1 < param_4) {
        uVar16 = 0;
        do {
          uVar16 = uVar16 + (1 << (ulong)(param_6 & 0x1f));
        } while (uVar16 < uVar7);
      }
      lVar12 = 0;
    }
    else {
      sVar6 = (short)uVar7 * sVar4;
      lVar12 = 0;
      uVar16 = 0;
      uVar17 = 1 << (ulong)(param_6 & 0x1f);
      psVar9 = (short *)(uVar11 + lVar8 + 4);
      do {
        sVar5 = (short)uVar16;
        psVar9[-1] = sVar5;
        uVar16 = uVar16 + uVar17;
        sVar2 = 0;
        if (param_3 != 0) {
          sVar2 = (short)(uVar16 / param_3);
        }
        psVar9[1] = sVar6 + sVar5;
        psVar9[-2] = sVar3 * sVar4;
        lVar12 = lVar12 + 4;
        *psVar9 = ((short)uVar16 - sVar2 * sVar4) + sVar6;
        psVar9 = psVar9 + 4;
      } while (uVar16 < param_3);
      if (1 < param_4) {
        iVar10 = 0;
        uVar16 = 0;
        uVar14 = uVar17;
        do {
          sVar3 = (short)uVar16;
          uVar18 = 0;
          uVar1 = uVar14;
          if ((int)uVar7 <= (int)uVar14) {
            uVar1 = uVar7;
          }
          psVar9 = (short *)(uVar11 + lVar8 + 4 + (long)(int)lVar12 * 2);
          uVar16 = uVar16 + uVar17;
          lVar12 = (long)(int)lVar12;
          do {
            sVar2 = (short)uVar18;
            sVar6 = (short)iVar10 + sVar2;
            psVar9[-2] = sVar6;
            uVar18 = uVar18 + uVar17;
            sVar5 = 0;
            if (param_3 != 0) {
              sVar5 = (short)(uVar18 / param_3);
            }
            *psVar9 = sVar6;
            lVar12 = lVar12 + 4;
            psVar9[1] = sVar4 * (short)uVar1 + sVar2;
            psVar9[-1] = ((short)uVar18 - sVar5 * sVar4) + sVar3 * sVar4;
            psVar9 = psVar9 + 4;
          } while (uVar18 < param_3);
          iVar10 = iVar10 + uVar17 * param_3;
          uVar14 = uVar14 + uVar17;
        } while (uVar16 < uVar7);
      }
    }
    local_58 = *param_2;
    uStack_54 = param_2[1];
    local_50 = *(undefined8 *)(param_2 + 2);
    uStack_48 = *(undefined8 *)(param_2 + 4);
    uVar20 = 1;
    FUN_03901480(param_1,&local_58,1,lVar12);
  }
  else {
    if (param_5 != 2) {
      return;
    }
    iVar10 = 1 << (ulong)(param_6 & 0x1f);
    if (param_3 == 0) {
      uVar16 = 0;
      do {
        uVar16 = uVar16 + iVar10;
      } while (uVar16 <= uVar7);
      lVar12 = 0;
    }
    else {
      iVar13 = 0;
      uVar16 = 0;
      lVar12 = 0;
      do {
        uVar17 = 0;
        lVar12 = (long)(int)lVar12;
        do {
          sVar6 = (short)uVar17;
          uVar17 = uVar17 + iVar10;
          *(short *)(lVar8 + uVar11 + lVar12 * 2) = (short)iVar13 + sVar6;
          lVar12 = lVar12 + 1;
        } while (uVar17 < param_3);
        uVar16 = uVar16 + iVar10;
        iVar13 = iVar13 + iVar10 * param_3;
      } while (uVar16 <= uVar7);
    }
    *(short *)(lVar8 + uVar11 + (long)(int)lVar12 * 2) = sVar3 * sVar4;
    local_58 = *param_2;
    uStack_54 = param_2[1];
    local_50 = *(undefined8 *)(param_2 + 2);
    uStack_48 = *(undefined8 *)(param_2 + 4);
    FUN_03901480(param_1,&local_58,1,(int)lVar12 + 1);
    uVar20 = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = uVar20;
  return;
}

