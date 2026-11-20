
void FUN_03f24810(float param_1,long param_2,float *param_3,long param_4,undefined4 param_5,
                 undefined4 param_6,int param_7)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float *pfVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if (*(char *)(param_2 + 8) != '\0') {
    if ((*(char *)(param_2 + 0xb8) == '\0') ||
       (((param_4 != 0 && (*(long *)(param_2 + 0xb0) == param_4)) &&
        (*(char *)(param_2 + 0xa8) != '\0')))) {
      uVar2 = *(undefined8 *)(param_2 + 0x98);
      uVar3 = *(undefined8 *)(param_2 + 0xa0);
      *(undefined8 *)param_3 = *(undefined8 *)(param_2 + 0x90);
      *(undefined8 *)(param_3 + 2) = uVar2;
      *(undefined8 *)(param_3 + 4) = uVar3;
      return;
    }
    if (DAT_05aebb78 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(DAT_05aebb78 + 0x20);
    }
    lVar6 = *(long *)(lVar7 + 0x28);
    fVar11 = 0.0;
    if (lVar6 == lVar7 + 0x20) {
      fVar12 = 0.0;
      fVar13 = 0.0;
      fVar14 = 0.0;
      fVar15 = 0.0;
    }
    else {
      iVar4 = *(int *)(param_2 + 0x10);
      fVar12 = 0.0;
      fVar13 = 0.0;
      fVar14 = 0.0;
      fVar15 = 0.0;
      if (0 < iVar4) {
        lVar8 = lVar6 + -0x1b8;
        iVar10 = 1;
        if (0.0 <= param_1) {
          do {
            fVar16 = param_1;
            if (0.0 <= *(float *)(lVar8 + (long)param_7 * 4 + 0x54)) {
              fVar16 = *(float *)(lVar8 + (long)param_7 * 4 + 0x54) * param_1;
            }
            uVar5 = iVar10 - 1;
            fVar17 = 0.0;
            if (0.0 <= fVar16) {
              fVar17 = fVar16;
            }
            if (*(uint *)(param_2 + 0x20) <= uVar5) {
              uVar5 = 0;
            }
            lVar6 = *(long *)(lVar6 + 8);
            pfVar9 = (float *)(*(long *)(param_2 + 0x28) + (ulong)uVar5 * 0xa8 +
                              (long)param_7 * 0x18);
            fVar16 = (*(float *)(lVar8 + 0x50) * fVar17) / 255.0;
            if (fVar15 <= fVar16 * *pfVar9) {
              fVar15 = fVar16 * *pfVar9;
            }
            if (fVar11 <= fVar16 * pfVar9[1]) {
              fVar11 = fVar16 * pfVar9[1];
            }
            if (fVar12 <= fVar16 * pfVar9[2]) {
              fVar12 = fVar16 * pfVar9[2];
            }
            if (fVar13 <= fVar16 * pfVar9[3]) {
              fVar13 = fVar16 * pfVar9[3];
            }
            lVar8 = lVar6 + -0x1b8;
            if (fVar14 <= fVar16 * pfVar9[4]) {
              fVar14 = fVar16 * pfVar9[4];
            }
          } while ((lVar8 != lVar7 + -0x198) && (bVar1 = iVar10 < iVar4, iVar10 = iVar10 + 1, bVar1)
                  );
        }
        else {
          do {
            fVar16 = param_1;
            if (0.0 <= *(float *)(lVar8 + (long)param_7 * 4 + 0x54)) {
              fVar16 = *(float *)(lVar8 + (long)param_7 * 4 + 0x54);
            }
            uVar5 = iVar10 - 1;
            fVar17 = 0.0;
            if (0.0 <= fVar16) {
              fVar17 = fVar16;
            }
            if (*(uint *)(param_2 + 0x20) <= uVar5) {
              uVar5 = 0;
            }
            lVar6 = *(long *)(lVar6 + 8);
            pfVar9 = (float *)(*(long *)(param_2 + 0x28) + (ulong)uVar5 * 0xa8 +
                              (long)param_7 * 0x18);
            fVar16 = (*(float *)(lVar8 + 0x50) * fVar17) / 255.0;
            if (fVar15 <= fVar16 * *pfVar9) {
              fVar15 = fVar16 * *pfVar9;
            }
            if (fVar11 <= fVar16 * pfVar9[1]) {
              fVar11 = fVar16 * pfVar9[1];
            }
            if (fVar12 <= fVar16 * pfVar9[2]) {
              fVar12 = fVar16 * pfVar9[2];
            }
            if (fVar13 <= fVar16 * pfVar9[3]) {
              fVar13 = fVar16 * pfVar9[3];
            }
            lVar8 = lVar6 + -0x1b8;
            if (fVar14 <= fVar16 * pfVar9[4]) {
              fVar14 = fVar16 * pfVar9[4];
            }
          } while ((lVar8 != lVar7 + -0x198) && (bVar1 = iVar10 < iVar4, iVar10 = iVar10 + 1, bVar1)
                  );
        }
      }
    }
    if (*(char *)(param_2 + 0x8c) != '\0') {
      fVar16 = *(float *)(*(long *)(*(long *)(*(long *)(DAT_05aebb78 + 0x38) + 0x38) +
                                    (long)param_7 * 8 + 0x10) + (long)*(int *)(param_2 + 0x44) * 4);
      fVar17 = fVar14 + fVar13 + fVar12 + fVar11 + fVar15 + 0.0;
      if (fVar16 < fVar17) {
        fVar16 = fVar16 / fVar17;
        fVar15 = fVar15 * fVar16;
        fVar11 = fVar11 * fVar16;
        fVar12 = fVar12 * fVar16;
        fVar13 = fVar13 * fVar16;
        fVar14 = fVar14 * fVar16;
      }
    }
    *(float *)(param_2 + 0x90) = fVar15;
    *(float *)(param_2 + 0x94) = fVar11;
    *(float *)(param_2 + 0x98) = fVar12;
    *(float *)(param_2 + 0x9c) = fVar13;
    *(float *)(param_2 + 0xa0) = fVar14;
    *(undefined4 *)(param_2 + 0xa4) = 0;
    *(undefined1 *)(param_2 + 0xa8) = 1;
    *(long *)(param_2 + 0xb0) = param_4;
    *param_3 = fVar15;
    param_3[1] = fVar11;
    param_3[2] = fVar12;
    param_3[3] = fVar13;
    param_3[4] = fVar14;
    param_3[5] = 0.0;
    if (*(code **)(param_2 + 0xc0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03f24b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_2 + 0xc0))(param_3,param_4,param_5,param_6,param_7);
      return;
    }
  }
  return;
}

