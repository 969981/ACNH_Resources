
void FUN_03ef3130(long param_1,float *param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  long lVar4;
  float *pfVar5;
  uint uVar6;
  short *psVar7;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = *(uint *)(param_1 + 0x70), uVar2 != 0)) {
    lVar8 = *(long *)(param_1 + 0x78);
    uVar9 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x18);
      psVar7 = (short *)(lVar8 + ((long)((ulong)uVar9 << 0x20) >> 0x1a) + 0x32);
      uVar6 = (uint)*psVar7;
      uVar1 = uVar6;
      if (*(uint *)(lVar4 + 0x30) <= (uint)(int)*psVar7) {
        uVar1 = 0;
      }
      if ((*(byte *)(*(long *)(lVar4 + 0x38) + (long)(int)uVar1) >> 1 & 1) == 0) {
        if (*(uint *)(lVar4 + 0x20) <= uVar6) {
          uVar6 = 0;
        }
        pfVar5 = (float *)(*(long *)(lVar4 + 0x28) + (long)(int)uVar6 * 0x1c);
      }
      else {
        pfVar5 = (float *)FUN_03ef9df0();
      }
      fVar11 = *pfVar5;
      fVar13 = pfVar5[1];
      fVar14 = pfVar5[2];
      fVar12 = pfVar5[3];
      lVar4 = lVar8 + (long)(int)uVar9 * 0x40;
      fVar23 = *param_2;
      fVar24 = param_2[1];
      fVar25 = *(float *)(lVar4 + 0x10);
      fVar29 = *(float *)(lVar4 + 0x14);
      fVar26 = param_2[2];
      fVar28 = param_2[3];
      fVar30 = *(float *)(lVar4 + 0x18);
      fVar27 = *(float *)(lVar4 + 0x1c);
      fVar15 = *param_3;
      fVar21 = param_3[1];
      fVar16 = fVar11 * fVar11 + fVar12 * fVar12 + fVar13 * fVar13 + fVar14 * fVar14;
      fVar22 = param_3[2];
      fVar18 = param_3[3];
      if (fVar16 <= 1.1920929e-07) {
        fVar19 = fVar12;
        fVar17 = fVar13;
        fVar20 = fVar14;
        fVar16 = fVar11;
      }
      else {
        fVar16 = 1.0 / fVar16;
        fVar19 = fVar12 * fVar16;
        fVar17 = fVar13 * fVar16;
        fVar20 = fVar14 * fVar16;
        fVar16 = fVar11 * fVar16;
      }
      fVar16 = -fVar16;
      fVar20 = -fVar20;
      fVar17 = -fVar17;
      fVar31 = ((-(fVar23 * fVar25) + fVar27 * fVar28) - fVar29 * fVar24) - fVar30 * fVar26;
      fVar32 = (fVar27 * fVar23 + fVar25 * fVar28 + fVar30 * fVar24) - fVar29 * fVar26;
      fVar33 = -(fVar23 * fVar30) + fVar29 * fVar28 + fVar27 * fVar24 + fVar25 * fVar26;
      fVar23 = ((fVar23 * fVar29 + fVar30 * fVar28) - fVar25 * fVar24) + fVar27 * fVar26;
      fVar26 = (fVar18 * fVar32 + fVar15 * fVar31 + fVar22 * fVar33) - fVar21 * fVar23;
      fVar25 = ((-(fVar32 * fVar15) + fVar18 * fVar31) - fVar21 * fVar33) - fVar22 * fVar23;
      fVar27 = -(fVar32 * fVar22) + fVar21 * fVar31 + fVar18 * fVar33 + fVar15 * fVar23;
      fVar15 = ((fVar32 * fVar21 + fVar22 * fVar31) - fVar15 * fVar33) + fVar18 * fVar23;
      fVar18 = ((-(fVar16 * fVar26) + fVar25 * fVar19) - fVar27 * fVar17) - fVar15 * fVar20;
      fVar23 = (fVar25 * fVar16 + fVar26 * fVar19 + fVar15 * fVar17) - fVar27 * fVar20;
      fVar24 = -(fVar16 * fVar15) + fVar27 * fVar19 + fVar25 * fVar17 + fVar26 * fVar20;
      fVar15 = ((fVar27 * fVar16 + fVar15 * fVar19) - fVar26 * fVar17) + fVar25 * fVar20;
      fVar16 = ((-(fVar23 * fVar11) + fVar12 * fVar18) - fVar13 * fVar24) - fVar14 * fVar15;
      fVar21 = (fVar12 * fVar23 + fVar11 * fVar18 + fVar14 * fVar24) - fVar13 * fVar15;
      fVar22 = -(fVar23 * fVar14) + fVar13 * fVar18 + fVar12 * fVar24 + fVar11 * fVar15;
      fVar15 = ((fVar13 * fVar23 + fVar14 * fVar18) - fVar11 * fVar24) + fVar12 * fVar15;
      pfVar5 = (float *)FUN_03ef9b40(*(undefined8 *)(param_1 + 0x18),(long)*psVar7);
      fVar11 = *pfVar5;
      fVar12 = pfVar5[1];
      fVar13 = pfVar5[2];
      fVar14 = pfVar5[3];
      lVar4 = *(long *)(param_1 + 0x18);
      sVar3 = *psVar7;
      fVar18 = pfVar5[6];
      uVar10 = *(undefined8 *)(pfVar5 + 4);
      FUN_03efa0c0(lVar4,(int)sVar3);
      uVar6 = (uint)sVar3;
      uVar1 = uVar6;
      if (*(uint *)(lVar4 + 0x10) <= (uint)(int)sVar3) {
        uVar1 = 0;
      }
      pfVar5 = (float *)(*(long *)(lVar4 + 0x18) + (long)(int)uVar1 * 0x1c);
      *pfVar5 = (fVar11 * fVar16 + fVar21 * fVar14 + fVar15 * fVar12) - fVar22 * fVar13;
      pfVar5[1] = -(fVar11 * fVar15) + fVar22 * fVar14 + fVar16 * fVar12 + fVar21 * fVar13;
      pfVar5[2] = ((fVar11 * fVar22 + fVar15 * fVar14) - fVar21 * fVar12) + fVar16 * fVar13;
      pfVar5[3] = ((-(fVar11 * fVar21) + fVar16 * fVar14) - fVar22 * fVar12) - fVar15 * fVar13;
      *(undefined8 *)(pfVar5 + 4) = uVar10;
      pfVar5[6] = fVar18;
      if (*(uint *)(lVar4 + 0x30) <= uVar6) {
        uVar6 = 0;
      }
      *(undefined1 *)(*(long *)(lVar4 + 0x38) + (long)(int)uVar6) = 2;
      uVar9 = uVar9 + 1;
      *(undefined1 *)(lVar4 + 0x40) = 0;
    } while (uVar2 != uVar9);
  }
  return;
}

