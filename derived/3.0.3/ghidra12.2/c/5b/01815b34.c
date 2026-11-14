
void FUN_01815b34(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
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
  
  *(undefined4 *)(param_1 + 0x314) = 0;
  *(undefined8 *)(param_1 + 0x30c) = 0;
  fVar6 = *(float *)(param_1 + 0x318) + *(float *)(param_1 + 0x308);
  uVar3 = *(uint *)(param_1 + 800);
  *(float *)(param_1 + 0x308) = fVar6;
  puVar5 = PTR_DAT_04bb2d00;
  pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(uVar3 >> 0x14) & 0xff0));
  fVar7 = *pfVar1 + pfVar1[1] * (float)(uVar3 & 0xffffff) * 5.9604645e-08;
  *(float *)(param_1 + 0x360) = fVar7;
  fVar8 = pfVar1[2] + pfVar1[3] * (float)(uVar3 & 0xffffff) * 5.9604645e-08;
  *(float *)(param_1 + 0x364) = fVar8;
  if (fVar6 != 0.0) {
    uVar4 = *(uint *)(param_1 + 0x31c);
    if (uVar4 == 0) {
      fVar7 = fVar6 * fVar7;
      fVar6 = fVar6 * fVar8;
    }
    else {
      pfVar1 = (float *)(puVar5 + ((ulong)(uVar4 >> 0x15) & 0x7f0));
      pfVar2 = (float *)(puVar5 + ((ulong)(uVar3 >> 0x15) & 0x7f0));
      fVar7 = (float)(uVar4 >> 1 & 0xffffff) * 5.9604645e-08;
      fVar8 = (float)(uVar3 >> 1 & 0xffffff) * 5.9604645e-08;
      fVar9 = *pfVar1 + fVar7 * pfVar1[1];
      fVar12 = fVar9 * 0.0;
      fVar7 = pfVar1[2] + fVar7 * pfVar1[3];
      fVar11 = *pfVar2 + fVar8 * pfVar2[1];
      fVar7 = fVar7 + fVar7;
      fVar17 = fVar11 * 0.0;
      fVar8 = pfVar2[2] + fVar8 * pfVar2[3];
      fVar13 = fVar12 * (fVar9 + fVar9);
      fVar14 = fVar12 * (fVar12 + fVar12);
      fVar12 = fVar12 * fVar7;
      fVar7 = fVar9 * fVar7;
      fVar8 = fVar8 + fVar8;
      fVar10 = fVar13 - fVar12;
      fVar13 = fVar13 + fVar12;
      fVar12 = (1.0 - fVar9 * (fVar9 + fVar9)) - fVar14;
      fVar15 = fVar17 * (fVar17 + fVar17);
      fVar16 = fVar11 * (fVar11 + fVar11);
      fVar19 = (fVar11 + fVar11) * fVar17;
      fVar18 = fVar17 * fVar8;
      fVar8 = fVar11 * fVar8;
      fVar11 = fVar11 * (fVar17 + fVar17);
      fVar17 = fVar12 * 0.0 + fVar13 * 0.0 + fVar6 * (fVar14 - fVar7);
      fVar9 = fVar10 * 0.0 + ((1.0 - fVar14) - fVar14) * 0.0 + fVar6 * fVar13;
      fVar6 = (fVar14 + fVar7) * 0.0 + fVar10 * 0.0 + fVar6 * fVar12;
      fVar7 = fVar17 * (fVar11 - fVar18) + fVar9 * ((1.0 - fVar16) - fVar15) +
              fVar6 * (fVar15 + fVar8);
      *(float *)(param_1 + 0x310) =
           fVar17 * ((1.0 - fVar15) - fVar15) + fVar9 * (fVar11 + fVar18) +
           fVar6 * (fVar19 - fVar18);
      fVar6 = fVar17 * (fVar19 + fVar18) + fVar9 * (fVar15 - fVar8) +
              fVar6 * ((1.0 - fVar15) - fVar16);
    }
    *(float *)(param_1 + 0x30c) = fVar7;
    *(float *)(param_1 + 0x314) = fVar6;
  }
  return;
}

