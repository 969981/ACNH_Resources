
undefined8 FUN_009be870(float param_1,void *param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  float *pfVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  lVar4 = param_3[0x7ad3];
  memset(param_2,0,0xae8);
  *(float *)((long)param_2 + 0xae8) = param_1;
  uVar3 = 0;
  uVar2 = *(uint *)(param_3 + 2);
  uVar7 = (ulong)uVar2;
  if ((0 < (int)uVar2) && (param_1 <= (float)(int)uVar2)) {
    uVar8 = (ulong)((int)lVar4 == 1);
    iVar9 = 0;
    if ((int)param_3[1] <= *(int *)((long)param_3 + 0xc)) {
      iVar9 = (int)param_3[1];
    }
    if (*(int *)(*param_3 + (long)(*(int *)((long)param_3 + 0xc) - iVar9) * 0x1060 + uVar8 * 0x830 +
                0x780) < 1) {
      uVar3 = 0;
    }
    else {
      uVar10 = 0;
      pfVar11 = (float *)((long)param_2 + 0x6f8);
      pfVar12 = (float *)((long)param_2 + 0x818);
      do {
        iVar9 = (int)uVar10;
        fVar13 = (float)iVar9;
        if (param_1 <= fVar13) break;
        lVar4 = *param_3;
        if (uVar10 < (uVar7 & 0xffffffff)) {
          iVar1 = 0;
          if ((int)param_3[1] <= iVar9 + *(int *)((long)param_3 + 0xc)) {
            iVar1 = (int)param_3[1];
          }
          lVar4 = lVar4 + (long)(iVar9 + (*(int *)((long)param_3 + 0xc) - iVar1)) * 0x1060;
        }
        pfVar5 = (float *)(lVar4 + uVar8 * 0x830);
        fVar14 = SQRT(pfVar5[1] * pfVar5[1] + *pfVar5 * *pfVar5 + pfVar5[2] * pfVar5[2]);
        fVar15 = -fVar14;
        if (0.0 <= fVar14) {
          fVar15 = fVar14;
        }
        fVar18 = 0.0;
        if (fVar15 <= 30.0) {
          fVar18 = fVar14;
        }
        if (*(float *)((long)param_2 + 4) <= fVar18) {
          *(float *)((long)param_2 + 4) = fVar18;
        }
        *(float *)((long)param_2 + 0x30) = fVar18 + *(float *)((long)param_2 + 0x30);
        lVar4 = *param_3;
        if (uVar10 < *(uint *)(param_3 + 2)) {
          iVar1 = 0;
          if ((int)param_3[1] <= iVar9 + *(int *)((long)param_3 + 0xc)) {
            iVar1 = (int)param_3[1];
          }
          lVar4 = lVar4 + (long)(iVar9 + (*(int *)((long)param_3 + 0xc) - iVar1)) * 0x1060;
        }
        pfVar5 = (float *)(lVar4 + uVar8 * 0x830);
        fVar17 = *pfVar5;
        fVar14 = pfVar5[1];
        fVar15 = pfVar5[2];
        pfVar5 = pfVar12 + -0x1f9;
        if (0x3b < uVar10) {
          pfVar5 = (float *)((long)param_2 + 0x34);
        }
        *pfVar5 = fVar17;
        pfVar5[1] = fVar14;
        pfVar5[2] = fVar15;
        pfVar5 = pfVar11 + -0xfd;
        if (0x3b < uVar10) {
          pfVar5 = (float *)((long)param_2 + 0x304);
        }
        *pfVar5 = fVar18;
        if (*(float *)((long)param_2 + 0x18) <= fVar17) {
          *(float *)((long)param_2 + 0xaec) = fVar13;
          *(float *)((long)param_2 + 0x18) = fVar17;
        }
        if (*(float *)((long)param_2 + 0x1c) <= fVar14) {
          *(float *)((long)param_2 + 0xaf0) = fVar13;
          *(float *)((long)param_2 + 0x1c) = fVar14;
        }
        if (*(float *)((long)param_2 + 0x20) <= fVar15) {
          *(float *)((long)param_2 + 0xaf4) = fVar13;
          *(float *)((long)param_2 + 0x20) = fVar15;
        }
        if (fVar17 <= *(float *)((long)param_2 + 0xc)) {
          *(float *)((long)param_2 + 0xb10) = fVar13;
          *(float *)((long)param_2 + 0xc) = fVar17;
        }
        if (fVar14 <= *(float *)((long)param_2 + 0x10)) {
          *(float *)((long)param_2 + 0xb14) = fVar13;
          *(float *)((long)param_2 + 0x10) = fVar14;
        }
        if (fVar15 <= *(float *)((long)param_2 + 0x14)) {
          *(float *)((long)param_2 + 0xb18) = fVar13;
          *(float *)((long)param_2 + 0x14) = fVar15;
        }
        lVar4 = *param_3;
        if (uVar10 < *(uint *)(param_3 + 2)) {
          iVar1 = 0;
          if ((int)param_3[1] <= iVar9 + *(int *)((long)param_3 + 0xc)) {
            iVar1 = (int)param_3[1];
          }
          lVar4 = lVar4 + (long)(iVar9 + (*(int *)((long)param_3 + 0xc) - iVar1)) * 0x1060;
        }
        lVar4 = lVar4 + uVar8 * 0x830;
        fVar14 = SQRT(*(float *)(lVar4 + 0x34) * *(float *)(lVar4 + 0x34) +
                      *(float *)(lVar4 + 0x30) * *(float *)(lVar4 + 0x30) +
                      *(float *)(lVar4 + 0x38) * *(float *)(lVar4 + 0x38));
        fVar15 = -fVar14;
        if (0.0 <= fVar14) {
          fVar15 = fVar14;
        }
        fVar18 = 0.0;
        if (fVar15 <= 30.0) {
          fVar18 = fVar14;
        }
        if (*(float *)((long)param_2 + 0x3f8) <= fVar18) {
          *(float *)((long)param_2 + 0x3f8) = fVar18;
        }
        *(float *)((long)param_2 + 0x424) = fVar18 + *(float *)((long)param_2 + 0x424);
        lVar4 = *param_3;
        if (uVar10 < *(uint *)(param_3 + 2)) {
          iVar1 = 0;
          if ((int)param_3[1] <= iVar9 + *(int *)((long)param_3 + 0xc)) {
            iVar1 = (int)param_3[1];
          }
          lVar4 = lVar4 + (long)(iVar9 + (*(int *)((long)param_3 + 0xc) - iVar1)) * 0x1060;
        }
        lVar4 = lVar4 + uVar8 * 0x830;
        fVar17 = *(float *)(lVar4 + 0x38);
        fVar15 = *(float *)(lVar4 + 0x30);
        fVar14 = *(float *)(lVar4 + 0x34);
        pfVar5 = pfVar12 + -0xfc;
        if (0x3b < uVar10) {
          pfVar5 = (float *)((long)param_2 + 0x428);
        }
        pfVar5[1] = fVar14;
        *pfVar5 = fVar15;
        pfVar5[2] = fVar17;
        pfVar5 = pfVar11;
        if (0x3b < uVar10) {
          pfVar5 = (float *)((long)param_2 + 0x6f8);
        }
        *pfVar5 = fVar18;
        fVar18 = -fVar15;
        if (0.0 <= fVar15) {
          fVar18 = fVar15;
        }
        fVar21 = 0.0;
        if (fVar18 <= 30.0) {
          fVar21 = fVar15;
        }
        fVar15 = -fVar14;
        if (0.0 <= fVar14) {
          fVar15 = fVar14;
        }
        fVar18 = 0.0;
        if (fVar15 <= 30.0) {
          fVar18 = fVar14;
        }
        fVar15 = -fVar17;
        if (0.0 <= fVar17) {
          fVar15 = fVar17;
        }
        fVar14 = 0.0;
        if (fVar15 <= 30.0) {
          fVar14 = fVar17;
        }
        if (*(float *)((long)param_2 + 0x40c) <= fVar21) {
          *(float *)((long)param_2 + 0xaf8) = fVar13;
          *(float *)((long)param_2 + 0x40c) = fVar21;
        }
        if (*(float *)((long)param_2 + 0x410) <= fVar18) {
          *(float *)((long)param_2 + 0xafc) = fVar13;
          *(float *)((long)param_2 + 0x410) = fVar18;
        }
        if (*(float *)((long)param_2 + 0x414) <= fVar14) {
          *(float *)((long)param_2 + 0xb00) = fVar13;
          *(float *)((long)param_2 + 0x414) = fVar14;
        }
        if (fVar21 <= *(float *)((long)param_2 + 0x400)) {
          *(float *)((long)param_2 + 0xb1c) = fVar13;
          *(float *)((long)param_2 + 0x400) = fVar21;
        }
        if (fVar18 <= *(float *)((long)param_2 + 0x404)) {
          *(float *)((long)param_2 + 0xb20) = fVar13;
          *(float *)((long)param_2 + 0x404) = fVar18;
        }
        if (fVar14 <= *(float *)((long)param_2 + 0x408)) {
          *(float *)((long)param_2 + 0xb24) = fVar13;
          *(float *)((long)param_2 + 0x408) = fVar14;
        }
        lVar6 = *param_3;
        lVar4 = lVar6;
        if (uVar10 < *(uint *)(param_3 + 2)) {
          iVar1 = 0;
          if ((int)param_3[1] <= iVar9 + *(int *)((long)param_3 + 0xc)) {
            iVar1 = (int)param_3[1];
          }
          lVar4 = lVar6 + (long)(iVar9 + (*(int *)((long)param_3 + 0xc) - iVar1)) * 0x1060;
        }
        lVar4 = lVar4 + uVar8 * 0x830;
        fVar15 = *(float *)(lVar4 + 0x70);
        if (uVar10 < *(uint *)(param_3 + 2)) {
          iVar1 = 0;
          if ((int)param_3[1] <= iVar9 + *(int *)((long)param_3 + 0xc)) {
            iVar1 = (int)param_3[1];
          }
          lVar6 = lVar6 + (long)(iVar9 + (*(int *)((long)param_3 + 0xc) - iVar1)) * 0x1060;
        }
        lVar6 = lVar6 + uVar8 * 0x830;
        fVar17 = *(float *)(lVar6 + 0xc);
        fVar21 = *(float *)(lVar6 + 0x10);
        fVar22 = *(float *)(lVar6 + 0x14);
        fVar14 = *(float *)(lVar4 + 0x4c) * fVar21 + fVar17 * *(float *)(lVar4 + 0x48);
        fVar18 = *(float *)(lVar4 + 0x5c) * fVar21 + fVar17 * *(float *)(lVar4 + 0x58);
        fVar17 = *(float *)(lVar4 + 0x6c) * fVar21 + fVar17 * *(float *)(lVar4 + 0x68);
        fVar21 = fVar14 + fVar22 * *(float *)(lVar4 + 0x50);
        fVar19 = fVar18 + fVar22 * *(float *)(lVar4 + 0x60);
        fVar20 = fVar17 + fVar22 * fVar15;
        fVar14 = -(*(float *)(lVar4 + 0x50) * fVar22) - fVar14;
        if (0.0 <= fVar21) {
          fVar14 = fVar21;
        }
        fVar16 = 0.0;
        if (fVar14 <= 30.0) {
          fVar16 = fVar21;
        }
        fVar14 = -(*(float *)(lVar4 + 0x60) * fVar22) - fVar18;
        if (0.0 <= fVar19) {
          fVar14 = fVar19;
        }
        *(float *)((long)param_2 + 0x80c) = *(float *)((long)param_2 + 0x80c) + fVar16;
        fVar18 = 0.0;
        if (fVar14 <= 30.0) {
          fVar18 = fVar19;
        }
        fVar15 = -(fVar15 * fVar22) - fVar17;
        if (0.0 <= fVar20) {
          fVar15 = fVar20;
        }
        *(float *)((long)param_2 + 0x810) = *(float *)((long)param_2 + 0x810) + fVar18;
        fVar14 = 0.0;
        if (fVar15 <= 30.0) {
          fVar14 = fVar20;
        }
        pfVar5 = pfVar12;
        if (0x3b < uVar10) {
          pfVar5 = (float *)((long)param_2 + 0x818);
        }
        *(float *)((long)param_2 + 0x814) = *(float *)((long)param_2 + 0x814) + fVar14;
        *pfVar5 = fVar16;
        pfVar5[1] = fVar18;
        pfVar5[2] = fVar14;
        if (*(float *)((long)param_2 + 0x7f4) <= fVar16) {
          *(float *)((long)param_2 + 0xb04) = fVar13;
          *(float *)((long)param_2 + 0x7f4) = fVar16;
        }
        if (*(float *)((long)param_2 + 0x7f8) <= fVar18) {
          *(float *)((long)param_2 + 0xb08) = fVar13;
          *(float *)((long)param_2 + 0x7f8) = fVar18;
        }
        if (*(float *)((long)param_2 + 0x7fc) <= fVar14) {
          *(float *)((long)param_2 + 0xb0c) = fVar13;
          *(float *)((long)param_2 + 0x7fc) = fVar14;
        }
        if (fVar16 <= *(float *)((long)param_2 + 0x7e8)) {
          *(float *)((long)param_2 + 0xb28) = fVar13;
          *(float *)((long)param_2 + 0x7e8) = fVar16;
        }
        if (fVar18 <= *(float *)((long)param_2 + 0x7ec)) {
          *(float *)((long)param_2 + 0xb2c) = fVar13;
          *(float *)((long)param_2 + 0x7ec) = fVar18;
        }
        if (fVar14 <= *(float *)((long)param_2 + 0x7f0)) {
          *(float *)((long)param_2 + 0xb30) = fVar13;
          *(float *)((long)param_2 + 0x7f0) = fVar14;
        }
        uVar7 = (ulong)(int)param_3[2];
        uVar10 = uVar10 + 1;
        pfVar12 = pfVar12 + 3;
        pfVar11 = pfVar11 + 1;
      } while ((long)uVar10 < (long)uVar7);
      if (1.0 < *(float *)((long)param_2 + 0x30)) {
        *(float *)((long)param_2 + 8) = *(float *)((long)param_2 + 0x30) / param_1;
      }
      if (1.0 < *(float *)((long)param_2 + 0x424)) {
        *(float *)((long)param_2 + 0x3fc) = *(float *)((long)param_2 + 0x424) / param_1;
      }
      fVar15 = *(float *)((long)param_2 + 0x80c);
      fVar14 = *(float *)((long)param_2 + 0x810);
      fVar13 = *(float *)((long)param_2 + 0x814);
      if (1.0 < SQRT(fVar14 * fVar14 + fVar15 * fVar15 + fVar13 * fVar13)) {
        param_1 = 1.0 / param_1;
        *(float *)((long)param_2 + 0x800) = param_1 * fVar15;
        *(float *)((long)param_2 + 0x804) = param_1 * fVar14;
        *(float *)((long)param_2 + 0x808) = param_1 * fVar13;
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}

