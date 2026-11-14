
undefined8 * FUN_0165d15c(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float *pfVar5;
  undefined8 *puVar6;
  float *pfVar7;
  undefined4 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined **local_180;
  undefined1 local_178;
  undefined1 local_177;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  float fStack_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined **local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  float local_7c;
  float fStack_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  
  pfVar5 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x10) + 0x5a8) + 0xf0))
                              (*(long *)(param_1 + 0x10) + 0x5a8);
  fVar9 = *pfVar5;
  fVar10 = pfVar5[1];
  fVar11 = pfVar5[2];
  fVar12 = SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar11 * fVar11);
  if (0.0 < fVar12) {
    fVar13 = 1.0 / fVar12;
    fVar9 = fVar9 * fVar13;
    fVar10 = fVar10 * fVar13;
    fVar11 = fVar11 * fVar13;
    *pfVar5 = fVar9;
    pfVar5[1] = fVar10;
    pfVar5[2] = fVar11;
  }
  fVar13 = -1.0;
  if (fVar12 <= 0.0) {
    fVar9 = 0.0;
    fVar10 = -1.0;
    fVar11 = 0.0;
    pfVar5[0] = 0.0;
    pfVar5[1] = -1.0;
    pfVar5[2] = 0.0;
  }
  bVar2 = false;
  bVar3 = true;
  if (-1.1920929e-07 <= fVar11) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar11)) {
      bVar2 = fVar11 == 1.1920929e-07;
      bVar3 = 1.1920929e-07 <= fVar11;
    }
  }
  bVar1 = true;
  bVar4 = false;
  if (!bVar3 || bVar2) {
    bVar1 = false;
    bVar4 = true;
    if (!NAN(fVar9)) {
      bVar1 = fVar9 < -1.1920929e-07;
      bVar4 = false;
    }
  }
  bVar2 = false;
  bVar3 = true;
  if (bVar1 == bVar4) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar9)) {
      bVar2 = fVar9 == 1.1920929e-07;
      bVar3 = 1.1920929e-07 <= fVar9;
    }
  }
  fVar12 = 0.0;
  if (bVar3 && !bVar2) {
    fVar13 = 0.0;
    fVar12 = 1.0;
  }
  fVar14 = -(fVar11 * fVar12) + fVar13 * fVar10;
  fVar13 = -(fVar9 * fVar13) + fVar11 * 0.0;
  fVar12 = fVar10 * -0.0 + fVar12 * fVar9;
  fVar16 = -(fVar11 * fVar13) + fVar12 * fVar10;
  fVar11 = -(fVar9 * fVar12) + fVar14 * fVar11;
  fVar10 = -(fVar10 * fVar14) + fVar13 * fVar9;
  puVar6 = (undefined8 *)
           (**(code **)(*(long *)(*(long *)(param_1 + 0x10) + 0x280) + 0xf0))
                     (*(long *)(param_1 + 0x10) + 0x280);
  pfVar7 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x10) + 0x280) + 0xf0))
                              (*(long *)(param_1 + 0x10) + 0x280);
  fStack_78 = pfVar7[1] + pfVar5[1];
  local_7c = *pfVar7 + *pfVar5;
  local_a8 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
  uStack_a0 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
  local_98 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x20);
  uStack_90 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x28);
  local_74 = pfVar7[2] + pfVar5[2];
  local_b8 = *(undefined8 *)PTR_DAT_04bb2f80;
  uStack_b0 = *(undefined8 *)(PTR_DAT_04bb2f80 + 8);
  local_c0 = &PTR_FUN_04b65548;
  local_88 = *puVar6;
  local_80 = *(undefined4 *)(puVar6 + 1);
  fVar9 = SQRT(fVar11 * fVar11 + fVar16 * fVar16 + fVar10 * fVar10);
  local_70 = fVar16;
  local_6c = fVar11;
  local_68 = fVar10;
  if (0.0 < fVar9) {
    fVar9 = 1.0 / fVar9;
    local_70 = fVar16 * fVar9;
    local_6c = fVar11 * fVar9;
    local_68 = fVar10 * fVar9;
  }
  FUN_038e4634(&local_c0,&local_b8);
  puVar8 = (undefined4 *)
           (**(code **)(*(long *)(*(long *)(param_1 + 0x10) + 0x5e0) + 0xf0))
                     (*(long *)(param_1 + 0x10) + 0x5e0);
  uVar15 = *puVar8;
  pfVar5 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x10) + 0x610) + 0xf0))
                              (*(long *)(param_1 + 0x10) + 0x610);
  fStack_e0 = *pfVar5;
  local_e8 = 0x3c23d70a;
  local_d0 = 0x3f800000;
  local_f0 = *(undefined4 *)PTR_DAT_04bd0eb0;
  local_177 = 1;
  local_cc = 0;
  uStack_ec = DAT_05ae77d4;
  local_180 = &PTR_FUN_04b65608;
  local_f4 = DAT_05ae77d0;
  fVar9 = fStack_e0 * 0.5;
  local_e4 = uVar15;
  local_dc = sinf(fVar9);
  local_d8 = cosf(fVar9);
  local_d4 = tanf(fVar9);
  local_178 = 1;
  puVar6 = (undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = uStack_b0;
  *puVar6 = local_b8;
  *(undefined8 *)(param_1 + 0x60) = uStack_a0;
  *(undefined8 *)(param_1 + 0x58) = local_a8;
  *(undefined8 *)(param_1 + 0x70) = uStack_90;
  *(undefined8 *)(param_1 + 0x68) = local_98;
  FUN_007535b4(param_1 + 0x78,&local_b8);
  FUN_03983a20(puVar6,&local_180);
  return puVar6;
}

