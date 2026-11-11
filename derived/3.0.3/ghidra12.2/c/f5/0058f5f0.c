
void FUN_0058f5f0(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  
  iVar2 = *(int *)(param_1 + 0x40);
  lVar6 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d90);
  if (lVar6 != 0) {
    FUN_00443a00(lVar6,"TtSingle Standard Links");
  }
  if (iVar2 != 0) {
    iVar7 = 0;
    do {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + (long)iVar7 * 0x10);
      iVar7 = iVar7 + 1;
      lVar9 = (ulong)*(ushort *)((long)puVar1 + 0xe) * 0x10;
      lVar8 = (ulong)*(ushort *)((long)puVar1 + 0xc) * 0x10;
      uVar13 = ((undefined8 *)(param_2 + lVar9))[1];
      uVar35 = *(undefined8 *)(param_2 + lVar9);
      puVar3 = (undefined8 *)(param_2 + lVar8);
      uVar18 = puVar3[1];
      uVar15 = *puVar3;
      fVar14 = (float)uVar15;
      fVar10 = (float)uVar35 - fVar14;
      fVar16 = (float)((ulong)uVar15 >> 0x20);
      fVar11 = (float)((ulong)uVar35 >> 0x20) - fVar16;
      fVar17 = (float)uVar18;
      fVar12 = (float)uVar13 - fVar17;
      fVar19 = (float)((ulong)uVar18 >> 0x20);
      fVar21 = fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12;
      fVar22 = fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12;
      uVar35 = NEON_frsqrte(CONCAT44(fVar22,fVar21),4);
      fVar34 = (float)uVar35;
      fVar36 = (float)((ulong)uVar35 >> 0x20);
      uVar35 = NEON_frsqrts(CONCAT44(fVar22,fVar21),CONCAT44(fVar36 * fVar36,fVar34 * fVar34),4);
      iVar4 = -(uint)(fVar21 <= 0.0);
      iVar5 = -(uint)(fVar22 <= 0.0);
      fVar34 = fVar34 * (float)uVar35;
      fVar36 = fVar36 * (float)((ulong)uVar35 >> 0x20);
      fVar20 = (float)*puVar1;
      bVar26 = SUB41(fVar34,0) & ~(byte)iVar4;
      bVar27 = (byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar4 >> 8);
      bVar28 = (byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar4 >> 0x10);
      bVar29 = (byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar4 >> 0x18);
      bVar30 = SUB41(fVar36,0) & ~(byte)iVar5;
      bVar31 = (byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar5 >> 8);
      bVar32 = (byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10);
      bVar33 = (byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18);
      fVar21 = fVar21 * (float)CONCAT13(bVar29,CONCAT12(bVar28,CONCAT11(bVar27,bVar26)));
      fVar22 = fVar22 * (float)CONCAT13(bVar33,CONCAT12(bVar32,CONCAT11(bVar31,bVar30)));
      fVar34 = (float)CONCAT13(bVar29,CONCAT12(bVar28,CONCAT11(bVar27,bVar26)));
      fVar10 = fVar10 * (float)CONCAT13(bVar29,CONCAT12(bVar28,CONCAT11(bVar27,bVar26)));
      fVar11 = fVar11 * (float)CONCAT13(bVar33,CONCAT12(bVar32,CONCAT11(bVar31,bVar30)));
      fVar12 = fVar12 * fVar34;
      fVar34 = ((float)((ulong)uVar13 >> 0x20) - fVar19) *
               (float)(CONCAT17(bVar33,CONCAT16(bVar32,CONCAT15(bVar31,CONCAT14(bVar30,fVar34)))) >>
                      0x20);
      fVar24 = (float)*param_3;
      fVar36 = fVar24 * (fVar21 - fVar20);
      fVar25 = (float)((ulong)*param_3 >> 0x20);
      fVar23 = fVar25 * (fVar22 - fVar20);
      fVar24 = fVar24 * (fVar21 - fVar20);
      fVar25 = fVar25 * (fVar22 - fVar20);
      fVar20 = (float)((ulong)*puVar1 >> 0x20);
      fVar21 = (float)puVar1[1];
      puVar1 = (undefined8 *)(param_2 + lVar8);
      puVar1[1] = CONCAT44(fVar19 + fVar34 * fVar25 * fVar20,fVar17 + fVar12 * fVar24 * fVar20);
      *puVar1 = CONCAT44(fVar16 + fVar11 * fVar23 * fVar20,fVar14 + fVar10 * fVar36 * fVar20);
      uVar13 = ((undefined8 *)(param_2 + lVar9))[1];
      uVar35 = *(undefined8 *)(param_2 + lVar9);
      ((undefined8 *)(param_2 + lVar9))[1] =
           CONCAT44((float)((ulong)uVar13 >> 0x20) + fVar34 * fVar25 * fVar21,
                    (float)uVar13 + fVar12 * fVar24 * fVar21);
      *(undefined8 *)(param_2 + lVar9) =
           CONCAT44((float)((ulong)uVar35 >> 0x20) + fVar11 * fVar23 * fVar21,
                    (float)uVar35 + fVar10 * fVar36 * fVar21);
    } while (iVar2 != iVar7);
  }
  if (lVar6 != 0) {
    FUN_00443a70(lVar6,&DAT_04085310);
  }
  return;
}

