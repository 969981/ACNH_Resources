
void FUN_03eef320(undefined4 param_1,long param_2)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  float *pfVar10;
  uint uVar11;
  undefined8 *puVar12;
  ushort uVar13;
  float *pfVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  uint uVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
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
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1b8;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_194;
  float local_170;
  float local_14c;
  float fStack_148;
  float local_144;
  float fStack_140;
  float local_13c;
  float fStack_138;
  float local_134;
  undefined8 local_130;
  float local_128;
  float fStack_124;
  float local_120;
  float local_11c;
  float fStack_118;
  undefined8 local_114;
  float local_10c;
  undefined8 local_108;
  float local_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_cc;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float fStack_b0;
  float local_ac;
  
  puVar5 = PTR_DAT_04bd0da0;
  lVar8 = *(long *)(param_2 + 0x18);
  if (lVar8 == 0 || *(long *)(param_2 + 0x20) == 0) {
    return;
  }
  uVar15 = *(uint *)(param_2 + 0x28);
  if ((int)*(uint *)(param_2 + 0x90) <= (int)uVar15) {
    return;
  }
  lVar18 = *(long *)(param_2 + 0x98);
  if (*(uint *)(param_2 + 0x90) <= uVar15) {
    uVar15 = 0;
  }
  plVar23 = (long *)(lVar18 + (long)(int)uVar15 * 0x88 + 0x80);
  lVar24 = *plVar23;
  if (lVar24 == 0) {
    return;
  }
  lVar25 = *(long *)(param_2 + 0x78);
  uVar16 = *(uint *)(param_2 + 0x70);
  if (uVar16 != 0) {
    uVar11 = 0;
    do {
      if (*(long *)(lVar25 + ((long)((ulong)uVar11 << 0x20) >> 0x1a) + 0x38) == 0) {
        return;
      }
      uVar11 = uVar11 + 1;
    } while (uVar16 != uVar11);
  }
  if (((*(char *)(lVar24 + 0x670) != '\0') && (uVar16 != 0)) &&
     (lVar19 = *(long *)(lVar8 + 8), lVar19 != 0)) {
    uVar11 = 0;
    do {
      lVar8 = lVar25 + ((long)((ulong)uVar11 << 0x20) >> 0x1a);
      if (*(short *)(lVar8 + 0x30) != -1 && *(short *)(lVar8 + 0x32) != -1) {
        local_e8 = *(ulong *)puVar5;
        local_e0 = *(undefined8 *)(puVar5 + 8);
        local_d8 = 0;
        local_d0 = 0.0;
        FUN_03ef8788(lVar19,&local_e8,(long)*(short *)(lVar8 + 0x32));
        lVar21 = *(long *)(param_2 + 0x18);
        sVar3 = *(short *)(lVar8 + 0x32);
        FUN_03efa0c0(lVar21,(int)sVar3);
        uVar22 = (uint)sVar3;
        uVar17 = uVar22;
        if (*(uint *)(lVar21 + 0x10) <= (uint)(int)sVar3) {
          uVar17 = 0;
        }
        pfVar14 = (float *)(*(long *)(lVar21 + 0x18) + (long)(int)uVar17 * 0x1c);
        *pfVar14 = (float)local_e8;
        pfVar14[1] = local_e8._4_4_;
        pfVar14[2] = (float)local_e0;
        pfVar14[3] = local_e0._4_4_;
        pfVar14[4] = (float)local_d8;
        pfVar14[5] = local_d8._4_4_;
        pfVar14[6] = local_d0;
        if (*(uint *)(lVar21 + 0x30) <= uVar22) {
          uVar22 = 0;
        }
        *(undefined1 *)(*(long *)(lVar21 + 0x38) + (long)(int)uVar22) = 2;
        *(undefined1 *)(lVar21 + 0x40) = 0;
      }
      uVar11 = uVar11 + 1;
    } while (uVar16 != uVar11);
    lVar8 = *(long *)(param_2 + 0x18);
  }
  uVar9 = (ulong)(uint)local_e8._4_4_;
  local_e8 = uVar9 << 0x20;
  lVar25 = *(long *)(*(long *)(lVar8 + 8) + 0x28);
  fVar30 = *(float *)(param_2 + 0x54) - *(float *)(lVar25 + 0x254);
  fVar26 = *(float *)(param_2 + 0x50) - *(float *)(lVar25 + 0x244);
  fVar33 = *(float *)(param_2 + 0x58) - *(float *)(lVar25 + 0x264);
  fVar57 = fVar30 * *(float *)(lVar25 + 0x248) + fVar26 * *(float *)(lVar25 + 0x238) +
           fVar33 * *(float *)(lVar25 + 600);
  fVar55 = fVar30 * *(float *)(lVar25 + 0x24c) + fVar26 * *(float *)(lVar25 + 0x23c) +
           fVar33 * *(float *)(lVar25 + 0x25c);
  uVar2 = *(ushort *)(param_2 + 0x60);
  fVar26 = fVar30 * *(float *)(lVar25 + 0x250) + fVar26 * *(float *)(lVar25 + 0x240) +
           fVar33 * *(float *)(lVar25 + 0x260);
  if (*(char *)(lVar24 + 0x2f0) == '\0') {
    local_e8 = uVar9 << 0x20;
    uVar13 = uVar2 | 1;
LAB_03eef93c:
    *(ushort *)(param_2 + 0x60) = uVar13;
  }
  else {
    uVar16 = *(uint *)(param_2 + 0x28);
    lVar25 = *(long *)(param_2 + 0x98);
    lVar19 = *plVar23;
    local_130 = 0;
    local_108 = CONCAT44(fVar55,fVar57);
    if (*(uint *)(param_2 + 0x90) <= uVar16) {
      uVar16 = 0;
    }
    lVar21 = lVar25 + (long)(int)uVar16 * 0x88;
    fVar33 = *(float *)(lVar21 + 0x60);
    fVar30 = *(float *)(lVar21 + 0x58);
    fVar56 = *(float *)(lVar21 + 0x5c);
    local_100 = fVar26;
    if ((*(short *)(lVar21 + 0x40) != -1) && (*(short *)(lVar21 + 0x42) != -1)) {
      uVar17 = (uint)*(short *)(lVar21 + 0x42);
      uVar11 = uVar17;
      if (*(uint *)(lVar8 + 0x30) <= uVar17) {
        uVar11 = 0;
      }
      if ((*(byte *)(*(long *)(lVar8 + 0x38) + (long)(int)uVar11) >> 1 & 1) == 0) {
        if (*(uint *)(lVar8 + 0x20) <= uVar17) {
          uVar17 = 0;
        }
        pfVar14 = (float *)(*(long *)(lVar8 + 0x28) + (long)(int)uVar17 * 0x1c);
      }
      else {
        pfVar14 = (float *)FUN_03ef9df0();
      }
      fVar27 = pfVar14[2];
      fVar31 = pfVar14[3];
      fVar41 = *pfVar14;
      fVar37 = pfVar14[1];
      fVar34 = -(fVar27 * fVar56) + fVar33 * fVar37 + fVar30 * fVar31;
      fVar45 = (fVar30 * fVar27 - fVar33 * fVar41) + fVar56 * fVar31;
      fVar48 = -(fVar37 * fVar30) + fVar56 * fVar41 + fVar33 * fVar31;
      fVar33 = (-(fVar37 * fVar56) - fVar30 * fVar41) - fVar33 * fVar27;
      fVar30 = pfVar14[4] +
               ((-(fVar27 * fVar45) + fVar31 * fVar34 + fVar37 * fVar48) - fVar41 * fVar33);
      fVar56 = pfVar14[5] +
               (((fVar31 * fVar45 + fVar27 * fVar34) - fVar41 * fVar48) - fVar37 * fVar33);
      fVar33 = pfVar14[6] +
               (((fVar41 * fVar45 - fVar37 * fVar34) + fVar31 * fVar48) - fVar27 * fVar33);
    }
    fVar27 = *(float *)(lVar21 + 0x48);
    fVar34 = *(float *)(lVar21 + 0x4c);
    lVar25 = lVar25 + (long)(int)uVar16 * 0x88;
    fVar37 = *(float *)(lVar21 + 0x50);
    fVar31 = *(float *)(lVar21 + 0x54);
    if (*(short *)(lVar25 + 0x44) != -1) {
      sVar3 = *(short *)(lVar25 + 0x46);
      if (sVar3 != -1) {
        lVar8 = *(long *)(param_2 + 0x18);
        uVar11 = (uint)sVar3;
        uVar16 = uVar11;
        if (*(uint *)(lVar8 + 0x30) <= uVar11) {
          uVar16 = 0;
        }
        if ((*(byte *)(*(long *)(lVar8 + 0x38) + (long)(int)uVar16) >> 1 & 1) == 0) {
          if (*(uint *)(lVar8 + 0x20) <= uVar11) {
            uVar11 = 0;
          }
          pfVar14 = (float *)(*(long *)(lVar8 + 0x28) + (long)(int)uVar11 * 0x1c);
        }
        else {
          pfVar14 = (float *)FUN_03ef9df0();
        }
        fVar28 = *pfVar14;
        fVar32 = pfVar14[1];
        fVar40 = fVar28 * fVar27;
        fVar38 = pfVar14[2];
        fVar35 = pfVar14[3];
        fVar42 = fVar28 * fVar37;
        fVar45 = fVar34 * fVar32;
        fVar41 = fVar37 * fVar32;
        fVar48 = fVar37 * fVar38;
        fVar39 = fVar34 * fVar38;
        fVar37 = ((fVar34 * fVar28 + fVar37 * fVar35) - fVar27 * fVar32) + fVar31 * fVar38;
        fVar34 = -fVar42 + fVar34 * fVar35 + fVar31 * fVar32 + fVar27 * fVar38;
        fVar27 = (fVar31 * fVar28 + fVar27 * fVar35 + fVar41) - fVar39;
        fVar31 = ((-fVar40 + fVar31 * fVar35) - fVar45) - fVar48;
      }
    }
    local_d8 = CONCAT44(fVar56,fVar30);
    local_e0 = CONCAT44(fVar31,fVar37);
    local_d0 = fVar33;
    local_e8._0_4_ = fVar27;
    local_e8._4_4_ = fVar34;
    FUN_03ee49d4(&local_e8,&local_108,&local_108);
    fVar30 = SQRT(local_108._4_4_ * local_108._4_4_ + (float)local_108 * (float)local_108 +
                  local_100 * local_100);
    if (0.0 < fVar30) {
      fVar33 = 1.0 / fVar30;
      local_108 = CONCAT44(local_108._4_4_ * fVar33,(float)local_108 * fVar33);
      local_100 = local_100 * fVar33;
    }
    if (fVar30 == 0.0) {
      local_e8 = (ulong)(uint)local_e8._4_4_ << 0x20;
      uVar13 = *(ushort *)(param_2 + 0x60) & 0xfffe;
      goto LAB_03eef93c;
    }
    uVar9 = FUN_03efb110(&local_130,0,PTR_DAT_04bd0da0,&local_108,PTR_DAT_04bb4bd0,PTR_DAT_04bb3ea0,
                         PTR_DAT_04bb4bc8);
    if ((uVar9 & 1) == 0) {
      local_130 = 0x40490fdb;
    }
    local_e8 = (ulong)(uint)local_e8._4_4_ << 0x20;
    uVar13 = *(ushort *)(param_2 + 0x60);
    if ((uVar13 & 1) != 0) {
      if ((fVar30 <= *(float *)(lVar19 + 0x4f0)) && (*(float *)(lVar19 + 0x510) <= fVar30)) {
        uVar9 = FUN_03ef4c2c(-*(float *)(lVar19 + 0x410),*(undefined4 *)(lVar19 + 0x3f0),
                             -*(float *)(lVar19 + 0x450),*(undefined4 *)(lVar19 + 0x430),&local_130)
        ;
        uVar13 = *(ushort *)(param_2 + 0x60);
        if ((uVar9 & 1) != 0) goto LAB_03eef940;
      }
      local_e8 = local_e8 & 0xffffffff00000000;
      uVar13 = uVar13 & 0xfffe;
      goto LAB_03eef93c;
    }
    if ((fVar30 < *(float *)(lVar19 + 0x4f0) - *(float *)(lVar19 + 0x530)) &&
       (*(float *)(lVar19 + 0x510) + *(float *)(lVar19 + 0x550) < fVar30)) {
      uVar9 = FUN_03ef4c2c(*(float *)(lVar19 + 0x490) - *(float *)(lVar19 + 0x410),
                           *(float *)(lVar19 + 0x3f0) - *(float *)(lVar19 + 0x470),
                           *(float *)(lVar19 + 0x4d0) - *(float *)(lVar19 + 0x450),
                           *(float *)(lVar19 + 0x430) - *(float *)(lVar19 + 0x4b0),&local_130);
      uVar13 = *(ushort *)(param_2 + 0x60);
      if ((uVar9 & 1) != 0) {
        local_e8 = local_e8 & 0xffffffff00000000;
        uVar13 = uVar13 | 1;
        goto LAB_03eef93c;
      }
    }
  }
