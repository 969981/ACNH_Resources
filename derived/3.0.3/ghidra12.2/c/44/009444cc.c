
void FUN_009444cc(long param_1,int param_2,uint param_3)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
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
  float fVar23;
  float fVar24;
  float local_68;
  float local_64;
  float local_60;
  float local_5c [3];
  float local_48;
  float fStack_44;
  
  fVar8 = *(float *)(param_1 + 0x2c);
  lVar1 = param_1 + 0xe8 + (ulong)param_3 * 0x90;
  if (0x3f < param_3) {
    lVar1 = param_1 + 0xe8;
  }
  fVar7 = fVar8;
  if ((*(byte *)(lVar1 + 0x54) >> 3 & 1) != 0) {
    fVar7 = *(float *)(param_1 + 0x30);
  }
  if (*(char *)(param_1 + 0x4cc3) != '\0') {
    fVar7 = *(float *)(param_1 + 0x4cc4) - *(float *)(param_1 + 0xc);
    bVar2 = false;
    bVar3 = true;
    if (-1.1920929e-07 <= fVar7) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar7)) {
        bVar2 = fVar7 == 1.1920929e-07;
        bVar3 = 1.1920929e-07 <= fVar7;
      }
    }
    if (!bVar3 || bVar2) {
      return;
    }
    if (0.0 <= fVar7) {
      fVar7 = fVar8 * (fVar7 / *(float *)(param_1 + 0x38));
      if (fVar8 < fVar7) {
        fVar7 = fVar8;
      }
    }
    else {
      fVar7 = fVar8;
    }
  }
  local_68 = *(float *)(lVar1 + 0x40);
  local_60 = *(float *)(lVar1 + 0x48);
  fVar8 = SQRT(local_60 * local_60 + local_68 * local_68);
  bVar2 = false;
  bVar3 = true;
  if (-1.1920929e-07 <= fVar8) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar8)) {
      bVar2 = fVar8 == 1.1920929e-07;
      bVar3 = 1.1920929e-07 <= fVar8;
    }
  }
  if (bVar3 && !bVar2) {
    fVar13 = *(float *)(param_1 + 0xc);
    fVar12 = *(float *)(param_1 + 0x38);
    if (*(char *)(param_1 + 0x4cc3) != '\0') {
      fVar13 = 0.01;
      fVar12 = *(float *)(param_1 + 0xc);
    }
    fVar12 = fVar12 + fVar13;
    local_5c[0] = *(float *)(lVar1 + 0x14) - fVar12;
    local_5c[1] = *(float *)(lVar1 + 0x20) - fVar12;
    local_5c[2] = *(float *)(lVar1 + 0x2c) - fVar12;
    if ((((local_5c[0] < 0.0) || (local_5c[1] < 0.0)) || (local_5c[2] < 0.0)) &&
       (((0.0 < local_5c[0] || (0.0 < local_5c[1])) || (0.0 < local_5c[2])))) {
      if ((((0.0 < local_5c[0]) && (local_5c[1] <= 0.0)) && (local_5c[2] <= 0.0)) ||
         (((local_5c[0] < 0.0 && (0.0 <= local_5c[1])) && (0.0 <= local_5c[2])))) {
        bVar3 = false;
        lVar5 = 0;
        lVar4 = 1;
        lVar6 = 2;
        bVar2 = true;
      }
      else if (((0.0 < local_5c[0]) || (local_5c[1] <= 0.0)) || (0.0 < local_5c[2])) {
        if (((local_5c[0] < 0.0) || (0.0 <= local_5c[1])) || (local_5c[2] < 0.0)) {
          lVar4 = 0;
          bVar2 = false;
          bVar3 = false;
          lVar5 = 2;
          lVar6 = 1;
        }
        else {
          lVar5 = 1;
          lVar4 = 0;
          bVar2 = false;
          lVar6 = 2;
          bVar3 = true;
        }
      }
      else {
        lVar4 = 0;
        bVar2 = false;
        bVar3 = true;
        lVar6 = 2;
        lVar5 = 1;
      }
      fVar13 = local_5c[lVar5] - local_5c[lVar4];
      if ((fVar13 < -1.1920929e-07) || (1.1920929e-07 < fVar13)) {
        fVar17 = local_5c[lVar5] - local_5c[lVar6];
        if ((fVar17 < -1.1920929e-07) || (1.1920929e-07 < fVar17)) {
          fVar9 = fVar7 * (1.0 / fVar8);
          fVar13 = -local_5c[lVar4] / fVar13;
          fVar16 = *(float *)(lVar1 + 0x10);
          fVar10 = local_68 * fVar9;
          fVar9 = local_60 * fVar9;
          fVar17 = -local_5c[lVar6] / fVar17;
          if (bVar2) {
            fVar14 = *(float *)(lVar1 + 0x1c) + fVar13 * (fVar16 - *(float *)(lVar1 + 0x1c));
            fVar16 = *(float *)(lVar1 + 0x28) + fVar17 * (fVar16 - *(float *)(lVar1 + 0x28));
            fVar15 = *(float *)(lVar1 + 0x24) +
                     fVar13 * (*(float *)(lVar1 + 0x18) - *(float *)(lVar1 + 0x24));
            fVar13 = *(float *)(lVar1 + 0x30) +
                     fVar17 * (*(float *)(lVar1 + 0x18) - *(float *)(lVar1 + 0x30));
          }
          else {
            fVar15 = *(float *)(lVar1 + 0x18);
            if (bVar3) {
              fVar14 = fVar16 + fVar13 * (*(float *)(lVar1 + 0x1c) - fVar16);
              fVar15 = fVar15 + fVar13 * (*(float *)(lVar1 + 0x24) - fVar15);
              fVar16 = *(float *)(lVar1 + 0x28) +
                       fVar17 * (*(float *)(lVar1 + 0x1c) - *(float *)(lVar1 + 0x28));
              fVar13 = *(float *)(lVar1 + 0x30) +
                       fVar17 * (*(float *)(lVar1 + 0x24) - *(float *)(lVar1 + 0x30));
            }
            else {
              fVar14 = fVar16 + fVar13 * (*(float *)(lVar1 + 0x28) - fVar16);
              fVar15 = fVar15 + fVar13 * (*(float *)(lVar1 + 0x30) - fVar15);
              fVar16 = *(float *)(lVar1 + 0x1c) +
                       fVar17 * (*(float *)(lVar1 + 0x28) - *(float *)(lVar1 + 0x1c));
              fVar13 = *(float *)(lVar1 + 0x24) +
                       fVar17 * (*(float *)(lVar1 + 0x30) - *(float *)(lVar1 + 0x24));
            }
          }
          fVar14 = fVar10 + fVar14;
          fVar15 = fVar9 + fVar15;
          fVar17 = (fVar10 + fVar16) - fVar14;
          fVar20 = (fVar9 + fVar13) - fVar15;
          fVar22 = fVar20 * fVar20 + fVar17 * fVar17;
          bVar2 = false;
          bVar3 = true;
          if (-1.1920929e-07 <= fVar22) {
            bVar2 = false;
            bVar3 = true;
            if (!NAN(fVar22)) {
              bVar2 = fVar22 == 1.1920929e-07;
              bVar3 = 1.1920929e-07 <= fVar22;
            }
          }
          if (bVar3 && !bVar2) {
            fVar18 = *(float *)(param_1 + 8);
            fVar11 = fVar7 * fVar7;
            fVar19 = *(float *)(param_1 + 0x10);
            fVar22 = (fVar20 * (fVar19 - fVar15) + fVar17 * (fVar18 - fVar14)) / fVar22;
            fVar17 = fVar14 + fVar22 * fVar17;
            fVar20 = fVar15 + fVar22 * fVar20;
            fVar23 = fVar17 - fVar18;
            fVar24 = fVar20 - fVar19;
            fVar21 = fVar24 * fVar24 + fVar23 * fVar23;
            if ((fVar21 <= fVar11) && (0.0 <= fVar9 * fVar24 + fVar10 * fVar23)) {
              if (1.0 <= fVar22 || fVar22 <= 0.0) {
                if (param_2 == 1) {
                  fVar8 = (fVar10 + fVar16) - fVar10;
                  fVar13 = (fVar9 + fVar13) - fVar9;
                  fVar17 = (fVar14 - fVar10) - fVar18;
                  fVar16 = (fVar15 - fVar9) - fVar19;
                  fVar18 = fVar8 - fVar18;
                  fVar20 = fVar16 * fVar16 + fVar17 * fVar17;
                  fVar19 = fVar13 - fVar19;
                  fVar22 = fVar19 * fVar19 + fVar18 * fVar18;
                  if (fVar22 <= fVar20) {
                    bVar2 = true;
                    if ((fVar22 <= fVar11) && (bVar2 = false, !NAN(ABS(fVar22 - fVar11)))) {
                      bVar2 = ABS(fVar22 - fVar11) < 0.01;
                    }
                    if (bVar2) {
                      return;
                    }
                    fVar17 = fVar18;
                    if ((((-1.1920929e-07 <= fVar18) && (fVar18 <= 1.1920929e-07)) &&
                        (-1.1920929e-07 <= fVar19)) && (fVar19 <= 1.1920929e-07)) {
                      fVar17 = -local_68;
                      fVar19 = -local_60;
                    }
                  }
                  else {
                    bVar2 = true;
                    if ((fVar20 <= fVar11) && (bVar2 = false, !NAN(ABS(fVar20 - fVar11)))) {
                      bVar2 = ABS(fVar20 - fVar11) < 0.01;
                    }
                    if (bVar2) {
                      return;
                    }
                    if (((-1.1920929e-07 <= fVar17) && (fVar17 <= 1.1920929e-07)) &&
                       ((-1.1920929e-07 <= fVar16 && (fVar16 <= 1.1920929e-07)))) {
                      fVar17 = -local_68;
                      fVar16 = -local_60;
                    }
                    fVar8 = fVar14 - fVar10;
                    fVar13 = fVar15 - fVar9;
                    fVar19 = fVar16;
                  }
                  FUN_00943d50(fVar7,fVar8,fVar13,fVar17,fVar19,param_1 + 8,&fStack_44,&local_48);
                  local_64 = 0.0;
                  local_5c[0] = fStack_44;
                  local_68 = fVar8 - fStack_44;
                  local_60 = fVar13 - local_48;
                  local_5c[2] = local_48;
                  fVar8 = SQRT(local_68 * local_68 + 0.0 + local_60 * local_60);
                  bVar2 = false;
                  bVar3 = true;
                  if (-1.1920929e-07 <= fVar8) {
                    bVar2 = false;
                    bVar3 = true;
                    if (!NAN(fVar8)) {
                      bVar2 = fVar8 == 1.1920929e-07;
                      bVar3 = 1.1920929e-07 <= fVar8;
                    }
                  }
                  if (bVar3 && !bVar2) {
                    fVar7 = 0.0;
                    if (0.0 <= fVar8 + -0.05) {
                      fVar7 = fVar8 + -0.05;
                    }
                    fVar7 = fVar7 / fVar8;
                    local_68 = local_68 * fVar7;
                    local_64 = fVar7 * 0.0;
                    local_60 = local_60 * fVar7;
                  }
                  fVar13 = local_60;
                  fVar7 = local_64;
                  fVar8 = local_68;
                  local_5c[1] = fVar12;
                  FUN_00944200(param_1,param_3,local_5c,&local_68);
                  *(float *)(param_1 + 8) = fVar8 + *(float *)(param_1 + 8);
                  *(float *)(param_1 + 0xc) = fVar7 + *(float *)(param_1 + 0xc);
                  *(float *)(param_1 + 0x10) = fVar13 + *(float *)(param_1 + 0x10);
                  fVar8 = (float)FUN_0097a900(param_1 + 8,0);
                  if (*(float *)(param_1 + 0x4cbc) < fVar8) {
                    *(float *)(param_1 + 0xc) = fVar8;
                  }
                }
              }
              else if (param_2 == 0) {
                local_5c[2] = fVar20 - fVar9;
                local_5c[0] = fVar17 - fVar10;
                local_64 = 0.0;
                fVar7 = (1.0 / fVar8) * SQRT(fVar21) + -0.05;
                fVar8 = 0.0;
                if (0.0 <= fVar7) {
                  fVar8 = fVar7;
                }
                local_68 = local_68 * fVar8;
                local_60 = local_60 * fVar8;
                local_5c[1] = fVar12;
                FUN_00944200(param_1,param_3,local_5c,&local_68);
              }
            }
          }
        }
      }
    }
  }
  return;
}

