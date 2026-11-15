
undefined8 FUN_02495be4(long param_1,float *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  float *pfVar11;
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
  undefined *local_110;
  undefined *puStack_108;
  int local_100;
  int iStack_fc;
  undefined *local_f8;
  int local_f0;
  int iStack_ec;
  undefined *local_e8;
  undefined *puStack_e0;
  int local_d8;
  int iStack_d4;
  undefined *local_d0;
  int local_c8;
  int iStack_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_98;
  float local_90;
  float fStack_8c;
  float local_88;
  uint local_84;
  
  fVar13 = *(float *)(*(long *)(param_1 + 0x68) + 0x2b4);
  local_84 = (int)fVar13 + 0x10000000U >> 0x1d;
  fVar12 = (float)(long)((float)local_84 * 45.0 * 11930465.0);
  if (fVar13 != fVar12) {
    uVar4 = (int)fVar12 - (int)fVar13;
    if ((uint)fVar12 <= (uint)fVar13) {
      uVar4 = (int)fVar13 - (int)fVar12;
    }
    uVar3 = -uVar4;
    if (uVar4 < 0x80000001) {
      uVar3 = uVar4;
    }
    if (45.0 < (float)uVar3 * 8.381903e-08) {
      return 0;
    }
  }
  lVar9 = FUN_0251e98c(1);
  (**(code **)(*(long *)(lVar9 + 0x2a0) + 0xf0))(lVar9 + 0x2a0);
  uVar4 = local_84;
  lVar9 = *(long *)(param_1 + 0x68);
  fVar13 = *(float *)(lVar9 + 0x278);
  fVar16 = *(float *)(lVar9 + 0x280);
  fStack_8c = (float)FUN_016e026c(0,lVar9 + 0x278,0,0);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  local_98 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_a0 = 3;
  local_b0 = 0;
  uStack_a8 = 0;
  local_90 = (float)(int)((int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0) & 0xfffffffe) * 5.0
             + 5.0;
  local_88 = (float)(int)((int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0) & 0xfffffffe) * 5.0
             + 5.0;
  uVar10 = FUN_016f3040(param_1,&local_c0);
  if ((uVar10 & 1) == 0) {
    return 0;
  }
  fVar16 = (float)local_c0;
  fVar7 = (float)local_b8;
  fVar13 = (float)FUN_006f0400(local_c0 & 0xffffffff,(float)local_b8);
  fVar13 = -fVar13;
  if (fVar13 != fVar12) {
    uVar4 = (int)fVar13 - (int)fVar12;
    if ((uint)fVar13 < (uint)fVar12 || (int)fVar13 - (int)fVar12 == 0) {
      uVar4 = (int)fVar12 - (int)fVar13;
    }
    uVar3 = -uVar4;
    if (uVar4 < 0x80000001) {
      uVar3 = uVar4;
    }
    if (0xb60b60 < uVar3) {
      return 0;
    }
  }
  lVar9 = *(long *)(param_1 + 0x68);
  fVar21 = (float)(int)((int)((float)(int)*(float *)(lVar9 + 0x278) / 5.0) -
                        (uint)(*(float *)(lVar9 + 0x278) < 0.0) & 0xfffffffe) * 5.0 + 5.0;
  fVar13 = (float)(int)((int)((float)(int)*(float *)(lVar9 + 0x280) / 5.0) -
                        (uint)(*(float *)(lVar9 + 0x280) < 0.0) & 0xfffffffe) * 5.0 + 5.0;
  fVar14 = (float)FUN_016e026c(0,lVar9 + 0x278,0,0);
  lVar9 = FUN_0251e98c(1);
  pfVar11 = (float *)(**(code **)(*(long *)(lVar9 + 0x2a0) + 0xf0))(lVar9 + 0x2a0);
  puVar8 = PTR_DAT_04bb27c8;
  puVar1 = PTR_DAT_04bbc1a0 + 0x10;
  fVar15 = *pfVar11 * 0.5 * 0.97;
  local_c8 = (int)((float)(int)(fVar21 - fVar15) / 5.0) - (uint)(fVar21 - fVar15 < 0.0);
  iStack_c4 = (int)((float)(int)(fVar13 - fVar15) / 5.0) - (uint)(fVar13 - fVar15 < 0.0);
  iVar5 = (int)((float)(int)(fVar21 + fVar15) / 5.0) - (uint)(fVar21 + fVar15 < 0.0);
  iVar6 = (int)((float)(int)(fVar15 + fVar13) / 5.0) - (uint)(fVar15 + fVar13 < 0.0);
  puVar2 = PTR_DAT_04bb2010 + 0x10;
  local_d8 = local_c8;
  if (iVar5 <= local_c8) {
    local_d8 = iVar5;
  }
  if (local_c8 <= iVar5) {
    local_c8 = iVar5;
  }
  iStack_d4 = iStack_c4;
  if (iVar6 <= iStack_c4) {
    iStack_d4 = iVar6;
  }
  if (iStack_c4 <= iVar6) {
    iStack_c4 = iVar6;
  }
  local_e8 = puVar1;
  puStack_e0 = puVar2;
  local_d0 = puVar2;
  if (((*(long *)PTR_DAT_04bb27c8 == 0) ||
      (lVar9 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar9 == 0)) ||
     (uVar10 = FUN_009721a0(lVar9,&local_e8,0), (uVar10 & 1) == 0)) {
    fVar15 = 10.0;
    if (0.0 <= fVar16) {
      fVar15 = -10.0;
    }
    fVar18 = *(float *)(*(long *)(param_1 + 0x68) + 0x278);
    fVar19 = *(float *)(*(long *)(param_1 + 0x68) + 0x280);
    fVar16 = 10.0;
    if (0.0 <= fVar7) {
      fVar16 = -10.0;
    }
    fVar20 = fVar13 - fVar19;
    fVar17 = fVar21 - fVar18;
    fVar18 = (fVar15 + fVar21) - fVar18;
    fVar19 = (fVar16 + fVar13) - fVar19;
    fVar7 = fVar15 + fVar21;
    if (SQRT(fVar19 * fVar19 + fVar17 * fVar17) <= SQRT(fVar20 * fVar20 + fVar18 * fVar18)) {
      fVar13 = fVar16 + fVar13;
      fVar7 = fVar21;
    }
    lVar9 = FUN_0251e98c(1);
    pfVar11 = (float *)(**(code **)(*(long *)(lVar9 + 0x2a0) + 0xf0))(lVar9 + 0x2a0);
    fVar16 = *pfVar11 * 0.5 * 0.97;
    local_f0 = (int)((float)(int)(fVar7 - fVar16) / 5.0) - (uint)(fVar7 - fVar16 < 0.0);
    iStack_ec = (int)((float)(int)(fVar13 - fVar16) / 5.0) - (uint)(fVar13 - fVar16 < 0.0);
    iVar5 = (int)((float)(int)(fVar7 + fVar16) / 5.0) - (uint)(fVar7 + fVar16 < 0.0);
    iVar6 = (int)((float)(int)(fVar13 + fVar16) / 5.0) - (uint)(fVar13 + fVar16 < 0.0);
    local_100 = local_f0;
    if (iVar5 <= local_f0) {
      local_100 = iVar5;
    }
    if (local_f0 <= iVar5) {
      local_f0 = iVar5;
    }
    iStack_fc = iStack_ec;
    if (iVar6 <= iStack_ec) {
      iStack_fc = iVar6;
    }
    if (iStack_ec <= iVar6) {
      iStack_ec = iVar6;
    }
    if (*(long *)puVar8 == 0) {
      return 0;
    }
    lVar9 = *(long *)(*(long *)puVar8 + 0xa8);
    if (lVar9 == 0) {
      return 0;
    }
    local_110 = puVar1;
    puStack_108 = puVar2;
    local_f8 = puVar2;
    uVar10 = FUN_009721a0(lVar9,&local_110,0);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    local_90 = fVar7 + (float)local_c0 * 5.0;
    local_88 = fVar13 + (float)local_b8 * 5.0;
  }
  else {
    local_90 = fVar21 + (float)local_c0 * 5.0;
    local_88 = fVar13 + (float)local_b8 * 5.0;
  }
  fStack_8c = fVar14 + local_c0._4_4_ * 5.0;
  fVar13 = (float)FUN_016e026c(0,&local_90,0,0);
  param_2[3] = fVar12;
  *param_2 = local_90;
  param_2[1] = fVar13;
  param_2[2] = local_88;
  return 1;
}

