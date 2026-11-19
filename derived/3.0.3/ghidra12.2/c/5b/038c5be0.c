
void FUN_038c5be0(long param_1,long param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  bool bVar10;
  long lVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined2 *puVar14;
  undefined2 uVar15;
  short sVar16;
  uint uVar17;
  long lVar18;
  int iVar19;
  short *psVar20;
  long lVar21;
  uint uVar22;
  float *pfVar23;
  int iVar24;
  ulong uVar25;
  ulong uVar26;
  float *pfVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  if (param_1 != 0) {
    if (0 < (int)param_4) {
      if ((int)param_3 < 1) {
        uVar22 = 0;
        do {
          uVar22 = uVar22 + 1;
          fVar32 = ((float)(int)uVar22 / ((float)(int)param_4 + 1.0) + -0.5) * 3.1415927;
          if (ABS(fVar32) == INFINITY) {
            sinf(fVar32);
            cosf(fVar32);
          }
        } while (param_4 != uVar22);
      }
      else {
        fVar32 = (float)(int)param_3;
        uVar26 = (ulong)param_3;
        pfVar23 = (float *)(param_1 + 0xc);
        uVar25 = 0;
        do {
          uVar1 = uVar25 + 1;
          fVar30 = ((float)(int)uVar1 / ((float)(int)param_4 + 1.0) + -0.5) * 3.1415927;
          fVar28 = sinf(fVar30);
          fVar28 = fVar28 * 0.5;
          fVar30 = cosf(fVar30);
          fVar30 = fVar30 * 0.5;
          if ((uVar25 & 1) == 0) {
            uVar25 = 0;
            pfVar27 = pfVar23;
            do {
              iVar24 = (int)uVar25;
              fVar31 = ((float)iVar24 * 6.2831855) / fVar32 - (6.2831855 / fVar32) * 0.5;
              fVar29 = cosf(fVar31);
              fVar31 = sinf(fVar31);
              uVar25 = uVar25 + 1;
              pfVar27[-3] = fVar30 * fVar29;
              pfVar27[-2] = fVar28;
              pfVar27[-1] = fVar30 * fVar31;
              *pfVar27 = fVar28 + 0.5;
              pfVar27[1] = (float)iVar24 / fVar32;
              pfVar27[2] = 0.5 - fVar28;
              pfVar27 = pfVar27 + 9;
            } while (uVar26 != uVar25);
          }
          else {
            uVar25 = 0;
            pfVar27 = pfVar23;
            do {
              iVar24 = (int)uVar25;
              fVar31 = ((float)iVar24 * 6.2831855) / fVar32;
              fVar29 = cosf(fVar31);
              fVar31 = sinf(fVar31);
              uVar25 = uVar25 + 1;
              pfVar27[-3] = fVar30 * fVar29;
              pfVar27[-2] = fVar28;
              pfVar27[-1] = fVar30 * fVar31;
              *pfVar27 = fVar28 + 0.5;
              pfVar27[1] = (float)iVar24 / fVar32;
              pfVar27[2] = 0.5 - fVar28;
              pfVar27 = pfVar27 + 9;
            } while (uVar26 != uVar25);
          }
          pfVar23 = pfVar23 + uVar26 + (ulong)param_3 * 8;
          uVar25 = uVar1;
        } while (uVar1 != param_4);
      }
    }
    puVar13 = (undefined8 *)(param_1 + (long)(int)(param_4 * param_3) * 0x24);
    puVar13[2] = 0x3f8000003f000000;
    *puVar13 = 0xbf00000000000000;
    puVar13[1] = 0;
    *(undefined8 *)((long)puVar13 + 0x24) = 0x3f00000000000000;
    *(undefined8 *)((long)puVar13 + 0x2c) = 0x3f80000000000000;
    *(undefined8 *)((long)puVar13 + 0x34) = 0x3f000000;
  }
  if ((param_2 != 0) && (0 < (int)param_3)) {
    sVar9 = (short)param_3;
    sVar7 = (short)param_4 * sVar9;
    uVar26 = (ulong)param_3;
    uVar25 = 0;
    puVar14 = (undefined2 *)(param_2 + 4);
    do {
      puVar14[-1] = (short)uVar25;
      bVar10 = uVar26 - 1 != uVar25;
      uVar25 = uVar25 + 1;
      uVar15 = 0;
      if (bVar10) {
        uVar15 = (undefined2)uVar25;
      }
      puVar14[-2] = sVar7;
      *puVar14 = uVar15;
      puVar14 = puVar14 + 3;
    } while (uVar26 != uVar25);
    uVar22 = param_4 - 1;
    if (1 < (int)param_4) {
      iVar24 = 0;
      uVar17 = 0;
      iVar19 = param_3 * 3;
      do {
        uVar4 = uVar17 & 1;
        sVar8 = (short)uVar17;
        uVar17 = uVar17 + 1;
        sVar16 = (short)uVar17 * sVar9;
        lVar21 = 0;
        iVar12 = 0;
        do {
          iVar2 = uVar4 + iVar12;
          iVar3 = iVar19 + (int)lVar21;
          *(short *)(param_2 + (long)iVar3 * 2) = (short)iVar24 + (short)iVar12;
          sVar6 = 0;
          if (param_3 != 0) {
            sVar6 = (short)(iVar2 / (int)param_3);
          }
          bVar10 = uVar26 * 6 + -6 != lVar21;
          lVar21 = lVar21 + 6;
          sVar5 = 0;
          if (bVar10) {
            sVar5 = (short)iVar12 + 1;
          }
          iVar12 = iVar12 + 1;
          sVar5 = sVar5 + sVar8 * sVar9;
          sVar6 = ((short)iVar2 - sVar6 * sVar9) + sVar16;
          *(short *)(param_2 + (long)(iVar3 + 1) * 2) = sVar6;
          *(short *)(param_2 + (long)(iVar3 + 2) * 2) = sVar5;
          *(short *)(param_2 + (long)(iVar3 + 3) * 2) = sVar6;
          sVar6 = 0;
          if (param_3 != 0) {
            sVar6 = (short)((iVar2 + 1) / (int)param_3);
          }
          *(short *)(param_2 + (long)(iVar3 + 4) * 2) =
               ((short)(iVar2 + 1) - sVar6 * sVar9) + sVar16;
          *(short *)(param_2 + (long)(iVar3 + 5) * 2) = sVar5;
        } while (uVar26 * 6 != lVar21);
        iVar24 = iVar24 + param_3;
        iVar19 = iVar19 + param_3 * 6;
      } while (uVar17 != uVar22);
    }
    sVar9 = (short)uVar22 * sVar9;
    uVar25 = 0;
    param_3 = (uVar22 * 6 + 3) * param_3;
    lVar18 = (ulong)param_3 << 0x20;
    lVar21 = lVar18 + 0x200000000;
    lVar18 = lVar18 + 0x100000000;
    psVar20 = (short *)(param_2 + (long)(int)param_3 * 2);
    do {
      bVar10 = uVar26 - 1 != uVar25;
      sVar8 = (short)uVar25;
      uVar25 = uVar25 + 1;
      sVar16 = 0;
      if (bVar10) {
        sVar16 = (short)uVar25;
      }
      lVar11 = lVar18 >> 0x1f;
      lVar18 = lVar18 + 0x300000000;
      *psVar20 = sVar7 + 1;
      *(short *)(param_2 + lVar11) = sVar16 + sVar9;
      lVar11 = lVar21 >> 0x1f;
      lVar21 = lVar21 + 0x300000000;
      *(short *)(param_2 + lVar11) = sVar9 + sVar8;
      psVar20 = psVar20 + 3;
    } while (uVar26 != uVar25);
  }
  return;
}

