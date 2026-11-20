
void FUN_03ef2e30(float param_1,float param_2,long param_3)

{
  long lVar1;
  float *pfVar2;
  uint uVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  float *pfVar10;
  uint uVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  puVar4 = PTR_DAT_04bd0d90;
  uVar3 = *(uint *)(param_3 + 0x70);
  if (uVar3 != 0) {
    lVar12 = *(long *)(param_3 + 0x78);
    fVar13 = 0.0;
    if (param_1 <= 0.0) {
      fVar13 = 1.0;
    }
    uVar11 = 0;
    if (param_1 < 0.0) {
      fVar13 = INFINITY;
    }
    do {
      pfVar2 = (float *)(lVar12 + ((long)((ulong)uVar11 << 0x20) >> 0x1a));
      fVar18 = pfVar2[6];
      fVar14 = pfVar2[7];
      fVar16 = pfVar2[5];
      pfVar10 = pfVar2 + 4;
      fVar15 = *pfVar10;
      fVar17 = fVar15 * fVar15 + fVar14 * fVar14 + fVar16 * fVar16 + fVar18 * fVar18;
      if (1.1920929e-07 < fVar17) {
        fVar17 = 1.0 / fVar17;
        fVar14 = fVar14 * fVar17;
        fVar15 = fVar15 * fVar17;
        fVar16 = fVar16 * fVar17;
        fVar18 = fVar18 * fVar17;
      }
      fVar15 = (-(-fVar15 * *pfVar2) + pfVar2[3] * fVar14) - pfVar2[1] * -fVar16;
      fVar16 = fVar15 - pfVar2[2] * -fVar18;
      fVar15 = -(--fVar18 * pfVar2[2]) - fVar15;
      if (0.0 <= fVar16) {
        fVar15 = fVar16;
      }
      fVar16 = 1.0;
      if (fVar15 <= 1.0) {
        fVar16 = fVar15;
      }
      fVar18 = 0.0;
      if (0.0 <= fVar15) {
        fVar18 = fVar16;
      }
      fVar16 = acosf(fVar18);
      lVar7 = *(long *)(lVar12 + (long)(int)uVar11 * 0x40 + 0x38);
      fVar18 = 1.0 - *(float *)(lVar7 + 0xd0) * param_2;
      fVar15 = 1.0;
      if (fVar18 <= 1.0) {
        fVar15 = fVar18;
      }
      fVar14 = 0.0;
      if (0.0 <= fVar18) {
        fVar14 = fVar15;
      }
      fVar15 = 1.0;
      bVar5 = false;
      bVar6 = true;
      if (-1.1920929e-07 <= fVar14) {
        bVar5 = false;
        bVar6 = true;
        if (!NAN(fVar14)) {
          bVar5 = fVar14 == 1.1920929e-07;
          bVar6 = 1.1920929e-07 <= fVar14;
        }
      }
      if (bVar6 && !bVar5) {
        fVar15 = fVar13;
        if (fVar14 != 0.0) {
          fVar15 = (float)((uint)fVar14 & 0x7fffff | 0x3f800000) + -1.0;
          uVar9 = (ulong)(uint)(int)(fVar15 * 256.0);
          lVar1 = uVar9 * 8;
          fVar15 = (*(float *)(&DAT_0419acb8 + lVar1) +
                    *(float *)(&DAT_0419acbc + lVar1) * (fVar15 * 256.0 - (float)uVar9) +
                   (float)(int)(((uint)fVar14 >> 0x17 & 0xff) - 0x7f) * 0.6931472) * param_1;
          iVar8 = (int)(fVar15 * 1.442695);
          fVar15 = ((fVar15 - (float)iVar8 * 0.6931472) + 0.6931472) * 23.08312;
          uVar9 = (ulong)(uint)(int)fVar15;
          fVar15 = ABS((float)((int)(*(float *)(puVar4 + uVar9 * 8) +
                                    *(float *)((long)(puVar4 + uVar9 * 8) + 4) *
                                    (fVar15 - (float)uVar9)) + iVar8 * 0x800000));
        }
        fVar15 = 1.0 - fVar15;
      }
      fVar16 = fVar16 + fVar16;
      bVar5 = false;
      bVar6 = true;
      if (-1.1920929e-07 <= fVar16) {
        bVar5 = false;
        bVar6 = true;
        if (!NAN(fVar16)) {
          bVar5 = fVar16 == 1.1920929e-07;
          bVar6 = 1.1920929e-07 <= fVar16;
        }
      }
      fVar18 = 1.0;
      if (bVar6 && !bVar5) {
        fVar15 = fVar16 * fVar15;
        fVar14 = *(float *)(lVar7 + 0x110) * param_2 * param_1;
        fVar18 = *(float *)(lVar7 + 0xf0) * param_2 * param_1;
        if (fVar15 <= fVar18) {
          fVar18 = fVar15;
        }
        if (fVar14 <= fVar15) {
          fVar14 = fVar18;
        }
        fVar14 = fVar14 / fVar16;
        fVar15 = 1.0;
        if (fVar14 <= 1.0) {
          fVar15 = fVar14;
        }
        fVar18 = 0.0;
        if (0.0 <= fVar14) {
          fVar18 = fVar15;
        }
      }
      FUN_03951cf4(fVar18,pfVar10,pfVar10,pfVar2);
      fVar15 = *pfVar10;
      fVar16 = pfVar2[5];
      fVar18 = pfVar2[6];
      fVar14 = pfVar2[7];
      fVar17 = SQRT(fVar15 * fVar15 + fVar14 * fVar14 + fVar16 * fVar16 + fVar18 * fVar18);
      if (0.0 < fVar17) {
        fVar17 = 1.0 / fVar17;
        *pfVar10 = fVar15 * fVar17;
        pfVar2[5] = fVar16 * fVar17;
        pfVar2[6] = fVar18 * fVar17;
        pfVar2[7] = fVar14 * fVar17;
      }
      uVar11 = uVar11 + 1;
    } while (uVar3 != uVar11);
  }
  return;
}

