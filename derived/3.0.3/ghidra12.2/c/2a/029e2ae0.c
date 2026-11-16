
void FUN_029e2ae0(long param_1,undefined4 *param_2)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  undefined1 uVar4;
  long lVar5;
  bool bVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
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
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  local_58 = *param_2;
  local_54 = param_2[1];
  local_50 = param_2[2];
  local_4c = param_2[3];
  local_44 = param_2[5];
  local_48 = param_2[4];
  FUN_02a069d0(param_1 + 8,&local_58);
  if (*(char *)(param_1 + 0x16d0) != '\0') {
    if (*(int *)(param_1 + 0x16a4) == 0) {
      *(undefined4 *)(param_1 + 0x16c8) = 0;
      fVar8 = 0.0;
    }
    else {
      fVar8 = 0.0;
      if (*(long **)(param_2 + 6) != (long *)0x0) {
        fVar8 = (float)(**(code **)(**(long **)(param_2 + 6) + 0x28))
                                 (*(float *)(param_1 + 0x15d0) * 57.295776);
      }
      fVar13 = 1.0;
      if (fVar8 <= 1.0) {
        fVar13 = fVar8;
      }
      fVar14 = 0.0;
      if (0.0 <= fVar8) {
        fVar14 = fVar13;
      }
      fVar8 = SQRT(1.0 - fVar14);
      if (NAN(fVar8)) {
        fVar8 = sqrtf(1.0 - fVar14);
      }
      *(float *)(param_1 + 0x16c8) = fVar8;
      fVar8 = SQRT(fVar14);
      if (NAN(fVar8)) {
        fVar8 = sqrtf(fVar14);
      }
    }
    *(float *)(param_1 + 0x16cc) = fVar8;
  }
  fVar13 = *(float *)(param_1 + 0x15d8) + *(float *)(param_1 + 0x15e8);
  fVar8 = *(float *)(param_1 + 0x15dc);
  fVar14 = *(float *)(param_1 + 0x15d4);
  fVar16 = *(float *)(param_1 + 0x15e0);
  fVar15 = *(float *)(param_1 + 0x15e4);
  uVar2 = **(uint **)(param_2 + 8);
  if (uVar2 != 0) {
    cVar3 = *(char *)(param_1 + 0x16d1);
    fVar17 = 0.0;
    lVar5 = *(long *)(*(uint **)(param_2 + 8) + 2);
    fVar10 = 1.0;
    if (cVar3 != '\x02') {
      fVar10 = 0.5;
    }
    fVar11 = 0.0;
    if (cVar3 != '\x01') {
      fVar11 = fVar10;
    }
    if (cVar3 == '\x03') {
      fVar18 = 0.0;
      bVar6 = false;
      fVar20 = 0.0;
      fVar21 = 0.0;
      uVar7 = 0;
      fVar22 = 0.0;
      fVar9 = 0.0;
      fVar10 = 1.0;
      do {
        fVar19 = fVar10;
        if (*(char *)(lVar5 + ((long)((ulong)uVar7 << 0x20) >> 0x1a) + 0x24) != '\0') {
          lVar1 = lVar5 + (long)(int)uVar7 * 0x40;
          fVar11 = *(float *)(lVar1 + 4);
          fVar9 = fVar9 + *(float *)(lVar1 + 0x28) * fVar11;
          fVar22 = fVar22 + fVar11;
          fVar18 = fVar18 + fVar11;
          fVar17 = fVar17 + fVar11;
          bVar6 = true;
          fVar20 = fVar20 + *(float *)(lVar1 + 0x3c) * fVar11;
          fVar21 = fVar21 + *(float *)(lVar1 + 0x38) * fVar11;
          fVar19 = 1.0 - fVar11;
          if (fVar10 <= 1.0 - fVar11) {
            fVar19 = fVar10;
          }
        }
        uVar7 = uVar7 + 1;
        fVar10 = fVar19;
      } while (uVar2 != uVar7);
    }
    else {
      fVar18 = 0.0;
      bVar6 = false;
      fVar20 = 0.0;
      fVar21 = 0.0;
      uVar7 = 0;
      fVar22 = 0.0;
      fVar9 = 0.0;
      fVar10 = 1.0;
      do {
        fVar19 = fVar10;
        if (*(char *)(lVar5 + ((long)((ulong)uVar7 << 0x20) >> 0x1a) + 8) != '\0') {
          lVar1 = lVar5 + (long)(int)uVar7 * 0x40;
          fVar12 = *(float *)(lVar1 + 4);
          fVar22 = fVar22 + *(float *)(lVar1 + 0xc) * fVar12;
          fVar9 = fVar9 + fVar11 * fVar12;
          fVar18 = fVar18 + fVar12;
          fVar17 = fVar17 + fVar12;
          bVar6 = true;
          fVar20 = fVar20 + *(float *)(lVar1 + 0x20) * fVar12;
          fVar21 = fVar21 + *(float *)(lVar1 + 0x1c) * fVar12;
          fVar19 = 1.0 - fVar12;
          if (fVar10 <= 1.0 - fVar12) {
            fVar19 = fVar10;
          }
        }
        uVar7 = uVar7 + 1;
        fVar10 = fVar19;
      } while (uVar2 != uVar7);
    }
    if (bVar6) {
      fVar9 = fVar9 / fVar17;
      fVar10 = 1.0;
      if (fVar9 <= 1.0) {
        fVar10 = fVar9;
      }
      fVar11 = 0.0;
      if (0.0 <= fVar9) {
        fVar11 = fVar10;
      }
      fVar10 = SQRT(1.0 - fVar11);
      if (NAN(fVar10)) {
        fVar10 = sqrtf(1.0 - fVar11);
      }
      *(float *)(param_1 + 0x16a8) = fVar10;
      fVar10 = SQRT(fVar11);
      if (NAN(fVar10)) {
        fVar10 = sqrtf(fVar11);
      }
      *(float *)(param_1 + 0x16ac) = fVar10;
      uVar4 = 0;
      fVar17 = fVar17 + fVar19;
      fVar13 = (fVar21 + fVar13 * fVar19) / fVar17;
      fVar8 = (fVar20 + fVar8 * fVar19) / fVar17;
      fVar16 = (fVar18 + fVar16 * fVar19) / fVar17;
      fVar10 = (fVar22 + fVar19 * 0.0) / fVar17;
      fVar14 = (fVar14 * fVar19 + 0.0) / fVar17;
      fVar15 = (fVar15 * fVar19 + 0.0) / fVar17;
      goto LAB_029e2dc0;
    }
  }
  uVar4 = 1;
  fVar10 = 0.0;
LAB_029e2dc0:
  *(float *)(param_1 + 0x16c0) = fVar16;
  *(float *)(param_1 + 0x16b0) = fVar10;
  *(float *)(param_1 + 0x16b4) = fVar13;
  *(float *)(param_1 + 0x16b8) = fVar8;
  *(float *)(param_1 + 0x16bc) = fVar14;
  *(float *)(param_1 + 0x16c4) = fVar15;
  *(undefined1 *)(param_1 + 0x16d2) = uVar4;
  return;
}

