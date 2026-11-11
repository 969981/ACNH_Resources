
void FUN_00395a00(float param_1,long param_2,undefined8 param_3)

{
  float *pfVar1;
  long lVar2;
  long *plVar3;
  ushort uVar4;
  float *pfVar5;
  long lVar6;
  ulong uVar7;
  float *pfVar8;
  ulong uVar9;
  ushort *puVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (*(int *)(param_2 + 0xc0) != 0) {
    uVar9 = 0;
    fVar14 = *(float *)PTR_FloatPi_04bcee68;
    do {
      lVar6 = *(long *)(param_2 + 0xa0);
      lVar2 = *(long *)(param_2 + 0xa8);
      puVar10 = (ushort *)(lVar6 + uVar9 * 0xa0);
      uVar4 = *puVar10;
      if (uVar4 != 0) {
        uVar11 = 0;
        do {
          plVar3 = *(long **)(*(long *)(lVar2 + uVar9 * 0x30 + 0x18) + uVar11 * 8);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x28))(param_1,plVar3,param_3);
            uVar4 = *puVar10;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar4);
      }
      puVar10 = (ushort *)(lVar6 + uVar9 * 0xa0 + 0x10);
      uVar4 = *puVar10;
      if (uVar4 != 0) {
        uVar11 = 0;
        do {
          pfVar1 = (float *)(*(long *)(lVar2 + uVar9 * 0x30 + 0x10) + uVar11 * 0x10);
          lVar6 = *(long *)(pfVar1 + 2);
          if (lVar6 != 0) {
            uVar4 = *(ushort *)(lVar6 + 0x10);
            uVar7 = (ulong)uVar4;
            if (uVar7 == 0 || uVar7 - 1 == 0) {
              fVar12 = *(float *)(lVar6 + 0x18);
            }
            else {
              pfVar8 = *(float **)(lVar6 + 0x18);
              fVar12 = 0.0;
              pfVar5 = pfVar8;
              if (*pfVar8 < param_1) {
                pfVar5 = pfVar8 + (uVar7 - 1) * 8;
                if (*pfVar5 <= param_1) {
                  fVar12 = 1.0;
                  if (((uint)pfVar5[7] & 1) != 0) goto LAB_00395bf0;
                  fVar12 = 1.0;
                  lVar6 = uVar7 * 8 + -0x10;
                }
                else {
                  uVar7 = (ulong)(uVar4 - 1);
                  lVar6 = (ulong)(uVar4 - 2) * 8;
                  pfVar5 = pfVar8;
                  fVar12 = *pfVar8;
                  do {
                    fVar13 = pfVar5[8];
                    if ((fVar12 <= param_1) && (param_1 < fVar13)) {
                      fVar13 = (param_1 - fVar12) / (fVar13 - fVar12);
                      fVar12 = 0.0;
                      if (0.0 <= fVar13) {
                        fVar12 = fVar13;
                      }
                      fVar13 = 1.0;
                      if (fVar12 <= 1.0) {
                        fVar13 = fVar12;
                      }
                      fVar12 = (float)FUN_0038ed60(fVar13,pfVar5);
                      fVar13 = 1.0 - fVar12;
                      fVar12 = fVar12 * fVar12 * fVar12 +
                               pfVar5[2] * fVar13 * fVar12 * fVar12 * 3.0 +
                               fVar13 * fVar12 * 3.0 * fVar13 * pfVar5[4];
                      goto LAB_00395bf0;
                    }
                    pfVar5 = pfVar5 + 8;
                    uVar7 = uVar7 - 1;
                    fVar12 = fVar13;
                  } while (uVar7 != 0);
                  fVar12 = 0.0;
                }
                pfVar5 = pfVar8 + lVar6;
                if (pfVar5 == (float *)0x0) {
                  fVar12 = 0.0;
                  goto LAB_00395bfc;
                }
              }
LAB_00395bf0:
              fVar12 = pfVar5[5] + fVar12 * (pfVar5[6] - pfVar5[5]);
            }
LAB_00395bfc:
            *pfVar1 = fVar12 * 0.5;
            fVar12 = acosf(-2.0 / (fVar12 * 0.5) + 1.0);
            if (0.0 < fVar12) {
              fVar12 = (float)((int)(fVar14 / fVar12) + 1);
            }
            else {
              fVar12 = 1.4013e-45;
            }
            pfVar1[1] = fVar12;
            uVar4 = *puVar10;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar4);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_2 + 0xc0));
  }
  return;
}

