
void FUN_018349dc(long param_1,undefined8 param_2)

{
  float *pfVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  undefined2 *puVar9;
  ulong uVar10;
  uint *puVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  long local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined2 local_c8;
  undefined1 local_c6;
  undefined1 local_c5;
  undefined4 local_c4;
  byte local_c0 [4];
  undefined4 local_bc;
  uint local_b8;
  undefined *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  byte local_90;
  undefined8 local_88;
  undefined8 local_80;
  uint local_78;
  int iStack_74;
  undefined *local_70;
  int local_68;
  int iStack_64;
  
  puVar5 = PTR_DAT_04bbfe68;
  puVar2 = PTR_DAT_04bb2720;
  puVar4 = PTR_DAT_04bb2010;
  local_80 = (undefined *)((ulong)local_80 & 0xffffffff00000000);
  local_d8 = PTR_DAT_04bb2010 + 0x10;
  local_d0 = 0;
  local_88 = PTR_DAT_04bbfe68 + 0x10;
  lVar12 = *(long *)PTR_DAT_04bb2720;
  if (lVar12 == 0) {
    puVar15 = &DAT_055c04a0;
  }
  else {
    puVar15 = &DAT_055c04a0;
    if (*(long *)(lVar12 + 0x330) != 0) {
      puVar15 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
      iVar7 = FUN_006bd550(*puVar15,0);
      puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar7 != 0x758f7eaf) {
        puVar15 = &DAT_055c04a0;
      }
    }
  }
  local_80 = (undefined *)CONCAT44(*(undefined4 *)(puVar15 + 7),(undefined4)local_80);
  uVar6 = FUN_017baf44();
  local_78 = CONCAT31(local_78._1_3_,uVar6) & 0xffffff01;
  puVar9 = (undefined2 *)FUN_01a5190c(&local_88,0,param_2,&local_d8);
  local_c8 = *puVar9;
  local_c6 = *(undefined1 *)(puVar9 + 1);
  local_c5 = *(undefined1 *)((long)puVar9 + 3);
  local_c4 = *(undefined4 *)(puVar9 + 2);
  lVar12 = *(long *)PTR_DAT_04bbbc68;
  if (lVar12 == 0) {
    return;
  }
  if (*(long *)(lVar12 + 0xb0) == 0) {
    return;
  }
  if (*(long *)(*(long *)(lVar12 + 0xb0) + 8) == 0) {
    return;
  }
  if (*(long *)(lVar12 + 0x488) == 0) {
    return;
  }
  if (*(long *)(*(long *)(lVar12 + 0x488) + 8) == 0) {
    return;
  }
  if (*(long *)(lVar12 + 0x2b0) == 0) {
    return;
  }
  if (*(long *)(*(long *)(lVar12 + 0x2b0) + 8) == 0) {
    return;
  }
  uVar8 = FUN_0277d6c4(&local_c8);
  uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
  if (*(uint *)(lVar12 + 0x1d8) <= uVar8) {
    return;
  }
  if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8) == 0) {
    return;
  }
  FUN_0124c030(auStack_f0,&local_c8);
  iVar7 = FUN_0123db50(auStack_e8,local_e0);
  if (6 < iVar7 - 0xbU) {
    return;
  }
  if (local_e0 != 0) {
    local_88 = (undefined *)((ulong)local_88 & 0xffffffff00000000);
    lVar12 = FUN_01246470(local_e0,0x16,0x623dc307,*(undefined8 *)PTR_DAT_04bbbc98);
    if (lVar12 != 0) {
      uVar8 = (int)(float)local_88 + 7;
      if (-1 < (int)(float)local_88) {
        uVar8 = (uint)(float)local_88;
      }
      if ((*(byte *)(lVar12 + (ulong)(uint)((int)uVar8 >> 3)) >> (ulong)((uint)(float)local_88 & 7)
          & 1) != 0) {
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x32c) = 0;
  local_a0 = (undefined *)((ulong)local_a0._4_4_ << 0x20);
  lVar12 = *(long *)PTR_DAT_04bb27c8;
  fVar17 = (float)local_d0._4_4_ * 5.0 + 5.0;
  local_88._0_4_ = (float)(int)local_d0 * 5.0 + 5.0;
  *(float *)(param_1 + 0x330) = fVar17;
  local_80 = (undefined *)CONCAT44(local_80._4_4_,fVar17);
  *(float *)(param_1 + 0x328) = (float)local_88;
  local_88._4_4_ = 0;
  uVar16 = FUN_0093a950(lVar12 + 0x28,&local_88,&local_a0);
  local_a0 = puVar5 + 0x10;
  *(undefined4 *)(param_1 + 0x32c) = uVar16;
  local_98 = 0;
  lVar12 = *(long *)puVar2;
  if (lVar12 == 0) {
    puVar15 = &DAT_055c04a0;
  }
  else {
    puVar15 = &DAT_055c04a0;
    if (*(long *)(lVar12 + 0x330) != 0) {
      puVar15 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
      iVar7 = FUN_006bd550(*puVar15,0);
      puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar7 != 0x758f7eaf) {
        puVar15 = &DAT_055c04a0;
      }
    }
  }
  local_94 = *(undefined4 *)(puVar15 + 7);
  local_90 = FUN_017baf44();
  local_90 = local_90 & 1;
  local_b8 = 0;
  local_b0 = puVar4 + 0x10;
  uVar8 = 0;
  puVar2 = PTR_DAT_04bbc1a0 + 0x10;
  do {
    local_88 = (undefined *)CONCAT44(local_88._4_4_,local_b8);
    local_bc = 0;
    uVar14 = local_b8;
    if (7 < local_b8) {
      uVar14 = 0;
    }
    local_a8 = (&DAT_04177458)[(long)(int)uVar14 * 2] + (int)local_d0;
    iStack_a4 = (&DAT_0417745c)[(long)(int)uVar14 * 2] + local_d0._4_4_;
    uVar16 = *(undefined4 *)(*(long *)(param_1 + 0x300) + 0x27c);
    local_c0[0] = *(byte *)(param_1 + 0x494) ^ 1;
    uVar10 = FUN_01a1cde0(uVar16,&local_a0,&local_b0);
    if ((uVar10 & 1) == 0) {
      local_80 = puVar4 + 0x10;
      local_78 = local_a8;
      iStack_74 = iStack_a4;
      local_68 = local_a8 + 1;
      iStack_64 = iStack_a4 + 1;
      local_88 = puVar2;
      local_70 = local_80;
      uVar10 = FUN_0184da90(uVar16,uVar10,&local_a0,&local_88,local_c0);
      if ((uVar10 & 1) != 0) goto LAB_01834d88;
    }
    else {
LAB_01834d88:
      local_88 = (undefined *)CONCAT44(local_88._4_4_,local_b8);
      uVar8 = uVar8 | 1 << (ulong)(local_b8 & 0x1f) & 0xffU;
    }
    if ((int)local_b8 < -1) {
      uVar14 = local_b8 ^ 0xffffffff;
      uVar13 = local_b8 ^ 0xffffffff;
      local_b8 = 0;
      if ((uVar13 & 7) != 0) {
        local_b8 = 8 - (uVar14 & 7);
      }
    }
    else {
      local_b8 = local_b8 + 1 & 7;
    }
  } while (local_b8 != 0);
  fVar18 = 0.0;
  fVar17 = 0.0;
  if (uVar8 == 0) goto LAB_01835030;
  local_88._0_4_ = 0.0;
  uVar14 = 0xf;
  local_a0 = (undefined *)((ulong)local_a0 & 0xffffffff00000000);
  do {
    local_b0 = (undefined *)CONCAT44(local_b0._4_4_,(float)local_88);
    if ((1 << (ulong)((uint)(float)local_88 & 0x1f) & uVar8) == 0) {
      if (((uint)(float)local_88 & 1) == 0) {
        if ((float)local_88 == 0.0) {
          uVar14 = uVar14 & 0xf6;
          goto LAB_01834e08;
        }
        if ((int)(float)local_88 < 0) {
          local_88._0_4_ = (float)((int)(float)local_88 + 1);
        }
        uVar13 = 3 << (ulong)(((int)(float)local_88 >> 1) - 1U & 0x1f);
      }
      else {
        if ((int)(float)local_88 < 0) {
          local_88._0_4_ = (float)((int)(float)local_88 + 1);
        }
        uVar13 = 1 << (ulong)((int)(float)local_88 >> 1 & 0x1f);
      }
      uVar14 = uVar14 & (uVar13 ^ 0xffffffff);
    }
LAB_01834e08:
    local_88._0_4_ = (float)0;
    if ((((uint)local_a0 ^ 0xffffffff) & 7) != 0) {
      local_88._0_4_ = (float)(8 - (((uint)local_a0 ^ 0xffffffff) & 7));
    }
    if (-2 < (int)(uint)local_a0) {
      local_88._0_4_ = (float)((uint)local_a0 + 1 & 7);
    }
    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,(float)local_88);
  } while ((float)local_88 != 0.0);
  fVar18 = 0.0;
  fVar17 = 0.0;
  if (uVar14 == 0) goto LAB_01835030;
  uVar8 = uVar14 - (uVar14 >> 1 & 0x55);
  uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
  uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
  uVar8 = uVar8 + (uVar8 >> 8);
  uVar8 = uVar8 + (uVar8 >> 0x10) & 0x3f;
  uVar10 = (ulong)uVar8;
  if (uVar8 != 0) {
    puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar3 = puVar11[3];
    uVar13 = *puVar11 ^ *puVar11 << 0xb;
    *puVar11 = puVar11[1];
    puVar11[1] = puVar11[2];
    uVar13 = uVar13 >> 8 ^ uVar3 >> 0x13 ^ uVar13 ^ uVar3;
    puVar11[2] = uVar3;
    puVar11[3] = uVar13;
    fVar17 = (float)uVar8 * 90.0 * ((float)(uVar13 >> 9 | 0x3f800000) + -1.0) + 0.0;
    if ((uVar14 & 1) == 0) {
      uVar13 = 0;
      uVar8 = 1;
LAB_01834f54:
      if ((uVar14 >> 1 & 1) == 0) {
        uVar8 = uVar8 + 1;
      }
      else {
        uVar13 = uVar13 + 1;
        if (fVar17 < (float)uVar13 * 90.0) goto LAB_01834fc4;
      }
      if ((uVar14 >> 2 & 1) == 0) {
        uVar8 = uVar8 + 1;
      }
      else {
        uVar13 = uVar13 + 1;
        if (fVar17 < (float)uVar13 * 90.0) goto LAB_01834fc4;
      }
      if ((uVar14 >> 3 != 0) && (fVar17 < (float)(uVar13 + 1) * 90.0)) goto LAB_01834fc4;
    }
    else {
      uVar8 = 0;
      if (90.0 <= fVar17) {
        uVar13 = 1;
        goto LAB_01834f54;
      }
LAB_01834fc4:
      fVar17 = fVar17 + (float)uVar8 * 90.0;
    }
    uVar10 = (ulong)(fVar17 * 11930465.0);
  }
  pfVar1 = (float *)(PTR_DAT_04bb2d00 + (uVar10 >> 0x18 & 0xff) * 0x10);
  fVar17 = (float)((uint)uVar10 & 0xffffff) * 5.9604645e-08;
  fVar18 = (*pfVar1 + fVar17 * pfVar1[1]) * 4.999;
  fVar17 = (pfVar1[2] + fVar17 * pfVar1[3]) * 4.999;
LAB_01835030:
  *(float *)(param_1 + 0x328) = fVar18 + *(float *)(param_1 + 0x328);
  *(float *)(param_1 + 0x32c) = *(float *)(param_1 + 0x32c) + 0.0;
  *(float *)(param_1 + 0x330) = fVar17 + *(float *)(param_1 + 0x330);
  return;
}

