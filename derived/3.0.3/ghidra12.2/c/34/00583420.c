
void FUN_00583420(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  
  iVar4 = *(int *)(param_1 + 0x40);
  lVar2 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d90);
  if (lVar2 != 0) {
    FUN_00443a00(lVar2,"TtSingle Stretch Links");
  }
  if (iVar4 != 0) {
    pfVar3 = *(float **)(param_1 + 0x38);
    do {
      Hint_Prefetch(pfVar3 + 4,0,0,0);
      Hint_Prefetch(pfVar3 + 0x14,0,0,0);
      iVar4 = iVar4 + -1;
      puVar1 = (undefined8 *)(param_2 + (ulong)(uint)pfVar3[2] * 0x10);
      uVar8 = puVar1[1];
      uVar20 = *puVar1;
      puVar1 = (undefined8 *)(param_2 + (ulong)(uint)pfVar3[3] * 0x10);
      uVar13 = puVar1[1];
      uVar10 = *puVar1;
      fVar9 = (float)uVar10;
      fVar5 = fVar9 - (float)uVar20;
      fVar11 = (float)((ulong)uVar10 >> 0x20);
      fVar6 = fVar11 - (float)((ulong)uVar20 >> 0x20);
      fVar12 = (float)uVar13;
      fVar7 = fVar12 - (float)uVar8;
      fVar14 = (float)((ulong)uVar13 >> 0x20);
      fVar15 = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
      fVar16 = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
      uVar20 = NEON_frsqrte(CONCAT44(fVar16,fVar15),4);
      fVar19 = (float)uVar20;
      fVar21 = (float)((ulong)uVar20 >> 0x20);
      uVar20 = NEON_frsqrts(CONCAT44(fVar16,fVar15),CONCAT44(fVar21 * fVar21,fVar19 * fVar19),4);
      iVar17 = -(uint)(fVar15 <= 0.0);
      iVar18 = -(uint)(fVar16 <= 0.0);
      fVar19 = fVar19 * (float)uVar20;
      fVar21 = fVar21 * (float)((ulong)uVar20 >> 0x20);
      fVar19 = (float)CONCAT13((byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18),
                               CONCAT12((byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar17 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar19 >> 8) &
                                                  ~(byte)((uint)iVar17 >> 8),
                                                  SUB41(fVar19,0) & ~(byte)iVar17)));
      fVar21 = (float)(CONCAT17((byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18),
                                CONCAT16((byte)((uint)fVar21 >> 0x10) &
                                         ~(byte)((uint)iVar18 >> 0x10),
                                         CONCAT15((byte)((uint)fVar21 >> 8) &
                                                  ~(byte)((uint)iVar18 >> 8),
                                                  CONCAT14(SUB41(fVar21,0) & ~(byte)iVar18,fVar19)))
                               ) >> 0x20);
      uVar20 = NEON_fmin(CONCAT44(*pfVar3 - fVar16 * fVar21,*pfVar3 - fVar15 * fVar19),0,4);
      fVar15 = (float)uVar20 * pfVar3[1] * (float)*param_3;
      fVar16 = (float)((ulong)uVar20 >> 0x20) * pfVar3[1] * (float)((ulong)*param_3 >> 0x20);
      puVar1 = (undefined8 *)(param_2 + (ulong)(uint)pfVar3[3] * 0x10);
      puVar1[1] = CONCAT44(fVar14 + fVar16 * (fVar14 - (float)((ulong)uVar8 >> 0x20)) * fVar21,
                           fVar12 + fVar15 * fVar7 * fVar19);
      *puVar1 = CONCAT44(fVar11 + fVar16 * fVar6 * fVar21,fVar9 + fVar15 * fVar5 * fVar19);
    } while (iVar4 != 0);
  }
  if (lVar2 != 0) {
    FUN_00443a70(lVar2,&DAT_04085310);
  }
  return;
}

