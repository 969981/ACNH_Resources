
undefined8 FUN_03c4a4e0(long *param_1)

{
  long *plVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  float *pfVar13;
  long lVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  
  uVar6 = (**(code **)(*param_1 + 0x10))();
  if ((uVar6 & 1) == 0) {
    uVar15 = 0;
  }
  else {
    lVar9 = 0;
    uVar15 = 0;
    do {
      fVar35 = (float)(&DAT_041e9244)[lVar9 * 2];
      pfVar13 = (float *)((long)param_1 + lVar9 * 4 + 0xd0);
      *pfVar13 = fVar35;
      piVar8 = (int *)((long)param_1 + lVar9 * 0x18 + 0x24);
      lVar7 = (long)*piVar8;
      if ((long *)param_1[lVar9 * 3 + 3] != param_1 + lVar9 * 3 + 2) {
        lVar12 = param_1[lVar9 * 3 + 3] - lVar7;
        lVar11 = lVar12 + lVar7;
        do {
          fVar16 = *(float *)(lVar12 + 0x10) - fVar35;
          lVar11 = *(long *)(lVar11 + 8);
          bVar2 = true;
          bVar5 = false;
          if (*(float *)(lVar12 + 0x10) == *(float *)(lVar12 + 0x14)) {
            bVar2 = false;
            bVar5 = true;
            if (!NAN(fVar16)) {
              bVar2 = fVar16 < -1.1920929e-07;
              bVar5 = false;
            }
          }
          bVar3 = false;
          bVar4 = true;
          if (bVar2 == bVar5) {
            bVar3 = false;
            bVar4 = true;
            if (!NAN(fVar16)) {
              bVar3 = fVar16 == 1.1920929e-07;
              bVar4 = 1.1920929e-07 <= fVar16;
            }
          }
          if (!bVar4 || bVar3) {
            plVar1 = (long *)(lVar12 + *piVar8);
            if (*plVar1 != 0) {
              *(long *)(*plVar1 + 8) = plVar1[1];
            }
            if ((long *)plVar1[1] != (long *)0x0) {
              *(long *)plVar1[1] = *plVar1;
            }
            *plVar1 = 0;
            plVar1[1] = 0;
            *(int *)(param_1 + lVar9 * 3 + 4) = (int)param_1[lVar9 * 3 + 4] + -1;
            lVar14 = param_1[1];
            nn::os::LockMutex((MutexType *)(lVar14 + 0xf0));
            plVar1 = (long *)(lVar12 + *(int *)(lVar14 + 0x6c));
            plVar10 = (long *)(lVar14 + 0x58);
            lVar12 = *plVar10;
            *plVar10 = (long)plVar1;
            *plVar1 = lVar12;
            plVar1[1] = (long)plVar10;
            if (lVar12 != 0) {
              *(long **)(lVar12 + 8) = plVar1;
            }
            *(int *)(lVar14 + 0x68) = *(int *)(lVar14 + 0x68) + 1;
            nn::os::UnlockMutex((MutexType *)(lVar14 + 0xf0));
          }
          else {
            FUN_03b77298(lVar12 + 8);
            fVar16 = 0.0;
            if (0.0 <= *(float *)(lVar12 + 0x10)) {
              fVar16 = *(float *)(lVar12 + 0x10);
            }
            if ((&DAT_041e9240)[lVar9 * 2] == 1) {
              fVar16 = fVar16 + *pfVar13;
            }
            else {
              fVar16 = fVar16 * *pfVar13;
            }
            uVar15 = 1;
            *pfVar13 = fVar16;
          }
          lVar12 = lVar11 - lVar7;
        } while (lVar12 != (long)(param_1 + lVar9 * 3 + 2) - lVar7);
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != 8);
    lVar9 = param_1[1];
    fVar34 = *(float *)(param_1 + 0x1c);
    fVar37 = *(float *)((long)param_1 + 0xe4);
    fVar17 = *(float *)(lVar9 + 8);
    fVar28 = *(float *)(lVar9 + 0x10);
    fVar35 = *(float *)(lVar9 + 0x40);
    fVar16 = *(float *)(lVar9 + 0x44);
    fVar18 = *(float *)(lVar9 + 0xc);
    fVar19 = *(float *)(lVar9 + 0x14);
    fVar36 = *(float *)(param_1 + 0x1d);
    fVar39 = *(float *)((long)param_1 + 0xec);
    fVar29 = *(float *)(lVar9 + 0x18);
    fVar20 = *(float *)(lVar9 + 0x1c);
    fVar30 = *(float *)(lVar9 + 0x20);
    fVar21 = *(float *)(lVar9 + 0x24);
    fVar31 = *(float *)(lVar9 + 0x28);
    fVar22 = *(float *)(lVar9 + 0x2c);
    fVar32 = *(float *)(lVar9 + 0x30);
    fVar23 = *(float *)(lVar9 + 0x34);
    fVar24 = *(float *)(lVar9 + 0x38);
    fVar33 = *(float *)(lVar9 + 0x3c);
    fVar25 = *(float *)(param_1 + 0x1a);
    fVar26 = *(float *)((long)param_1 + 0xd4);
    fVar27 = *(float *)(param_1 + 0x1b);
    fVar38 = *(float *)((long)param_1 + 0xdc);
    lVar9 = (**(code **)(*param_1 + 0x18))(param_1);
    if (lVar9 != 0) {
      if (fVar39 <= fVar16) {
        fVar16 = fVar39;
      }
      if (fVar35 <= fVar39) {
        fVar35 = fVar16;
      }
      if (fVar36 <= fVar33) {
        fVar33 = fVar36;
      }
      if (fVar24 <= fVar36) {
        fVar24 = fVar33;
      }
      if (fVar37 <= fVar23) {
        fVar23 = fVar37;
      }
      if (fVar32 <= fVar37) {
        fVar32 = fVar23;
      }
      if (fVar34 <= fVar22) {
        fVar22 = fVar34;
      }
      if (fVar31 <= fVar34) {
        fVar31 = fVar22;
      }
      if (fVar38 <= fVar21) {
        fVar21 = fVar38;
      }
      if (fVar30 <= fVar38) {
        fVar30 = fVar21;
      }
      if (fVar27 <= fVar20) {
        fVar20 = fVar27;
      }
      if (fVar29 <= fVar27) {
        fVar29 = fVar20;
      }
      if (fVar26 <= fVar19) {
        fVar19 = fVar26;
      }
      if (fVar28 <= fVar26) {
        fVar28 = fVar19;
      }
      if (fVar25 <= fVar18) {
        fVar18 = fVar25;
      }
      if (fVar17 <= fVar25) {
        fVar17 = fVar18;
      }
      if (0.0 <= fVar17) {
        *(float *)(lVar9 + 8) = fVar17;
      }
      *(float *)(lVar9 + 0x10) = fVar28;
      *(float *)(lVar9 + 0x14) = fVar29;
      *(float *)(lVar9 + 0x18) = fVar30;
      *(float *)(lVar9 + 0x1c) = fVar31;
      if (0.0 <= fVar32) {
        *(float *)(lVar9 + 0x20) = fVar32;
      }
      *(float *)(lVar9 + 0x28) = fVar24;
      *(float *)(lVar9 + 0x38) = fVar35;
    }
  }
  return uVar15;
}

