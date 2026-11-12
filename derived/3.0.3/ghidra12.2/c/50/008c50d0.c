
void FUN_008c50d0(float param_1,float param_2,float param_3,long param_4,float *param_5)

{
  bool bVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  bool bVar6;
  float *pfVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined **ppuVar11;
  long *plVar12;
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
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_198;
  float fStack_194;
  float local_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  undefined *local_180;
  undefined8 *puStack_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_164;
  undefined8 local_15c;
  undefined8 local_154;
  undefined8 local_14c;
  undefined8 local_144;
  undefined8 local_13c;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_124;
  undefined8 local_11c;
  undefined8 local_114;
  undefined8 local_10c;
  undefined8 local_104;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  
  puVar5 = PTR_DAT_04bb2d00;
  if (*(float *)(param_4 + 0x3097c) < *(float *)(param_4 + 0x30970)) {
    return;
  }
  if (*(float *)(param_4 + 0x30980) < *(float *)(param_4 + 0x30974)) {
    return;
  }
  if (*(float *)(param_4 + 0x30984) < *(float *)(param_4 + 0x30978)) {
    return;
  }
  iVar4 = *(int *)(param_4 + 0x358);
  fVar13 = (*(float *)(param_4 + 0x30970) + *(float *)(param_4 + 0x3097c)) * 0.5;
  bVar1 = 1 < (long)iVar4;
  bVar6 = *(char *)(param_4 + 0x37fae) != '\0';
  lVar10 = *(long *)(param_4 + 0x38028);
  fVar15 = (*(float *)(param_4 + 0x30978) + *(float *)(param_4 + 0x30984)) * 0.5 + -5.0;
  uVar8 = (ulong)(*(uint *)(param_4 + 0x315d4) >> 0x18);
  fVar14 = 3.4028235e+38;
  if (bVar1 && bVar6) {
    fVar14 = fVar13 + -32.5;
  }
  fVar18 = 3.4028235e+38;
  if (bVar1 && bVar6) {
    fVar18 = fVar15 + -30.0;
  }
  fVar27 = -3.4028235e+38;
  if (bVar1 && bVar6) {
    fVar27 = fVar13 + 32.5;
  }
  fVar13 = -3.4028235e+38;
  if (bVar1 && bVar6) {
    fVar13 = fVar15 + 30.0;
  }
  pfVar7 = (float *)(PTR_DAT_04bb2d00 + uVar8 * 0x10);
  fVar15 = (float)(*(uint *)(param_4 + 0x315d4) & 0xffffff) * 5.9604645e-08;
  fVar21 = *pfVar7 + fVar15 * pfVar7[1];
  fVar26 = pfVar7[2] + fVar15 * pfVar7[3];
  fVar28 = -(pfVar7[1] * fVar15) - *pfVar7;
  plVar9 = *(long **)(param_4 + 0x360);
  plVar2 = plVar9 + iVar4;
  fVar24 = fVar21 * 0.0;
  fVar25 = fVar26 * 0.0;
  fVar21 = fVar21 + 0.0;
  fVar29 = fVar24 * 0.0 + 1.0;
  if (lVar10 == 0) {
    fVar19 = 3.4028235e+38;
    fVar16 = -3.4028235e+38;
  }
  else {
    fVar16 = *(float *)(lVar10 + 0x3c);
    fVar19 = *(float *)(lVar10 + 0x40);
    fVar22 = *(float *)(lVar10 + 0x44);
    fVar23 = fVar24 * fVar19 + fVar16 * fVar26 + fVar22 * fVar21;
    fVar17 = fVar25 * fVar19 + fVar16 * fVar28 + fVar22 * fVar26;
    fVar16 = fVar29 * fVar19 + fVar16 * fVar25 + fVar22 * fVar24;
    fVar19 = (float)NEON_fminnm(fVar16,0x7f7fffff);
    fVar22 = fVar23;
    if (fVar14 <= fVar23) {
      fVar22 = fVar14;
    }
    fVar14 = fVar22;
    if (fVar16 <= -3.4028235e+38) {
      fVar16 = -3.4028235e+38;
    }
    fVar22 = fVar17;
    if (fVar18 <= fVar17) {
      fVar22 = fVar18;
    }
    if (fVar23 <= fVar27) {
      fVar23 = fVar27;
    }
    fVar27 = fVar23;
    if (fVar17 <= fVar13) {
      fVar17 = fVar13;
    }
    fVar13 = fVar17;
    fVar18 = fVar22;
    if (iVar4 != 0) {
      lVar10 = *plVar9;
      while (*(int *)(lVar10 + 0x2c) == 1) {
        plVar9 = plVar9 + 1;
        lVar10 = *plVar9;
      }
    }
  }
  fVar17 = fVar18;
  if (plVar9 != plVar2) {
    do {
      plVar12 = plVar9 + 1;
      fVar18 = fVar17;
      if ((char)((long *)*plVar9)[5] != '\0') {
        pfVar7 = (float *)(**(code **)(*(long *)*plVar9 + 0x20))();
        fVar15 = *pfVar7;
        fVar18 = pfVar7[1];
        fVar20 = pfVar7[2];
        fVar22 = fVar24 * fVar18 + fVar15 * fVar26 + fVar20 * fVar21;
        fVar23 = fVar29 * fVar18 + fVar15 * fVar25 + fVar20 * fVar24;
        fVar20 = fVar25 * fVar18 + fVar15 * fVar28 + fVar20 * fVar26;
        fVar15 = fVar22;
        if (fVar14 <= fVar22) {
          fVar15 = fVar14;
        }
        fVar14 = fVar15;
        fVar15 = fVar23;
        if (fVar19 <= fVar23) {
          fVar15 = fVar19;
        }
        fVar19 = fVar15;
        fVar18 = fVar20;
        if (fVar17 <= fVar20) {
          fVar18 = fVar17;
        }
        if (fVar22 <= fVar27) {
          fVar22 = fVar27;
        }
        fVar27 = fVar22;
        if (fVar23 <= fVar16) {
          fVar23 = fVar16;
        }
        fVar16 = fVar23;
        if (fVar13 < fVar20) {
          fVar13 = fVar20;
        }
      }
      lVar10 = *plVar9;
      fVar17 = fVar18;
      plVar9 = plVar12;
    } while (*(char *)(lVar10 + 0x29) == '\0' && plVar12 != plVar2);
    uVar8 = (ulong)(*(uint *)(param_4 + 0x315d4) >> 0x18);
    fVar15 = (float)(*(uint *)(param_4 + 0x315d4) & 0xffffff) * 5.9604645e-08;
  }
  pfVar7 = (float *)(puVar5 + uVar8 * 0x10);
  local_168 = *(undefined4 *)(param_4 + 0x30898);
  local_170 = *(undefined8 *)(param_4 + 0x30890);
  local_130 = *(undefined8 *)(param_4 + 0x308d0);
  local_14c = *(undefined8 *)(param_4 + 0x308b4);
  fVar21 = *pfVar7 + fVar15 * pfVar7[1];
  local_128 = *(undefined4 *)(param_4 + 0x308d8);
  local_13c = *(undefined8 *)(param_4 + 0x308c4);
  fVar15 = pfVar7[2] + fVar15 * pfVar7[3];
  local_144 = *(undefined8 *)(param_4 + 0x308bc);
  local_164 = *(undefined8 *)(param_4 + 0x3089c);
  fVar24 = fVar21 * 0.0;
  if ((fVar18 <= fVar13 && (fVar19 <= fVar16 && fVar14 <= fVar27)) && (bVar1 && bVar6)) {
    fVar13 = fVar13 + 5.0;
    fVar18 = fVar18 + 5.0;
  }
  fVar25 = (fVar27 + fVar14) * 0.5;
  fVar26 = (fVar16 + fVar19) * 0.5;
  local_134 = *(undefined4 *)(param_4 + 0x308cc);
  local_154 = *(undefined8 *)(param_4 + 0x308ac);
  local_15c = *(undefined8 *)(param_4 + 0x308a4);
  local_104 = *(undefined8 *)(param_4 + 0x308fc);
  fVar28 = (fVar18 + fVar13) * 0.5;
  local_10c = *(undefined8 *)(param_4 + 0x308f4);
  local_f4 = *(undefined4 *)(param_4 + 0x3090c);
  local_fc = *(undefined8 *)(param_4 + 0x30904);
  local_11c = *(undefined8 *)(param_4 + 0x308e4);
  local_124 = *(undefined8 *)(param_4 + 0x308dc);
  local_f0 = *(undefined8 *)(param_4 + 0x30910);
  local_114 = *(undefined8 *)(param_4 + 0x308ec);
  local_b4 = *(undefined4 *)(param_4 + 0x3094c);
  local_e8 = *(undefined4 *)(param_4 + 0x30918);
  local_c4 = *(undefined8 *)(param_4 + 0x3093c);
  local_bc = *(undefined8 *)(param_4 + 0x30944);
  local_cc = *(undefined8 *)(param_4 + 0x30934);
  local_d4 = *(undefined8 *)(param_4 + 0x3092c);
  local_dc = *(undefined8 *)(param_4 + 0x30924);
  local_e4 = *(undefined8 *)(param_4 + 0x3091c);
  local_b0 = *(undefined8 *)(param_4 + 0x30950);
  uVar3 = *(uint *)(param_4 + 0x307e8);
  if (uVar3 == 0x62) {
    ppuVar11 = (undefined **)(param_4 + 0x30710);
    (**(code **)(*(long *)(param_4 + 0x30708) + 0x18))((long *)(param_4 + 0x30708));
  }
  else {
    if (0x62 < uVar3) {
      puStack_178 = &DAT_0407ebb1;
      goto LAB_008c55a4;
    }
    ppuVar11 = &PTR_s_cNormal_04922de8 + uVar3;
  }
  puStack_178 = (undefined8 *)*ppuVar11;
LAB_008c55a4:
  local_180 = PTR_DAT_04bb2020 + 0x10;
  local_198 = fVar14;
  fStack_194 = fVar19;
  local_190 = fVar18;
  fStack_18c = fVar27;
  local_188 = fVar16;
  fStack_184 = fVar13;
  FUN_008c68e0(param_4,&local_170,&local_198,&local_180,1,0,1);
  local_e4._4_4_ = ((fVar26 * fVar15 * 0.0 + fVar25 * fVar15) - fVar28 * fVar21) + local_e4._4_4_;
  fVar14 = fVar26 * (fVar24 * 0.0 + 1.0) + fVar25 * fVar24 + fVar28 * fVar15 * 0.0 + (float)local_dc
  ;
  local_dc._4_4_ = fVar26 * fVar24 + fVar25 * (fVar21 + 0.0) + fVar28 * fVar15 + local_dc._4_4_;
  *(float *)(param_4 + 0x31650) =
       local_e4._4_4_ - ((*(float *)(param_4 + 0x2a8) - *(float *)(param_4 + 0x31650)) - param_1);
  *(float *)(param_4 + 0x31654) =
       fVar14 - ((*(float *)(param_4 + 0x2ac) - *(float *)(param_4 + 0x31654)) - param_2);
  *(float *)(param_4 + 0x31658) =
       local_dc._4_4_ - ((*(float *)(param_4 + 0x2b0) - *(float *)(param_4 + 0x31658)) - param_3);
  if (param_5 != (float *)0x0) {
    *param_5 = local_e4._4_4_;
    param_5[1] = fVar14;
    param_5[2] = local_dc._4_4_;
  }
  return;
}

