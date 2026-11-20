
void FUN_03ef3704(float *param_1,long param_2)

{
  uint uVar1;
  short sVar2;
  undefined8 uVar3;
  float *pfVar4;
  uint uVar5;
  long lVar6;
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
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[6] = 0.0;
  uVar3 = DAT_041e93ec;
  *(undefined8 *)param_1 = DAT_041e93e4;
  *(undefined8 *)(param_1 + 2) = uVar3;
  if (*(int *)(param_2 + 0x70) != 0) {
    lVar6 = *(long *)(*(long *)(*(long *)(param_2 + 0x18) + 8) + 0x28);
    FUN_02a08d44(&local_70,lVar6 + 0x238);
    fVar7 = *(float *)(lVar6 + 0x244);
    fVar10 = *(float *)(lVar6 + 0x254);
    fVar14 = *(float *)(lVar6 + 0x264);
    lVar6 = *(long *)(param_2 + 0x18);
    fVar19 = fVar7 + fVar10 * -0.0 + fVar14 * 0.0;
    fVar11 = fVar10 + fVar7 * 0.0 + fVar14 * -0.0;
    fVar24 = fVar14 + fVar7 * -0.0 + fVar10 * 0.0;
    sVar2 = *(short *)(*(long *)(param_2 + 0x78) + 0x32);
    uVar5 = (uint)sVar2;
    uVar1 = uVar5;
    if (*(uint *)(lVar6 + 0x30) <= (uint)(int)sVar2) {
      uVar1 = 0;
    }
    fVar7 = fVar10 * -0.0 + fVar7 * -0.0 + fVar14 * -0.0;
    fVar23 = fStack_64 + local_70 * -0.0 + fStack_6c * -0.0 + local_68 * -0.0;
    fVar14 = local_70 + fStack_64 * 0.0 + local_68 * 0.0 + fStack_6c * -0.0;
    fVar10 = fStack_6c + local_68 * -0.0 + fStack_64 * 0.0 + local_70 * 0.0;
    fVar22 = local_68 + fStack_6c * 0.0 + local_70 * -0.0 + fStack_64 * 0.0;
    if ((*(byte *)(*(long *)(lVar6 + 0x38) + (long)(int)uVar1) >> 1 & 1) == 0) {
      if (*(uint *)(lVar6 + 0x20) <= uVar5) {
        uVar5 = 0;
      }
      pfVar4 = (float *)(*(long *)(lVar6 + 0x28) + (long)(int)uVar5 * 0x1c);
    }
    else {
      pfVar4 = (float *)FUN_03ef9df0();
    }
    fVar8 = *pfVar4;
    fVar12 = pfVar4[1];
    fVar17 = pfVar4[2];
    fVar15 = pfVar4[3];
    fVar26 = pfVar4[4];
    uVar1 = *(uint *)(param_2 + 0x28);
    fVar25 = pfVar4[5];
    fVar21 = pfVar4[6];
    if (*(uint *)(param_2 + 0x90) <= uVar1) {
      uVar1 = 0;
    }
    lVar6 = *(long *)(param_2 + 0x98) + (long)(int)uVar1 * 0x88;
    fVar29 = *(float *)(lVar6 + 0x34);
    fVar18 = (fVar22 * fVar26 - fVar21 * fVar14) + fVar25 * fVar23;
    fVar13 = (fVar14 * fVar15 + fVar8 * fVar23 + fVar17 * fVar10) - fVar12 * fVar22;
    fVar9 = -(fVar14 * fVar17) + fVar12 * fVar23 + fVar15 * fVar10 + fVar8 * fVar22;
    fVar16 = ((fVar14 * fVar12 + fVar17 * fVar23) - fVar8 * fVar10) + fVar15 * fVar22;
    fVar28 = *(float *)(lVar6 + 0x38);
    fVar20 = *(float *)(lVar6 + 0x3c);
    fVar8 = ((-(fVar14 * fVar8) + fVar15 * fVar23) - fVar12 * fVar10) - fVar17 * fVar22;
    fVar12 = -(fVar22 * fVar25) + fVar21 * fVar10 + fVar26 * fVar23;
    fVar27 = -(fVar10 * fVar26) + fVar25 * fVar14 + fVar21 * fVar23;
    fVar21 = (-(fVar10 * fVar25) - fVar26 * fVar14) - fVar21 * fVar22;
    fVar30 = -(fVar16 * fVar28) + fVar20 * fVar9 + fVar29 * fVar8;
    fVar31 = (fVar16 * fVar29 - fVar20 * fVar13) + fVar28 * fVar8;
    fVar15 = -(fVar9 * fVar29) + fVar28 * fVar13 + fVar20 * fVar8;
    fVar17 = (-(fVar9 * fVar28) - fVar29 * fVar13) - fVar20 * fVar16;
    fVar25 = *(float *)(lVar6 + 0x24);
    fVar26 = *(float *)(lVar6 + 0x28);
    fVar28 = *(float *)(lVar6 + 0x2c);
    fVar20 = *(float *)(lVar6 + 0x30);
    *param_1 = (fVar13 * fVar20 + fVar25 * fVar8 + fVar28 * fVar9) - fVar26 * fVar16;
    param_1[1] = -(fVar13 * fVar28) + fVar26 * fVar8 + fVar20 * fVar9 + fVar25 * fVar16;
    param_1[4] = fVar19 + fVar11 * -0.0 + fVar24 * 0.0 + fVar7 * -0.0 + 0.0 +
                 ((-(fVar22 * fVar18) + fVar23 * fVar12 + fVar10 * fVar27) - fVar14 * fVar21) +
                 ((-(fVar16 * fVar31) + fVar8 * fVar30 + fVar9 * fVar15) - fVar13 * fVar17);
    param_1[5] = fVar11 + fVar19 * 0.0 + fVar24 * -0.0 + fVar7 * -0.0 + 0.0 +
                 (((fVar23 * fVar18 + fVar22 * fVar12) - fVar14 * fVar27) - fVar10 * fVar21) +
                 (((fVar8 * fVar31 + fVar16 * fVar30) - fVar13 * fVar15) - fVar9 * fVar17);
    param_1[6] = fVar24 + fVar11 * 0.0 + fVar19 * -0.0 + fVar7 * -0.0 + 0.0 +
                 (((fVar14 * fVar18 - fVar10 * fVar12) + fVar23 * fVar27) - fVar22 * fVar21) +
                 (((fVar13 * fVar31 - fVar9 * fVar30) + fVar8 * fVar15) - fVar16 * fVar17);
    param_1[2] = ((fVar13 * fVar26 + fVar28 * fVar8) - fVar25 * fVar9) + fVar20 * fVar16;
    param_1[3] = ((-(fVar13 * fVar25) + fVar20 * fVar8) - fVar26 * fVar9) - fVar28 * fVar16;
  }
  return;
}

