
void FUN_03b97810(float *param_1,void *param_2,void *param_3)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  float *pfVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
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
  
  fVar31 = param_1[2];
  fVar20 = param_1[3];
  pfVar14 = param_1 + 0x3024;
  fVar24 = param_1[9];
  fVar21 = param_1[10];
  pfVar5 = param_1 + 0x1023;
  cVar1 = *(char *)(param_1 + 0x12);
  fVar32 = param_1[0xf];
  fVar30 = *param_1;
  fVar19 = param_1[1];
  fVar25 = param_1[0xb];
  fVar22 = param_1[0xc];
  cVar2 = *(char *)(param_1 + 8);
  fVar33 = param_1[0x13];
  fVar26 = param_1[0x14];
  fVar34 = fVar33 * 0.00048828125;
  fVar27 = param_1[4];
  iVar13 = (int)(param_1[5] / fVar34);
  fVar23 = (fVar26 + -1.0) * param_1[7] + 1.0;
  iVar6 = (int)(param_1[6] / fVar34);
  if (iVar6 < iVar13 + 1) {
    iVar6 = iVar13 + 1;
  }
  pfVar12 = param_1 + 0x822;
  memmove(pfVar12,param_1 + 0xa22,0x1800);
  lVar18 = 0x800;
  memcpy(param_1 + 0xe22,param_2,0x800);
  do {
    lVar18 = lVar18 + -1;
    pfVar12[0x800] = *pfVar12 * pfVar12[-0x800] * 0.7;
    pfVar12 = pfVar12 + 1;
  } while (lVar18 != 0);
  uVar16 = (uint)(fVar19 / fVar34);
  uVar7 = uVar16;
  if (0x3ff < (int)uVar16) {
    uVar7 = 0x400;
  }
  if (cVar1 != '\0') {
    lVar18 = 0;
    do {
      fVar19 = *(float *)((long)param_1 + lVar18 + 0x4088);
      *(float *)((long)param_1 + lVar18 + 0xa090) =
           *(float *)((long)param_1 + lVar18 + 0xa090) + (fVar19 + fVar19) * 0.25;
      lVar18 = lVar18 + 4;
    } while (lVar18 != 0x2000);
    goto LAB_03b97ee0;
  }
  memset(param_1 + 0x1822,0,0x2000);
  memset(param_1 + 0x3424,0,0x4000);
  FUN_03b983d0(param_1 + 0x16,param_1[0x18],1,param_1 + 0x1022,*(undefined8 *)(param_1 + 0x1c),
               *(undefined8 *)(param_1 + 0x20));
  if ((int)uVar16 < 0x400) {
    pfVar12 = param_1 + (long)(int)(uVar7 << 1) + 0x1022;
    uVar9 = uVar16;
    do {
      uVar9 = uVar9 + 1;
      pfVar12[0x801] = fVar31 * pfVar12[1];
      pfVar12[0x800] = fVar31 * *pfVar12;
      pfVar12 = pfVar12 + 2;
    } while (uVar9 != 0x400);
    if (0 < (int)uVar16) goto LAB_03b97aac;
    bVar3 = false;
  }
  else {
LAB_03b97aac:
    uVar17 = 0;
    uVar16 = uVar7;
    if ((int)uVar7 < 2) {
      uVar16 = 1;
    }
    do {
      fVar31 = pfVar5[-1];
      fVar19 = *pfVar5;
      fVar28 = fVar19 * fVar19 + fVar31 * fVar31;
      *pfVar14 = fVar28;
      if (fVar30 * fVar30 < fVar28) {
        pfVar14[0x800] = (fVar20 + fVar20) * SQRT(fVar28);
        fVar19 = atan2f(-fVar19,fVar31);
        fVar28 = (float)(int)uVar17;
        fVar31 = param_1[uVar17 + 0x2022];
        param_1[uVar17 + 0x2022] = fVar19;
        fVar19 = (fVar19 - fVar31) + fVar28 * -1.5707964;
        uVar8 = (uint)(fVar19 * 0.31830987);
        uVar9 = uVar8 & 0xfffffffe;
        if (-1 < (int)uVar8) {
          uVar9 = (uVar8 & 1) + uVar8;
        }
        fVar19 = fVar34 * ((fVar19 + (float)(int)uVar9 * -3.1415927) * 0.63661975 + fVar28);
        pfVar14[0x400] = fVar19;
        if ((long)iVar13 < (long)uVar17) {
          fVar31 = 1.0;
          if ((long)uVar17 < (long)iVar6) {
            fVar31 = param_1[0x14] +
                     ((1.0 - fVar26) / (float)(iVar6 - iVar13)) * (float)((int)uVar17 - iVar13);
          }
        }
        else {
          fVar31 = param_1[0x14];
        }
        fVar31 = fVar19 * fVar31;
        uVar9 = (uint)((1.0 / fVar34) * (fVar34 * 0.5 + fVar31));
        if (0xfffffc00 < uVar9 - 0x400) {
          fVar29 = pfVar14[0x800];
          fVar28 = 1.0 - ((fVar32 + fVar32) / fVar33) * (fVar31 - fVar19);
          fVar19 = 0.1;
          if (0.1 <= fVar28) {
            fVar19 = fVar28;
          }
          fVar28 = param_1[(ulong)uVar9 + 0x4024];
          if (fVar28 <= fVar19 * fVar29) {
            param_1[(ulong)uVar9 + 0x3c24] = fVar31;
          }
          param_1[(ulong)uVar9 + 0x4024] = fVar19 * fVar29 + fVar28;
        }
      }
      uVar17 = uVar17 + 1;
      pfVar5 = pfVar5 + 2;
      pfVar14 = pfVar14 + 1;
    } while (uVar16 != uVar17);
    bVar3 = true;
  }
  if (bVar3) {
    uVar17 = 0;
    iVar6 = 0;
    iVar13 = 0;
    if ((int)uVar7 < 2) {
      uVar7 = 1;
    }
    uVar15 = (ulong)uVar7;
    uVar7 = 1;
    fVar19 = param_1[0xd];
    fVar20 = param_1[0xe];
    iVar11 = (int)(fVar19 / fVar34);
    uVar16 = iVar11 - 1;
    do {
      fVar31 = param_1[uVar17 + 0x4024];
      if (fVar30 < fVar31) {
        iVar10 = (int)uVar17;
        if ((long)uVar17 < (long)(int)(fVar26 * (float)(int)(fVar27 / fVar34))) {
          if ((cVar2 != '\0') && (fVar24 <= fVar31)) {
            fVar32 = fVar21;
            if (param_1[uVar17 + 0x3c24] < fVar22) {
              fVar32 = fVar25;
            }
            if (fVar32 * param_1[uVar17 + 0x4424] <= fVar31) {
              iVar13 = iVar13 + 1;
              goto LAB_03b97db4;
            }
          }
          fVar31 = ((float)iVar10 +
                   (1.0 / fVar34) * (param_1[uVar17 + 0x3c24] - fVar34 * (float)iVar10)) * 1.5707964
                   + param_1[uVar17 + 0x2423];
        }
        else {
LAB_03b97db4:
          fVar31 = param_1[uVar17 + 0x2022];
        }
        param_1[uVar17 + 0x2423] = fVar31;
        if (uVar17 == uVar16) {
          if (((int)(fVar20 * (float)(int)(fVar19 / fVar34)) <= iVar13) &&
             (uVar4 = (ulong)iVar6, (long)uVar4 <= (long)uVar17)) {
            if ((uVar7 - iVar6 & 3) != 0) {
              lVar18 = -uVar4;
              pfVar5 = param_1 + uVar4 + 0x2022;
              uVar16 = uVar7 - iVar6 & 3;
              do {
                lVar18 = lVar18 + -1;
                uVar16 = uVar16 - 1;
                pfVar5[0x401] = *pfVar5;
                pfVar5 = pfVar5 + 1;
              } while (uVar16 != 0);
              uVar4 = -lVar18;
            }
            if (2 < (uint)(iVar10 - iVar6)) {
              pfVar5 = param_1 + uVar4 + 0x2022;
              do {
                uVar16 = (int)uVar4 + 4;
                uVar4 = (ulong)uVar16;
                pfVar5[0x401] = *pfVar5;
                *(undefined8 *)(pfVar5 + 0x402) = *(undefined8 *)(pfVar5 + 1);
                pfVar5[0x404] = pfVar5[3];
                pfVar5 = pfVar5 + 4;
              } while (uVar7 != uVar16);
            }
          }
          iVar13 = 0;
          uVar16 = iVar10 + iVar11;
          iVar6 = iVar10 + 1;
        }
      }
      uVar17 = uVar17 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar17 != uVar15);
    pfVar5 = param_1 + 0x1823;
    pfVar14 = param_1 + 0x4024;
    pfVar12 = param_1 + 0x2423;
    do {
      fVar21 = *pfVar14;
      fVar20 = *pfVar12;
      fVar19 = cosf(fVar20);
      pfVar5[-1] = fVar21 * fVar19;
      fVar19 = sinf(fVar20);
      uVar15 = uVar15 - 1;
      *pfVar5 = -(fVar21 * fVar19);
      pfVar5 = pfVar5 + 2;
      pfVar14 = pfVar14 + 1;
      pfVar12 = pfVar12 + 1;
    } while (uVar15 != 0);
  }
  memcpy(param_1 + 0x4424,param_1 + 0x4024,0x1000);
  FUN_03b983d0(param_1 + 0x16,param_1[0x18],0xffffffff,param_1 + 0x1822,
               *(undefined8 *)(param_1 + 0x1c),*(undefined8 *)(param_1 + 0x20));
  lVar18 = 0x800;
  pfVar5 = param_1 + 0x2824;
  pfVar14 = param_1 + 0x1822;
  do {
    lVar18 = lVar18 + -1;
    *pfVar5 = *pfVar5 + (fVar23 + fVar23) * 0.00024414062 * pfVar14[-0x1800] * *pfVar14;
    pfVar5 = pfVar5 + 1;
    pfVar14 = pfVar14 + 1;
  } while (lVar18 != 0);
LAB_03b97ee0:
  memcpy(param_3,param_1 + 0x2824,0x800);
  memmove(param_1 + 0x2824,param_1 + 0x2a24,0x1800);
  memset(param_1 + 0x2e24,0,0x800);
  return;
}

