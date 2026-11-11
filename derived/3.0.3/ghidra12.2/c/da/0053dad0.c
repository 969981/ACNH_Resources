
void FUN_0053dad0(undefined4 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  int iVar12;
  undefined8 uVar13;
  int iVar14;
  
  *param_2 = &PTR_LAB_048c9340;
  param_2[1] = 0xffffffff;
  param_2[2] = 1;
  *(undefined4 *)(param_2 + 3) = 2;
  uVar4 = param_3[1];
  uVar13 = *param_3;
  param_2[5] = uVar4;
  param_2[4] = uVar13;
  uVar6 = param_4[1];
  uVar5 = *param_4;
  fVar1 = (float)uVar5 - (float)uVar13;
  fVar2 = (float)((ulong)uVar5 >> 0x20) - (float)((ulong)uVar13 >> 0x20);
  fVar3 = (float)uVar6 - (float)uVar4;
  fVar7 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
  fVar8 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
  uVar13 = CONCAT44(fVar8,fVar7);
  uVar10 = NEON_frsqrte(uVar13,4);
  fVar9 = (float)uVar10;
  fVar11 = (float)((ulong)uVar10 >> 0x20);
  uVar10 = NEON_frsqrts(uVar13,CONCAT44(fVar11 * fVar11,fVar9 * fVar9),4);
  fVar9 = fVar9 * (float)uVar10;
  fVar11 = fVar11 * (float)((ulong)uVar10 >> 0x20);
  uVar13 = NEON_frsqrts(uVar13,CONCAT44(fVar11 * fVar11,fVar9 * fVar9),4);
  fVar9 = (float)uVar13 * fVar9;
  fVar11 = (float)((ulong)uVar13 >> 0x20) * fVar11;
  iVar12 = -(uint)(fVar7 <= 0.0);
  iVar14 = -(uint)(fVar8 <= 0.0);
  fVar8 = (float)CONCAT13((byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18),
                          CONCAT12((byte)((uint)fVar9 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10),
                                   CONCAT11((byte)((uint)fVar9 >> 8) & ~(byte)((uint)iVar12 >> 8),
                                            SUB41(fVar9,0) & ~(byte)iVar12)));
  fVar9 = (float)(CONCAT17((byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                           CONCAT16((byte)((uint)fVar11 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10),
                                    CONCAT15((byte)((uint)fVar11 >> 8) & ~(byte)((uint)iVar14 >> 8),
                                             CONCAT14(SUB41(fVar11,0) & ~(byte)iVar14,fVar8)))) >>
                 0x20);
  param_2[7] = uVar6;
  param_2[6] = uVar5;
  param_2[9] = CONCAT44(((float)((ulong)uVar6 >> 0x20) - (float)((ulong)uVar4 >> 0x20)) * fVar9,
                        fVar3 * fVar8);
  param_2[8] = CONCAT44(fVar2 * fVar9,fVar1 * fVar8);
  *(undefined4 *)(param_2 + 10) = param_1;
  *(float *)((long)param_2 + 0x54) = 1.0 / (fVar7 * fVar8 * fVar7 * fVar8);
  return;
}

