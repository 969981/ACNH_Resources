
void FUN_0055bb60(long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  float *pfVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar31;
  undefined8 uVar30;
  float fVar32;
  float fVar33;
  
  iVar1 = *(int *)(param_1 + 0x40);
  lVar5 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d90);
  if (lVar5 != 0) {
    FUN_00443a00(lVar5,"TtSingle Bend Links");
  }
  if (iVar1 != 0) {
    iVar6 = 0;
    do {
      pfVar7 = (float *)(*(long *)(param_1 + 0x38) + (long)iVar6 * 0x1c);
      iVar6 = iVar6 + 1;
      fVar32 = pfVar7[4];
      fVar33 = pfVar7[5];
      lVar8 = (ulong)*(ushort *)((long)pfVar7 + 0x1a) * 0x10;
      uVar12 = ((undefined8 *)(param_2 + lVar8))[1];
      uVar29 = *(undefined8 *)(param_2 + lVar8);
      puVar2 = (undefined8 *)(param_2 + (ulong)*(ushort *)(pfVar7 + 6) * 0x10);
      uVar16 = puVar2[1];
      uVar30 = *puVar2;
      fVar13 = (float)uVar30;
      fVar9 = (float)uVar29 - fVar13;
      fVar14 = (float)((ulong)uVar30 >> 0x20);
      fVar10 = (float)((ulong)uVar29 >> 0x20) - fVar14;
      fVar15 = (float)uVar16;
      fVar11 = (float)uVar12 - fVar15;
      fVar17 = (float)((ulong)uVar16 >> 0x20);
      fVar18 = fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11;
      fVar19 = fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11;
      uVar29 = NEON_frsqrte(CONCAT44(fVar19,fVar18),4);
      fVar28 = (float)uVar29;
      fVar31 = (float)((ulong)uVar29 >> 0x20);
      uVar29 = NEON_frsqrts(CONCAT44(fVar19,fVar18),CONCAT44(fVar31 * fVar31,fVar28 * fVar28),4);
      iVar3 = -(uint)(fVar18 <= 0.0);
      iVar4 = -(uint)(fVar19 <= 0.0);
      fVar28 = fVar28 * (float)uVar29;
      fVar31 = fVar31 * (float)((ulong)uVar29 >> 0x20);
      bVar20 = SUB41(fVar28,0) & ~(byte)iVar3;
      bVar21 = (byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar3 >> 8);
      bVar22 = (byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar3 >> 0x10);
      bVar23 = (byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar3 >> 0x18);
      bVar24 = SUB41(fVar31,0) & ~(byte)iVar4;
      bVar25 = (byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar4 >> 8);
      bVar26 = (byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar4 >> 0x10);
      bVar27 = (byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar4 >> 0x18);
      fVar18 = fVar18 * (float)CONCAT13(bVar23,CONCAT12(bVar22,CONCAT11(bVar21,bVar20)));
      fVar19 = fVar19 * (float)CONCAT13(bVar27,CONCAT12(bVar26,CONCAT11(bVar25,bVar24)));
      uVar29 = NEON_fmax(CONCAT44(fVar19 - pfVar7[1],fVar18 - pfVar7[1]),0,4);
      uVar30 = NEON_fmax(CONCAT44(*pfVar7 - fVar19,*pfVar7 - fVar18),0,4);
      fVar18 = (float)CONCAT13(bVar23,CONCAT12(bVar22,CONCAT11(bVar21,bVar20)));
      fVar19 = (float)*param_3 * ((float)uVar29 * pfVar7[2] - (float)uVar30 * pfVar7[3]);
      fVar28 = (float)((ulong)*param_3 >> 0x20) *
               ((float)((ulong)uVar29 >> 0x20) * pfVar7[2] -
               (float)((ulong)uVar30 >> 0x20) * pfVar7[3]);
      fVar9 = fVar9 * (float)CONCAT13(bVar23,CONCAT12(bVar22,CONCAT11(bVar21,bVar20))) * fVar19;
      fVar10 = fVar10 * (float)CONCAT13(bVar27,CONCAT12(bVar26,CONCAT11(bVar25,bVar24))) * fVar28;
      fVar19 = fVar11 * fVar18 * fVar19;
      fVar28 = ((float)((ulong)uVar12 >> 0x20) - fVar17) *
               (float)(CONCAT17(bVar27,CONCAT16(bVar26,CONCAT15(bVar25,CONCAT14(bVar24,fVar18)))) >>
                      0x20) * fVar28;
      puVar2 = (undefined8 *)(param_2 + (ulong)*(ushort *)(pfVar7 + 6) * 0x10);
      puVar2[1] = CONCAT44(fVar17 + fVar28 * fVar32,fVar15 + fVar19 * fVar32);
      *puVar2 = CONCAT44(fVar14 + fVar10 * fVar32,fVar13 + fVar9 * fVar32);
      uVar12 = ((undefined8 *)(param_2 + lVar8))[1];
      uVar29 = *(undefined8 *)(param_2 + lVar8);
      ((undefined8 *)(param_2 + lVar8))[1] =
           CONCAT44((float)((ulong)uVar12 >> 0x20) + fVar28 * fVar33,(float)uVar12 + fVar19 * fVar33
                   );
      *(undefined8 *)(param_2 + lVar8) =
           CONCAT44((float)((ulong)uVar29 >> 0x20) + fVar10 * fVar33,(float)uVar29 + fVar9 * fVar33)
      ;
    } while (iVar1 != iVar6);
  }
  if (lVar5 != 0) {
    FUN_00443a70(lVar5,&DAT_04085310);
  }
  return;
}

