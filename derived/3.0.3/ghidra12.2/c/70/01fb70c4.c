
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_01fb70c4(long *param_1,float *param_2,uint *param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  float *pfVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  ulong uVar13;
  uint *puVar14;
  uint uVar15;
  long lVar16;
  undefined4 uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined4 local_268;
  undefined *local_260;
  undefined *puStack_258;
  undefined8 local_250;
  undefined *local_248;
  undefined8 uStack_240;
  undefined4 local_238 [8];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined *local_200;
  undefined *puStack_1f8;
  undefined8 local_1f0;
  undefined *local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8 [8];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined *local_1a0;
  undefined *puStack_198;
  undefined8 local_190;
  undefined *local_188;
  undefined8 uStack_180;
  undefined4 local_178 [8];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined *local_140;
  undefined *puStack_138;
  undefined8 local_130;
  undefined *local_128;
  undefined8 uStack_120;
  undefined4 local_118 [8];
  long *local_f8;
  float *pfStack_f0;
  undefined **local_e8;
  undefined8 uStack_e0;
  undefined *local_d8;
  int local_d0;
  int iStack_cc;
  undefined *local_c8;
  undefined *puStack_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  byte local_90;
  
  local_98 = 0;
  lVar16 = *(long *)PTR_DAT_04bb2720;
  if (lVar16 == 0) {
    puVar18 = &DAT_055c04a0;
  }
  else {
    puVar18 = &DAT_055c04a0;
    if (*(long *)(lVar16 + 0x330) != 0) {
      puVar18 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
      iVar6 = FUN_006bd550(*puVar18,0);
      puVar18 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar6 != 0x758f7eaf) {
        puVar18 = &DAT_055c04a0;
      }
    }
  }
  local_94 = *(undefined4 *)(puVar18 + 7);
  local_90 = FUN_017baf44();
  puVar1 = PTR_DAT_04bbc1a0;
  puVar2 = PTR_DAT_04bb2010;
  local_90 = local_90 & 1;
  local_a0 = PTR_DAT_04bb3140 + 0x10;
  local_b8 = 0;
  local_c8 = PTR_DAT_04bbc1a0 + 0x10;
  local_d8 = PTR_DAT_04bb2010 + 0x10;
  local_a8 = 0;
  local_d0 = (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0);
  iStack_cc = (int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0);
  puStack_c0 = local_d8;
  local_b0 = local_d8;
  uVar12 = FUN_01a5190c(&local_a0,0,&local_d8,0);
  puVar5 = PTR_DAT_04bb43c0;
  lVar16 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4();
  if (*(long *)puVar5 == 0) {
    return 0;
  }
  lVar16 = *(long *)(lVar16 + 0x57e58);
  uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
  if (*(uint *)(lVar16 + 0x1d8) <= uVar7) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8) == 0) {
    return 0;
  }
  local_e8 = &local_a0;
  local_148 = 0;
  local_158 = 0;
  uStack_150 = 0xfffe00000000;
  local_f8 = param_1;
  pfStack_f0 = param_2;
  uStack_e0 = uVar12;
  FUN_0277d4ac((long)&uStack_150 + 4);
  puVar1 = puVar1 + 0x10;
  local_130 = 0;
  puVar2 = puVar2 + 0x10;
  local_118[0] = 0;
  local_1a8 = 0;
  uStack_120 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0xfffe00000000;
  local_140 = puVar1;
  puStack_138 = puVar2;
  local_128 = puVar2;
  FUN_0277d4ac();
  local_190 = 0;
  local_178[0] = 0;
  local_208 = 0;
  uStack_180 = 0;
  local_218 = 0;
  uStack_210 = 0xfffe00000000;
  local_1a0 = puVar1;
  puStack_198 = puVar2;
  local_188 = puVar2;
  FUN_0277d4ac();
  local_1f0 = 0;
  local_1d8[0] = 0;
  local_268 = 0;
  uStack_1e0 = 0;
  local_278 = 0;
  uStack_270 = 0xfffe00000000;
  local_200 = puVar1;
  puStack_1f8 = puVar2;
  local_1e8 = puVar2;
  FUN_0277d4ac();
  puVar5 = PTR_DAT_04bb2d00;
  uStack_240 = 0;
  local_250 = 0;
  pfVar3 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*param_3 >> 0x14) & 0xff0));
  local_238[0] = 0;
  fVar20 = (float)(*param_3 & 0xffffff) * 5.9604645e-08;
  fVar21 = (*pfVar3 + fVar20 * pfVar3[1]) * 5.0 + *param_2 + -2.5;
  fVar20 = (pfVar3[2] + fVar20 * pfVar3[3]) * 5.0 + param_2[2] + -2.5;
  iVar6 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
  iVar4 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
  local_b8 = CONCAT44(iVar4,iVar6);
  local_a8 = CONCAT44(iVar4 + 1,iVar6 + 1);
  local_260 = puVar1;
  puStack_258 = puVar2;
  local_248 = puVar2;
  uVar7 = FUN_01fb7b80(&local_f8,&local_158,&local_c8);
  pfVar3 = (float *)(puVar5 + (ulong)(*param_3 + 0x40000000 >> 0x18) * 0x10);
  fVar20 = (float)(*param_3 & 0xffffff) * 5.9604645e-08;
  fVar21 = (*pfVar3 + fVar20 * pfVar3[1]) * 5.0 + *param_2 + -2.5;
  fVar20 = (pfVar3[2] + fVar20 * pfVar3[3]) * 5.0 + param_2[2] + -2.5;
  iVar6 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
  iVar4 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
  local_b8 = CONCAT44(iVar4,iVar6);
  local_a8 = CONCAT44(iVar4 + 1,iVar6 + 1);
  uVar8 = FUN_01fb7b80(&local_f8,&local_1b8,&local_c8);
  pfVar3 = (float *)(puVar5 + (ulong)(*param_3 + 0xc0000000 >> 0x18) * 0x10);
  fVar20 = (float)(*param_3 & 0xffffff) * 5.9604645e-08;
  fVar21 = (*pfVar3 + fVar20 * pfVar3[1]) * 5.0 + *param_2 + -2.5;
  fVar20 = (pfVar3[2] + fVar20 * pfVar3[3]) * 5.0 + param_2[2] + -2.5;
  iVar6 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
  iVar4 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
  local_b8 = CONCAT44(iVar4,iVar6);
  local_a8 = CONCAT44(iVar4 + 1,iVar6 + 1);
  uVar9 = FUN_01fb7b80(&local_f8,&local_218,&local_c8);
  uVar19 = 0;
  if ((param_4 & 1) != 0) {
    pfVar3 = (float *)(puVar5 + ((ulong)(*param_3 >> 0x14) & 0xff0 ^ 0x800));
    fVar20 = (float)(*param_3 & 0xffffff) * 5.9604645e-08;
    fVar21 = (*pfVar3 + fVar20 * pfVar3[1]) * 5.0 + *param_2 + -2.5;
    fVar20 = (pfVar3[2] + fVar20 * pfVar3[3]) * 5.0 + param_2[2] + -2.5;
    iVar6 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
    iVar4 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
    local_b8 = CONCAT44(iVar4,iVar6);
    local_a8 = CONCAT44(iVar4 + 1,iVar6 + 1);
    uVar19 = FUN_01fb7b80(&local_f8,&local_278,&local_c8);
    uVar19 = uVar19 & 0xffffffff;
  }
  if ((((uVar7 | uVar8 | uVar9) & 1) == 0) && ((uVar19 & 1) == 0)) {
    return 0;
  }
  if (((uVar7 & 1) != 0) &&
     (uVar13 = (**(code **)(*param_1 + 0x618))(param_1,(long)&uStack_150 + 4,&puStack_138,local_118)
     , (uVar13 & 1) != 0)) {
    return 1;
  }
  if ((uVar8 & 1) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = (**(code **)(*param_1 + 0x618))(param_1,(long)&uStack_1b0 + 4,&puStack_198,local_178);
  }
  if ((uVar9 & 1) == 0) {
    uVar11 = 0;
    uVar15 = 1;
  }
  else {
    uVar11 = (**(code **)(*param_1 + 0x618))(param_1,(long)&uStack_210 + 4,&puStack_1f8,local_1d8);
    uVar15 = uVar11 ^ 1;
    if (((uVar10 | uVar15) & 1) == 0) {
      return 3;
    }
  }
  if (((uVar11 & 1) == 0) && (((uVar10 ^ 1) & 1) == 0)) {
    return 2;
  }
  if (((uVar15 | uVar10 ^ 1) & 1) == 0) {
    uVar7 = *(uint *)(*(long *)(param_1[1] + 0x68) + 0x2b4);
    if (0 < (int)uVar7) {
      return 3;
    }
    if (0x80000000 < uVar7) {
      return 2;
    }
    puVar14 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar7 = *puVar14 ^ *puVar14 << 0xb;
    uVar8 = puVar14[3];
    *puVar14 = puVar14[1];
    puVar14[1] = puVar14[2];
    uVar7 = uVar7 >> 8 ^ uVar8 >> 0x13 ^ uVar7 ^ uVar8;
    puVar14[2] = uVar8;
    puVar14[3] = uVar7;
    uVar17 = 2;
    if ((uVar7 & 2) != 0) {
      uVar17 = 3;
    }
    return uVar17;
  }
  if ((uVar19 & 1) == 0) {
    if ((uVar7 & 1) != 0) {
      return 1;
    }
  }
  else {
    uVar10 = (**(code **)(*param_1 + 0x618))(param_1,(long)&uStack_270 + 4,&puStack_258,local_238);
    uVar17 = 5;
    if ((uVar10 & 1) == 0) {
      uVar17 = 1;
    }
    if (((uVar7 | uVar10) & 1) != 0) {
      return uVar17;
    }
  }
  iVar6 = FUN_01fb77bc(param_1,uVar8 & 1,uVar9 & 1);
  if (iVar6 == 2) {
    return 2;
  }
  if (iVar6 == 3) {
    return 3;
  }
  if ((uVar19 & 1) == 0) {
    return 0;
  }
  return 5;
}

