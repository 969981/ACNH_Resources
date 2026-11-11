
void FUN_005da4e0(long param_1,float *param_2)

{
  undefined1 auVar1 [16];
  float *pfVar2;
  ulong uVar3;
  undefined8 *puVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar17;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  int iVar18;
  int iVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  
  pfVar2 = (float *)FUN_0053b100(*(undefined8 *)(param_1 + 0x38));
  uVar3 = (ulong)*(ushort *)(param_1 + 0x20);
  if (uVar3 != 0) {
    fVar5 = *pfVar2;
    puVar4 = *(undefined8 **)(param_1 + 0x28);
    do {
      fVar12 = (float)*(undefined8 *)(param_2 + 2);
      fVar11 = (float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20);
      fVar8 = (float)*(undefined8 *)param_2;
      fVar10 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
      fVar13 = fVar8 * fVar8 + fVar10 * fVar10 + fVar12 * fVar12;
      fVar17 = fVar8 * fVar8 + fVar10 * fVar10 + fVar12 * fVar12;
      uVar15 = CONCAT44(fVar17,fVar13);
      uVar6 = -(uint)(0.0 < fVar13);
      uVar7 = -(uint)(0.0 < fVar17);
      fVar14 = 0.0;
      fVar9 = 0.0;
      fVar20 = 0.0;
      fVar22 = 0.0;
      if (uVar6 != 0 || uVar7 != 0) {
        uVar21 = NEON_frsqrte(uVar15,4);
        fVar20 = (float)uVar21;
        fVar22 = (float)((ulong)uVar21 >> 0x20);
        iVar18 = -(uint)(fVar13 <= 0.0);
        iVar19 = -(uint)(fVar17 <= 0.0);
        uVar21 = NEON_frsqrts(uVar15,CONCAT44(fVar22 * fVar22,fVar20 * fVar20),4);
        fVar20 = fVar20 * (float)uVar21;
        fVar22 = fVar22 * (float)((ulong)uVar21 >> 0x20);
        uVar15 = NEON_frsqrts(uVar15,CONCAT44(fVar22 * fVar22,fVar20 * fVar20),4);
        fVar20 = (float)uVar15 * fVar20;
        fVar22 = (float)((ulong)uVar15 >> 0x20) * fVar22;
        fVar14 = (float)CONCAT13((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18),
                                 CONCAT12((byte)((uint)fVar20 >> 0x10) &
                                          ~(byte)((uint)iVar18 >> 0x10),
                                          CONCAT11((byte)((uint)fVar20 >> 8) &
                                                   ~(byte)((uint)iVar18 >> 8),
                                                   SUB41(fVar20,0) & ~(byte)iVar18)));
        fVar9 = (float)(CONCAT17((byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                                 CONCAT16((byte)((uint)fVar22 >> 0x10) &
                                          ~(byte)((uint)iVar19 >> 0x10),
                                          CONCAT15((byte)((uint)fVar22 >> 8) &
                                                   ~(byte)((uint)iVar19 >> 8),
                                                   CONCAT14(SUB41(fVar22,0) & ~(byte)iVar19,fVar14))
                                         )) >> 0x20);
        fVar20 = (float)((uint)*param_2 ^ ((uint)*param_2 ^ (uint)(fVar8 * fVar14)) & uVar6);
        fVar22 = (float)((uint)param_2[1] ^ ((uint)param_2[1] ^ (uint)(fVar10 * fVar9)) & uVar7);
        fVar14 = (float)((uint)param_2[2] ^ ((uint)param_2[2] ^ (uint)(fVar12 * fVar14)) & uVar6);
        fVar11 = (float)((uint)fVar11 ^ ((uint)fVar11 ^ (uint)(fVar11 * fVar9)) & uVar7);
        fVar8 = fVar20 * (float)*puVar4;
        fVar9 = fVar22 * (float)((ulong)*puVar4 >> 0x20);
        fVar10 = fVar14 * (float)puVar4[1];
        fVar12 = fVar11 * (float)((ulong)puVar4[1] >> 0x20);
        auVar16._4_4_ = fVar9;
        auVar16._0_4_ = fVar8;
        auVar16._8_4_ = fVar10;
        auVar16._12_4_ = fVar12;
        auVar1._4_4_ = fVar9;
        auVar1._0_4_ = fVar8;
        auVar1._8_4_ = fVar10;
        auVar1._12_4_ = fVar12;
        auVar16 = NEON_ext(auVar16,auVar1,8,1);
        fVar9 = -(fVar5 + fVar8 + fVar9 + auVar16._0_4_ + fVar11);
      }
      param_2[2] = fVar14;
      param_2[3] = fVar9;
      *param_2 = fVar20;
      param_2[1] = fVar22;
      puVar4 = puVar4 + 2;
      uVar3 = uVar3 - 1;
      param_2 = param_2 + 4;
    } while (uVar3 != 0);
  }
  return;
}

