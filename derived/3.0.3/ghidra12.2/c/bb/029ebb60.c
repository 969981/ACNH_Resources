
void FUN_029ebb60(undefined8 param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  undefined8 *puVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  byte bVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  uint uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  uint local_e0;
  uint uStack_dc;
  uint uStack_d8;
  undefined **local_98 [5];
  
  fVar34 = 0.0;
  local_98[0] = &PTR_LAB_04a98fb8;
  if (param_3 == 0) {
    local_98[0] = &PTR_LAB_04a99008;
  }
  else if (param_3 == 1) {
    local_98[0] = &PTR_FUN_04a98fe0;
    fVar34 = 1.0;
  }
  uVar2 = param_2[6];
  uVar5 = uVar2 * param_2[4];
  uVar1 = uVar5 & 3;
  if (-1 < (int)-uVar5) {
    uVar1 = -(-uVar5 & 3);
  }
  iVar15 = uVar5 - uVar1;
  if (iVar15 < (int)(uVar2 * (param_2[5] + 1))) {
    uVar3 = *param_2;
    iVar8 = (param_2[5] + 1) - param_2[4];
    auVar30 = NEON_fmov(0x3f800000,4);
    lVar16 = *(long *)(param_2 + 2);
    bVar14 = 1;
    uVar4 = param_2[8];
    uVar6 = param_2[0xc] * uVar2;
    lVar18 = *(long *)(param_2 + 10);
    uVar5 = uVar6 & 3;
    if (-1 < (int)-uVar6) {
      uVar5 = -(-uVar6 & 3);
    }
    uVar21 = 0x3f800000;
    if (uVar5 != 0) {
      uVar21 = 0;
    }
    uVar28 = 0x3f800000;
    if (1 < (int)uVar5) {
      uVar28 = 0;
    }
    uVar19 = 0x3f800000;
    if (2 < (int)uVar5) {
      uVar19 = 0;
    }
    iVar17 = uVar6 - uVar1;
    iVar11 = -1;
    iVar13 = -1;
    fVar20 = 1.0;
    do {
      iVar7 = 0;
      if (uVar2 != 0) {
        iVar7 = (iVar11 + 1) / (int)uVar2;
      }
      iVar11 = (iVar11 + 1) - iVar7 * uVar2;
      fVar31 = fVar34;
      fVar32 = fVar34;
      if (bVar14 == 0) {
        if (iVar11 == 0) {
          iVar13 = iVar13 + 1;
          if (iVar13 < iVar8) {
            fVar20 = (float)(*(code *)*local_98[0])(local_98,iVar13,iVar8);
            fVar31 = SQRT(fVar20);
            if (NAN(fVar31)) {
              fVar31 = sqrtf(fVar20);
            }
          }
        }
        else {
          fVar31 = fVar20;
        }
        iVar7 = 0;
        if (uVar2 != 0) {
          iVar7 = (iVar11 + 1) / (int)uVar2;
        }
        iVar11 = (iVar11 + 1) - iVar7 * uVar2;
        if (iVar11 == 0) {
          iVar13 = iVar13 + 1;
          if (iVar13 < iVar8) {
            fVar20 = (float)(*(code *)*local_98[0])(local_98,iVar13,iVar8);
            fVar32 = SQRT(fVar20);
            if (NAN(fVar32)) {
              fVar32 = sqrtf(fVar20);
            }
          }
        }
        else {
          fVar32 = fVar31;
        }
        iVar11 = iVar11 + 1;
        iVar7 = 0;
        if (uVar2 != 0) {
          iVar7 = iVar11 / (int)uVar2;
        }
        iVar11 = iVar11 - iVar7 * uVar2;
        if (iVar11 != 0) goto LAB_029ebf40;
        iVar13 = iVar13 + 1;
        if (iVar8 <= iVar13) goto LAB_029ebfe0;
LAB_029ebe4c:
        fVar20 = (float)(*(code *)*local_98[0])(local_98,iVar13,iVar8);
        fVar33 = SQRT(fVar20);
        if (NAN(fVar33)) {
          fVar33 = sqrtf(fVar20);
        }
      }
      else {
        if (iVar11 == 0) {
          iVar13 = iVar13 + 1;
          if ((int)uVar1 < 1) {
            if (iVar13 < iVar8) {
              fVar20 = (float)(*(code *)*local_98[0])(local_98,iVar13,iVar8);
              fVar31 = SQRT(fVar20);
              if (NAN(fVar31)) {
                fVar31 = sqrtf(fVar20);
              }
            }
          }
          else {
            fVar31 = 1.0;
          }
        }
        else {
          fVar31 = fVar20;
        }
        iVar7 = 0;
        if (uVar2 != 0) {
          iVar7 = (iVar11 + 1) / (int)uVar2;
        }
        iVar11 = (iVar11 + 1) - iVar7 * uVar2;
        if (iVar11 == 0) {
          iVar13 = iVar13 + 1;
          if ((int)uVar1 < 2) {
            if (iVar13 < iVar8) {
              fVar20 = (float)(*(code *)*local_98[0])(local_98,iVar13,iVar8);
              fVar32 = SQRT(fVar20);
              if (NAN(fVar32)) {
                fVar32 = sqrtf(fVar20);
              }
            }
          }
          else {
            fVar32 = 1.0;
          }
        }
        else {
          fVar32 = fVar31;
        }
        iVar11 = iVar11 + 1;
        iVar7 = 0;
        if (uVar2 != 0) {
          iVar7 = iVar11 / (int)uVar2;
        }
        iVar11 = iVar11 - iVar7 * uVar2;
        if (iVar11 == 0) {
          iVar13 = iVar13 + 1;
          if ((int)uVar1 < 3) {
            if (iVar13 < iVar8) goto LAB_029ebe4c;
LAB_029ebfe0:
            fVar33 = fVar34;
          }
          else {
            fVar33 = 1.0;
          }
        }
        else {
LAB_029ebf40:
          fVar33 = fVar32;
        }
      }
      iVar7 = 0;
      if (uVar2 != 0) {
        iVar7 = (iVar11 + 1) / (int)uVar2;
      }
      iVar11 = (iVar11 + 1) - iVar7 * uVar2;
      fVar20 = fVar33;
      if (iVar11 == 0) {
        iVar13 = iVar13 + 1;
        if (iVar13 < iVar8) {
          fVar22 = (float)(*(code *)*local_98[0])(local_98,iVar13,iVar8);
          fVar20 = SQRT(fVar22);
          if (NAN(fVar20)) {
            fVar20 = sqrtf(fVar22);
          }
          iVar11 = 0;
        }
        else {
          iVar11 = 0;
          fVar20 = fVar34;
        }
      }
      fVar27 = 0.0;
      fVar26 = 0.0;
      fVar25 = 0.0;
      fVar22 = 0.0;
      if (lVar18 != 0) {
        iVar7 = iVar17 + 3;
        if (-1 < iVar17) {
          iVar7 = iVar17;
        }
        uVar5 = iVar7 >> 2;
        local_e0 = auVar30._0_4_;
        uStack_dc = auVar30._4_4_;
        uStack_d8 = auVar30._8_4_;
        if (uVar4 <= uVar5) {
          uVar5 = 0;
        }
        pfVar9 = (float *)(lVar18 + (long)(int)uVar5 * 0x10);
        uVar5 = -(uint)bVar14;
        fVar22 = (float)(local_e0 ^ (local_e0 ^ uVar21) & uVar5) * *pfVar9;
        fVar25 = (float)(uStack_dc ^ (uStack_dc ^ uVar28) & uVar5) * pfVar9[1];
        fVar26 = (float)(uStack_d8 ^ (uStack_d8 ^ uVar19) & uVar5) * pfVar9[2];
        fVar27 = auVar30._12_4_ * pfVar9[3];
      }
      iVar7 = iVar15 + 3;
      if (-1 < iVar15) {
        iVar7 = iVar15;
      }
      uVar5 = iVar7 >> 2;
      iVar15 = iVar15 + 4;
      bVar14 = 0;
      iVar17 = iVar17 + 4;
      if (uVar3 <= uVar5) {
        uVar5 = 0;
      }
      uVar12 = -(ulong)(uVar5 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar5 << 4;
      pfVar9 = (float *)(lVar16 + uVar12);
      auVar23._0_4_ = fVar22 + fVar31 * *pfVar9 * 3.0517578e-05 * 32768.0;
      auVar23._4_4_ = fVar25 + fVar32 * pfVar9[1] * 3.0517578e-05 * 32768.0;
      auVar23._8_4_ = fVar26 + fVar33 * pfVar9[2] * 3.0517578e-05 * 32768.0;
      auVar23._12_4_ = fVar27 + fVar20 * pfVar9[3] * 3.0517578e-05 * 32768.0;
      auVar24._8_8_ = 0x46fffe0046fffe00;
      auVar24._0_8_ = 0x46fffe0046fffe00;
      auVar24 = NEON_fmin(auVar23,auVar24,4);
      auVar29._8_4_ = 0xc7000000;
      auVar29._0_8_ = 0xc7000000c7000000;
      auVar29._12_4_ = 0xc7000000;
      auVar24 = NEON_fmax(auVar24,auVar29,4);
      puVar10 = (undefined8 *)(lVar16 + uVar12);
      puVar10[1] = auVar24._8_8_;
      *puVar10 = auVar24._0_8_;
    } while (iVar15 < (int)(uVar2 + uVar2 * param_2[5]));
  }
  return;
}

