
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007021a4(float *param_1,long param_2)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
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
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  
  uVar3 = *(uint *)(param_2 + 700);
  uVar4 = *(uint *)(param_2 + 0x2c0);
  uVar5 = *(uint *)(param_2 + 0x2c4);
  fVar6 = (float)(*(uint *)(param_2 + 0x2b0) & 0xffffff) * 5.9604645e-08;
  pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(param_2 + 0x2b0) >> 0x14) & 0xff0));
  fVar7 = *pfVar1 + fVar6 * pfVar1[1];
  pfVar2 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(param_2 + 0x2b4) >> 0x14) & 0xff0));
  fVar6 = pfVar1[2] + fVar6 * pfVar1[3];
  fVar8 = (float)(*(uint *)(param_2 + 0x2b4) & 0xffffff) * 5.9604645e-08;
  fVar9 = *pfVar2 + fVar8 * pfVar2[1];
  fVar8 = pfVar2[2] + fVar8 * pfVar2[3];
  pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(param_2 + 0x2b8) >> 0x14) & 0xff0));
  fVar13 = (float)(*(uint *)(param_2 + 0x2b8) & 0xffffff) * 5.9604645e-08;
  fVar21 = *pfVar1 + fVar13 * pfVar1[1];
  fVar13 = pfVar1[2] + fVar13 * pfVar1[3];
  fVar20 = fVar9 * fVar21;
  fVar22 = fVar8 * fVar21;
  fVar18 = fVar8 * fVar13;
  fVar19 = fVar18 + fVar20 * fVar7;
  fVar23 = fVar9 * fVar13;
  if (((uVar3 == 0) && (uVar4 == 0)) && (uVar5 == 0)) {
    *param_1 = fVar19;
    param_1[4] = fVar6 * fVar21;
    param_1[5] = fVar6 * fVar13;
    param_1[10] = fVar6 * fVar8;
    param_1[6] = -fVar7;
    param_1[1] = fVar7 * fVar23 - fVar22;
    param_1[2] = fVar6 * fVar9;
    param_1[8] = fVar7 * fVar22 - fVar23;
    param_1[9] = fVar20 + fVar18 * fVar7;
  }
  else {
    fVar20 = fVar20 + fVar18 * fVar7;
    pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(uVar4 >> 0x14) & 0xff0));
    fVar21 = fVar6 * fVar21;
    pfVar2 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(uVar5 >> 0x14) & 0xff0));
    fVar13 = fVar6 * fVar13;
    fVar9 = fVar6 * fVar9;
    fVar6 = fVar6 * fVar8;
    fVar8 = (float)(uVar4 & 0xffffff) * 5.9604645e-08;
    fVar28 = *pfVar1 + fVar8 * pfVar1[1];
    fVar25 = pfVar1[2] + fVar8 * pfVar1[3];
    pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(uVar3 >> 0x14) & 0xff0));
    fVar18 = (float)(uVar3 & 0xffffff) * 5.9604645e-08;
    fVar8 = (float)(uVar5 & 0xffffff) * 5.9604645e-08;
    fVar36 = fVar25 + fVar28 * 0.0 * 0.0;
    fVar33 = fVar28 * 0.0 + fVar25 * 0.0;
    fVar37 = *pfVar1 + fVar18 * pfVar1[1];
    fVar35 = pfVar1[2] + fVar18 * pfVar1[3];
    fVar18 = *pfVar2 + fVar8 * pfVar2[1];
    fVar27 = pfVar2[2] + fVar8 * pfVar2[3];
    fVar39 = fVar7 * fVar22 - fVar23;
    fVar22 = fVar7 * fVar23 - fVar22;
    fVar38 = fVar25 * 0.0 * 0.0 - fVar28;
    fVar34 = fVar28 * 0.0 - fVar25 * 0.0;
    fVar7 = -fVar7;
    fVar31 = fVar35 * 0.0;
    fVar29 = fVar37 * fVar27 * 0.0 - fVar18;
    fVar24 = fVar37 * fVar18 - fVar27 * 0.0;
    fVar32 = fVar35 * fVar18;
    fVar26 = fVar27 + fVar18 * 0.0 * fVar37;
    fVar14 = (float)_DAT_04102930;
    fVar15 = (float)((ulong)_DAT_04102930 >> 0x20);
    fVar16 = (float)_UNK_04102938;
    fVar17 = (float)((ulong)_UNK_04102938 >> 0x20);
    fVar30 = fVar18 * 0.0 + fVar27 * fVar37;
    fVar27 = fVar35 * fVar27;
    fVar8 = fVar36 * fVar26 + fVar14 * fVar29 + fVar38 * fVar31 + 0.0;
    fVar18 = fVar34 * fVar26 + fVar15 * fVar29 + fVar33 * fVar31 + 0.0;
    fVar23 = fVar28 * fVar26 + fVar16 * fVar29 + fVar25 * fVar31 + 0.0;
    fVar10 = ((fVar36 * fVar32 + fVar14 * fVar27) - fVar38 * fVar37) + 0.0;
    fVar11 = ((fVar34 * fVar32 + fVar15 * fVar27) - fVar33 * fVar37) + 0.0;
    fVar12 = ((fVar28 * fVar32 + fVar16 * fVar27) - fVar25 * fVar37) + 0.0;
    fVar14 = fVar36 * fVar24 + fVar14 * fVar30 + fVar38 * fVar35 + 0.0;
    fVar15 = fVar34 * fVar24 + fVar15 * fVar30 + fVar33 * fVar35 + 0.0;
    fVar16 = fVar28 * fVar24 + fVar16 * fVar30 + fVar25 * fVar35 + 0.0;
    *(ulong *)(param_1 + 2) =
         CONCAT44(fVar26 * 0.0 + fVar17 * fVar29 + fVar31 * 0.0 + 0.0 +
                  fVar8 * 0.0 + fVar18 * 0.0 + fVar23 * 0.0,
                  fVar9 * fVar8 + fVar7 * fVar18 + fVar6 * fVar23 + 0.0);
    *(ulong *)param_1 =
         CONCAT44(fVar22 * fVar8 + fVar13 * fVar18 + fVar20 * fVar23 + 0.0,
                  fVar19 * fVar8 + fVar21 * fVar18 + fVar39 * fVar23 + 0.0);
    *(ulong *)(param_1 + 6) =
         CONCAT44(((fVar32 * 0.0 + fVar17 * fVar27) - fVar37 * 0.0) + 0.0 +
                  fVar10 * 0.0 + fVar11 * 0.0 + fVar12 * 0.0,
                  fVar9 * fVar10 + fVar7 * fVar11 + fVar6 * fVar12 + 0.0);
    *(ulong *)(param_1 + 4) =
         CONCAT44(fVar22 * fVar10 + fVar13 * fVar11 + fVar20 * fVar12 + 0.0,
                  fVar19 * fVar10 + fVar21 * fVar11 + fVar39 * fVar12 + 0.0);
    *(ulong *)(param_1 + 10) =
         CONCAT44(fVar24 * 0.0 + fVar17 * fVar30 + fVar35 * 0.0 + 0.0 +
                  fVar14 * 0.0 + fVar15 * 0.0 + fVar16 * 0.0,
                  fVar9 * fVar14 + fVar7 * fVar15 + fVar6 * fVar16 + 0.0);
    *(ulong *)(param_1 + 8) =
         CONCAT44(fVar22 * fVar14 + fVar13 * fVar15 + fVar20 * fVar16 + 0.0,
                  fVar19 * fVar14 + fVar21 * fVar15 + fVar39 * fVar16 + 0.0);
  }
  param_1[3] = *(float *)(param_2 + 0x278);
  fVar6 = *(float *)(param_2 + 0x280);
  param_1[7] = *(float *)(param_2 + 0x27c);
  param_1[0xb] = fVar6;
  return;
}

