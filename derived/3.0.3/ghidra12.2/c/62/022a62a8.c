
undefined8 FUN_022a62a8(float param_1,byte *param_2,undefined4 *param_3,long param_4,ulong param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  float *pfVar8;
  long lVar9;
  ulong uVar10;
  byte bVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 local_138;
  byte local_134 [4];
  float local_130 [2];
  undefined4 local_128;
  undefined4 local_118;
  byte local_114 [4];
  undefined *local_110;
  undefined *local_108;
  int local_100;
  int iStack_fc;
  undefined *local_f8;
  int local_f0;
  int iStack_ec;
  byte local_e4 [4];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  int local_c0;
  int iStack_bc;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  byte local_a8;
  undefined **local_a0;
  uint local_98;
  uint local_94;
  
  pfVar8 = (float *)FUN_0251b3b0(param_2,0);
  if (pfVar8 == (float *)0x0) {
    return 0;
  }
  lVar9 = FUN_0251bdc4(param_2,0);
  if (lVar9 == 0) {
    return 0;
  }
  local_98 = (int)((float)(int)*pfVar8 / 5.0) - (uint)(*pfVar8 < 0.0);
  local_94 = (int)((float)(int)pfVar8[2] / 5.0) - (uint)(pfVar8[2] < 0.0);
  local_a0 = &PTR_FUN_04986b58;
  if ((local_98 & 1) != 0) {
    local_98 = local_98 - 1;
  }
  if ((local_94 & 1) != 0) {
    local_94 = local_94 - 1;
  }
  uVar10 = (ulong)(*(uint *)(lVar9 + 4) >> 0x14) & 0xff0;
  local_b0 = 0;
  fVar14 = (float)(*(uint *)(lVar9 + 4) & 0xffffff) * 5.9604645e-08;
  fVar15 = *(float *)((long)&DAT_04199798 + uVar10);
  fVar16 = *(float *)((long)&DAT_0419979c + uVar10);
  fVar17 = fVar15 + fVar14 * fVar16;
  fVar18 = *(float *)((long)&DAT_041997a0 + uVar10) +
           fVar14 * *(float *)((long)&DAT_041997a4 + uVar10);
  if (DAT_05aed670 == 0) {
    puVar13 = &DAT_055c04a0;
  }
  else {
    puVar13 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar13 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))
                          (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar5 = FUN_006bd550(*puVar13,0);
      puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar13 = &DAT_055c04a0;
      }
    }
  }
  local_ac = *(undefined4 *)(puVar13 + 7);
  local_a8 = FUN_017baf44();
  local_a8 = local_a8 & 1;
  local_b8 = PTR_DAT_04bb6268 + 0x10;
  lVar9 = FUN_01a4fa00(&local_b8);
  puVar4 = PTR_DAT_04bb2010;
  fVar17 = fVar17 * 0.0 * 0.0 + fVar18 * 0.0 + param_1 * (fVar17 + 0.0) + *pfVar8;
  local_d8 = PTR_DAT_04bb2010 + 0x10;
  iVar5 = *(int *)(lVar9 + 0x20);
  iVar2 = *(int *)(lVar9 + 0x24);
  fVar14 = fVar18 * 0.0 * 0.0 + (-(fVar16 * fVar14) - fVar15) * 0.0 + param_1 * fVar18 + pfVar8[2];
  local_c0 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
  fVar15 = (float)(int)fVar14 / 5.0;
  iStack_bc = (int)fVar15 - (uint)(fVar14 < 0.0);
  iVar1 = *(int *)(lVar9 + 0x10);
  iVar3 = *(int *)(lVar9 + 0x14);
  if ((((local_c0 < iVar1 || iVar5 < local_c0) || iStack_bc < iVar3) || iStack_bc != iVar2) &&
      (((iVar1 <= local_c0 && local_c0 <= iVar5) && iVar3 <= iStack_bc) && iStack_bc - iVar2 < 0) ==
      (((iVar1 <= local_c0 && local_c0 <= iVar5) && iVar3 <= iStack_bc) && SBORROW4(iStack_bc,iVar2)
      )) {
    return 0;
  }
  local_d0 = 0;
  local_c8 = local_d8;
  FUN_01a5033c(&local_e0,&local_b8,0,&local_c8,&local_d8);
  if (param_4 != 0) {
    *(int *)(param_4 + 8) = (int)local_d0;
    *(int *)(param_4 + 0xc) = local_d0._4_4_;
  }
  lVar9 = DAT_05150358;
  if ((((DAT_05150358 == 0) || (*(long *)(DAT_05150358 + 0xb0) == 0)) ||
      (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) == 0)) ||
     (((*(long *)(DAT_05150358 + 0x488) == 0 ||
       (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) == 0)) ||
      ((*(long *)(DAT_05150358 + 0x2b0) == 0 ||
       (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) == 0)))))) {
LAB_022a66bc:
    bVar11 = *param_2;
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
    local_130[0] = (float)CONCAT31(local_130[0]._1_3_,bVar11);
    local_108 = (undefined *)CONCAT44(local_108._4_4_,(float)local_d0._4_4_ * 5.0 + 5.0);
    local_110 = (undefined *)CONCAT44(local_110._4_4_,(float)(int)local_d0 * 5.0 + 5.0);
    lVar9 = FUN_0251b3b0(local_130,0);
    if (lVar9 == 0) {
      return 0;
    }
    if (DAT_04cfae30 == 0) {
      return 0;
    }
    fVar14 = (float)FUN_0093a950(DAT_04cfae30 + 0x28,&local_110,0);
    fVar14 = fVar14 - *(float *)(lVar9 + 4);
    if (5.0 < fVar14) {
      return 0;
    }
    uVar12 = 0;
    uVar7 = 0;
    lVar9 = DAT_05150358;
    if (fVar14 < -5.0) {
      return 0;
    }
  }
  else {
    uVar6 = FUN_0277d6c4(&local_e0);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_022a66bc;
    FUN_0124c030(&local_110,&local_e0);
    iVar5 = FUN_0123db50(&local_108,CONCAT44(iStack_fc,local_100));
    if (iVar5 == 0x21) {
      if ((param_5 & 1) != 0) {
        return 0;
      }
      fVar18 = (float)FUN_0124fa64(0,&local_110,&local_d8);
      fVar16 = fVar15 - pfVar8[2];
      fVar17 = fVar15;
      uVar7 = FUN_006f0400(fVar18 - *pfVar8);
      iVar5 = FUN_0123db50(&local_108,CONCAT44(iStack_fc,local_100));
      if (iVar5 == 0x22) goto LAB_022a6618;
    }
    else {
      iVar5 = FUN_0123db50(&local_108,CONCAT44(iStack_fc,local_100));
      if (iVar5 != 0x22) goto LAB_022a66bc;
      fVar16 = fVar14;
      fVar17 = fVar15;
      if ((param_5 & 1) != 0) {
        return 0;
      }
LAB_022a6618:
      fVar18 = (float)FUN_0124fa64(0,&local_110,&local_d8);
      uVar7 = FUN_006f0400(fVar18 - *pfVar8,fVar17 - pfVar8[2]);
      fVar14 = fVar16;
      fVar15 = fVar17;
    }
    iVar5 = FUN_0123db50(&local_108,CONCAT44(iStack_fc,local_100));
    if (((iVar5 == 0x21) ||
        (iVar5 = FUN_0123db50(&local_108,CONCAT44(iStack_fc,local_100)), iVar5 == 0x22)) &&
       ((uVar10 = (ulong)local_108 >> 0x12 & 7, 6 < (uint)uVar10 || ((1 << uVar10 & 0x55U) == 0))))
    {
      local_e4[0] = *param_2;
      if (7 < local_e4[0]) {
        local_e4[0] = 0xff;
      }
      uVar10 = FUN_022a6ac0(fVar18,fVar14,fVar15,local_e4);
      if ((uVar10 & 1) == 0) {
        return 0;
      }
    }
    else {
      lVar9 = FUN_0251b3b0(param_2,0);
      if (lVar9 == 0) {
        return 0;
      }
      if (5.0 < fVar14 - *(float *)(lVar9 + 4)) {
        return 0;
      }
    }
    uVar12 = 1;
    lVar9 = DAT_05150358;
  }
  DAT_05150358 = lVar9;
  if ((((lVar9 == 0) || (*(long *)(lVar9 + 0xb0) == 0)) ||
      (*(long *)(*(long *)(lVar9 + 0xb0) + 8) == 0)) ||
     (((*(long *)(lVar9 + 0x488) == 0 || (*(long *)(*(long *)(lVar9 + 0x488) + 8) == 0)) ||
      ((*(long *)(lVar9 + 0x2b0) == 0 || (*(long *)(*(long *)(lVar9 + 0x2b0) + 8) == 0)))))) {
LAB_022a6988:
    uVar10 = FUN_0277e158(&local_e0);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    iVar5 = FUN_0277d6c4(&local_e0);
    if (((iVar5 == 0x3333) || (iVar5 = FUN_0277d6c4(&local_e0), iVar5 == 0x3332)) &&
       (uVar10 = FUN_011eaef0(&local_c8), (uVar10 & 1) != 0)) {
      return 0;
    }
    FUN_01ad5d04(local_130,&local_e0);
    uVar10 = FUN_01ae59b0(local_130);
    bVar11 = local_128._2_1_ >> 2 & 1;
    if ((uVar10 & 1) == 0) {
      bVar11 = local_128._2_1_ & 4;
    }
    if (bVar11 != 0) {
      return 0;
    }
    local_108 = puVar4 + 0x10;
    local_100 = (int)local_d0;
    iStack_fc = local_d0._4_4_;
    local_f0 = (int)local_d0 + 1;
    local_110 = PTR_DAT_04bbc1a0 + 0x10;
    iStack_ec = local_d0._4_4_ + 1;
    local_f8 = local_108;
    uVar10 = FUN_00978ce0(&local_110);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    local_134[0] = *param_2;
    local_138 = 0;
    if (7 < local_134[0]) {
      local_134[0] = 0xff;
    }
    uVar10 = FUN_022a6bb0(pfVar8,&local_a0,&local_d8,0,local_134,&local_138);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
  }
  else {
    uVar6 = FUN_0277d6c4(&local_e0);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_022a6988;
    uVar10 = FUN_0123d710(&local_e0,3,0);
    if ((uVar10 & 1) == 0) {
      if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x24a26848) {
        return 0;
      }
      local_108 = puVar4 + 0x10;
      local_100 = (int)local_d0;
      iStack_fc = local_d0._4_4_;
      local_f0 = (int)local_d0 + 1;
      local_110 = PTR_DAT_04bbc1a0 + 0x10;
      iStack_ec = local_d0._4_4_ + 1;
      local_f8 = local_108;
      uVar10 = FUN_00978ce0(&local_110);
      if ((uVar10 & 1) == 0) {
        return 0;
      }
      iVar5 = FUN_0277d6c4(&local_e0);
      if (iVar5 == 0xea79) {
        return 0;
      }
      FUN_0124c030(&local_110,&local_e0);
      iVar5 = FUN_0123db50(&local_108,CONCAT44(iStack_fc,local_100));
      if (iVar5 == 0x2d) {
        return 0;
      }
      iVar5 = FUN_0123db50(&local_108,CONCAT44(iStack_fc,local_100));
      if ((iVar5 - 2U & 0xfffffff9) == 0) {
        local_130[0] = ((float)(int)local_d0 * 5.0 + (float)((int)local_d0 + 1) * 5.0 + 5.0) * 0.5;
        local_128 = ((float)local_d0._4_4_ * 5.0 + (float)(local_d0._4_4_ + 1) * 5.0 + 5.0) * 0.5;
        uVar10 = FUN_01262040(0x40a00000,PTR_DAT_04bbcc10,local_130);
        if ((uVar10 & 1) != 0) {
          return 0;
        }
      }
      goto LAB_022a6a78;
    }
    local_108 = puVar4 + 0x10;
    local_100 = (int)local_d0;
    iStack_fc = local_d0._4_4_;
    local_f0 = (int)local_d0 + 1;
    local_110 = PTR_DAT_04bbc1a0 + 0x10;
    iStack_ec = local_d0._4_4_ + 1;
    local_f8 = local_108;
    uVar10 = FUN_00978ce0(&local_110);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    local_114[0] = *param_2;
    if (7 < local_114[0]) {
      local_114[0] = 0xff;
    }
    local_118 = uVar7;
    uVar10 = FUN_022a6bb0(pfVar8,&local_a0,&local_d8,uVar12,local_114,&local_118);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
  }
  uVar10 = FUN_011eac30(&local_d8);
  if ((uVar10 & 1) == 0) {
    return 0;
  }
LAB_022a6a78:
  *param_3 = local_e0;
  param_3[1] = uStack_dc;
  return 1;
}