LAB_03eef940:
  local_e8 = local_e8 & 0xffffffff00000000;
  if ((uVar13 & 1) == 0) {
    fVar26 = 1.0;
    if (*(int *)(param_2 + 0x70) != 0) {
      fVar26 = 1.0;
      fVar30 = 0.0;
      fVar33 = 0.0;
      fVar55 = 0.0;
      uVar15 = *(int *)(param_2 + 0x70) - 1;
      do {
        uVar9 = (ulong)uVar15;
        uVar15 = uVar15 - 1;
        lVar8 = *(long *)(param_2 + 0x78) + ((long)(uVar9 << 0x20) >> 0x1a);
        fVar41 = *(float *)(lVar8 + 0x10);
        fVar45 = *(float *)(lVar8 + 0x14);
        fVar37 = *(float *)(lVar8 + 0x18);
        fVar48 = *(float *)(lVar8 + 0x1c);
        fVar39 = fVar55 * fVar45;
        fVar57 = fVar41 * fVar26;
        fVar34 = fVar55 * fVar37;
        fVar56 = fVar45 * fVar26;
        fVar27 = fVar37 * fVar26;
        fVar31 = fVar41 * fVar33;
        fVar26 = ((-(fVar55 * fVar41) + fVar48 * fVar26) - fVar45 * fVar33) - fVar37 * fVar30;
        fVar55 = (fVar55 * fVar48 + fVar57 + fVar37 * fVar33) - fVar45 * fVar30;
        fVar33 = -fVar34 + fVar56 + fVar48 * fVar33 + fVar41 * fVar30;
        fVar30 = ((fVar39 + fVar27) - fVar31) + fVar48 * fVar30;
      } while (uVar15 != 0xffffffff);
    }
    fVar30 = -fVar26;
    if (0.0 <= fVar26) {
      fVar30 = fVar26;
    }
    fVar26 = 1.0;
    if (fVar30 <= 1.0) {
      fVar26 = fVar30;
    }
    fVar33 = 0.0;
    if (0.0 <= fVar30) {
      fVar33 = fVar26;
    }
    fVar26 = acosf(fVar33);
    lVar8 = *(long *)(param_2 + 0x78);
    uVar15 = *(uint *)(param_2 + 0x70);
    if (fVar26 + fVar26 <= 0.00017453292) {
      if (uVar15 == 0) {
        return;
      }
      uVar16 = 0;
      do {
        lVar18 = lVar8 + ((long)((ulong)uVar16 << 0x20) >> 0x1a);
        *(undefined8 *)(lVar18 + 0x10) = 0;
        *(undefined8 *)(lVar18 + 0x18) = 0x3f80000000000000;
        uVar16 = uVar16 + 1;
      } while (uVar15 != uVar16);
      return;
    }
    if (uVar15 != 0) {
      uVar16 = 0;
      do {
        puVar12 = (undefined8 *)(lVar8 + ((long)((ulong)uVar16 << 0x20) >> 0x1a));
        *puVar12 = 0;
        puVar12[1] = 0x3f80000000000000;
        uVar16 = uVar16 + 1;
      } while (uVar15 != uVar16);
    }
    FUN_03ef2e30(param_1,*(undefined4 *)(lVar24 + 0x630),param_2);
    FUN_03ef2c1c(&local_e8,param_2);
    fVar33 = (float)local_e8 * (float)local_e8 + local_e0._4_4_ * local_e0._4_4_ +
             local_e8._4_4_ * local_e8._4_4_ + (float)local_e0 * (float)local_e0;
    fStack_fc = local_e0._4_4_;
    fVar26 = (float)local_e8;
    fVar30 = local_e8._4_4_;
    local_100 = (float)local_e0;
    if (1.1920929e-07 < fVar33) {
      fVar33 = 1.0 / fVar33;
      fStack_fc = local_e0._4_4_ * fVar33;
      fVar26 = (float)local_e8 * fVar33;
      fVar30 = local_e8._4_4_ * fVar33;
      local_100 = (float)local_e0 * fVar33;
    }
    local_100 = -local_100;
    fVar30 = -fVar30;
    fVar26 = -fVar26;
    local_108 = CONCAT44(fVar30,fVar26);
    puVar12 = &local_e8;
    pfVar14 = (float *)&local_108;
    fVar57 = -(local_100 * local_d8._4_4_) + local_d0 * fVar30 + (float)local_d8 * fStack_fc;
    fVar56 = (local_100 * (float)local_d8 - local_d0 * fVar26) + local_d8._4_4_ * fStack_fc;
    fVar55 = -(fVar30 * (float)local_d8) + local_d8._4_4_ * fVar26 + local_d0 * fStack_fc;
    fVar33 = (-(fVar30 * local_d8._4_4_) - (float)local_d8 * fVar26) - local_d0 * local_100;
    local_f8 = -(fVar33 * -fVar26) - (-(local_100 * fVar56) + fStack_fc * fVar57 + fVar30 * fVar55);
    fStack_f4 = -(fVar33 * -fVar30) - ((fStack_fc * fVar56 + local_100 * fVar57) - fVar26 * fVar55);
    local_f0 = -(fVar33 * -local_100) - ((fVar26 * fVar56 - fVar30 * fVar57) + fStack_fc * fVar55);
    goto LAB_03ef2490;
  }
  FUN_03ef2c1c(&local_130,param_2);
  puVar6 = PTR_DAT_04bd0da0;
  puVar5 = PTR_DAT_04bb4bd0;
  fVar30 = (float)local_130;
  fVar33 = local_130._4_4_;
  fVar56 = (float)local_130 * (float)local_130 + fStack_124 * fStack_124 +
           local_130._4_4_ * local_130._4_4_ + local_128 * local_128;
  if (fVar56 <= 1.1920929e-07) {
    fVar34 = fStack_124;
    fVar27 = local_130._4_4_;
    fVar31 = local_128;
    fVar56 = (float)local_130;
  }
  else {
    fVar56 = 1.0 / fVar56;
    fVar34 = fStack_124 * fVar56;
    fVar27 = local_130._4_4_ * fVar56;
    fVar31 = local_128 * fVar56;
    fVar56 = (float)local_130 * fVar56;
  }
  fVar56 = -fVar56;
  fVar31 = -fVar31;
  fVar27 = -fVar27;
  fVar35 = -fVar56;
  fVar38 = -fVar27;
  fVar32 = -fVar31;
  lVar8 = *plVar23;
  fVar37 = -(fVar31 * local_11c) + fStack_118 * fVar27 + local_120 * fVar34;
  fVar41 = (fVar31 * local_120 - fStack_118 * fVar56) + local_11c * fVar34;
  fVar45 = -(fVar27 * local_120) + local_11c * fVar56 + fStack_118 * fVar34;
  fVar39 = (-(fVar27 * local_11c) - local_120 * fVar56) - fStack_118 * fVar31;
  fVar42 = -(fVar31 * fVar41) + fVar34 * fVar37 + fVar27 * fVar45;
  fVar28 = (fVar34 * fVar41 + fVar31 * fVar37) - fVar56 * fVar45;
  fVar37 = (fVar56 * fVar41 - fVar27 * fVar37) + fVar34 * fVar45;
  local_13c = -(fVar39 * fVar35) - fVar42;
  fStack_138 = -(fVar39 * fVar38) - fVar28;
  fVar48 = -(fVar27 * fVar57) + fVar55 * fVar56 + fVar26 * fVar34;
  local_134 = -(fVar39 * fVar32) - fVar37;
  fVar41 = -(fVar31 * fVar55) + fVar26 * fVar27 + fVar57 * fVar34;
  fVar40 = (-(fVar27 * fVar55) - fVar57 * fVar56) - fVar26 * fVar31;
  fVar45 = (fVar57 * fVar31 - fVar26 * fVar56) + fVar55 * fVar34;
  local_c0 = ((-(fVar31 * fVar45) + fVar34 * fVar41 + fVar27 * fVar48) - fVar56 * fVar40) -
             (fVar42 - fVar56 * fVar39);
  local_bc = (((fVar34 * fVar45 + fVar31 * fVar41) - fVar56 * fVar48) - fVar27 * fVar40) -
             (fVar28 - fVar27 * fVar39);
  local_b8 = (((fVar56 * fVar45 - fVar27 * fVar41) + fVar34 * fVar48) - fVar31 * fVar40) -
             (fVar37 - fVar31 * fVar39);
  fVar37 = SQRT(local_bc * local_bc + local_c0 * local_c0 + local_b8 * local_b8);
  if (0.0 < fVar37) {
    fVar41 = 1.0 / fVar37;
    local_c0 = local_c0 * fVar41;
    local_bc = local_bc * fVar41;
    local_b8 = local_b8 * fVar41;
  }
  local_14c = fVar56;
  fStack_148 = fVar27;
  local_144 = fVar31;
  fStack_140 = fVar34;
  local_b4 = fVar57;
  fStack_b0 = fVar55;
  local_ac = fVar26;
  if (fVar37 == 0.0) {
    uVar15 = *(uint *)(param_2 + 0x70);
    if (uVar15 != 0) {
      lVar8 = *(long *)(param_2 + 0x78);
      uVar16 = 0;
      do {
        puVar12 = (undefined8 *)(lVar8 + ((long)((ulong)uVar16 << 0x20) >> 0x1a));
        *puVar12 = 0;
        puVar12[1] = 0x3f80000000000000;
        uVar16 = uVar16 + 1;
      } while (uVar15 != uVar16);
      goto LAB_03ef1fe4;
    }
LAB_03eefce0:
    fVar26 = *(float *)(lVar24 + 0x650);
LAB_03ef20ec:
    fVar57 = 1.0;
    fVar55 = 0.0;
    fVar33 = 0.0;
    fVar30 = 0.0;
    fVar27 = 0.0;
    fVar31 = 0.0;
    fVar56 = 0.0;
    fVar34 = 1.0;
  }
  else {
    fVar26 = *(float *)(lVar8 + 0xe0);
    if (fVar26 == 0.0) {
      uVar15 = *(uint *)(param_2 + 0x70);
      if (uVar15 == 0) goto LAB_03eefce0;
      lVar8 = *(long *)(param_2 + 0x78);
      uVar16 = 0;
      do {
        puVar12 = (undefined8 *)(lVar8 + ((long)((ulong)uVar16 << 0x20) >> 0x1a));
        *puVar12 = 0;
        puVar12[1] = 0x3f80000000000000;
        uVar16 = uVar16 + 1;
      } while (uVar15 != uVar16);
    }
    else {
      local_cc = 0;
      local_c4 = 0.0;
      uVar9 = FUN_03efb110(&local_cc,0,PTR_DAT_04bd0da0,&local_c0,PTR_DAT_04bb4bd0,PTR_DAT_04bb3ea0,
                           PTR_DAT_04bb4bc8);
      if ((uVar9 & 1) == 0) {
        local_c4 = 0.0;
        local_cc = 0x40490fdb;
      }
      local_1cc = 0.0;
      if ((*(int *)(param_2 + 0x70) == 0) || (*(short *)(*(long *)(param_2 + 0x78) + 0x30) == -1)) {
        local_1d4 = 0.0;
        local_1d0 = 0.0;
        local_1dc = 0.0;
        local_1d8 = 1.0;
        local_1e4 = 0.0;
        local_1e0 = 0.0;
      }
      else {
        sVar3 = *(short *)(*(long *)(param_2 + 0x78) + 0x32);
        local_1d4 = 0.0;
        local_1d0 = 0.0;
        local_1dc = 0.0;
        local_1d8 = 1.0;
        local_1e4 = 0.0;
        local_1e0 = 0.0;
        if (sVar3 != -1) {
          lVar25 = *(long *)(param_2 + 0x18);
          uVar11 = (uint)sVar3;
          uVar16 = uVar11;
          if (*(uint *)(lVar25 + 0x30) <= uVar11) {
            uVar16 = 0;
          }
          if ((*(byte *)(*(long *)(lVar25 + 0x38) + (long)(int)uVar16) >> 1 & 1) == 0) {
            if (*(uint *)(lVar25 + 0x20) <= uVar11) {
              uVar11 = 0;
            }
            pfVar14 = (float *)(*(long *)(lVar25 + 0x28) + (long)(int)uVar11 * 0x1c);
          }
          else {
            pfVar14 = (float *)FUN_03ef9df0();
          }
          local_1d4 = *pfVar14;
          local_1d0 = pfVar14[1];
          local_1cc = pfVar14[2];
          local_1e4 = pfVar14[4];
          local_1d8 = pfVar14[3];
          local_1e0 = pfVar14[5];
          local_1dc = pfVar14[6];
        }
      }
      fVar55 = (float)local_cc;
      fVar57 = local_cc._4_4_;
      if (fVar26 != 1.0) {
        fVar39 = 0.0;
        fVar41 = 0.0;
        fVar40 = 1.0;
        fVar45 = local_b8 + local_bc * 0.0 + local_c0 * 0.0 + 1.0;
        fVar48 = 0.0;
        if (1.1920929e-06 < fVar45) {
          fVar28 = local_c0 * -0.0;
          fVar42 = local_bc * 0.0;
          fVar39 = local_b8 * 0.0 - local_bc;
          fVar41 = SQRT(fVar45 + fVar45);
          fVar40 = local_c0 + local_b8 * -0.0;
          if (NAN(fVar41)) {
            fVar41 = sqrtf(fVar45 + fVar45);
          }
          fVar48 = fVar41 * 0.5;
          fVar41 = 1.0 / fVar41;
          fVar39 = fVar39 * fVar41;
          fVar40 = fVar40 * fVar41;
          fVar41 = (fVar28 + fVar42) * fVar41;
        }
        fVar42 = fVar48 + fVar40 * 0.0 + fVar39 * 0.0 + fVar41 * 0.0;
        fVar45 = 1.0;
        if ((fVar42 <= 1.0) && (fVar45 = fVar42, fVar42 < -1.0)) {
          fVar45 = -1.0;
        }
        fVar42 = fVar45;
        if (fVar45 < 0.0) {
          fVar42 = -fVar45;
        }
        fVar28 = acosf(fVar42);
        fVar44 = sinf(fVar28);
        fVar42 = -fVar44;
        if (0.0 <= fVar44) {
          fVar42 = fVar44;
        }
        if (1.1920929e-07 <= fVar42) {
          fVar47 = sinf(fVar28 - fVar26 * fVar28);
          fVar47 = (1.0 / fVar44) * fVar47;
          fVar42 = sinf(fVar26 * fVar28);
          fVar42 = (1.0 / fVar44) * fVar42;
        }
        else {
          fVar47 = 1.0 - fVar26;
          fVar42 = fVar26;
        }
        if (fVar45 < 0.0) {
          fVar42 = -fVar42;
        }
        fVar28 = fVar40 * fVar42 + fVar47 * 0.0;
        fVar40 = fVar41 * fVar42 + fVar47 * 0.0;
        fVar41 = fVar39 * fVar42 + fVar47 * 0.0;
        fVar47 = fVar47 + fVar48 * fVar42;
        fVar39 = (fVar28 - fVar40 * 0.0) + fVar47 * 0.0;
        fVar45 = (fVar40 * 0.0 - fVar41) + fVar47 * 0.0;
        fVar42 = fVar47 + fVar28 * -0.0 + fVar41 * 0.0;
        fVar48 = (fVar28 * -0.0 + fVar41 * -0.0) - fVar40;
        local_c0 = (-(fVar40 * fVar45) + fVar47 * fVar39 + fVar28 * fVar42) - fVar41 * fVar48;
        local_bc = ((fVar47 * fVar45 + fVar40 * fVar39) - fVar41 * fVar42) - fVar28 * fVar48;
        local_b8 = ((fVar41 * fVar45 - fVar28 * fVar39) + fVar47 * fVar42) - fVar40 * fVar48;
        if (*(char *)(lVar8 + 0x1e0) != '\0') {
          fVar39 = fVar37 * local_b8;
          fVar45 = fVar37 * local_bc;
          fVar41 = fVar37 * local_c0;
          fVar40 = -(local_128 * fVar45) + fVar39 * fVar33 + fVar41 * fStack_124;
          fVar42 = (local_128 * fVar41 - fVar39 * fVar30) + fVar45 * fStack_124;
          fVar48 = -(fVar33 * fVar41) + fVar45 * fVar30 + fVar39 * fStack_124;
          fVar41 = (-(fVar33 * fVar45) - fVar41 * fVar30) - fVar39 * local_128;
          local_b4 = local_120 +
                     ((-(local_128 * fVar42) + fStack_124 * fVar40 + fVar33 * fVar48) -
                     fVar30 * fVar41);
          fStack_b0 = local_11c +
                      (((fStack_124 * fVar42 + local_128 * fVar40) - fVar30 * fVar48) -
                      fVar33 * fVar41);
          local_ac = fStack_118 +
                     (((fVar30 * fVar42 - fVar33 * fVar40) + fStack_124 * fVar48) -
                     local_128 * fVar41);
        }
        uVar9 = FUN_03efb110(&local_cc,0,PTR_DAT_04bd0da0,&local_c0,PTR_DAT_04bb4bd0,
                             PTR_DAT_04bb3ea0,PTR_DAT_04bb4bc8);
        if ((uVar9 & 1) == 0) {
          local_c4 = 0.0;
          local_cc = 0x40490fdb;
        }
      }
      if (*(char *)(lVar8 + 0x570) == '\0') goto LAB_03ef0acc;
      fVar45 = 1.0 / fVar26;
      fVar48 = -(*(float *)(lVar8 + 0x5d0) * fVar45);
      fVar39 = fVar45 * *(float *)(lVar8 + 0x5b0);
      fVar41 = 1.5620697;
      if (fVar48 <= 3.1241393) {
        fVar41 = fVar48 * 0.5;
      }
      fVar40 = 1.5620697;
      if (fVar39 <= 3.1241393) {
        fVar40 = fVar39 * 0.5;
      }
      fVar28 = -(*(float *)(lVar8 + 0x610) * fVar45);
      fVar42 = 1.5620697;
      if (fVar28 <= 3.1241393) {
        fVar42 = fVar28 * 0.5;
      }
      fVar47 = fVar45 * *(float *)(lVar8 + 0x5f0);
      fVar44 = 1.5620697;
      if (fVar47 <= 3.1241393) {
        fVar44 = fVar47 * 0.5;
      }
      fVar50 = tanf(fVar57 * 0.5);
      fVar29 = tanf(fVar55 * 0.5);
      fVar43 = -fVar50;
      if (0.0 <= fVar50) {
        fVar43 = fVar50;
      }
      if (1e+07 < fVar43) {
LAB_03ef0378:
        fVar41 = 3.1241393;
        fVar48 = -3.1241393;
        local_114 = 0;
        fVar40 = -(*(float *)(lVar8 + 0x610) * fVar45);
        fVar39 = fVar41;
        if (fVar40 <= 3.1241393) {
          fVar39 = fVar40;
        }
        fVar42 = fVar48;
        if (-3.1241393 <= fVar40) {
          fVar42 = fVar39;
        }
        fVar40 = fVar45 * *(float *)(lVar8 + 0x5f0);
        fVar39 = fVar41;
        if (fVar40 <= 3.1241393) {
          fVar39 = fVar40;
        }
        fVar28 = fVar48;
        if (-3.1241393 <= fVar40) {
          fVar28 = fVar39;
        }
        fVar40 = -(*(float *)(lVar8 + 0x5d0) * fVar45);
        fVar39 = fVar41;
        if (fVar40 <= 3.1241393) {
          fVar39 = fVar40;
        }
        fVar44 = fVar48;
        if (-3.1241393 <= fVar40) {
          fVar44 = fVar39;
        }
        fVar45 = fVar45 * *(float *)(lVar8 + 0x5b0);
        if (fVar45 <= 3.1241393) {
          fVar41 = fVar45;
        }
        if (-3.1241393 <= fVar45) {
          fVar48 = fVar41;
        }
        FUN_03efb62c(fVar55,fVar57,*(undefined4 *)(lVar8 + 0x690),fVar42,fVar28,fVar44,fVar48,
                     &local_114,(long)&local_114 + 4,param_2 + 0x5c);
        uVar20 = *(ulong *)puVar5;
        fVar55 = *(float *)(puVar5 + 8);
        local_e0 = CONCAT44(local_e0._4_4_,fVar55);
        local_e8 = uVar20;
        uVar9 = FUN_03ef4a78(&local_e8,&local_114,puVar5,PTR_DAT_04bb3ea0,PTR_DAT_04bb4bc8);
        if ((uVar9 & 1) == 0) {
          local_e8 = 0x8000000080000000;
          local_e0 = CONCAT44(local_e0._4_4_,0xbf800000);
        }
        if (fVar26 != 1.0) {
          fVar57 = 0.0;
          fVar41 = 0.0;
          fVar39 = 1.0;
          fVar45 = (float)local_e0 + local_e8._4_4_ * 0.0 + (float)local_e8 * 0.0 + 1.0;
          fVar48 = 0.0;
          if (1.1920929e-06 < fVar45) {
            fVar48 = (float)local_e0 * 0.0 - local_e8._4_4_;
            fVar42 = (float)local_e8 * -0.0;
            fVar40 = local_e8._4_4_ * 0.0;
            fVar57 = SQRT(fVar45 + fVar45);
            fVar39 = (float)local_e8 + (float)local_e0 * -0.0;
            if (NAN(fVar57)) {
              fVar57 = sqrtf(fVar45 + fVar45);
            }
            fVar41 = 1.0 / fVar57;
            fVar57 = fVar57 * 0.5;
            fVar48 = fVar48 * fVar41;
            fVar39 = fVar39 * fVar41;
            fVar41 = (fVar42 + fVar40) * fVar41;
          }
          fVar40 = fVar57 + fVar39 * 0.0 + fVar48 * 0.0 + fVar41 * 0.0;
          fVar45 = 1.0;
          if ((fVar40 <= 1.0) && (fVar45 = fVar40, fVar40 < -1.0)) {
            fVar45 = -1.0;
          }
          fVar40 = fVar45;
          if (fVar45 < 0.0) {
            fVar40 = -fVar45;
          }
          fVar42 = acosf(fVar40);
          fVar28 = sinf(fVar42);
          fVar40 = -fVar28;
          if (0.0 <= fVar28) {
            fVar40 = fVar28;
          }
          if (1.1920929e-07 <= fVar40) {
            fVar40 = sinf(fVar42 - fVar26 * fVar42);
            fVar40 = (1.0 / fVar28) * fVar40;
            fVar26 = sinf(fVar26 * fVar42);
            fVar26 = (1.0 / fVar28) * fVar26;
          }
          else {
            fVar40 = 1.0 - fVar26;
          }
          if (fVar45 < 0.0) {
            fVar26 = -fVar26;
          }
          fVar45 = fVar48 * fVar26 + fVar40 * 0.0;
          fVar48 = fVar39 * fVar26 + fVar40 * 0.0;
          fVar41 = fVar41 * fVar26 + fVar40 * 0.0;
          fVar40 = fVar40 + fVar57 * fVar26;
          fVar39 = (fVar48 - fVar41 * 0.0) + fVar40 * 0.0;
          fVar26 = (fVar41 * 0.0 - fVar45) + fVar40 * 0.0;
          fVar57 = (fVar48 * -0.0 + fVar45 * -0.0) - fVar41;
          fVar42 = fVar40 + fVar48 * -0.0 + fVar45 * 0.0;
          local_e8 = CONCAT44(((fVar40 * fVar26 + fVar41 * fVar39) - fVar45 * fVar42) -
                              fVar48 * fVar57,
                              (-(fVar41 * fVar26) + fVar40 * fVar39 + fVar48 * fVar42) -
                              fVar45 * fVar57);
          local_e0 = CONCAT44(local_e0._4_4_,
                              ((fVar45 * fVar26 - fVar48 * fVar39) + fVar40 * fVar42) -
                              fVar41 * fVar57);
        }
        fVar26 = *(float *)(lVar8 + 0x590);
        if (fVar26 != 0.0) {
          local_108 = uVar20;
          local_100 = fVar55;
          uVar9 = FUN_03ef4a78(&local_108,&local_cc,puVar5,PTR_DAT_04bb3ea0,PTR_DAT_04bb4bc8);
          bVar7 = (uVar9 & 1) == 0;
          fVar55 = local_100;
          if (bVar7) {
            fVar55 = -1.0;
          }
          fVar41 = local_108._4_4_;
          fVar57 = (float)local_108;
          if (bVar7) {
            fVar57 = -0.0;
            fVar41 = -0.0;
          }
          fVar45 = fVar41 * local_e8._4_4_ + fVar57 * (float)local_e8 + fVar55 * (float)local_e0 +
                   1.0;
          if (fVar45 <= 1.1920929e-06) {
            if ((local_e8._4_4_ < -1.1920929e-06) || (1.1920929e-06 < local_e8._4_4_)) {
              fVar55 = ((float)local_e8 * (float)local_e8) / (local_e8._4_4_ * local_e8._4_4_);
              fVar57 = 1.0 / (fVar55 + 1.0);
              fVar55 = fVar55 * fVar57;
              fVar41 = -SQRT(fVar57);
              fVar57 = SQRT(fVar55);
              if (NAN(fVar57)) {
                fVar57 = sqrtf(fVar55);
              }
            }
            else {
              fVar41 = 0.0;
              fVar57 = 1.0;
            }
            fVar45 = 0.0;
            fVar48 = 0.0;
          }
          else {
            fVar40 = local_e8._4_4_ * fVar57;
            fVar39 = fVar41 * (float)local_e8;
            fVar42 = (float)local_e8 * fVar55;
            fVar57 = fVar57 * (float)local_e0;
            fVar41 = (float)local_e0 * fVar41;
            fVar55 = fVar55 * local_e8._4_4_;
            fVar48 = SQRT(fVar45 + fVar45);
            if (NAN(fVar48)) {
              fVar48 = sqrtf(fVar45 + fVar45);
            }
            fVar45 = fVar48 * 0.5;
            fVar48 = 1.0 / fVar48;
            fVar41 = (-fVar41 + fVar55) * fVar48;
            fVar57 = (-fVar42 + fVar57) * fVar48;
            fVar48 = (-fVar40 + fVar39) * fVar48;
          }
          fVar39 = fVar45 + fVar57 * 0.0 + fVar41 * 0.0 + fVar48 * 0.0;
          fVar55 = 1.0;
          if ((fVar39 <= 1.0) && (fVar55 = fVar39, fVar39 < -1.0)) {
            fVar55 = -1.0;
          }
          fVar39 = fVar55;
          if (fVar55 < 0.0) {
            fVar39 = -fVar55;
          }
          fVar40 = acosf(fVar39);
          fVar42 = sinf(fVar40);
          fVar39 = -fVar42;
          if (0.0 <= fVar42) {
            fVar39 = fVar42;
          }
          if (1.1920929e-07 <= fVar39) {
            fVar39 = sinf(fVar40 - fVar26 * fVar40);
            fVar39 = (1.0 / fVar42) * fVar39;
            fVar26 = sinf(fVar26 * fVar40);
            fVar26 = (1.0 / fVar42) * fVar26;
          }
          else {
            fVar39 = 1.0 - fVar26;
          }
          if (fVar55 < 0.0) {
            fVar26 = -fVar26;
          }
          fVar41 = fVar41 * fVar26 + fVar39 * 0.0;
          fVar57 = fVar57 * fVar26 + fVar39 * 0.0;
          fVar55 = fVar48 * fVar26 + fVar39 * 0.0;
          fVar39 = fVar39 + fVar45 * fVar26;
          fVar48 = -(fVar55 * local_e8._4_4_) + (float)local_e0 * fVar57 + (float)local_e8 * fVar39;
          fVar40 = (fVar55 * (float)local_e8 - (float)local_e0 * fVar41) + local_e8._4_4_ * fVar39;
          fVar45 = -(fVar57 * (float)local_e8) + local_e8._4_4_ * fVar41 + (float)local_e0 * fVar39;
          fVar26 = (-(fVar57 * local_e8._4_4_) - (float)local_e8 * fVar41) -
                   (float)local_e0 * fVar55;
          local_e8 = CONCAT44(((fVar39 * fVar40 + fVar55 * fVar48) - fVar41 * fVar45) -
                              fVar57 * fVar26,
                              (-(fVar55 * fVar40) + fVar39 * fVar48 + fVar57 * fVar45) -
                              fVar41 * fVar26);
          local_e0 = CONCAT44(local_e0._4_4_,
                              ((fVar41 * fVar40 - fVar57 * fVar48) + fVar39 * fVar45) -
                              fVar55 * fVar26);
        }
        uVar9 = FUN_03efb110(&local_114,0,PTR_DAT_04bd0da0,&local_e8,PTR_DAT_04bb4bd0,
                             PTR_DAT_04bb3ea0,PTR_DAT_04bb4bc8);
        uVar4 = (float)local_114;
        uVar36 = local_114._4_4_;
        if ((uVar9 & 1) == 0) {
          uVar36 = 0;
          uVar4 = 0x40490fdb;
        }
        local_cc = CONCAT44(uVar36,uVar4);
        local_c0 = (float)local_e8;
        local_bc = local_e8._4_4_;
        local_b8 = (float)local_e0;
        if (*(char *)(lVar8 + 0x1e0) != '\0') {
          fVar57 = fVar37 * (float)local_e0;
          fVar26 = fVar37 * local_e8._4_4_;
          fVar37 = fVar37 * (float)local_e8;
          fVar41 = -(local_128 * fVar26) + fVar57 * fVar33 + fVar37 * fStack_124;
          fVar45 = (fVar37 * local_128 - fVar57 * fVar30) + fVar26 * fStack_124;
          fVar55 = -(fVar33 * fVar37) + fVar26 * fVar30 + fVar57 * fStack_124;
          fVar26 = (-(fVar33 * fVar26) - fVar37 * fVar30) - fVar57 * local_128;
          local_b4 = local_120 +
                     ((-(local_128 * fVar45) + fStack_124 * fVar41 + fVar33 * fVar55) -
                     fVar30 * fVar26);
          fStack_b0 = local_11c +
                      (((fStack_124 * fVar45 + local_128 * fVar41) - fVar30 * fVar55) -
                      fVar33 * fVar26);
          local_ac = fStack_118 +
                     (((fVar30 * fVar45 - fVar33 * fVar41) + fStack_124 * fVar55) -
                     local_128 * fVar26);
        }
      }
      else {
        fVar43 = -fVar29;
        if (0.0 <= fVar29) {
          fVar43 = fVar29;
        }
        if (1e+07 < fVar43) goto LAB_03ef0378;
        fVar43 = -1.5620697;
        if (-3.1241393 <= fVar28) {
          fVar43 = fVar42;
        }
        local_1b8 = tanf(fVar43);
        fVar42 = -1.5620697;
        if (-3.1241393 <= fVar47) {
          fVar42 = fVar44;
        }
        local_1ac = tanf(fVar42);
        fVar42 = -1.5620697;
        if (-3.1241393 <= fVar48) {
          fVar42 = fVar41;
        }
        fVar48 = tanf(fVar42);
        fVar41 = -1.5620697;
        if (-3.1241393 <= fVar39) {
          fVar41 = fVar40;
        }
        fVar39 = tanf(fVar41);
        fVar41 = -fVar48;
        if (0.0 <= fVar48) {
          fVar41 = fVar48;
        }
        if (1e+07 < fVar41) goto LAB_03ef0378;
        fVar41 = -fVar39;
        if (0.0 <= fVar39) {
          fVar41 = fVar39;
        }
        if (1e+07 < fVar41) goto LAB_03ef0378;
        fVar41 = -local_1b8;
        if (0.0 <= local_1b8) {
          fVar41 = local_1b8;
        }
        if (1e+07 < fVar41) goto LAB_03ef0378;
        fVar41 = -local_1ac;
        if (0.0 <= local_1ac) {
          fVar41 = local_1ac;
        }
        if (1e+07 < fVar41) goto LAB_03ef0378;
        fVar41 = local_1ac - local_1b8;
        fVar40 = fVar39 - fVar48;
        if (fVar41 <= fVar40) {
          if (fVar40 <= fVar41) {
            fVar50 = fVar50 - (local_1b8 + local_1ac) * 0.5;
            fVar29 = fVar29 - (fVar48 + fVar39) * 0.5;
            if (fVar29 * fVar29 + fVar50 * fVar50 <= fVar41 * 0.5 * fVar41 * 0.5) goto LAB_03ef0acc;
            goto LAB_03ef0378;
          }
          fVar28 = fVar29;
          fVar40 = fVar48;
          fVar42 = fVar39;
        }
        else {
          fVar28 = fVar50;
          fVar41 = fVar40;
          fVar40 = local_1b8;
          fVar42 = local_1ac;
          fVar50 = fVar29;
          local_1b8 = fVar48;
          local_1ac = fVar39;
        }
        fVar41 = fVar41 * 0.5;
        if ((((local_1ac < fVar50) || (fVar50 < local_1b8)) || (fVar28 < fVar40 + fVar41)) ||
           (fVar42 - fVar41 < fVar28)) {
          fVar48 = fVar28 - (fVar40 + fVar41);
          fVar50 = fVar50 + (local_1b8 + local_1ac) * -0.5;
          fVar50 = fVar50 * fVar50;
          if ((fVar41 * fVar41 < fVar50 + fVar48 * fVar48) &&
             (fVar28 = fVar28 - (fVar42 - fVar41), fVar41 * fVar41 < fVar50 + fVar28 * fVar28))
          goto LAB_03ef0378;
        }
LAB_03ef0acc:
        *(undefined4 *)(param_2 + 0x5c) = 0;
      }
      if (*(char *)(lVar8 + 0x290) != '\0') {
        local_c4 = 0.0;
        uVar9 = FUN_03efb424(&local_e8,&local_cc,PTR_DAT_04bb4bd0,PTR_DAT_04bb3ea0,PTR_DAT_04bb4bc8)
        ;
        if ((uVar9 & 1) == 0) {
          fVar26 = -8.742278e-08;
          fVar55 = -1.0;
          fVar37 = 1.0;
          fVar57 = 0.0;
          fVar41 = 0.0;
          fVar45 = 0.0;
        }
        else {
          fVar26 = (float)local_e8 + (float)local_e8;
          fVar45 = (local_e8._4_4_ + local_e8._4_4_) * (float)local_e0;
          fVar37 = local_e0._4_4_ + local_e0._4_4_;
          fVar41 = local_e8._4_4_ * fVar26 - (float)local_e0 * fVar37;
          fVar55 = 1.0 - (float)local_e8 * fVar26;
          fVar26 = (float)local_e0 * fVar26 + local_e8._4_4_ * fVar37;
          fVar57 = fVar45 - (float)local_e8 * fVar37;
          fVar45 = fVar45 + (float)local_e8 * fVar37;
          fVar37 = fVar55 - (float)local_e0 * ((float)local_e0 + (float)local_e0);
          fVar55 = fVar55 - local_e8._4_4_ * (local_e8._4_4_ + local_e8._4_4_);
        }
        fVar39 = fVar55 * -0.0 + fVar26 * 0.0;
        fVar40 = fVar57 * 0.0 - fVar26;
        fVar48 = fVar55 + fVar57 * -0.0;
        fVar42 = SQRT(fVar39 * fVar39 + fVar48 * fVar48 + fVar40 * fVar40);
        if (0.0 < fVar42) {
          fVar28 = 1.0 / fVar42;
          fVar48 = fVar48 * fVar28;
          fVar39 = fVar39 * fVar28;
          fVar40 = fVar40 * fVar28;
        }
        if (fVar42 == 0.0) {
          fVar48 = -1.0;
          if (fVar57 <= 0.0) {
            fVar48 = 1.0;
          }
          fVar42 = -0.0;
          fVar39 = fVar42;
          if (fVar57 <= 0.0) {
            fVar42 = 0.0;
            fVar39 = fVar42;
          }
        }
        else {
          fVar42 = fVar40 * -fVar26 + fVar48 * fVar55;
          fVar48 = -(fVar57 * fVar48) + fVar39 * fVar26;
          fVar39 = -(fVar55 * fVar39) + fVar40 * fVar57;
        }
        fVar55 = fVar57 * (-(fVar41 * fVar48) + fVar39 * fVar45) +
                 (-(fVar45 * fVar42) + fVar48 * fVar37) * fVar26 +
                 (-(fVar37 * fVar39) + fVar42 * fVar41) * fVar55;
        fVar26 = 1.0;
        if (fVar55 <= 1.0) {
          fVar26 = fVar55;
        }
        fVar57 = -1.0;
        if (-1.0 <= fVar55) {
          fVar57 = fVar26;
        }
        fVar55 = asinf(fVar57);
        uVar16 = *(uint *)(param_2 + 0x28);
        fVar26 = -local_cc._4_4_;
        if (0.0 <= local_cc._4_4_) {
          fVar26 = local_cc._4_4_;
        }
        if (*(uint *)(param_2 + 0x90) <= uVar16) {
          uVar16 = 0;
        }
        fVar26 = fVar26 * 0.63661975;
        lVar25 = *(long *)(*(long *)(param_2 + 0x98) + (long)(int)uVar16 * 0x88 + 0x80);
        fVar40 = *(float *)(lVar25 + 0x2d0) * 0.63661975;
        fVar57 = 0.0;
        if (fVar26 < fVar40) {
          fVar28 = *(float *)(lVar25 + 0x2b0) * 0.63661975;
          fVar57 = 1.0;
          if (fVar28 < fVar26) {
            fVar26 = sinf(((fVar26 - fVar28) / (fVar40 - fVar28) + 0.5) * 3.1415927);
            fVar40 = fVar26 * 0.5 + 0.5;
            fVar26 = 1.0;
            if (fVar40 <= 1.0) {
              fVar26 = fVar40;
            }
            fVar57 = 0.0;
            if (0.0 <= fVar40) {
              fVar57 = fVar26;
            }
          }
        }
        fVar26 = -3.1415927;
        if (0.0 <= fVar55) {
          fVar26 = 3.1415927;
        }
        fVar26 = fVar26 - fVar55;
        if (0.0 <= fVar37 * fVar42 + fVar39 * fVar41 + fVar48 * fVar45) {
          fVar26 = fVar55;
        }
        fVar55 = 0.0;
        if (0.0 <= fVar57) {
          fVar55 = fVar57;
        }
        local_c4 = fVar55 * fVar26 + 0.0;
      }
      uVar16 = *(uint *)(param_2 + 0x70);
      if (uVar16 == 0) {
        fVar26 = 0.0;
      }
      else {
        fVar26 = 0.0;
        uVar11 = 0;
        lVar25 = *(long *)(param_2 + 0x78);
        fVar55 = -local_cc._4_4_;
        if (0.0 <= local_cc._4_4_) {
          fVar55 = local_cc._4_4_;
        }
        fVar55 = fVar55 * 0.63661975;
        fVar57 = 1.0;
        if (fVar55 <= 1.0) {
          fVar57 = fVar55;
        }
        fVar37 = 0.0;
        if (0.0 <= fVar55) {
          fVar37 = fVar57;
        }
        do {
          lVar19 = lVar25 + ((long)((ulong)uVar11 << 0x20) >> 0x1a);
          lVar21 = *(long *)(lVar19 + 0x38);
          fVar55 = *(float *)(lVar21 + 0x90);
          fVar55 = fVar55 + fVar37 * (2.0 - fVar37) * (*(float *)(lVar21 + 0xb0) - fVar55);
          fVar26 = fVar26 + fVar55;
          *(float *)(lVar19 + 0x34) = fVar55;
          uVar11 = uVar11 + 1;
        } while (uVar16 != uVar11);
      }
      pfVar14 = (float *)PTR_DAT_04bb3ea0;
      if (*(char *)(lVar8 + 0x1e0) == '\0') {
        local_e8 = *(ulong *)puVar6;
        local_e0 = *(undefined8 *)(puVar6 + 8);
        uVar9 = FUN_03efb424(&local_e8,&local_cc,PTR_DAT_04bb4bd0,PTR_DAT_04bb3ea0,PTR_DAT_04bb4bc8)
        ;
        if ((uVar9 & 1) == 0) {
          local_e0._4_4_ = -4.371139e-08;
          local_e8._4_4_ = 1.0;
        }
        else {
          pfVar14 = (float *)&local_e8;
        }
        fVar55 = *pfVar14;
        lVar18 = lVar18 + (long)(int)uVar15 * 0x88;
        fVar56 = *(float *)(lVar18 + 100);
        fVar27 = *(float *)(lVar18 + 0x68);
        fVar34 = *(float *)(lVar18 + 0x6c);
        fVar31 = *(float *)(lVar18 + 0x70);
        fVar57 = pfVar14[2];
        uVar15 = *(uint *)(param_2 + 0x70);
        fVar30 = fVar27 * local_e8._4_4_;
        fVar33 = fVar56 * local_e8._4_4_;
        local_e8 = CONCAT44(-(fVar55 * fVar34) + fVar27 * local_e0._4_4_ + fVar31 * local_e8._4_4_ +
                            fVar56 * fVar57,
                            (fVar55 * fVar31 + fVar56 * local_e0._4_4_ + fVar34 * local_e8._4_4_) -
                            fVar27 * fVar57);
        local_e0 = CONCAT44(((-(fVar55 * fVar56) + fVar31 * local_e0._4_4_) - fVar30) -
                            fVar34 * fVar57,
                            ((fVar55 * fVar27 + fVar34 * local_e0._4_4_) - fVar33) + fVar31 * fVar57
                           );
        if (uVar15 != 0) {
          lVar8 = *(long *)(param_2 + 0x78);
          uVar16 = 0;
          do {
            pfVar14 = (float *)(lVar8 + ((long)((ulong)uVar16 << 0x20) >> 0x1a));
            if (pfVar14[0xd] == 0.0) {
              pfVar14[0] = 0.0;
              pfVar14[1] = 0.0;
              pfVar14[2] = 0.0;
              pfVar14[3] = 1.0;
            }
            else {
              fVar33 = local_e0._4_4_ +
                       local_e8._4_4_ * 0.0 + (float)local_e8 * 0.0 + (float)local_e0 * 0.0;
              fVar30 = 1.0;
              if ((fVar33 <= 1.0) && (fVar30 = fVar33, fVar33 < -1.0)) {
                fVar30 = -1.0;
              }
              fVar33 = fVar30;
              if (fVar30 < 0.0) {
                fVar33 = -fVar30;
              }
              fVar55 = pfVar14[0xd] / fVar26;
              fVar57 = acosf(fVar33);
              fVar56 = sinf(fVar57);
              fVar33 = -fVar56;
              if (0.0 <= fVar56) {
                fVar33 = fVar56;
              }
              if (1.1920929e-07 <= fVar33) {
                fVar33 = sinf(fVar57 - fVar55 * fVar57);
                fVar33 = (1.0 / fVar56) * fVar33;
                fVar55 = sinf(fVar55 * fVar57);
                fVar55 = (1.0 / fVar56) * fVar55;
              }
              else {
                fVar33 = 1.0 - fVar55;
              }
              if (fVar30 < 0.0) {
                fVar55 = -fVar55;
              }
              *pfVar14 = fVar55 * (float)local_e8 + fVar33 * 0.0;
              pfVar14[1] = fVar55 * local_e8._4_4_ + fVar33 * 0.0;
              pfVar14[2] = fVar55 * (float)local_e0 + fVar33 * 0.0;
              pfVar14[3] = fVar33 + fVar55 * local_e0._4_4_;
            }
            uVar16 = uVar16 + 1;
          } while (uVar15 != uVar16);
        }
      }
      else {
        fVar55 = 1.0;
        fVar57 = 0.0;
        if (*(short *)(param_2 + 0x68) == -1) {
          fVar37 = 0.0;
          fVar41 = 0.0;
          fVar48 = 0.0;
          fVar39 = 0.0;
          fVar45 = 0.0;
        }
        else {
          fVar37 = 0.0;
          fVar41 = 0.0;
          fVar48 = 0.0;
          fVar39 = 0.0;
          fVar45 = 0.0;
          if (*(short *)(param_2 + 0x6a) != -1) {
            lVar25 = *(long *)(param_2 + 0x18);
            uVar11 = (uint)*(short *)(param_2 + 0x6a);
            uVar16 = uVar11;
            if (*(uint *)(lVar25 + 0x30) <= uVar11) {
              uVar16 = 0;
            }
            if ((*(byte *)(*(long *)(lVar25 + 0x38) + (long)(int)uVar16) >> 1 & 1) == 0) {
              if (*(uint *)(lVar25 + 0x20) <= uVar11) {
                uVar11 = 0;
              }
              pfVar14 = (float *)(*(long *)(lVar25 + 0x28) + (long)(int)uVar11 * 0x1c);
            }
            else {
              pfVar14 = (float *)FUN_03ef9df0();
            }
            fVar45 = *pfVar14;
            fVar39 = pfVar14[1];
            fVar41 = pfVar14[6];
            fVar48 = pfVar14[2];
            fVar55 = pfVar14[3];
            fVar57 = pfVar14[4];
            fVar37 = pfVar14[5];
          }
        }
        if (*(int *)(param_2 + 0x80) != 0) {
          lVar25 = *(long *)(param_2 + 0x88);
          uVar16 = *(int *)(param_2 + 0x80) - 1;
          lVar18 = lVar18 + (long)(int)uVar15 * 0x88;
          local_194 = fVar26;
          do {
            pfVar14 = *(float **)
                       (lVar25 + (-(ulong)(uVar16 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar16 << 4
                                 ));
            if (pfVar14 == (float *)0x0) {
              pfVar14 = (float *)FUN_03ef9b40(*(undefined8 *)(param_2 + 0x18),
                                              (long)*(short *)(lVar25 + (long)(int)uVar16 * 0x10 +
                                                              10));
              fVar42 = pfVar14[5];
              fVar40 = pfVar14[6];
              fVar28 = pfVar14[4];
              fVar47 = -(fVar48 * fVar42) + fVar40 * fVar39 + fVar28 * fVar55;
              fVar43 = (fVar48 * fVar28 - fVar40 * fVar45) + fVar42 * fVar55;
              fVar44 = -(fVar39 * fVar28) + fVar42 * fVar45 + fVar40 * fVar55;
              fVar46 = (-(fVar39 * fVar42) - fVar28 * fVar45) - fVar40 * fVar48;
              fVar50 = *pfVar14;
              fVar29 = pfVar14[1];
              fVar40 = -(fVar48 * fVar43) + fVar55 * fVar47 + fVar39 * fVar44;
              fVar42 = (fVar55 * fVar43 + fVar48 * fVar47) - fVar45 * fVar44;
              fVar28 = (fVar45 * fVar43 - fVar39 * fVar47) + fVar55 * fVar44;
              fVar47 = pfVar14[2];
              fVar44 = pfVar14[3];
LAB_03ef115c:
              fVar65 = fVar45 * fVar29;
              fVar43 = fVar50 * fVar55;
              fVar40 = fVar40 - fVar45 * fVar46;
              fVar42 = fVar42 - fVar39 * fVar46;
              fVar28 = fVar28 - fVar48 * fVar46;
              fVar63 = fVar45 * fVar47;
              fVar46 = fVar29 * fVar55;
              fVar51 = fVar47 * fVar55;
              fVar52 = fVar50 * fVar39;
              fVar55 = ((-(fVar45 * fVar50) + fVar44 * fVar55) - fVar29 * fVar39) - fVar47 * fVar48;
              fVar45 = (fVar45 * fVar44 + fVar43 + fVar47 * fVar39) - fVar29 * fVar48;
              fVar39 = -fVar63 + fVar46 + fVar44 * fVar39 + fVar50 * fVar48;
              fVar48 = ((fVar65 + fVar51) - fVar52) + fVar44 * fVar48;
            }
            else {
              if (pfVar14[0xd] == 0.0) {
                pfVar10 = (float *)FUN_03ef9b40(*(undefined8 *)(param_2 + 0x18),
                                                (long)*(short *)((long)pfVar14 + 0x32));
                fVar42 = pfVar10[5];
                fVar40 = pfVar10[6];
                fVar28 = pfVar10[4];
                fVar47 = -(fVar48 * fVar42) + fVar40 * fVar39 + fVar28 * fVar55;
                fVar43 = (fVar48 * fVar28 - fVar40 * fVar45) + fVar42 * fVar55;
                fVar44 = -(fVar39 * fVar28) + fVar42 * fVar45 + fVar40 * fVar55;
                fVar46 = (-(fVar39 * fVar42) - fVar28 * fVar45) - fVar40 * fVar48;
                fVar50 = *pfVar10;
                fVar29 = pfVar10[1];
                fVar40 = -(fVar48 * fVar43) + fVar55 * fVar47 + fVar39 * fVar44;
                fVar42 = (fVar55 * fVar43 + fVar48 * fVar47) - fVar45 * fVar44;
                fVar28 = (fVar45 * fVar43 - fVar39 * fVar47) + fVar55 * fVar44;
                fVar47 = pfVar10[2];
                fVar44 = pfVar10[3];
                pfVar14[0] = 0.0;
                pfVar14[1] = 0.0;
                pfVar14[2] = 0.0;
                pfVar14[3] = 1.0;
                goto LAB_03ef115c;
              }
              local_e8 = *(ulong *)puVar6;
              local_e0 = *(undefined8 *)(puVar6 + 8);
              local_d8 = 0;
              lVar19 = *(long *)(param_2 + 0x18);
              local_d0 = 0.0;
              uVar11 = (uint)*(short *)((long)pfVar14 + 0x32);
              uVar15 = uVar11;
              if (*(uint *)(lVar19 + 0x30) <= (uint)(int)*(short *)((long)pfVar14 + 0x32)) {
                uVar15 = 0;
              }
              if ((*(byte *)(*(long *)(lVar19 + 0x38) + (long)(int)uVar15) >> 1 & 1) == 0) {
                if (*(uint *)(lVar19 + 0x20) <= uVar11) {
                  uVar11 = 0;
                }
                lVar19 = *(long *)(lVar19 + 0x28) + (long)(int)uVar11 * 0x1c;
              }
              else {
                lVar19 = FUN_03ef9df0();
              }
              FUN_03ee47ac(&local_e8,lVar19);
              fVar28 = -((float)local_e0 * local_1e0) + local_1dc * local_e8._4_4_ +
                       local_1e4 * local_e0._4_4_;
              fVar29 = (local_1e4 * (float)local_e0 - local_1dc * (float)local_e8) +
                       local_1e0 * local_e0._4_4_;
              fVar46 = -(local_e8._4_4_ * local_1e4) + local_1e0 * (float)local_e8 +
                       local_1dc * local_e0._4_4_;
              fVar51 = (-(local_e8._4_4_ * local_1e0) - local_1e4 * (float)local_e8) -
                       local_1dc * (float)local_e0;
              fVar42 = *(float *)(lVar18 + 0x3c);
              fVar44 = *(float *)(lVar18 + 0x38);
              fVar52 = ((-((float)local_e8 * local_1d4) + local_1d8 * local_e0._4_4_) -
                       local_1d0 * local_e8._4_4_) - local_1cc * (float)local_e0;
              fVar65 = (local_1d8 * (float)local_e8 + local_1d4 * local_e0._4_4_ +
                       local_1cc * local_e8._4_4_) - local_1d0 * (float)local_e0;
              fVar59 = -((float)local_e8 * local_1cc) + local_1d0 * local_e0._4_4_ +
                       local_1d8 * local_e8._4_4_ + local_1d4 * (float)local_e0;
              fVar40 = ((local_1d0 * (float)local_e8 + local_1cc * local_e0._4_4_) -
                       local_1d4 * local_e8._4_4_) + local_1d8 * (float)local_e0;
              fVar47 = *(float *)(lVar18 + 0x34);
              fVar50 = -(fVar40 * fVar44) + fVar42 * fVar59 + fVar47 * fVar52;
              fVar63 = (fVar40 * fVar47 - fVar42 * fVar65) + fVar44 * fVar52;
              fVar64 = -(fVar59 * fVar47) + fVar44 * fVar65 + fVar42 * fVar52;
              fVar42 = (-(fVar59 * fVar44) - fVar47 * fVar65) - fVar42 * fVar40;
              fVar47 = (float)local_d8 +
                       ((-((float)local_e0 * fVar29) + local_e0._4_4_ * fVar28 +
                        local_e8._4_4_ * fVar46) - (float)local_e8 * fVar51) +
                       ((-(fVar40 * fVar63) + fVar52 * fVar50 + fVar59 * fVar64) - fVar65 * fVar42);
              fVar43 = local_d8._4_4_ +
                       (((local_e0._4_4_ * fVar29 + (float)local_e0 * fVar28) -
                        (float)local_e8 * fVar46) - local_e8._4_4_ * fVar51) +
                       (((fVar52 * fVar63 + fVar40 * fVar50) - fVar65 * fVar64) - fVar59 * fVar42);
              fVar42 = local_d0 +
                       ((((float)local_e8 * fVar29 - local_e8._4_4_ * fVar28) +
                        local_e0._4_4_ * fVar46) - (float)local_e0 * fVar51) +
                       (((fVar65 * fVar63 - fVar59 * fVar50) + fVar52 * fVar64) - fVar40 * fVar42);
              local_d8 = CONCAT44(fVar43,fVar47);
              fVar28 = *(float *)(lVar18 + 0x30);
              fVar44 = *(float *)(lVar18 + 0x24);
              fVar29 = *(float *)(lVar18 + 0x2c);
              fVar50 = *(float *)(lVar18 + 0x28);
              fVar51 = (fVar65 * fVar28 + fVar44 * fVar52 + fVar29 * fVar59) - fVar50 * fVar40;
              fVar46 = ((-(fVar65 * fVar44) + fVar28 * fVar52) - fVar50 * fVar59) - fVar29 * fVar40;
              fVar63 = -(fVar65 * fVar29) + fVar50 * fVar52 + fVar28 * fVar59 + fVar44 * fVar40;
              fVar28 = ((fVar65 * fVar50 + fVar29 * fVar52) - fVar44 * fVar59) + fVar28 * fVar40;
              local_e8 = CONCAT44(fVar63,fVar51);
              fVar40 = fVar51 * fVar51 + fVar46 * fVar46 + fVar63 * fVar63 + fVar28 * fVar28;
              local_e0 = CONCAT44(fVar46,fVar28);
              if (fVar40 <= 1.1920929e-07) {
                fVar44 = fVar28;
                local_1ac = fVar46;
                local_1b0 = fVar63;
                local_1a8 = fVar51;
              }
              else {
                fVar40 = 1.0 / fVar40;
                fVar44 = fVar28 * fVar40;
                local_1ac = fVar46 * fVar40;
                local_1b0 = fVar63 * fVar40;
                local_1a8 = fVar51 * fVar40;
              }
              local_1a8 = -local_1a8;
              local_1b0 = -local_1b0;
              fVar44 = -fVar44;
              fVar40 = fVar37 * -0.0 + fVar57 * -0.0 + fVar41 * -0.0;
              fVar52 = fVar41 + fVar57 * -0.0 + fVar37 * 0.0;
              fVar50 = fVar57 + fVar37 * -0.0 + fVar41 * 0.0;
              fVar29 = fVar37 + fVar57 * 0.0 + fVar41 * -0.0;
              fStack_fc = fVar55 + fVar45 * -0.0 + fVar39 * -0.0 + fVar48 * -0.0;
              fVar65 = fVar29 * 0.0;
              fStack_f4 = fVar29 + fVar50 * 0.0 + fVar52 * -0.0 + fVar40 * -0.0 + 0.0;
              local_108._0_4_ = fVar55 * 0.0 + fVar45 + fVar48 * 0.0 + fVar39 * -0.0;
              local_f8 = (fVar50 - fVar65) + fVar52 * 0.0 + fVar40 * -0.0 + 0.0;
              local_f0 = fVar52 + fVar65 + fVar50 * -0.0 + fVar40 * -0.0 + 0.0;
              local_108._4_4_ = fVar39 + fVar48 * -0.0 + fVar55 * 0.0 + fVar45 * 0.0;
              local_100 = fVar48 + fVar39 * 0.0 + fVar45 * -0.0 + fVar55 * 0.0;
              local_d0 = fVar42;
              pfVar10 = (float *)FUN_03ef9b40(*(undefined8 *)(param_2 + 0x18),
                                              (long)*(short *)((long)pfVar14 + 0x32));
              fVar50 = pfVar10[5];
              fVar40 = pfVar10[6];
              fVar29 = pfVar10[4];
              fVar53 = -(local_100 * fVar50) + fVar40 * local_108._4_4_ + fVar29 * fStack_fc;
              fVar58 = (local_100 * fVar29 - fVar40 * (float)local_108) + fVar50 * fStack_fc;
              fVar52 = -(local_108._4_4_ * fVar29) + fVar50 * (float)local_108 + fVar40 * fStack_fc;
              fVar29 = (-(local_108._4_4_ * fVar50) - fVar29 * (float)local_108) -
                       fVar40 * local_100;
              fVar40 = fStack_fc * fVar53;
              fVar60 = fStack_fc * fVar58;
              fVar50 = fStack_fc * fVar52;
              fVar65 = *pfVar10;
              fVar64 = pfVar10[1];
              fVar62 = pfVar10[2];
              fVar61 = pfVar10[3];
              fVar59 = ((float)local_108 * fVar61 + fVar65 * fStack_fc + fVar62 * local_108._4_4_) -
                       fVar64 * local_100;
              fVar49 = -((float)local_108 * fVar62) + fVar64 * fStack_fc + fVar61 * local_108._4_4_
                       + fVar65 * local_100;
              fVar54 = (((float)local_108 * fVar64 + fVar62 * fStack_fc) - fVar65 * local_108._4_4_)
                       + fVar61 * local_100;
              fVar65 = ((-((float)local_108 * fVar65) + fVar61 * fStack_fc) -
                       fVar64 * local_108._4_4_) - fVar62 * local_100;
              fVar64 = -(fVar54 * fVar43) + fVar42 * fVar49 + fVar47 * fVar65;
              fVar61 = (fVar47 * fVar54 - fVar42 * fVar59) + fVar43 * fVar65;
              fVar62 = -(fVar49 * fVar47) + fVar43 * fVar59 + fVar42 * fVar65;
              fVar42 = (-(fVar49 * fVar43) - fVar47 * fVar59) - fVar42 * fVar54;
              fStack_fc = ((-(fVar59 * fVar51) + fVar46 * fVar65) - fVar63 * fVar49) -
                          fVar28 * fVar54;
              local_f8 = local_f8 +
                         ((-(local_100 * fVar58) + fVar40 + local_108._4_4_ * fVar52) -
                         (float)local_108 * fVar29) +
                         ((-(fVar54 * fVar61) + fVar65 * fVar64 + fVar49 * fVar62) - fVar59 * fVar42
                         );
              fStack_f4 = fStack_f4 +
                          (((fVar60 + local_100 * fVar53) - (float)local_108 * fVar52) -
                          local_108._4_4_ * fVar29) +
                          (((fVar65 * fVar61 + fVar54 * fVar64) - fVar59 * fVar62) - fVar49 * fVar42
                          );
              local_f0 = local_f0 +
                         ((((float)local_108 * fVar58 - local_108._4_4_ * fVar53) + fVar50) -
                         local_100 * fVar29) +
                         (((fVar59 * fVar61 - fVar49 * fVar64) + fVar65 * fVar62) - fVar54 * fVar42)
              ;
              local_108 = CONCAT44(-(fVar59 * fVar28) + fVar63 * fVar65 + fVar46 * fVar49 +
                                   fVar51 * fVar54,
                                   (fVar46 * fVar59 + fVar51 * fVar65 + fVar28 * fVar49) -
                                   fVar63 * fVar54);
              local_100 = ((fVar63 * fVar59 + fVar28 * fVar65) - fVar51 * fVar49) + fVar46 * fVar54;
              FUN_03ee49d4(&local_108,&local_114,&local_b4);
              fVar47 = SQRT(local_114._4_4_ * local_114._4_4_ + (float)local_114 * (float)local_114
                            + local_10c * local_10c);
              fVar40 = (float)local_114;
              fVar42 = local_114._4_4_;
              if (0.0 < fVar47) {
                fVar50 = 1.0 / fVar47;
                fVar40 = (float)local_114 * fVar50;
                fVar42 = local_114._4_4_ * fVar50;
                local_10c = local_10c * fVar50;
                local_114 = CONCAT44(fVar42,fVar40);
              }
              fVar50 = local_10c;
              if (fVar47 == 0.0) {
                uVar15 = *(uint *)(param_2 + 0x70);
                if (uVar15 != 0) {
                  lVar8 = *(long *)(param_2 + 0x78);
                  uVar16 = 0;
                  do {
                    puVar12 = (undefined8 *)(lVar8 + ((long)((ulong)uVar16 << 0x20) >> 0x1a));
                    *puVar12 = 0;
                    puVar12[1] = 0x3f80000000000000;
                    uVar16 = uVar16 + 1;
                  } while (uVar15 != uVar16);
                }
                break;
              }
              fVar59 = 0.0;
              fVar29 = 1.0;
              fVar43 = 0.0;
              fVar52 = 0.0;
              fVar65 = 0.0;
              fVar47 = local_10c + fVar42 * 0.0 + fVar40 * 0.0 + 1.0;
              if (1.1920929e-06 < fVar47) {
                fVar43 = SQRT(fVar47 + fVar47);
                if (NAN(fVar43)) {
                  fVar43 = sqrtf(fVar47 + fVar47);
                }
                fVar65 = 1.0 / fVar43;
                fVar43 = fVar43 * 0.5;
                fVar52 = (fVar50 * 0.0 - fVar42) * fVar65;
                fVar29 = (fVar40 + fVar50 * -0.0) * fVar65;
                fVar65 = (fVar40 * -0.0 + fVar42 * 0.0) * fVar65;
              }
              if (local_194 <= 0.0001) {
                fVar42 = 0.0;
                fVar47 = 0.0;
                fVar40 = 1.0;
              }
              else {
                fVar40 = fVar43 + fVar29 * 0.0 + fVar52 * 0.0 + fVar65 * 0.0;
                fVar42 = 1.0;
                if ((fVar40 <= 1.0) && (fVar42 = fVar40, fVar40 < -1.0)) {
                  fVar42 = -1.0;
                }
                fVar40 = fVar42;
                if (fVar42 < 0.0) {
                  fVar40 = -fVar42;
                }
                fVar50 = pfVar14[0xd] / local_194;
                fVar47 = acosf(fVar40);
                fVar59 = sinf(fVar47);
                fVar40 = -fVar59;
                if (0.0 <= fVar59) {
                  fVar40 = fVar59;
                }
                if (1.1920929e-07 <= fVar40) {
                  fVar40 = sinf(fVar47 - fVar50 * fVar47);
                  fVar40 = (1.0 / fVar59) * fVar40;
                  fVar50 = sinf(fVar50 * fVar47);
                  fVar50 = (1.0 / fVar59) * fVar50;
                }
                else {
                  fVar40 = 1.0 - fVar50;
                }
                if (fVar42 < 0.0) {
                  fVar50 = -fVar50;
                }
                fVar59 = fVar29 * fVar50 + fVar40 * 0.0;
                fVar42 = fVar52 * fVar50 + fVar40 * 0.0;
                fVar47 = fVar65 * fVar50 + fVar40 * 0.0;
                fVar40 = fVar40 + fVar43 * fVar50;
                local_194 = local_194 - pfVar14[0xd];
              }
              fVar43 = fVar51 + fVar46 * 0.0 + fVar28 * 0.0 + fVar63 * -0.0;
              fVar50 = fVar46 + fVar51 * -0.0 + fVar63 * -0.0 + fVar28 * -0.0;
              fVar29 = fVar63 + fVar28 * -0.0 + fVar46 * 0.0 + fVar51 * 0.0;
              fVar28 = fVar28 + fVar63 * 0.0 + fVar51 * -0.0 + fVar46 * 0.0;
              fVar46 = ((-(fVar43 * fVar42) + fVar40 * fVar50) - fVar59 * fVar29) - fVar47 * fVar28;
              fVar52 = (fVar43 * fVar40 + fVar42 * fVar50 + fVar47 * fVar29) - fVar59 * fVar28;
              fVar63 = -(fVar43 * fVar47) + fVar59 * fVar50 + fVar40 * fVar29 + fVar42 * fVar28;
              fVar40 = ((fVar43 * fVar59 + fVar47 * fVar50) - fVar42 * fVar29) + fVar40 * fVar28;
              fVar43 = ((-(fVar52 * local_1a8) + local_1ac * fVar46) - local_1b0 * fVar63) -
                       fVar44 * fVar40;
              fVar29 = (local_1ac * fVar52 + local_1a8 * fVar46 + fVar44 * fVar63) -
                       local_1b0 * fVar40;
              fVar51 = -(fVar52 * fVar44) + local_1b0 * fVar46 + local_1ac * fVar63 +
                       local_1a8 * fVar40;
              fVar46 = ((local_1b0 * fVar52 + fVar44 * fVar46) - local_1a8 * fVar63) +
                       local_1ac * fVar40;
              pfVar10 = (float *)FUN_03ef9b40(*(undefined8 *)(param_2 + 0x18),
                                              (long)*(short *)((long)pfVar14 + 0x32));
              fVar40 = *pfVar10;
              fVar42 = pfVar10[1];
              fVar50 = pfVar10[2];
              fVar47 = pfVar10[3];
              fVar44 = ((-(fVar40 * fVar29) + fVar43 * fVar47) - fVar51 * fVar42) - fVar46 * fVar50;
              fVar28 = (fVar40 * fVar43 + fVar29 * fVar47 + fVar46 * fVar42) - fVar51 * fVar50;
              local_170 = -(fVar40 * fVar46) + fVar51 * fVar47 + fVar43 * fVar42 + fVar29 * fVar50;
              fVar50 = ((fVar40 * fVar51 + fVar46 * fVar47) - fVar29 * fVar42) + fVar43 * fVar50;
              lVar19 = FUN_03ef9b40(*(undefined8 *)(param_2 + 0x18),
                                    (long)*(short *)((long)pfVar14 + 0x32));
              fVar40 = *(float *)(lVar19 + 0x10);
              fVar47 = *(float *)(lVar19 + 0x14);
              fVar42 = *(float *)(lVar19 + 0x18);
              if (*(char *)(lVar8 + 0x290) != '\0') {
                fVar29 = 0.0;
                fVar43 = 1.0;
                fVar51 = 0.0;
                fVar46 = 0.0;
                if (0.0001 < fVar26) {
                  fVar59 = -(fVar45 * fVar50) + local_170 * fVar55 + fVar44 * fVar39 +
                           fVar28 * fVar48;
                  fVar63 = ((fVar45 * local_170 + fVar50 * fVar55) - fVar28 * fVar39) +
                           fVar44 * fVar48;
                  fVar65 = (fVar45 * fVar44 + fVar28 * fVar55 + fVar50 * fVar39) -
                           local_170 * fVar48;
                  fVar49 = ((-(fVar45 * fVar28) + fVar44 * fVar55) - local_170 * fVar39) -
                           fVar50 * fVar48;
                  fVar64 = fVar59 * local_bc + local_c0 * fVar65 + local_b8 * fVar63;
                  fVar53 = (fVar59 * local_c0 - local_bc * fVar65) + local_b8 * fVar49;
                  fVar54 = (fVar63 * local_bc - local_b8 * fVar59) + local_c0 * fVar49;
                  fVar52 = -(fVar63 * local_c0) + local_b8 * fVar65 + local_bc * fVar49;
                  fVar29 = ((local_c4 * pfVar14[0xd]) / fVar26) * 0.5;
                  fVar43 = cosf(fVar29);
                  fVar29 = sinf(fVar29);
                  fVar46 = fVar29 * (((fVar63 * fVar52 + fVar49 * fVar54) - fVar59 * fVar53) +
                                    fVar65 * fVar64);
                  fVar51 = fVar29 * ((fVar49 * fVar52 - fVar63 * fVar54) + fVar65 * fVar53 +
                                    fVar59 * fVar64);
                  fVar29 = fVar29 * (-(fVar52 * fVar65) + fVar59 * fVar54 + fVar49 * fVar53 +
                                    fVar63 * fVar64);
                }
                fVar52 = fVar46 * fVar44;
                fVar64 = fVar28 * fVar29;
                fVar63 = fVar51 * fVar44;
                fVar49 = fVar28 * fVar51;
                fVar65 = fVar29 * fVar44;
                fVar59 = fVar46 * local_170;
                fVar44 = ((-(fVar28 * fVar46) + fVar43 * fVar44) - fVar51 * local_170) -
                         fVar29 * fVar50;
                fVar28 = (fVar28 * fVar43 + fVar52 + fVar29 * local_170) - fVar51 * fVar50;
                local_170 = -fVar64 + fVar63 + fVar43 * local_170 + fVar46 * fVar50;
                fVar50 = ((fVar49 + fVar65) - fVar59) + fVar43 * fVar50;
              }
              pfVar10 = (float *)FUN_03ef9b40(*(undefined8 *)(param_2 + 0x18),
                                              (long)*(short *)((long)pfVar14 + 0x32));
              fVar43 = *pfVar10;
              fVar29 = pfVar10[1];
              fVar46 = pfVar10[2];
              fVar52 = pfVar10[3];
              fVar51 = fVar43 * fVar43 + fVar52 * fVar52 + fVar29 * fVar29 + fVar46 * fVar46;
              if (1.1920929e-07 < fVar51) {
                fVar51 = 1.0 / fVar51;
                fVar52 = fVar52 * fVar51;
                fVar43 = fVar43 * fVar51;
                fVar29 = fVar29 * fVar51;
                fVar46 = fVar46 * fVar51;
              }
              fVar43 = -fVar43;
              fVar46 = -fVar46;
              fVar29 = -fVar29;
              lVar19 = *(long *)(param_2 + 0x18);
              sVar3 = *(short *)((long)pfVar14 + 0x32);
              uVar17 = *(uint *)(lVar19 + 0x30);
              lVar21 = *(long *)(lVar19 + 0x38);
              uVar11 = (uint)sVar3;
              uVar15 = uVar11;
              if (uVar17 <= (uint)(int)sVar3) {
                uVar15 = 0;
              }
              if ((*(byte *)(lVar21 + (int)uVar15) >> 1 & 1) == 0) {
                if (*(uint *)(lVar19 + 0x20) <= uVar11) {
                  uVar11 = 0;
                }
                pfVar10 = (float *)(*(long *)(lVar19 + 0x28) + (long)(int)uVar11 * 0x1c);
              }
              else {
                pfVar10 = (float *)FUN_03ef9df0();
                lVar19 = *(long *)(param_2 + 0x18);
                sVar3 = *(short *)((long)pfVar14 + 0x32);
                uVar17 = *(uint *)(lVar19 + 0x30);
                lVar21 = *(long *)(lVar19 + 0x38);
              }
              uVar11 = (uint)sVar3;
              fVar51 = *pfVar10;
              fVar63 = pfVar10[1];
              fVar65 = pfVar10[2];
              fVar59 = pfVar10[3];
              uVar15 = uVar11;
              if (uVar17 <= uVar11) {
                uVar15 = 0;
              }
              if ((*(byte *)(lVar21 + (int)uVar15) >> 1 & 1) == 0) {
                if (*(uint *)(lVar19 + 0x20) <= uVar11) {
                  uVar11 = 0;
                }
                pfVar10 = (float *)(*(long *)(lVar19 + 0x28) + (long)(int)uVar11 * 0x1c);
              }
              else {
                pfVar10 = (float *)FUN_03ef9df0();
              }
              fVar64 = *pfVar10;
              fVar49 = pfVar10[1];
              fVar53 = pfVar10[2];
              fVar54 = pfVar10[3];
              fVar58 = fVar64 * fVar64 + fVar54 * fVar54 + fVar49 * fVar49 + fVar53 * fVar53;
              if (1.1920929e-07 < fVar58) {
                fVar58 = 1.0 / fVar58;
                fVar54 = fVar54 * fVar58;
                fVar64 = fVar64 * fVar58;
                fVar49 = fVar49 * fVar58;
                fVar53 = fVar53 * fVar58;
              }
              fVar53 = -fVar53;
              fVar49 = -fVar49;
              fVar64 = -fVar64;
              fVar58 = ((-(fVar43 * fVar28) + fVar44 * fVar52) - local_170 * fVar29) -
                       fVar50 * fVar46;
              fVar61 = (fVar44 * fVar43 + fVar28 * fVar52 + fVar50 * fVar29) - local_170 * fVar46;
              fVar60 = -(fVar43 * fVar50) + local_170 * fVar52 + fVar44 * fVar29 + fVar28 * fVar46;
              fVar29 = ((local_170 * fVar43 + fVar50 * fVar52) - fVar28 * fVar29) + fVar44 * fVar46;
              fVar62 = ((-(fVar51 * fVar61) + fVar58 * fVar59) - fVar60 * fVar63) - fVar29 * fVar65;
              fVar46 = (fVar58 * fVar51 + fVar61 * fVar59 + fVar29 * fVar63) - fVar60 * fVar65;
              fVar43 = ((fVar60 * fVar51 + fVar29 * fVar59) - fVar61 * fVar63) + fVar58 * fVar65;
              fVar29 = -(fVar51 * fVar29) + fVar60 * fVar59 + fVar58 * fVar63 + fVar61 * fVar65;
              fVar63 = ((-(fVar46 * fVar64) + fVar54 * fVar62) - fVar49 * fVar29) - fVar53 * fVar43;
              fVar52 = (fVar46 * fVar54 + fVar64 * fVar62 + fVar53 * fVar29) - fVar49 * fVar43;
              fVar51 = -(fVar46 * fVar53) + fVar49 * fVar62 + fVar54 * fVar29 + fVar64 * fVar43;
              fVar46 = ((fVar46 * fVar49 + fVar53 * fVar62) - fVar64 * fVar29) + fVar54 * fVar43;
              fVar54 = -(fVar48 * fVar47) + fVar42 * fVar39 + fVar40 * fVar55;
              fVar58 = (fVar48 * fVar40 - fVar42 * fVar45) + fVar47 * fVar55;
              fVar65 = fVar45 * fVar50;
              fVar43 = local_170 * fVar55;
              fVar29 = fVar55 * fVar54;
              fVar49 = fVar52 * fVar35 + fVar63 * fVar34 + fVar51 * fVar38 + fVar46 * fVar32;
              fVar62 = fVar55 * fVar58;
              fVar53 = fVar56 * fVar63 + fVar52 * fVar34 + fVar46 * fVar27 + fVar51 * fVar32;
              fVar60 = fVar46 * fVar35 + fVar51 * fVar34 + fVar63 * fVar27 + fVar52 * fVar31;
              fVar59 = (-(fVar39 * fVar47) - fVar40 * fVar45) - fVar42 * fVar48;
              fVar64 = fVar56 * fVar51 + fVar46 * fVar34 + fVar52 * fVar38 + fVar63 * fVar31;
              fVar46 = fVar28 * fVar55;
              fVar42 = -(fVar39 * fVar40) + fVar47 * fVar45 + fVar42 * fVar55;
              fVar66 = fVar45 * fVar58;
              fVar52 = fVar39 * fVar54;
              fVar61 = fVar45 * local_170;
              fVar47 = fVar50 * fVar55;
              fVar63 = fVar28 * fVar39;
              fVar51 = fVar55 * fVar42;
              fVar55 = ((-(fVar45 * fVar28) + fVar44 * fVar55) - local_170 * fVar39) -
                       fVar50 * fVar48;
              fVar40 = (-(fVar48 * fVar58) + fVar29 + fVar39 * fVar42) - fVar45 * fVar59;
              fVar42 = ((fVar62 + fVar48 * fVar54) - fVar45 * fVar42) - fVar39 * fVar59;
              fVar45 = (fVar45 * fVar44 + fVar46 + fVar50 * fVar39) - local_170 * fVar48;
              fVar39 = -fVar65 + fVar43 + fVar44 * fVar39 + fVar28 * fVar48;
              fVar28 = ((fVar66 - fVar52) + fVar51) - fVar48 * fVar59;
              fVar48 = ((fVar61 + fVar47) - fVar63) + fVar44 * fVar48;
              *pfVar14 = (fStack_124 * fVar53 + fVar30 * fVar49 + local_128 * fVar60) -
                         fVar33 * fVar64;
              pfVar14[1] = -(fVar53 * local_128) + fVar33 * fVar49 + fStack_124 * fVar60 +
                           fVar30 * fVar64;
              pfVar14[2] = ((fVar53 * fVar33 + local_128 * fVar49) - fVar30 * fVar60) +
                           fStack_124 * fVar64;
              pfVar14[3] = ((-(fVar53 * fVar30) + fStack_124 * fVar49) - fVar33 * fVar60) -
                           local_128 * fVar64;
            }
            fVar41 = fVar41 + fVar28;
            fVar37 = fVar37 + fVar42;
            uVar16 = uVar16 - 1;
            fVar57 = fVar57 + fVar40;
          } while (uVar16 != 0xffffffff);
        }
      }
    }
LAB_03ef1fe4:
    fVar26 = *(float *)(lVar24 + 0x650);
    if (*(int *)(param_2 + 0x70) == 0) goto LAB_03ef20ec;
    fVar57 = 1.0;
    fVar55 = 0.0;
    fVar33 = 0.0;
    fVar30 = 0.0;
    uVar15 = *(int *)(param_2 + 0x70) - 1;
    uVar16 = uVar15;
    do {
      uVar9 = (ulong)uVar16;
      uVar16 = uVar16 - 1;
      lVar8 = *(long *)(param_2 + 0x78) + ((long)(uVar9 << 0x20) >> 0x1a);
      fVar41 = *(float *)(lVar8 + 0x10);
      fVar45 = *(float *)(lVar8 + 0x14);
      fVar40 = fVar30 * fVar45;
      fVar39 = *(float *)(lVar8 + 0x18);
      fVar48 = *(float *)(lVar8 + 0x1c);
      fVar56 = fVar41 * fVar57;
      fVar37 = fVar30 * fVar39;
      fVar27 = fVar45 * fVar57;
      fVar31 = fVar39 * fVar57;
      fVar34 = fVar41 * fVar33;
      fVar57 = ((-(fVar30 * fVar41) + fVar48 * fVar57) - fVar45 * fVar33) - fVar39 * fVar55;
      fVar30 = (fVar30 * fVar48 + fVar56 + fVar39 * fVar33) - fVar45 * fVar55;
      fVar33 = -fVar37 + fVar27 + fVar48 * fVar33 + fVar41 * fVar55;
      fVar55 = ((fVar40 + fVar31) - fVar34) + fVar48 * fVar55;
    } while (uVar16 != 0xffffffff);
    fVar56 = 0.0;
    fVar34 = 1.0;
    fVar31 = 0.0;
    fVar27 = 0.0;
    do {
      pfVar14 = (float *)(*(long *)(param_2 + 0x78) + ((long)((ulong)uVar15 << 0x20) >> 0x1a));
      uVar15 = uVar15 - 1;
      fVar40 = *pfVar14;
      fVar42 = pfVar14[1];
      fVar32 = pfVar14[2];
      fVar28 = pfVar14[3];
      fVar35 = fVar27 * fVar42;
      fVar37 = fVar40 * fVar34;
      fVar39 = fVar27 * fVar32;
      fVar41 = fVar42 * fVar34;
      fVar45 = fVar32 * fVar34;
      fVar48 = fVar40 * fVar31;
      fVar34 = ((-(fVar27 * fVar40) + fVar28 * fVar34) - fVar42 * fVar31) - fVar32 * fVar56;
      fVar27 = (fVar27 * fVar28 + fVar37 + fVar32 * fVar31) - fVar42 * fVar56;
      fVar31 = -fVar39 + fVar41 + fVar28 * fVar31 + fVar40 * fVar56;
      fVar56 = ((fVar35 + fVar45) - fVar48) + fVar28 * fVar56;
    } while (uVar15 != 0xffffffff);
  }
  if ((uVar2 & 1) == 0) {
    *(float *)(param_2 + 0x44) = fVar26;
    *(undefined4 *)(param_2 + 0x48) = 0;
    fVar39 = fVar27 * fVar27 + fVar34 * fVar34 + fVar31 * fVar31 + fVar56 * fVar56;
    fVar37 = fVar34;
    fVar41 = fVar31;
    fVar45 = fVar56;
    fVar48 = fVar27;
    if (1.1920929e-07 < fVar39) {
      fVar39 = 1.0 / fVar39;
      fVar37 = fVar34 * fVar39;
      fVar41 = fVar31 * fVar39;
      fVar45 = fVar56 * fVar39;
      fVar48 = fVar27 * fVar39;
    }
    fVar37 = (-(-fVar48 * fVar30) + fVar57 * fVar37) - fVar33 * -fVar41;
    fVar41 = fVar37 - fVar55 * -fVar45;
    fVar37 = -(--fVar45 * fVar55) - fVar37;
    if (0.0 <= fVar41) {
      fVar37 = fVar41;
    }
    fVar41 = 1.0;
    if (fVar37 <= 1.0) {
      fVar41 = fVar37;
    }
    fVar45 = 0.0;
    if (0.0 <= fVar37) {
      fVar45 = fVar41;
    }
    fVar37 = acosf(fVar45);
    *(float *)(param_2 + 0x4c) = fVar37 + fVar37;
  }
  iVar1 = *(int *)(param_2 + 0x38);
  if (iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x38) = 2;
    uVar15 = *(uint *)(param_2 + 0x70);
    if (uVar15 != 0) {
      lVar8 = *(long *)(param_2 + 0x78);
      uVar16 = 0;
      do {
        puVar12 = (undefined8 *)(lVar8 + ((long)((ulong)uVar16 << 0x20) >> 0x1a));
        puVar12[2] = *puVar12;
        puVar12[3] = puVar12[1];
        uVar16 = uVar16 + 1;
      } while (uVar15 != uVar16);
    }
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_2 + 0x38) = 2;
    uVar15 = *(uint *)(param_2 + 0x70);
    if (uVar15 != 0) {
      lVar8 = *(long *)(param_2 + 0x78);
      uVar16 = 0;
      do {
        lVar18 = lVar8 + ((long)((ulong)uVar16 << 0x20) >> 0x1a);
        *(undefined8 *)(lVar18 + 0x10) = 0;
        *(undefined8 *)(lVar18 + 0x18) = 0x3f80000000000000;
        uVar16 = uVar16 + 1;
      } while (uVar15 != uVar16);
    }
  }
  else if (iVar1 == 2) {
    FUN_03ef2e30(param_1,*(undefined4 *)(param_2 + 0x44),param_2);
  }
  if (*(float *)(param_2 + 0x4c) <= *(float *)(param_2 + 0x48)) {
    fVar26 = 1.0;
  }
  else {
    if (*(int *)(param_2 + 0x70) == 0) {
      fVar45 = 0.0;
      fVar48 = 1.0;
      fVar41 = 0.0;
      fVar37 = 0.0;
    }
    else {
      fVar48 = 1.0;
      fVar45 = 0.0;
      fVar41 = 0.0;
      fVar37 = 0.0;
      uVar15 = *(int *)(param_2 + 0x70) - 1;
      do {
        uVar9 = (ulong)uVar15;
        uVar15 = uVar15 - 1;
        lVar8 = *(long *)(param_2 + 0x78) + ((long)(uVar9 << 0x20) >> 0x1a);
        fVar38 = *(float *)(lVar8 + 0x10);
        fVar44 = *(float *)(lVar8 + 0x14);
        fVar50 = *(float *)(lVar8 + 0x18);
        fVar47 = *(float *)(lVar8 + 0x1c);
        fVar39 = fVar38 * fVar48;
        fVar32 = fVar37 * fVar50;
        fVar40 = fVar44 * fVar48;
        fVar35 = fVar37 * fVar44;
        fVar42 = fVar50 * fVar48;
        fVar28 = fVar38 * fVar41;
        fVar48 = ((-(fVar37 * fVar38) + fVar47 * fVar48) - fVar44 * fVar41) - fVar50 * fVar45;
        fVar37 = (fVar37 * fVar47 + fVar39 + fVar50 * fVar41) - fVar44 * fVar45;
        fVar41 = -fVar32 + fVar40 + fVar47 * fVar41 + fVar38 * fVar45;
        fVar45 = ((fVar35 + fVar42) - fVar28) + fVar47 * fVar45;
      } while (uVar15 != 0xffffffff);
    }
    fVar39 = fVar30 * fVar30 + fVar57 * fVar57 + fVar33 * fVar33 + fVar55 * fVar55;
    if (1.1920929e-07 < fVar39) {
      fVar39 = 1.0 / fVar39;
      fVar57 = fVar57 * fVar39;
      fVar30 = fVar30 * fVar39;
      fVar33 = fVar33 * fVar39;
      fVar55 = fVar55 * fVar39;
    }
    fVar30 = (-(-fVar30 * fVar37) + fVar48 * fVar57) - fVar41 * -fVar33;
    fVar33 = fVar30 - fVar45 * -fVar55;
    fVar30 = -(--fVar55 * fVar45) - fVar30;
    if (0.0 <= fVar33) {
      fVar30 = fVar33;
    }
    fVar33 = 1.0;
    if (fVar30 <= 1.0) {
      fVar33 = fVar30;
    }
    fVar55 = 0.0;
    if (0.0 <= fVar30) {
      fVar55 = fVar33;
    }
    fVar30 = acosf(fVar55);
    *(float *)(param_2 + 0x48) = *(float *)(param_2 + 0x48) + fVar30 + fVar30;
    fVar30 = fVar37 * fVar37 + fVar48 * fVar48 + fVar41 * fVar41 + fVar45 * fVar45;
    if (1.1920929e-07 < fVar30) {
      fVar30 = 1.0 / fVar30;
      fVar48 = fVar48 * fVar30;
      fVar37 = fVar37 * fVar30;
      fVar41 = fVar41 * fVar30;
      fVar45 = fVar45 * fVar30;
    }
    fVar30 = (-(-fVar37 * fVar27) + fVar34 * fVar48) - fVar31 * -fVar41;
    fVar33 = fVar30 - fVar56 * -fVar45;
    fVar30 = -(--fVar45 * fVar56) - fVar30;
    if (0.0 <= fVar33) {
      fVar30 = fVar33;
    }
    fVar33 = 1.0;
    if (fVar30 <= 1.0) {
      fVar33 = fVar30;
    }
    fVar55 = 0.0;
    if (0.0 <= fVar30) {
      fVar55 = fVar33;
    }
    fVar30 = acosf(fVar55);
    fVar55 = *(float *)(param_2 + 0x48);
    fVar33 = *(float *)(param_2 + 0x4c);
    if (fVar30 + fVar30 < fVar33 - fVar55) {
      fVar55 = fVar33 - (fVar30 + fVar30);
      *(float *)(param_2 + 0x48) = fVar55;
    }
    fVar55 = fVar55 / fVar33;
    fVar30 = 1.0;
    if (fVar55 <= 1.0) {
      fVar30 = fVar55;
    }
    fVar33 = 0.0;
    if (0.0 <= fVar55) {
      fVar33 = fVar30;
    }
    fVar26 = fVar26 + fVar33 * (1.0 - fVar26);
  }
  puVar12 = &local_130;
  pfVar14 = &local_14c;
  *(float *)(param_2 + 0x44) = fVar26;
LAB_03ef2490:
  FUN_03ef3130(param_2,puVar12,pfVar14);
  return;
}

