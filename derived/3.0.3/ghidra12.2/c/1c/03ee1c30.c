
void FUN_03ee1c30(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  float *pfVar5;
  float *pfVar6;
  bool bVar7;
  bool bVar8;
  undefined8 *puVar9;
  float *pfVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  float *pfVar14;
  undefined4 *puVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  ulong uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  ulong uVar33;
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
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined4 uVar50;
  float fVar51;
  uint uVar52;
  undefined4 uVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  uint uVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float local_180;
  float local_17c;
  float local_174;
  undefined8 local_168;
  undefined8 local_160;
  float local_158;
  float local_154;
  float local_150;
  float local_148;
  float fStack_144;
  float local_140;
  float local_13c;
  float local_138;
  float fStack_134;
  float local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  float local_110;
  float local_10c;
  undefined8 local_108;
  float local_100;
  float local_fc;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined4 local_b0;
  
  local_128 = local_128 & 0xffffffff00000000;
  if (((((*(ushort *)(param_1 + 0x18) & 1) == 0) && (*(short *)(param_1 + 0x30) != -1)) &&
      (*(short *)(param_1 + 0x32) != -1)) &&
     (((*(long *)(param_1 + 0x28) != 0 && (*(long *)(param_1 + 0x20) != 0)) &&
      (*(long *)(*(long *)(param_1 + 0x20) + 8) != 0)))) {
    local_138 = *(float *)(param_2 + 0xc);
    fStack_134 = *(float *)(param_2 + 0x1c);
    local_130 = *(float *)(param_2 + 0x2c);
    uVar21 = *(ulong *)PTR_DAT_04bd0da0;
    uVar11 = *(ulong *)(PTR_DAT_04bd0da0 + 8);
    local_148 = (float)uVar21;
    fStack_144 = (float)(uVar21 >> 0x20);
    local_140 = (float)uVar11;
    local_13c = (float)(uVar11 >> 0x20);
    FUN_02a08d44(&local_148);
    puVar9 = (undefined8 *)
             FUN_03ef9b40(*(undefined8 *)(param_1 + 0x20),(long)*(short *)(param_1 + 0x32));
    fVar24 = *(float *)(puVar9 + 2);
    fVar26 = *(float *)((long)puVar9 + 0x14);
    fVar27 = *(float *)(puVar9 + 3);
    fVar29 = *(float *)(param_1 + 0x34);
    fVar34 = *(float *)(param_1 + 0x38);
    lVar19 = *(long *)(param_1 + 0x20);
    sVar4 = *(short *)(param_1 + 0x32);
    fVar25 = *(float *)(param_1 + 0x3c);
    uVar50 = *(undefined4 *)(puVar9 + 1);
    uVar53 = *(undefined4 *)((long)puVar9 + 0xc);
    uVar23 = *puVar9;
    FUN_03efa0c0(lVar19,(int)sVar4);
    uVar58 = (uint)sVar4;
    uVar52 = uVar58;
    if (*(uint *)(lVar19 + 0x10) <= (uint)(int)sVar4) {
      uVar52 = 0;
    }
    puVar9 = (undefined8 *)(*(long *)(lVar19 + 0x18) + (long)(int)uVar52 * 0x1c);
    *puVar9 = uVar23;
    *(undefined4 *)(puVar9 + 1) = uVar50;
    *(undefined4 *)((long)puVar9 + 0xc) = uVar53;
    *(float *)(puVar9 + 2) = fVar24 + fVar29;
    *(float *)((long)puVar9 + 0x14) = fVar26 + fVar34;
    *(float *)(puVar9 + 3) = fVar27 + fVar25;
    if (*(uint *)(lVar19 + 0x30) <= uVar58) {
      uVar58 = 0;
    }
    *(undefined1 *)(*(long *)(lVar19 + 0x38) + (long)(int)uVar58) = 2;
    *(undefined1 *)(lVar19 + 0x40) = 0;
    local_160 = *(undefined8 *)(param_1 + 100);
    local_168 = *(undefined8 *)(param_1 + 0x5c);
    local_158 = (float)*(undefined8 *)(param_1 + 0x6c);
    local_154 = (float)((ulong)*(undefined8 *)(param_1 + 0x6c) >> 0x20);
    fVar25 = local_154 + *(float *)(param_1 + 0x38);
    local_128 = CONCAT44(local_128._4_4_,1);
    fVar24 = local_158 + *(float *)(param_1 + 0x34);
    fVar26 = *(float *)(param_1 + 0x74) + *(float *)(param_1 + 0x3c);
    _local_158 = CONCAT44(fVar25,fVar24);
    local_150 = fVar26;
    if ((*(ushort *)(param_1 + 0x18) >> 1 & 1) == 0) {
      fVar29 = *(float *)(param_1 + 0x50);
      fVar34 = *(float *)(param_1 + 0x54);
      fVar27 = *(float *)(param_1 + 0x58);
      fVar63 = *(float *)(param_1 + 0x80);
      fVar51 = *(float *)(param_1 + 0x84);
      fVar61 = *(float *)(param_1 + 0x88);
      uVar52 = *(uint *)(param_1 + 0x98);
    }
    else {
      uVar52 = *(uint *)(param_1 + 0x98);
      local_118 = 0;
      local_110 = 0.0;
      local_c0 = 0;
      local_b8 = (undefined8 *)((ulong)local_b8 & 0xffffffff00000000);
      *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) & 0xfffd;
      local_128 = uVar21;
      local_120 = uVar11;
      local_d0 = uVar21;
      local_c8 = uVar11;
      if (0 < (int)uVar52) {
        lVar19 = *(long *)(param_1 + 0xa0);
        FUN_03ee46bc(&local_128,&local_148,&local_168);
        uVar23 = FUN_03ef9d4c(*(undefined8 *)(param_1 + 0x20),(long)*(short *)(lVar19 + 0x1e));
        FUN_03ee46bc(&local_d0,&local_148,uVar23);
        *(undefined8 *)(lVar19 + 0x74) = 0;
        *(undefined4 *)(lVar19 + 0x7c) = 0;
        *(undefined8 *)(lVar19 + 0xb0) = 0;
        *(undefined4 *)(lVar19 + 0xb8) = 0;
        *(float *)(lVar19 + 0x68) = (float)local_118;
        *(float *)(lVar19 + 0x6c) = local_118._4_4_;
        *(float *)(lVar19 + 0x70) = local_110;
        *(float *)(lVar19 + 0xa4) = (float)local_c0;
        *(float *)(lVar19 + 0xa8) = local_c0._4_4_;
        *(float *)(lVar19 + 0xac) = local_b8._0_4_;
        uVar52 = *(uint *)(param_1 + 0x98);
        if (1 < (int)uVar52) {
          uVar28 = local_128 & 0xffffffff;
          uVar33 = local_120 & 0xffffffff;
          uVar58 = 1;
          fVar27 = local_118._4_4_;
          fVar29 = (float)local_118;
          fVar34 = local_110;
          fVar61 = (float)local_c0;
          fVar63 = local_c0._4_4_;
          fVar51 = local_b8._0_4_;
          fVar31 = local_128._4_4_;
          fVar59 = (float)local_c8;
          fVar54 = local_d0._4_4_;
          fVar57 = (float)local_d0;
          fVar56 = local_c8._4_4_;
          fVar39 = local_120._4_4_;
          do {
            lVar19 = *(long *)(param_1 + 0xa0);
            uVar1 = uVar58;
            if (uVar52 <= uVar58) {
              uVar1 = 0;
            }
            uVar20 = (ulong)uVar1;
            lVar13 = lVar19 + uVar20 * 0xe0;
            sVar4 = *(short *)(lVar13 + 0x1e);
            if (*(short *)(lVar13 + 0x1c) != -1 && sVar4 != -1) {
              pfVar14 = (float *)(lVar19 + uVar20 * 0xe0);
              fVar40 = pfVar14[2];
              fVar35 = pfVar14[3];
              fVar44 = *pfVar14;
              fVar47 = pfVar14[1];
              fVar43 = (float)uVar28;
              fVar55 = (float)uVar33;
              fVar45 = pfVar14[5];
              fVar36 = pfVar14[6];
              fVar32 = fVar47 * fVar31;
              fVar41 = pfVar14[4];
              fVar48 = (-(fVar31 * fVar45) - fVar41 * fVar43) - fVar36 * fVar55;
              fVar60 = -(fVar31 * fVar41) + fVar45 * fVar43 + fVar36 * fVar39;
              fVar62 = -(fVar55 * fVar45) + fVar36 * fVar31 + fVar41 * fVar39;
              fVar36 = (fVar55 * fVar41 - fVar36 * fVar43) + fVar45 * fVar39;
              fVar34 = fVar34 + (((fVar43 * fVar36 - fVar31 * fVar62) + fVar39 * fVar60) -
                                fVar55 * fVar48);
              fVar27 = fVar27 + (((fVar39 * fVar36 + fVar55 * fVar62) - fVar43 * fVar60) -
                                fVar31 * fVar48);
              fVar29 = fVar29 + ((-(fVar55 * fVar36) + fVar39 * fVar62 + fVar31 * fVar60) -
                                fVar43 * fVar48);
              pfVar14 = (float *)FUN_03ef9b40(*(undefined8 *)(param_1 + 0x20),(int)sVar4);
              fVar41 = pfVar14[5];
              fVar36 = pfVar14[6];
              fVar45 = pfVar14[4];
              fVar30 = -(fVar59 * fVar41) + fVar36 * fVar54 + fVar45 * fVar56;
              fVar37 = (fVar59 * fVar45 - fVar36 * fVar57) + fVar41 * fVar56;
              fVar60 = -(fVar54 * fVar45) + fVar41 * fVar57 + fVar36 * fVar56;
              fVar48 = (-(fVar54 * fVar41) - fVar45 * fVar57) - fVar36 * fVar59;
              fVar38 = *pfVar14;
              fVar46 = pfVar14[1];
              fVar49 = fVar57 * fVar46;
              fVar42 = pfVar14[2];
              fVar62 = pfVar14[3];
              fVar36 = fVar46 * fVar56;
              fVar41 = fVar42 * fVar56;
              fVar63 = fVar63 + (((fVar56 * fVar37 + fVar59 * fVar30) - fVar57 * fVar60) -
                                fVar54 * fVar48);
              fVar45 = fVar38 * fVar56;
              fVar61 = fVar61 + ((-(fVar59 * fVar37) + fVar56 * fVar30 + fVar54 * fVar60) -
                                fVar57 * fVar48);
              fVar51 = fVar51 + (((fVar57 * fVar37 - fVar54 * fVar30) + fVar56 * fVar60) -
                                fVar59 * fVar48);
              fVar56 = ((-(fVar57 * fVar38) + fVar62 * fVar56) - fVar46 * fVar54) - fVar42 * fVar59;
              fVar48 = fVar42 * fVar54;
              fVar60 = fVar38 * fVar54;
              fVar54 = -(fVar57 * fVar42) + fVar36 + fVar62 * fVar54 + fVar38 * fVar59;
              fVar57 = (fVar57 * fVar62 + fVar45 + fVar48) - fVar46 * fVar59;
              fVar59 = ((fVar49 + fVar41) - fVar60) + fVar62 * fVar59;
              uVar33 = (ulong)(uint)(((fVar43 * fVar47 + fVar40 * fVar39) - fVar44 * fVar31) +
                                    fVar35 * fVar55);
              uVar28 = (ulong)(uint)((fVar43 * fVar35 + fVar44 * fVar39 + fVar40 * fVar31) -
                                    fVar47 * fVar55);
              fVar31 = -(fVar43 * fVar40) + fVar47 * fVar39 + fVar35 * fVar31 + fVar44 * fVar55;
              fVar39 = ((-(fVar43 * fVar44) + fVar35 * fVar39) - fVar32) - fVar40 * fVar55;
            }
            lVar19 = lVar19 + uVar20 * 0xe0;
            uVar58 = uVar58 + 1;
            *(float *)(lVar19 + 0x68) = fVar29;
            *(float *)(lVar19 + 0x6c) = fVar27;
            *(float *)(lVar19 + 0x70) = fVar34;
            *(undefined8 *)(lVar19 + 0x74) = 0;
            *(undefined4 *)(lVar19 + 0x7c) = 0;
            *(float *)(lVar19 + 0xa4) = fVar61;
            *(float *)(lVar19 + 0xa8) = fVar63;
            *(float *)(lVar19 + 0xac) = fVar51;
            *(undefined8 *)(lVar19 + 0xb0) = 0;
            *(undefined4 *)(lVar19 + 0xb8) = 0;
            uVar52 = *(uint *)(param_1 + 0x98);
          } while ((int)uVar58 < (int)uVar52);
          local_120 = CONCAT44(fVar39,(int)uVar33);
          local_d0 = CONCAT44(fVar54,(float)local_d0);
          local_c8 = CONCAT44(local_c8._4_4_,fVar59);
          local_128 = CONCAT44(fVar31,(int)uVar28);
          local_118 = CONCAT44(fVar27,fVar29);
          local_110 = fVar34;
        }
      }
      fVar51 = 0.0;
      *(undefined8 *)(param_1 + 0x7c) = 0;
      *(undefined8 *)(param_1 + 0x84) = 0;
      *(float *)(param_1 + 0x40) = local_148;
      *(float *)(param_1 + 0x4c) = local_13c;
      *(float *)(param_1 + 0x50) = local_138;
      fVar61 = 0.0;
      fVar63 = 0.0;
      *(ulong *)(param_1 + 0x44) = CONCAT44(local_140,fStack_144);
      *(float *)(param_1 + 0x54) = fStack_134;
      *(float *)(param_1 + 0x58) = local_130;
      fVar27 = local_130;
      fVar29 = local_138;
      fVar34 = fStack_134;
    }
    fVar59 = *(float *)(param_2 + 8);
    fVar54 = *(float *)(param_2 + 0x18);
    fVar57 = *(float *)(param_2 + 0x28);
    fVar31 = (*(float *)(param_2 + 0xc) - fVar29) - *(float *)(param_1 + 0x8c);
    fVar34 = (*(float *)(param_2 + 0x1c) - fVar34) - *(float *)(param_1 + 0x90);
    fVar29 = fVar51 * fVar54 + fVar63 * fVar59 + fVar61 * fVar57;
    fVar27 = (*(float *)(param_2 + 0x2c) - fVar27) - *(float *)(param_1 + 0x94);
    *(float *)(param_1 + 0x80) = fVar31;
    *(float *)(param_1 + 0x84) = fVar34;
    fVar61 = fVar54 * fVar34 + fVar31 * fVar59 + fVar27 * fVar57;
    fVar34 = (-(fVar54 * fVar34) - fVar31 * fVar59) - fVar27 * fVar57;
    *(float *)(param_1 + 0x88) = fVar27;
    fVar27 = 0.0;
    if (0.0 <= fVar61) {
      fVar27 = fVar61;
    }
    fVar61 = 0.0;
    if (0.0 <= fVar29) {
      fVar61 = fVar29;
    }
    fVar29 = 0.0;
    if (0.0 <= fVar61 - fVar27) {
      fVar29 = fVar61 - fVar27;
    }
    fVar27 = 0.0;
    if (0.0 <= fVar34) {
      fVar27 = fVar34;
    }
    if (0 < (int)uVar52) {
      uVar58 = 0;
      do {
        uVar1 = uVar58;
        if (uVar52 <= uVar58) {
          uVar1 = 0;
        }
        lVar19 = *(long *)(param_1 + 0xa0) + (ulong)uVar1 * 0xe0;
        lVar13 = *(long *)(lVar19 + 0x20);
        if (lVar13 == 0) {
          fVar61 = -(local_140 * fVar25) + fVar26 * fStack_144 + fVar24 * local_13c;
          fVar51 = (local_140 * fVar24 - fVar26 * local_148) + fVar25 * local_13c;
          fVar31 = -(fStack_144 * fVar24) + fVar25 * local_148 + fVar26 * local_13c;
          fVar56 = (-(fStack_144 * fVar25) - fVar24 * local_148) - fVar26 * local_140;
          fVar63 = local_130 +
                   (((local_148 * fVar51 - fStack_144 * fVar61) + local_13c * fVar31) -
                   local_140 * fVar56);
          fVar34 = local_138 +
                   ((-(local_140 * fVar51) + local_13c * fVar61 + fStack_144 * fVar31) -
                   local_148 * fVar56);
          fVar61 = fStack_134 +
                   (((local_13c * fVar51 + local_140 * fVar61) - local_148 * fVar31) -
                   fStack_144 * fVar56);
        }
        else {
          fVar51 = *(float *)(lVar19 + 0x10);
          fVar56 = *(float *)(lVar19 + 0x14);
          fVar31 = *(float *)(lVar19 + 0x18);
          lVar17 = *(long *)(lVar13 + 0x20);
          if (lVar17 == 0) {
            fVar34 = SQRT(fVar56 * fVar56 + fVar51 * fVar51 + fVar31 * fVar31);
            fVar61 = fVar34 * -0.0;
            fVar51 = (-(local_140 * fVar61) - fVar34 * fStack_144) + fVar61 * local_13c;
            fVar31 = fVar61 * local_140 + fVar34 * local_148 + fVar61 * local_13c;
            fVar56 = (-(fStack_144 * fVar61) + fVar61 * local_148) - fVar34 * local_13c;
            fVar34 = (-(fStack_144 * fVar61) - fVar61 * local_148) + fVar34 * local_140;
            fVar39 = (-(local_140 * fVar31) + local_13c * fVar51 + fStack_144 * fVar56) -
                     local_148 * fVar34;
            fVar36 = ((local_13c * fVar31 + local_140 * fVar51) - local_148 * fVar56) -
                     fStack_144 * fVar34;
            fVar63 = *(float *)(lVar13 + 0x70);
            fVar41 = ((local_148 * fVar31 - fStack_144 * fVar51) + local_13c * fVar56) -
                     local_140 * fVar34;
            fVar34 = *(float *)(lVar13 + 0x68);
            fVar61 = *(float *)(lVar13 + 0x6c);
          }
          else {
            fVar34 = *(float *)(lVar13 + 0x68);
            fVar61 = *(float *)(lVar13 + 0x6c);
            fVar63 = *(float *)(lVar13 + 0x70);
            fVar36 = fVar61 - *(float *)(lVar17 + 0x6c);
            fVar39 = fVar34 - *(float *)(lVar17 + 0x68);
            fVar41 = fVar63 - *(float *)(lVar17 + 0x70);
            fVar45 = SQRT(fVar36 * fVar36 + fVar39 * fVar39 + fVar41 * fVar41);
            if (0.0 < fVar45) {
              fVar45 = SQRT(fVar56 * fVar56 + fVar51 * fVar51 + fVar31 * fVar31) / fVar45;
              fVar39 = fVar39 * fVar45;
              fVar36 = fVar36 * fVar45;
              fVar41 = fVar41 * fVar45;
            }
          }
          fVar34 = fVar34 + fVar39;
          fVar61 = fVar61 + fVar36;
          fVar63 = fVar63 + fVar41;
        }
        lVar17 = *(long *)(param_1 + 0xa0) + (ulong)uVar1 * 0xe0;
        pfVar14 = (float *)(lVar17 + 0x68);
        fVar31 = *(float *)(lVar17 + 0x80);
        fVar39 = 1.0 - *(float *)(lVar17 + 0x84);
        fVar56 = ((fVar34 - *pfVar14) * fVar31 - fVar59 * fVar29) +
                 *(float *)(param_1 + 0x8c) +
                 (*(float *)(lVar17 + 0x74) - *(float *)(param_1 + 0x8c)) * fVar39;
        fVar51 = ((fVar61 - *(float *)(lVar17 + 0x6c)) * fVar31 - fVar54 * fVar29) +
                 *(float *)(param_1 + 0x90) +
                 (*(float *)(lVar17 + 0x78) - *(float *)(param_1 + 0x90)) * fVar39;
        fVar31 = ((fVar63 - *(float *)(lVar17 + 0x70)) * fVar31 - fVar57 * fVar29) +
                 *(float *)(param_1 + 0x94) +
                 (*(float *)(lVar17 + 0x7c) - *(float *)(param_1 + 0x94)) * fVar39;
        *(float *)(lVar17 + 0x74) = fVar56;
        *(float *)(lVar17 + 0x78) = fVar51;
        *(float *)(lVar17 + 0x7c) = fVar31;
        if (lVar13 != 0) {
          fVar34 = *pfVar14 + (fVar56 - fVar59 * fVar27) + *(float *)(param_1 + 0x8c);
          fVar61 = *(float *)(lVar17 + 0x6c) +
                   (fVar51 - fVar54 * fVar27) + *(float *)(param_1 + 0x90);
          fVar63 = *(float *)(lVar17 + 0x70) +
                   (fVar31 - fVar57 * fVar27) + *(float *)(param_1 + 0x94);
          *pfVar14 = fVar34;
          *(float *)(lVar17 + 0x6c) = fVar61;
          *(float *)(lVar17 + 0x70) = fVar63;
          fVar34 = fVar34 - *(float *)(lVar13 + 0x68);
          fVar61 = fVar61 - *(float *)(lVar13 + 0x6c);
          fVar63 = fVar63 - *(float *)(lVar13 + 0x70);
          fVar51 = SQRT(fVar61 * fVar61 + fVar34 * fVar34 + fVar63 * fVar63);
          if (0.0 < fVar51) {
            fVar51 = 1.0 / fVar51;
            fVar34 = fVar34 * fVar51;
            fVar61 = fVar61 * fVar51;
            fVar63 = fVar63 * fVar51;
          }
          fVar51 = SQRT(*(float *)(lVar19 + 0x14) * *(float *)(lVar19 + 0x14) +
                        *(float *)(lVar19 + 0x10) * *(float *)(lVar19 + 0x10) +
                        *(float *)(lVar19 + 0x18) * *(float *)(lVar19 + 0x18));
          fVar34 = *(float *)(lVar13 + 0x68) + fVar34 * fVar51;
          fVar61 = *(float *)(lVar13 + 0x6c) + fVar61 * fVar51;
          fVar63 = *(float *)(lVar13 + 0x70) + fVar63 * fVar51;
        }
        *pfVar14 = fVar34;
        *(float *)(lVar17 + 0x6c) = fVar61;
        uVar58 = uVar58 + 1;
        *(float *)(lVar17 + 0x70) = fVar63;
        uVar52 = *(uint *)(param_1 + 0x98);
      } while ((int)uVar58 < (int)uVar52);
    }
    fVar24 = 1.0;
    if ((*(short *)(param_1 + 0x78) == -1) || (*(short *)(param_1 + 0x7a) == -1)) {
      fVar25 = 0.0;
      fVar51 = 0.0;
      fVar34 = 0.0;
      fVar61 = 0.0;
      fVar63 = 0.0;
      fVar26 = 0.0;
    }
    else {
      lVar19 = *(long *)(param_1 + 0x20);
      uVar1 = (uint)*(short *)(param_1 + 0x7a);
      uVar58 = uVar1;
      if (*(uint *)(lVar19 + 0x30) <= uVar1) {
        uVar58 = 0;
      }
      if ((*(byte *)(*(long *)(lVar19 + 0x38) + (long)(int)uVar58) >> 1 & 1) == 0) {
        if (*(uint *)(lVar19 + 0x20) <= uVar1) {
          uVar1 = 0;
        }
        pfVar14 = (float *)(*(long *)(lVar19 + 0x28) + (long)(int)uVar1 * 0x1c);
      }
      else {
        pfVar14 = (float *)FUN_03ef9df0();
        uVar52 = *(uint *)(param_1 + 0x98);
      }
      fVar26 = *pfVar14;
      fVar25 = pfVar14[1];
      fVar34 = pfVar14[6];
      fVar51 = pfVar14[2];
      fVar24 = pfVar14[3];
      fVar63 = pfVar14[4];
      fVar61 = pfVar14[5];
    }
    if (uVar52 == 0) {
      uVar52 = 0;
      fVar31 = 0.0;
    }
    else {
      lVar19 = *(long *)(param_1 + 0xa0);
      fVar31 = 0.0;
      uVar58 = 0;
      local_17c = local_140;
      fVar56 = fStack_144;
      fVar39 = local_13c;
      fVar36 = local_148;
      do {
        lVar13 = *(long *)(lVar19 + (long)(int)uVar58 * 0xe0 + 0x28);
        if (lVar13 == 0) {
          lVar13 = lVar19 + (long)(int)uVar58 * 0xe0;
          lVar17 = *(long *)(lVar13 + 0x20);
          fVar43 = *(float *)(lVar13 + 0x70);
          fVar48 = *(float *)(lVar13 + 0x68);
          fVar32 = *(float *)(lVar13 + 0x6c);
          fVar45 = fVar32 - (*(float *)(lVar17 + 0x6c) - fVar32);
          fVar41 = fVar48 - (*(float *)(lVar17 + 0x68) - fVar48);
          fVar60 = fVar43 - (*(float *)(lVar17 + 0x70) - fVar43);
        }
        else {
          fVar41 = *(float *)(lVar13 + 0x68);
          fVar45 = *(float *)(lVar13 + 0x6c);
          fVar60 = *(float *)(lVar13 + 0x70);
          lVar13 = lVar19 + (long)(int)uVar58 * 0xe0;
          fVar48 = *(float *)(lVar13 + 0x68);
          fVar32 = *(float *)(lVar13 + 0x6c);
          fVar43 = *(float *)(lVar13 + 0x70);
        }
        fVar41 = fVar41 - fVar48;
        fVar45 = fVar45 - fVar32;
        fVar60 = fVar60 - fVar43;
        fVar48 = SQRT(fVar45 * fVar45 + fVar41 * fVar41 + fVar60 * fVar60);
        if (0.0 < fVar48) {
          fVar48 = 1.0 / fVar48;
          fVar41 = fVar41 * fVar48;
          fVar45 = fVar45 * fVar48;
          fVar60 = fVar60 * fVar48;
        }
        fVar32 = (local_17c * 0.0 - fVar56) + fVar39 * -0.0;
        fVar48 = (fVar36 - local_17c * 0.0) + fVar39 * -0.0;
        fVar43 = local_17c + fVar56 * 0.0 + fVar36 * 0.0;
        fVar62 = (fVar56 * 0.0 + fVar36 * -0.0) - fVar39;
        fVar30 = (-(local_17c * fVar48) + fVar39 * fVar32 + fVar56 * fVar62) - fVar36 * fVar43;
        fVar55 = ((fVar39 * fVar48 + local_17c * fVar32) - fVar36 * fVar62) - fVar56 * fVar43;
        fVar32 = ((fVar36 * fVar48 - fVar56 * fVar32) + fVar39 * fVar62) - local_17c * fVar43;
        fVar48 = fVar55 * fVar45 + fVar41 * fVar30 + fVar60 * fVar32 + 1.0;
        if (fVar48 <= 1.1920929e-06) {
          fVar43 = 0.0;
          bVar7 = false;
          bVar8 = true;
          if (-1.1920929e-06 <= fVar55) {
            bVar7 = false;
            bVar8 = true;
            if (!NAN(fVar55)) {
              bVar7 = fVar55 == 1.1920929e-06;
              bVar8 = 1.1920929e-06 <= fVar55;
            }
          }
          if (!bVar8 || bVar7) {
            fVar62 = 0.0;
            fVar48 = 1.0;
          }
          else {
            fVar41 = (fVar30 * fVar30) / (fVar55 * fVar55);
            fVar45 = 1.0 / (fVar41 + 1.0);
            fVar41 = fVar41 * fVar45;
            fVar62 = -SQRT(fVar45);
            fVar48 = SQRT(fVar41);
            if (NAN(fVar48)) {
              fVar48 = sqrtf(fVar41);
            }
          }
          fVar35 = 0.0;
        }
        else {
          fVar43 = SQRT(fVar48 + fVar48);
          if (NAN(fVar43)) {
            fVar43 = sqrtf(fVar48 + fVar48);
          }
          fVar35 = 1.0 / fVar43;
          fVar43 = fVar43 * 0.5;
          fVar62 = (-(fVar32 * fVar45) + fVar60 * fVar55) * fVar35;
          fVar48 = (-(fVar30 * fVar60) + fVar41 * fVar32) * fVar35;
          fVar35 = (-(fVar55 * fVar41) + fVar45 * fVar30) * fVar35;
        }
        fVar41 = fVar56 * fVar62;
        local_174 = ((-(fVar62 * fVar36) + fVar39 * fVar43) - fVar56 * fVar48) - local_17c * fVar35;
        local_180 = (fVar39 * fVar62 + fVar36 * fVar43 + local_17c * fVar48) - fVar56 * fVar35;
        fVar56 = -(fVar62 * local_17c) + fVar56 * fVar43 + fVar39 * fVar48 + fVar36 * fVar35;
        local_17c = ((fVar41 + local_17c * fVar43) - fVar36 * fVar48) + fVar39 * fVar35;
        fVar39 = SQRT(local_180 * local_180 + local_174 * local_174 + fVar56 * fVar56 +
                      local_17c * local_17c);
        if (0.0 < fVar39) {
          fVar39 = 1.0 / fVar39;
          local_174 = local_174 * fVar39;
          fVar56 = fVar56 * fVar39;
          local_17c = local_17c * fVar39;
          local_180 = local_180 * fVar39;
        }
        fVar39 = ((-(local_148 * fVar26) + fVar24 * local_13c) - fVar25 * fStack_144) -
                 fVar51 * local_140;
        fVar36 = (fVar24 * local_148 + fVar26 * local_13c + fVar51 * fStack_144) -
                 fVar25 * local_140;
        fVar41 = -(local_148 * fVar51) + fVar25 * local_13c + fVar24 * fStack_144 +
                 fVar26 * local_140;
        fVar45 = ((fVar25 * local_148 + fVar51 * local_13c) - fVar26 * fStack_144) +
                 fVar24 * local_140;
        fVar32 = fVar36 * fVar36 + fVar39 * fVar39 + fVar41 * fVar41 + fVar45 * fVar45;
        if (fVar32 <= 1.1920929e-07) {
          fVar30 = fVar39;
          fVar60 = fVar36;
          fVar55 = fVar45;
          fVar32 = fVar41;
        }
        else {
          fVar32 = 1.0 / fVar32;
          fVar30 = fVar39 * fVar32;
          fVar60 = fVar36 * fVar32;
          fVar55 = fVar45 * fVar32;
          fVar32 = fVar41 * fVar32;
        }
        fVar32 = -fVar32;
        fVar55 = -fVar55;
        fVar60 = -fVar60;
        if ((*(short *)(lVar19 + (long)(int)uVar58 * 0xe0 + 0x1c) == -1) ||
           (sVar4 = *(short *)(lVar19 + 0x1e + (long)(int)uVar58 * 0xe0), sVar4 == -1)) {
          sVar4 = *(short *)(*(long *)(lVar19 + (long)(int)uVar58 * 0xe0 + 0x20) + 0x1e);
        }
        fVar42 = fVar30 * 0.0 + fVar60 + fVar55 * 0.0 + fVar32 * -0.0;
        fVar40 = fVar30 + fVar60 * -0.0 + fVar32 * -0.0 + fVar55 * -0.0;
        fVar44 = fVar32 + fVar55 * -0.0 + fVar30 * 0.0 + fVar60 * 0.0;
        fVar32 = fVar32 * 0.0 + fVar55 + fVar60 * -0.0 + fVar30 * 0.0;
        fVar60 = ((-(fVar42 * fVar62) + fVar43 * fVar40) - fVar48 * fVar44) - fVar35 * fVar32;
        fVar37 = (fVar43 * fVar42 + fVar62 * fVar40 + fVar35 * fVar44) - fVar48 * fVar32;
        fVar38 = -(fVar42 * fVar35) + fVar48 * fVar40 + fVar43 * fVar44 + fVar62 * fVar32;
        fVar48 = ((fVar48 * fVar42 + fVar35 * fVar40) - fVar62 * fVar44) + fVar43 * fVar32;
        fVar55 = (fVar39 * fVar37 + fVar36 * fVar60 + fVar45 * fVar38) - fVar41 * fVar48;
        fVar62 = ((-(fVar37 * fVar36) + fVar39 * fVar60) - fVar41 * fVar38) - fVar45 * fVar48;
        fVar30 = -(fVar37 * fVar45) + fVar41 * fVar60 + fVar39 * fVar38 + fVar36 * fVar48;
        fVar40 = ((fVar41 * fVar37 + fVar45 * fVar60) - fVar36 * fVar38) + fVar39 * fVar48;
        pfVar14 = (float *)FUN_03ef9b40(*(undefined8 *)(param_1 + 0x20),(int)sVar4);
        fVar32 = *pfVar14;
        fVar41 = pfVar14[1];
        lVar13 = lVar19 + (long)(int)uVar58 * 0xe0;
        fVar36 = pfVar14[2];
        fVar60 = pfVar14[3];
        fVar45 = pfVar14[4];
        fVar48 = pfVar14[5];
        fVar39 = pfVar14[6];
        *(float *)(lVar13 + 0x98) = fVar45;
        *(float *)(lVar13 + 0x9c) = fVar48;
        *(float *)(lVar13 + 0xa0) = fVar39;
        fVar49 = -(fVar51 * fVar48) + fVar39 * fVar25 + fVar45 * fVar24;
        fVar65 = (fVar51 * fVar45 - fVar39 * fVar26) + fVar48 * fVar24;
        *(undefined4 *)(lVar13 + 0x54) = *(undefined4 *)(lVar13 + 0x38);
        *(undefined4 *)(lVar13 + 0x58) = *(undefined4 *)(lVar13 + 0x3c);
        *(undefined8 *)(lVar13 + 0x4c) = *(undefined8 *)(lVar13 + 0x30);
        fVar35 = ((-(fVar55 * fVar32) + fVar60 * fVar62) - fVar41 * fVar30) - fVar36 * fVar40;
        fVar37 = (fVar55 * fVar60 + fVar32 * fVar62 + fVar36 * fVar30) - fVar41 * fVar40;
        fVar38 = -(fVar55 * fVar36) + fVar41 * fVar62 + fVar60 * fVar30 + fVar32 * fVar40;
        fVar40 = ((fVar55 * fVar41 + fVar36 * fVar62) - fVar32 * fVar30) + fVar60 * fVar40;
        fVar42 = -(fVar25 * fVar45) + fVar48 * fVar26 + fVar39 * fVar24;
        fVar46 = (-(fVar25 * fVar48) - fVar45 * fVar26) - fVar39 * fVar51;
        fVar30 = fVar51 * fVar65;
        fVar39 = fVar24 * fVar49;
        fVar47 = fVar24 * fVar65;
        fVar36 = fVar51 * fVar49;
        fVar65 = fVar26 * fVar65;
        fVar41 = fVar37 * fVar24;
        fVar45 = fVar38 * fVar24;
        *(float *)(lVar13 + 0x90) = fVar40;
        *(float *)(lVar13 + 0x94) = fVar35;
        *(float *)(lVar13 + 0x88) = fVar37;
        *(float *)(lVar13 + 0x8c) = fVar38;
        fVar60 = fVar26 * fVar42;
        fVar48 = fVar24 * fVar42;
        fVar64 = fVar26 * fVar38;
        fVar32 = fVar40 * fVar24;
        fVar62 = fVar26 * fVar46;
        fVar55 = fVar51 * fVar46;
        fVar24 = ((-(fVar26 * fVar37) + fVar35 * fVar24) - fVar38 * fVar25) - fVar40 * fVar51;
        fVar44 = -(fVar26 * fVar40) + fVar45 + fVar35 * fVar25 + fVar37 * fVar51;
        *(undefined4 *)(lVar13 + 0x5c) = *(undefined4 *)(lVar13 + 0x40);
        *(undefined4 *)(lVar13 + 0x60) = *(undefined4 *)(lVar13 + 0x44);
        *(undefined4 *)(lVar13 + 100) = *(undefined4 *)(lVar13 + 0x48);
        fVar45 = -fVar43;
        if (0.0 <= fVar43) {
          fVar45 = fVar43;
        }
        fVar26 = (fVar26 * fVar35 + fVar41 + fVar40 * fVar25) - fVar38 * fVar51;
        fVar51 = ((fVar64 + fVar32) - fVar37 * fVar25) + fVar35 * fVar51;
        fVar63 = fVar63 + ((-fVar30 + fVar39 + fVar25 * fVar42) - fVar62);
        fVar61 = fVar61 + (((fVar47 + fVar36) - fVar60) - fVar25 * fVar46);
        fVar34 = fVar34 + (((fVar65 - fVar25 * fVar49) + fVar48) - fVar55);
        fVar25 = 1.0;
        if (fVar45 <= 1.0) {
          fVar25 = fVar45;
        }
        fVar39 = 0.0;
        if (0.0 <= fVar45) {
          fVar39 = fVar25;
        }
        *(float *)(lVar13 + 0x40) = fVar63;
        *(float *)(lVar13 + 0x44) = fVar61;
        *(float *)(lVar13 + 0x48) = fVar34;
        *(float *)(lVar13 + 0x30) = fVar26;
        *(float *)(lVar13 + 0x34) = fVar44;
        *(float *)(lVar13 + 0x38) = fVar51;
        *(float *)(lVar13 + 0x3c) = fVar24;
        fVar25 = acosf(fVar39);
        fVar41 = local_150;
        uVar58 = uVar58 + 1;
        fVar31 = fVar31 + fVar25 + fVar25;
        fVar39 = local_174;
        fVar36 = local_180;
        fVar25 = fVar44;
      } while (uVar52 != uVar58);
      uVar52 = *(uint *)(param_1 + 0x98);
      if (0 < (int)uVar52) {
        uVar58 = 0;
        fVar25 = local_154;
        fVar24 = local_158;
        do {
          lVar19 = *(long *)(param_1 + 0xa0);
          uVar1 = uVar58;
          if (uVar52 <= uVar58) {
            uVar1 = 0;
          }
          lVar17 = lVar19 + (ulong)uVar1 * 0xe0;
          lVar13 = *(long *)(lVar17 + 0x20);
          if (lVar13 == 0) {
            fVar34 = -(local_140 * fVar25) + fVar41 * fStack_144 + fVar24 * local_13c;
            fVar63 = (local_140 * fVar24 - fVar41 * local_148) + fVar25 * local_13c;
            fVar51 = -(fStack_144 * fVar24) + fVar25 * local_148 + fVar41 * local_13c;
            fVar56 = (-(fStack_144 * fVar25) - fVar24 * local_148) - fVar41 * local_140;
            fVar61 = local_138 +
                     ((-(local_140 * fVar63) + local_13c * fVar34 + fStack_144 * fVar51) -
                     local_148 * fVar56);
            fVar26 = fStack_134 +
                     (((local_13c * fVar63 + local_140 * fVar34) - local_148 * fVar51) -
                     fStack_144 * fVar56);
            fVar34 = local_130 +
                     (((local_148 * fVar63 - fStack_144 * fVar34) + local_13c * fVar51) -
                     local_140 * fVar56);
          }
          else {
            fVar63 = *(float *)(lVar17 + 0x10);
            fVar56 = *(float *)(lVar17 + 0x14);
            fVar51 = *(float *)(lVar17 + 0x18);
            lVar16 = *(long *)(lVar13 + 0x20);
            if (lVar16 == 0) {
              fVar39 = *(float *)(param_1 + 100);
              fVar61 = *(float *)(param_1 + 0x68);
              fVar26 = *(float *)(param_1 + 0x5c);
              fVar34 = *(float *)(param_1 + 0x60);
              fVar55 = -(local_148 * fVar39) + fVar34 * local_13c + fVar61 * fStack_144 +
                       fVar26 * local_140;
              fVar36 = ((local_148 * fVar34 + fVar39 * local_13c) - fVar26 * fStack_144) +
                       fVar61 * local_140;
              fVar48 = ((-(local_148 * fVar26) + fVar61 * local_13c) - fVar34 * fStack_144) -
                       fVar39 * local_140;
              fVar62 = (fVar61 * local_148 + fVar26 * local_13c + fVar39 * fStack_144) -
                       fVar34 * local_140;
              fVar45 = -(fVar36 * fVar56) + fVar51 * fVar55 + fVar63 * fVar48;
              fVar43 = -(fVar55 * fVar63) + fVar56 * fVar62 + fVar51 * fVar48;
              fVar60 = (fVar63 * fVar36 - fVar51 * fVar62) + fVar56 * fVar48;
              fVar63 = (-(fVar55 * fVar56) - fVar63 * fVar62) - fVar51 * fVar36;
              fVar34 = *(float *)(lVar13 + 0xac);
              fVar32 = ((fVar62 * fVar60 - fVar55 * fVar45) + fVar48 * fVar43) - fVar36 * fVar63;
              fVar61 = *(float *)(lVar13 + 0xa4);
              fVar26 = *(float *)(lVar13 + 0xa8);
              fVar39 = (-(fVar36 * fVar60) + fVar48 * fVar45 + fVar55 * fVar43) - fVar62 * fVar63;
              fVar36 = ((fVar48 * fVar60 + fVar36 * fVar45) - fVar62 * fVar43) - fVar55 * fVar63;
            }
            else {
              fVar61 = *(float *)(lVar13 + 0xa4);
              fVar26 = *(float *)(lVar13 + 0xa8);
              fVar34 = *(float *)(lVar13 + 0xac);
              fVar36 = fVar26 - *(float *)(lVar16 + 0xa8);
              fVar39 = fVar61 - *(float *)(lVar16 + 0xa4);
              fVar32 = fVar34 - *(float *)(lVar16 + 0xac);
              fVar45 = SQRT(fVar36 * fVar36 + fVar39 * fVar39 + fVar32 * fVar32);
              if (0.0 < fVar45) {
                fVar45 = SQRT(fVar56 * fVar56 + fVar63 * fVar63 + fVar51 * fVar51) / fVar45;
                fVar39 = fVar39 * fVar45;
                fVar36 = fVar36 * fVar45;
                fVar32 = fVar32 * fVar45;
              }
            }
            fVar61 = fVar61 + fVar39;
            fVar26 = fVar26 + fVar36;
            fVar34 = fVar34 + fVar32;
          }
          lVar16 = lVar19 + (ulong)uVar1 * 0xe0;
          pfVar14 = (float *)(lVar16 + 0xa4);
          fVar63 = *(float *)(lVar16 + 0xbc);
          fVar51 = 1.0 - *(float *)(lVar16 + 0xc0);
          fVar61 = ((fVar61 - *pfVar14) * fVar63 - fVar59 * fVar29) +
                   *(float *)(param_1 + 0x8c) +
                   (*(float *)(lVar16 + 0xb0) - *(float *)(param_1 + 0x8c)) * fVar51;
          fVar26 = ((fVar26 - *(float *)(lVar16 + 0xa8)) * fVar63 - fVar54 * fVar29) +
                   *(float *)(param_1 + 0x90) +
                   (*(float *)(lVar16 + 0xb4) - *(float *)(param_1 + 0x90)) * fVar51;
          fVar34 = ((fVar34 - *(float *)(lVar16 + 0xac)) * fVar63 - fVar57 * fVar29) +
                   *(float *)(param_1 + 0x94) +
                   (*(float *)(lVar16 + 0xb8) - *(float *)(param_1 + 0x94)) * fVar51;
          *(float *)(lVar16 + 0xb0) = fVar61;
          *(float *)(lVar16 + 0xb4) = fVar26;
          *(float *)(lVar16 + 0xb8) = fVar34;
          if (lVar13 == 0) {
            lVar13 = *(long *)(param_1 + 0x20);
            uVar12 = (uint)*(short *)(param_1 + 0x7a);
            uVar52 = uVar12;
            if (*(uint *)(lVar13 + 0x30) <= (uint)(int)*(short *)(param_1 + 0x7a)) {
              uVar52 = 0;
            }
            if ((*(byte *)(*(long *)(lVar13 + 0x38) + (long)(int)uVar52) >> 1 & 1) == 0) {
              if (*(uint *)(lVar13 + 0x20) <= uVar12) {
                uVar12 = 0;
              }
              pfVar10 = (float *)(*(long *)(lVar13 + 0x28) + (long)(int)uVar12 * 0x1c);
            }
            else {
              pfVar10 = (float *)FUN_03ef9df0();
            }
            lVar19 = lVar19 + (ulong)uVar1 * 0xe0;
            fVar26 = *pfVar10;
            fVar34 = pfVar10[1];
            fVar62 = pfVar10[4];
            fVar39 = pfVar10[2];
            fVar51 = pfVar10[3];
            fVar43 = pfVar10[5];
            fVar32 = pfVar10[6];
            fVar30 = (local_140 * fVar62 - fVar32 * local_148) + fVar43 * local_13c;
            fVar63 = (local_148 * fVar51 + fVar26 * local_13c + fVar39 * fStack_144) -
                     fVar34 * local_140;
            fVar61 = -(local_148 * fVar39) + fVar34 * local_13c + fVar51 * fStack_144 +
                     fVar26 * local_140;
            fVar56 = ((local_148 * fVar34 + fVar39 * local_13c) - fVar26 * fStack_144) +
                     fVar51 * local_140;
            fVar45 = *(float *)(lVar19 + 0x9c);
            fVar36 = *(float *)(lVar19 + 0xa0);
            fVar48 = *(float *)(lVar19 + 0x98);
            fVar51 = ((-(local_148 * fVar26) + fVar51 * local_13c) - fVar34 * fStack_144) -
                     fVar39 * local_140;
            lVar13 = *(long *)(lVar17 + 0x20);
            fVar55 = -(local_140 * fVar43) + fVar32 * fStack_144 + fVar62 * local_13c;
            fVar60 = -(fStack_144 * fVar62) + fVar43 * local_148 + fVar32 * local_13c;
            fVar43 = (-(fStack_144 * fVar43) - fVar62 * local_148) - fVar32 * local_140;
            fVar35 = (fVar56 * fVar48 - fVar36 * fVar63) + fVar45 * fVar51;
            fVar62 = -(fVar56 * fVar45) + fVar36 * fVar61 + fVar48 * fVar51;
            fVar32 = -(fVar61 * fVar48) + fVar45 * fVar63 + fVar36 * fVar51;
            fVar39 = (-(fVar61 * fVar45) - fVar48 * fVar63) - fVar36 * fVar56;
            fVar34 = local_138 +
                     ((-(local_140 * fVar30) + local_13c * fVar55 + fStack_144 * fVar60) -
                     local_148 * fVar43) +
                     ((-(fVar56 * fVar35) + fVar51 * fVar62 + fVar61 * fVar32) - fVar63 * fVar39);
            fVar26 = fStack_134 +
                     (((local_13c * fVar30 + local_140 * fVar55) - local_148 * fVar60) -
                     fStack_144 * fVar43) +
                     (((fVar51 * fVar35 + fVar56 * fVar62) - fVar63 * fVar32) - fVar61 * fVar39);
            fVar63 = local_130 +
                     (((local_148 * fVar30 - fStack_144 * fVar55) + local_13c * fVar60) -
                     local_140 * fVar43) +
                     (((fVar63 * fVar35 - fVar61 * fVar62) + fVar51 * fVar32) - fVar56 * fVar39);
            *pfVar14 = fVar34;
            *(float *)(lVar16 + 0xa8) = fVar26;
            *(float *)(lVar16 + 0xac) = fVar63;
            if (lVar13 != 0) goto LAB_03ee3034;
          }
          else {
            fVar63 = *(float *)(lVar16 + 0xac) +
                     (fVar34 - fVar57 * fVar27) + *(float *)(param_1 + 0x94);
            fVar34 = *pfVar14 + (fVar61 - fVar59 * fVar27) + *(float *)(param_1 + 0x8c);
            fVar26 = *(float *)(lVar16 + 0xa8) +
                     (fVar26 - fVar54 * fVar27) + *(float *)(param_1 + 0x90);
            *(float *)(lVar16 + 0xac) = fVar63;
            *pfVar14 = fVar34;
            *(float *)(lVar16 + 0xa8) = fVar26;
LAB_03ee3034:
            fVar51 = *(float *)(lVar13 + 0xa8);
            fVar26 = fVar26 - fVar51;
            fVar34 = fVar34 - *(float *)(lVar13 + 0xa4);
            fVar61 = *(float *)(lVar13 + 0xac);
            fVar63 = fVar63 - fVar61;
            fVar56 = SQRT(fVar26 * fVar26 + fVar34 * fVar34 + fVar63 * fVar63);
            if (0.0 < fVar56) {
              fVar56 = 1.0 / fVar56;
              fVar34 = fVar34 * fVar56;
              fVar26 = fVar26 * fVar56;
              fVar63 = fVar63 * fVar56;
            }
            fVar56 = SQRT(*(float *)(lVar17 + 0x14) * *(float *)(lVar17 + 0x14) +
                          *(float *)(lVar17 + 0x10) * *(float *)(lVar17 + 0x10) +
                          *(float *)(lVar17 + 0x18) * *(float *)(lVar17 + 0x18));
            *pfVar14 = *(float *)(lVar13 + 0xa4) + fVar34 * fVar56;
            *(float *)(lVar16 + 0xa8) = fVar51 + fVar26 * fVar56;
            *(float *)(lVar16 + 0xac) = fVar61 + fVar63 * fVar56;
          }
          uVar52 = *(uint *)(param_1 + 0x98);
          uVar58 = uVar58 + 1;
        } while ((int)uVar58 < (int)uVar52);
      }
    }
    fVar24 = local_140;
    fVar25 = fStack_144;
    fVar26 = local_148;
    fVar27 = local_13c;
    if ((*(short *)(param_1 + 0x78) != -1) && (*(short *)(param_1 + 0x7a) != -1)) {
      lVar19 = *(long *)(param_1 + 0x20);
      uVar1 = (uint)*(short *)(param_1 + 0x7a);
      uVar58 = uVar1;
      if (*(uint *)(lVar19 + 0x30) <= uVar1) {
        uVar58 = 0;
      }
      if ((*(byte *)(*(long *)(lVar19 + 0x38) + (long)(int)uVar58) >> 1 & 1) == 0) {
        if (*(uint *)(lVar19 + 0x20) <= uVar1) {
          uVar1 = 0;
        }
        pfVar14 = (float *)(*(long *)(lVar19 + 0x28) + (long)(int)uVar1 * 0x1c);
      }
      else {
        pfVar14 = (float *)FUN_03ef9df0();
        uVar52 = *(uint *)(param_1 + 0x98);
      }
      fVar24 = *pfVar14;
      fVar29 = pfVar14[1];
      fVar61 = pfVar14[2];
      fVar34 = pfVar14[3];
      fVar27 = ((-(local_148 * fVar24) + fVar34 * local_13c) - fVar29 * fStack_144) -
               fVar61 * local_140;
      fVar26 = (local_148 * fVar34 + fVar24 * local_13c + fVar61 * fStack_144) - fVar29 * local_140;
      fVar25 = -(local_148 * fVar61) + fVar29 * local_13c + fVar34 * fStack_144 + fVar24 * local_140
      ;
      fVar24 = ((local_148 * fVar29 + fVar61 * local_13c) - fVar24 * fStack_144) +
               fVar34 * local_140;
    }
    if (uVar52 != 0) {
      lVar19 = *(long *)(param_1 + 0xa0);
      uVar58 = 0;
      do {
        fVar29 = 1.0;
        pfVar14 = (float *)(lVar19 + (long)(int)uVar58 * 0xe0);
        lVar13 = *(long *)(pfVar14 + 10);
        if (lVar13 == 0) {
          lVar13 = lVar19 + (long)(int)uVar58 * 0xe0;
          lVar17 = *(long *)(lVar13 + 0x20);
          fVar34 = *(float *)(lVar13 + 0xa4) -
                   (*(float *)(lVar17 + 0xa4) - *(float *)(lVar13 + 0xa4));
          fVar63 = *(float *)(lVar13 + 0xa8) -
                   (*(float *)(lVar17 + 0xa8) - *(float *)(lVar13 + 0xa8));
          fVar61 = *(float *)(lVar13 + 0xac) -
                   (*(float *)(lVar17 + 0xac) - *(float *)(lVar13 + 0xac));
LAB_03ee3204:
          fVar54 = 0.0;
          fVar59 = 0.0;
        }
        else {
          fVar51 = *(float *)(lVar13 + 0x10);
          fVar59 = *(float *)(lVar13 + 0x14);
          fVar54 = *(float *)(lVar13 + 0x18);
          fVar61 = *(float *)(lVar13 + 0xac);
          fVar34 = *(float *)(lVar13 + 0xa4);
          fVar63 = *(float *)(lVar13 + 0xa8);
          fVar57 = SQRT(fVar59 * fVar59 + fVar51 * fVar51 + fVar54 * fVar54);
          if (fVar57 <= 0.0) goto LAB_03ee3204;
          fVar57 = 1.0 / fVar57;
          fVar29 = fVar51 * fVar57;
          fVar59 = fVar59 * fVar57;
          fVar54 = fVar54 * fVar57;
        }
        lVar13 = lVar19 + (long)(int)uVar58 * 0xe0;
        fVar63 = fVar63 - *(float *)(lVar13 + 0xa8);
        fVar34 = fVar34 - *(float *)(lVar13 + 0xa4);
        fVar61 = fVar61 - *(float *)(lVar13 + 0xac);
        fVar36 = (fVar25 * fVar34 - fVar63 * fVar26) + fVar61 * fVar27;
        fVar51 = (fVar24 * fVar63 - fVar61 * fVar25) + fVar34 * fVar27;
        fVar56 = -(fVar24 * fVar34) + fVar61 * fVar26 + fVar63 * fVar27;
        fVar34 = fVar25 * fVar63 + fVar34 * fVar26 + fVar61 * fVar24;
        fVar57 = pfVar14[2];
        fVar39 = pfVar14[3];
        fVar61 = ((fVar24 * fVar56 + fVar27 * fVar51) - fVar25 * fVar36) + fVar26 * fVar34;
        fVar63 = (fVar27 * fVar56 - fVar24 * fVar51) + fVar26 * fVar36 + fVar25 * fVar34;
        fVar34 = -(fVar56 * fVar26) + fVar25 * fVar51 + fVar27 * fVar36 + fVar24 * fVar34;
        fVar36 = *pfVar14;
        fVar56 = pfVar14[1];
        fVar51 = (fVar57 * fVar63 - fVar34 * fVar56) + fVar61 * fVar39;
        fVar45 = -(fVar57 * fVar61) + fVar34 * fVar36 + fVar63 * fVar39;
        fVar48 = (fVar56 * fVar61 - fVar63 * fVar36) + fVar34 * fVar39;
        fVar34 = fVar56 * fVar63 + fVar61 * fVar36 + fVar34 * fVar57;
        fVar61 = ((fVar57 * fVar45 + fVar39 * fVar51) - fVar56 * fVar48) + fVar36 * fVar34;
        fVar41 = -(fVar45 * fVar36) + fVar56 * fVar51 + fVar39 * fVar48 + fVar57 * fVar34;
        fVar63 = (fVar39 * fVar45 - fVar57 * fVar51) + fVar36 * fVar48 + fVar56 * fVar34;
        fVar34 = SQRT(fVar63 * fVar63 + fVar61 * fVar61 + fVar41 * fVar41);
        if (0.0 < fVar34) {
          fVar34 = 1.0 / fVar34;
          fVar61 = fVar61 * fVar34;
          fVar63 = fVar63 * fVar34;
          fVar41 = fVar41 * fVar34;
        }
        fVar34 = fVar59 * fVar63 + fVar61 * fVar29 + fVar41 * fVar54 + 1.0;
        if (fVar34 <= 1.1920929e-06) {
          fVar51 = 0.0;
          if ((fVar59 < -1.1920929e-06) || (1.1920929e-06 < fVar59)) {
            fVar29 = (fVar29 * fVar29) / (fVar59 * fVar59);
            fVar34 = 1.0 / (fVar29 + 1.0);
            fVar29 = fVar29 * fVar34;
            fVar57 = -SQRT(fVar34);
            fVar34 = SQRT(fVar29);
            if (NAN(fVar34)) {
              fVar34 = sqrtf(fVar29);
            }
          }
          else {
            fVar57 = 0.0;
            fVar34 = 1.0;
          }
          fVar56 = 0.0;
        }
        else {
          fVar51 = SQRT(fVar34 + fVar34);
          if (NAN(fVar51)) {
            fVar51 = sqrtf(fVar34 + fVar34);
          }
          fVar56 = 1.0 / fVar51;
          fVar51 = fVar51 * 0.5;
          fVar57 = (-(fVar54 * fVar63) + fVar41 * fVar59) * fVar56;
          fVar34 = (-(fVar29 * fVar41) + fVar61 * fVar54) * fVar56;
          fVar56 = (-(fVar59 * fVar61) + fVar63 * fVar29) * fVar56;
        }
        fVar61 = *pfVar14;
        fVar63 = pfVar14[1];
        fVar54 = pfVar14[2];
        fVar59 = pfVar14[3];
        fVar29 = -fVar25;
        lVar13 = lVar19 + (long)(int)uVar58 * 0xe0;
        pfVar10 = (float *)(lVar13 + 0xa0);
        pfVar5 = (float *)(lVar13 + 0x9c);
        pfVar6 = (float *)(lVar13 + 0x98);
        if (*(long *)(lVar13 + 0x20) != 0) {
          pfVar10 = pfVar14 + 6;
          pfVar5 = pfVar14 + 5;
          pfVar6 = pfVar14 + 4;
        }
        fVar39 = *pfVar5;
        fVar36 = *pfVar10;
        fVar45 = (fVar51 * fVar61 + fVar57 * fVar59 + fVar56 * fVar63) - fVar34 * fVar54;
        fVar41 = ((-(fVar61 * fVar57) + fVar51 * fVar59) - fVar34 * fVar63) - fVar56 * fVar54;
        fVar48 = -(fVar61 * fVar56) + fVar34 * fVar59 + fVar51 * fVar63 + fVar57 * fVar54;
        *(float *)(lVar13 + 0xd4) = *pfVar6;
        *(float *)(lVar13 + 0xd8) = fVar39;
        *(float *)(lVar13 + 0xdc) = fVar36;
        fVar63 = ((fVar34 * fVar61 + fVar56 * fVar59) - fVar57 * fVar63) + fVar51 * fVar54;
        *(float *)(lVar13 + 0xc4) = fVar45;
        *(float *)(lVar13 + 200) = fVar48;
        fVar34 = fVar45 * -fVar26 + fVar41 * fVar27 + fVar48 * fVar29 + fVar63 * -fVar24;
        *(float *)(lVar13 + 0xcc) = fVar63;
        *(float *)(lVar13 + 0xd0) = fVar41;
        fVar61 = fVar26 * fVar41 + fVar45 * fVar27 + fVar63 * fVar25 + fVar48 * -fVar24;
        fVar25 = fVar63 * -fVar26 + fVar48 * fVar27 + fVar41 * fVar25 + fVar45 * fVar24;
        fVar24 = fVar26 * fVar48 + fVar63 * fVar27 + fVar45 * fVar29 + fVar41 * fVar24;
        fVar26 = SQRT(fVar61 * fVar61 + fVar34 * fVar34 + fVar25 * fVar25 + fVar24 * fVar24);
        if (0.0 < fVar26) {
          fVar26 = 1.0 / fVar26;
          fVar34 = fVar34 * fVar26;
          fVar61 = fVar61 * fVar26;
          fVar25 = fVar25 * fVar26;
          fVar24 = fVar24 * fVar26;
        }
        uVar58 = uVar58 + 1;
        fVar26 = fVar61;
        fVar27 = fVar34;
      } while (uVar52 != uVar58);
    }
    lVar19 = *(long *)(param_1 + 0x28);
    fVar25 = (fVar31 - *(float *)(lVar19 + 0x310)) /
             (*(float *)(lVar19 + 0x330) - *(float *)(lVar19 + 0x310));
    fVar24 = 1.0;
    if (fVar25 <= 1.0) {
      fVar24 = fVar25;
    }
    fVar26 = 0.0;
    if (0.0 <= fVar25) {
      fVar26 = fVar24;
    }
    if (fVar26 < *(float *)(param_1 + 0x7c)) {
      fVar24 = *(float *)(param_1 + 0x7c) + -1.0 / (float)*(int *)(lVar19 + 0x2f0);
      if (fVar26 <= fVar24) {
        fVar26 = fVar24;
      }
    }
    *(float *)(param_1 + 0x7c) = fVar26;
    fVar24 = 1.0;
    if ((fVar26 < 1.0) && (fVar24 = 0.0, 0.0 < fVar26)) {
      fVar26 = (float)FUN_038cd7d8(fVar26 * -7.0);
      fVar26 = 1.0 - fVar26;
      fVar25 = 1.0;
      if (fVar26 <= 1.0) {
        fVar25 = fVar26;
      }
      fVar24 = 0.0;
      if (0.0 <= fVar26) {
        fVar24 = fVar25;
      }
    }
    iVar2 = *(int *)(param_1 + 0x98);
    if (iVar2 != 0) {
      lVar19 = *(long *)(param_1 + 0xa0);
      iVar22 = 0;
      do {
        lVar13 = lVar19 + (long)iVar22 * 0xe0;
        sVar4 = *(short *)(lVar13 + 0x1c);
        sVar3 = *(short *)(lVar13 + 0x1e);
        if (sVar4 != -1 && sVar3 != -1) {
          lVar17 = lVar19 + (long)iVar22 * 0xe0;
          local_118 = 0;
          local_110 = 0.0;
          local_128 = uVar21;
          local_120 = uVar11;
          FUN_03951cf4(fVar24,&local_128,lVar17 + 0x88,lVar17 + 0xc4);
          local_118 = CONCAT44(*(float *)(lVar17 + 0x9c) +
                               fVar24 * (*(float *)(lVar17 + 0xd8) - *(float *)(lVar17 + 0x9c)),
                               *(float *)(lVar17 + 0x98) +
                               fVar24 * (*(float *)(lVar17 + 0xd4) - *(float *)(lVar17 + 0x98)));
          lVar16 = *(long *)(param_1 + 0x20);
          local_110 = *(float *)(lVar17 + 0xa0) +
                      fVar24 * (*(float *)(lVar17 + 0xdc) - *(float *)(lVar17 + 0xa0));
          sVar4 = *(short *)(lVar13 + 0x1e);
          FUN_03efa0c0(lVar16,(int)sVar4);
          uVar58 = (uint)sVar4;
          uVar52 = uVar58;
          if (*(uint *)(lVar16 + 0x10) <= (uint)(int)sVar4) {
            uVar52 = 0;
          }
          puVar15 = (undefined4 *)(*(long *)(lVar16 + 0x18) + (long)(int)uVar52 * 0x1c);
          *puVar15 = (undefined4)local_128;
          puVar15[1] = local_128._4_4_;
          puVar15[2] = (undefined4)local_120;
          puVar15[3] = local_120._4_4_;
          puVar15[4] = (float)local_118;
          puVar15[5] = local_118._4_4_;
          puVar15[6] = local_110;
          if (*(uint *)(lVar16 + 0x30) <= uVar58) {
            uVar58 = 0;
          }
          *(undefined1 *)(*(long *)(lVar16 + 0x38) + (long)(int)uVar58) = 2;
          *(undefined1 *)(lVar16 + 0x40) = 0;
          sVar4 = *(short *)(lVar13 + 0x1c);
          sVar3 = *(short *)(lVar13 + 0x1e);
        }
        lVar13 = *(long *)(param_1 + 0x20);
        if (sVar4 == -1 || sVar3 == -1) {
          plVar18 = (long *)(lVar19 + (long)iVar22 * 0xe0 + 0x20);
          sVar4 = *(short *)(*plVar18 + 0x1e);
          uVar58 = (uint)sVar4;
          uVar52 = uVar58;
          if (*(uint *)(lVar13 + 0x30) <= (uint)(int)sVar4) {
            uVar52 = 0;
          }
          if ((*(byte *)(*(long *)(lVar13 + 0x38) + (long)(int)uVar52) >> 1 & 1) == 0) {
            if (*(uint *)(lVar13 + 0x20) <= uVar58) {
              uVar58 = 0;
            }
            pfVar14 = (float *)(*(long *)(lVar13 + 0x28) + (long)(int)uVar58 * 0x1c);
          }
          else {
            pfVar14 = (float *)FUN_03ef9df0();
            lVar13 = *(long *)(param_1 + 0x20);
            sVar4 = *(short *)(*plVar18 + 0x1e);
          }
          fVar51 = *pfVar14;
          fVar31 = pfVar14[1];
          fVar56 = pfVar14[6];
          fVar59 = pfVar14[2];
          fVar54 = pfVar14[3];
          fVar63 = pfVar14[4];
          fVar57 = pfVar14[5];
          lVar13 = FUN_03ef9b40(lVar13,(long)sVar4);
          fVar26 = *(float *)(lVar13 + 0x14);
          fVar25 = *(float *)(lVar13 + 0x18);
          fVar27 = *(float *)(lVar13 + 0x10);
          fVar29 = -(fVar59 * fVar26) + fVar25 * fVar31 + fVar27 * fVar54;
          fVar34 = (fVar59 * fVar27 - fVar25 * fVar51) + fVar26 * fVar54;
          fVar61 = -(fVar31 * fVar27) + fVar26 * fVar51 + fVar25 * fVar54;
          fVar25 = (-(fVar31 * fVar26) - fVar27 * fVar51) - fVar25 * fVar59;
          fVar63 = fVar63 + ((-(fVar59 * fVar34) + fVar54 * fVar29 + fVar31 * fVar61) -
                            fVar51 * fVar25);
          fVar57 = fVar57 + (((fVar54 * fVar34 + fVar59 * fVar29) - fVar51 * fVar61) -
                            fVar31 * fVar25);
          fVar56 = fVar56 + (((fVar51 * fVar34 - fVar31 * fVar29) + fVar54 * fVar61) -
                            fVar59 * fVar25);
          fVar29 = -(local_140 * fVar57) + fVar56 * fStack_144 + fVar63 * local_13c;
          fVar34 = (local_140 * fVar63 - fVar56 * local_148) + fVar57 * local_13c;
          fVar61 = -(fStack_144 * fVar63) + fVar57 * local_148 + fVar56 * local_13c;
          fVar25 = (-(fStack_144 * fVar57) - fVar63 * local_148) - fVar56 * local_140;
        }
        else {
          uVar58 = (uint)sVar3;
          uVar52 = uVar58;
          if (*(uint *)(lVar13 + 0x30) <= uVar58) {
            uVar52 = 0;
          }
          if ((*(byte *)(*(long *)(lVar13 + 0x38) + (long)(int)uVar52) >> 1 & 1) == 0) {
            if (*(uint *)(lVar13 + 0x20) <= uVar58) {
              uVar58 = 0;
            }
            lVar13 = *(long *)(lVar13 + 0x28) + (long)(int)uVar58 * 0x1c;
          }
          else {
            lVar13 = FUN_03ef9df0();
          }
          fVar26 = *(float *)(lVar13 + 0x14);
          fVar25 = *(float *)(lVar13 + 0x18);
          fVar27 = *(float *)(lVar13 + 0x10);
          fVar29 = -(local_140 * fVar26) + fVar25 * fStack_144 + fVar27 * local_13c;
          fVar34 = (local_140 * fVar27 - fVar25 * local_148) + fVar26 * local_13c;
          fVar61 = -(fStack_144 * fVar27) + fVar26 * local_148 + fVar25 * local_13c;
          fVar25 = (-(fStack_144 * fVar26) - fVar27 * local_148) - fVar25 * local_140;
        }
        fVar26 = -local_140;
        fVar27 = -local_148;
        fVar51 = -fStack_144;
        lVar13 = lVar19 + (long)iVar22 * 0xe0;
        fVar59 = *(float *)(lVar13 + 0x40);
        fVar48 = *(float *)(lVar13 + 0x5c);
        fVar45 = *(float *)(lVar13 + 0x60);
        fVar41 = *(float *)(lVar13 + 100);
        fVar31 = *(float *)(lVar13 + 0x44);
        fVar63 = *(float *)(lVar13 + 0x48);
        fVar60 = *(float *)(param_1 + 0x48);
        fVar43 = *(float *)(param_1 + 0x4c);
        fVar62 = fVar31 * fVar26 + fVar63 * fStack_144 + fVar59 * local_13c;
        fVar57 = *(float *)(param_1 + 0x40);
        fVar54 = *(float *)(param_1 + 0x44);
        fVar39 = local_140 * fVar59 + fVar63 * fVar27 + fVar31 * local_13c;
        fVar36 = fVar59 * fVar51 + fVar31 * local_148 + fVar63 * local_13c;
        fVar56 = fVar31 * fVar51 + fVar59 * fVar27 + fVar63 * fVar26;
        fVar31 = -(fVar60 * fVar45) + fVar41 * fVar54 + fVar48 * fVar43;
        fVar59 = (fVar60 * fVar48 - fVar41 * fVar57) + fVar45 * fVar43;
        fVar32 = -(fVar54 * fVar48) + fVar45 * fVar57 + fVar41 * fVar43;
        fVar41 = (-(fVar54 * fVar45) - fVar48 * fVar57) - fVar41 * fVar60;
        fVar63 = (local_138 +
                 fVar39 * fVar26 + local_13c * fVar62 + fStack_144 * fVar36 + fVar27 * fVar56) -
                 (*(float *)(param_1 + 0x50) +
                 ((-(fVar60 * fVar59) + fVar43 * fVar31 + fVar54 * fVar32) - fVar57 * fVar41));
        fVar27 = (fStack_134 +
                 local_13c * fVar39 + local_140 * fVar62 + fVar27 * fVar36 + fVar51 * fVar56) -
                 (*(float *)(param_1 + 0x54) +
                 (((fVar43 * fVar59 + fVar60 * fVar31) - fVar57 * fVar32) - fVar54 * fVar41));
        fVar26 = (local_130 +
                 local_148 * fVar39 + fVar51 * fVar62 + local_13c * fVar36 + fVar26 * fVar56) -
                 (*(float *)(param_1 + 0x58) +
                 (((fVar57 * fVar59 - fVar54 * fVar31) + fVar43 * fVar32) - fVar60 * fVar41));
        fVar51 = *(float *)(param_1 + 0x7c);
        *(float *)(lVar13 + 0xa4) =
             local_138 +
             ((-(local_140 * fVar34) + local_13c * fVar29 + fStack_144 * fVar61) -
             local_148 * fVar25);
        *(float *)(lVar13 + 0xa8) =
             fStack_134 +
             (((local_13c * fVar34 + local_140 * fVar29) - local_148 * fVar61) - fStack_144 * fVar25
             );
        *(float *)(lVar13 + 0xb4) = fVar27 + fVar51 * (*(float *)(lVar13 + 0xb4) - fVar27);
        *(float *)(lVar13 + 0xb8) = fVar26 + fVar51 * (*(float *)(lVar13 + 0xb8) - fVar26);
        *(float *)(lVar13 + 0xac) =
             local_130 +
             (((local_148 * fVar34 - fStack_144 * fVar29) + local_13c * fVar61) - local_140 * fVar25
             );
        *(float *)(lVar13 + 0xb0) = fVar63 + fVar51 * (*(float *)(lVar13 + 0xb0) - fVar63);
        iVar22 = iVar22 + 1;
      } while (iVar2 != iVar22);
    }
    if ((((*(long *)(param_1 + 0x10) != 0) && (lVar19 = *(long *)(param_1 + 0x20), lVar19 != 0)) &&
        (*(long *)(lVar19 + 8) != 0)) && ((*(ushort *)(param_1 + 0x18) >> 2 & 1) != 0)) {
      fVar26 = local_13c + local_13c;
      fVar29 = local_148 + local_148;
      fVar25 = fStack_144 * (fStack_144 + fStack_144);
      fVar24 = (fStack_144 + fStack_144) * local_140;
      fVar27 = local_140 * (local_140 + local_140);
      local_100 = 1.0 - local_148 * fVar29;
      local_128 = CONCAT44(fStack_144 * fVar29 - local_140 * fVar26,(1.0 - fVar25) - fVar27);
      local_118 = CONCAT44(local_100 - fVar27,fStack_144 * fVar29 + local_140 * fVar26);
      local_110 = fVar24 - local_148 * fVar26;
      local_108 = CONCAT44(fVar24 + local_148 * fVar26,local_140 * fVar29 - fStack_144 * fVar26);
      local_100 = local_100 - fVar25;
      local_10c = fStack_134;
      local_120 = CONCAT44(local_138,local_140 * fVar29 + fStack_144 * fVar26);
      local_fc = local_130;
      uVar21 = *(ulong *)**(undefined8 **)(*(long *)(*(long *)(lVar19 + 8) + 0x28) + 0x38);
      if ((*(byte *)(uVar21 + 0xae) >> 3 & 1) != 0) {
        plVar18 = (long *)(uVar21 + 0x80);
        uVar11 = (**(code **)(*plVar18 + 0x10))(plVar18);
        if ((uVar11 & 1) != 0) {
          local_c0 = 0;
          local_d0 = CONCAT44(local_d0._4_4_,2);
          local_b8 = &local_128;
          local_b0 = 0;
          local_c8 = uVar21;
          (*(code *)**(undefined8 **)(uVar21 + 0x80))(plVar18,&local_d0);
        }
      }
      fVar26 = local_130;
      fVar25 = fStack_134;
      fVar24 = local_138;
      uVar21 = *(ulong *)**(undefined8 **)
                           (*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28) + 0x38);
      if ((*(byte *)(uVar21 + 0xae) >> 3 & 1) != 0) {
        plVar18 = (long *)(uVar21 + 0x80);
        uVar11 = (**(code **)(*plVar18 + 0x10))(plVar18);
        if ((uVar11 & 1) != 0) {
          local_118 = 0x3f80000000000000;
          local_128 = 0x3f800000;
          local_100 = 1.0;
          local_d0 = CONCAT44(local_d0._4_4_,2);
          local_b8 = &local_128;
          local_110 = 0.0;
          local_108 = 0;
          local_120 = (ulong)(uint)fVar24 << 0x20;
          local_10c = fVar25;
          local_fc = fVar26;
          local_b0 = 0;
          local_c0 = 0;
          local_c8 = uVar21;
          (*(code *)**(undefined8 **)(uVar21 + 0x80))(plVar18,&local_d0);
        }
      }
      FUN_0071b954((double)*(float *)(param_1 + 0x7c),
                   (double)(*(float *)(*(long *)(param_1 + 0x10) + 4) * 57.295776),&local_128,
                   "FullSimRate:%f\nTurnAngle:%fdegree");
      iVar2 = *(int *)(param_1 + 0x98);
      if (iVar2 != 0) {
        lVar19 = *(long *)(param_1 + 0xa0);
        iVar22 = 0;
        do {
          lVar13 = lVar19 + (long)iVar22 * 0xe0;
          fVar25 = *(float *)(lVar13 + 0xac);
          uVar52 = *(uint *)(lVar13 + 0xa4);
          fVar24 = *(float *)(lVar13 + 0xa8);
          uVar21 = *(ulong *)**(undefined8 **)
                               (*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28) + 0x38);
          if ((*(byte *)(uVar21 + 0xae) >> 3 & 1) != 0) {
            uVar58 = *(uint *)(lVar13 + 0x68);
            fVar26 = *(float *)(lVar13 + 0x6c);
            fVar27 = *(float *)(lVar13 + 0x70);
            plVar18 = (long *)(uVar21 + 0x80);
            uVar11 = (**(code **)(*plVar18 + 0x10))(plVar18);
            if ((uVar11 & 1) != 0) {
              local_b8 = &local_128;
              local_128 = 0x3f800000;
              local_118 = 0x3f80000000000000;
              local_110 = 0.0;
              local_108 = 0;
              local_100 = 1.0;
              local_120 = (ulong)uVar58 << 0x20;
              local_d0 = CONCAT44(local_d0._4_4_,2);
              local_b0 = 0;
              local_c0 = 0;
              local_10c = fVar26;
              local_fc = fVar27;
              local_c8 = uVar21;
              (*(code *)**(undefined8 **)(uVar21 + 0x80))(plVar18,&local_d0);
            }
          }
          uVar21 = *(ulong *)**(undefined8 **)
                               (*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28) + 0x38);
          if ((*(byte *)(uVar21 + 0xae) >> 3 & 1) != 0) {
            plVar18 = (long *)(uVar21 + 0x80);
            uVar11 = (**(code **)(*plVar18 + 0x10))(plVar18);
            if ((uVar11 & 1) != 0) {
              local_b8 = &local_128;
              local_128 = 0x3f800000;
              local_118 = 0x3f80000000000000;
              local_110 = 0.0;
              local_108 = 0;
              local_100 = 1.0;
              local_120 = (ulong)uVar52 << 0x20;
              local_d0 = CONCAT44(local_d0._4_4_,2);
              local_b0 = 0;
              local_c0 = 0;
              local_10c = fVar24;
              local_fc = fVar25;
              local_c8 = uVar21;
              (*(code *)**(undefined8 **)(uVar21 + 0x80))(plVar18,&local_d0);
            }
          }
          iVar22 = iVar22 + 1;
        } while (iVar2 != iVar22);
      }
    }
    *(float *)(param_1 + 0x40) = local_148;
    *(ulong *)(param_1 + 0x44) = CONCAT44(local_140,fStack_144);
    *(float *)(param_1 + 0x4c) = local_13c;
    *(ulong *)(param_1 + 0x50) = CONCAT44(fStack_134,local_138);
    *(float *)(param_1 + 0x58) = local_130;
  }
  return;
}

