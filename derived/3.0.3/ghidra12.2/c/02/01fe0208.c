
undefined8 FUN_01fe0208(long param_1,undefined4 *param_2,undefined8 param_3)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  uint *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined4 uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  float fVar21;
  float fVar22;
  undefined8 local_148;
  undefined1 auStack_140 [16];
  undefined8 local_130 [2];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 auStack_108 [16];
  undefined8 local_f8 [2];
  undefined8 local_e8;
  undefined **local_e0;
  long lStack_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined *puStack_c0;
  int local_b8;
  int iStack_b4;
  undefined *local_b0;
  int local_a8;
  int iStack_a4;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  byte local_90;
  undefined8 local_78;
  
  local_98 = 0;
  lVar15 = *(long *)PTR_DAT_04bb2720;
  if (lVar15 == 0) {
    puVar20 = &DAT_055c04a0;
  }
  else {
    puVar20 = &DAT_055c04a0;
    if (*(long *)(lVar15 + 0x330) != 0) {
      puVar20 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
      iVar10 = FUN_006bd550(*puVar20,0);
      puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar10 != 0x758f7eaf) {
        puVar20 = &DAT_055c04a0;
      }
    }
  }
  local_94 = *(undefined4 *)(puVar20 + 7);
  local_90 = FUN_017baf44();
  puVar9 = PTR_DAT_04bb2d00;
  local_90 = local_90 & 1;
  lVar15 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(lVar15 + 0x2b4) >> 0x14) & 0xff0));
  fVar21 = (float)(*(uint *)(lVar15 + 0x2b4) & 0xffffff) * 5.9604645e-08;
  local_a0 = PTR_DAT_04bb3140 + 0x10;
  local_c8 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_c0 = PTR_DAT_04bb2010 + 0x10;
  local_e0 = &local_a0;
  fVar22 = *(float *)(lVar15 + 0x278) + (*pfVar1 + fVar21 * pfVar1[1]) * 5.0 + -2.5;
  fVar21 = *(float *)(lVar15 + 0x280) + (pfVar1[2] + fVar21 * pfVar1[3]) * 5.0 + -2.5;
  local_b8 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0);
  iStack_b4 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
  local_a8 = local_b8 + 1;
  iStack_a4 = iStack_b4 + 1;
  lStack_d8 = param_1;
  local_d0 = param_3;
  local_b0 = puStack_c0;
  uVar13 = FUN_01fe44d0(&local_e0,param_2 + 1,param_2 + 3,param_2 + 6,param_2 + 0x10,&local_c8,0);
  if ((uVar13 & 1) != 0) {
    *param_2 = 1;
    return 1;
  }
  local_78 = 0xfffe;
  lVar15 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  pfVar1 = (float *)(puVar9 + (ulong)(*(uint *)(lVar15 + 0x2b4) + 0x40000000 >> 0x18) * 0x10);
  fVar21 = (float)(*(uint *)(lVar15 + 0x2b4) & 0xffffff) * 5.9604645e-08;
  fVar22 = *(float *)(lVar15 + 0x278) + (*pfVar1 + fVar21 * pfVar1[1]) * 5.0 + -2.5;
  fVar21 = *(float *)(lVar15 + 0x280) + (pfVar1[2] + fVar21 * pfVar1[3]) * 5.0 + -2.5;
  local_b8 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0);
  iStack_b4 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
  local_a8 = local_b8 + 1;
  iStack_a4 = iStack_b4 + 1;
  FUN_0277d4ac(&local_78);
  local_f8[0] = 0;
  local_e8 = 0;
  local_110 = 0;
  uVar11 = FUN_01fe44d0(&local_e0,&local_110,&local_78,auStack_108,(long)&local_110 + 4,&local_c8,0)
  ;
  local_118 = 0xfffe;
  lVar15 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  pfVar1 = (float *)(puVar9 + (ulong)(*(uint *)(lVar15 + 0x2b4) + 0xc0000000 >> 0x18) * 0x10);
  fVar21 = (float)(*(uint *)(lVar15 + 0x2b4) & 0xffffff) * 5.9604645e-08;
  fVar22 = *(float *)(lVar15 + 0x278) + (*pfVar1 + fVar21 * pfVar1[1]) * 5.0 + -2.5;
  fVar21 = *(float *)(lVar15 + 0x280) + (pfVar1[2] + fVar21 * pfVar1[3]) * 5.0 + -2.5;
  local_b8 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0);
  iStack_b4 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
  local_a8 = local_b8 + 1;
  iStack_a4 = iStack_b4 + 1;
  FUN_0277d4ac(&local_118);
  local_130[0] = 0;
  local_120 = 0;
  local_148 = 0;
  uVar12 = FUN_01fe44d0(&local_e0,&local_148,&local_118,auStack_140,(long)&local_148 + 4,&local_c8,0
                       );
  if (((uVar11 & 1) == 0) && (((uVar12 ^ 1) & 1) == 0)) {
LAB_01fe05c8:
    if ((uVar12 & 1) == 0) {
      return 1;
    }
    puVar20 = local_130;
    puVar6 = local_130;
    puVar16 = &local_120;
    puVar7 = &local_120;
    puVar8 = &local_148;
    puVar17 = &local_148;
    uVar18 = 3;
    puVar19 = &local_118;
  }
  else {
    if (((uVar12 | uVar11 ^ 1) & 1) != 0) {
      if (((uVar11 ^ 1 | uVar12 ^ 1) & 1) != 0) {
        lVar15 = *(long *)(*(long *)(param_1 + 8) + 0x68);
        fVar21 = *(float *)(lVar15 + 0x278) + -2.5;
        fVar22 = *(float *)(lVar15 + 0x280) + -2.5;
        local_b8 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
        iStack_b4 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0);
        local_a8 = local_b8 + 1;
        iStack_a4 = iStack_b4 + 1;
        uVar13 = FUN_01fe44d0(&local_e0,param_2 + 1,param_2 + 3,param_2 + 6,param_2 + 0x10,&local_c8
                              ,1);
        if ((uVar13 & 1) == 0) {
          return 0;
        }
        *param_2 = 4;
        return 1;
      }
      uVar3 = *(uint *)(*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x2b4);
      if (0 < (int)uVar3) goto LAB_01fe05c8;
      if (uVar3 < 0x80000001) {
        puVar14 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        uVar3 = *puVar14 ^ *puVar14 << 0xb;
        uVar2 = puVar14[3];
        *puVar14 = puVar14[1];
        puVar14[1] = puVar14[2];
        uVar3 = uVar3 >> 8 ^ uVar2 >> 0x13 ^ uVar3 ^ uVar2;
        puVar14[2] = uVar2;
        puVar14[3] = uVar3;
        if ((uVar3 >> 1 & 1) != 0) goto LAB_01fe05c8;
      }
    }
    if ((uVar11 & 1) == 0) {
      return 1;
    }
    puVar20 = local_f8;
    puVar6 = local_f8;
    puVar16 = &local_e8;
    puVar7 = &local_e8;
    puVar8 = &local_110;
    puVar17 = &local_110;
    uVar18 = 2;
    puVar19 = &local_78;
  }
  uVar4 = *(undefined4 *)((long)puVar6 + 4);
  param_2[10] = *(undefined4 *)puVar20;
  param_2[0xb] = uVar4;
  uVar4 = *(undefined4 *)((long)puVar7 + 4);
  param_2[0xe] = *(undefined4 *)puVar16;
  param_2[0xf] = uVar4;
  uVar5 = *(undefined4 *)puVar17;
  uVar4 = *(undefined4 *)((long)puVar19 + 4);
  param_2[3] = *(undefined4 *)puVar19;
  param_2[4] = uVar4;
  *param_2 = uVar18;
  param_2[1] = uVar5;
  param_2[0x10] = *(undefined4 *)((long)puVar8 + 4);
  return 1;
}

