
undefined8 FUN_016f02d0(float *param_1,float *param_2,int *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  bool bVar5;
  undefined *puVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined2 *puVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  int iVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int local_10c;
  undefined *local_108;
  undefined8 local_100;
  int local_f8;
  int iStack_f4;
  undefined *local_f0;
  int local_e8;
  int iStack_e4;
  uint local_dc;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined4 local_a4;
  long local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  
  puVar1 = PTR_DAT_04bb2010;
  local_d8 = PTR_DAT_04bbfe68 + 0x10;
  local_108 = PTR_DAT_04bb2010 + 0x10;
  local_d0 = (undefined *)((ulong)local_d0 & 0xffffffff00000000);
  local_90 = 0;
  local_100 = (undefined *)
              CONCAT44((int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0),
                       (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0));
  lVar13 = *(long *)PTR_DAT_04bb2720;
  local_98 = local_108;
  if (lVar13 == 0) {
    puVar16 = &DAT_055c04a0;
  }
  else {
    puVar16 = &DAT_055c04a0;
    if (*(long *)(lVar13 + 0x330) != 0) {
      puVar16 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar13 + 0x338));
      iVar8 = FUN_006bd550(*puVar16,0);
      puVar16 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar8 != 0x758f7eaf) {
        puVar16 = &DAT_055c04a0;
      }
    }
  }
  local_d0 = (undefined *)CONCAT44(*(undefined4 *)(puVar16 + 7),(undefined4)local_d0);
  uVar7 = FUN_017baf44();
  local_c8 = CONCAT71(local_c8._1_7_,uVar7) & 0xffffffffffffff01;
  puVar11 = (undefined2 *)FUN_01a5190c(&local_d8,0,&local_108,&local_98);
  puVar6 = PTR_DAT_04bb43c0;
  uVar4 = *puVar11;
  uVar7 = *(undefined1 *)(puVar11 + 1);
  uVar3 = *(undefined1 *)((long)puVar11 + 3);
  uVar2 = *(undefined4 *)(puVar11 + 2);
  lVar18 = *(long *)PTR_DAT_04bb43c0;
  local_78 = uVar4;
  local_76 = uVar7;
  local_75 = uVar3;
  local_74 = uVar2;
  uVar9 = FUN_0277d6c4(&local_78);
  lVar13 = *(long *)puVar6;
  if (lVar13 == 0) {
    return 0;
  }
  lVar18 = *(long *)(lVar18 + 0x57e58);
  uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
  if (*(uint *)(lVar18 + 0x1d8) <= uVar9) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar9 * 8) == 0) {
    return 0;
  }
  local_b0 = PTR_DAT_04bc0510 + 0x10;
  local_a0 = 0;
  local_a8 = uVar4;
  local_a6 = uVar7;
  local_a5 = uVar3;
  local_a4 = uVar2;
  uVar9 = FUN_0277d6c4(&local_a8);
  if (*(long *)puVar6 != 0) {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((uVar9 < *(uint *)(lVar13 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
      lVar13 = *(long *)PTR_DAT_04bc0428;
      uVar9 = FUN_0277d6c4(&local_78);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if (uVar9 < *(uint *)(lVar13 + 0x1d8)) {
        lVar13 = *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8);
        if (lVar13 != 0) {
          local_a0 = lVar13;
        }
      }
    }
  }
  puVar6 = PTR_DAT_04bbc1a0;
  local_d0 = puVar1 + 0x10;
  local_c8 = 0;
  local_b8 = 0;
  local_d8 = PTR_DAT_04bbc1a0 + 0x10;
  local_c0 = local_d0;
  FUN_01afb480(&local_b0,&local_d8);
  local_10c = (int)local_c8 + (int)local_90;
  local_b8._0_4_ = (int)local_b8 + (int)local_90;
  iVar8 = local_c8._4_4_ + local_90._4_4_;
  local_b8._4_4_ = local_b8._4_4_ + local_90._4_4_;
  local_c8 = CONCAT44(iVar8,local_10c);
  local_dc = *param_3 + 0x20000000U >> 0x1e;
  switch(local_dc) {
  case 0:
    iVar14 = local_b8._4_4_ + 1;
    break;
  case 1:
    iVar15 = (int)local_b8 + 1;
    goto LAB_016f05dc;
  case 2:
    iVar14 = iVar8 + -1;
    break;
  case 3:
    iVar15 = local_10c + -1;
LAB_016f05dc:
    iVar14 = iVar8;
    if (local_b8._4_4_ <= iVar8) {
      iVar14 = local_b8._4_4_;
    }
    if (iVar8 <= local_b8._4_4_) {
      iVar8 = local_b8._4_4_;
    }
    local_10c = iVar15;
    goto LAB_016f05ec;
  default:
    local_10c = 0;
    iVar14 = 0;
    iVar15 = 0;
    iVar8 = 0;
    goto LAB_016f05ec;
  }
  iVar15 = local_10c;
  if ((int)local_b8 <= local_10c) {
    iVar15 = (int)local_b8;
  }
  if (local_10c <= (int)local_b8) {
    local_10c = (int)local_b8;
  }
  iVar8 = iVar14;
LAB_016f05ec:
  fVar22 = *param_1;
  fVar21 = param_1[2];
  FUN_016e026c(0,param_1,0,0);
  if (iVar8 + 1 != iVar14) {
    uVar9 = 0;
    bVar5 = false;
    puVar1 = puVar1 + 0x10;
    iVar17 = iVar15;
    do {
      fVar19 = (float)iVar17 * 5.0 + 2.5;
      fVar20 = (float)iVar14 * 5.0 + 2.5;
      local_f8 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
      iStack_f4 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
      local_108 = puVar6 + 0x10;
      local_100 = puVar1;
      local_f0 = puVar1;
      local_e8 = local_f8;
      iStack_e4 = iStack_f4;
      uVar12 = FUN_015158d0(&local_108,0);
      if (((uVar12 & 1) == 0) || (iVar10 = FUN_01515c00(&local_108,1), iVar10 != 0)) {
        bVar5 = false;
        uVar9 = 0;
      }
      else {
        uVar9 = uVar9 + 1;
        bVar5 = (bool)(bVar5 | (iVar17 == (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0) &&
                               iVar14 == (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0)));
        if ((bVar5) && (1 < uVar9)) {
          return 1;
        }
      }
      if (iVar17 < local_10c) {
        iVar17 = iVar17 + 1;
      }
      else {
        iVar14 = iVar14 + 1;
        iVar17 = iVar15;
      }
    } while ((iVar15 != iVar17) || (iVar8 + 1 != iVar14));
  }
  return 0;
}

