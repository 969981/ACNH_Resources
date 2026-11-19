
void FUN_03a150c8(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
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
  float fVar22;
  float fVar23;
  float fVar24;
  undefined **local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c0;
  float local_bc;
  float fStack_b8;
  float local_b4;
  undefined8 local_b0;
  float local_a8;
  undefined1 auStack_9c [8];
  float local_94;
  float fStack_90;
  float local_8c;
  float local_88;
  float fStack_84;
  float local_80;
  undefined8 local_7c;
  float local_74;
  
  (**(code **)(*param_1 + 0xd8))(param_1,param_1[0x22],auStack_9c);
  local_bc = local_94 + local_88;
  fStack_b8 = fStack_90 + fStack_84;
  local_e8 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
  uStack_e0 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
  local_b4 = local_8c + local_80;
  local_d8 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x20);
  uStack_d0 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x28);
  local_f8 = *(undefined8 *)PTR_DAT_04bb2f80;
  uStack_f0 = *(undefined8 *)(PTR_DAT_04bb2f80 + 8);
  local_100 = &PTR_FUN_04b65548;
  local_c0 = local_8c;
  local_b0 = local_7c;
  uVar1 = local_b0;
  local_a8 = local_74;
  local_b0._0_4_ = (float)local_7c;
  local_b0._4_4_ = (float)((ulong)local_7c >> 0x20);
  fVar10 = SQRT(local_b0._4_4_ * local_b0._4_4_ + (float)local_b0 * (float)local_b0 +
                local_74 * local_74);
  if (0.0 < fVar10) {
    fVar10 = 1.0 / fVar10;
    local_b0 = CONCAT44(local_b0._4_4_ * fVar10,(float)local_b0 * fVar10);
    local_a8 = local_74 * fVar10;
    uVar1 = local_b0;
  }
  local_b0 = uVar1;
  FUN_038e4634(&local_100,&local_f8);
  param_2[1] = uStack_f0;
  *param_2 = local_f8;
  param_2[3] = uStack_e0;
  param_2[2] = local_e8;
  param_2[5] = uStack_d0;
  param_2[4] = local_d8;
  if ((char)param_1[0x39] != '\0') {
    fVar10 = sinf(*(float *)(param_1 + 0x42));
    fVar2 = sinf(*(float *)((long)param_1 + 0x214));
    fVar3 = sinf(*(float *)(param_1 + 0x43));
    fVar4 = cosf(*(float *)(param_1 + 0x42));
    fVar5 = cosf(*(float *)((long)param_1 + 0x214));
    fVar6 = cosf(*(float *)(param_1 + 0x43));
    fVar13 = fVar10 * fVar5;
    fVar12 = fVar3 * fVar5;
    fVar11 = fVar10 * fVar2 * fVar6 - fVar3 * fVar4;
    fVar8 = fVar4 * fVar6 + fVar3 * fVar10 * fVar2;
    fVar7 = fVar5 * fVar6;
    fVar9 = -(fVar10 * fVar6) + fVar2 * fVar3 * fVar4;
    fVar10 = fVar10 * fVar3 + fVar2 * fVar4 * fVar6;
    fVar2 = -fVar2;
    fVar4 = fVar4 * fVar5;
    fVar23 = *(float *)(param_1 + 0x3e);
    fVar15 = (float)*param_2;
    fVar16 = (float)((ulong)*param_2 >> 0x20);
    fVar17 = (float)param_2[1];
    fVar18 = (float)((ulong)param_2[1] >> 0x20);
    fVar19 = (float)param_2[2];
    fVar20 = (float)((ulong)param_2[2] >> 0x20);
    fVar21 = (float)param_2[3];
    fVar22 = (float)((ulong)param_2[3] >> 0x20);
    fVar24 = *(float *)((long)param_1 + 0x1ec);
    fVar3 = (float)param_2[4];
    fVar5 = (float)((ulong)param_2[4] >> 0x20);
    fVar6 = (float)param_2[5];
    fVar14 = (float)((ulong)param_2[5] >> 0x20);
    param_2[1] = CONCAT44(*(float *)(param_1 + 0x3d) +
                          fVar18 * fVar7 + fVar22 * fVar11 + fVar14 * fVar10,
                          fVar17 * fVar7 + fVar21 * fVar11 + fVar6 * fVar10 + 0.0);
    *param_2 = CONCAT44(fVar16 * fVar7 + fVar20 * fVar11 + fVar5 * fVar10 + 0.0,
                        fVar15 * fVar7 + fVar19 * fVar11 + fVar3 * fVar10 + 0.0);
    param_2[3] = CONCAT44(fVar24 + fVar18 * fVar12 + fVar22 * fVar8 + fVar14 * fVar9,
                          fVar17 * fVar12 + fVar21 * fVar8 + fVar6 * fVar9 + 0.0);
    param_2[2] = CONCAT44(fVar16 * fVar12 + fVar20 * fVar8 + fVar5 * fVar9 + 0.0,
                          fVar15 * fVar12 + fVar19 * fVar8 + fVar3 * fVar9 + 0.0);
    param_2[5] = CONCAT44(fVar23 + fVar18 * fVar2 + fVar22 * fVar13 + fVar14 * fVar4,
                          fVar17 * fVar2 + fVar21 * fVar13 + fVar6 * fVar4 + 0.0);
    param_2[4] = CONCAT44(fVar16 * fVar2 + fVar20 * fVar13 + fVar5 * fVar4 + 0.0,
                          fVar15 * fVar2 + fVar19 * fVar13 + fVar3 * fVar4 + 0.0);
  }
  return;
}

