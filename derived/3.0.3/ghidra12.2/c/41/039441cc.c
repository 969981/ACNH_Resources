
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_039441cc(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,undefined8 param_7,float *param_8,float *param_9,undefined8 *param_10
                 ,undefined8 param_11,float *param_12,uint param_13,undefined8 param_14,
                 undefined8 param_15)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
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
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float local_13c;
  float fStack_138;
  float local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  float local_b8;
  float local_b4;
  float fStack_b0;
  float local_ac;
  undefined8 local_a8;
  float local_a0;
  
  local_b4 = *param_8 + *param_9;
  fStack_b0 = param_8[1] + param_9[1];
  local_e0 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
  local_d8 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
  local_d0 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x20);
  local_c8 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x28);
  local_ac = param_8[2] + param_9[2];
  local_f0 = *(undefined8 *)PTR_DAT_04bb2f80;
  local_e8 = *(undefined8 *)(PTR_DAT_04bb2f80 + 8);
  local_f8 = &PTR_FUN_04b65548;
  local_b8 = param_8[2];
  uStack_c0 = *(undefined8 *)param_8;
  uVar10 = *param_10;
  local_a0 = *(float *)(param_10 + 1);
  local_a8._0_4_ = (float)uVar10;
  local_a8._4_4_ = (float)((ulong)uVar10 >> 0x20);
  fVar26 = SQRT(local_a8._4_4_ * local_a8._4_4_ + (float)local_a8 * (float)local_a8 +
                local_a0 * local_a0);
  if (0.0 < fVar26) {
    fVar26 = 1.0 / fVar26;
    local_a8 = CONCAT44(local_a8._4_4_ * fVar26,(float)local_a8 * fVar26);
    local_a0 = local_a0 * fVar26;
    uVar10 = local_a8;
  }
  local_a8 = uVar10;
  FUN_038e4634(&local_f8,&local_f0);
  local_120 = local_e0;
  uStack_118 = local_d8;
  local_110 = local_d0;
  uStack_108 = local_c8;
  local_130 = local_f0;
  uStack_128 = local_e8;
  FUN_007535b4(&local_130,&local_130);
  uVar9 = uStack_108;
  uVar8 = local_110;
  uVar7 = uStack_118;
  uVar6 = local_120;
  uVar5 = uStack_128;
  uVar10 = local_130;
  fVar26 = tanf(param_1 * 0.5);
  if ((param_13 & 1) != 0) {
    param_2 = param_6 / param_5;
    fVar26 = param_5 / param_4;
  }
  fVar26 = fVar26 + fVar26;
  fVar11 = (float)uVar10;
  fVar14 = fVar11 * 0.0;
  fVar12 = (float)((ulong)uVar10 >> 0x20);
  fVar18 = fVar12 * 0.0;
  fVar13 = (float)uVar5;
  fVar21 = fVar13 * 0.0;
  fVar55 = (float)((ulong)uVar5 >> 0x20);
  fVar25 = fVar55 * 0.0;
  fVar36 = (float)uVar6;
  fVar17 = (float)((ulong)uVar6 >> 0x20);
  fVar24 = (float)uVar7;
  fVar56 = (float)((ulong)uVar7 >> 0x20);
  fVar29 = (float)uVar8;
  fVar32 = (float)((ulong)uVar8 >> 0x20);
  fVar35 = (float)uVar9;
  fVar57 = (float)((ulong)uVar9 >> 0x20);
  fVar15 = fVar29 + fVar14 + fVar36 * 0.0 + 0.0;
  fVar19 = fVar32 + fVar18 + fVar17 * 0.0 + 0.0;
  fVar22 = fVar35 + fVar21 + fVar24 * 0.0 + 0.0;
  fVar27 = fVar36 + fVar14 + fVar29 * 0.0 + 0.0;
  fVar30 = fVar17 + fVar18 + fVar32 * 0.0 + 0.0;
  fVar33 = fVar24 + fVar21 + fVar35 * 0.0 + 0.0;
  fVar16 = param_4 * fVar15 + fVar19 * 0.0 + fVar22 * 0.0 + 0.0;
  fVar20 = fVar15 * 0.0 + param_4 * fVar19 + fVar22 * 0.0 + 0.0;
  fVar23 = fVar15 * 0.0 + fVar19 * 0.0 + param_4 * fVar22 + 0.0;
  fVar28 = param_4 * fVar27 + fVar30 * 0.0 + fVar33 * 0.0 + 0.0;
  fVar31 = fVar27 * 0.0 + param_4 * fVar30 + fVar33 * 0.0 + 0.0;
  fVar34 = fVar27 * 0.0 + fVar30 * 0.0 + param_4 * fVar33 + 0.0;
  fVar43 = fVar11 + fVar36 * 0.0 + fVar29 * 0.0 + 0.0;
  fVar44 = fVar12 + fVar17 * 0.0 + fVar32 * 0.0 + 0.0;
  fVar45 = fVar13 + fVar24 * 0.0 + fVar35 * 0.0 + 0.0;
  param_2 = param_2 * fVar26;
  fVar36 = param_4 * fVar43 + fVar44 * 0.0 + fVar45 * 0.0 + 0.0;
  fVar38 = fVar43 * 0.0 + param_4 * fVar44 + fVar45 * 0.0 + 0.0;
  fVar40 = fVar43 * 0.0 + fVar44 * 0.0 + param_4 * fVar45 + 0.0;
  fVar18 = (float)_DAT_041023d0;
  fVar11 = (float)((ulong)_DAT_041023d0 >> 0x20);
  fVar13 = (float)_UNK_041023d8;
  fVar53 = (float)((ulong)_UNK_041023d8 >> 0x20);
  fVar14 = param_2 * fVar36 + fVar38 * 0.0 + fVar18 * fVar40 + 0.0;
  fVar21 = fVar36 * 0.0 + fVar26 * fVar38 + fVar11 * fVar40 + 0.0;
  fVar12 = fVar36 * 0.0 + fVar38 * 0.0 + fVar13 * fVar40 + 0.0;
  fVar29 = param_2 * fVar28 + fVar31 * 0.0 + fVar18 * fVar34 + 0.0;
  fVar32 = fVar28 * 0.0 + fVar26 * fVar31 + fVar11 * fVar34 + 0.0;
  fVar35 = fVar28 * 0.0 + fVar31 * 0.0 + fVar13 * fVar34 + 0.0;
  fVar17 = param_2 * fVar16 + fVar20 * 0.0 + fVar18 * fVar23 + 0.0;
  fVar26 = fVar16 * 0.0 + fVar26 * fVar20 + fVar11 * fVar23 + 0.0;
  fVar24 = fVar16 * 0.0 + fVar20 * 0.0 + fVar13 * fVar23 + 0.0;
  fVar37 = (float)_DAT_04102200;
  fVar39 = (float)((ulong)_DAT_04102200 >> 0x20);
  fVar41 = (float)_UNK_04102208;
  fVar42 = (float)((ulong)_UNK_04102208 >> 0x20);
  fVar46 = (float)_DAT_04102880;
  fVar47 = (float)((ulong)_DAT_04102880 >> 0x20);
  fVar48 = (float)_UNK_04102888;
  fVar49 = (float)((ulong)_UNK_04102888 >> 0x20);
  fVar50 = (float)_DAT_04102410;
  fVar51 = (float)((ulong)_DAT_04102410 >> 0x20);
  fVar52 = (float)DAT_04102418;
  fVar54 = (float)((ulong)DAT_04102418 >> 0x20);
  fVar18 = fVar37 * fVar14 + fVar46 * fVar21 + fVar50 * fVar12 + 0.0;
  fVar11 = fVar39 * fVar14 + fVar47 * fVar21 + fVar51 * fVar12 + 0.0;
  fVar13 = fVar41 * fVar14 + fVar48 * fVar21 + fVar52 * fVar12 + 0.0;
  fVar36 = fVar55 + fVar56 * 0.0 + fVar57 * 0.0 + 0.0 + fVar43 * 0.0 + fVar44 * 0.0 + fVar45 * 0.0 +
           fVar36 * 0.0 + fVar38 * 0.0 + fVar53 * fVar40 +
           fVar42 * fVar14 + fVar49 * fVar21 + fVar54 * fVar12;
  fVar38 = fVar37 * fVar29 + fVar46 * fVar32 + fVar50 * fVar35 + 0.0;
  fVar40 = fVar39 * fVar29 + fVar47 * fVar32 + fVar51 * fVar35 + 0.0;
  fVar43 = fVar41 * fVar29 + fVar48 * fVar32 + fVar52 * fVar35 + 0.0;
  fVar27 = fVar56 + fVar25 + fVar57 * 0.0 + 0.0 + fVar27 * 0.0 + fVar30 * 0.0 + fVar33 * 0.0 +
           fVar28 * 0.0 + fVar31 * 0.0 + fVar53 * fVar34 +
           fVar42 * fVar29 + fVar49 * fVar32 + fVar54 * fVar35;
  fVar14 = fVar37 * fVar17 + fVar46 * fVar26 + fVar50 * fVar24 + 0.0;
  fVar21 = fVar39 * fVar17 + fVar47 * fVar26 + fVar51 * fVar24 + 0.0;
  fVar12 = fVar41 * fVar17 + fVar48 * fVar26 + fVar52 * fVar24 + 0.0;
  fVar15 = fVar57 + fVar25 + fVar56 * 0.0 + 0.0 + fVar15 * 0.0 + fVar19 * 0.0 + fVar22 * 0.0 +
           fVar16 * 0.0 + fVar20 * 0.0 + fVar53 * fVar23 +
           fVar42 * fVar17 + fVar49 * fVar26 + fVar54 * fVar24;
  FUN_039424e0(param_7,param_14,param_15);
  lVar1 = (long)&local_f0 + 4;
  lVar2 = (long)&local_d8 + 4;
  lVar3 = (long)&uStack_128 + 4;
  lVar4 = (long)&local_110 + 4;
  fVar16 = 0.5 - param_3 / param_4;
  local_d0 = CONCAT44(fVar15 + fVar21 * 0.5 + fVar14 * -0.5 + fVar12 * -0.5,
                      fVar27 + fVar40 * 0.5 + fVar38 * -0.5 + fVar43 * -0.5);
  fVar26 = 0.5;
  if ((param_13 & 1) == 0) {
    fVar26 = (param_3 / param_4) * 0.5;
  }
  local_e8 = CONCAT44(fVar15 + fVar21 * -0.5 + fVar14 * 0.5 + fVar12 * -0.5,
                      fVar27 + fVar40 * -0.5 + fVar38 * 0.5 + fVar43 * -0.5);
  local_e0 = CONCAT44(fVar27 + fVar40 * 0.5 + fVar38 * 0.5 + fVar43 * -0.5,
                      fVar36 + fVar11 * 0.5 + fVar18 * 0.5 + fVar13 * -0.5);
  local_f8 = (undefined **)
             CONCAT44(fVar27 + fVar40 * -0.5 + fVar38 * -0.5 + fVar43 * -0.5,
                      fVar36 + fVar11 * -0.5 + fVar18 * -0.5 + fVar13 * -0.5);
  local_d8 = CONCAT44(fVar36 + fVar11 * 0.5 + fVar18 * -0.5 + fVar13 * -0.5,
                      fVar15 + fVar21 * 0.5 + fVar14 * 0.5 + fVar12 * -0.5);
  fVar17 = -fVar26;
  local_f0 = CONCAT44(fVar36 + fVar11 * -0.5 + fVar18 * 0.5 + fVar13 * -0.5,
                      fVar15 + fVar21 * -0.5 + fVar14 * -0.5 + fVar12 * -0.5);
  uStack_118 = CONCAT44(fVar27 + fVar26 * fVar40 + fVar26 * fVar38 + fVar16 * fVar43,
                        fVar36 + fVar26 * fVar11 + fVar26 * fVar18 + fVar16 * fVar13);
  local_110 = CONCAT44(fVar36 + (fVar26 * fVar11 - fVar26 * fVar18) + fVar16 * fVar13,
                       fVar15 + fVar26 * fVar21 + fVar26 * fVar14 + fVar16 * fVar12);
  local_130 = CONCAT44(fVar27 + (fVar17 * fVar40 - fVar26 * fVar38) + fVar16 * fVar43,
                       fVar36 + (fVar17 * fVar11 - fVar26 * fVar18) + fVar16 * fVar13);
  uStack_108 = CONCAT44(fVar15 + (fVar26 * fVar21 - fVar26 * fVar14) + fVar16 * fVar12,
                        fVar27 + (fVar26 * fVar40 - fVar26 * fVar38) + fVar16 * fVar43);
  local_120 = CONCAT44(fVar15 + fVar17 * fVar21 + fVar26 * fVar14 + fVar16 * fVar12,
                       fVar27 + fVar17 * fVar40 + fVar26 * fVar38 + fVar16 * fVar43);
  uStack_128 = CONCAT44(fVar36 + fVar17 * fVar11 + fVar26 * fVar18 + fVar16 * fVar13,
                        fVar15 + (fVar17 * fVar21 - fVar26 * fVar14) + fVar16 * fVar12);
  local_13c = *param_9 * param_4 + *param_12;
  fStack_138 = param_9[1] * param_4 + param_12[1];
  local_134 = param_9[2] * param_4 + param_12[2];
  FUN_039427b0(0x3f800000,param_7,param_12,&local_13c,param_11);
  FUN_039427b0(0x3f800000,param_7,&local_130,&local_f8,param_11);
  FUN_039427b0(0x3f800000,param_7,&local_130,lVar3,param_11);
  FUN_039427b0(0x3f800000,param_7,&local_f8,lVar1,param_11);
  FUN_039427b0(0x3f800000,param_7,lVar3,lVar1,param_11);
  FUN_039427b0(0x3f800000,param_7,lVar3,&uStack_118,param_11);
  FUN_039427b0(0x3f800000,param_7,lVar1,&local_e0,param_11);
  FUN_039427b0(0x3f800000,param_7,&uStack_118,&local_e0,param_11);
  FUN_039427b0(0x3f800000,param_7,&uStack_118,lVar4,param_11);
  FUN_039427b0(0x3f800000,param_7,&local_e0,lVar2,param_11);
  FUN_039427b0(0x3f800000,param_7,lVar4,lVar2,param_11);
  FUN_039427b0(0x3f800000,param_7,lVar4,&local_130,param_11);
  FUN_039427b0(0x3f800000,param_7,lVar2,&local_f8,param_11);
  FUN_039427b0(0x3f800000,param_7,&local_f8,&local_e0,param_11);
  FUN_039427b0(0x3f800000,param_7,lVar1,lVar2,param_11);
  return;
}

