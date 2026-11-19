
float FUN_03b74750(float param_1,long param_2)

{
  float *pfVar1;
  long *plVar2;
  int iVar3;
  float *pfVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((0.0 <= param_1) && (*(int *)(param_2 + 0x70) != 0)) {
    plVar2 = (long *)(param_2 + 0x60);
    if ((long *)*plVar2 != plVar2) {
      lVar6 = (long)*(int *)(param_2 + 0x74);
      pfVar4 = (float *)(*plVar2 - lVar6);
      do {
        fVar9 = *pfVar4;
        if (fVar9 <= param_1) {
          plVar7 = *(long **)((long)pfVar4 + lVar6 + 8);
          pfVar1 = (float *)((long)plVar7 + -lVar6);
          if (plVar7 == plVar2 || pfVar1 == (float *)0x0) {
            return pfVar4[1];
          }
          fVar12 = pfVar4[3];
          if (fVar12 < 0.0) {
            return 0.0;
          }
          fVar11 = pfVar4[1];
          if (param_1 - fVar9 == 0.0) {
            return fVar11;
          }
          if (*pfVar1 - fVar9 == 0.0) {
            return pfVar1[1];
          }
          if (5 < (uint)pfVar4[2]) {
            return 0.0;
          }
          fVar10 = pfVar1[1] - fVar11;
          fVar9 = (param_1 - fVar9) / (*pfVar1 - fVar9);
          switch(pfVar4[2]) {
          case 0.0:
            return fVar11 + fVar9 * fVar10;
          case 2.8026e-45:
            fVar12 = 1.0 / fVar12;
            if (fVar9 != 0.0) {
              fVar8 = (float)((uint)fVar9 & 0x7fffff | 0x3f800000) + -1.0;
              uVar5 = (ulong)(uint)(int)(fVar8 * 256.0);
              fVar12 = fVar12 * (*(float *)(PTR_DAT_04bd0d98 + uVar5 * 8) +
                                 *(float *)((long)(PTR_DAT_04bd0d98 + uVar5 * 8) + 4) *
                                 (fVar8 * 256.0 - (float)uVar5) +
                                (float)(int)(((uint)fVar9 >> 0x17 & 0xff) - 0x7f) * 0.6931472);
              iVar3 = (int)(fVar12 * 1.442695);
              fVar9 = ((fVar12 - (float)iVar3 * 0.6931472) + 0.6931472) * 23.08312;
              uVar5 = (ulong)(uint)(int)fVar9;
              return fVar11 + fVar10 * ABS((float)((int)(*(float *)(PTR_DAT_04bd0d90 + uVar5 * 8) +
                                                        *(float *)((long)(PTR_DAT_04bd0d90 +
                                                                         uVar5 * 8) + 4) *
                                                        (fVar9 - (float)uVar5)) + iVar3 * 0x800000))
              ;
            }
            fVar9 = 1.0;
            if (fVar12 < 0.0) {
              fVar9 = INFINITY;
            }
            fVar8 = 0.0;
            if (fVar12 <= 0.0) {
              fVar8 = fVar9;
            }
            return fVar11 + fVar10 * fVar8;
          case 4.2039e-45:
            fVar9 = sinf(fVar9 * 1.5707964);
            if (fVar12 != 1.0) {
              if (fVar9 == 0.0) {
                fVar8 = 1.0;
                if (fVar12 < 0.0) {
                  fVar8 = INFINITY;
                }
                fVar9 = 0.0;
                if (fVar12 <= 0.0) {
                  fVar9 = fVar8;
                }
              }
              else {
                fVar8 = (float)((uint)fVar9 & 0x7fffff | 0x3f800000) + -1.0;
                uVar5 = (ulong)(uint)(int)(fVar8 * 256.0);
                fVar12 = (*(float *)(PTR_DAT_04bd0d98 + uVar5 * 8) +
                          *(float *)((long)(PTR_DAT_04bd0d98 + uVar5 * 8) + 4) *
                          (fVar8 * 256.0 - (float)uVar5) +
                         (float)(int)(((uint)fVar9 >> 0x17 & 0xff) - 0x7f) * 0.6931472) * fVar12;
                iVar3 = (int)(fVar12 * 1.442695);
                fVar9 = ((fVar12 - (float)iVar3 * 0.6931472) + 0.6931472) * 23.08312;
                uVar5 = (ulong)(uint)(int)fVar9;
                fVar9 = ABS((float)((int)(*(float *)(PTR_DAT_04bd0d90 + uVar5 * 8) +
                                         *(float *)((long)(PTR_DAT_04bd0d90 + uVar5 * 8) + 4) *
                                         (fVar9 - (float)uVar5)) + iVar3 * 0x800000));
              }
            }
            return fVar11 + fVar10 * fVar9;
          case 5.60519e-45:
            fVar9 = cosf(fVar9 * 1.5707964);
            if (1.0 < fVar12) {
              if (fVar9 == 0.0) {
                fVar8 = 1.0;
                if (fVar12 < 0.0) {
                  fVar8 = INFINITY;
                }
                fVar9 = 0.0;
                if (fVar12 <= 0.0) {
                  fVar9 = fVar8;
                }
              }
              else {
                fVar8 = (float)((uint)fVar9 & 0x7fffff | 0x3f800000) + -1.0;
                uVar5 = (ulong)(uint)(int)(fVar8 * 256.0);
                fVar12 = (*(float *)(PTR_DAT_04bd0d98 + uVar5 * 8) +
                          *(float *)((long)(PTR_DAT_04bd0d98 + uVar5 * 8) + 4) *
                          (fVar8 * 256.0 - (float)uVar5) +
                         (float)(int)(((uint)fVar9 >> 0x17 & 0xff) - 0x7f) * 0.6931472) * fVar12;
                iVar3 = (int)(fVar12 * 1.442695);
                fVar9 = ((fVar12 - (float)iVar3 * 0.6931472) + 0.6931472) * 23.08312;
                uVar5 = (ulong)(uint)(int)fVar9;
                fVar9 = ABS((float)((int)(*(float *)(PTR_DAT_04bd0d90 + uVar5 * 8) +
                                         *(float *)((long)(PTR_DAT_04bd0d90 + uVar5 * 8) + 4) *
                                         (fVar9 - (float)uVar5)) + iVar3 * 0x800000));
              }
            }
            return fVar11 + fVar10 * (1.0 - fVar9);
          case 7.00649e-45:
            return fVar11;
          }
          if (fVar9 != 0.0) {
            fVar8 = (float)((uint)fVar9 & 0x7fffff | 0x3f800000) + -1.0;
            uVar5 = (ulong)(uint)(int)(fVar8 * 256.0);
            fVar12 = (*(float *)(PTR_DAT_04bd0d98 + uVar5 * 8) +
                      *(float *)((long)(PTR_DAT_04bd0d98 + uVar5 * 8) + 4) *
                      (fVar8 * 256.0 - (float)uVar5) +
                     (float)(int)(((uint)fVar9 >> 0x17 & 0xff) - 0x7f) * 0.6931472) * fVar12;
            iVar3 = (int)(fVar12 * 1.442695);
            fVar9 = ((fVar12 - (float)iVar3 * 0.6931472) + 0.6931472) * 23.08312;
            uVar5 = (ulong)(uint)(int)fVar9;
            return fVar11 + fVar10 * ABS((float)((int)(*(float *)(PTR_DAT_04bd0d90 + uVar5 * 8) +
                                                      *(float *)((long)(PTR_DAT_04bd0d90 + uVar5 * 8
                                                                       ) + 4) *
                                                      (fVar9 - (float)uVar5)) + iVar3 * 0x800000));
          }
          fVar9 = 1.0;
          if (fVar12 < 0.0) {
            fVar9 = INFINITY;
          }
          fVar8 = 0.0;
          if (fVar12 <= 0.0) {
            fVar8 = fVar9;
          }
          return fVar11 + fVar10 * fVar8;
        }
        pfVar4 = (float *)(*(long *)((long)pfVar4 + lVar6) + -lVar6);
      } while (pfVar4 != (float *)((long)plVar2 - lVar6));
    }
  }
  return 0.0;
}

