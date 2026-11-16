
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0261f510(long param_1,int *param_2,byte *param_3,uint param_4,uint param_5,uint param_6)

{
  long *plVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  long *plVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  bool bVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  long *plVar27;
  long *plVar28;
  ulong uVar29;
  short local_148;
  undefined1 local_146;
  undefined1 local_145;
  undefined4 local_144;
  short local_140;
  undefined2 local_13e;
  undefined4 local_13c;
  undefined2 local_138;
  undefined2 uStack_136;
  undefined4 uStack_134;
  short local_130;
  undefined2 local_12e;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined2 local_110;
  short local_10c;
  undefined1 local_10a;
  undefined1 local_109;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 local_fc;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined2 uStack_e0;
  undefined2 uStack_de;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined2 uStack_c8;
  undefined2 uStack_c6;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined2 uStack_b0;
  undefined2 uStack_ae;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined2 uStack_98;
  undefined2 uStack_96;
  undefined8 local_94;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined2 uStack_80;
  undefined2 uStack_7e;
  undefined2 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_70;
  
  if (*param_3 < 8) {
    plVar1 = (long *)(param_1 + 0xdd7b0);
    if (0 < *param_2) {
      lVar22 = 0;
      puVar24 = *(undefined8 **)(param_2 + 4);
      do {
        puVar26 = *(undefined8 **)(*(long *)(param_2 + 2) + lVar22 * 8);
        lVar22 = lVar22 + 1;
        *puVar26 = puVar24;
        *(undefined8 **)(param_2 + 4) = puVar26;
        puVar24 = puVar26;
      } while (lVar22 < *param_2);
    }
    *param_2 = 0;
    plVar27 = *(long **)(param_1 + 0xdd7b8);
    while (plVar27 != plVar1) {
      plVar5 = (long *)plVar27[1];
      plVar28 = plVar5;
      if (*plVar27 != 0) {
        *(long **)(*plVar27 + 8) = plVar5;
        plVar28 = (long *)plVar27[1];
      }
      if (plVar28 != (long *)0x0) {
        *plVar28 = *plVar27;
      }
      *plVar27 = 0;
      plVar27[1] = 0;
      *(int *)(param_1 + 0xdd7c0) = *(int *)(param_1 + 0xdd7c0) + -1;
      plVar27[-1] = *(long *)(param_1 + 0xdd7c8);
      *(long **)(param_1 + 0xdd7c8) = plVar27 + -1;
      plVar27 = plVar5;
    }
    puVar24 = (undefined8 *)(param_1 + 0xe97e0);
    *(undefined8 *)(param_1 + 0xe98d0) = 0;
    *(undefined8 *)(param_1 + 0xe98d8) = 0;
    *(undefined8 *)(param_1 + 0xe98c0) = 0;
    *(undefined8 *)(param_1 + 0xe98c8) = 0;
    lVar22 = 0;
    uVar29 = 0;
    *(undefined8 *)(param_1 + 0xe98b0) = 0;
    *(undefined8 *)(param_1 + 0xe98b8) = 0;
    local_138 = 0x4c7b;
    *(undefined8 *)(param_1 + 0xe98a0) = 0;
    *(undefined8 *)(param_1 + 0xe98a8) = 0;
    *(undefined8 *)(param_1 + 0xe9890) = 0;
    *(undefined8 *)(param_1 + 0xe9898) = 0;
    *(undefined8 *)(param_1 + 0xe9880) = 0;
    *(undefined8 *)(param_1 + 0xe9888) = 0;
    *(undefined8 *)(param_1 + 0xe9870) = 0;
    *(undefined8 *)(param_1 + 0xe9878) = 0;
    *(undefined8 *)(param_1 + 0xe9860) = 0;
    *(undefined8 *)(param_1 + 0xe9868) = 0;
    *(undefined8 *)(param_1 + 0xe9850) = 0;
    *(undefined8 *)(param_1 + 0xe9858) = 0;
    *(undefined8 *)(param_1 + 0xe9840) = 0;
    *(undefined8 *)(param_1 + 0xe9848) = 0;
    *(undefined8 *)(param_1 + 0xe9830) = 0;
    *(undefined8 *)(param_1 + 0xe9838) = 0;
    *(undefined8 *)(param_1 + 0xe9820) = 0;
    *(undefined8 *)(param_1 + 0xe9828) = 0;
    *(undefined8 *)(param_1 + 0xe9810) = 0;
    *(undefined8 *)(param_1 + 0xe9818) = 0;
    *(undefined8 *)(param_1 + 0xe9800) = 0;
    *(undefined8 *)(param_1 + 0xe9808) = 0;
    *(undefined8 *)(param_1 + 0xe97f0) = 0;
    *(undefined8 *)(param_1 + 0xe97f8) = 0;
    *puVar24 = 0;
    *(undefined8 *)(param_1 + 0xe97e8) = 0;
    local_130 = *(short *)PTR_DAT_04bb37e0;
    local_10a = PTR_DAT_04bb37e0[2];
    local_109 = PTR_DAT_04bb37e0[3];
    local_12e = *(undefined2 *)(PTR_DAT_04bb37e0 + 2);
    local_12c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    local_94 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_ac = *(undefined8 *)PTR_DAT_04bb37e0;
    local_c4 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_dc = *(undefined8 *)PTR_DAT_04bb37e0;
    local_f4 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_bc = 0;
    uStack_ae = 0;
    local_a4 = 0;
    uStack_96 = 0;
    local_8c = 0;
    uStack_7e = 0;
    uStack_134 = 0;
    local_104 = 0;
    uStack_f6 = 0;
    local_ec = 0;
    uStack_de = 0;
    local_d4 = 0;
    uStack_c6 = 0;
    local_110 = 0;
    local_128 = 0;
    uStack_100 = 0;
    uStack_100._2_2_ = 0;
    local_fc = 0;
    uStack_f8 = 0;
    uStack_e8 = 0;
    uStack_e8._2_2_ = 0;
    local_e4 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_d0._2_2_ = 0;
    local_cc = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_b8._2_2_ = 0;
    local_b4 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_a0._2_2_ = 0;
    local_9c = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_88._2_2_ = 0;
    local_84 = 0;
    local_7c = 0;
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
    local_120 = 0;
    local_118 = 0;
    local_10c = local_130;
    local_108 = local_12c;
    uVar13 = uStack_100._2_2_;
    uVar14 = uStack_e8._2_2_;
    uVar15 = uStack_d0._2_2_;
    uVar16 = uStack_b8._2_2_;
    uVar17 = uStack_a0._2_2_;
    uVar18 = uStack_88._2_2_;
    do {
      uStack_88._2_2_ = uVar18;
      uStack_a0._2_2_ = uVar17;
      uStack_b8._2_2_ = uVar16;
      uStack_d0._2_2_ = uVar15;
      uStack_e8._2_2_ = uVar14;
      uStack_100._2_2_ = uVar13;
      uVar18 = uStack_88._2_2_;
      uVar17 = uStack_a0._2_2_;
      uVar16 = uStack_b8._2_2_;
      uVar15 = uStack_d0._2_2_;
      uVar14 = uStack_e8._2_2_;
      uVar13 = uStack_100._2_2_;
      uVar6 = 1 << (ulong)((uint)uVar29 & 7);
      uVar7 = uStack_100;
      uVar8 = uStack_e8;
      uVar9 = uStack_d0;
      uVar10 = uStack_b8;
      uVar11 = uStack_a0;
      uVar12 = uStack_88;
      if ((((uVar6 & *(byte *)(param_1 + 0xe98e0 + (uVar29 >> 3 & 0x1fff))) != 0) &&
          (uStack_100._2_2_ = uVar13, uStack_e8._2_2_ = uVar14, uStack_d0._2_2_ = uVar15,
          uStack_b8._2_2_ = uVar16, uStack_a0._2_2_ = uVar17, uStack_88._2_2_ = uVar18,
          uVar21 = FUN_0261fb40(param_1,&local_138,uVar29 & 0xffffffff,param_3,param_5 & 1),
          uVar12 = uStack_88, uVar11 = uStack_a0, uVar10 = uStack_b8, uVar9 = uStack_d0,
          uVar8 = uStack_e8, uVar7 = uStack_100, uVar13 = uStack_100._2_2_, uVar14 = uStack_e8._2_2_
          , uVar15 = uStack_d0._2_2_, uVar16 = uStack_b8._2_2_, uVar17 = uStack_a0._2_2_,
          uVar18 = uStack_88._2_2_, (uVar21 & 1) != 0)) && (local_130 != -2)) {
        if ((param_6 & 1) != 0) {
          uStack_a0 = uVar11;
          uStack_88 = uVar12;
          uStack_100 = uVar7;
          uStack_e8 = uVar8;
          uStack_d0 = uVar9;
          uStack_b8 = uVar10;
          if (*(short *)(DAT_0534f200 + 8) == 0x1c) {
            local_140 = local_130;
            local_13e = local_12e;
            local_13c = local_12c;
            uVar7 = uStack_100;
            uStack_100._2_2_ = uVar13;
            uVar8 = uStack_e8;
            uStack_e8._2_2_ = uVar14;
            uVar9 = uStack_d0;
            uStack_d0._2_2_ = uVar15;
            uVar10 = uStack_b8;
            uStack_b8._2_2_ = uVar16;
            uVar11 = uStack_a0;
            uStack_a0._2_2_ = uVar17;
            uVar12 = uStack_88;
            uStack_88._2_2_ = uVar18;
            iVar20 = FUN_0277d6c4(&local_140);
            uVar12 = uStack_88;
            uVar11 = uStack_a0;
            uVar10 = uStack_b8;
            uVar9 = uStack_d0;
            uVar8 = uStack_e8;
            uVar7 = uStack_100;
            uVar13 = uStack_100._2_2_;
            uVar14 = uStack_e8._2_2_;
            uVar15 = uStack_d0._2_2_;
            uVar16 = uStack_b8._2_2_;
            uVar17 = uStack_a0._2_2_;
            uVar18 = uStack_88._2_2_;
            if (iVar20 != 0xa37) goto LAB_0261f7d0;
          }
          else {
            local_140 = local_130;
            local_13e = local_12e;
            local_13c = local_12c;
            uVar7 = uStack_100;
            uStack_100._2_2_ = uVar13;
            uVar8 = uStack_e8;
            uStack_e8._2_2_ = uVar14;
            uVar9 = uStack_d0;
            uStack_d0._2_2_ = uVar15;
            uVar10 = uStack_b8;
            uStack_b8._2_2_ = uVar16;
            uVar11 = uStack_a0;
            uStack_a0._2_2_ = uVar17;
            uVar12 = uStack_88;
            uStack_88._2_2_ = uVar18;
            iVar20 = FUN_0277d6c4(&local_140);
            uVar18 = uStack_88._2_2_;
            uVar17 = uStack_a0._2_2_;
            uVar10 = uStack_b8;
            uVar9 = uStack_d0;
            uVar8 = uStack_e8;
            uVar7 = uStack_100;
            uVar11 = uStack_a0;
            uVar12 = uStack_88;
            if (iVar20 != 0x834) {
              bVar19 = local_130 != -2;
              local_148 = *(short *)PTR_DAT_04bb37e0;
              puVar2 = (undefined2 *)(PTR_DAT_04bb37e0 + 2);
              if (bVar19) {
                puVar2 = &local_12e;
                local_148 = local_130;
              }
              local_146 = *(undefined1 *)puVar2;
              puVar3 = PTR_DAT_04bb37e0 + 3;
              if (bVar19) {
                puVar3 = (undefined1 *)((long)&local_12e + 1);
              }
              local_145 = *puVar3;
              puVar4 = (undefined4 *)(PTR_DAT_04bb37e0 + 4);
              if (bVar19) {
                puVar4 = &local_12c;
              }
              local_144 = *puVar4;
              uVar13 = uStack_100._2_2_;
              uStack_100 = uVar7;
              uVar14 = uStack_e8._2_2_;
              uStack_e8 = uVar8;
              uVar15 = uStack_d0._2_2_;
              uStack_d0 = uVar9;
              uVar16 = uStack_b8._2_2_;
              uStack_b8 = uVar10;
              uVar7 = uStack_100;
              uStack_100._2_2_ = uVar13;
              uVar8 = uStack_e8;
              uStack_e8._2_2_ = uVar14;
              uVar9 = uStack_d0;
              uStack_d0._2_2_ = uVar15;
              uVar10 = uStack_b8;
              uStack_b8._2_2_ = uVar16;
              uStack_a0._2_2_ = uVar17;
              uStack_88._2_2_ = uVar18;
              iVar20 = FUN_0277d6c4(&local_148);
              uVar12 = uStack_88;
              uVar11 = uStack_a0;
              uVar10 = uStack_b8;
              uVar9 = uStack_d0;
              uVar8 = uStack_e8;
              uVar7 = uStack_100;
              uVar13 = uStack_100._2_2_;
              uVar14 = uStack_e8._2_2_;
              uVar15 = uStack_d0._2_2_;
              uVar16 = uStack_b8._2_2_;
              uVar17 = uStack_a0._2_2_;
              uVar18 = uStack_88._2_2_;
              if (iVar20 != 0xbfc) goto LAB_0261f7d0;
            }
          }
        }
        uStack_88._2_2_ = uVar18;
        uStack_a0._2_2_ = uVar17;
        uStack_88 = uVar12;
        uStack_a0 = uVar11;
        uStack_b8 = uVar10;
        uStack_d0 = uVar9;
        uStack_e8 = uVar8;
        uStack_100 = uVar7;
        uVar18 = uStack_88._2_2_;
        uVar17 = uStack_a0._2_2_;
        uVar16 = uStack_b8._2_2_;
        uVar15 = uStack_d0._2_2_;
        uVar14 = uStack_e8._2_2_;
        uVar13 = uStack_100._2_2_;
        puVar26 = (undefined8 *)(param_1 + 0x77814 + lVar22);
        *(short *)((long)puVar26 + -0x5c) = local_130;
        *(undefined1 *)((long)puVar26 + -0x5a) = (undefined1)local_12e;
        *(undefined4 *)(puVar26 + -0xb) = local_12c;
        *(undefined1 *)((long)puVar26 + -0x59) = local_12e._1_1_;
        *(undefined8 *)((long)puVar26 + -0x54) = local_128;
        *(undefined8 *)((long)puVar26 + -0x4c) = local_120;
        *(undefined8 *)((long)puVar26 + -0x44) = local_118;
        *(undefined2 *)((long)puVar26 + -0x3c) = local_110;
        *(short *)(puVar26 + -7) = local_10c;
        *(undefined1 *)((long)puVar26 + -0x36) = local_10a;
        *(undefined1 *)((long)puVar26 + -0x35) = local_109;
        *(undefined4 *)((long)puVar26 + -0x34) = local_108;
        puVar26[-6] = CONCAT26(uVar13,CONCAT44(uStack_100,local_104));
        *(ulong *)((long)puVar26 + -0x2a) = CONCAT26(uStack_f8,CONCAT42(local_fc,uVar13));
        *(undefined2 *)(puVar26 + -4) = (undefined2)local_f4;
        *(undefined1 *)((long)puVar26 + -0x1e) = local_f4._2_1_;
        *(undefined1 *)((long)puVar26 + -0x1d) = local_f4._3_1_;
        *(undefined4 *)((long)puVar26 + -0x1c) = local_f4._4_4_;
        *(ulong *)((long)puVar26 + -0x12) = CONCAT26(uStack_e0,CONCAT42(local_e4,uVar14));
        puVar26[-3] = CONCAT26(uVar14,CONCAT44(uStack_e8,local_ec));
        *(undefined2 *)(puVar26 + -1) = (undefined2)local_dc;
        *(undefined1 *)((long)puVar26 + -6) = local_dc._2_1_;
        *(undefined1 *)((long)puVar26 + -5) = local_dc._3_1_;
        *(undefined4 *)((long)puVar26 + -4) = local_dc._4_4_;
        *(ulong *)((long)puVar26 + 6) = CONCAT26(uStack_c8,CONCAT42(local_cc,uVar15));
        *puVar26 = CONCAT26(uVar15,CONCAT44(uStack_d0,local_d4));
        *(undefined2 *)(puVar26 + 2) = (undefined2)local_c4;
        *(undefined1 *)((long)puVar26 + 0x12) = local_c4._2_1_;
        *(undefined1 *)((long)puVar26 + 0x13) = local_c4._3_1_;
        *(undefined4 *)((long)puVar26 + 0x14) = local_c4._4_4_;
        *(ulong *)((long)puVar26 + 0x1e) = CONCAT26(uStack_b0,CONCAT42(local_b4,uVar16));
        puVar26[3] = CONCAT26(uVar16,CONCAT44(uStack_b8,local_bc));
        *(undefined2 *)(puVar26 + 5) = (undefined2)local_ac;
        *(undefined1 *)((long)puVar26 + 0x2a) = local_ac._2_1_;
        *(undefined1 *)((long)puVar26 + 0x2b) = local_ac._3_1_;
        *(undefined4 *)((long)puVar26 + 0x2c) = local_ac._4_4_;
        *(ulong *)((long)puVar26 + 0x36) = CONCAT26(uStack_98,CONCAT42(local_9c,uVar17));
        puVar26[6] = CONCAT26(uVar17,CONCAT44(uStack_a0,local_a4));
        *(undefined2 *)(puVar26 + 8) = (undefined2)local_94;
        *(undefined1 *)((long)puVar26 + 0x42) = local_94._2_1_;
        *(undefined1 *)((long)puVar26 + 0x43) = local_94._3_1_;
        *(undefined4 *)((long)puVar26 + 0x44) = local_94._4_4_;
        *(ulong *)((long)puVar26 + 0x4e) = CONCAT26(uStack_80,CONCAT42(local_84,uVar18));
        puVar26[9] = CONCAT26(uVar18,CONCAT44(uStack_88,local_8c));
        *(undefined2 *)(puVar26 + 0xb) = local_7c;
        *(undefined4 *)((long)puVar26 + 100) = local_70;
        *(undefined4 *)((long)puVar26 + 0x5c) = local_78;
        *(undefined1 *)(puVar26 + 0xc) = local_74;
        *(undefined8 *)((long)puVar26 + -100) = CONCAT44(uStack_134,CONCAT22(uStack_136,local_138));
        if (*(int *)(param_1 + 0xdd7c0) < *(int *)(param_1 + 0xdd7d8)) {
          puVar25 = *(undefined8 **)(param_1 + 0xdd7c8);
          if (puVar25 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0xdd7c8) = *puVar25;
          }
          *puVar25 = (undefined8 *)((long)puVar26 + -100);
          puVar25[2] = 0;
          plVar27 = puVar25 + 1;
          *plVar27 = 0;
          lVar23 = *plVar1;
          *plVar1 = (long)plVar27;
          puVar25[2] = plVar1;
          *plVar27 = lVar23;
          if (lVar23 != 0) {
            *(long **)(lVar23 + 8) = plVar27;
          }
          *(int *)(param_1 + 0xdd7c0) = *(int *)(param_1 + 0xdd7c0) + 1;
        }
        uVar7 = uStack_100;
        uStack_100._2_2_ = uVar13;
        uVar8 = uStack_e8;
        uStack_e8._2_2_ = uVar14;
        uVar9 = uStack_d0;
        uStack_d0._2_2_ = uVar15;
        uVar10 = uStack_b8;
        uStack_b8._2_2_ = uVar16;
        uVar11 = uStack_a0;
        uStack_a0._2_2_ = uVar17;
        uVar12 = uStack_88;
        uStack_88._2_2_ = uVar18;
        uVar21 = FUN_0261e658(param_1,uVar29 & 0xffffffff,param_3);
        uVar18 = uStack_88._2_2_;
        uVar17 = uStack_a0._2_2_;
        uVar10 = uStack_b8;
        uVar9 = uStack_d0;
        uVar8 = uStack_e8;
        uVar7 = uStack_100;
        if ((uVar21 & 1) == 0) {
          uVar11 = uStack_a0;
          uVar12 = uStack_88;
          uVar13 = uStack_100._2_2_;
          uVar14 = uStack_e8._2_2_;
          uVar15 = uStack_d0._2_2_;
          uVar16 = uStack_b8._2_2_;
          if ((param_4 & 1) != 0) goto LAB_0261f7d0;
        }
        else {
          uVar21 = uVar29 >> 3 & 0x1fffffff;
          *(byte *)((long)puVar24 + uVar21) = *(byte *)((long)puVar24 + uVar21) | (byte)uVar6;
        }
        uVar13 = uStack_100._2_2_;
        uStack_100 = uVar7;
        uVar14 = uStack_e8._2_2_;
        uStack_e8 = uVar8;
        uVar15 = uStack_d0._2_2_;
        uStack_d0 = uVar9;
        uVar16 = uStack_b8._2_2_;
        uStack_b8 = uVar10;
        uVar7 = uStack_100;
        uStack_100._2_2_ = uVar13;
        uVar8 = uStack_e8;
        uStack_e8._2_2_ = uVar14;
        uVar9 = uStack_d0;
        uStack_d0._2_2_ = uVar15;
        uVar10 = uStack_b8;
        uStack_b8._2_2_ = uVar16;
        uVar11 = uStack_a0;
        uStack_a0._2_2_ = uVar17;
        uVar12 = uStack_88;
        uStack_88._2_2_ = uVar18;
        FUN_00dbf7b0(param_2,&local_138);
        uVar12 = uStack_88;
        uVar11 = uStack_a0;
        uVar10 = uStack_b8;
        uVar9 = uStack_d0;
        uVar8 = uStack_e8;
        uVar7 = uStack_100;
        uVar13 = uStack_100._2_2_;
        uVar14 = uStack_e8._2_2_;
        uVar15 = uStack_d0._2_2_;
        uVar16 = uStack_b8._2_2_;
        uVar17 = uStack_a0._2_2_;
        uVar18 = uStack_88._2_2_;
      }
LAB_0261f7d0:
      uStack_88._2_2_ = uVar18;
      uStack_a0._2_2_ = uVar17;
      uStack_b8._2_2_ = uVar16;
      uStack_d0._2_2_ = uVar15;
      uStack_e8._2_2_ = uVar14;
      uStack_100._2_2_ = uVar13;
      uStack_88 = uVar12;
      uStack_a0 = uVar11;
      uStack_b8 = uVar10;
      uStack_d0 = uVar9;
      uStack_e8 = uVar8;
      uStack_100 = uVar7;
      uVar18 = uStack_88._2_2_;
      uVar17 = uStack_a0._2_2_;
      uVar16 = uStack_b8._2_2_;
      uVar15 = uStack_d0._2_2_;
      uVar14 = uStack_e8._2_2_;
      uVar13 = uStack_100._2_2_;
      lVar22 = lVar22 + 0xcc;
      uVar29 = uVar29 + 1;
    } while (lVar22 != 0x66000);
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}

