
void FUN_0093d6a0(long param_1,float *param_2,float *param_3,float *param_4,undefined4 param_5,
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
  float local_148;
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
  float local_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  
  fVar16 = param_2[1];
  bVar2 = false;
  bVar3 = true;
  if (-1.1920929e-07 <= fVar16) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar16)) {
      bVar2 = fVar16 == 1.1920929e-07;
      bVar3 = 1.1920929e-07 <= fVar16;
    }
  }
  if (bVar3 && !bVar2) {
    fVar8 = *param_2;
    fVar17 = param_2[2];
    fVar9 = fVar8 * 0.5;
    fVar18 = fVar17 * 0.5;
    fVar10 = *(float *)(param_1 + 8) - *param_4;
    fVar19 = *(float *)(param_1 + 0x10) - param_4[2];
    if (SQRT(fVar19 * fVar19 + fVar10 * fVar10) <=
        SQRT(fVar18 * fVar18 + fVar9 * fVar9) + *(float *)(param_1 + 0x34)) {
      fVar9 = (*(float *)(param_1 + 0x34) + 5.0) / 10.0;
      bVar2 = true;
      do {
        bVar3 = bVar2;
        local_148 = *param_4;
        fVar10 = param_4[2];
        if (fVar8 <= fVar17) {
          if (bVar3) {
            fVar10 = fVar10 + -10.0;
          }
          else {
            fVar10 = fVar10 + 10.0;
          }
        }
        else if (bVar3) {
          local_148 = local_148 + -10.0;
        }
        else {
          local_148 = local_148 + 10.0;
        }
        fVar18 = param_4[1];
        fVar19 = sinf(*param_3);
        fVar11 = sinf(param_3[1]);
        fVar12 = sinf(param_3[2]);
        fVar13 = cosf(*param_3);
        fVar14 = cosf(param_3[1]);
        fVar15 = cosf(param_3[2]);
        local_b8 = fVar11 * -10.0;
        local_c8 = fVar12 * fVar14 * 10.0;
        fStack_b4 = fVar16 * fVar19 * fVar14;
        local_d8 = fVar14 * fVar15 * 10.0;
        fStack_c4 = fVar16 * (fVar13 * fVar15 + fVar12 * fVar19 * fVar11);
        fStack_d4 = fVar16 * (fVar19 * fVar11 * fVar15 - fVar12 * fVar13);
        local_c0 = (-(fVar19 * fVar15) + fVar11 * fVar12 * fVar13) * 10.0;
        local_d0 = (fVar19 * fVar12 + fVar11 * fVar13 * fVar15) * 10.0;
        fStack_cc = local_148;
        local_b0 = fVar13 * fVar14 * 10.0;
        local_bc = fVar18;
        fStack_ac = fVar10;
        uVar6 = FUN_007535b4(&local_108,&local_d8);
        if ((uVar6 & 1) != 0) {
          fVar18 = fStack_fc +
                   *(float *)(param_1 + 0xc) * fStack_104 + *(float *)(param_1 + 8) * local_108 +
                   *(float *)(param_1 + 0x10) * local_100;
          fVar10 = -fVar18;
          if (0.0 <= fVar18) {
            fVar10 = fVar18;
          }
          if (fVar10 <= fVar9) {
            fVar19 = fStack_dc +
                     *(float *)(param_1 + 0xc) * fStack_e4 + *(float *)(param_1 + 8) * local_e8 +
                     *(float *)(param_1 + 0x10) * local_e0;
            fVar10 = -fVar19;
            if (0.0 <= fVar19) {
              fVar10 = fVar19;
            }
            if (fVar10 <= fVar9) {
              iVar7 = 0;
              do {
                if (iVar7 == 2) {
                  fVar10 = -0.5;
                  fVar11 = 0.5;
                  fVar12 = fVar18;
joined_r0x0093d9f0:
                  fVar13 = -0.5;
                  if (fVar12 < -0.43) goto LAB_0093da54;
                }
                else {
                  if (iVar7 == 1) {
                    fVar10 = 0.5;
                    fVar11 = -0.5;
                    fVar12 = fVar18;
                  }
                  else {
                    if (iVar7 == 0) {
                      fVar11 = -0.5;
                      fVar10 = 0.5;
                      fVar12 = fVar19;
                      goto joined_r0x0093d9f0;
                    }
                    fVar11 = 0.5;
                    fVar10 = -0.5;
                    fVar12 = fVar19;
                  }
                  fVar13 = 0.5;
                  if (0.43 < fVar12) {
LAB_0093da54:
                    local_114 = fStack_cc + fStack_d4 * 0.0 + fVar10 * local_d8 + fVar13 * local_d0;
                    fVar14 = fStack_cc + fStack_d4 * 0.0 + fVar13 * local_d8 + fVar11 * local_d0;
                    fVar12 = fVar14 - local_114;
                    fStack_110 = local_bc + fStack_c4 * 0.0 + fVar10 * local_c8 + fVar13 * local_c0;
                    fVar15 = local_bc + fStack_c4 * 0.0 + fVar13 * local_c8 + fVar11 * local_c0;
                    local_118 = fStack_ac + fStack_b4 * 0.0 + fVar10 * local_b8 + fVar13 * local_b0;
                    fVar11 = fStack_ac + fStack_b4 * 0.0 + fVar13 * local_b8 + fVar11 * local_b0;
                    fVar10 = fVar15 - fStack_110;
                    bVar2 = false;
                    bVar4 = true;
                    if (-1.1920929e-07 <= fVar12) {
                      bVar2 = false;
                      bVar4 = true;
                      if (!NAN(fVar12)) {
                        bVar2 = fVar12 == 1.1920929e-07;
                        bVar4 = 1.1920929e-07 <= fVar12;
                      }
                    }
                    fVar13 = fVar11 - local_118;
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
                      if (!NAN(fVar13)) {
                        bVar1 = fVar13 < -1.1920929e-07;
                        bVar5 = false;
                      }
                    }
                    bVar2 = false;
                    bVar4 = true;
                    if (bVar1 == bVar5) {
                      bVar2 = false;
                      bVar4 = true;
                      if (!NAN(fVar13)) {
                        bVar2 = fVar13 == 1.1920929e-07;
                        bVar4 = 1.1920929e-07 <= fVar13;
                      }
                    }
                    if (!bVar4 || bVar2) {
                      return;
                    }
                    fVar21 = SQRT(fVar10 * fVar10 + fVar12 * fVar12 + fVar13 * fVar13);
                    if (0.0 < fVar21) {
                      fVar20 = 1.0 / fVar21;
                      fVar12 = fVar12 * fVar20;
                      fVar10 = fVar10 * fVar20;
                      fVar13 = fVar13 * fVar20;
                    }
                    while( true ) {
                      local_138 = fVar11;
                      fStack_11c = fVar15;
                      local_120 = fVar14;
                      if (5.001 < fVar21) {
                        local_138 = fVar13 * 5.001 + local_118;
                        fStack_11c = fVar10 * 5.001 + fStack_110;
                        local_120 = fVar12 * 5.001 + local_114;
                      }
                      _local_130 = CONCAT44(param_2[1] + fStack_110,local_114);
                      _local_140 = CONCAT44(param_2[1] + fStack_11c,local_120);
                      local_128 = local_118;
                      local_10c = local_118;
                      local_118 = local_138;
                      FUN_0096693c(param_1,&local_114,&local_120,&local_140,&local_130,param_5,
                                   param_6,param_7,0,0,0);
                      if (fVar21 <= 5.001) break;
                      fVar21 = fVar21 + -5.001;
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
  }
  return;
}

