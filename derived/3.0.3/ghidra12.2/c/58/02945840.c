
void FUN_02945840(long param_1)

{
  byte bVar1;
  float *pfVar2;
  long lVar3;
  float *pfVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  byte local_5c [12];
  
  uVar15 = *(undefined4 *)(param_1 + 0x2a8);
  fVar14 = *(float *)(param_1 + 0x2ac);
  uVar16 = *(undefined4 *)(param_1 + 0x2b0);
  FUN_02507c6c(local_5c,7,1,1,0);
  if (local_5c[0] < 8) {
    do {
      pfVar2 = (float *)FUN_0251b3b0(local_5c,0);
      if (pfVar2 != (float *)0x0) {
        fVar8 = *pfVar2 - *(float *)(param_1 + 0x2a8);
        fVar9 = pfVar2[2] - *(float *)(param_1 + 0x2b0);
        fVar8 = SQRT(fVar8 * fVar8 + fVar9 * fVar9);
        lVar3 = FUN_02945728(param_1);
        pfVar4 = (float *)(**(code **)(**(long **)(*(long *)(lVar3 + 0x100) +
                                                  (long)*(int *)(param_1 + 0x2fc) * 8) + 0xf0))();
        if (fVar8 < *pfVar4) {
          fVar10 = *(float *)(param_1 + 0x2a8);
          fVar9 = *(float *)(param_1 + 0x2b0);
          fVar11 = pfVar2[2];
          if (*(int *)(param_1 + 0x28c) == 2) {
            fVar12 = 0.5;
            if (25.0 <= fVar8) {
              fVar12 = 0.75;
            }
            fVar13 = 0.75;
            if (20.0 <= fVar8) {
              fVar13 = fVar12;
            }
          }
          else {
            if (*(int *)(param_1 + 0x28c) != 1) {
              fVar12 = 0.75;
              goto LAB_02945ae0;
            }
            fVar12 = 1.0;
            if (25.0 <= fVar8) {
              fVar12 = 0.75;
            }
            fVar13 = 1.5;
            if (20.0 <= fVar8) {
              fVar13 = fVar12;
            }
          }
          fVar12 = 2.0;
          if (15.0 <= fVar8) {
            fVar12 = fVar13;
          }
          if (fVar8 < 10.0) {
            fVar12 = 2.5;
          }
LAB_02945ae0:
          *(float *)(param_1 + 0x2b4) = fVar10 + ((fVar10 * 2.0 - *pfVar2) - fVar10) * fVar12;
          *(float *)(param_1 + 700) = fVar9 + ((fVar9 * 2.0 - fVar11) - fVar9) * fVar12;
          *(float *)(param_1 + 0x2b8) =
               *(float *)(param_1 + 0x2ac) + fVar12 * (fVar14 - *(float *)(param_1 + 0x2ac));
          return;
        }
      }
      bVar1 = local_5c[0];
      uVar7 = (ulong)local_5c[0];
      if ((7 < local_5c[0]) || (uVar7 == 7)) break;
      pbVar6 = &DAT_0548e169 + uVar7;
      uVar5 = FUN_02507924(local_5c,pbVar6);
      if ((uVar5 & 1) == 0) {
        if (uVar7 == 6) break;
        pbVar6 = &DAT_0548e16a + uVar7;
        uVar5 = FUN_02507924(local_5c,pbVar6);
        if ((uVar5 & 1) == 0) {
          if (uVar7 == 5) break;
          pbVar6 = &DAT_0548e16b + uVar7;
          uVar5 = FUN_02507924(local_5c,pbVar6);
          if ((uVar5 & 1) == 0) {
            if (uVar7 == 4) break;
            pbVar6 = &DAT_0548e16c + uVar7;
            uVar5 = FUN_02507924(local_5c,pbVar6);
            if ((uVar5 & 1) == 0) {
              if (uVar7 == 3) break;
              pbVar6 = &DAT_0548e16d + uVar7;
              uVar5 = FUN_02507924(local_5c,pbVar6);
              if ((uVar5 & 1) == 0) {
                if (uVar7 == 2) break;
                pbVar6 = &DAT_0548e16e + uVar7;
                uVar5 = FUN_02507924(local_5c,pbVar6);
                if ((uVar5 & 1) == 0) {
                  if (uVar7 == 1) break;
                  pbVar6 = &DAT_0548e16f + uVar7;
                  uVar5 = FUN_02507924(local_5c,pbVar6);
                  if ((uVar5 & 1) == 0) {
                    if (bVar1 == 0) break;
                    pbVar6 = &DAT_0548e170 + uVar7;
                    FUN_02507924(local_5c,pbVar6);
                  }
                }
              }
            }
          }
        }
      }
      local_5c[0] = *pbVar6;
    } while (local_5c[0] < 8);
  }
  *(undefined4 *)(param_1 + 0x2b4) = uVar15;
  *(float *)(param_1 + 0x2b8) = fVar14;
  *(undefined4 *)(param_1 + 700) = uVar16;
  return;
}

