
void FUN_03a28264(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,uint param_6,undefined8 *param_7,undefined8 param_8,undefined8 param_9
                 ,float *param_10)

{
  undefined8 *puVar1;
  uint uVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  float *pfVar12;
  long lVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar24;
  undefined8 uVar23;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  float fVar29;
  undefined8 uVar30;
  undefined8 uVar31;
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
  float fVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined **local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  float local_fc;
  float fStack_f8;
  float local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  
  if (*(char *)(param_5 + 0x338) != '\0') {
    lVar13 = *(long *)(param_5 + 0x10);
    uVar14 = *param_7;
    fVar15 = *(float *)(param_5 + 0x344);
    fVar41 = *(float *)(param_5 + 0x34c);
    if (*(uint *)(param_5 + 8) <= param_6) {
      param_6 = 0;
    }
    fVar16 = *(float *)(param_5 + 0x348);
    plVar10 = (long *)(lVar13 + (long)(int)param_6 * 0x548);
    puVar1 = (undefined8 *)((long)plVar10 + 0x18c);
    fVar42 = *(float *)((long)plVar10 + 0x174);
    fVar38 = *(float *)(plVar10 + 0x2f);
    fVar40 = *(float *)((long)plVar10 + 0x17c);
    *(undefined8 *)((long)plVar10 + 0x194) = param_7[1];
    *puVar1 = uVar14;
    uVar14 = param_7[2];
    *(undefined8 *)((long)plVar10 + 0x1a4) = param_7[3];
    *(undefined8 *)((long)plVar10 + 0x19c) = uVar14;
    uVar14 = param_7[4];
    *(undefined8 *)((long)plVar10 + 0x1b4) = param_7[5];
    *(undefined8 *)((long)plVar10 + 0x1ac) = uVar14;
    FUN_007535b4((float *)((long)plVar10 + 0x1bc),param_7);
    FUN_03982fb0(param_1,param_2,param_3,param_4,puVar1,param_8,param_9);
    uStack_d8 = *(undefined8 *)((long)plVar10 + 0x194);
    local_e0 = *puVar1;
    uStack_c8 = *(undefined8 *)((long)plVar10 + 0x1a4);
    local_d0 = *(undefined8 *)((long)plVar10 + 0x19c);
    uStack_b8 = *(undefined8 *)((long)plVar10 + 0x1b4);
    local_c0 = *(undefined8 *)((long)plVar10 + 0x1ac);
    FUN_007535b4(&local_e0,&local_e0);
    local_fc = (local_e0._4_4_ * -0.0 + (float)local_e0 * -0.0) - (float)uStack_d8;
    fStack_f8 = (local_d0._4_4_ * -0.0 + (float)local_d0 * -0.0) - (float)uStack_c8;
    local_f4 = (local_c0._4_4_ * -0.0 + (float)local_c0 * -0.0) - (float)uStack_b8;
    if (((((local_fc < -0.1) || (0.1 < local_fc)) || (fStack_f8 < -0.1)) ||
        ((0.1 < fStack_f8 || (local_f4 < -0.1)))) || (0.1 < local_f4)) {
      local_100 = 0;
      fVar41 = fVar41 + fVar40;
      local_128 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
      local_120 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
      local_118 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x20);
      local_110 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x28);
      local_138 = *(undefined8 *)PTR_DAT_04bb2f80;
      local_130 = *(undefined8 *)(PTR_DAT_04bb2f80 + 8);
      uStack_108 = 0;
      local_e8 = 0;
      fVar15 = fVar15 + fVar42;
      local_140 = &PTR_FUN_04b65548;
      local_f0 = 0x3f80000000000000;
      fVar16 = fVar16 + fVar38;
      FUN_038e4634(&local_140,&local_138);
      local_160 = local_128;
      uStack_158 = local_120;
      local_150 = local_118;
      uStack_148 = local_110;
      local_170 = local_138;
      uStack_168 = local_130;
      FUN_007535b4(&local_170,&local_170);
      lVar11 = lVar13 + (long)(int)param_6 * 0x548;
      fVar19 = (float)local_170 * 0.0;
      fVar40 = (float)((ulong)local_170 >> 0x20);
      fVar21 = fVar40 * 0.0;
      fVar22 = (float)uStack_168 * 0.0;
      fVar42 = (float)((ulong)uStack_168 >> 0x20);
      fVar24 = fVar42 * 0.0;
      fVar20 = (float)local_160;
      fVar36 = (float)((ulong)local_160 >> 0x20);
      fVar33 = (float)uStack_158;
      fVar26 = (float)((ulong)uStack_158 >> 0x20);
      fVar25 = (float)local_150;
      fVar37 = (float)((ulong)local_150 >> 0x20);
      fVar32 = (float)uStack_148;
      fVar34 = (float)((ulong)uStack_148 >> 0x20);
      fVar29 = *(float *)(param_5 + 0x350) * 0.5;
      fVar38 = fVar29 * ((float)local_170 + fVar20 * 0.0 + fVar25 * 0.0 + 0.0);
      fVar17 = fVar29 * (fVar40 + fVar36 * 0.0 + fVar37 * 0.0 + 0.0);
      fVar43 = fVar29 * (fVar36 + fVar21 + fVar37 * 0.0 + 0.0);
      fVar18 = fVar29 * (fVar20 + fVar19 + fVar25 * 0.0 + 0.0);
      fVar20 = fVar29 * (fVar25 + fVar19 + fVar20 * 0.0 + 0.0);
      fVar19 = fVar29 * ((float)uStack_168 + fVar33 * 0.0 + fVar32 * 0.0 + 0.0);
      fVar25 = fVar29 * (fVar33 + fVar22 + fVar32 * 0.0 + 0.0);
      fVar44 = fVar29 * (fVar37 + fVar21 + fVar36 * 0.0 + 0.0);
      fVar29 = fVar29 * (fVar32 + fVar22 + fVar33 * 0.0 + 0.0);
      uVar31 = *(undefined8 *)((long)plVar10 + 0x1b4);
      uVar30 = *(undefined8 *)((long)plVar10 + 0x1ac);
      fVar21 = fVar15 + fVar42 + fVar26 * 0.0 + fVar34 * 0.0 + 0.0;
      fVar42 = fVar16 + fVar26 + fVar24 + fVar34 * 0.0 + 0.0;
      fVar26 = fVar41 + fVar34 + fVar24 + fVar26 * 0.0 + 0.0;
      uVar23 = *(undefined8 *)((long)plVar10 + 0x194);
      uVar14 = *puVar1;
      uVar28 = *(undefined8 *)((long)plVar10 + 0x1a4);
      uVar27 = *(undefined8 *)((long)plVar10 + 0x19c);
      plVar10[0x10] = CONCAT44(fVar21,fVar19);
      plVar10[0xf] = CONCAT44(fVar17,fVar38);
      plVar10[0x12] = CONCAT44(fVar42,fVar25);
      plVar10[0x11] = CONCAT44(fVar43,fVar18);
      *(undefined8 *)(lVar11 + 0xb0) = uVar23;
      *(undefined8 *)(lVar11 + 0xa8) = uVar14;
      *(undefined8 *)(lVar11 + 0xc0) = uVar28;
      *(undefined8 *)(lVar11 + 0xb8) = uVar27;
      *(undefined8 *)(lVar11 + 0xd0) = uVar31;
      *(undefined8 *)(lVar11 + 200) = uVar30;
      uVar46 = *(undefined8 *)(lVar11 + 500);
      uVar45 = *(undefined8 *)(lVar11 + 0x1ec);
      uVar48 = *(undefined8 *)(lVar11 + 0x204);
      uVar47 = *(undefined8 *)(lVar11 + 0x1fc);
      uVar50 = *(undefined8 *)(lVar11 + 0x214);
      uVar49 = *(undefined8 *)(lVar11 + 0x20c);
      plVar10[0x14] = CONCAT44(fVar26,fVar29);
      plVar10[0x13] = CONCAT44(fVar44,fVar20);
      *(undefined8 *)(lVar11 + 0xe0) = uVar46;
      *(undefined8 *)(lVar11 + 0xd8) = uVar45;
      *(undefined8 *)(lVar11 + 0xf0) = uVar48;
      *(undefined8 *)(lVar11 + 0xe8) = uVar47;
      *(undefined8 *)(lVar11 + 0x100) = uVar50;
      *(undefined8 *)(lVar11 + 0xf8) = uVar49;
      fVar40 = (float)uVar14;
      fVar36 = (float)((ulong)uVar14 >> 0x20);
      fVar33 = (float)uVar23;
      fVar22 = (float)uVar27;
      fVar24 = (float)((ulong)uVar27 >> 0x20);
      fVar37 = (float)uVar28;
      fVar51 = fVar38 * fVar40 + fVar18 * fVar36 + fVar20 * fVar33 + 0.0;
      fVar53 = fVar17 * fVar40 + fVar43 * fVar36 + fVar44 * fVar33 + 0.0;
      fVar54 = fVar19 * fVar40 + fVar25 * fVar36 + fVar29 * fVar33 + 0.0;
      fVar40 = (float)((ulong)uVar23 >> 0x20) + fVar21 * fVar40 + fVar42 * fVar36 + fVar26 * fVar33;
      fVar32 = fVar38 * fVar22 + fVar18 * fVar24 + fVar20 * fVar37 + 0.0;
      fVar34 = fVar17 * fVar22 + fVar43 * fVar24 + fVar44 * fVar37 + 0.0;
      fVar35 = fVar19 * fVar22 + fVar25 * fVar24 + fVar29 * fVar37 + 0.0;
      fVar36 = (float)((ulong)uVar28 >> 0x20) + fVar21 * fVar22 + fVar42 * fVar24 + fVar26 * fVar37;
      fVar33 = (float)uVar30;
      fVar22 = (float)((ulong)uVar30 >> 0x20);
      fVar52 = (float)uVar45;
      fVar24 = (float)uVar31;
      fVar58 = (float)uVar47;
      fVar60 = (float)uVar49;
      fVar55 = (float)((ulong)uVar45 >> 0x20);
      fVar59 = (float)((ulong)uVar47 >> 0x20);
      fVar61 = (float)((ulong)uVar49 >> 0x20);
      fVar37 = fVar38 * fVar33 + fVar18 * fVar22 + fVar20 * fVar24 + 0.0;
      fVar43 = fVar17 * fVar33 + fVar43 * fVar22 + fVar44 * fVar24 + 0.0;
      fVar19 = fVar19 * fVar33 + fVar25 * fVar22 + fVar29 * fVar24 + 0.0;
      fVar20 = (float)((ulong)uVar31 >> 0x20) + fVar21 * fVar33 + fVar42 * fVar22 + fVar26 * fVar24;
      fVar38 = (float)uVar46;
      fVar42 = (float)uVar48;
      fVar18 = (float)uVar50;
      pfVar12 = (float *)(lVar11 + 0x118);
      *(ulong *)(lVar11 + 0x120) =
           CONCAT44((float)((ulong)uVar46 >> 0x20) +
                    fVar40 * fVar52 + fVar36 * fVar55 + fVar20 * fVar38,
                    fVar54 * fVar52 + fVar35 * fVar55 + fVar19 * fVar38 + 0.0);
      *(ulong *)pfVar12 =
           CONCAT44(fVar53 * fVar52 + fVar34 * fVar55 + fVar43 * fVar38 + 0.0,
                    fVar51 * fVar52 + fVar32 * fVar55 + fVar37 * fVar38 + 0.0);
      *(ulong *)(lVar11 + 0x130) =
           CONCAT44((float)((ulong)uVar48 >> 0x20) +
                    fVar40 * fVar58 + fVar36 * fVar59 + fVar20 * fVar42,
                    fVar54 * fVar58 + fVar35 * fVar59 + fVar19 * fVar42 + 0.0);
      *(ulong *)(lVar11 + 0x128) =
           CONCAT44(fVar53 * fVar58 + fVar34 * fVar59 + fVar43 * fVar42 + 0.0,
                    fVar51 * fVar58 + fVar32 * fVar59 + fVar37 * fVar42 + 0.0);
      uVar23 = *(undefined8 *)(lVar11 + 0x224);
      uVar14 = *(undefined8 *)(lVar11 + 0x21c);
      fVar38 = (float)uVar14;
      fVar42 = (float)((ulong)uVar14 >> 0x20);
      *(undefined8 *)(lVar11 + 0x110) = uVar23;
      *(undefined8 *)(lVar11 + 0x108) = uVar14;
      fVar17 = (float)uVar23;
      *(ulong *)(lVar11 + 0x140) =
           CONCAT44((float)((ulong)uVar50 >> 0x20) +
                    fVar40 * fVar60 + fVar36 * fVar61 + fVar20 * fVar18,
                    fVar54 * fVar60 + fVar35 * fVar61 + fVar19 * fVar18 + 0.0);
      *(ulong *)(lVar11 + 0x138) =
           CONCAT44(fVar53 * fVar60 + fVar34 * fVar61 + fVar43 * fVar18 + 0.0,
                    fVar51 * fVar60 + fVar32 * fVar61 + fVar37 * fVar18 + 0.0);
      *(ulong *)(lVar11 + 0x150) =
           CONCAT44((float)((ulong)uVar23 >> 0x20) +
                    fVar40 * fVar38 + fVar36 * fVar42 + fVar20 * fVar17,
                    fVar54 * fVar38 + fVar35 * fVar42 + fVar19 * fVar17 + 0.0);
      *(ulong *)(lVar11 + 0x148) =
           CONCAT44(fVar53 * fVar38 + fVar34 * fVar42 + fVar43 * fVar17 + 0.0,
                    fVar51 * fVar38 + fVar32 * fVar42 + fVar37 * fVar17 + 0.0);
      fVar42 = *(float *)(param_5 + 0x364) * 3.1415927;
      fVar38 = sinf(fVar42);
      *(float *)(lVar11 + 0x158) = fVar38;
      fVar38 = cosf(fVar42);
      *(float *)(lVar11 + 0x15c) = fVar38;
      fVar17 = *(float *)(lVar11 + 0x148);
      fVar26 = *(float *)(lVar11 + 0x14c);
      fVar33 = *(float *)(lVar11 + 0x150);
      fVar22 = *(float *)(lVar11 + 0x154);
      fVar21 = *pfVar12;
      fVar29 = *(float *)(lVar11 + 0x124);
      fVar60 = *(float *)(lVar11 + 0x128);
      fVar62 = *(float *)(lVar11 + 300);
      fVar59 = *(float *)(lVar11 + 0x130);
      fVar58 = *(float *)(lVar11 + 0x134);
      fVar61 = *(float *)(lVar11 + 0x13c);
      fVar55 = *(float *)(lVar11 + 0x140);
      fVar52 = *(float *)(lVar11 + 0x138);
      *(float *)(lVar11 + 0x16c) =
           1.0 / (float)(*(int *)(param_5 + 0x368) * *(int *)(param_5 + 0x35c));
      fVar18 = 1.0 / (fVar22 + fVar26 * 0.0 + fVar17 * 0.0 + fVar33 * 0.0);
      fVar24 = *(float *)(lVar11 + 0x11c);
      fVar25 = *(float *)(lVar11 + 0x120);
      fVar38 = fVar29 + fVar24 * 0.0 + fVar21 * 0.0 + fVar25 * 0.0;
      fVar44 = *(float *)(lVar11 + 0x144);
      fVar42 = fVar18 * fVar38;
      fVar38 = -(fVar18 * fVar38);
      if (0.0 <= fVar42) {
        fVar38 = fVar42;
      }
      *(float *)(lVar11 + 0x170) =
           1.0 / ((*(float *)(param_5 + 0x354) *
                  (float)(*(int *)(param_5 + 0x368) * *(int *)(param_5 + 0x35c))) /
                 *(float *)(param_5 + 0x350));
      if (fVar38 <= 3.4028235e+38) {
        fVar38 = fVar18 * (fVar58 + fVar62 * 0.0 + fVar60 * 0.0 + fVar59 * 0.0);
        fVar18 = fVar18 * (fVar44 + fVar61 * 0.0 + fVar52 * 0.0 + fVar55 * 0.0);
      }
      else {
        fVar18 = 1.0 / (fVar22 + fVar26 * 0.1 + fVar17 * 0.1 + fVar33 * 0.1);
        fVar42 = fVar18 * (fVar29 + fVar24 * 0.1 + fVar21 * 0.1 + fVar25 * 0.1);
        fVar38 = fVar18 * (fVar58 + fVar62 * 0.1 + fVar60 * 0.1 + fVar59 * 0.1);
        fVar18 = fVar18 * (fVar44 + fVar61 * 0.1 + fVar52 * 0.1 + fVar55 * 0.1);
      }
      fVar39 = 1.0 / (fVar22 + fVar17 + fVar26 * 0.0 + fVar33 * 0.0);
      fVar64 = fVar29 + fVar21 + fVar24 * 0.0 + fVar25 * 0.0;
      fVar63 = fVar39 * fVar64;
      fVar64 = -(fVar39 * fVar64);
      if (0.0 <= fVar63) {
        fVar64 = fVar63;
      }
      if (fVar64 <= 3.4028235e+38) {
        fVar17 = fVar39 * (fVar58 + fVar60 + fVar62 * 0.0 + fVar59 * 0.0);
        fVar39 = fVar39 * (fVar44 + fVar52 + fVar61 * 0.0 + fVar55 * 0.0);
      }
      else {
        fVar17 = 1.0 / (fVar22 + fVar26 * 0.09901475 + fVar17 * 0.99014753 + fVar33 * 0.09901475);
        fVar63 = fVar17 * (fVar29 + fVar24 * 0.09901475 + fVar21 * 0.99014753 + fVar25 * 0.09901475)
        ;
        fVar39 = fVar17 * (fVar44 + fVar61 * 0.09901475 + fVar52 * 0.99014753 + fVar55 * 0.09901475)
        ;
        fVar17 = fVar17 * (fVar58 + fVar62 * 0.09901475 + fVar60 * 0.99014753 + fVar59 * 0.09901475)
        ;
      }
      lVar9 = lVar13 + (long)(int)param_6 * 0x548;
      fVar17 = SQRT((fVar17 - fVar38) * (fVar17 - fVar38) + (fVar63 - fVar42) * (fVar63 - fVar42) +
                    (fVar39 - fVar18) * (fVar39 - fVar18));
      fVar33 = fVar17 * 0.5;
      *(float *)(lVar9 + 0x160) = fVar33;
      *(float *)(lVar9 + 0x164) = *(float *)(param_5 + 0x354) / *(float *)(param_5 + 0x350);
      *(float *)(lVar9 + 0x168) = *(float *)(param_5 + 0x374) / fVar33;
      if (param_10 != (float *)0x0) {
        *param_10 = fVar42;
        param_10[1] = fVar38;
        param_10[2] = fVar18;
        param_10[3] = fVar17;
      }
      lVar9 = lVar13 + (long)(int)param_6 * 0x548;
      *(float *)(lVar9 + 0x180) = fVar15;
      *(float *)(lVar9 + 0x184) = fVar16;
      *(float *)(lVar9 + 0x188) = fVar41;
      if ((*(char *)(param_5 + 0x33c) != '\0') &&
         (fVar20 = fVar20 + fVar43 * 0.0 + fVar37 * 0.0 + fVar19 * 0.0, fVar20 < 0.0)) {
        lVar13 = lVar13 + (long)(int)param_6 * 0x548;
        fVar38 = *(float *)(lVar13 + 0x278);
        fVar40 = fVar40 + fVar53 * 0.0 + fVar51 * 0.0 + fVar54 * 0.0;
        fVar36 = fVar36 + fVar34 * 0.0 + fVar32 * 0.0 + fVar35 * 0.0;
        fVar16 = *(float *)(param_5 + 0x350) * 0.5;
        fVar42 = *(float *)(lVar13 + 0x280);
        fVar41 = -(fVar20 * fVar42);
        fVar17 = fVar41 * fVar38;
        fVar15 = -fVar36;
        if (0.0 <= fVar36) {
          fVar15 = fVar36;
        }
        bVar4 = false;
        bVar5 = true;
        bVar6 = false;
        if (fVar41 + (fVar16 * SQRT(fVar41 * fVar41 + fVar20 * fVar20)) / fVar20 < fVar15) {
          bVar4 = false;
          bVar5 = false;
          bVar6 = true;
          if (!NAN(fVar15)) {
            bVar4 = fVar15 < 0.0;
            bVar5 = fVar15 == 0.0;
            bVar6 = false;
          }
        }
        fVar41 = fVar41 / fVar15;
        if (bVar5 || bVar4 != bVar6) {
          fVar41 = 1.0;
        }
        fVar15 = -fVar40;
        if (0.0 <= fVar40) {
          fVar15 = fVar40;
        }
        fVar18 = fVar41;
        if (fVar17 + (fVar16 * SQRT(fVar17 * fVar17 + fVar20 * fVar20)) / fVar20 < fVar15) {
          bVar4 = false;
          bVar5 = true;
          bVar6 = false;
          if (fVar17 / fVar15 < fVar41) {
            bVar4 = false;
            bVar5 = false;
            bVar6 = true;
            if (!NAN(fVar15)) {
              bVar4 = fVar15 < 0.0;
              bVar5 = fVar15 == 0.0;
              bVar6 = false;
            }
          }
          fVar18 = fVar17 / fVar15;
          if (bVar5 || bVar4 != bVar6) {
            fVar18 = fVar41;
          }
        }
        fVar15 = SQRT(fVar36 * fVar36 + fVar40 * fVar40 + fVar20 * fVar20);
        fVar40 = fVar40 * fVar18;
        fVar36 = fVar36 * fVar18;
        fVar41 = SQRT(fVar36 * fVar36 + fVar40 * fVar40 + fVar20 * fVar20);
        if (0.0 < fVar41) {
          fVar41 = 1.0 / fVar41;
          fVar40 = fVar40 * fVar41;
          fVar36 = fVar36 * fVar41;
          fVar20 = fVar20 * fVar41;
        }
        fVar20 = fVar15 * fVar20;
        fVar40 = fVar15 * fVar40;
        fVar17 = fVar15 * fVar36;
        fVar42 = -(fVar20 * fVar42);
        fVar41 = -(fVar15 * fVar36);
        if (0.0 <= fVar17) {
          fVar41 = fVar17;
        }
        fVar38 = fVar38 * fVar42;
        if ((0.0 < fVar41) &&
           (fVar42 = fVar42 + (fVar16 * SQRT(fVar42 * fVar42 + fVar20 * fVar20)) / fVar20,
           fVar42 < fVar41)) {
          fVar41 = (fVar41 - (fVar41 - fVar42)) / fVar41;
          fVar40 = fVar40 * fVar41;
          fVar17 = fVar17 * fVar41;
        }
        fVar38 = fVar38 + (fVar16 * SQRT(fVar38 * fVar38 + fVar20 * fVar20)) / fVar20;
        fVar41 = -fVar40;
        if (0.0 <= fVar40) {
          fVar41 = fVar40;
        }
        if ((fVar38 < fVar41) && (0.0 < fVar41)) {
          fVar41 = (fVar41 - (fVar41 - fVar38)) / fVar41;
          fVar17 = fVar17 * fVar41;
          fVar40 = fVar40 * fVar41;
        }
        fVar41 = SQRT(fVar17 * fVar17 + fVar40 * fVar40 + fVar20 * fVar20);
        if (0.0 < fVar41) {
          fVar41 = 1.0 / fVar41;
          fVar40 = fVar40 * fVar41;
          fVar17 = fVar17 * fVar41;
          fVar20 = fVar20 * fVar41;
        }
        fVar40 = fVar15 * fVar40;
        fVar17 = fVar15 * fVar17;
        fVar15 = fVar15 * fVar20;
        uVar50 = *(undefined8 *)(lVar11 + 0x214);
        uVar49 = *(undefined8 *)(lVar11 + 0x20c);
        uVar57 = *(undefined8 *)(lVar11 + 0x224);
        uVar56 = *(undefined8 *)(lVar11 + 0x21c);
        fVar21 = *(float *)(plVar10 + 0x39) +
                 fVar17 * *(float *)(plVar10 + 0x38) + fVar40 * *(float *)((long)plVar10 + 0x1bc) +
                 fVar15 * *(float *)((long)plVar10 + 0x1c4);
        fVar22 = *(float *)(plVar10 + 0x3b) +
                 fVar17 * *(float *)(plVar10 + 0x3a) + fVar40 * *(float *)((long)plVar10 + 0x1cc) +
                 fVar15 * *(float *)((long)plVar10 + 0x1d4);
        fVar24 = *(float *)(plVar10 + 0x3d) +
                 fVar17 * *(float *)(plVar10 + 0x3c) + fVar40 * *(float *)((long)plVar10 + 0x1dc) +
                 fVar15 * *(float *)((long)plVar10 + 0x1e4);
        *(float *)(lVar9 + 0x180) = fVar21;
        *(float *)(lVar9 + 0x184) = fVar22;
        *(float *)(lVar9 + 0x188) = fVar24;
        fVar36 = (float)local_170 * 0.0;
        fVar15 = (float)((ulong)local_170 >> 0x20);
        fVar33 = fVar15 * 0.0;
        fVar26 = (float)uStack_168 * 0.0;
        fVar41 = (float)((ulong)uStack_168 >> 0x20);
        fVar19 = fVar41 * 0.0;
        fVar16 = (float)local_160;
        fVar20 = (float)((ulong)local_160 >> 0x20);
        fVar17 = (float)uStack_158;
        fVar18 = (float)((ulong)uStack_158 >> 0x20);
        fVar25 = (float)local_150;
        fVar37 = (float)((ulong)local_150 >> 0x20);
        fVar32 = (float)uStack_148;
        fVar34 = (float)((ulong)uStack_148 >> 0x20);
        fVar38 = *(float *)(param_5 + 0x350);
        *(undefined8 *)(lVar11 + 0x100) = uVar50;
        *(undefined8 *)(lVar11 + 0xf8) = uVar49;
        *(undefined8 *)(lVar11 + 0x110) = uVar57;
        *(undefined8 *)(lVar11 + 0x108) = uVar56;
        fVar38 = fVar38 * 0.5;
        fVar40 = fVar38 * (fVar15 + fVar20 * 0.0 + fVar37 * 0.0 + 0.0);
        fVar44 = fVar38 * (fVar20 + fVar33 + fVar37 * 0.0 + 0.0);
        fVar15 = fVar38 * ((float)local_170 + fVar16 * 0.0 + fVar25 * 0.0 + 0.0);
        fVar42 = fVar38 * (fVar16 + fVar36 + fVar25 * 0.0 + 0.0);
        fVar35 = fVar38 * ((float)uStack_168 + fVar17 * 0.0 + fVar32 * 0.0 + 0.0);
        fVar16 = fVar38 * (fVar25 + fVar36 + fVar16 * 0.0 + 0.0);
        fVar21 = fVar21 + fVar41 + fVar18 * 0.0 + fVar34 * 0.0 + 0.0;
        fVar29 = fVar38 * (fVar17 + fVar26 + fVar32 * 0.0 + 0.0);
        fVar52 = fVar38 * (fVar37 + fVar33 + fVar20 * 0.0 + 0.0);
        fVar38 = fVar38 * (fVar32 + fVar26 + fVar17 * 0.0 + 0.0);
        fVar22 = fVar22 + fVar18 + fVar19 + fVar34 * 0.0 + 0.0;
        fVar24 = fVar24 + fVar34 + fVar19 + fVar18 * 0.0 + 0.0;
        uVar28 = *(undefined8 *)((long)plVar10 + 0x194);
        uVar27 = *puVar1;
        uVar31 = *(undefined8 *)((long)plVar10 + 0x1a4);
        uVar30 = *(undefined8 *)((long)plVar10 + 0x19c);
        uVar23 = *(undefined8 *)((long)plVar10 + 0x1b4);
        uVar14 = *(undefined8 *)((long)plVar10 + 0x1ac);
        fVar26 = (float)uVar30;
        uVar46 = *(undefined8 *)(lVar11 + 500);
        uVar45 = *(undefined8 *)(lVar11 + 0x1ec);
        uVar48 = *(undefined8 *)(lVar11 + 0x204);
        uVar47 = *(undefined8 *)(lVar11 + 0x1fc);
        fVar19 = (float)((ulong)uVar30 >> 0x20);
        fVar25 = (float)uVar31;
        fVar41 = (float)uVar14;
        fVar20 = (float)((ulong)uVar14 >> 0x20);
        *(undefined8 *)(lVar11 + 0xb0) = uVar28;
        *(undefined8 *)(lVar11 + 0xa8) = uVar27;
        *(undefined8 *)(lVar11 + 0xc0) = uVar31;
        *(undefined8 *)(lVar11 + 0xb8) = uVar30;
        *(undefined8 *)(lVar11 + 0xd0) = uVar23;
        *(undefined8 *)(lVar11 + 200) = uVar14;
        *(undefined8 *)(lVar11 + 0xe0) = uVar46;
        *(undefined8 *)(lVar11 + 0xd8) = uVar45;
        *(undefined8 *)(lVar11 + 0xf0) = uVar48;
        *(undefined8 *)(lVar11 + 0xe8) = uVar47;
        plVar10[0x10] = CONCAT44(fVar21,fVar35);
        plVar10[0xf] = CONCAT44(fVar40,fVar15);
        plVar10[0x12] = CONCAT44(fVar22,fVar29);
        plVar10[0x11] = CONCAT44(fVar44,fVar42);
        fVar17 = (float)uVar23;
        fVar18 = (float)uVar27;
        fVar36 = (float)((ulong)uVar27 >> 0x20);
        plVar10[0x14] = CONCAT44(fVar24,fVar38);
        plVar10[0x13] = CONCAT44(fVar52,fVar16);
        fVar33 = (float)uVar28;
        fVar37 = fVar15 * fVar41 + fVar42 * fVar20 + fVar16 * fVar17 + 0.0;
        fVar32 = fVar40 * fVar41 + fVar44 * fVar20 + fVar52 * fVar17 + 0.0;
        fVar34 = fVar35 * fVar41 + fVar29 * fVar20 + fVar38 * fVar17 + 0.0;
        fVar43 = (float)((ulong)uVar23 >> 0x20) +
                 fVar21 * fVar41 + fVar22 * fVar20 + fVar24 * fVar17;
        fVar41 = fVar15 * fVar18 + fVar42 * fVar36 + fVar16 * fVar33 + 0.0;
        fVar20 = fVar40 * fVar18 + fVar44 * fVar36 + fVar52 * fVar33 + 0.0;
        fVar17 = fVar35 * fVar18 + fVar29 * fVar36 + fVar38 * fVar33 + 0.0;
        fVar18 = (float)((ulong)uVar28 >> 0x20) +
                 fVar21 * fVar18 + fVar22 * fVar36 + fVar24 * fVar33;
        fVar15 = fVar15 * fVar26 + fVar42 * fVar19 + fVar16 * fVar25 + 0.0;
        fVar16 = fVar40 * fVar26 + fVar44 * fVar19 + fVar52 * fVar25 + 0.0;
        fVar38 = fVar35 * fVar26 + fVar29 * fVar19 + fVar38 * fVar25 + 0.0;
        fVar40 = (float)((ulong)uVar31 >> 0x20) +
                 fVar21 * fVar26 + fVar22 * fVar19 + fVar24 * fVar25;
        fVar42 = (float)uVar45;
        fVar36 = (float)((ulong)uVar45 >> 0x20);
        fVar26 = (float)uVar47;
        fVar19 = (float)((ulong)uVar47 >> 0x20);
        fVar22 = (float)uVar49;
        fVar24 = (float)((ulong)uVar49 >> 0x20);
        fVar29 = (float)uVar56;
        fVar35 = (float)((ulong)uVar56 >> 0x20);
        fVar33 = (float)uVar46;
        fVar21 = (float)uVar48;
        fVar25 = (float)uVar50;
        fVar44 = (float)uVar57;
        *(ulong *)(lVar11 + 0x120) =
             CONCAT44((float)((ulong)uVar46 >> 0x20) +
                      fVar18 * fVar42 + fVar40 * fVar36 + fVar43 * fVar33,
                      fVar17 * fVar42 + fVar38 * fVar36 + fVar34 * fVar33 + 0.0);
        *(ulong *)pfVar12 =
             CONCAT44(fVar20 * fVar42 + fVar16 * fVar36 + fVar32 * fVar33 + 0.0,
                      fVar41 * fVar42 + fVar15 * fVar36 + fVar37 * fVar33 + 0.0);
        *(ulong *)(lVar11 + 0x130) =
             CONCAT44((float)((ulong)uVar48 >> 0x20) +
                      fVar18 * fVar26 + fVar40 * fVar19 + fVar43 * fVar21,
                      fVar17 * fVar26 + fVar38 * fVar19 + fVar34 * fVar21 + 0.0);
        *(ulong *)(lVar11 + 0x128) =
             CONCAT44(fVar20 * fVar26 + fVar16 * fVar19 + fVar32 * fVar21 + 0.0,
                      fVar41 * fVar26 + fVar15 * fVar19 + fVar37 * fVar21 + 0.0);
        *(ulong *)(lVar11 + 0x140) =
             CONCAT44((float)((ulong)uVar50 >> 0x20) +
                      fVar18 * fVar22 + fVar40 * fVar24 + fVar43 * fVar25,
                      fVar17 * fVar22 + fVar38 * fVar24 + fVar34 * fVar25 + 0.0);
        *(ulong *)(lVar11 + 0x138) =
             CONCAT44(fVar20 * fVar22 + fVar16 * fVar24 + fVar32 * fVar25 + 0.0,
                      fVar41 * fVar22 + fVar15 * fVar24 + fVar37 * fVar25 + 0.0);
        *(ulong *)(lVar11 + 0x150) =
             CONCAT44((float)((ulong)uVar57 >> 0x20) +
                      fVar18 * fVar29 + fVar40 * fVar35 + fVar43 * fVar44,
                      fVar17 * fVar29 + fVar38 * fVar35 + fVar34 * fVar44 + 0.0);
        *(ulong *)(lVar11 + 0x148) =
             CONCAT44(fVar20 * fVar29 + fVar16 * fVar35 + fVar32 * fVar44 + 0.0,
                      fVar41 * fVar29 + fVar15 * fVar35 + fVar37 * fVar44 + 0.0);
      }
      uVar2 = *(uint *)(param_5 + 0x340);
      *(char *)((long)plVar10 + 0x39) = (char)uVar2;
      uVar3 = *(ushort *)((long)plVar10 + 0x3a);
      lVar11 = plVar10[6];
      iVar7 = (**(code **)(*plVar10 + 0x20))(plVar10);
      iVar8 = (**(code **)(*plVar10 + 0x20))(plVar10);
      lVar9 = plVar10[3];
      lVar13 = 0;
      if (plVar10[4] != 0) {
        lVar13 = (*DAT_04c61fd0)();
      }
      plVar10[2] = lVar13 + (ulong)((int)lVar9 +
                                   (uVar2 & 0xff) * (uint)uVar3 *
                                   (((int)lVar11 + iVar7) - 1U & -iVar8));
    }
  }
  return;
}

