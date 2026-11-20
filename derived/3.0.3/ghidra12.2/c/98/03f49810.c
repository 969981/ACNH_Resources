
void FUN_03f49810(long param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  byte *pbVar12;
  byte *pbVar11;
  byte *pbVar10;
  byte *pbVar9;
  byte *pbVar8;
  byte *pbVar7;
  byte *pbVar6;
  byte *pbVar5;
  long lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar19;
  undefined8 uVar18;
  uint uVar20;
  uint uVar21;
  ushort uVar22;
  ushort uVar23;
  ushort uVar24;
  ushort uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  ushort uVar34;
  ushort uVar36;
  ushort uVar37;
  undefined8 uVar35;
  ushort uVar38;
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
  undefined8 local_a0 [10];
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  iVar2 = *(int *)(param_1 + 0x30);
  iVar15 = 0;
  iVar14 = 0;
  local_10 = 0;
  uStack_8 = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_50[0] = 0;
  local_50[1] = 0;
  lVar13 = 0;
  do {
    iVar3 = iVar2 + 6 + iVar15 * -2;
    uVar17 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar21 = 0;
    iVar28 = 0;
    iVar29 = 0;
    iVar26 = 0;
    iVar27 = 0;
    iVar32 = 0;
    iVar33 = 0;
    iVar30 = 0;
    iVar31 = 0;
    uVar22 = 0;
    uVar23 = 0;
    uVar24 = 0;
    uVar25 = 0;
    iVar16 = 0;
    uVar35 = 0;
    iVar1 = iVar3 + 7;
    if (-1 < iVar3) {
      iVar1 = iVar3;
    }
    uVar39 = 0;
    uVar40 = 0;
    uVar41 = 0;
    uVar42 = 0;
    iVar3 = iVar1 >> 3;
    if (iVar2 <= (iVar1 >> 3) + iVar14) {
      iVar3 = iVar2 - iVar14;
    }
    pbVar12 = (byte *)(param_2 + (long)(iVar2 * param_3) * 4 + (long)(iVar14 << 2));
    do {
      bVar44 = *pbVar12;
      bVar47 = pbVar12[1];
      bVar55 = pbVar12[2];
      pbVar5 = pbVar12 + 4;
      bVar48 = pbVar12[5];
      bVar56 = pbVar12[6];
      pbVar6 = pbVar12 + 8;
      bVar49 = pbVar12[9];
      bVar57 = pbVar12[10];
      pbVar7 = pbVar12 + 0xc;
      bVar50 = pbVar12[0xd];
      bVar58 = pbVar12[0xe];
      pbVar8 = pbVar12 + 0x10;
      bVar51 = pbVar12[0x11];
      bVar59 = pbVar12[0x12];
      pbVar9 = pbVar12 + 0x14;
      bVar52 = pbVar12[0x15];
      bVar60 = pbVar12[0x16];
      pbVar10 = pbVar12 + 0x18;
      bVar53 = pbVar12[0x19];
      bVar61 = pbVar12[0x1a];
      pbVar11 = pbVar12 + 0x1c;
      uVar45 = CONCAT17(*pbVar11,CONCAT16(*pbVar10,CONCAT15(*pbVar9,CONCAT14(*pbVar8,CONCAT13(*
                                                  pbVar7,CONCAT12(*pbVar6,CONCAT11(*pbVar5,bVar44)))
                                                  ))));
      bVar54 = pbVar12[0x1d];
      bVar62 = pbVar12[0x1e];
      pbVar12 = pbVar12 + 0x20;
      uVar39 = uVar39 + (ushort)bVar44 + (ushort)*pbVar5;
      uVar40 = uVar40 + (ushort)*pbVar6 + (ushort)*pbVar7;
      uVar41 = uVar41 + (ushort)*pbVar8 + (ushort)*pbVar9;
      uVar42 = uVar42 + (ushort)*pbVar10 + (ushort)*pbVar11;
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
      uVar34 = (short)uVar35 + (ushort)bVar47 + (ushort)bVar48;
      uVar36 = (short)((ulong)uVar35 >> 0x10) + (ushort)bVar49 + (ushort)bVar50;
      uVar37 = (short)((ulong)uVar35 >> 0x20) + (ushort)bVar51 + (ushort)bVar52;
      uVar38 = (short)((ulong)uVar35 >> 0x30) + (ushort)bVar53 + (ushort)bVar54;
      uVar35 = CONCAT26(uVar38,CONCAT24(uVar37,CONCAT22(uVar36,uVar34)));
      uVar22 = uVar22 + (ushort)bVar55 + (ushort)bVar56;
      uVar23 = uVar23 + (ushort)bVar57 + (ushort)bVar58;
      uVar24 = uVar24 + (ushort)bVar59 + (ushort)bVar60;
      uVar25 = uVar25 + (ushort)bVar61 + (ushort)bVar62;
      iVar16 = iVar16 + 8;
      iVar30 = iVar30 + (uint)auVar43._0_2_ + (uint)auVar43._2_2_;
      iVar31 = iVar31 + (uint)auVar43._4_2_ + (uint)auVar43._6_2_;
      iVar32 = iVar32 + (uint)auVar43._8_2_ + (uint)auVar43._10_2_;
      iVar33 = iVar33 + (uint)auVar43._12_2_ + (uint)auVar43._14_2_;
      iVar26 = iVar26 + (uint)auVar63._0_2_ + (uint)auVar63._2_2_;
      iVar27 = iVar27 + (uint)auVar63._4_2_ + (uint)auVar63._6_2_;
      iVar28 = iVar28 + (uint)auVar63._8_2_ + (uint)auVar63._10_2_;
      iVar29 = iVar29 + (uint)auVar63._12_2_ + (uint)auVar63._14_2_;
      uVar17 = uVar17 + (uint)auVar46._0_2_ + (uint)auVar46._2_2_;
      uVar19 = uVar19 + (uint)auVar46._4_2_ + (uint)auVar46._6_2_;
      uVar20 = uVar20 + (uint)auVar46._8_2_ + (uint)auVar46._10_2_;
      uVar21 = uVar21 + (uint)auVar46._12_2_ + (uint)auVar46._14_2_;
    } while (iVar16 < iVar3);
    iVar14 = iVar3 + iVar14;
    iVar15 = (iVar15 - iVar2) + iVar3 * 4 + 1;
    uVar45 = NEON_urshr((ulong)(uint)(iVar30 + iVar31) + (ulong)(uint)(iVar32 + iVar33),200);
    uVar35 = NEON_urshr((ulong)(uint)(iVar26 + iVar27) + (ulong)(uint)(iVar28 + iVar29),200);
    uVar18 = NEON_urshr(((ulong)uVar17 + (ulong)uVar19 & 0xffffffff) +
                        ((ulong)uVar20 + (ulong)uVar21 & 0xffffffff),200);
    auVar46._4_4_ = (uint)uVar34 + (uint)uVar36 + (uint)uVar37 + (uint)uVar38;
    auVar46._0_4_ =
         (uint)uVar39 + (uint)uVar40 +
         (int)(CONCAT26((short)((uint)uVar41 + (uint)uVar42 >> 0x10),
                        CONCAT24((short)((uint)uVar41 + (uint)uVar42),(uint)uVar39 + (uint)uVar40))
              >> 0x20);
    auVar46._8_4_ = (uint)uVar22 + (uint)uVar23 + (uint)uVar24 + (uint)uVar25;
    auVar46._12_4_ = iVar3;
    auVar43._4_4_ = (int)uVar35;
    auVar43._0_4_ = (int)uVar45;
    auVar43._8_4_ = (int)uVar18;
    auVar43._12_4_ = iVar3;
    auVar46 = NEON_ucvtf(auVar46,4);
    auVar43 = NEON_ucvtf(auVar43,4);
    local_50[lVar13 * 2 + 1] = auVar46._8_8_;
    local_50[lVar13 * 2] = auVar46._0_8_;
    local_50[lVar13 * 2 + -9] = auVar43._8_8_;
    local_50[lVar13 * 2 + -10] = auVar43._0_8_;
    lVar13 = lVar13 + 1;
  } while (iVar14 < iVar2 + -1);
  param_1 = param_1 + (long)(int)(*(float *)(param_1 + 0x40) * (float)param_3 + 0.5) * 0x50;
  uVar45 = *(undefined8 *)(param_1 + 0x5c);
  uVar35 = *(undefined8 *)(param_1 + 0x54);
  *(ulong *)(param_1 + 0x4c) =
       CONCAT44((float)((ulong)local_50[1] >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_1 + 0x4c) >> 0x20),
                (float)local_50[1] + (float)*(undefined8 *)(param_1 + 0x4c));
  *(ulong *)(param_1 + 0x44) =
       CONCAT44((float)((ulong)local_50[0] >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_1 + 0x44) >> 0x20),
                (float)local_50[0] + (float)*(undefined8 *)(param_1 + 0x44));
  *(float *)(param_1 + 0x5c) = (float)uStack_38 + (float)uVar45;
  *(float *)(param_1 + 0x60) = uStack_38._4_4_ + (float)((ulong)uVar45 >> 0x20);
  *(float *)(param_1 + 0x54) = (float)local_40 + (float)uVar35;
  *(float *)(param_1 + 0x58) = local_40._4_4_ + (float)((ulong)uVar35 >> 0x20);
  *(ulong *)(param_1 + 0x6c) =
       CONCAT44(uStack_28._4_4_ + (float)((ulong)*(undefined8 *)(param_1 + 0x6c) >> 0x20),
                (float)uStack_28 + (float)*(undefined8 *)(param_1 + 0x6c));
  *(ulong *)(param_1 + 100) =
       CONCAT44(local_30._4_4_ + (float)((ulong)*(undefined8 *)(param_1 + 100) >> 0x20),
                (float)local_30 + (float)*(undefined8 *)(param_1 + 100));
  *(ulong *)(param_1 + 0x7c) =
       CONCAT44((float)((ulong)uStack_18 >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_1 + 0x7c) >> 0x20),
                (float)uStack_18 + (float)*(undefined8 *)(param_1 + 0x7c));
  *(ulong *)(param_1 + 0x74) =
       CONCAT44((float)((ulong)local_20 >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_1 + 0x74) >> 0x20),
                (float)local_20 + (float)*(undefined8 *)(param_1 + 0x74));
  uVar45 = *(undefined8 *)(param_1 + 0x1dc);
  uVar35 = *(undefined8 *)(param_1 + 0x1d4);
  uVar4 = *(undefined8 *)(param_1 + 0x1ec);
  uVar18 = *(undefined8 *)(param_1 + 0x1e4);
  *(ulong *)(param_1 + 0x8c) =
       CONCAT44((float)((ulong)uStack_8 >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_1 + 0x8c) >> 0x20),
                (float)uStack_8 + (float)*(undefined8 *)(param_1 + 0x8c));
  *(ulong *)(param_1 + 0x84) =
       CONCAT44((float)((ulong)local_10 >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_1 + 0x84) >> 0x20),
                (float)local_10 + (float)*(undefined8 *)(param_1 + 0x84));
  *(float *)(param_1 + 0x1dc) = (float)uVar45 + 0.0;
  *(float *)(param_1 + 0x1e0) = (float)((ulong)uVar45 >> 0x20) + 0.0;
  *(float *)(param_1 + 0x1d4) = (float)uVar35 + 0.0;
  *(float *)(param_1 + 0x1d8) = (float)((ulong)uVar35 >> 0x20) + 0.0;
  *(float *)(param_1 + 0x1ec) = (float)uVar4 + 0.0;
  *(float *)(param_1 + 0x1f0) = (float)((ulong)uVar4 >> 0x20) + 0.0;
  *(float *)(param_1 + 0x1e4) = (float)uVar18 + 0.0;
  *(float *)(param_1 + 0x1e8) = (float)((ulong)uVar18 >> 0x20) + 0.0;
  *(ulong *)(param_1 + 0x1fc) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x1fc) >> 0x20) + 0.0,
                (float)*(undefined8 *)(param_1 + 0x1fc) + 0.0);
  *(ulong *)(param_1 + 500) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 500) >> 0x20) + 0.0,
                (float)*(undefined8 *)(param_1 + 500) + 0.0);
  *(ulong *)(param_1 + 0x20c) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x20c) >> 0x20) + 0.0,
                (float)*(undefined8 *)(param_1 + 0x20c) + 0.0);
  *(ulong *)(param_1 + 0x204) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x204) >> 0x20) + 0.0,
                (float)*(undefined8 *)(param_1 + 0x204) + 0.0);
  *(ulong *)(param_1 + 0x21c) =
       CONCAT44(*(float *)(param_1 + 0x220) + 0.0,*(float *)(param_1 + 0x21c) + 0.0);
  *(ulong *)(param_1 + 0x214) =
       CONCAT44(*(float *)(param_1 + 0x218) + 0.0,*(float *)(param_1 + 0x214) + 0.0);
  return;
}

