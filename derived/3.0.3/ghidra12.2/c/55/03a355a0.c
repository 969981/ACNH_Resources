
undefined8 FUN_03a355a0(long param_1,float *param_2,float *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  float fVar12;
  bool bVar13;
  long lVar14;
  ulong uVar15;
  float *pfVar16;
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
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float afStack_fc [5];
  undefined8 local_e8;
  undefined8 local_e0;
  float local_d8 [6];
  undefined8 local_c0;
  undefined8 local_b8;
  float local_b0 [6];
  undefined8 local_98;
  undefined8 local_90;
  float local_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float local_78;
  float fStack_74;
  
  lVar5 = *(long *)(param_1 + 0x250);
  local_b0[2] = -NAN;
  local_b0[3] = -NAN;
  local_b0[4] = -3.4028235e+38;
  local_b0[5] = 4.2039e-45;
  local_90 = 0xff7fffffffffffff;
  local_88 = 5.60519e-45;
  local_80 = -NAN;
  local_7c = -NAN;
  local_78 = -3.4028235e+38;
  fStack_74 = 7.00649e-45;
  local_d8[0] = 0.0;
  local_d8[2] = -NAN;
  local_d8[3] = -NAN;
  uVar11 = (ulong)*(ushort *)(lVar5 + 0x6a);
  local_d8[4] = 3.4028235e+38;
  local_d8[5] = 1.4013e-45;
  local_e0 = 0x7f7fffffffffffff;
  local_b8 = 0x7f7fffffffffffff;
  local_b0[0] = 2.8026e-45;
  if (uVar11 != 0) {
    fVar20 = param_3[1];
    fVar18 = param_3[2];
    fStack_84 = -3.4028235e+38;
    fVar12 = 3.4028235e+38;
    lVar6 = 0;
    fVar19 = *param_3;
    bVar13 = false;
    fVar28 = -3.4028235e+38;
    fVar29 = -3.4028235e+38;
    fVar34 = -3.4028235e+38;
    fVar22 = 3.4028235e+38;
    fVar21 = 3.4028235e+38;
    fVar27 = 3.4028235e+38;
    fVar30 = -3.4028235e+38;
    fVar35 = -3.4028235e+38;
    fVar31 = -3.4028235e+38;
    fVar32 = -3.4028235e+38;
    fVar36 = 3.4028235e+38;
    fVar17 = 3.4028235e+38;
    fVar37 = 3.4028235e+38;
    fVar33 = 3.4028235e+38;
    fVar38 = 3.4028235e+38;
    do {
      lVar1 = *(long *)(lVar5 + 0x28) + lVar6;
      lVar14 = *(long *)(lVar1 + 0x38);
      uVar15 = (ulong)*(ushort *)(*(long *)(lVar1 + 0x18) + 0x34);
      pfVar16 = (float *)(lVar14 + uVar15 * 0x18);
      fVar23 = *pfVar16;
      fVar24 = pfVar16[3];
      fVar39 = fVar19 - fVar23;
      fVar40 = -fVar39;
      if (0.0 <= fVar39) {
        fVar40 = fVar39;
      }
      if (fVar40 <= fVar24) {
        fVar39 = pfVar16[2];
        fVar41 = fVar18 - fVar39;
        fVar40 = -fVar41;
        if (0.0 <= fVar41) {
          fVar40 = fVar41;
        }
        fVar41 = *(float *)(lVar14 + uVar15 * 0x18 + 0x14);
        if (fVar40 <= fVar41) {
          fVar42 = pfVar16[1];
          fVar43 = fVar20 - fVar42;
          fVar40 = -fVar43;
          if (0.0 <= fVar43) {
            fVar40 = fVar43;
          }
          fVar43 = *(float *)(lVar14 + uVar15 * 0x18 + 0x10);
          if (fVar40 <= fVar43) {
            fVar25 = fVar23 - fVar24;
            uVar4 = *(ushort *)(lVar1 + 0x52);
            fVar40 = (float)(uint)uVar4;
            if (fVar25 <= fVar34) {
              if ((local_b0[2] != fVar40) && (fVar30 < fVar25)) {
                local_b0[4] = fVar25;
                pfVar16 = local_b0 + 3;
                fVar30 = fVar25;
                goto LAB_03a357e0;
              }
            }
            else {
              fVar29 = fVar25;
              fVar34 = fVar25;
              if (local_b0[2] != fVar40) {
                local_b0[3] = local_b0[2];
                pfVar16 = local_b0 + 2;
LAB_03a357e0:
                *pfVar16 = fVar40;
              }
            }
            fVar26 = fVar42 - fVar43;
            fVar25 = (float)(uint)uVar4;
            if (fVar26 <= fVar35) {
              if ((fVar40 != -NAN) && (fVar31 < fVar26)) {
                local_90 = CONCAT44(fVar26,(float)local_90);
                pfVar16 = (float *)&local_90;
                fVar31 = fVar26;
                goto LAB_03a3583c;
              }
            }
            else {
              fVar28 = fVar26;
              fVar35 = fVar26;
              if (fVar25 != -NAN) {
                local_90 = CONCAT44(local_90._4_4_,0xffffffff);
                pfVar16 = (float *)((long)&local_98 + 4);
LAB_03a3583c:
                *pfVar16 = fVar25;
              }
            }
            fVar26 = fVar39 - fVar41;
            if (fVar26 <= fStack_84) {
              if ((local_80 != fVar25) && (fVar32 < fVar26)) {
                local_78 = fVar26;
                pfVar16 = &local_7c;
                goto LAB_03a35894;
              }
            }
            else {
              fStack_84 = fVar26;
              if (local_80 == fVar25) {
              }
              else {
                local_7c = local_80;
                pfVar16 = &local_80;
                fVar26 = fVar32;
LAB_03a35894:
                *pfVar16 = fVar40;
                fVar32 = fVar26;
              }
            }
            fVar23 = fVar23 + fVar24;
            if (fVar36 <= fVar23) {
              if ((fVar40 != -NAN) && (fVar23 < fVar17)) {
                local_e0 = CONCAT44(fVar23,(float)local_e0);
                pfVar16 = (float *)&local_e0;
                fVar17 = fVar23;
                goto LAB_03a358f0;
              }
            }
            else {
              fVar27 = fVar23;
              fVar36 = fVar23;
              if (fVar40 != -NAN) {
                local_e0 = CONCAT44(local_e0._4_4_,0xffffffff);
                pfVar16 = (float *)((long)&local_e8 + 4);
LAB_03a358f0:
                *pfVar16 = fVar40;
              }
            }
            fVar42 = fVar42 + fVar43;
            if (fVar37 <= fVar42) {
              if ((local_d8[2] != fVar40) && (fVar42 < fVar33)) {
                local_d8[4] = fVar42;
                pfVar16 = local_d8 + 3;
                fVar33 = fVar42;
                goto LAB_03a3594c;
              }
            }
            else {
              fVar21 = fVar42;
              fVar37 = fVar42;
              if (local_d8[2] != fVar40) {
                local_d8[3] = local_d8[2];
                pfVar16 = local_d8 + 2;
LAB_03a3594c:
                *pfVar16 = fVar40;
              }
            }
            fVar39 = fVar39 + fVar41;
            if (fVar38 <= fVar39) {
              bVar13 = true;
              if ((fVar40 != -NAN) && (fVar39 < fVar12)) {
                local_b8 = CONCAT44(fVar39,(float)local_b8);
                pfVar16 = (float *)&local_b8;
                fVar12 = fVar39;
                goto LAB_03a359b0;
              }
            }
            else {
              fVar22 = fVar39;
              fVar38 = fVar39;
              if (fVar40 == -NAN) {
                bVar13 = true;
              }
              else {
                local_b8 = CONCAT44(local_b8._4_4_,0xffffffff);
                pfVar16 = (float *)((long)&local_c0 + 4);
LAB_03a359b0:
                *pfVar16 = fVar40;
                bVar13 = true;
              }
            }
          }
        }
      }
      fVar24 = local_d8[4];
      fVar23 = local_d8[3];
      fVar40 = local_d8[2];
      lVar6 = lVar6 + 0x60;
    } while (uVar11 * 0x60 != lVar6);
    if (bVar13) {
      param_2[3] = fVar29;
      fVar30 = (float)local_b8;
      param_2[4] = fVar28;
      param_2[5] = fStack_84;
      param_2[6] = fVar27;
      param_2[7] = fVar21;
      param_2[8] = fVar22;
      fVar27 = fVar27 - *param_3;
      local_98 = CONCAT44(0xffffffff,param_3[1] - fVar28);
      fStack_84 = param_3[2] - fStack_84;
      fVar21 = fVar21 - param_3[1];
      local_e8 = CONCAT44(0xffffffff,fVar27);
      local_b0[1] = *param_3 - fVar29;
      local_d8[1] = fVar21;
      fVar22 = fVar22 - param_3[2];
      local_c0 = CONCAT44(0xffffffff,fVar22);
      if (fVar22 < fStack_84) {
        local_c0 = CONCAT44(local_80,fStack_84);
        local_b8 = CONCAT44(local_78,local_7c);
        lVar5 = 5;
        local_b0[0] = 7.00649e-45;
      }
      else {
        lVar5 = 2;
      }
      afStack_fc[lVar5 * 5 + 5] = fVar22;
      afStack_fc[lVar5 * 5 + 6] = -NAN;
      local_d8[lVar5 * 5 + -2] = fVar30;
      local_d8[lVar5 * 5 + -1] = fVar12;
      local_d8[lVar5 * 5] = 2.8026e-45;
      lVar5 = 4;
      if ((float)local_98 <= local_b0[1]) {
        lVar5 = 3;
      }
      if (fVar21 < afStack_fc[lVar5 * 5 + 5]) {
        uVar2 = *(undefined8 *)(afStack_fc + lVar5 * 5 + 5);
        local_d8[5] = local_d8[lVar5 * 5];
        local_d8[1] = (float)uVar2;
        local_d8[2] = (float)((ulong)uVar2 >> 0x20);
        local_d8[3] = (float)*(undefined8 *)(local_d8 + lVar5 * 5 + -2);
        local_d8[4] = (float)((ulong)*(undefined8 *)(local_d8 + lVar5 * 5 + -2) >> 0x20);
      }
      else {
        lVar5 = 1;
      }
      afStack_fc[lVar5 * 5 + 6] = fVar40;
      local_d8[lVar5 * 5 + -2] = fVar23;
      fVar12 = (float)local_e0;
      afStack_fc[lVar5 * 5 + 5] = fVar21;
      local_d8[lVar5 * 5 + -1] = fVar24;
      local_d8[lVar5 * 5] = 1.4013e-45;
      uVar8 = 1;
      do {
        if ((int)uVar8 < 3) {
          uVar7 = (uint)(afStack_fc[(ulong)(uVar8 * 2 - 1) * 5 + 5] <
                        afStack_fc[(ulong)(uVar8 * 2) * 5 + 5]) | uVar8 << 1;
        }
        else {
          uVar7 = 6;
        }
        uVar11 = (ulong)(uVar7 - 1);
        uVar9 = uVar8 - 1;
        if (afStack_fc[uVar11 * 5 + 5] <= fVar27) goto LAB_03a35b40;
        uVar2 = *(undefined8 *)(afStack_fc + uVar11 * 5 + 5);
        uVar3 = *(undefined8 *)(local_d8 + uVar11 * 5 + -2);
        uVar15 = (ulong)(uVar8 - 1);
        local_d8[uVar15 * 5] = local_d8[uVar11 * 5];
        *(undefined8 *)(afStack_fc + uVar15 * 5 + 5) = uVar2;
        *(undefined8 *)(local_d8 + uVar15 * 5 + -2) = uVar3;
        uVar8 = uVar7;
      } while ((int)uVar7 < 4);
      uVar9 = uVar7 - 1;
LAB_03a35b40:
      uVar8 = 2;
      uVar11 = (ulong)uVar9;
      afStack_fc[uVar11 * 5 + 5] = fVar27;
      afStack_fc[uVar11 * 5 + 6] = -NAN;
      local_d8[uVar11 * 5 + -2] = fVar12;
      local_d8[uVar11 * 5 + -1] = fVar17;
      local_d8[uVar11 * 5] = 0.0;
      fVar33 = fStack_74;
      fVar32 = local_78;
      fVar31 = local_7c;
      fVar30 = local_80;
      fVar12 = fStack_84;
      fStack_74 = local_d8[0];
      fStack_84 = (float)local_e8;
      local_80 = (float)((ulong)local_e8 >> 0x20);
      local_7c = (float)local_e0;
      local_78 = (float)((ulong)local_e0 >> 0x20);
      uVar7 = 1;
      do {
        if ((int)uVar8 < 5) {
          uVar9 = uVar8 | afStack_fc[(long)(int)uVar8 * 5] < afStack_fc[(long)(int)uVar8 * 5 + 5];
        }
        else {
          uVar9 = uVar8;
        }
        lVar5 = (long)(int)(uVar9 - 1);
        iVar10 = uVar7 - 1;
        if (afStack_fc[lVar5 * 5 + 5] <= fVar12) goto LAB_03a35bec;
        uVar2 = *(undefined8 *)(afStack_fc + lVar5 * 5 + 5);
        uVar3 = *(undefined8 *)(local_d8 + lVar5 * 5 + -2);
        lVar6 = (long)(int)(uVar7 - 1);
        local_d8[lVar6 * 5] = local_d8[lVar5 * 5];
        *(undefined8 *)(afStack_fc + lVar6 * 5 + 5) = uVar2;
        *(undefined8 *)(local_d8 + lVar6 * 5 + -2) = uVar3;
        uVar8 = uVar9 << 1;
        uVar7 = uVar9;
      } while ((int)uVar9 < 3);
      iVar10 = uVar9 - 1;
LAB_03a35bec:
      uVar8 = 2;
      lVar5 = (long)iVar10;
      afStack_fc[lVar5 * 5 + 5] = fVar12;
      afStack_fc[lVar5 * 5 + 6] = fVar30;
      local_d8[lVar5 * 5 + -2] = fVar31;
      local_d8[lVar5 * 5 + -1] = fVar32;
      local_d8[lVar5 * 5] = fVar33;
      fVar33 = local_88;
      fVar12 = (float)local_98;
      fVar30 = local_98._4_4_;
      fVar31 = (float)local_90;
      fVar32 = local_90._4_4_;
      local_88 = local_d8[0];
      local_98 = local_e8;
      local_90 = local_e0;
      uVar7 = 1;
      do {
        if ((int)uVar8 < 4) {
          uVar9 = uVar8 | afStack_fc[(long)(int)uVar8 * 5] < afStack_fc[(long)(int)uVar8 * 5 + 5];
        }
        else {
          uVar9 = uVar8;
        }
        lVar5 = (long)(int)(uVar9 - 1);
        iVar10 = uVar7 - 1;
        if (afStack_fc[lVar5 * 5 + 5] <= fVar12) goto LAB_03a35c9c;
        uVar2 = *(undefined8 *)(afStack_fc + lVar5 * 5 + 5);
        uVar3 = *(undefined8 *)(local_d8 + lVar5 * 5 + -2);
        lVar6 = (long)(int)(uVar7 - 1);
        local_d8[lVar6 * 5] = local_d8[lVar5 * 5];
        *(undefined8 *)(afStack_fc + lVar6 * 5 + 5) = uVar2;
        *(undefined8 *)(local_d8 + lVar6 * 5 + -2) = uVar3;
        uVar8 = uVar9 << 1;
        uVar7 = uVar9;
      } while ((int)uVar9 < 3);
      iVar10 = uVar9 - 1;
LAB_03a35c9c:
      lVar5 = (long)iVar10;
      afStack_fc[lVar5 * 5 + 5] = fVar12;
      afStack_fc[lVar5 * 5 + 6] = fVar30;
      local_d8[lVar5 * 5 + -2] = fVar31;
      local_d8[lVar5 * 5 + -1] = fVar32;
      local_d8[lVar5 * 5] = fVar33;
      fVar33 = local_b0[5];
      fVar32 = local_b0[4];
      fVar31 = local_b0[3];
      fVar30 = local_b0[2];
      fVar12 = local_b0[1];
      local_b0[1] = (float)local_e8;
      local_b0[2] = (float)((ulong)local_e8 >> 0x20);
      local_b0[3] = (float)local_e0;
      local_b0[4] = (float)((ulong)local_e0 >> 0x20);
      local_b0[5] = local_d8[0];
      lVar5 = 2;
      if ((float)local_c0 <= local_d8[1]) {
        lVar5 = 1;
      }
      if (fVar12 < afStack_fc[lVar5 * 5 + 5]) {
        local_e8 = *(undefined8 *)(afStack_fc + lVar5 * 5 + 5);
      }
      else {
        lVar5 = 0;
      }
      afStack_fc[lVar5 * 5 + 5] = fVar12;
      local_d8[lVar5 * 5 + -1] = fVar32;
      afStack_fc[lVar5 * 5 + 6] = fVar30;
      local_d8[lVar5 * 5 + -2] = fVar31;
      local_d8[lVar5 * 5] = fVar33;
      if ((float)local_c0 < local_d8[1]) {
        local_e8._0_4_ = local_d8[1];
      }
      uVar11 = (ulong)((float)local_c0 < local_d8[1]);
      afStack_fc[uVar11 * 5 + 5] = (float)local_c0;
      afStack_fc[uVar11 * 5 + 6] = local_c0._4_4_;
      local_d8[uVar11 * 5 + -2] = (float)local_b8;
      local_d8[uVar11 * 5 + -1] = local_b8._4_4_;
      local_d8[uVar11 * 5] = local_b0[0];
      if (local_d8[3] == -NAN) {
        local_d8[1] = 0.0;
        local_d8[3] = local_d8[2];
      }
      else if (local_d8[1] + (float)local_e8 <= 0.0) {
        local_d8[1] = 0.5;
      }
      else {
        local_d8[1] = local_d8[1] / (local_d8[1] + (float)local_e8);
      }
      *param_2 = local_d8[3];
      param_2[1] = local_d8[2];
      param_2[2] = local_d8[1];
      return 1;
    }
  }
  return 0;
}

