
void FUN_0093e140(long param_1,float *param_2,float *param_3,float *param_4,undefined4 param_5,
                 undefined4 param_6,undefined8 param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  int iVar7;
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
  float local_140;
  float fStack_13c;
  float local_138;
  float local_130;
  float fStack_12c;
  float local_128;
  float local_120;
  float fStack_11c;
  float local_118;
  float local_114;
  float fStack_110;
  float local_10c;
  float local_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  
  fVar18 = *param_2;
  fVar19 = param_2[1];
  fVar8 = param_2[2];
  fVar21 = 10.0;
  if (fVar18 <= fVar8) {
    fVar21 = 5.0;
  }
  fVar9 = 5.0;
  if (fVar18 <= fVar8) {
    fVar9 = 10.0;
  }
  bVar2 = false;
  bVar3 = true;
  if (-1.1920929e-07 <= fVar19) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar19)) {
      bVar2 = fVar19 == 1.1920929e-07;
      bVar3 = 1.1920929e-07 <= fVar19;
    }
  }
  if ((bVar3 && !bVar2) &&
     (fVar10 = *(float *)(param_1 + 8) - *param_4, fVar20 = *(float *)(param_1 + 0x10) - param_4[2],
     fVar11 = *(float *)(param_1 + 0x34),
     SQRT(fVar20 * fVar20 + fVar10 * fVar10) <=
     SQRT(fVar8 * 0.5 * fVar8 * 0.5 + fVar18 * 0.5 * fVar18 * 0.5) + fVar11)) {
    bVar2 = true;
    do {
      bVar3 = bVar2;
      fVar10 = *param_4;
      fVar20 = param_4[2];
      if (fVar18 <= fVar8) {
        if (bVar3) {
          fVar12 = -10.0;
        }
        else {
          fVar12 = 10.0;
        }
        fVar20 = fVar20 + fVar12;
      }
      else if (bVar3) {
        fVar10 = fVar10 + -10.0;
      }
      else {
        fVar10 = fVar10 + 10.0;
      }
      fVar23 = param_4[1];
      fVar12 = sinf(*param_3);
      fVar13 = sinf(param_3[1]);
      fVar14 = sinf(param_3[2]);
      fVar15 = cosf(*param_3);
      fVar16 = cosf(param_3[1]);
      fVar17 = cosf(param_3[2]);
      local_c8 = fVar21 * fVar14 * fVar16;
      local_b8 = -(fVar13 * fVar21);
      fStack_b4 = fVar19 * fVar12 * fVar16;
      local_d8 = fVar21 * fVar16 * fVar17;
      fStack_c4 = fVar19 * (fVar15 * fVar17 + fVar14 * fVar12 * fVar13);
      fStack_d4 = fVar19 * (fVar12 * fVar13 * fVar17 - fVar14 * fVar15);
      local_c0 = fVar9 * (-(fVar12 * fVar17) + fVar13 * fVar14 * fVar15);
      local_d0 = fVar9 * (fVar12 * fVar14 + fVar13 * fVar15 * fVar17);
      local_b0 = fVar9 * fVar15 * fVar16;
      fStack_cc = fVar10;
      fStack_bc = fVar23;
      fStack_ac = fVar20;
      uVar6 = FUN_007535b4(&local_108,&local_d8);
      if ((uVar6 & 1) != 0) {
        fVar20 = fStack_fc +
                 *(float *)(param_1 + 0xc) * fStack_104 + *(float *)(param_1 + 8) * local_108 +
                 *(float *)(param_1 + 0x10) * local_100;
        fVar10 = -fVar20;
        if (0.0 <= fVar20) {
          fVar10 = fVar20;
        }
        if (fVar10 <= (fVar11 + fVar21 * 0.5) / fVar21) {
          fVar12 = fStack_dc +
                   *(float *)(param_1 + 0xc) * fStack_e4 + *(float *)(param_1 + 8) * local_e8 +
                   *(float *)(param_1 + 0x10) * local_e0;
          fVar10 = -fVar12;
          if (0.0 <= fVar12) {
            fVar10 = fVar12;
          }
          if (fVar10 <= (fVar11 + fVar9 * 0.5) / fVar9) {
            iVar7 = 0;
            do {
              if (iVar7 == 2) {
                fVar10 = -0.5;
                fVar13 = 0.5;
                fVar14 = fVar20;
joined_r0x0093e490:
                fVar15 = -0.5;
                if (fVar14 < -0.43) goto LAB_0093e4f4;
              }
              else {
                if (iVar7 == 1) {
                  fVar10 = 0.5;
                  fVar13 = -0.5;
                  fVar14 = fVar20;
                }
                else {
                  if (iVar7 == 0) {
                    fVar13 = -0.5;
                    fVar10 = 0.5;
                    fVar14 = fVar12;
                    goto joined_r0x0093e490;
                  }
                  fVar13 = 0.5;
                  fVar10 = -0.5;
                  fVar14 = fVar12;
                }
                fVar15 = 0.5;
                if (0.43 < fVar14) {
LAB_0093e4f4:
                  local_114 = fStack_cc + fStack_d4 * 0.0 + fVar10 * local_d8 + fVar15 * local_d0;
                  fVar16 = fStack_cc + fStack_d4 * 0.0 + fVar15 * local_d8 + fVar13 * local_d0;
                  fVar14 = fVar16 - local_114;
                  fStack_110 = fStack_bc + fStack_c4 * 0.0 + fVar10 * local_c8 + fVar15 * local_c0;
                  fVar17 = fStack_bc + fStack_c4 * 0.0 + fVar15 * local_c8 + fVar13 * local_c0;
                  local_118 = fStack_ac + fStack_b4 * 0.0 + fVar10 * local_b8 + fVar15 * local_b0;
                  fVar13 = fStack_ac + fStack_b4 * 0.0 + fVar15 * local_b8 + fVar13 * local_b0;
                  fVar10 = fVar17 - fStack_110;
                  bVar2 = false;
                  bVar4 = true;
                  if (-1.1920929e-07 <= fVar14) {
                    bVar2 = false;
                    bVar4 = true;
                    if (!NAN(fVar14)) {
                      bVar2 = fVar14 == 1.1920929e-07;
                      bVar4 = 1.1920929e-07 <= fVar14;
                    }
                  }
                  fVar15 = fVar13 - local_118;
                  bVar1 = true;
                  bVar5 = false;
                  if (!bVar4 || bVar2) {
                    bVar1 = false;
                    bVar5 = true;
                    if (!NAN(fVar10)) {
                      bVar1 = fVar10 < -1.1920929e-07;
                      bVar5 = false;
                    }
                  }
                  bVar2 = false;
                  bVar4 = true;
                  if (bVar1 == bVar5) {
                    bVar2 = false;
                    bVar4 = true;
                    if (!NAN(fVar10)) {
                      bVar2 = fVar10 == 1.1920929e-07;
                      bVar4 = 1.1920929e-07 <= fVar10;
                    }
                  }
                  bVar1 = true;
                  bVar5 = false;
                  if (!bVar4 || bVar2) {
                    bVar1 = false;
                    bVar5 = true;
                    if (!NAN(fVar15)) {
                      bVar1 = fVar15 < -1.1920929e-07;
                      bVar5 = false;
                    }
                  }
                  bVar2 = false;
                  bVar4 = true;
                  if (bVar1 == bVar5) {
                    bVar2 = false;
                    bVar4 = true;
                    if (!NAN(fVar15)) {
                      bVar2 = fVar15 == 1.1920929e-07;
                      bVar4 = 1.1920929e-07 <= fVar15;
                    }
                  }
                  if (!bVar4 || bVar2) {
                    return;
                  }
                  fVar23 = SQRT(fVar10 * fVar10 + fVar14 * fVar14 + fVar15 * fVar15);
                  if (0.0 < fVar23) {
                    fVar22 = 1.0 / fVar23;
                    fVar14 = fVar14 * fVar22;
                    fVar10 = fVar10 * fVar22;
                    fVar15 = fVar15 * fVar22;
                  }
                  while( true ) {
                    local_138 = fVar13;
                    fStack_11c = fVar17;
                    local_120 = fVar16;
                    if (5.001 < fVar23) {
                      local_138 = fVar15 * 5.001 + local_118;
                      fStack_11c = fVar10 * 5.001 + fStack_110;
                      local_120 = fVar14 * 5.001 + local_114;
                    }
                    _local_130 = CONCAT44(param_2[1] + fStack_110,local_114);
                    _local_140 = CONCAT44(param_2[1] + fStack_11c,local_120);
                    local_128 = local_118;
                    local_10c = local_118;
                    local_118 = local_138;
                    FUN_0096693c(param_1,&local_114,&local_120,&local_140,&local_130,param_5,param_6
                                 ,param_7,0,0,0);
                    if (fVar23 <= 5.001) break;
                    fVar23 = fVar23 + -5.001;
                    local_114 = local_120;
                    fStack_110 = fStack_11c;
                  }
                }
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 != 4);
          }
        }
      }
      bVar2 = false;
    } while (bVar3);
  }
  return;
}

