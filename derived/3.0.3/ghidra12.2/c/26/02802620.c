
undefined8 FUN_02802620(long param_1,int param_2)

{
  short *psVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  short sVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  short *psVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  
  if (param_2 < 1) {
    return 0;
  }
  FUN_026824a0();
  uVar12 = *(uint *)(param_1 + 72000);
  if (8999 < uVar12) {
    uVar12 = 9000;
  }
  uVar8 = (ulong)uVar12;
  if (uVar12 != 0) {
    uVar10 = 0;
    iVar9 = 0;
    if (uVar8 != 1) {
      psVar11 = (short *)(param_1 + 8);
      do {
        psVar1 = psVar11 + -4;
        uVar10 = uVar10 + 2;
        sVar7 = *psVar11;
        psVar11 = psVar11 + 8;
        if (*psVar1 == -2) {
          iVar9 = iVar9 + 1;
        }
        if (sVar7 == -2) {
          iVar9 = iVar9 + 1;
        }
      } while ((uVar8 & 0x3ffe) != uVar10);
    }
    if (((uVar12 & 1) != 0) && (*(short *)(param_1 + uVar10 * 8) == -2)) {
      iVar9 = iVar9 + 1;
    }
    if (param_2 <= iVar9) {
      uVar10 = 0;
      uVar13 = 0;
      if (uVar8 != 1) {
        uVar13 = 0;
        psVar11 = (short *)(param_1 + 8);
        do {
          psVar1 = psVar11 + -4;
          uVar10 = uVar10 + 2;
          sVar7 = *psVar11;
          psVar11 = psVar11 + 8;
          if (*psVar1 == -2) {
            uVar13 = uVar13 + 1;
          }
          if (sVar7 == -2) {
            uVar13 = uVar13 + 1;
          }
        } while ((uVar8 & 0x3ffe) != uVar10);
      }
      if (((uVar12 & 1) != 0) && (*(short *)(param_1 + uVar10 * 8) == -2)) {
        uVar13 = uVar13 + 1;
      }
      if (0 < (int)(uVar12 - uVar13)) {
        lVar14 = (ulong)((uVar12 - uVar13) + 1) - 1;
        uVar12 = ~uVar13 + uVar12;
        do {
          if (-1 < (int)uVar12) {
            uVar13 = *(uint *)(param_1 + 72000);
            if (8999 < uVar13) {
              uVar13 = 9000;
            }
            if (param_2 + uVar12 < uVar13) {
              puVar2 = (undefined4 *)(param_1 + (ulong)uVar12 * 8);
              puVar3 = (undefined4 *)(param_1 + (ulong)(param_2 + uVar12) * 8);
              uVar4 = *puVar2;
              uVar5 = puVar2[1];
              uVar6 = puVar3[1];
              *puVar2 = *puVar3;
              puVar2[1] = uVar6;
              *puVar3 = uVar4;
              puVar3[1] = uVar5;
              FUN_033cff20(uVar12);
            }
          }
          lVar14 = lVar14 + -1;
          uVar12 = uVar12 - 1;
        } while (lVar14 != 0);
      }
      return 1;
    }
  }
  return 0;
}

