
void FUN_03acd660(float param_1,float param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 float *param_6,byte param_7)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  ulong uVar14;
  float *pfVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_150 [6];
  undefined8 local_138;
  float local_130;
  undefined8 local_12c;
  float local_124;
  undefined8 local_120;
  float local_118;
  undefined8 local_114;
  float local_10c;
  undefined8 local_108;
  float local_100;
  undefined8 local_fc;
  float local_f4;
  float local_f0;
  float fStack_ec;
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
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float local_8c;
  float local_88;
  float fStack_84;
  
  FUN_038e6ab4(&local_c0,param_5);
  FUN_007535b4(&local_f0,param_4);
  local_150[2] = param_2;
  local_150[5] = param_2;
  local_150[3] = 1.0;
  local_150[4] = -1.0;
  local_138 = 0xbf8000003f800000;
  local_130 = param_1;
  local_124 = param_1;
  local_118 = param_2;
  local_10c = param_2;
  local_100 = param_1;
  local_f4 = param_1;
  local_150[0] = -1.0;
  local_150[1] = -1.0;
  local_12c = 0xbf800000bf800000;
  local_114 = &DAT_3f8000003f800000;
  local_108 = &DAT_3f8000003f800000;
  local_120 = 0x3f800000bf800000;
  local_fc = 0x3f800000bf800000;
  lVar16 = 0;
  do {
    lVar1 = lVar16 + 0xc;
    fVar19 = *(float *)((long)local_150 + lVar16);
    fVar20 = *(float *)((long)local_150 + lVar16 + 4);
    fVar21 = *(float *)((long)local_150 + lVar16 + 8);
    fVar22 = fStack_84 + local_8c * fVar20 + fVar19 * local_90 + fVar21 * local_88;
    fVar17 = fStack_b4 / fVar22 +
             fVar20 * (fStack_bc / fVar22) + fVar19 * (local_c0 / fVar22) +
             fVar21 * (local_b8 / fVar22);
    fVar18 = fStack_a4 / fVar22 +
             fVar20 * (fStack_ac / fVar22) + fVar19 * (local_b0 / fVar22) +
             fVar21 * (local_a8 / fVar22);
    fVar19 = fStack_94 / fVar22 +
             fVar20 * (fStack_9c / fVar22) + fVar19 * (local_a0 / fVar22) +
             fVar21 * (local_98 / fVar22);
    *(float *)((long)local_150 + lVar16) =
         fStack_e4 + fStack_ec * fVar18 + fVar17 * local_f0 + fVar19 * local_e8;
    *(float *)((long)local_150 + lVar16 + 4) =
         fStack_d4 + fStack_dc * fVar18 + fVar17 * local_e0 + fVar19 * local_d8;
    *(float *)((long)local_150 + lVar16 + 8) =
         fStack_c4 + fStack_cc * fVar18 + fVar17 * local_d0 + fVar19 * local_c8;
    lVar16 = lVar1;
  } while (lVar1 != 0x60);
  lVar16 = 0;
  pfVar2 = (float *)(param_3 + 0x43c);
  param_7 = param_6 != (float *)0x0 & param_7;
  do {
    lVar1 = (long)(int)(&DAT_041e0078)[lVar16 * 4];
    lVar9 = (long)(int)(&DAT_041e0070)[lVar16 * 4];
    fVar18 = local_150[lVar9 * 3 + 2];
    fVar21 = local_150[lVar9 * 3];
    fVar17 = local_150[lVar9 * 3 + 1];
    fVar25 = local_150[lVar1 * 3 + 1] - fVar17;
    fVar20 = local_150[lVar1 * 3] - fVar21;
    fVar19 = local_150[lVar1 * 3 + 2] - fVar18;
    fVar22 = SQRT(fVar25 * fVar25 + fVar20 * fVar20 + fVar19 * fVar19);
    if (0.0 < fVar22) {
      fVar22 = 1.0 / fVar22;
      fVar20 = fVar20 * fVar22;
      fVar25 = fVar25 * fVar22;
      fVar19 = fVar19 * fVar22;
    }
    lVar1 = (long)(int)(&DAT_041e0074)[lVar16 * 4];
    fVar26 = local_150[lVar1 * 3 + 1] - fVar17;
    fVar22 = local_150[lVar1 * 3] - fVar21;
    fVar24 = local_150[lVar1 * 3 + 2] - fVar18;
    fVar23 = SQRT(fVar26 * fVar26 + fVar22 * fVar22 + fVar24 * fVar24);
    if (0.0 < fVar23) {
      fVar23 = 1.0 / fVar23;
      fVar22 = fVar22 * fVar23;
      fVar26 = fVar26 * fVar23;
      fVar24 = fVar24 * fVar23;
    }
    fVar23 = -(fVar19 * fVar26) + fVar24 * fVar25;
    fVar19 = -(fVar20 * fVar24) + fVar22 * fVar19;
    fVar20 = -(fVar25 * fVar22) + fVar26 * fVar20;
    fVar22 = fVar19 * fVar19 + fVar23 * fVar23 + fVar20 * fVar20;
    fVar25 = SQRT(fVar22);
    if (0.0 < fVar25) {
      fVar22 = 1.0 / fVar25;
      fVar23 = fVar23 * fVar22;
      fVar19 = fVar19 * fVar22;
      fVar20 = fVar20 * fVar22;
      fVar22 = fVar19 * fVar19 + fVar23 * fVar23 + fVar20 * fVar20;
    }
    fVar22 = fVar22 + -1.0;
    bVar10 = true;
    bVar13 = false;
    if (0.0 < fVar25) {
      bVar10 = false;
      bVar13 = true;
      if (!NAN(fVar22)) {
        bVar10 = fVar22 < -1.1920929e-06;
        bVar13 = false;
      }
    }
    bVar11 = false;
    bVar12 = true;
    if (bVar10 == bVar13) {
      bVar11 = false;
      bVar12 = true;
      if (!NAN(fVar22)) {
        bVar11 = fVar22 == 1.1920929e-06;
        bVar12 = 1.1920929e-06 <= fVar22;
      }
    }
    if (!bVar12 || bVar11) {
      fVar17 = fVar17 * fVar19 + fVar21 * fVar23 + fVar18 * fVar20;
      pfVar3 = pfVar2 + (ulong)*(uint *)(param_3 + 0x438) * 4;
      if (0x17 < *(uint *)(param_3 + 0x438)) {
        pfVar3 = pfVar2;
      }
      *pfVar3 = fVar23;
      pfVar3[1] = fVar19;
      pfVar3[2] = fVar20;
      pfVar3[3] = fVar17;
      if (0.0 < ((local_150[1] + local_108._4_4_) * 0.5 * fVar19 +
                 (local_150[0] + (float)local_108) * 0.5 * fVar23 +
                (local_150[2] + local_100) * 0.5 * fVar20) - fVar17) {
        fVar23 = -fVar23;
        fVar19 = -fVar19;
        *pfVar3 = fVar23;
        pfVar3[1] = fVar19;
        fVar20 = -fVar20;
        fVar17 = -fVar17;
        pfVar3[2] = fVar20;
        pfVar3[3] = fVar17;
      }
      if ((param_6 == (float *)0x0) ||
         (-0.001 < fVar19 * param_6[1] + fVar23 * *param_6 + fVar20 * param_6[2])) {
        uVar8 = *(uint *)(param_3 + 0x438);
        if (0 < (int)uVar8) {
          uVar14 = 0;
          pfVar15 = pfVar2;
          do {
            pfVar4 = pfVar15;
            if (0x17 < uVar14) {
              pfVar4 = pfVar2;
            }
            fVar18 = fVar19 * pfVar4[1] + *pfVar4 * fVar23 + pfVar4[2] * fVar20 + -1.0;
            bVar10 = false;
            bVar13 = true;
            if (-1.1920929e-06 <= fVar18) {
              bVar10 = false;
              bVar13 = true;
              if (!NAN(fVar18)) {
                bVar10 = fVar18 == 1.1920929e-06;
                bVar13 = 1.1920929e-06 <= fVar18;
              }
            }
            if (!bVar13 || bVar10) {
              if (fVar17 <= pfVar4[3]) {
                fVar17 = pfVar4[3];
              }
              pfVar4[3] = fVar17;
              if (param_7 == 0) goto LAB_03acd904;
              goto LAB_03acdb1c;
            }
            uVar14 = uVar14 + 1;
            pfVar15 = pfVar15 + 4;
          } while (uVar8 != uVar14);
        }
        pfVar15 = pfVar2 + (ulong)uVar8 * 4;
        if (0x17 < uVar8) {
          pfVar15 = pfVar2;
        }
        *pfVar15 = fVar23;
        pfVar15[1] = pfVar3[1];
        pfVar15[2] = pfVar3[2];
        pfVar15[3] = pfVar3[3];
        *(int *)(param_3 + 0x438) = *(int *)(param_3 + 0x438) + 1;
      }
      if (param_7 != 0) {
LAB_03acdb1c:
        fVar22 = param_6[1];
        fVar20 = param_6[2];
        fVar19 = *param_6;
        fVar18 = -(fVar20 * pfVar3[1]) + pfVar3[2] * fVar22;
        fVar25 = -(fVar19 * pfVar3[2]) + *pfVar3 * fVar20;
        fVar17 = -(fVar22 * *pfVar3) + pfVar3[1] * fVar19;
        fVar21 = SQRT(fVar25 * fVar25 + fVar18 * fVar18 + fVar17 * fVar17);
        if (0.0 < fVar21) {
          fVar21 = 1.0 / fVar21;
          fVar18 = fVar18 * fVar21;
          fVar25 = fVar25 * fVar21;
          fVar17 = fVar17 * fVar21;
        }
        fVar21 = -(fVar17 * fVar22) + fVar20 * fVar25;
        fVar17 = -(fVar18 * fVar20) + fVar19 * fVar17;
        fVar18 = -(fVar25 * fVar19) + fVar22 * fVar18;
        fVar20 = fVar17 * fVar17 + fVar21 * fVar21 + fVar18 * fVar18;
        fVar19 = SQRT(fVar20);
        if (0.0 < fVar19) {
          fVar20 = 1.0 / fVar19;
          fVar21 = fVar21 * fVar20;
          fVar17 = fVar17 * fVar20;
          fVar18 = fVar18 * fVar20;
          fVar20 = fVar17 * fVar17 + fVar21 * fVar21 + fVar18 * fVar18;
        }
        fVar20 = fVar20 + -1.0;
        bVar10 = true;
        bVar13 = false;
        if (0.0 < fVar19) {
          bVar10 = false;
          bVar13 = true;
          if (!NAN(fVar20)) {
            bVar10 = fVar20 < -1.1920929e-06;
            bVar13 = false;
          }
        }
        bVar11 = false;
        bVar12 = true;
        if (bVar10 == bVar13) {
          bVar11 = false;
          bVar12 = true;
          if (!NAN(fVar20)) {
            bVar11 = fVar20 == 1.1920929e-06;
            bVar12 = 1.1920929e-06 <= fVar20;
          }
        }
        if (!bVar12 || bVar11) {
          pfVar3 = pfVar2 + (ulong)*(uint *)(param_3 + 0x438) * 4;
          if (0x17 < *(uint *)(param_3 + 0x438)) {
            pfVar3 = pfVar2;
          }
          lVar1 = (lVar16 << 0x20) >> 0x1c;
          iVar6 = *(int *)((long)&DAT_041e0074 + lVar1);
          lVar9 = (long)*(int *)((long)&DAT_041e0070 + lVar1);
          iVar5 = *(int *)((long)&DAT_041e0078 + lVar1);
          iVar7 = *(int *)((long)&DAT_041e007c + lVar1);
          *pfVar3 = fVar21;
          pfVar3[1] = fVar17;
          lVar1 = (long)iVar6;
          fVar19 = fVar17 * local_150[lVar9 * 3 + 1] + local_150[lVar9 * 3] * fVar21 +
                   local_150[lVar9 * 3 + 2] * fVar18;
          fVar20 = fVar17 * local_150[lVar1 * 3 + 1] + local_150[lVar1 * 3] * fVar21 +
                   local_150[lVar1 * 3 + 2] * fVar18;
          pfVar3[2] = fVar18;
          pfVar3[3] = fVar19;
          if (0.0 < fVar20 - fVar19) {
            pfVar3[3] = fVar20;
            fVar19 = fVar20;
          }
          lVar1 = (long)iVar5;
          fVar20 = fVar17 * local_150[lVar1 * 3 + 1] + local_150[lVar1 * 3] * fVar21 +
                   local_150[lVar1 * 3 + 2] * fVar18;
          if (0.0 < fVar20 - fVar19) {
            *pfVar3 = fVar21;
            pfVar3[1] = fVar17;
            pfVar3[2] = fVar18;
            pfVar3[3] = fVar20;
            fVar19 = fVar20;
          }
          lVar1 = (long)iVar7;
          fVar20 = fVar17 * local_150[lVar1 * 3 + 1] + local_150[lVar1 * 3] * fVar21 +
                   local_150[lVar1 * 3 + 2] * fVar18;
          if (0.0 < fVar20 - fVar19) {
            *pfVar3 = fVar21;
            pfVar3[1] = fVar17;
            pfVar3[2] = fVar18;
            pfVar3[3] = fVar20;
            fVar19 = fVar20;
          }
          if ((((((local_150[1] * fVar17 + local_150[0] * fVar21 + local_150[2] * fVar18) - fVar19
                  <= 0.0) &&
                ((fVar17 * local_150[4] + local_150[3] * fVar21 + local_150[5] * fVar18) - fVar19 <=
                 0.0)) &&
               ((fVar17 * local_138._4_4_ + (float)local_138 * fVar21 + local_130 * fVar18) - fVar19
                <= 0.0)) &&
              (((fVar17 * local_12c._4_4_ + (float)local_12c * fVar21 + local_124 * fVar18) - fVar19
                <= 0.0 &&
               ((fVar17 * local_120._4_4_ + (float)local_120 * fVar21 + local_118 * fVar18) - fVar19
                <= 0.0)))) &&
             (((fVar17 * local_114._4_4_ + (float)local_114 * fVar21 + local_10c * fVar18) - fVar19
               <= 0.0 &&
              (((local_108._4_4_ * fVar17 + (float)local_108 * fVar21 + local_100 * fVar18) - fVar19
                <= 0.0 &&
               ((fVar17 * local_fc._4_4_ + (float)local_fc * fVar21 + local_f4 * fVar18) - fVar19 <=
                0.0)))))) {
            uVar8 = *(uint *)(param_3 + 0x438);
            if (0 < (int)uVar8) {
              uVar14 = 0;
              pfVar15 = pfVar2;
              do {
                pfVar4 = pfVar15;
                if (0x17 < uVar14) {
                  pfVar4 = pfVar2;
                }
                fVar20 = fVar17 * pfVar4[1] + *pfVar4 * fVar21 + pfVar4[2] * fVar18 + -1.0;
                bVar10 = false;
                bVar13 = true;
                if (-1.1920929e-06 <= fVar20) {
                  bVar10 = false;
                  bVar13 = true;
                  if (!NAN(fVar20)) {
                    bVar10 = fVar20 == 1.1920929e-06;
                    bVar13 = 1.1920929e-06 <= fVar20;
                  }
                }
                if (!bVar13 || bVar10) {
                  if (fVar19 <= pfVar4[3]) {
                    fVar19 = pfVar4[3];
                  }
                  pfVar4[3] = fVar19;
                  goto LAB_03acd904;
                }
                uVar14 = uVar14 + 1;
                pfVar15 = pfVar15 + 4;
              } while (uVar8 != uVar14);
            }
            pfVar15 = pfVar2 + (ulong)uVar8 * 4;
            if (0x17 < uVar8) {
              pfVar15 = pfVar2;
            }
            *pfVar15 = fVar21;
            pfVar15[1] = pfVar3[1];
            pfVar15[2] = pfVar3[2];
            pfVar15[3] = pfVar3[3];
            *(int *)(param_3 + 0x438) = *(int *)(param_3 + 0x438) + 1;
          }
        }
      }
    }
LAB_03acd904:
    lVar16 = lVar16 + 1;
    if (lVar16 == 6) {
      return;
    }
  } while( true );
}

