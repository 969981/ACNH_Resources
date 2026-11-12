
void FUN_0093d160(long param_1,float *param_2,float *param_3,float *param_4,undefined4 param_5,
                 undefined4 param_6,undefined8 param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
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
  
  fVar8 = *param_2;
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
      fVar15 = param_2[2];
      bVar2 = false;
      bVar3 = true;
      if (-1.1920929e-07 <= fVar15) {
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar15)) {
          bVar2 = fVar15 == 1.1920929e-07;
          bVar3 = 1.1920929e-07 <= fVar15;
        }
      }
      if ((bVar3 && !bVar2) &&
         (fVar9 = *(float *)(param_1 + 8) - *param_4,
         fVar17 = *(float *)(param_1 + 0x10) - param_4[2],
         SQRT(fVar17 * fVar17 + fVar9 * fVar9) <=
         SQRT(fVar15 * 0.5 * fVar15 * 0.5 + fVar8 * 0.5 * fVar8 * 0.5) + *(float *)(param_1 + 0x34))
         ) {
        uVar7 = 0;
        fVar8 = (*(float *)(param_1 + 0x34) + 5.0) / 10.0;
        do {
          fVar15 = 10.0;
          fVar9 = -10.0;
          if (uVar7 < 3) {
            fVar15 = (float)(&DAT_04167608)[uVar7];
            fVar9 = (float)(&DAT_04167614)[uVar7];
          }
          fVar18 = *param_4;
          fVar20 = param_4[1];
          fVar19 = param_4[2];
          fVar17 = sinf(*param_3);
          fVar10 = sinf(param_3[1]);
          fVar11 = sinf(param_3[2]);
          fVar12 = cosf(*param_3);
          fVar13 = cosf(param_3[1]);
          fVar14 = cosf(param_3[2]);
          local_b8 = fVar10 * -10.0;
          local_c8 = fVar11 * fVar13 * 10.0;
          fStack_b4 = fVar16 * fVar17 * fVar13;
          local_d8 = fVar13 * fVar14 * 10.0;
          fStack_c4 = fVar16 * (fVar12 * fVar14 + fVar11 * fVar17 * fVar10);
          fStack_d4 = fVar16 * (fVar17 * fVar10 * fVar14 - fVar11 * fVar12);
          local_c0 = (-(fVar17 * fVar14) + fVar10 * fVar11 * fVar12) * 10.0;
          local_d0 = (fVar17 * fVar11 + fVar10 * fVar12 * fVar14) * 10.0;
          local_b0 = fVar12 * fVar13 * 10.0;
          fStack_cc = fVar18 + fVar15;
          fStack_bc = fVar20;
          fStack_ac = fVar19 + fVar9;
          uVar5 = FUN_007535b4(&local_108,&local_d8);
          if ((uVar5 & 1) != 0) {
            fVar9 = fStack_fc +
                    *(float *)(param_1 + 0xc) * fStack_104 + *(float *)(param_1 + 8) * local_108 +
                    *(float *)(param_1 + 0x10) * local_100;
            fVar15 = -fVar9;
            if (0.0 <= fVar9) {
              fVar15 = fVar9;
            }
            if (fVar15 <= fVar8) {
              fVar17 = fStack_dc +
                       *(float *)(param_1 + 0xc) * fStack_e4 + *(float *)(param_1 + 8) * local_e8 +
                       *(float *)(param_1 + 0x10) * local_e0;
              fVar15 = -fVar17;
              if (0.0 <= fVar17) {
                fVar15 = fVar17;
              }
              if (fVar15 <= fVar8) {
                iVar6 = 0;
                do {
                  if (iVar6 == 2) {
                    fVar15 = 0.5;
                    fVar10 = -0.5;
                    fVar11 = fVar9;
joined_r0x0093d49c:
                    fVar12 = -0.5;
                    if (fVar11 < -0.43) goto LAB_0093d4f4;
                  }
                  else {
                    if (iVar6 == 1) {
                      fVar15 = -0.5;
                      fVar10 = 0.5;
                      fVar11 = fVar9;
                    }
                    else {
                      if (iVar6 == 0) {
                        fVar10 = 0.5;
                        fVar15 = -0.5;
                        fVar11 = fVar17;
                        goto joined_r0x0093d49c;
                      }
                      fVar10 = -0.5;
                      fVar15 = 0.5;
                      fVar11 = fVar17;
                    }
                    fVar12 = 0.5;
                    if (0.43 < fVar11) {
LAB_0093d4f4:
                      local_114 = fStack_cc +
                                  fStack_d4 * 0.0 + fVar10 * local_d8 + fVar12 * local_d0;
                      fVar13 = fStack_cc + fStack_d4 * 0.0 + fVar12 * local_d8 + fVar15 * local_d0;
                      fVar11 = fVar13 - local_114;
                      fStack_110 = fStack_bc +
                                   fStack_c4 * 0.0 + fVar10 * local_c8 + fVar12 * local_c0;
                      fVar14 = fStack_bc + fStack_c4 * 0.0 + fVar12 * local_c8 + fVar15 * local_c0;
                      local_10c = fStack_ac +
                                  fStack_b4 * 0.0 + fVar10 * local_b8 + fVar12 * local_b0;
                      fVar12 = fStack_ac + fStack_b4 * 0.0 + fVar12 * local_b8 + fVar15 * local_b0;
                      fVar10 = fVar14 - fStack_110;
                      fVar15 = fVar12 - local_10c;
                      bVar2 = false;
                      bVar3 = true;
                      if (-1.1920929e-07 <= fVar11) {
                        bVar2 = false;
                        bVar3 = true;
                        if (!NAN(fVar11)) {
                          bVar2 = fVar11 == 1.1920929e-07;
                          bVar3 = 1.1920929e-07 <= fVar11;
                        }
                      }
                      bVar1 = true;
                      bVar4 = false;
                      if (!bVar3 || bVar2) {
                        bVar1 = false;
                        bVar4 = true;
                        if (!NAN(fVar10)) {
                          bVar1 = fVar10 < -1.1920929e-07;
                          bVar4 = false;
                        }
                      }
                      bVar2 = false;
                      bVar3 = true;
                      if (bVar1 == bVar4) {
                        bVar2 = false;
                        bVar3 = true;
                        if (!NAN(fVar10)) {
                          bVar2 = fVar10 == 1.1920929e-07;
                          bVar3 = 1.1920929e-07 <= fVar10;
                        }
                      }
                      bVar1 = true;
                      bVar4 = false;
                      if (!bVar3 || bVar2) {
                        bVar1 = false;
                        bVar4 = true;
                        if (!NAN(fVar15)) {
                          bVar1 = fVar15 < -1.1920929e-07;
                          bVar4 = false;
                        }
                      }
                      bVar2 = false;
                      bVar3 = true;
                      if (bVar1 == bVar4) {
                        bVar2 = false;
                        bVar3 = true;
                        if (!NAN(fVar15)) {
                          bVar2 = fVar15 == 1.1920929e-07;
                          bVar3 = 1.1920929e-07 <= fVar15;
                        }
                      }
                      if (!bVar3 || bVar2) {
                        return;
                      }
                      fVar18 = SQRT(fVar10 * fVar10 + fVar11 * fVar11 + fVar15 * fVar15);
                      if (0.0 < fVar18) {
                        fVar19 = 1.0 / fVar18;
                        fVar11 = fVar11 * fVar19;
                        fVar10 = fVar10 * fVar19;
                        fVar15 = fVar15 * fVar19;
                      }
                      do {
                        local_138 = fVar12;
                        local_120 = fVar13;
                        fStack_11c = fVar14;
                        if (5.001 < fVar18) {
                          fStack_11c = fVar10 * 5.001 + fStack_110;
                          local_120 = fVar11 * 5.001 + local_114;
                          local_138 = fVar15 * 5.001 + local_10c;
                        }
                        local_128 = local_10c;
                        _local_130 = CONCAT44(param_2[1] + fStack_110,local_114);
                        _local_140 = CONCAT44(param_2[1] + fStack_11c,local_120);
                        local_118 = local_138;
                        FUN_0096693c(param_1,&local_114,&local_120,&local_140,&local_130,param_5,
                                     param_6,param_7,0,0,0);
                        bVar2 = 5.001 < fVar18;
                        fVar18 = fVar18 + -5.001;
                      } while (bVar2);
                    }
                  }
                  iVar6 = iVar6 + 1;
                } while (iVar6 != 4);
              }
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 != 4);
      }
    }
  }
  return;
}

