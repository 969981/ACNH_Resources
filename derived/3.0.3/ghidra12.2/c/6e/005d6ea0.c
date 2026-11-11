
void FUN_005d6ea0(long param_1,long param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  long lVar24;
  int iVar25;
  ushort *puVar26;
  float *pfVar27;
  long lVar28;
  long lVar29;
  undefined8 uVar30;
  byte bVar31;
  byte bVar33;
  byte bVar34;
  int iVar32;
  byte bVar35;
  byte bVar36;
  byte bVar38;
  byte bVar39;
  int iVar37;
  byte bVar40;
  uint uVar41;
  uint uVar44;
  uint uVar45;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  uint uVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined8 uVar57;
  undefined8 uVar58;
  
  iVar25 = *(int *)(param_2 + 0x30);
  lVar24 = *(long *)(param_1 + 0x20);
  if (0 < iVar25) {
    uVar30 = *param_3;
    puVar26 = (ushort *)(*(long *)(param_2 + 0x28) + 0x3e);
    do {
      uVar4 = puVar26[-3];
      uVar5 = puVar26[-2];
      pfVar27 = (float *)(lVar24 + (ulong)uVar4 * 0x10);
      uVar6 = puVar26[-6];
      pfVar10 = (float *)(lVar24 + (ulong)puVar26[-7] * 0x10);
      uVar7 = puVar26[-1];
      uVar8 = puVar26[-5];
      pfVar11 = (float *)(lVar24 + (ulong)uVar5 * 0x10);
      uVar3 = *puVar26;
      pfVar12 = (float *)(lVar24 + (ulong)uVar6 * 0x10);
      uVar9 = puVar26[-4];
      auVar42._0_4_ = (*pfVar27 - *pfVar10) * (*pfVar27 - *pfVar10);
      auVar42._4_4_ = (pfVar27[1] - pfVar10[1]) * (pfVar27[1] - pfVar10[1]);
      auVar42._8_4_ = (pfVar27[2] - pfVar10[2]) * (pfVar27[2] - pfVar10[2]);
      auVar42._12_4_ = (pfVar27[3] - pfVar10[3]) * (pfVar27[3] - pfVar10[3]);
      pfVar27 = (float *)(lVar24 + (ulong)uVar8 * 0x10);
      pfVar10 = (float *)(lVar24 + (ulong)uVar7 * 0x10);
      puVar13 = (undefined8 *)(lVar24 + (ulong)uVar9 * 0x10);
      uVar58 = puVar13[1];
      uVar57 = *puVar13;
      auVar47._0_4_ = (*pfVar11 - *pfVar12) * (*pfVar11 - *pfVar12);
      auVar47._4_4_ = (pfVar11[1] - pfVar12[1]) * (pfVar11[1] - pfVar12[1]);
      auVar47._8_4_ = (pfVar11[2] - pfVar12[2]) * (pfVar11[2] - pfVar12[2]);
      auVar47._12_4_ = (pfVar11[3] - pfVar12[3]) * (pfVar11[3] - pfVar12[3]);
      pfVar11 = (float *)(lVar24 + (ulong)uVar3 * 0x10);
      auVar49._0_4_ = (*pfVar10 - *pfVar27) * (*pfVar10 - *pfVar27);
      auVar49._4_4_ = (pfVar10[1] - pfVar27[1]) * (pfVar10[1] - pfVar27[1]);
      auVar49._8_4_ = (pfVar10[2] - pfVar27[2]) * (pfVar10[2] - pfVar27[2]);
      auVar49._12_4_ = (pfVar10[3] - pfVar27[3]) * (pfVar10[3] - pfVar27[3]);
      fVar51 = *pfVar11 - (float)uVar57;
      fVar54 = pfVar11[1] - (float)((ulong)uVar57 >> 0x20);
      fVar55 = pfVar11[2] - (float)uVar58;
      fVar56 = pfVar11[3] - (float)((ulong)uVar58 >> 0x20);
      auVar52._0_4_ = fVar51 * fVar51;
      auVar52._4_4_ = fVar54 * fVar54;
      auVar52._8_4_ = fVar55 * fVar55;
      auVar52._12_4_ = fVar56 * fVar56;
      auVar43 = NEON_ext(auVar42,auVar42,8,1);
      auVar48 = NEON_ext(auVar47,auVar47,8,1);
      auVar50 = NEON_ext(auVar49,auVar49,8,1);
      auVar53 = NEON_ext(auVar52,auVar52,8,1);
      fVar51 = (float)uVar30;
      fVar54 = (float)((ulong)uVar30 >> 0x20);
      uVar41 = -(uint)(*(float *)(puVar26 + -0x1f) * *(float *)(puVar26 + -0x1f) * fVar51 <
                      auVar43._0_4_ + auVar42._0_4_ + auVar42._4_4_);
      uVar44 = -(uint)(*(float *)(puVar26 + -0x1d) * *(float *)(puVar26 + -0x1d) * fVar54 <
                      auVar48._0_4_ + auVar47._0_4_ + auVar47._4_4_);
      uVar45 = -(uint)(*(float *)(puVar26 + -0x1b) * *(float *)(puVar26 + -0x1b) * fVar51 <
                      auVar50._0_4_ + auVar49._0_4_ + auVar49._4_4_);
      uVar46 = -(uint)(*(float *)(puVar26 + -0x19) * *(float *)(puVar26 + -0x19) * fVar54 <
                      auVar53._0_4_ + auVar52._0_4_ + auVar52._4_4_);
      uVar1 = uVar46 & 8;
      uVar2 = uVar45 & 4;
      if ((((uVar41 != 0 || uVar44 != 0) || uVar45 != 0) || uVar46 != 0) &&
          ((((uVar44 & 2) != 0 || (uVar41 & 1) != 0) || uVar1 != 0) || uVar2 != 0)) {
        if ((uVar41 & 1) != 0) {
          puVar13 = (undefined8 *)(param_4 + (ulong)puVar26[-7] * 0x10);
          puVar13[1] = 0;
          *puVar13 = 0;
          puVar13 = (undefined8 *)(param_4 + (ulong)uVar4 * 0x10);
          puVar13[1] = 0;
          *puVar13 = 0;
        }
        if ((uVar44 & 2) != 0) {
          puVar13 = (undefined8 *)(param_4 + (ulong)uVar6 * 0x10);
          puVar13[1] = 0;
          *puVar13 = 0;
          puVar13 = (undefined8 *)(param_4 + (ulong)uVar5 * 0x10);
          puVar13[1] = 0;
          *puVar13 = 0;
        }
        if (uVar2 != 0) {
          puVar13 = (undefined8 *)(param_4 + (ulong)uVar8 * 0x10);
          puVar13[1] = 0;
          *puVar13 = 0;
          puVar13 = (undefined8 *)(param_4 + (ulong)uVar7 * 0x10);
          puVar13[1] = 0;
          *puVar13 = 0;
        }
        if (uVar1 != 0) {
          puVar13 = (undefined8 *)(param_4 + (ulong)uVar9 * 0x10);
          puVar13[1] = 0;
          *puVar13 = 0;
          puVar13 = (undefined8 *)(param_4 + (ulong)uVar3 * 0x10);
          puVar13[1] = 0;
          *puVar13 = 0;
        }
      }
      iVar25 = iVar25 + -1;
      puVar26 = puVar26 + 0x20;
    } while (iVar25 != 0);
  }
  iVar25 = *(int *)(param_2 + 0x40);
  if (0 < iVar25) {
    uVar30 = *param_3;
    pfVar27 = *(float **)(param_2 + 0x38);
    do {
      lVar29 = (ulong)*(ushort *)((long)pfVar27 + 0xe) * 0x10;
      lVar28 = (ulong)*(ushort *)(pfVar27 + 3) * 0x10;
      pfVar10 = (float *)(lVar24 + lVar29);
      pfVar11 = (float *)(lVar24 + lVar28);
      fVar51 = *pfVar27 * *pfVar27;
      fVar54 = (*pfVar10 - *pfVar11) * (*pfVar10 - *pfVar11);
      fVar55 = (pfVar10[1] - pfVar11[1]) * (pfVar10[1] - pfVar11[1]);
      fVar56 = (pfVar10[2] - pfVar11[2]) * (pfVar10[2] - pfVar11[2]);
      iVar32 = -(uint)((float)uVar30 * fVar51 < fVar54 + fVar55 + fVar56);
      iVar37 = -(uint)((float)((ulong)uVar30 >> 0x20) * fVar51 < fVar54 + fVar55 + fVar56);
      pbVar14 = (byte *)(param_4 + lVar28);
      bVar16 = *pbVar14;
      bVar17 = pbVar14[1];
      bVar18 = pbVar14[2];
      bVar19 = pbVar14[3];
      bVar20 = pbVar14[4];
      bVar21 = pbVar14[5];
      bVar22 = pbVar14[6];
      bVar23 = pbVar14[7];
      bVar31 = (byte)iVar32;
      bVar33 = (byte)((uint)iVar32 >> 8);
      bVar34 = (byte)((uint)iVar32 >> 0x10);
      bVar35 = (byte)((uint)iVar32 >> 0x18);
      bVar36 = (byte)iVar37;
      bVar38 = (byte)((uint)iVar37 >> 8);
      bVar39 = (byte)((uint)iVar37 >> 0x10);
      bVar40 = (byte)((uint)iVar37 >> 0x18);
      pbVar15 = (byte *)(param_4 + lVar28);
      pbVar15[8] = pbVar14[8] & ~bVar31;
      pbVar15[9] = pbVar14[9] & ~bVar33;
      pbVar15[10] = pbVar14[10] & ~bVar34;
      pbVar15[0xb] = pbVar14[0xb] & ~bVar35;
      pbVar15[0xc] = pbVar14[0xc] & ~bVar36;
      pbVar15[0xd] = pbVar14[0xd] & ~bVar38;
      pbVar15[0xe] = pbVar14[0xe] & ~bVar39;
      pbVar15[0xf] = pbVar14[0xf] & ~bVar40;
      *pbVar15 = bVar16 & ~bVar31;
      pbVar15[1] = bVar17 & ~bVar33;
      pbVar15[2] = bVar18 & ~bVar34;
      pbVar15[3] = bVar19 & ~bVar35;
      pbVar15[4] = bVar20 & ~bVar36;
      pbVar15[5] = bVar21 & ~bVar38;
      pbVar15[6] = bVar22 & ~bVar39;
      pbVar15[7] = bVar23 & ~bVar40;
      pbVar14 = (byte *)(param_4 + lVar29);
      bVar16 = *pbVar14;
      iVar25 = iVar25 + -1;
      ((undefined8 *)(param_4 + lVar29))[1] =
           CONCAT17(pbVar14[0xf] & ~bVar40,
                    CONCAT16(pbVar14[0xe] & ~bVar39,
                             CONCAT15(pbVar14[0xd] & ~bVar38,
                                      CONCAT14(pbVar14[0xc] & ~bVar36,
                                               CONCAT13(pbVar14[0xb] & ~bVar35,
                                                        CONCAT12(pbVar14[10] & ~bVar34,
                                                                 CONCAT11(pbVar14[9] & ~bVar33,
                                                                          pbVar14[8] & ~bVar31))))))
                   );
      *(undefined8 *)(param_4 + lVar29) =
           CONCAT17(pbVar14[7] & ~bVar40,
                    CONCAT16(pbVar14[6] & ~bVar39,
                             CONCAT15(pbVar14[5] & ~bVar38,
                                      CONCAT14(pbVar14[4] & ~bVar36,
                                               CONCAT13(pbVar14[3] & ~bVar35,
                                                        CONCAT12(pbVar14[2] & ~bVar34,
                                                                 CONCAT11(pbVar14[1] & ~bVar33,
                                                                          bVar16 & ~bVar31)))))));
      pfVar27 = pfVar27 + 4;
    } while (iVar25 != 0);
  }
  return;
}

