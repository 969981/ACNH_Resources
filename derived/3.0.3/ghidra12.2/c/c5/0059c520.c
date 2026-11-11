
void FUN_0059c520(long param_1,long param_2,float *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined1 auVar4 [16];
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  long lVar8;
  int iVar9;
  float *pfVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  int iVar42;
  float fVar43;
  float fVar44;
  int iVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined8 uVar51;
  float fVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  
  iVar1 = *(int *)(param_1 + 0x40);
  lVar8 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d90);
  if (lVar8 != 0) {
    FUN_00443a00(lVar8,"TtSingle Compressible Links");
  }
  if (iVar1 != 0) {
    iVar9 = 0;
    do {
      pfVar10 = (float *)(*(long *)(param_1 + 0x38) + (long)iVar9 * 0x14);
      iVar9 = iVar9 + 1;
      lVar11 = (ulong)*(ushort *)((long)pfVar10 + 0x12) * 0x10;
      fVar13 = pfVar10[2] * *param_3;
      fVar3 = *pfVar10;
      uVar14 = ((undefined8 *)(param_2 + lVar11))[1];
      uVar51 = *(undefined8 *)(param_2 + lVar11);
      fVar12 = pfVar10[3] * *param_3;
      puVar2 = (undefined8 *)(param_2 + (ulong)*(ushort *)(pfVar10 + 4) * 0x10);
      uVar38 = puVar2[1];
      uVar35 = *puVar2;
      fVar34 = (float)uVar35;
      fVar31 = (float)uVar51 - fVar34;
      fVar36 = (float)((ulong)uVar35 >> 0x20);
      fVar32 = (float)((ulong)uVar51 >> 0x20) - fVar36;
      fVar37 = (float)uVar38;
      fVar33 = (float)uVar14 - fVar37;
      fVar39 = (float)((ulong)uVar38 >> 0x20);
      fVar40 = fVar31 * fVar31 + fVar32 * fVar32 + fVar33 * fVar33;
      fVar41 = fVar31 * fVar31 + fVar32 * fVar32 + fVar33 * fVar33;
      uVar51 = NEON_frsqrte(CONCAT44(fVar41,fVar40),4);
      fVar50 = (float)uVar51;
      fVar52 = (float)((ulong)uVar51 >> 0x20);
      uVar51 = NEON_frsqrts(CONCAT44(fVar41,fVar40),CONCAT44(fVar52 * fVar52,fVar50 * fVar50),4);
      iVar42 = -(uint)(fVar40 <= 0.0);
      iVar45 = -(uint)(fVar41 <= 0.0);
      fVar50 = fVar50 * (float)uVar51;
      fVar52 = fVar52 * (float)((ulong)uVar51 >> 0x20);
      fVar43 = (float)CONCAT13((byte)((uint)fVar50 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18),
                               CONCAT12((byte)((uint)fVar50 >> 0x10) & ~(byte)((uint)iVar42 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar50 >> 8) &
                                                  ~(byte)((uint)iVar42 >> 8),
                                                  SUB41(fVar50,0) & ~(byte)iVar42)));
      fVar40 = fVar40 * fVar43;
      fVar46 = (float)(CONCAT17((byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18),
                                CONCAT16((byte)((uint)fVar52 >> 0x10) &
                                         ~(byte)((uint)iVar45 >> 0x10),
                                         CONCAT15((byte)((uint)fVar52 >> 8) &
                                                  ~(byte)((uint)iVar45 >> 8),
                                                  CONCAT14(SUB41(fVar52,0) & ~(byte)iVar45,fVar43)))
                               ) >> 0x20);
      fVar41 = fVar41 * fVar46;
      fVar50 = pfVar10[1];
      fVar52 = ((float)((ulong)uVar14 >> 0x20) - fVar39) * fVar46;
      fVar44 = fVar40 - fVar3;
      fVar47 = fVar41 - fVar3;
      fVar48 = fVar40 - fVar3;
      fVar49 = fVar41 - fVar3;
      iVar42 = -(uint)(fVar3 <= fVar40);
      iVar45 = -(uint)(fVar3 <= fVar41);
      iVar5 = -(uint)(fVar3 <= fVar40);
      iVar6 = -(uint)(fVar3 <= fVar41);
      bVar15 = SUB41(fVar44,0) & (byte)iVar42;
      bVar16 = (byte)((uint)fVar44 >> 8) & (byte)((uint)iVar42 >> 8);
      bVar17 = (byte)((uint)fVar44 >> 0x10) & (byte)((uint)iVar42 >> 0x10);
      bVar18 = (byte)((uint)fVar44 >> 0x18) & (byte)((uint)iVar42 >> 0x18);
      bVar19 = SUB41(fVar47,0) & (byte)iVar45;
      bVar20 = (byte)((uint)fVar47 >> 8) & (byte)((uint)iVar45 >> 8);
      bVar21 = (byte)((uint)fVar47 >> 0x10) & (byte)((uint)iVar45 >> 0x10);
      bVar22 = (byte)((uint)fVar47 >> 0x18) & (byte)((uint)iVar45 >> 0x18);
      bVar23 = SUB41(fVar48,0) & (byte)iVar5;
      bVar24 = (byte)((uint)fVar48 >> 8) & (byte)((uint)iVar5 >> 8);
      bVar25 = (byte)((uint)fVar48 >> 0x10) & (byte)((uint)iVar5 >> 0x10);
      bVar26 = (byte)((uint)fVar48 >> 0x18) & (byte)((uint)iVar5 >> 0x18);
      bVar27 = SUB41(fVar49,0) & (byte)iVar6;
      bVar28 = (byte)((uint)fVar49 >> 8) & (byte)((uint)iVar6 >> 8);
      bVar29 = (byte)((uint)fVar49 >> 0x10) & (byte)((uint)iVar6 >> 0x10);
      bVar30 = (byte)((uint)fVar49 >> 0x18) & (byte)((uint)iVar6 >> 0x18);
      auVar53._0_4_ = -(uint)(fVar40 <= fVar50);
      auVar53._4_4_ = -(uint)(fVar41 <= fVar50);
      auVar53._8_4_ = -(uint)(fVar40 <= fVar50);
      auVar53._12_4_ = -(uint)(fVar41 <= fVar50);
      auVar4[1] = bVar16;
      auVar4[0] = bVar15;
      auVar4[2] = bVar17;
      auVar4[3] = bVar18;
      auVar4[4] = bVar19;
      auVar4[5] = bVar20;
      auVar4[6] = bVar21;
      auVar4[7] = bVar22;
      auVar4[8] = bVar23;
      auVar4[9] = bVar24;
      auVar4[10] = bVar25;
      auVar4[0xb] = bVar26;
      auVar4[0xc] = bVar27;
      auVar4[0xd] = bVar28;
      auVar4[0xe] = bVar29;
      auVar4[0xf] = bVar30;
      auVar7._4_4_ = fVar41 - fVar50;
      auVar7._0_4_ = fVar40 - fVar50;
      auVar7._8_4_ = fVar40 - fVar50;
      auVar7._12_4_ = fVar41 - fVar50;
      auVar54[1] = bVar16;
      auVar54[0] = bVar15;
      auVar54[2] = bVar17;
      auVar54[3] = bVar18;
      auVar54[4] = bVar19;
      auVar54[5] = bVar20;
      auVar54[6] = bVar21;
      auVar54[7] = bVar22;
      auVar54[8] = bVar23;
      auVar54[9] = bVar24;
      auVar54[10] = bVar25;
      auVar54[0xb] = bVar26;
      auVar54[0xc] = bVar27;
      auVar54[0xd] = bVar28;
      auVar54[0xe] = bVar29;
      auVar54[0xf] = bVar30;
      auVar54 = auVar54 ^ (auVar4 ^ auVar7) & auVar53;
      puVar2 = (undefined8 *)(param_2 + (ulong)*(ushort *)(pfVar10 + 4) * 0x10);
      puVar2[1] = CONCAT44(fVar39 + fVar52 * auVar54._12_4_ * fVar13,
                           fVar37 + fVar33 * fVar43 * auVar54._8_4_ * fVar13);
      *puVar2 = CONCAT44(fVar36 + fVar32 * fVar46 * auVar54._4_4_ * fVar13,
                         fVar34 + fVar31 * fVar43 * auVar54._0_4_ * fVar13);
      uVar14 = ((undefined8 *)(param_2 + lVar11))[1];
      uVar51 = *(undefined8 *)(param_2 + lVar11);
      ((undefined8 *)(param_2 + lVar11))[1] =
           CONCAT44((float)((ulong)uVar14 >> 0x20) + fVar52 * auVar54._12_4_ * fVar12,
                    (float)uVar14 + fVar33 * fVar43 * auVar54._8_4_ * fVar12);
      *(undefined8 *)(param_2 + lVar11) =
           CONCAT44((float)((ulong)uVar51 >> 0x20) + fVar32 * fVar46 * auVar54._4_4_ * fVar12,
                    (float)uVar51 + fVar31 * fVar43 * auVar54._0_4_ * fVar12);
    } while (iVar1 != iVar9);
  }
  if (lVar8 != 0) {
    FUN_00443a70(lVar8,&DAT_04085310);
  }
  return;
}

