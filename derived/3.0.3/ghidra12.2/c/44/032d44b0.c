
void FUN_032d44b0(undefined8 param_1,long param_2,ulong param_3,float *param_4)

{
  float fVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined *local_1b8;
  float local_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  uint local_1a0;
  undefined8 local_19c;
  undefined *local_190;
  undefined8 local_188;
  undefined8 local_180;
  uint local_178;
  undefined8 local_174;
  undefined *local_168;
  undefined1 local_160 [8];
  undefined8 local_158;
  undefined8 local_b0;
  undefined **local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar2 = PTR_DAT_04bd0d18;
  lVar6 = *(long *)(**(long **)(*(long *)PTR_DAT_04bbdb78 + 0x18) + 0x680);
  fVar11 = *(float *)(lVar6 + 8);
  fVar13 = fVar11 * 0.5;
  fVar12 = *(float *)(lVar6 + 0xc) * 0.5;
  fVar7 = param_4[1] + fVar12;
  fVar12 = param_4[3] + fVar12;
  fVar9 = param_4[2] + fVar13;
  fVar13 = *param_4 + fVar13;
  fVar11 = fVar11 + 0.0;
  fVar14 = *(float *)(lVar6 + 0xc) + 0.0;
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  if (fVar11 <= fVar9) {
    fVar9 = fVar11;
  }
  if (fVar14 <= fVar12) {
    fVar12 = fVar14;
  }
  bVar3 = false;
  bVar4 = false;
  bVar5 = false;
  if (fVar13 <= fVar9) {
    bVar3 = false;
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar7) && !NAN(fVar12)) {
      bVar3 = fVar7 < fVar12;
      bVar4 = fVar7 == fVar12;
      bVar5 = false;
    }
  }
  if (!bVar4 && bVar3 == bVar5) {
    fVar12 = 0.0;
    fVar9 = 0.0;
    fVar7 = 0.0;
    fVar13 = 0.0;
  }
  local_70 = *(undefined8 *)(lVar6 + 0x10);
  uStack_68 = *(undefined8 *)(lVar6 + 0x18);
  local_78 = *(undefined8 *)(lVar6 + 8);
  local_80 = &PTR_LAB_04b1ba78;
  local_168 = PTR_DAT_04bd0d18 + 0x10;
  FUN_00347d68(local_160);
  local_160[0] = 2;
  local_180 = 0xff7fffffff7fffff;
  local_1a0 = *(uint *)PTR_DAT_04bd0ea8;
  local_b0 = *(undefined8 *)(param_2 + 0xb0);
  local_158 = *(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x48);
  local_1b8 = PTR_DAT_04bd0f08 + 0x10;
  local_188 = 0x7f7fffff7f7fffff;
  local_174 = 0x3f80000000000000;
  if (local_1a0 < 6) {
    if ((1 << (ulong)(local_1a0 & 0x1f) & 0x39U) == 0) {
      fVar11 = local_78._4_4_;
      fVar14 = (float)local_78;
    }
    else {
      fVar11 = (float)local_78;
      fVar14 = local_78._4_4_;
    }
    fVar10 = fVar11;
    fVar1 = 0.0;
    if (fVar11 <= 0.0) {
      fVar10 = 0.0;
      fVar1 = fVar11;
    }
    fVar8 = fVar14;
    fVar11 = 0.0;
    if (fVar14 <= 0.0) {
      fVar8 = 0.0;
      fVar11 = fVar14;
    }
    local_188 = CONCAT44(fVar11,fVar1);
    local_180 = CONCAT44(fVar8,fVar10);
  }
  local_19c = 0x3f80000000000000;
  fVar9 = fVar13 + (fVar9 - fVar13);
  fVar12 = fVar7 + (fVar12 - fVar7);
  local_1a8 = fVar9;
  local_1b0 = fVar13;
  if (fVar9 <= fVar13) {
    local_1a8 = fVar13;
    local_1b0 = fVar9;
  }
  fStack_1a4 = fVar12;
  fStack_1ac = fVar7;
  if (fVar12 <= fVar7) {
    fStack_1a4 = fVar7;
    fStack_1ac = fVar12;
  }
  local_190 = local_1b8;
  local_178 = local_1a0;
  if ((param_3 & 1) == 0) {
    FUN_038e77e4(&local_190,&local_168,&local_80);
  }
  else {
    FUN_038e7afc();
    FUN_038e7c94(&local_1b8,&local_168,&local_80);
  }
  local_168 = puVar2 + 0x10;
  local_160[0] = 0;
  FUN_00347da4(local_160);
  return;
}

