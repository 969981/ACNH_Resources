
/* WARNING: Type propagation algorithm not settling */

void FUN_03acde40(long param_1,float *param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
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
  undefined8 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float local_a0 [6];
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  
  uVar7 = *(undefined8 *)(param_1 + 0x198);
  uVar11 = *(undefined8 *)(param_1 + 0x1a8);
  uVar15 = *(undefined8 *)(param_1 + 0x1b8);
  uVar33 = *(undefined8 *)(param_1 + 0x188);
  fVar30 = (float)*(undefined8 *)(param_1 + 0x180);
  fVar16 = (float)*(undefined8 *)(param_1 + 0x150);
  fVar17 = (float)((ulong)*(undefined8 *)(param_1 + 0x150) >> 0x20);
  fVar18 = (float)*(undefined8 *)(param_1 + 0x158);
  fVar19 = (float)((ulong)*(undefined8 *)(param_1 + 0x158) >> 0x20);
  fVar31 = (float)((ulong)*(undefined8 *)(param_1 + 0x180) >> 0x20);
  fVar20 = (float)*(undefined8 *)(param_1 + 0x160);
  fVar21 = (float)((ulong)*(undefined8 *)(param_1 + 0x160) >> 0x20);
  fVar22 = (float)*(undefined8 *)(param_1 + 0x168);
  fVar23 = (float)((ulong)*(undefined8 *)(param_1 + 0x168) >> 0x20);
  fVar4 = (float)*(undefined8 *)(param_1 + 400);
  fVar5 = (float)((ulong)*(undefined8 *)(param_1 + 400) >> 0x20);
  fVar8 = (float)*(undefined8 *)(param_1 + 0x1a0);
  fVar9 = (float)((ulong)*(undefined8 *)(param_1 + 0x1a0) >> 0x20);
  fVar12 = (float)*(undefined8 *)(param_1 + 0x1b0);
  fVar13 = (float)((ulong)*(undefined8 *)(param_1 + 0x1b0) >> 0x20);
  local_a0[0] = *param_3;
  local_a0[1] = param_3[1];
  fVar32 = (float)uVar33;
  fVar34 = (float)*(undefined8 *)(param_1 + 0x170);
  fVar35 = (float)((ulong)*(undefined8 *)(param_1 + 0x170) >> 0x20);
  fVar36 = (float)*(undefined8 *)(param_1 + 0x178);
  fVar37 = (float)((ulong)*(undefined8 *)(param_1 + 0x178) >> 0x20);
  local_a0[5] = param_3[2];
  local_88 = param_3[3];
  fVar6 = (float)uVar7;
  fStack_6c = param_3[4];
  fStack_74 = param_3[5];
  fVar10 = (float)uVar11;
  param_2[0] = 3.4028235e+38;
  param_2[1] = 3.4028235e+38;
  param_2[2] = 3.4028235e+38;
  param_2[3] = -3.4028235e+38;
  fVar14 = (float)uVar15;
  param_2[4] = -3.4028235e+38;
  param_2[5] = -3.4028235e+38;
  local_a0[4] = local_a0[1];
  fStack_84 = local_a0[1];
  local_78 = local_a0[1];
  fVar2 = -3.4028235e+38;
  local_80 = fStack_74;
  fStack_7c = local_a0[0];
  local_70 = local_a0[0];
  local_50 = fStack_74;
  fStack_4c = local_a0[0];
  fVar3 = 3.4028235e+38;
  local_a0[2] = local_a0[5];
  local_a0[3] = local_88;
  local_68 = local_a0[5];
  fStack_64 = local_88;
  local_60 = fStack_6c;
  fStack_5c = local_a0[5];
  local_58 = local_88;
  fStack_54 = fStack_6c;
  local_48 = fStack_6c;
  fStack_44 = fStack_74;
  fVar38 = 3.4028235e+38;
  fVar39 = 3.4028235e+38;
  fVar40 = -3.4028235e+38;
  fVar41 = -3.4028235e+38;
  lVar1 = 0;
  do {
    fVar24 = *(float *)((long)local_a0 + lVar1);
    fVar25 = *(float *)((long)local_a0 + lVar1 + 4);
    fVar26 = *(float *)((long)local_a0 + lVar1 + 8);
    fVar27 = (float)((ulong)uVar15 >> 0x20) + fVar19 * fVar12 + fVar23 * fVar13 + fVar37 * fVar14 +
             (fVar17 * fVar12 + fVar21 * fVar13 + fVar35 * fVar14 + 0.0) * fVar25 +
             fVar24 * (fVar16 * fVar12 + fVar20 * fVar13 + fVar34 * fVar14 + 0.0) +
             fVar26 * (fVar18 * fVar12 + fVar22 * fVar13 + fVar36 * fVar14 + 0.0);
    fVar28 = ((float)((ulong)uVar33 >> 0x20) + fVar19 * fVar30 + fVar23 * fVar31 + fVar37 * fVar32)
             / fVar27 +
             fVar25 * ((fVar17 * fVar30 + fVar21 * fVar31 + fVar35 * fVar32 + 0.0) / fVar27) +
             fVar24 * ((fVar16 * fVar30 + fVar20 * fVar31 + fVar34 * fVar32 + 0.0) / fVar27) +
             fVar26 * ((fVar18 * fVar30 + fVar22 * fVar31 + fVar36 * fVar32 + 0.0) / fVar27);
    fVar29 = ((float)((ulong)uVar7 >> 0x20) + fVar19 * fVar4 + fVar23 * fVar5 + fVar37 * fVar6) /
             fVar27 + fVar25 * ((fVar17 * fVar4 + fVar21 * fVar5 + fVar35 * fVar6 + 0.0) / fVar27) +
                      fVar24 * ((fVar16 * fVar4 + fVar20 * fVar5 + fVar34 * fVar6 + 0.0) / fVar27) +
                      fVar26 * ((fVar18 * fVar4 + fVar22 * fVar5 + fVar36 * fVar6 + 0.0) / fVar27);
    fVar25 = ((float)((ulong)uVar11 >> 0x20) + fVar19 * fVar8 + fVar23 * fVar9 + fVar37 * fVar10) /
             fVar27 + fVar25 * ((fVar17 * fVar8 + fVar21 * fVar9 + fVar35 * fVar10 + 0.0) / fVar27)
                      + fVar24 * ((fVar16 * fVar8 + fVar20 * fVar9 + fVar34 * fVar10 + 0.0) / fVar27
                                 ) +
                      fVar26 * ((fVar18 * fVar8 + fVar22 * fVar9 + fVar36 * fVar10 + 0.0) / fVar27);
    fVar24 = 1.0;
    if (fVar28 <= 1.0) {
      fVar24 = fVar28;
    }
    fVar26 = -1.0;
    if (-1.0 <= fVar28) {
      fVar26 = fVar24;
    }
    fVar24 = 1.0;
    if (fVar29 <= 1.0) {
      fVar24 = fVar29;
    }
    fVar27 = -1.0;
    if (-1.0 <= fVar29) {
      fVar27 = fVar24;
    }
    fVar24 = 1.0;
    if (fVar25 <= 1.0) {
      fVar24 = fVar25;
    }
    *(float *)((long)local_a0 + lVar1) = fVar26;
    *(float *)((long)local_a0 + lVar1 + 4) = fVar27;
    fVar28 = -1.0;
    if (-1.0 <= fVar25) {
      fVar28 = fVar24;
    }
    *(float *)((long)local_a0 + lVar1 + 8) = fVar28;
    if (fVar26 < fVar3) {
      *param_2 = fVar26;
      fVar3 = fVar26;
    }
    if (fVar27 < fVar38) {
      param_2[1] = fVar27;
      fVar38 = fVar27;
    }
    if (fVar28 < fVar39) {
      param_2[2] = fVar28;
      fVar39 = fVar28;
    }
    if (fVar2 < fVar26) {
      param_2[3] = fVar26;
      fVar2 = fVar26;
    }
    if (fVar40 < fVar27) {
      param_2[4] = fVar27;
      fVar40 = fVar27;
    }
    if (fVar41 < fVar28) {
      param_2[5] = fVar28;
      fVar41 = fVar28;
    }
    lVar1 = lVar1 + 0xc;
  } while (lVar1 != 0x60);
  return;
}

