
void FUN_0067cfe0(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  undefined8 uVar14;
  float fVar15;
  
  puVar2 = PTR_DAT_04bd4c80;
  uVar1 = *param_1;
  uVar6 = NEON_scvtf(CONCAT44(uVar1 >> 0x12,uVar1 >> 0x12) & 0x3ff000003ff,4);
  fVar4 = (float)uVar6 * 0.0009775171;
  fVar7 = (float)((ulong)uVar6 >> 0x20) * 0.0009775171;
  fVar9 = (float)*(undefined8 *)(PTR_DAT_04bd4c80 + 0x60);
  fVar4 = fVar9 - fVar4 * fVar4;
  fVar10 = (float)((ulong)*(undefined8 *)(PTR_DAT_04bd4c80 + 0x60) >> 0x20);
  fVar8 = fVar10 - fVar7 * fVar7;
  fVar7 = (float)FUN_004372f0((float)(uVar1 & 0x3ffff));
  iVar3 = (int)fVar7;
  iVar13 = (uVar1 & 0x3ffff) - iVar3 * iVar3;
  uVar6 = NEON_scvtf(CONCAT44(iVar3,iVar3),4);
  fVar7 = (float)uVar6;
  fVar12 = (float)((ulong)uVar6 >> 0x20);
  uVar6 = CONCAT44(fVar12 + fVar12,fVar7 + fVar7);
  uVar14 = NEON_frecpe(uVar6,4);
  iVar3 = -(uint)(fVar7 + fVar7 == 0.0);
  uVar6 = NEON_frecps(uVar6,uVar14,4);
  fVar12 = (float)(((uint)((float)uVar14 * (float)uVar6) ^ 0x7f7fffee) &
                   CONCAT13(~(byte)((uint)iVar3 >> 0x18),
                            CONCAT12(~(byte)((uint)iVar3 >> 0x10),
                                     CONCAT11(~(byte)((uint)iVar3 >> 8),~(byte)iVar3))) ^ 0x7f7fffee
                  );
  uVar6 = NEON_scvtf(CONCAT44(iVar13,iVar13),4);
  iVar13 = -(uint)(fVar12 == 0.0);
  fVar12 = (float)((uint)(*(float *)(puVar2 + 0x370) * fVar12 * (float)uVar6) &
                  CONCAT13(~(byte)((uint)iVar13 >> 0x18),
                           CONCAT12(~(byte)((uint)iVar13 >> 0x10),
                                    CONCAT11(~(byte)((uint)iVar13 >> 8),~(byte)iVar13))));
  fVar15 = DAT_04102f2c * fVar7 * *(float *)(puVar2 + 0x370);
  fVar7 = sinf(fVar15);
  fVar15 = cosf(fVar15);
  fVar5 = sinf(fVar12);
  fVar12 = cosf(fVar12);
  fVar9 = fVar9 - fVar4 * fVar4;
  fVar10 = fVar10 - fVar8 * fVar8;
  uVar6 = NEON_frsqrte(CONCAT44(fVar10,fVar9),4);
  fVar8 = (float)uVar6;
  fVar11 = (float)((ulong)uVar6 >> 0x20);
  uVar6 = NEON_frsqrts(CONCAT44(fVar10,fVar9),CONCAT44(fVar11 * fVar11,fVar8 * fVar8),4);
  iVar13 = -(uint)(fVar9 <= 0.0);
  iVar3 = -(uint)(fVar10 <= 0.0);
  fVar9 = fVar9 * fVar8 * (float)uVar6;
  fVar10 = fVar10 * fVar11 * (float)((ulong)uVar6 >> 0x20);
  fVar8 = (float)CONCAT13((byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                          CONCAT12((byte)((uint)fVar9 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10),
                                   CONCAT11((byte)((uint)fVar9 >> 8) & ~(byte)((uint)iVar13 >> 8),
                                            SUB41(fVar9,0) & ~(byte)iVar13)));
  fVar12 = fVar7 * fVar12 * fVar8;
  fVar7 = fVar7 * fVar5 *
          (float)(CONCAT17((byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar3 >> 0x18),
                           CONCAT16((byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar3 >> 0x10),
                                    CONCAT15((byte)((uint)fVar10 >> 8) & ~(byte)((uint)iVar3 >> 8),
                                             CONCAT14(SUB41(fVar10,0) & ~(byte)iVar3,fVar8)))) >>
                 0x20);
  uVar14 = *(undefined8 *)((long)(PTR_DAT_04bd4b78 + ((ulong)(uVar1 >> 0x18) & 0xf0)) + 8);
  uVar6 = *(undefined8 *)(PTR_DAT_04bd4b78 + ((ulong)(uVar1 >> 0x18) & 0xf0));
  param_2[1] = CONCAT17((byte)((ulong)uVar14 >> 0x38) & 0x80 ^ (byte)((uint)fVar4 >> 0x18),
                        CONCAT16((char)((uint)fVar4 >> 0x10),
                                 CONCAT15((char)((uint)fVar4 >> 8),
                                          CONCAT14(SUB41(fVar4,0),
                                                   CONCAT13((byte)((ulong)uVar14 >> 0x18) & 0x80 ^
                                                            (byte)((uint)(fVar15 * fVar8) >> 0x18),
                                                            SUB43(fVar15 * fVar8,0))))));
  *param_2 = CONCAT17((byte)((ulong)uVar6 >> 0x38) & 0x80 ^ (byte)((uint)fVar7 >> 0x18),
                      CONCAT16((char)((uint)fVar7 >> 0x10),
                               CONCAT15((char)((uint)fVar7 >> 8),
                                        CONCAT14(SUB41(fVar7,0),
                                                 CONCAT13((byte)((ulong)uVar6 >> 0x18) & 0x80 ^
                                                          (byte)((uint)fVar12 >> 0x18),
                                                          SUB43(fVar12,0))))));
  return;
}

