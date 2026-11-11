
void FUN_00590e00(long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  iVar1 = *(int *)(param_1 + 0x40);
  lVar3 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d90);
  if (lVar3 != 0) {
    FUN_00443a00(lVar3,"TtSingle Bend Stiffness");
  }
  if (iVar1 != 0) {
    iVar4 = 0;
    do {
      pfVar5 = (float *)(*(long *)(param_1 + 0x38) + (long)iVar4 * 0x30);
      iVar4 = iVar4 + 1;
      fVar9 = *pfVar5;
      fVar11 = pfVar5[1];
      lVar6 = (ulong)*(ushort *)((long)pfVar5 + 0x2a) * 0x10;
      lVar7 = (ulong)*(ushort *)(pfVar5 + 0xb) * 0x10;
      fVar14 = pfVar5[2];
      fVar15 = pfVar5[3];
      puVar2 = (undefined8 *)(param_2 + (ulong)*(ushort *)(pfVar5 + 10) * 0x10);
      uVar13 = puVar2[1];
      uVar12 = *puVar2;
      uVar24 = ((undefined8 *)(param_2 + lVar6))[1];
      uVar21 = *(undefined8 *)(param_2 + lVar6);
      uVar27 = ((undefined8 *)(param_2 + lVar7))[1];
      uVar26 = *(undefined8 *)(param_2 + lVar7);
      lVar8 = (ulong)*(ushort *)((long)pfVar5 + 0x2e) * 0x10;
      fVar16 = (float)uVar12;
      fVar17 = (float)((ulong)uVar12 >> 0x20);
      fVar18 = (float)uVar13;
      fVar19 = (float)((ulong)uVar13 >> 0x20);
      fVar29 = pfVar5[4] * (float)*param_3;
      uVar13 = ((undefined8 *)(param_2 + lVar8))[1];
      uVar12 = *(undefined8 *)(param_2 + lVar8);
      fVar30 = pfVar5[7];
      fVar10 = pfVar5[6] * fVar9 * fVar29;
      fVar25 = pfVar5[8];
      fVar28 = pfVar5[9];
      fVar20 = fVar16 * fVar9 + (float)uVar21 * fVar11 + (float)uVar26 * fVar14 +
               (float)uVar12 * fVar15;
      fVar22 = fVar17 * fVar9 + (float)((ulong)uVar21 >> 0x20) * fVar11 +
               (float)((ulong)uVar26 >> 0x20) * fVar14 + (float)((ulong)uVar12 >> 0x20) * fVar15;
      fVar23 = fVar18 * fVar9 + (float)uVar24 * fVar11 + (float)uVar27 * fVar14 +
               (float)uVar13 * fVar15;
      fVar9 = fVar19 * fVar9 + (float)((ulong)uVar24 >> 0x20) * fVar11 +
              (float)((ulong)uVar27 >> 0x20) * fVar14 + (float)((ulong)uVar13 >> 0x20) * fVar15;
      puVar2 = (undefined8 *)(param_2 + (ulong)*(ushort *)(pfVar5 + 10) * 0x10);
      puVar2[1] = CONCAT44(fVar19 + fVar9 * fVar10,fVar18 + fVar23 * fVar10);
      *puVar2 = CONCAT44(fVar17 + fVar22 * fVar10,fVar16 + fVar20 * fVar10);
      uVar13 = ((undefined8 *)(param_2 + lVar6))[1];
      uVar12 = *(undefined8 *)(param_2 + lVar6);
      fVar30 = fVar30 * fVar11 * fVar29;
      ((undefined8 *)(param_2 + lVar6))[1] =
           CONCAT44((float)((ulong)uVar13 >> 0x20) + fVar9 * fVar30,(float)uVar13 + fVar23 * fVar30)
      ;
      *(undefined8 *)(param_2 + lVar6) =
           CONCAT44((float)((ulong)uVar12 >> 0x20) + fVar22 * fVar30,(float)uVar12 + fVar20 * fVar30
                   );
      fVar25 = fVar25 * fVar14 * fVar29;
      uVar13 = ((undefined8 *)(param_2 + lVar7))[1];
      uVar12 = *(undefined8 *)(param_2 + lVar7);
      ((undefined8 *)(param_2 + lVar7))[1] =
           CONCAT44((float)((ulong)uVar13 >> 0x20) + fVar9 * fVar25,(float)uVar13 + fVar23 * fVar25)
      ;
      *(undefined8 *)(param_2 + lVar7) =
           CONCAT44((float)((ulong)uVar12 >> 0x20) + fVar22 * fVar25,(float)uVar12 + fVar20 * fVar25
                   );
      fVar28 = fVar15 * fVar29 * fVar28;
      uVar13 = ((undefined8 *)(param_2 + lVar8))[1];
      uVar12 = *(undefined8 *)(param_2 + lVar8);
      ((undefined8 *)(param_2 + lVar8))[1] =
           CONCAT44(fVar9 * fVar28 + (float)((ulong)uVar13 >> 0x20),fVar23 * fVar28 + (float)uVar13)
      ;
      *(undefined8 *)(param_2 + lVar8) =
           CONCAT44(fVar22 * fVar28 + (float)((ulong)uVar12 >> 0x20),fVar20 * fVar28 + (float)uVar12
                   );
    } while (iVar1 != iVar4);
  }
  if (lVar3 != 0) {
    FUN_00443a70(lVar3,&DAT_04085310);
  }
  return;
}

