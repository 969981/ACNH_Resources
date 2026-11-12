
void FUN_0093ccd0(long param_1,float *param_2,float *param_3,float *param_4,undefined4 param_5,
                 undefined4 param_6,undefined8 param_7,byte param_8)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
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
  float local_148;
  float fStack_144;
  float local_140;
  float local_138;
  float fStack_134;
  float local_130;
  float local_128;
  float fStack_124;
  float local_120;
  float local_11c;
  float fStack_118;
  float local_114;
  float local_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
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
  
  fVar7 = param_2[1];
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
  if ((bVar3 && !bVar2) &&
     (fVar7 = *(float *)(param_1 + 8) - *param_4, fVar12 = *(float *)(param_1 + 0x10) - param_4[2],
     SQRT(fVar12 * fVar12 + fVar7 * fVar7) <=
     SQRT(param_2[2] * 0.5 * param_2[2] * 0.5 + *param_2 * 0.5 * *param_2 * 0.5) +
     *(float *)(param_1 + 0x34))) {
    fVar7 = sinf(*param_3);
    fVar12 = sinf(param_3[1]);
    fVar8 = sinf(param_3[2]);
    fVar9 = cosf(*param_3);
    fVar10 = cosf(param_3[1]);
    fVar11 = cosf(param_3[2]);
    local_d8 = *param_2;
    fStack_d4 = param_2[1];
    local_c8 = fVar8 * fVar10 * local_d8;
    local_b8 = -(fVar12 * local_d8);
    fStack_b4 = fVar7 * fVar10 * fStack_d4;
    local_d8 = local_d8 * fVar10 * fVar11;
    local_c0 = param_2[2];
    fStack_c4 = (fVar9 * fVar11 + fVar8 * fVar7 * fVar12) * fStack_d4;
    fStack_d4 = (fVar7 * fVar12 * fVar11 - fVar8 * fVar9) * fStack_d4;
    local_d0 = (fVar7 * fVar8 + fVar12 * fVar9 * fVar11) * local_c0;
    fStack_cc = *param_4;
    fStack_bc = param_4[1];
    local_b0 = fVar9 * fVar10 * local_c0;
    local_c0 = (-(fVar7 * fVar11) + fVar12 * fVar8 * fVar9) * local_c0;
    fStack_ac = param_4[2];
    uVar5 = FUN_007535b4(&local_110,&local_d8);
    if ((uVar5 & 1) != 0) {
      iVar6 = 0;
      fVar12 = fStack_104 +
               *(float *)(param_1 + 0xc) * fStack_10c + *(float *)(param_1 + 8) * local_110 +
               *(float *)(param_1 + 0x10) * local_108;
      fVar7 = fStack_e4 +
              *(float *)(param_1 + 0xc) * fStack_ec + *(float *)(param_1 + 8) * local_f0 +
              *(float *)(param_1 + 0x10) * local_e8;
      do {
        if (iVar6 == 2) {
          fVar8 = 0.5;
          fVar9 = -0.5;
          fVar10 = fVar12;
joined_r0x0093cf40:
          fVar11 = -0.5;
          if (fVar10 < -0.43) goto LAB_0093cf8c;
        }
        else {
          if (iVar6 == 1) {
            fVar8 = -0.5;
            fVar9 = 0.5;
            fVar10 = fVar12;
          }
          else {
            if (iVar6 == 0) {
              fVar8 = -0.5;
              fVar9 = 0.5;
              fVar10 = fVar7;
              goto joined_r0x0093cf40;
            }
            fVar8 = 0.5;
            fVar9 = -0.5;
            fVar10 = fVar7;
          }
          fVar11 = 0.5;
          if (0.43 < fVar10) {
LAB_0093cf8c:
            local_11c = fStack_cc + fStack_d4 * 0.0 + fVar9 * local_d8 + fVar11 * local_d0;
            fVar16 = fStack_cc + fStack_d4 * 0.0 + fVar11 * local_d8 + fVar8 * local_d0;
            fVar10 = fVar16 - local_11c;
            fStack_118 = fStack_bc + fStack_c4 * 0.0 + fVar9 * local_c8 + fVar11 * local_c0;
            fVar14 = fStack_bc + fStack_c4 * 0.0 + fVar11 * local_c8 + fVar8 * local_c0;
            local_120 = fStack_ac + fStack_b4 * 0.0 + fVar9 * local_b8 + fVar11 * local_b0;
            fVar9 = fStack_ac + fStack_b4 * 0.0 + fVar11 * local_b8 + fVar8 * local_b0;
            fVar8 = fVar14 - fStack_118;
            bVar2 = false;
            bVar3 = true;
            if (-1.1920929e-07 <= fVar10) {
              bVar2 = false;
              bVar3 = true;
              if (!NAN(fVar10)) {
                bVar2 = fVar10 == 1.1920929e-07;
                bVar3 = 1.1920929e-07 <= fVar10;
              }
            }
            fVar11 = fVar9 - local_120;
            bVar1 = true;
            bVar4 = false;
            if (!bVar3 || bVar2) {
              bVar1 = false;
              bVar4 = true;
              if (!NAN(fVar8)) {
                bVar1 = fVar8 < -1.1920929e-07;
                bVar4 = false;
              }
            }
            bVar2 = false;
            bVar3 = true;
            if (bVar1 == bVar4) {
              bVar2 = false;
              bVar3 = true;
              if (!NAN(fVar8)) {
                bVar2 = fVar8 == 1.1920929e-07;
                bVar3 = 1.1920929e-07 <= fVar8;
              }
            }
            bVar1 = true;
            bVar4 = false;
            if (!bVar3 || bVar2) {
              bVar1 = false;
              bVar4 = true;
              if (!NAN(fVar11)) {
                bVar1 = fVar11 < -1.1920929e-07;
                bVar4 = false;
              }
            }
            bVar2 = false;
            bVar3 = true;
            if (bVar1 == bVar4) {
              bVar2 = false;
              bVar3 = true;
              if (!NAN(fVar11)) {
                bVar2 = fVar11 == 1.1920929e-07;
                bVar3 = 1.1920929e-07 <= fVar11;
              }
            }
            if (!bVar3 || bVar2) {
              return;
            }
            fVar15 = SQRT(fVar8 * fVar8 + fVar10 * fVar10 + fVar11 * fVar11);
            if (0.0 < fVar15) {
              fVar13 = 1.0 / fVar15;
              fVar10 = fVar10 * fVar13;
              fVar8 = fVar8 * fVar13;
              fVar11 = fVar11 * fVar13;
            }
            while( true ) {
              local_140 = fVar9;
              fStack_124 = fVar14;
              local_128 = fVar16;
              if (5.001 < fVar15) {
                local_140 = fVar11 * 5.001 + local_120;
                fStack_124 = fVar8 * 5.001 + fStack_118;
                local_128 = fVar10 * 5.001 + local_11c;
              }
              _local_138 = CONCAT44(param_2[1] + fStack_118,local_11c);
              _local_148 = CONCAT44(param_2[1] + fStack_124,local_128);
              local_130 = local_120;
              local_114 = local_120;
              local_120 = local_140;
              FUN_0096693c(param_1,&local_11c,&local_128,&local_148,&local_138,param_5,param_6,
                           param_7,0,0,param_8 & 1);
              if (fVar15 <= 5.001) break;
              fVar15 = fVar15 + -5.001;
              local_11c = local_128;
              fStack_118 = fStack_124;
            }
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 != 4);
    }
  }
  return;
}

