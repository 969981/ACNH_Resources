
void FUN_03bc9140(float param_1,undefined1 *param_2,long *param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  uint *puVar10;
  uint uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint local_98;
  uint uStack_94;
  undefined8 local_90;
  undefined8 local_88;
  float local_80;
  float local_7c;
  float local_78;
  uint local_68;
  int iStack_64;
  
  uVar6 = (uint)(param_1 * 2.1474836e+09);
  local_78 = 0.0;
  local_88 = 0;
  local_80 = 0.0;
  local_7c = 0.0;
  local_90 = 0xffffffff;
  if (uVar6 < 2) {
    uVar6 = 1;
  }
  local_98 = param_4 - uVar6;
  uStack_94 = (param_4 + uVar6) - 1;
  if (uStack_94 < local_98) {
    local_90 = CONCAT44(0xffffffff,local_98);
    local_98 = 0;
  }
  puVar10 = (uint *)((long)param_3 + 0x2c);
  uVar4 = (**(code **)(*param_3 + 0x18))(param_3);
  uVar7 = 4;
  if ((uVar4 & 1) != 0) {
    uVar7 = 5;
  }
  uVar12 = 0;
  puVar9 = &local_88;
  do {
    uVar11 = (uint)uVar12;
    puVar2 = puVar10 + (uVar12 & 0xffffffff);
    if (4 < uVar11) {
      puVar2 = puVar10;
    }
    uVar3 = *puVar2;
    local_68 = uVar11;
    uVar5 = (**(code **)(*param_3 + 0x18))(param_3);
    uVar8 = 3;
    if ((uVar5 & 1) != 0) {
      uVar8 = 4;
    }
    iStack_64 = -1;
    if (uVar12 < uVar8) {
      uVar8 = (ulong)(uVar11 + 1);
      if (4 < uVar11 + 1) {
        uVar8 = 0;
      }
      iStack_64 = puVar10[uVar8] - 1;
    }
    puVar1 = (undefined8 *)((long)puVar9 + 4);
    if (uVar7 - 1 <= uVar12) {
      puVar1 = &local_88;
    }
    uVar12 = uVar12 + 1;
    local_68 = uVar3;
    FUN_03bc97c4((float)uVar6 + (float)uVar6,puVar9,puVar1,&local_68,&local_98,param_5);
    puVar9 = (undefined8 *)((long)puVar9 + 4);
  } while (uVar7 != uVar12);
  if (param_5 == 1) {
    fVar13 = SQRT((float)local_88);
    if (NAN(fVar13)) {
      fVar13 = sqrtf((float)local_88);
    }
    local_88 = CONCAT44(local_88._4_4_,fVar13);
    fVar13 = SQRT(local_88._4_4_);
    if (NAN(fVar13)) {
      fVar13 = sqrtf(local_88._4_4_);
    }
    local_88 = CONCAT44(fVar13,(float)local_88);
    fVar13 = SQRT(local_80);
    if (NAN(fVar13)) {
      fVar13 = sqrtf(local_80);
    }
    _local_80 = CONCAT44(local_7c,fVar13);
    fVar13 = SQRT(local_7c);
    if (NAN(fVar13)) {
      fVar13 = sqrtf(local_7c);
    }
    local_7c = fVar13;
    if ((uVar4 & 1) != 0) {
      fVar13 = SQRT(local_78);
      if (NAN(fVar13)) {
        fVar13 = sqrtf(local_78);
      }
      local_78 = fVar13;
    }
  }
  fVar14 = *(float *)(param_3 + 4);
  local_78 = local_78 * 255.0;
  local_88._0_4_ = (float)local_88 * 255.0;
  fVar15 = fVar14 * local_88._4_4_ * 255.0;
  fVar13 = 255.0;
  if (local_78 <= 255.0) {
    fVar13 = local_78;
  }
  fVar16 = 0.0;
  if (0.0 <= local_78) {
    fVar16 = fVar13;
  }
  fVar13 = 255.0;
  if ((float)local_88 <= 255.0) {
    fVar13 = (float)local_88;
  }
  fVar17 = 0.0;
  if (0.0 <= (float)local_88) {
    fVar17 = fVar13;
  }
  param_2[4] = (char)(int)fVar16;
  fVar13 = 255.0;
  if (fVar15 <= 255.0) {
    fVar13 = fVar15;
  }
  fVar16 = 0.0;
  if (0.0 <= fVar15) {
    fVar16 = fVar13;
  }
  param_2[1] = (char)(int)fVar17;
  fVar14 = fVar14 * local_80 * 255.0;
  param_2[3] = (char)(int)fVar16;
  fVar13 = 255.0;
  if (fVar14 <= 255.0) {
    fVar13 = fVar14;
  }
  fVar15 = 0.0;
  if (0.0 <= fVar14) {
    fVar15 = fVar13;
  }
  local_7c = local_7c * 255.0;
  fVar13 = 255.0;
  if (local_7c <= 255.0) {
    fVar13 = local_7c;
  }
  param_2[2] = (char)(int)fVar15;
  fVar14 = 0.0;
  if (0.0 <= local_7c) {
    fVar14 = fVar13;
  }
  *param_2 = (char)(int)fVar14;
  return;
}

