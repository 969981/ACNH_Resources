
void FUN_00336f00(float param_1,undefined8 param_2,long param_3,int *param_4,long param_5)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined2 uVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  undefined8 *puVar14;
  float fVar15;
  float fVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined4 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  undefined8 local_90 [2];
  undefined8 local_80 [2];
  
  iVar6 = *(int *)(param_3 + 0x70);
  if (2 < iVar6) {
    iVar8 = (iVar6 + -1) * (int)(float)param_4[4];
    uVar1 = iVar8 + iVar6;
    if (0 < (int)uVar1) {
      uVar12 = 0;
      iVar13 = 0;
      puVar14 = (undefined8 *)(param_5 + 0x10);
      lVar10 = *(long *)(*(long *)(param_3 + 0x58) + 0x30);
      fVar36 = 1.0 / (float)((int)(float)param_4[4] + 1);
      do {
        iVar11 = (int)uVar12;
        fVar16 = fVar36 * (float)iVar11;
        iVar5 = (int)fVar16;
        if (iVar13 < iVar5) {
          lVar10 = *(long *)(lVar10 + 0x30);
          iVar13 = iVar5;
        }
        FUN_0033732c(SUB41(fVar16 - (float)iVar5,0),local_80,local_90,lVar10,iVar5,iVar6);
        uVar12 = uVar12 + 1;
        puVar14[-2] = local_80[0];
        *(int *)(puVar14 + -1) = (int)local_80[1];
        uVar26 = *(undefined4 *)(lVar10 + 0xc);
        *(float *)((long)puVar14 + 0xc) = (1.0 / (param_1 + -1.0 + (float)iVar8)) * (float)iVar11;
        *puVar14 = local_90[0];
        *(int *)(puVar14 + 1) = (int)local_90[1];
        *(undefined4 *)((long)puVar14 + -4) = uVar26;
        puVar14 = puVar14 + 6;
      } while (uVar1 != uVar12);
      *(uint *)(param_3 + 0x78) = uVar1 * 2;
      if (*param_4 == 0) {
        return;
      }
      if ((int)uVar1 < 1) {
        return;
      }
      uVar12 = 0;
      iVar6 = 0;
      puVar7 = (undefined4 *)(param_5 + 0x28);
      lVar10 = *(long *)(*(long *)(param_3 + 0x58) + 0x30);
      do {
        fVar16 = fVar36 * (float)(int)uVar12;
        iVar8 = (int)fVar16;
        if (iVar6 < iVar8) {
          lVar10 = *(long *)(lVar10 + 0x30);
          iVar6 = iVar8;
        }
        uVar12 = uVar12 + 1;
        lVar9 = *(long *)(lVar10 + 0x30);
        fVar16 = fVar16 - (float)iVar8;
        fVar29 = (float)*(undefined8 *)(lVar10 + 0x20);
        fVar30 = (float)((ulong)*(undefined8 *)(lVar10 + 0x20) >> 0x20);
        fVar31 = (float)*(undefined8 *)(lVar10 + 0x28);
        fVar32 = (float)((ulong)*(undefined8 *)(lVar10 + 0x28) >> 0x20);
        fVar29 = fVar29 + (*(float *)(lVar9 + 0x20) - fVar29) * fVar16;
        fVar30 = fVar30 + (*(float *)(lVar9 + 0x24) - fVar30) * fVar16;
        fVar31 = fVar31 + (*(float *)(lVar9 + 0x28) - fVar31) * fVar16;
        fVar32 = fVar32 + (*(float *)(lVar9 + 0x2c) - fVar32) * fVar16;
        fVar16 = fVar29 * fVar29;
        fVar4 = fVar30 * fVar30;
        uVar17 = (undefined1)((uint)fVar4 >> 8);
        uVar18 = (undefined1)((uint)fVar4 >> 0x10);
        uVar19 = (undefined1)((uint)fVar4 >> 0x18);
        fVar15 = fVar31 * fVar31;
        uVar20 = (undefined1)((uint)fVar15 >> 8);
        uVar21 = (undefined1)((uint)fVar15 >> 0x10);
        uVar22 = (undefined1)((uint)fVar15 >> 0x18);
        fVar32 = fVar32 * fVar32;
        uVar23 = (undefined1)((uint)fVar32 >> 8);
        uVar24 = (undefined1)((uint)fVar32 >> 0x10);
        uVar25 = (undefined1)((uint)fVar32 >> 0x18);
        auVar27[4] = SUB41(fVar4,0);
        auVar27._0_4_ = fVar16;
        auVar27[5] = uVar17;
        auVar27[6] = uVar18;
        auVar27[7] = uVar19;
        auVar27[8] = SUB41(fVar15,0);
        auVar27[9] = uVar20;
        auVar27[10] = uVar21;
        auVar27[0xb] = uVar22;
        auVar27[0xc] = SUB41(fVar32,0);
        auVar27[0xd] = uVar23;
        auVar27[0xe] = uVar24;
        auVar27[0xf] = uVar25;
        auVar34[4] = SUB41(fVar4,0);
        auVar34._0_4_ = fVar16;
        auVar34[5] = uVar17;
        auVar34[6] = uVar18;
        auVar34[7] = uVar19;
        auVar34[8] = SUB41(fVar15,0);
        auVar34[9] = uVar20;
        auVar34[10] = uVar21;
        auVar34[0xb] = uVar22;
        auVar34[0xc] = SUB41(fVar32,0);
        auVar34[0xd] = uVar23;
        auVar34[0xe] = uVar24;
        auVar34[0xf] = uVar25;
        auVar27 = NEON_ext(auVar27,auVar34,8,1);
        fVar16 = auVar27._0_4_ + fVar16;
        fVar4 = auVar27._4_4_ + fVar4;
        fVar15 = fVar16 + fVar4;
        fVar16 = fVar16 + fVar4;
        uVar17 = SUB41(fVar16,0);
        uVar18 = (undefined1)((uint)fVar16 >> 8);
        uVar19 = (undefined1)((uint)fVar16 >> 0x10);
        uVar20 = (undefined1)((uint)fVar16 >> 0x18);
        auVar2[4] = uVar17;
        auVar2._0_4_ = fVar15;
        auVar2[5] = uVar18;
        auVar2[6] = uVar19;
        auVar2[7] = uVar20;
        auVar2[8] = SUB41(fVar15,0);
        auVar2[9] = (char)((uint)fVar15 >> 8);
        auVar2[10] = (char)((uint)fVar15 >> 0x10);
        auVar2[0xb] = (char)((uint)fVar15 >> 0x18);
        auVar2[0xc] = uVar17;
        auVar2[0xd] = uVar18;
        auVar2[0xe] = uVar19;
        auVar2[0xf] = uVar20;
        auVar27 = NEON_frsqrte(auVar2,4);
        auVar33._0_4_ = auVar27._0_4_ * fVar15;
        auVar33._4_4_ = auVar27._4_4_ * fVar16;
        auVar33._8_4_ = auVar27._8_4_ * fVar15;
        uVar3 = (undefined2)(CONCAT15(uVar18,CONCAT14(uVar17,fVar15)) >> 0x20);
        auVar33._12_4_ = auVar27._12_4_ * (float)CONCAT13(uVar20,CONCAT12(uVar19,uVar3));
        auVar34 = NEON_frsqrts(auVar27,auVar33,4);
        auVar28._0_4_ = auVar27._0_4_ * auVar34._0_4_;
        auVar28._4_4_ = auVar27._4_4_ * auVar34._4_4_;
        auVar28._8_4_ = auVar27._8_4_ * auVar34._8_4_;
        auVar28._12_4_ = auVar27._12_4_ * auVar34._12_4_;
        auVar35._0_4_ = fVar15 * auVar28._0_4_;
        auVar35._4_4_ = fVar16 * auVar28._4_4_;
        auVar35._8_4_ = fVar15 * auVar28._8_4_;
        auVar35._12_4_ = (float)CONCAT13(uVar20,CONCAT12(uVar19,uVar3)) * auVar28._12_4_;
        iVar8 = -(uint)(fVar15 == 0.0);
        iVar13 = -(uint)(fVar16 == 0.0);
        iVar5 = -(uint)(fVar15 == 0.0);
        auVar27 = NEON_frsqrts(auVar28,auVar35,4);
        fVar29 = fVar29 * auVar28._0_4_ * auVar27._0_4_;
        fVar30 = fVar30 * auVar28._4_4_ * auVar27._4_4_;
        fVar31 = fVar31 * auVar28._8_4_ * auVar27._8_4_;
        *(ulong *)(puVar7 + -2) =
             CONCAT17((byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                      CONCAT16((byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10),
                               CONCAT15((byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar13 >> 8),
                                        CONCAT14(SUB41(fVar30,0) & ~(byte)iVar13,
                                                 CONCAT13((byte)((uint)fVar29 >> 0x18) &
                                                          ~(byte)((uint)iVar8 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar29 >> 0x10) &
                                                                   ~(byte)((uint)iVar8 >> 0x10),
                                                                   CONCAT11((byte)((uint)fVar29 >> 8
                                                                                  ) & ~(byte)((uint)
                                                  iVar8 >> 8),SUB41(fVar29,0) & ~(byte)iVar8)))))));
        *puVar7 = CONCAT13((byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18),
                           CONCAT12((byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10),
                                    CONCAT11((byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar5 >> 8),
                                             SUB41(fVar31,0) & ~(byte)iVar5)));
        puVar7 = puVar7 + 0xc;
      } while (uVar1 != uVar12);
      return;
    }
  }
  *(undefined4 *)(param_3 + 0x78) = 0;
  return;
}

