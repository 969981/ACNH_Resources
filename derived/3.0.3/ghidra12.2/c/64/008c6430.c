
void FUN_008c6430(long param_1,float *param_2)

{
  bool bVar1;
  float *pfVar2;
  long *plVar3;
  int iVar4;
  bool bVar5;
  float *pfVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
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
  float fVar23;
  
  pfVar2 = (float *)(param_1 + 0x30970);
  iVar4 = *(int *)(param_1 + 0x358);
  fVar11 = *pfVar2;
  fVar13 = *(float *)(param_1 + 0x3097c);
  bVar1 = 1 < (long)iVar4;
  bVar5 = *(char *)(param_1 + 0x37fae) != '\0';
  if ((fVar11 <= fVar13) && (*(float *)(param_1 + 0x30974) <= *(float *)(param_1 + 0x30980))) {
    if (*(float *)(param_1 + 0x30978) <= *(float *)(param_1 + 0x30984)) {
      *(undefined4 *)(param_1 + 0x30980) = 0xff7fffff;
      *(undefined4 *)(param_1 + 0x30974) = 0x7f7fffff;
      fVar12 = (fVar11 + fVar13) * 0.5;
      fVar14 = (*(float *)(param_1 + 0x30978) + *(float *)(param_1 + 0x30984)) * 0.5 + -5.0;
      fVar13 = -3.4028235e+38;
      if (bVar1 && bVar5) {
        fVar13 = fVar12 + 32.5;
      }
      fVar11 = 3.4028235e+38;
      if (bVar1 && bVar5) {
        fVar11 = fVar12 + -32.5;
      }
      *pfVar2 = fVar11;
      fVar12 = 3.4028235e+38;
      if (bVar1 && bVar5) {
        fVar12 = fVar14 + -30.0;
      }
      *(float *)(param_1 + 0x30978) = fVar12;
      *(float *)(param_1 + 0x3097c) = fVar13;
      fVar12 = -3.4028235e+38;
      if (bVar1 && bVar5) {
        fVar12 = fVar14 + 30.0;
      }
      *(float *)(param_1 + 0x30984) = fVar12;
    }
  }
  uVar7 = (ulong)(*(uint *)(param_1 + 0x315d4) >> 0x14) & 0xff0;
  fVar12 = (float)(*(uint *)(param_1 + 0x315d4) & 0xffffff) * 5.9604645e-08;
  fVar14 = *(float *)((long)&DAT_04199798 + uVar7) +
           fVar12 * *(float *)((long)&DAT_0419979c + uVar7);
  fVar20 = *(float *)((long)&DAT_041997a0 + uVar7) +
           fVar12 * *(float *)((long)&DAT_041997a4 + uVar7);
  fVar12 = -(*(float *)((long)&DAT_0419979c + uVar7) * fVar12) -
           *(float *)((long)&DAT_04199798 + uVar7);
  fVar22 = fVar14 * 0.0;
  fVar21 = fVar20 * 0.0;
  fVar14 = fVar14 + 0.0;
  fVar23 = fVar22 * 0.0 + 1.0;
  if ((param_2 == (float *)0x0) || (*(char *)(param_1 + 0x37faf) == '\0')) {
    plVar8 = *(long **)(param_1 + 0x360);
    plVar3 = plVar8 + iVar4;
    lVar9 = *(long *)(param_1 + 0x38028);
    if (lVar9 != 0) {
      fVar18 = *(float *)(lVar9 + 0x3c);
      fVar19 = *(float *)(lVar9 + 0x40);
      fVar16 = *(float *)(lVar9 + 0x44);
      fVar17 = fVar22 * fVar19 + fVar18 * fVar20 + fVar16 * fVar14;
      fVar15 = fVar23 * fVar19 + fVar18 * fVar21 + fVar16 * fVar22;
      if (fVar17 < fVar11) {
        *pfVar2 = fVar17;
        fVar11 = fVar17;
      }
      fVar16 = fVar21 * fVar19 + fVar18 * fVar12 + fVar16 * fVar20;
      if (fVar15 < *(float *)(param_1 + 0x30974)) {
        *(float *)(param_1 + 0x30974) = fVar15;
      }
      if (fVar16 < *(float *)(param_1 + 0x30978)) {
        *(float *)(param_1 + 0x30978) = fVar16;
      }
      if (fVar13 < fVar17) {
        *(float *)(param_1 + 0x3097c) = fVar17;
        fVar13 = fVar17;
      }
      if (*(float *)(param_1 + 0x30980) < fVar15) {
        *(float *)(param_1 + 0x30980) = fVar15;
      }
      if (*(float *)(param_1 + 0x30984) < fVar16) {
        *(float *)(param_1 + 0x30984) = fVar16;
      }
      if (iVar4 != 0) {
        lVar9 = *plVar8;
        while (*(int *)(lVar9 + 0x2c) == 1) {
          plVar8 = plVar8 + 1;
          lVar9 = *plVar8;
        }
      }
    }
    if (plVar8 != plVar3) {
      do {
        plVar10 = plVar8 + 1;
        if ((char)((long *)*plVar8)[5] != '\0') {
          pfVar6 = (float *)(**(code **)(*(long *)*plVar8 + 0x20))();
          fVar13 = *pfVar6;
          fVar17 = pfVar6[1];
          fVar16 = pfVar6[2];
          fVar15 = fVar22 * fVar17 + fVar13 * fVar20 + fVar16 * fVar14;
          fVar11 = *pfVar2;
          if (fVar15 < *pfVar2) {
            *pfVar2 = fVar15;
            fVar11 = fVar15;
          }
          fVar18 = fVar23 * fVar17 + fVar13 * fVar21 + fVar16 * fVar22;
          if (fVar18 < *(float *)(param_1 + 0x30974)) {
            *(float *)(param_1 + 0x30974) = fVar18;
          }
          fVar16 = fVar21 * fVar17 + fVar13 * fVar12 + fVar16 * fVar20;
          if (fVar16 < *(float *)(param_1 + 0x30978)) {
            *(float *)(param_1 + 0x30978) = fVar16;
          }
          fVar13 = *(float *)(param_1 + 0x3097c);
          if (*(float *)(param_1 + 0x3097c) < fVar15) {
            *(float *)(param_1 + 0x3097c) = fVar15;
            fVar13 = fVar15;
          }
          if (*(float *)(param_1 + 0x30980) < fVar18) {
            *(float *)(param_1 + 0x30980) = fVar18;
          }
          if (*(float *)(param_1 + 0x30984) < fVar16) {
            *(float *)(param_1 + 0x30984) = fVar16;
          }
        }
        lVar9 = *plVar8;
        plVar8 = plVar10;
      } while (*(char *)(lVar9 + 0x29) == '\0' && plVar10 != plVar3);
    }
    if (fVar13 < fVar11) {
      return;
    }
    if (*(float *)(param_1 + 0x30980) < *(float *)(param_1 + 0x30974)) {
      return;
    }
    fVar23 = *(float *)(param_1 + 0x30978);
    fVar15 = *(float *)(param_1 + 0x30984);
    if (fVar15 < fVar23 || (!bVar1 || !bVar5)) {
      return;
    }
    if (param_2 != (float *)0x0) {
      fVar16 = (fVar13 + fVar11) * 0.5;
      fVar17 = 0.0;
      fVar11 = (*(float *)(param_1 + 0x30974) + *(float *)(param_1 + 0x30980)) * 0.5;
      fVar18 = (fVar23 + fVar15) * 0.5;
      fVar15 = fVar11 + 0.0;
      fVar13 = fVar16 + -32.5;
      fVar16 = fVar16 + 32.5;
      fVar23 = fVar18 + -30.0;
      *pfVar2 = fVar13;
      *(float *)(param_1 + 0x30974) = fVar11;
      fVar18 = fVar18 + 30.0;
      *(float *)(param_1 + 0x30978) = fVar23;
      *(float *)(param_1 + 0x3097c) = fVar16;
      *(float *)(param_1 + 0x30980) = fVar15;
      *(float *)(param_1 + 0x30984) = fVar18;
      fVar14 = fVar22 * param_2[1] + *param_2 * fVar20 + param_2[2] * fVar14;
      fVar12 = fVar21 * param_2[1] + *param_2 * fVar12 + param_2[2] * fVar20;
      fVar11 = 0.0;
      if (fVar16 < fVar14) {
        fVar11 = fVar14 - fVar16;
      }
      if (fVar14 < fVar13) {
        fVar11 = fVar14 - fVar13;
      }
      if (fVar23 <= fVar12) {
        if (fVar18 < fVar12) {
          fVar17 = fVar12 - fVar18;
        }
      }
      else {
        fVar17 = fVar12 - fVar23;
      }
      *pfVar2 = fVar13 + fVar11;
      *(float *)(param_1 + 0x30974) = fVar15;
      fVar23 = fVar23 + fVar17;
      *(float *)(param_1 + 0x3097c) = fVar16 + fVar11;
      *(float *)(param_1 + 0x30980) = fVar15;
      fVar15 = fVar18 + fVar17;
    }
  }
  else {
    fVar17 = *param_2;
    fVar18 = param_2[1];
    fVar15 = param_2[2];
    fVar16 = fVar22 * fVar18 + fVar17 * fVar20 + fVar15 * fVar14;
    fVar14 = fVar23 * fVar18 + fVar17 * fVar21 + fVar15 * fVar22;
    if (fVar16 < fVar11) {
      *pfVar2 = fVar16;
    }
    fVar15 = fVar21 * fVar18 + fVar17 * fVar12 + fVar15 * fVar20;
    if (fVar14 < *(float *)(param_1 + 0x30974)) {
      *(float *)(param_1 + 0x30974) = fVar14;
    }
    fVar23 = fVar15;
    if (*(float *)(param_1 + 0x30978) <= fVar15) {
      fVar23 = *(float *)(param_1 + 0x30978);
    }
    if (fVar13 < fVar16) {
      *(float *)(param_1 + 0x3097c) = fVar16;
    }
    if (*(float *)(param_1 + 0x30980) < fVar14) {
      *(float *)(param_1 + 0x30980) = fVar14;
    }
    if (fVar15 <= *(float *)(param_1 + 0x30984)) {
      fVar15 = *(float *)(param_1 + 0x30984);
    }
  }
  *(float *)(param_1 + 0x30978) = fVar23 + 5.0;
  *(float *)(param_1 + 0x30984) = fVar15 + 5.0;
  return;
}

