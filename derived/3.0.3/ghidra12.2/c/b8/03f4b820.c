
void FUN_03f4b820(long param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar11;
  byte *pbVar10;
  byte *pbVar9;
  byte *pbVar8;
  byte *pbVar7;
  byte *pbVar6;
  byte *pbVar5;
  byte *pbVar4;
  long lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar18;
  undefined8 uVar17;
  uint uVar19;
  uint uVar20;
  ushort uVar21;
  ushort uVar22;
  ushort uVar23;
  ushort uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  ushort uVar33;
  ushort uVar35;
  ushort uVar36;
  undefined8 uVar34;
  ushort uVar37;
  undefined8 uVar38;
  ushort uVar39;
  ushort uVar40;
  ushort uVar41;
  ushort uVar42;
  undefined1 auVar43 [16];
  byte bVar44;
  undefined8 uVar45;
  undefined1 auVar46 [16];
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  undefined1 auVar63 [16];
  undefined8 local_130 [2];
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0 [6];
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  iVar2 = *(int *)(param_1 + 0x30);
  iVar14 = 0;
  iVar13 = 0;
  local_28 = 0;
  local_20 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  local_130[0] = 0;
  local_48 = 0;
  local_40 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  local_60 = 0;
  local_a0[5] = 0;
  uStack_70 = 0;
  local_a0[3] = 0;
  local_a0[4] = 0;
  local_a0[1] = 0;
  local_a0[2] = 0;
  uStack_a8 = 0;
  local_a0[0] = 0;
  local_b8 = 0;
  local_b0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  local_f0 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  local_110 = 0;
  local_130[1] = 0;
  uStack_120 = 0;
  lVar12 = 0;
  do {
    iVar3 = iVar2 + 0xe + iVar14 * -2;
    uVar16 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar20 = 0;
    iVar27 = 0;
    iVar28 = 0;
    iVar25 = 0;
    iVar26 = 0;
    iVar31 = 0;
    iVar32 = 0;
    iVar29 = 0;
    iVar30 = 0;
    uVar21 = 0;
    uVar22 = 0;
    uVar23 = 0;
    uVar24 = 0;
    iVar15 = 0;
    uVar34 = 0;
    iVar1 = iVar3 + 0xf;
    if (-1 < iVar3) {
      iVar1 = iVar3;
    }
    uVar39 = 0;
    uVar40 = 0;
    uVar41 = 0;
    uVar42 = 0;
    iVar3 = iVar1 >> 4;
    if (iVar2 <= (iVar1 >> 4) + iVar13) {
      iVar3 = iVar2 - iVar13;
    }
    pbVar11 = (byte *)(param_2 + (long)(iVar2 * param_3) * 4 + (long)(iVar13 << 2));
    do {
      bVar44 = *pbVar11;
      bVar47 = pbVar11[1];
      bVar55 = pbVar11[2];
      pbVar4 = pbVar11 + 4;
      bVar48 = pbVar11[5];
      bVar56 = pbVar11[6];
      pbVar5 = pbVar11 + 8;
      bVar49 = pbVar11[9];
      bVar57 = pbVar11[10];
      pbVar6 = pbVar11 + 0xc;
      bVar50 = pbVar11[0xd];
      bVar58 = pbVar11[0xe];
      pbVar7 = pbVar11 + 0x10;
      bVar51 = pbVar11[0x11];
      bVar59 = pbVar11[0x12];
      pbVar8 = pbVar11 + 0x14;
      bVar52 = pbVar11[0x15];
      bVar60 = pbVar11[0x16];
      pbVar9 = pbVar11 + 0x18;
      bVar53 = pbVar11[0x19];
      bVar61 = pbVar11[0x1a];
      pbVar10 = pbVar11 + 0x1c;
      uVar45 = CONCAT17(*pbVar10,CONCAT16(*pbVar9,CONCAT15(*pbVar8,CONCAT14(*pbVar7,CONCAT13(*pbVar6
                                                  ,CONCAT12(*pbVar5,CONCAT11(*pbVar4,bVar44)))))));
      bVar54 = pbVar11[0x1d];
      bVar62 = pbVar11[0x1e];
      pbVar11 = pbVar11 + 0x20;
      uVar39 = uVar39 + (ushort)bVar44 + (ushort)*pbVar4;
      uVar40 = uVar40 + (ushort)*pbVar5 + (ushort)*pbVar6;
      uVar41 = uVar41 + (ushort)*pbVar7 + (ushort)*pbVar8;
      uVar42 = uVar42 + (ushort)*pbVar9 + (ushort)*pbVar10;
      auVar43 = NEON_umull(uVar45,uVar45,1);
      auVar63 = NEON_umull(CONCAT17(bVar54,CONCAT16(bVar53,CONCAT15(bVar52,CONCAT14(bVar51,CONCAT13(
                                                  bVar50,CONCAT12(bVar49,CONCAT11(bVar48,bVar47)))))
                                                  )),
                           CONCAT17(bVar54,CONCAT16(bVar53,CONCAT15(bVar52,CONCAT14(bVar51,CONCAT13(
                                                  bVar50,CONCAT12(bVar49,CONCAT11(bVar48,bVar47)))))
                                                  )),1);
      auVar46 = NEON_umull(CONCAT17(bVar62,CONCAT16(bVar61,CONCAT15(bVar60,CONCAT14(bVar59,CONCAT13(
                                                  bVar58,CONCAT12(bVar57,CONCAT11(bVar56,bVar55)))))
                                                  )),
                           CONCAT17(bVar62,CONCAT16(bVar61,CONCAT15(bVar60,CONCAT14(bVar59,CONCAT13(
                                                  bVar58,CONCAT12(bVar57,CONCAT11(bVar56,bVar55)))))
                                                  )),1);
      uVar33 = (short)uVar34 + (ushort)bVar47 + (ushort)bVar48;
      uVar35 = (short)((ulong)uVar34 >> 0x10) + (ushort)bVar49 + (ushort)bVar50;
      uVar36 = (short)((ulong)uVar34 >> 0x20) + (ushort)bVar51 + (ushort)bVar52;
      uVar37 = (short)((ulong)uVar34 >> 0x30) + (ushort)bVar53 + (ushort)bVar54;
      uVar34 = CONCAT26(uVar37,CONCAT24(uVar36,CONCAT22(uVar35,uVar33)));
      uVar21 = uVar21 + (ushort)bVar55 + (ushort)bVar56;
      uVar22 = uVar22 + (ushort)bVar57 + (ushort)bVar58;
      uVar23 = uVar23 + (ushort)bVar59 + (ushort)bVar60;
      uVar24 = uVar24 + (ushort)bVar61 + (ushort)bVar62;
      iVar15 = iVar15 + 8;
      iVar29 = iVar29 + (uint)auVar43._0_2_ + (uint)auVar43._2_2_;
      iVar30 = iVar30 + (uint)auVar43._4_2_ + (uint)auVar43._6_2_;
      iVar31 = iVar31 + (uint)auVar43._8_2_ + (uint)auVar43._10_2_;
      iVar32 = iVar32 + (uint)auVar43._12_2_ + (uint)auVar43._14_2_;
      iVar25 = iVar25 + (uint)auVar63._0_2_ + (uint)auVar63._2_2_;
      iVar26 = iVar26 + (uint)auVar63._4_2_ + (uint)auVar63._6_2_;
      iVar27 = iVar27 + (uint)auVar63._8_2_ + (uint)auVar63._10_2_;
      iVar28 = iVar28 + (uint)auVar63._12_2_ + (uint)auVar63._14_2_;
      uVar16 = uVar16 + (uint)auVar46._0_2_ + (uint)auVar46._2_2_;
      uVar18 = uVar18 + (uint)auVar46._4_2_ + (uint)auVar46._6_2_;
      uVar19 = uVar19 + (uint)auVar46._8_2_ + (uint)auVar46._10_2_;
      uVar20 = uVar20 + (uint)auVar46._12_2_ + (uint)auVar46._14_2_;
    } while (iVar15 < iVar3);
    iVar13 = iVar3 + iVar13;
    iVar14 = (iVar14 - iVar2) + iVar3 * 8 + 1;
    uVar45 = NEON_urshr((ulong)(uint)(iVar29 + iVar30) + (ulong)(uint)(iVar31 + iVar32),200);
    uVar34 = NEON_urshr((ulong)(uint)(iVar25 + iVar26) + (ulong)(uint)(iVar27 + iVar28),200);
    uVar17 = NEON_urshr(((ulong)uVar16 + (ulong)uVar18 & 0xffffffff) +
                        ((ulong)uVar19 + (ulong)uVar20 & 0xffffffff),200);
    auVar46._4_4_ = (uint)uVar33 + (uint)uVar35 + (uint)uVar36 + (uint)uVar37;
    auVar46._0_4_ =
         (uint)uVar39 + (uint)uVar40 +
         (int)(CONCAT26((short)((uint)uVar41 + (uint)uVar42 >> 0x10),
                        CONCAT24((short)((uint)uVar41 + (uint)uVar42),(uint)uVar39 + (uint)uVar40))
              >> 0x20);
    auVar46._8_4_ = (uint)uVar21 + (uint)uVar22 + (uint)uVar23 + (uint)uVar24;
    auVar46._12_4_ = iVar3;
    auVar43._4_4_ = (int)uVar34;
    auVar43._0_4_ = (int)uVar45;
    auVar43._8_4_ = (int)uVar17;
    auVar43._12_4_ = iVar3;
    auVar46 = NEON_ucvtf(auVar46,4);
    auVar43 = NEON_ucvtf(auVar43,4);
    local_a0[lVar12 * 2 + 1] = auVar46._8_8_;
    local_a0[lVar12 * 2] = auVar46._0_8_;
    local_130[lVar12 * 2 + 1] = auVar43._8_8_;
    local_130[lVar12 * 2] = auVar43._0_8_;
    lVar12 = lVar12 + 1;
  } while (iVar13 < iVar2 + -1);
  param_1 = param_1 + (long)(int)(*(float *)(param_1 + 0x40) * (float)param_3 + 0.5) * 0x90;
  *(float *)(param_1 + 0x4c) = (float)local_a0[1] + *(float *)(param_1 + 0x4c);
  *(float *)(param_1 + 0x50) = (float)((ulong)local_a0[1] >> 0x20) + *(float *)(param_1 + 0x50);
  *(float *)(param_1 + 0x44) = (float)local_a0[0] + *(float *)(param_1 + 0x44);
  *(float *)(param_1 + 0x48) = (float)((ulong)local_a0[0] >> 0x20) + *(float *)(param_1 + 0x48);
  *(ulong *)(param_1 + 0x5c) =
       CONCAT44((float)((ulong)local_a0[3] >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_1 + 0x5c) >> 0x20),
                (float)local_a0[3] + (float)*(undefined8 *)(param_1 + 0x5c));
  *(ulong *)(param_1 + 0x54) =
       CONCAT44((float)((ulong)local_a0[2] >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_1 + 0x54) >> 0x20),
                (float)local_a0[2] + (float)*(undefined8 *)(param_1 + 0x54));
  *(ulong *)(param_1 + 0x6c) =
       CONCAT44((float)((ulong)local_a0[5] >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_1 + 0x6c) >> 0x20),
                (float)local_a0[5] + (float)*(undefined8 *)(param_1 + 0x6c));
  *(ulong *)(param_1 + 100) =
       CONCAT44((float)((ulong)local_a0[4] >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_1 + 100) >> 0x20),
                (float)local_a0[4] + (float)*(undefined8 *)(param_1 + 100));
  *(float *)(param_1 + 0x7c) = (float)local_68 + *(float *)(param_1 + 0x7c);
  *(float *)(param_1 + 0x80) = local_68._4_4_ + *(float *)(param_1 + 0x80);
  *(float *)(param_1 + 0x74) = (float)uStack_70 + *(float *)(param_1 + 0x74);
  *(float *)(param_1 + 0x78) = uStack_70._4_4_ + *(float *)(param_1 + 0x78);
  uVar38 = *(undefined8 *)(param_1 + 0xac);
  uVar17 = *(undefined8 *)(param_1 + 0xa4);
  *(float *)(param_1 + 0x8c) = (float)uStack_58 + *(float *)(param_1 + 0x8c);
  *(float *)(param_1 + 0x90) = (float)((ulong)uStack_58 >> 0x20) + *(float *)(param_1 + 0x90);
  *(float *)(param_1 + 0x84) = (float)local_60 + *(float *)(param_1 + 0x84);
  *(float *)(param_1 + 0x88) = (float)((ulong)local_60 >> 0x20) + *(float *)(param_1 + 0x88);
  uVar45 = *(undefined8 *)(param_1 + 0x55c);
  uVar34 = *(undefined8 *)(param_1 + 0x554);
  *(float *)(param_1 + 0x9c) = (float)local_48 + *(float *)(param_1 + 0x9c);
  *(float *)(param_1 + 0xa0) = (float)((ulong)local_48 >> 0x20) + *(float *)(param_1 + 0xa0);
  *(float *)(param_1 + 0x94) = (float)uStack_50 + *(float *)(param_1 + 0x94);
  *(float *)(param_1 + 0x98) = (float)((ulong)uStack_50 >> 0x20) + *(float *)(param_1 + 0x98);
  *(float *)(param_1 + 0xac) = (float)uStack_38 + (float)uVar38;
  *(float *)(param_1 + 0xb0) = (float)((ulong)uStack_38 >> 0x20) + (float)((ulong)uVar38 >> 0x20);
  *(float *)(param_1 + 0xa4) = (float)local_40 + (float)uVar17;
  *(float *)(param_1 + 0xa8) = (float)((ulong)local_40 >> 0x20) + (float)((ulong)uVar17 >> 0x20);
  *(float *)(param_1 + 0x55c) = (float)local_130[1] + (float)uVar45;
  *(float *)(param_1 + 0x560) =
       (float)((ulong)local_130[1] >> 0x20) + (float)((ulong)uVar45 >> 0x20);
  *(float *)(param_1 + 0x554) = (float)local_130[0] + (float)uVar34;
  *(float *)(param_1 + 0x558) =
       (float)((ulong)local_130[0] >> 0x20) + (float)((ulong)uVar34 >> 0x20);
  *(ulong *)(param_1 + 0x56c) =
       CONCAT44(local_118._4_4_ + (float)((ulong)*(undefined8 *)(param_1 + 0x56c) >> 0x20),
                (float)local_118 + (float)*(undefined8 *)(param_1 + 0x56c));
  *(ulong *)(param_1 + 0x564) =
       CONCAT44(uStack_120._4_4_ + (float)((ulong)*(undefined8 *)(param_1 + 0x564) >> 0x20),
                (float)uStack_120 + (float)*(undefined8 *)(param_1 + 0x564));
  *(float *)(param_1 + 0xbc) = (float)local_28 + *(float *)(param_1 + 0xbc);
  *(float *)(param_1 + 0xc0) = (float)((ulong)local_28 >> 0x20) + *(float *)(param_1 + 0xc0);
  *(float *)(param_1 + 0xb4) = (float)uStack_30 + *(float *)(param_1 + 0xb4);
  *(float *)(param_1 + 0xb8) = (float)((ulong)uStack_30 >> 0x20) + *(float *)(param_1 + 0xb8);
  *(float *)(param_1 + 0x57c) = (float)uStack_108 + *(float *)(param_1 + 0x57c);
  *(float *)(param_1 + 0x580) = (float)((ulong)uStack_108 >> 0x20) + *(float *)(param_1 + 0x580);
  *(float *)(param_1 + 0x574) = (float)local_110 + *(float *)(param_1 + 0x574);
  *(float *)(param_1 + 0x578) = (float)((ulong)local_110 >> 0x20) + *(float *)(param_1 + 0x578);
  *(ulong *)(param_1 + 0x58c) =
       CONCAT44((float)((ulong)local_f8 >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_1 + 0x58c) >> 0x20),
                (float)local_f8 + (float)*(undefined8 *)(param_1 + 0x58c));
  *(ulong *)(param_1 + 0x584) =
       CONCAT44((float)((ulong)uStack_100 >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_1 + 0x584) >> 0x20),
                (float)uStack_100 + (float)*(undefined8 *)(param_1 + 0x584));
  uVar45 = *(undefined8 *)(param_1 + 0x5ac);
  uVar34 = *(undefined8 *)(param_1 + 0x5a4);
  *(ulong *)(param_1 + 0xcc) =
       CONCAT44((float)((ulong)uStack_18 >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_1 + 0xcc) >> 0x20),
                (float)uStack_18 + (float)*(undefined8 *)(param_1 + 0xcc));
  *(ulong *)(param_1 + 0xc4) =
       CONCAT44((float)((ulong)local_20 >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_1 + 0xc4) >> 0x20),
                (float)local_20 + (float)*(undefined8 *)(param_1 + 0xc4));
  *(float *)(param_1 + 0x59c) = (float)uStack_e8 + *(float *)(param_1 + 0x59c);
  *(float *)(param_1 + 0x5a0) = uStack_e8._4_4_ + *(float *)(param_1 + 0x5a0);
  *(float *)(param_1 + 0x594) = (float)local_f0 + *(float *)(param_1 + 0x594);
  *(float *)(param_1 + 0x598) = local_f0._4_4_ + *(float *)(param_1 + 0x598);
  *(float *)(param_1 + 0x5ac) = (float)local_d8 + (float)uVar45;
  *(float *)(param_1 + 0x5b0) = (float)((ulong)local_d8 >> 0x20) + (float)((ulong)uVar45 >> 0x20);
  *(float *)(param_1 + 0x5a4) = (float)uStack_e0 + (float)uVar34;
  *(float *)(param_1 + 0x5a8) = (float)((ulong)uStack_e0 >> 0x20) + (float)((ulong)uVar34 >> 0x20);
  *(ulong *)(param_1 + 0x5bc) =
       CONCAT44((float)((ulong)uStack_c8 >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_1 + 0x5bc) >> 0x20),
                (float)uStack_c8 + (float)*(undefined8 *)(param_1 + 0x5bc));
  *(ulong *)(param_1 + 0x5b4) =
       CONCAT44((float)((ulong)local_d0 >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_1 + 0x5b4) >> 0x20),
                (float)local_d0 + (float)*(undefined8 *)(param_1 + 0x5b4));
  *(ulong *)(param_1 + 0x5cc) =
       CONCAT44(local_b8._4_4_ + (float)((ulong)*(undefined8 *)(param_1 + 0x5cc) >> 0x20),
                (float)local_b8 + (float)*(undefined8 *)(param_1 + 0x5cc));
  *(ulong *)(param_1 + 0x5c4) =
       CONCAT44(uStack_c0._4_4_ + (float)((ulong)*(undefined8 *)(param_1 + 0x5c4) >> 0x20),
                (float)uStack_c0 + (float)*(undefined8 *)(param_1 + 0x5c4));
  *(ulong *)(param_1 + 0x5dc) =
       CONCAT44((float)((ulong)uStack_a8 >> 0x20) + *(float *)(param_1 + 0x5e0),
                (float)uStack_a8 + *(float *)(param_1 + 0x5dc));
  *(ulong *)(param_1 + 0x5d4) =
       CONCAT44((float)((ulong)local_b0 >> 0x20) + *(float *)(param_1 + 0x5d8),
                (float)local_b0 + *(float *)(param_1 + 0x5d4));
  return;
}

