
undefined8 FUN_03a35190(long param_1,uint *param_2,float *param_3)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  float fVar6;
  int *piVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  float *pfVar13;
  ulong uVar14;
  float *pfVar15;
  long *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar4 == 0) {
    uVar3 = nn::os::GetCurrentCoreNumber();
  }
  else {
    uVar3 = (int)lVar4 - 1;
  }
  piVar7 = (int *)(*(long *)(param_1 + 0x310) + (long)(int)uVar3 * 0x220);
  if (*(uint *)(param_1 + 0x308) <= uVar3) {
    piVar7 = (int *)0x0;
  }
  if (0 < *piVar7) {
    lVar4 = 0;
    puVar8 = *(undefined8 **)(piVar7 + 4);
    do {
      puVar9 = *(undefined8 **)(*(long *)(piVar7 + 2) + lVar4 * 8);
      lVar4 = lVar4 + 1;
      *puVar9 = puVar8;
      *(undefined8 **)(piVar7 + 4) = puVar9;
      puVar8 = puVar9;
    } while (lVar4 < *piVar7);
  }
  *piVar7 = 0;
  fVar19 = (float)(uint)*(ushort *)(*(long *)(param_1 + 0x250) + 0x6a);
  if (fVar19 != 0.0) {
    fVar6 = 0.0;
    do {
      lVar4 = *(long *)(param_1 + 0x300);
      fVar22 = *param_3;
      fVar25 = param_3[1];
      fVar23 = param_3[2];
      fVar24 = fVar6;
      if ((uint)*(float *)(param_1 + 0x2f8) <= (uint)fVar6) {
        fVar24 = 0.0;
      }
      pfVar13 = (float *)(lVar4 + (ulong)(uint)fVar24 * 0x3c);
      fVar17 = pfVar13[1] * fVar25 + fVar22 * *pfVar13 + fVar23 * pfVar13[2] + pfVar13[3];
      fVar18 = -fVar17;
      if (0.0 <= fVar17) {
        fVar18 = fVar17;
      }
      fVar17 = pfVar13[0xc];
      if (fVar18 <= fVar17) {
        fVar20 = pfVar13[0xb] + fVar25 * pfVar13[9] + fVar22 * pfVar13[8] + fVar23 * pfVar13[10];
        fVar21 = -fVar20;
        if (0.0 <= fVar20) {
          fVar21 = fVar20;
        }
        fVar20 = *(float *)(lVar4 + (ulong)(uint)fVar24 * 0x3c + 0x38);
        if (fVar21 <= fVar20) {
          fVar23 = pfVar13[7] + fVar25 * pfVar13[5] + fVar22 * pfVar13[4] + fVar23 * pfVar13[6];
          fVar22 = -fVar23;
          if (0.0 <= fVar23) {
            fVar22 = fVar23;
          }
          fVar24 = *(float *)(lVar4 + (ulong)(uint)fVar24 * 0x3c + 0x34);
          if (fVar22 <= fVar24) {
            pfVar13 = *(float **)(piVar7 + 4);
            if (pfVar13 != (float *)0x0) {
              *(undefined8 *)(piVar7 + 4) = *(undefined8 *)pfVar13;
            }
            pfVar13[0] = 0.0;
            pfVar13[1] = -NAN;
            if (*piVar7 < piVar7[1]) {
              *(float **)(*(long *)(piVar7 + 2) + (long)*piVar7 * 8) = pfVar13;
              *piVar7 = *piVar7 + 1;
            }
            fVar17 = fVar17 - fVar18;
            fVar20 = fVar20 - fVar21;
            pfVar13[1] = fVar6;
            fVar24 = fVar24 - fVar22;
            fVar22 = fVar17;
            if (fVar20 <= fVar17) {
              fVar22 = fVar20;
            }
            fVar23 = fVar24;
            if (fVar20 <= fVar24) {
              fVar23 = fVar20;
            }
            if (fVar24 <= fVar17) {
              fVar22 = fVar23;
            }
            *pfVar13 = fVar22;
          }
        }
      }
      fVar6 = (float)((int)fVar6 + 1);
    } while (fVar19 != fVar6);
    iVar1 = *piVar7;
    if (iVar1 != 0) {
      plVar5 = *(long **)(piVar7 + 2);
      if (1 < iVar1) {
        uVar11 = 0;
        uVar3 = iVar1 - 1;
        do {
          if ((int)uVar3 <= (int)uVar11) break;
          pfVar13 = (float *)plVar5[uVar11];
          uVar10 = (ulong)uVar11;
          if ((uVar3 - uVar11 & 1) == 0) {
            pfVar15 = pfVar13;
            uVar12 = uVar10;
          }
          else {
            uVar12 = uVar10 + 1;
            pfVar15 = (float *)plVar5[uVar12];
            if (*pfVar15 < *pfVar13) {
              plVar5[uVar12] = (long)pfVar13;
              plVar5[uVar10] = (long)pfVar15;
              pfVar15 = pfVar13;
            }
          }
          uVar14 = (ulong)uVar3;
          uVar3 = uVar11;
          if (~uVar10 + uVar14 != 0) {
            plVar16 = plVar5 + uVar12 + 1;
            do {
              pfVar13 = (float *)*plVar16;
              if (*pfVar15 <= *pfVar13) {
                pfVar15 = pfVar13;
              }
              else {
                plVar16[-1] = (long)pfVar13;
                *plVar16 = (long)pfVar15;
                uVar3 = (uint)uVar12;
              }
              pfVar13 = (float *)plVar16[1];
              if (*pfVar13 < *pfVar15) {
                uVar3 = (uint)uVar12 + 1;
                *plVar16 = (long)pfVar13;
                plVar16[1] = (long)pfVar15;
              }
              else {
                pfVar15 = pfVar13;
              }
              uVar12 = uVar12 + 2;
              plVar16 = plVar16 + 2;
            } while (uVar14 != uVar12);
          }
          if ((int)uVar3 <= (int)uVar11) break;
          pfVar13 = (float *)plVar5[uVar3];
          uVar12 = (ulong)uVar3;
          uVar11 = uVar3;
          do {
            pfVar15 = (float *)plVar5[uVar12 - 1];
            if (*pfVar13 < *pfVar15) {
              uVar11 = (uint)uVar12;
              plVar5[uVar12 - 1] = (long)pfVar13;
              plVar5[uVar12] = (long)pfVar15;
            }
            else {
              pfVar13 = pfVar15;
            }
            uVar12 = uVar12 - 1;
          } while ((long)uVar10 < (long)uVar12);
        } while (uVar11 != uVar3);
        plVar5 = *(long **)(piVar7 + 2);
      }
      fVar19 = *(float *)*plVar5;
      uVar2 = *(ushort *)
               (*(long *)(*(long *)(param_1 + 0x250) + 0x28) +
                (long)(int)((float *)*plVar5)[1] * 0x60 + 0x52);
      param_2[2] = 0;
      *param_2 = (uint)uVar2;
      param_2[1] = (uint)uVar2;
      uVar10 = (ulong)*piVar7;
      uVar12 = (ulong)(uVar10 != 0);
      if (uVar12 != uVar10) {
        plVar5 = (long *)(*(long *)(piVar7 + 2) + uVar12 * 8);
        lVar4 = uVar10 * 8 + uVar12 * -8;
        do {
          uVar3 = (uint)*(ushort *)
                         (*(long *)(*(long *)(param_1 + 0x250) + 0x28) +
                          (long)*(int *)(*plVar5 + 4) * 0x60 + 0x52);
          if (uVar2 != uVar3) {
            *param_2 = uVar3;
            param_2[2] = (uint)(fVar19 / (fVar19 + *(float *)*plVar5 + 1e-05));
            return 1;
          }
          plVar5 = plVar5 + 1;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
      return 1;
    }
  }
  return 0;
}

