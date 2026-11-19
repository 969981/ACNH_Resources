
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03943130(float param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 uint param_9)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
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
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_17c;
  undefined8 local_174;
  float local_16c;
  float fStack_168;
  float local_164;
  float local_160;
  float fStack_15c;
  float local_158;
  undefined1 auStack_154 [28];
  uint local_138;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  float local_a8;
  
  if (*(int *)(*(long *)PTR_DAT_04bbdd18 + 8) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = **(undefined8 **)(*(long *)PTR_DAT_04bbdd18 + 0x10);
  }
  lVar7 = *(long *)PTR_DAT_04bbd7e0;
  lVar5 = *(long *)PTR_DAT_04bbd7e8;
  uVar6 = *param_3;
  local_a8 = *(float *)(param_3 + 1);
  local_b0._0_4_ = (float)uVar6;
  local_b0._4_4_ = (float)((ulong)uVar6 >> 0x20);
  fVar13 = SQRT(local_b0._4_4_ * local_b0._4_4_ + (float)local_b0 * (float)local_b0 +
                local_a8 * local_a8);
  fVar35 = local_b0._4_4_;
  fVar36 = (float)local_b0;
  if (0.0 < fVar13) {
    fVar13 = 1.0 / fVar13;
    fVar36 = (float)local_b0 * fVar13;
    fVar35 = local_b0._4_4_ * fVar13;
    local_a8 = local_a8 * fVar13;
    local_b0 = CONCAT44(fVar35,fVar36);
    uVar6 = local_b0;
  }
  local_b0 = uVar6;
  fVar13 = local_a8;
  fVar14 = param_1 * 0.1;
  FUN_038e4cec(auStack_154);
  local_138 = local_138 & 0xfffffff0 | 7;
  FUN_038e4d90(auStack_154,param_2);
  FUN_039424e0(param_2,param_7,param_8);
  fVar37 = -fVar13;
  local_160 = -(fVar36 * fVar14);
  fStack_15c = -(fVar35 * fVar14);
  local_16c = fVar36 * param_1 * -0.5;
  fStack_168 = fVar35 * param_1 * -0.5;
  local_158 = -(fVar13 * fVar14);
  local_164 = fVar13 * param_1 * -0.5;
  FUN_039427b0(0x3f800000,param_2,&local_160,&local_16c,param_4);
  fVar15 = fVar37;
  if (0.0 <= fVar13) {
    fVar15 = fVar13;
  }
  if (0.9999999 <= fVar15) {
    fVar15 = fVar35 * -0.0 + fVar13 * 0.0;
    fVar21 = fVar37 + fVar36 * 0.0;
    fVar27 = fVar35 + fVar36 * -0.0;
    fVar25 = SQRT(fVar21 * fVar21 + fVar15 * fVar15 + fVar27 * fVar27);
    if (0.0 < fVar25) {
      fVar25 = 1.0 / fVar25;
      fVar15 = fVar15 * fVar25;
      fVar21 = fVar21 * fVar25;
      fVar27 = fVar27 * fVar25;
    }
    fVar37 = fVar21 * fVar37 + fVar27 * fVar35;
    fVar25 = fVar27 * -fVar36 + fVar15 * fVar13;
    fVar28 = fVar15 * -fVar35 + fVar21 * fVar36;
    fVar33 = SQRT(fVar25 * fVar25 + fVar37 * fVar37 + fVar28 * fVar28);
    if (0.0 < fVar33) {
      fVar33 = 1.0 / fVar33;
      fVar37 = fVar37 * fVar33;
      fVar25 = fVar25 * fVar33;
      fVar28 = fVar28 * fVar33;
    }
  }
  else {
    fVar25 = -fVar36 + fVar13 * 0.0;
    fVar28 = fVar35 * -0.0 + fVar36 * 0.0;
    fVar37 = fVar35 + fVar13 * -0.0;
    fVar15 = SQRT(fVar25 * fVar25 + fVar37 * fVar37 + fVar28 * fVar28);
    if (0.0 < fVar15) {
      fVar15 = 1.0 / fVar15;
      fVar37 = fVar37 * fVar15;
      fVar25 = fVar25 * fVar15;
      fVar28 = fVar28 * fVar15;
    }
    fVar15 = -(fVar28 * fVar35) + fVar13 * fVar25;
    fVar21 = -(fVar37 * fVar13) + fVar36 * fVar28;
    fVar27 = -(fVar25 * fVar36) + fVar35 * fVar37;
    fVar33 = SQRT(fVar21 * fVar21 + fVar15 * fVar15 + fVar27 * fVar27);
    if (0.0 < fVar33) {
      fVar33 = 1.0 / fVar33;
      fVar15 = fVar15 * fVar33;
      fVar21 = fVar21 * fVar33;
      fVar27 = fVar27 * fVar33;
    }
  }
  fVar34 = -(param_1 * 0.1) - fVar14;
  fVar22 = (float)_DAT_04102200;
  fVar23 = (float)((ulong)_DAT_04102200 >> 0x20);
  fVar24 = (float)_UNK_04102208;
  fVar26 = (float)((ulong)_UNK_04102208 >> 0x20);
  param_1 = param_1 * 0.2;
  fVar29 = (float)_DAT_041023d0;
  fVar30 = (float)((ulong)_DAT_041023d0 >> 0x20);
  fVar31 = (float)_UNK_041023d8;
  fVar32 = (float)((ulong)_UNK_041023d8 >> 0x20);
  fVar33 = fVar22 * fVar37 + fVar36 * 0.0 + fVar29 * fVar15 + 0.0;
  fVar16 = fVar23 * fVar37 + fVar36 * 1.0 + fVar30 * fVar15 + 0.0;
  fVar17 = fVar24 * fVar37 + fVar36 * 0.0 + fVar31 * fVar15 + 0.0;
  fVar18 = fVar22 * fVar25 + fVar35 * 0.0 + fVar29 * fVar21 + 0.0;
  fVar19 = fVar23 * fVar25 + fVar35 * 1.0 + fVar30 * fVar21 + 0.0;
  fVar20 = fVar24 * fVar25 + fVar35 * 0.0 + fVar31 * fVar21 + 0.0;
  fVar22 = fVar22 * fVar28 + fVar13 * 0.0 + fVar29 * fVar27 + 0.0;
  fVar23 = fVar23 * fVar28 + fVar13 * 1.0 + fVar30 * fVar27 + 0.0;
  fVar24 = fVar24 * fVar28 + fVar13 * 0.0 + fVar31 * fVar27 + 0.0;
  local_e0 = fVar14 * fVar33 + fVar16 * 0.0 + fVar17 * 0.0 + 0.0;
  fStack_dc = fVar33 * 0.0 + param_1 * fVar16 + fVar17 * 0.0 + 0.0;
  fStack_d8 = fVar33 * 0.0 + fVar16 * 0.0 + fVar14 * fVar17 + 0.0;
  fStack_d4 = fVar26 * fVar37 + fVar34 * fVar36 + fVar32 * fVar15 + 0.0 +
              fVar33 * 0.0 + fVar16 * 0.0 + fVar17 * 0.0;
  fStack_d0 = fVar14 * fVar18 + fVar19 * 0.0 + fVar20 * 0.0 + 0.0;
  local_cc = fVar18 * 0.0 + param_1 * fVar19 + fVar20 * 0.0 + 0.0;
  local_c8 = CONCAT44(fVar26 * fVar25 + fVar34 * fVar35 + fVar32 * fVar21 + 0.0 +
                      fVar18 * 0.0 + fVar19 * 0.0 + fVar20 * 0.0,
                      fVar18 * 0.0 + fVar19 * 0.0 + fVar14 * fVar20 + 0.0);
  local_c0 = CONCAT44(fVar22 * 0.0 + param_1 * fVar23 + fVar24 * 0.0 + 0.0,
                      fVar14 * fVar22 + fVar23 * 0.0 + fVar24 * 0.0 + 0.0);
  uStack_b8 = CONCAT44(fVar26 * fVar28 + fVar34 * fVar13 + fVar32 * fVar27 + 0.0 +
                       fVar22 * 0.0 + fVar23 * 0.0 + fVar24 * 0.0,
                       fVar22 * 0.0 + fVar23 * 0.0 + fVar14 * fVar24 + 0.0);
  FUN_03907810(uVar10,param_2);
  uVar10 = *(undefined8 *)(param_2 + 0xb8);
  (**(code **)PTR_DAT_04bcf1a8)(uVar10,0x10,lVar7 + 0x4e4);
  (**(code **)PTR_DAT_04bcf1b0)(uVar10,0x10,lVar7 + 0x528);
  puVar4 = PTR_DAT_04bcf1e8;
  puVar3 = PTR_DAT_04bbd560;
  iVar1 = *(int *)(lVar7 + 0x4d0);
  if (iVar1 != 0) {
    lVar8 = *(long *)(lVar7 + 0x4d8);
    uVar11 = 0;
    uVar9 = 0;
    do {
      lVar12 = *(long *)(lVar8 + (-(uVar9 >> 0x1f) & 0xfffffff800000000 | uVar9 << 3));
      if (lVar12 != 0) {
        uVar6 = (**(code **)puVar3)(lVar12 + 8);
        (**(code **)puVar4)(uVar10,uVar11 & 0xffffffff,uVar6,*(undefined4 *)(lVar12 + 0x118));
      }
      uVar11 = uVar9 + 1;
      uVar9 = uVar11 & 0xffffffff;
    } while (iVar1 != (int)uVar11);
  }
  local_174 = 0x3f80000000000000;
  local_17c = 0;
  local_188 = 0xbf800000bf800000;
  local_180 = 0xbf800000;
  FUN_03942970(param_2,&local_e0,param_7,param_8,&local_17c,param_4,&local_188);
  iVar1 = *(int *)(lVar5 + 0x2b38);
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(lVar5 + 0x2b1c);
    uVar6 = *(undefined8 *)(param_2 + 0xb8);
    uVar10 = (**(code **)puVar3)(lVar5 + 0x2b40);
    (**(code **)PTR_DAT_04bbd568)(uVar6,uVar2,*(undefined4 *)(lVar5 + 0x2b18),iVar1,uVar10);
  }
  if ((param_9 & 1) != 0) {
    uVar10 = *(undefined8 *)(param_2 + 0xb8);
    (**(code **)PTR_DAT_04bcf1a8)(uVar10,0x10,lVar7 + 0xc64);
    (**(code **)PTR_DAT_04bcf1b0)(uVar10,0x10,lVar7 + 0xca8);
    puVar4 = PTR_DAT_04bcf1e8;
    iVar1 = *(int *)(lVar7 + 0xc50);
    if (iVar1 != 0) {
      lVar7 = *(long *)(lVar7 + 0xc58);
      uVar11 = 0;
      uVar9 = 0;
      do {
        lVar8 = *(long *)(lVar7 + (-(uVar9 >> 0x1f) & 0xfffffff800000000 | uVar9 << 3));
        if (lVar8 != 0) {
          uVar6 = (**(code **)puVar3)(lVar8 + 8);
          (**(code **)puVar4)(uVar10,uVar11 & 0xffffffff,uVar6,*(undefined4 *)(lVar8 + 0x118));
        }
        uVar11 = uVar9 + 1;
        uVar9 = uVar11 & 0xffffffff;
      } while (iVar1 != (int)uVar11);
    }
    fStack_dc = 0.0;
    fStack_d8 = 0.0;
    fStack_d4 = 0.0;
    fStack_d0 = 0.0;
    local_c8 = 0;
    local_c0 = 0;
    local_17c = 0;
    local_174 = 0x3f80000000000000;
    local_e0 = fVar14 * 0.95 + fVar14 * 0.95;
    uStack_b8 = (ulong)(uint)local_e0;
    local_cc = local_e0;
    FUN_03942970(param_2,&local_e0,param_7,param_8,&local_17c,param_4,&local_b0);
    iVar1 = *(int *)(lVar5 + 0x1570);
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(lVar5 + 0x1554);
      uVar6 = *(undefined8 *)(param_2 + 0xb8);
      uVar10 = (**(code **)puVar3)(lVar5 + 0x1578);
      (**(code **)PTR_DAT_04bbd568)(uVar6,uVar2,*(undefined4 *)(lVar5 + 0x1550),iVar1,uVar10);
    }
  }
  return;
}

