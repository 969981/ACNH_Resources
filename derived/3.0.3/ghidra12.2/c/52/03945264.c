
void FUN_03945264(float param_1,float param_2,float param_3,long param_4,float *param_5,
                 float *param_6,uint param_7,int param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
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
  float local_a0;
  float local_9c;
  float local_98;
  float local_84;
  float local_7c;
  float local_78;
  float local_74;
  float local_18;
  float local_14;
  
  fVar15 = *param_5;
  fVar1 = param_5[1];
  fVar8 = *(float *)(param_4 + 0x18);
  fVar16 = *(float *)(param_4 + 8);
  fVar18 = *(float *)(param_4 + 0xc);
  fVar17 = *(float *)(param_4 + 0x10);
  fVar14 = *param_6;
  fVar2 = param_6[1];
  fVar3 = *(float *)(param_4 + 0x1c);
  fVar4 = *(float *)(param_4 + 0x20);
  fVar9 = *(float *)(param_4 + 0x30);
  fVar5 = *(float *)(param_4 + 0x28);
  fVar7 = *(float *)(param_4 + 0x2c);
  fVar6 = fVar9 * -0.0 + fVar5 * 0.0;
  fVar11 = fVar7 * 0.0 - fVar5;
  fVar10 = fVar9 + fVar7 * -0.0;
  fVar5 = atan2f(fVar7 * (-(fVar16 * fVar11) + fVar10 * fVar17) +
                 (-(fVar17 * fVar6) + fVar11 * fVar18) * fVar5 +
                 (-(fVar18 * fVar10) + fVar6 * fVar16) * fVar9,
                 fVar18 * fVar6 + fVar10 * fVar16 + fVar11 * fVar17);
  fVar5 = fVar5 * 0.5;
  if (ABS(fVar5) == INFINITY) {
    cosf(fVar5);
    sinf(fVar5);
  }
  local_84 = *(float *)(param_4 + 0x38);
  local_74 = *(float *)(param_4 + 0x3c);
  local_18 = *(float *)(param_4 + 0x48);
  local_78 = *(float *)(param_4 + 0x4c);
  local_7c = *(float *)(param_4 + 0x40);
  local_14 = *(float *)(param_4 + 0x44);
  local_98 = local_14 - local_84;
  local_a0 = local_18 - local_74;
  local_9c = local_78 - local_7c;
  fVar5 = DAT_04c4bac0 * 0.01;
  fVar6 = DAT_04c4bac0 * 100000.0;
  fVar7 = SQRT(local_a0 * local_a0 + local_98 * local_98 + local_9c * local_9c);
  if (0.0 < fVar7) {
    fVar9 = 1.0 / fVar7;
    local_98 = local_98 * fVar9;
    local_a0 = local_a0 * fVar9;
    local_9c = local_9c * fVar9;
  }
  fVar10 = (fVar7 - fVar5) / (fVar6 - fVar5);
  fVar9 = 1e-05;
  if (1e-05 <= fVar10) {
    fVar9 = fVar10;
  }
  fVar9 = (fVar5 + fVar9 * (fVar6 - fVar5)) * 0.0005 * DAT_04c4bac4;
  fVar7 = fVar7 + fVar9 * 30.0 * param_1;
  if (fVar5 < fVar7) {
    fVar5 = fVar7;
  }
  if (fVar6 <= fVar7) {
    fVar5 = fVar6;
  }
  fVar6 = -fVar17 + fVar18 * 0.0;
  fVar7 = fVar16 * -0.0 + fVar17 * 0.0;
  fVar10 = fVar16 + fVar18 * -0.0;
  fVar11 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar10 * fVar10);
  if (0.0 < fVar11) {
    fVar11 = 1.0 / fVar11;
    fVar6 = fVar6 * fVar11;
    fVar7 = fVar7 * fVar11;
    fVar10 = fVar10 * fVar11;
  }
  fVar20 = -(fVar10 * fVar18) + fVar17 * fVar7;
  fVar21 = -(fVar6 * fVar17) + fVar16 * fVar10;
  fVar11 = -(fVar7 * fVar16) + fVar18 * fVar6;
  fVar12 = SQRT(fVar21 * fVar21 + fVar20 * fVar20 + fVar11 * fVar11);
  if (0.0 < fVar12) {
    fVar12 = 1.0 / fVar12;
    fVar20 = fVar20 * fVar12;
    fVar21 = fVar21 * fVar12;
    fVar11 = fVar11 * fVar12;
  }
  fVar9 = fVar9 * 25.0;
  fVar12 = -(fVar11 * fVar7) + fVar10 * fVar21;
  fVar13 = -(fVar20 * fVar10) + fVar6 * fVar11;
  fVar19 = -(fVar21 * fVar6) + fVar7 * fVar20;
  if ((param_7 & 1) == 0) {
    if (param_8 == 1) {
      local_84 = fVar2 * fVar8 * fVar9 + local_84 + fVar14 * fVar16 * fVar9;
      local_74 = fVar2 * fVar3 * fVar9 + local_74 + fVar14 * fVar18 * fVar9;
      local_7c = fVar2 * fVar4 * fVar9 + local_7c + fVar14 * fVar17 * fVar9;
    }
    else if (param_8 == 0) {
      local_14 = fVar2 * fVar8 * fVar9 + local_14 + fVar14 * fVar16 * fVar9;
      local_18 = fVar2 * fVar3 * fVar9 + local_18 + fVar14 * fVar18 * fVar9;
      local_78 = fVar2 * fVar4 * fVar9 + local_78 + fVar14 * fVar17 * fVar9;
    }
  }
  else if (param_8 == 1) {
    local_84 = (fVar9 * fVar20 * param_2 + local_84 + fVar14 * fVar9 * fVar12) -
               fVar2 * fVar9 * fVar6;
    local_74 = (fVar9 * fVar21 * param_2 + local_74 + fVar14 * fVar9 * fVar13) -
               fVar2 * fVar9 * fVar7;
    local_7c = (fVar9 * fVar11 * param_2 + local_7c + fVar14 * fVar9 * fVar19) -
               fVar2 * fVar9 * fVar10;
  }
  else if (param_8 == 0) {
    local_14 = (fVar9 * fVar20 * param_2 + local_14 + fVar14 * fVar9 * fVar12) -
               fVar2 * fVar9 * fVar6;
    local_18 = (fVar9 * fVar21 * param_2 + local_18 + fVar14 * fVar9 * fVar13) -
               fVar2 * fVar9 * fVar7;
    local_78 = (fVar9 * fVar11 * param_2 + local_78 + fVar14 * fVar9 * fVar19) -
               fVar2 * fVar9 * fVar10;
  }
  fVar2 = 0.05;
  if (param_8 != 0) {
    fVar2 = 0.01;
  }
  fVar2 = fVar2 * DAT_04c4bac4;
  fVar3 = -fVar1;
  if (param_8 != 1) {
    fVar3 = fVar1;
  }
  fVar1 = -(fVar15 * fVar2);
  if (param_8 != 1) {
    fVar1 = fVar15 * fVar2;
  }
  fVar3 = -(fVar2 * fVar3) * 0.5;
  fVar2 = cosf(fVar3);
  fVar3 = sinf(fVar3);
  fVar12 = fVar12 * fVar3;
  fVar13 = fVar13 * fVar3;
  fVar19 = fVar19 * fVar3;
  fVar3 = cosf(fVar1 * 0.5);
  fVar1 = sinf(fVar1 * 0.5);
  fVar20 = fVar20 * fVar1;
  fVar21 = fVar21 * fVar1;
  fVar11 = fVar11 * fVar1;
  fVar4 = ((-(fVar20 * fVar12) + fVar2 * fVar3) - fVar13 * fVar21) - fVar19 * fVar11;
  fVar6 = (fVar2 * fVar20 + fVar12 * fVar3 + fVar19 * fVar21) - fVar13 * fVar11;
  fVar7 = -(fVar20 * fVar19) + fVar13 * fVar3 + fVar2 * fVar21 + fVar12 * fVar11;
  fVar1 = ((fVar13 * fVar20 + fVar19 * fVar3) - fVar12 * fVar21) + fVar2 * fVar11;
  fVar2 = -(fVar1 * local_a0) + local_9c * fVar7 + local_98 * fVar4;
  fVar3 = (local_98 * fVar1 - local_9c * fVar6) + local_a0 * fVar4;
  fVar8 = -(fVar7 * local_98) + local_a0 * fVar6 + local_9c * fVar4;
  fVar9 = (-(fVar7 * local_a0) - local_98 * fVar6) - local_9c * fVar1;
  fVar10 = (-(fVar1 * fVar3) + fVar4 * fVar2 + fVar7 * fVar8) - fVar6 * fVar9;
  fVar11 = ((fVar4 * fVar3 + fVar1 * fVar2) - fVar6 * fVar8) - fVar7 * fVar9;
  fVar2 = ((fVar6 * fVar3 - fVar7 * fVar2) + fVar4 * fVar8) - fVar1 * fVar9;
  fVar1 = SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar2 * fVar2);
  if (0.0 < fVar1) {
    fVar1 = 1.0 / fVar1;
    fVar10 = fVar10 * fVar1;
    fVar11 = fVar11 * fVar1;
    fVar2 = fVar2 * fVar1;
  }
  if (param_8 == 1) {
    local_14 = local_84 + fVar5 * fVar10;
    local_18 = local_74 + fVar5 * fVar11;
    local_78 = local_7c + fVar5 * fVar2;
  }
  else if (param_8 == 0) {
    local_84 = local_14 - fVar5 * fVar10;
    local_74 = local_18 - fVar5 * fVar11;
    local_7c = local_78 - fVar5 * fVar2;
  }
  fVar1 = cosf(param_3 * -0.5);
  fVar3 = sinf(param_3 * -0.5);
  fVar4 = fVar10 * fVar3;
  fVar5 = fVar11 * fVar3;
  fVar3 = fVar2 * fVar3;
  fVar6 = -(fVar3 * fVar18) + fVar17 * fVar5 + fVar16 * fVar1;
  fVar7 = (fVar16 * fVar3 - fVar17 * fVar4) + fVar18 * fVar1;
  fVar8 = -(fVar5 * fVar16) + fVar18 * fVar4 + fVar17 * fVar1;
  fVar9 = (-(fVar5 * fVar18) - fVar16 * fVar4) - fVar17 * fVar3;
  fVar14 = 1.0;
  if (-(((-(fVar3 * fVar7) + fVar1 * fVar6 + fVar5 * fVar8) - fVar4 * fVar9) * fVar2) +
      fVar10 * (((fVar4 * fVar7 - fVar5 * fVar6) + fVar1 * fVar8) - fVar3 * fVar9) < 0.0) {
    fVar14 = -1.0;
  }
  fVar1 = cosf(param_3 * 0.5);
  fVar3 = sinf(param_3 * 0.5);
  fVar6 = fVar10 * fVar3;
  fVar7 = fVar11 * fVar3;
  fVar3 = fVar2 * fVar3;
  fVar4 = -(fVar2 * fVar14) + fVar11 * 0.0;
  fVar5 = fVar10 * -0.0 + fVar2 * 0.0;
  fVar8 = fVar11 * -0.0 + fVar14 * fVar10;
  fVar9 = -(fVar8 * fVar11) + fVar2 * fVar5;
  fVar8 = -(fVar4 * fVar2) + fVar10 * fVar8;
  fVar2 = -(fVar5 * fVar10) + fVar11 * fVar4;
  fVar10 = -(fVar3 * fVar8) + fVar2 * fVar7 + fVar9 * fVar1;
  fVar11 = (fVar3 * fVar9 - fVar2 * fVar6) + fVar8 * fVar1;
  fVar14 = -(fVar7 * fVar9) + fVar8 * fVar6 + fVar2 * fVar1;
  fVar5 = (-(fVar7 * fVar8) - fVar9 * fVar6) - fVar2 * fVar3;
  fVar2 = (-(fVar3 * fVar11) + fVar1 * fVar10 + fVar7 * fVar14) - fVar6 * fVar5;
  fVar4 = ((fVar1 * fVar11 + fVar3 * fVar10) - fVar6 * fVar14) - fVar7 * fVar5;
  fVar1 = ((fVar6 * fVar11 - fVar7 * fVar10) + fVar1 * fVar14) - fVar3 * fVar5;
  *(float *)(param_4 + 0x50) = fVar2;
  *(float *)(param_4 + 0x54) = fVar4;
  *(float *)(param_4 + 0x58) = fVar1;
  fVar3 = SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar1 * fVar1);
  if (0.0 < fVar3) {
    fVar3 = 1.0 / fVar3;
    *(float *)(param_4 + 0x50) = fVar2 * fVar3;
    *(float *)(param_4 + 0x54) = fVar4 * fVar3;
    *(float *)(param_4 + 0x58) = fVar1 * fVar3;
  }
  *(float *)(param_4 + 0x38) = local_84;
  *(float *)(param_4 + 0x3c) = local_74;
  *(float *)(param_4 + 0x40) = local_7c;
  *(float *)(param_4 + 0x44) = local_14;
  *(float *)(param_4 + 0x48) = local_18;
  *(float *)(param_4 + 0x4c) = local_78;
  return;
}

