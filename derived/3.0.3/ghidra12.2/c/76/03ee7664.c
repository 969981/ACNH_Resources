
void FUN_03ee7664(float param_1,long param_2,long param_3,byte *param_4)

{
  short *psVar1;
  short *psVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  short sVar8;
  undefined8 *puVar9;
  ulong uVar10;
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  undefined4 *puVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
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
  float local_dc;
  float fStack_d8;
  float local_d4;
  float fStack_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  float local_a8;
  
  uVar5 = *(uint *)(param_3 + 0x48);
  if (*(uint *)(param_2 + 0x20) <= uVar5) {
    uVar5 = 0;
  }
  psVar1 = (short *)(*(long *)(param_2 + 0x28) + (long)(int)uVar5 * 4);
  if (*psVar1 == -1 || psVar1[1] == -1) {
    return;
  }
  local_b0 = 0;
  local_a8 = 0.0;
  uVar3 = *(undefined8 *)PTR_DAT_04bd0da0;
  uVar4 = *(undefined8 *)(PTR_DAT_04bd0da0 + 8);
  uVar5 = *(uint *)(param_3 + 0x88);
  local_c0 = uVar3;
  local_b8 = uVar4;
  if ((-1 < (int)uVar5) && ((*param_4 >> 2 & 1) != 0)) {
    lVar19 = *(long *)(*(long *)(param_2 + 0x10) + 0x360);
    if (*(uint *)(*(long *)(param_2 + 0x10) + 0x358) <= uVar5) {
      uVar5 = 0;
    }
    uVar13 = *(uint *)(lVar19 + (ulong)uVar5 * 0x290 + 0xe8);
    if (uVar13 == 0xffffffff) {
      lVar14 = *(long *)(param_2 + 8);
      uVar12 = (uint)psVar1[1];
      uVar6 = uVar12;
      if (*(uint *)(lVar14 + 0x30) <= (uint)(int)psVar1[1]) {
        uVar6 = 0;
      }
      if ((*(byte *)(*(long *)(lVar14 + 0x38) + (long)(int)uVar6) >> 1 & 1) == 0) {
        if (*(uint *)(lVar14 + 0x20) <= uVar12) {
          uVar12 = 0;
        }
        puVar9 = (undefined8 *)(*(long *)(lVar14 + 0x28) + (long)(int)uVar12 * 0x1c);
      }
      else {
        puVar9 = (undefined8 *)FUN_03ef9df0();
      }
LAB_03ee77e4:
      local_c0 = *puVar9;
      local_b8 = puVar9[1];
      local_a8 = *(float *)(puVar9 + 3);
      local_b0 = puVar9[2];
    }
    else {
      if (uVar13 == 0xfffffffe) {
        puVar9 = (undefined8 *)FUN_03ef9b40(*(undefined8 *)(param_2 + 8),(long)psVar1[1]);
        goto LAB_03ee77e4;
      }
      uVar6 = uVar13;
      if (*(uint *)(param_2 + 0x20) <= uVar13) {
        uVar6 = 0;
      }
      psVar2 = (short *)(*(long *)(param_2 + 0x28) + (long)(int)uVar6 * 4);
      sVar8 = psVar2[1];
      if (*psVar2 == -1 || sVar8 == -1) {
        return;
      }
      lVar14 = *(long *)(param_2 + 8);
      uVar12 = (uint)sVar8;
      uVar17 = *(uint *)(lVar14 + 0x30);
      lVar16 = *(long *)(lVar14 + 0x38);
      uVar6 = uVar12;
      if (uVar17 <= uVar12) {
        uVar6 = 0;
      }
      if ((*(byte *)(lVar16 + (int)uVar6) >> 1 & 1) == 0) {
        if (*(uint *)(lVar14 + 0x20) <= uVar12) {
          uVar12 = 0;
        }
        lVar18 = *(long *)(lVar14 + 0x28) + (long)(int)uVar12 * 0x1c;
      }
      else {
        lVar18 = FUN_03ef9df0();
        lVar14 = *(long *)(param_2 + 8);
        uVar17 = *(uint *)(lVar14 + 0x30);
        lVar16 = *(long *)(lVar14 + 0x38);
      }
      uVar12 = (uint)psVar1[1];
      uVar6 = uVar12;
      if (uVar17 <= (uint)(int)psVar1[1]) {
        uVar6 = 0;
      }
      if ((*(byte *)(lVar16 + (int)uVar6) >> 1 & 1) == 0) {
        if (*(uint *)(lVar14 + 0x20) <= uVar12) {
          uVar12 = 0;
        }
        lVar14 = *(long *)(lVar14 + 0x28) + (long)(int)uVar12 * 0x1c;
      }
      else {
        lVar14 = FUN_03ef9df0();
      }
      FUN_03ee48b0(&local_c0,lVar18,lVar14);
    }
    lVar14 = lVar19 + (ulong)uVar5 * 0x290;
    fVar33 = *(float *)(lVar14 + 0x50);
    fVar31 = *(float *)(lVar14 + 0x48);
    fVar32 = *(float *)(lVar14 + 0x4c);
    uVar6 = *(uint *)(lVar14 + 0x228);
    if (uVar6 == 0xffffffff) {
      fVar21 = *(float *)(lVar19 + (ulong)uVar5 * 0x290 + 0x168);
    }
    else {
      uVar12 = uVar6;
      if (*(uint *)(*(long *)(param_2 + 0x10) + 0x1f0) <= uVar6) {
        uVar12 = 0;
      }
      lVar14 = *(long *)(*(long *)(param_2 + 0x10) + 0x1f8) + (long)(int)uVar12 * 0xb0;
      iVar7 = *(int *)(lVar14 + 0x68);
      if (*(int *)(lVar14 + 0x48) < 0) {
        fVar20 = 0.0;
      }
      else {
        fVar20 = (float)FUN_03ee85bc(param_2);
        fVar20 = fVar20 + 0.0;
      }
      if (-1 < iVar7) {
        fVar21 = (float)FUN_03ee85bc(param_2,iVar7);
        fVar20 = fVar20 + fVar21;
      }
      if (*(uint *)(*(long *)(param_2 + 0x10) + 0x1f0) <= uVar6) {
        uVar6 = 0;
      }
      lVar14 = *(long *)(*(long *)(param_2 + 0x10) + 0x1f8) + (long)(int)uVar6 * 0xb0;
      fVar22 = *(float *)(lVar14 + 0xa8);
      fVar21 = *(float *)(lVar14 + 0x88);
      if (fVar20 <= fVar22) {
        fVar22 = fVar20;
      }
      if (fVar21 <= fVar20) {
        fVar21 = fVar22;
      }
    }
    uVar6 = *(uint *)(lVar19 + (ulong)uVar5 * 0x290 + 0x248);
    if (uVar6 == 0xffffffff) {
      fVar20 = *(float *)(lVar19 + (ulong)uVar5 * 0x290 + 0x188);
    }
    else {
      uVar12 = uVar6;
      if (*(uint *)(*(long *)(param_2 + 0x10) + 0x1f0) <= uVar6) {
        uVar12 = 0;
      }
      lVar14 = *(long *)(*(long *)(param_2 + 0x10) + 0x1f8) + (long)(int)uVar12 * 0xb0;
      iVar7 = *(int *)(lVar14 + 0x68);
      if (*(int *)(lVar14 + 0x48) < 0) {
        fVar22 = 0.0;
      }
      else {
        fVar22 = (float)FUN_03ee85bc(param_2);
        fVar22 = fVar22 + 0.0;
      }
      if (-1 < iVar7) {
        fVar20 = (float)FUN_03ee85bc(param_2,iVar7);
        fVar22 = fVar22 + fVar20;
      }
      if (*(uint *)(*(long *)(param_2 + 0x10) + 0x1f0) <= uVar6) {
        uVar6 = 0;
      }
      lVar14 = *(long *)(*(long *)(param_2 + 0x10) + 0x1f8) + (long)(int)uVar6 * 0xb0;
      fVar23 = *(float *)(lVar14 + 0xa8);
      fVar20 = *(float *)(lVar14 + 0x88);
      if (fVar22 <= fVar23) {
        fVar23 = fVar22;
      }
      if (fVar20 <= fVar22) {
        fVar20 = fVar23;
      }
    }
    uVar6 = *(uint *)(lVar19 + (ulong)uVar5 * 0x290 + 0x268);
    if (uVar6 == 0xffffffff) {
      fVar22 = *(float *)(lVar19 + (ulong)uVar5 * 0x290 + 0x1a8);
    }
    else {
      uVar5 = uVar6;
      if (*(uint *)(*(long *)(param_2 + 0x10) + 0x1f0) <= uVar6) {
        uVar5 = 0;
      }
      lVar19 = *(long *)(*(long *)(param_2 + 0x10) + 0x1f8) + (long)(int)uVar5 * 0xb0;
      iVar7 = *(int *)(lVar19 + 0x68);
      if (*(int *)(lVar19 + 0x48) < 0) {
        fVar23 = 0.0;
      }
      else {
        fVar23 = (float)FUN_03ee85bc(param_2);
        fVar23 = fVar23 + 0.0;
      }
      if (-1 < iVar7) {
        fVar22 = (float)FUN_03ee85bc(param_2,iVar7);
        fVar23 = fVar23 + fVar22;
      }
      if (*(uint *)(*(long *)(param_2 + 0x10) + 0x1f0) <= uVar6) {
        uVar6 = 0;
      }
      lVar19 = *(long *)(*(long *)(param_2 + 0x10) + 0x1f8) + (long)(int)uVar6 * 0xb0;
      fVar24 = *(float *)(lVar19 + 0xa8);
      fVar22 = *(float *)(lVar19 + 0x88);
      if (fVar23 <= fVar24) {
        fVar24 = fVar23;
      }
      if (fVar22 <= fVar23) {
        fVar22 = fVar24;
      }
    }
    fVar31 = fVar31 + fVar21;
    fVar32 = fVar32 + fVar20;
    fVar33 = fVar33 + fVar22;
    if (param_1 != 1.0) {
      fVar32 = local_b0._4_4_ + param_1 * (fVar32 - local_b0._4_4_);
      fVar31 = (float)local_b0 + param_1 * (fVar31 - (float)local_b0);
      fVar33 = local_a8 + param_1 * (fVar33 - local_a8);
    }
    local_a8 = fVar33;
    local_b0._4_4_ = fVar32;
    local_b0._0_4_ = fVar31;
    if (uVar13 == 0xffffffff) {
      lVar19 = *(long *)(param_2 + 8);
    }
    else {
      if (uVar13 == 0xfffffffe) {
        lVar19 = *(long *)(param_2 + 8);
        sVar8 = psVar1[1];
        FUN_03efa0c0(lVar19,(int)sVar8);
        uVar13 = (uint)sVar8;
        uVar5 = uVar13;
        if (*(uint *)(lVar19 + 0x10) <= (uint)(int)sVar8) {
          uVar5 = 0;
        }
        puVar15 = (undefined4 *)(*(long *)(lVar19 + 0x18) + (long)(int)uVar5 * 0x1c);
        *puVar15 = (float)local_c0;
        puVar15[1] = local_c0._4_4_;
        puVar15[2] = (float)local_b8;
        puVar15[3] = local_b8._4_4_;
        puVar15[4] = (float)local_b0;
        puVar15[5] = local_b0._4_4_;
        puVar15[6] = local_a8;
        if (*(uint *)(lVar19 + 0x30) <= uVar13) {
          uVar13 = 0;
        }
        *(undefined1 *)(*(long *)(lVar19 + 0x38) + (long)(int)uVar13) = 2;
        *(undefined1 *)(lVar19 + 0x40) = 0;
        goto LAB_03ee7d14;
      }
      lVar19 = *(long *)(param_2 + 8);
      if (*(uint *)(param_2 + 0x20) <= uVar13) {
        uVar13 = 0;
      }
      sVar8 = *(short *)(*(long *)(param_2 + 0x28) + (long)(int)uVar13 * 4 + 2);
      uVar13 = (uint)sVar8;
      uVar5 = uVar13;
      if (*(uint *)(lVar19 + 0x30) <= (uint)(int)sVar8) {
        uVar5 = 0;
      }
      if ((*(byte *)(*(long *)(lVar19 + 0x38) + (long)(int)uVar5) >> 1 & 1) == 0) {
        if (*(uint *)(lVar19 + 0x20) <= uVar13) {
          uVar13 = 0;
        }
        pfVar11 = (float *)(*(long *)(lVar19 + 0x28) + (long)(int)uVar13 * 0x1c);
      }
      else {
        pfVar11 = (float *)FUN_03ef9df0(lVar19);
        lVar19 = *(long *)(param_2 + 8);
      }
      fVar24 = pfVar11[2];
      fVar26 = pfVar11[3];
      fVar30 = *pfVar11;
      fVar27 = pfVar11[1];
      fVar29 = -(fVar24 * local_b0._4_4_) + local_a8 * fVar27 + (float)local_b0 * fVar26;
      fVar34 = (fVar24 * (float)local_b0 - local_a8 * fVar30) + local_b0._4_4_ * fVar26;
      fVar35 = -(fVar27 * (float)local_b0) + local_b0._4_4_ * fVar30 + local_a8 * fVar26;
      fVar21 = (-(fVar27 * local_b0._4_4_) - (float)local_b0 * fVar30) - local_a8 * fVar24;
      local_a8 = pfVar11[6] +
                 (((fVar30 * fVar34 - fVar27 * fVar29) + fVar26 * fVar35) - fVar24 * fVar21);
      fVar20 = *pfVar11;
      fVar23 = pfVar11[1];
      fVar28 = pfVar11[2];
      fVar25 = pfVar11[3];
      fVar32 = fVar20 * (float)local_c0;
      fVar22 = fVar20 * local_c0._4_4_;
      fVar33 = local_c0._4_4_ * fVar23;
      fVar31 = (float)local_c0 * fVar23;
      local_c0 = CONCAT44(-(fVar20 * (float)local_b8) + local_c0._4_4_ * fVar25 +
                          local_b8._4_4_ * fVar23 + (float)local_c0 * fVar28,
                          (local_b8._4_4_ * fVar20 + (float)local_c0 * fVar25 +
                          (float)local_b8 * fVar23) - local_c0._4_4_ * fVar28);
      local_b8 = CONCAT44(((-fVar32 + local_b8._4_4_ * fVar25) - fVar33) - (float)local_b8 * fVar28,
                          ((fVar22 + (float)local_b8 * fVar25) - fVar31) + local_b8._4_4_ * fVar28);
      local_b0._0_4_ =
           pfVar11[4] + ((-(fVar24 * fVar34) + fVar26 * fVar29 + fVar27 * fVar35) - fVar30 * fVar21)
      ;
      local_b0._4_4_ =
           pfVar11[5] + (((fVar26 * fVar34 + fVar24 * fVar29) - fVar30 * fVar35) - fVar27 * fVar21);
    }
    sVar8 = psVar1[1];
    FUN_03efa0c0(lVar19,(int)sVar8);
    uVar13 = (uint)sVar8;
    uVar5 = uVar13;
    if (*(uint *)(lVar19 + 0x20) <= (uint)(int)sVar8) {
      uVar5 = 0;
    }
    puVar15 = (undefined4 *)(*(long *)(lVar19 + 0x28) + (long)(int)uVar5 * 0x1c);
    *puVar15 = (float)local_c0;
    puVar15[1] = local_c0._4_4_;
    puVar15[2] = (float)local_b8;
    puVar15[3] = local_b8._4_4_;
    puVar15[4] = (float)local_b0;
    puVar15[5] = local_b0._4_4_;
    puVar15[6] = local_a8;
    if (*(uint *)(lVar19 + 0x30) <= uVar13) {
      uVar13 = 0;
    }
    *(undefined1 *)(*(long *)(lVar19 + 0x38) + (long)(int)uVar13) = 1;
    *(undefined1 *)(lVar19 + 0x41) = 0;
  }
LAB_03ee7d14:
  uVar5 = *(uint *)(param_3 + 200);
  local_b0 = 0;
  local_a8 = 0.0;
  if ((int)uVar5 < 0) {
    return;
  }
  if ((*param_4 >> 3 & 1) == 0) {
    return;
  }
  lVar19 = *(long *)(*(long *)(param_2 + 0x10) + 0x360);
  if (*(uint *)(*(long *)(param_2 + 0x10) + 0x358) <= uVar5) {
    uVar5 = 0;
  }
  uVar13 = *(uint *)(lVar19 + (ulong)uVar5 * 0x290 + 0xe8);
  if (uVar13 == 0xffffffff) {
    lVar14 = *(long *)(param_2 + 8);
    uVar12 = (uint)psVar1[1];
    uVar6 = uVar12;
    if (*(uint *)(lVar14 + 0x30) <= (uint)(int)psVar1[1]) {
      uVar6 = 0;
    }
    if ((*(byte *)(*(long *)(lVar14 + 0x38) + (long)(int)uVar6) >> 1 & 1) == 0) {
      if (*(uint *)(lVar14 + 0x20) <= uVar12) {
        uVar12 = 0;
      }
      puVar9 = (undefined8 *)(*(long *)(lVar14 + 0x28) + (long)(int)uVar12 * 0x1c);
    }
    else {
      local_c0 = uVar3;
      local_b8 = uVar4;
      puVar9 = (undefined8 *)FUN_03ef9df0();
    }
  }
  else {
    if (uVar13 != 0xfffffffe) {
      uVar6 = uVar13;
      if (*(uint *)(param_2 + 0x20) <= uVar13) {
        uVar6 = 0;
      }
      psVar2 = (short *)(*(long *)(param_2 + 0x28) + (long)(int)uVar6 * 4);
      sVar8 = psVar2[1];
      if (*psVar2 == -1 || sVar8 == -1) {
        return;
      }
      lVar14 = *(long *)(param_2 + 8);
      uVar12 = (uint)sVar8;
      uVar17 = *(uint *)(lVar14 + 0x30);
      lVar16 = *(long *)(lVar14 + 0x38);
      uVar6 = uVar12;
      if (uVar17 <= uVar12) {
        uVar6 = 0;
      }
      if ((*(byte *)(lVar16 + (int)uVar6) >> 1 & 1) == 0) {
        if (*(uint *)(lVar14 + 0x20) <= uVar12) {
          uVar12 = 0;
        }
        lVar18 = *(long *)(lVar14 + 0x28) + (long)(int)uVar12 * 0x1c;
        local_c0 = uVar3;
        local_b8 = uVar4;
      }
      else {
        local_c0 = uVar3;
        local_b8 = uVar4;
        lVar18 = FUN_03ef9df0();
        lVar14 = *(long *)(param_2 + 8);
        uVar17 = *(uint *)(lVar14 + 0x30);
        lVar16 = *(long *)(lVar14 + 0x38);
      }
      uVar12 = (uint)psVar1[1];
      uVar6 = uVar12;
      if (uVar17 <= (uint)(int)psVar1[1]) {
        uVar6 = 0;
      }
      if ((*(byte *)(lVar16 + (int)uVar6) >> 1 & 1) == 0) {
        if (*(uint *)(lVar14 + 0x20) <= uVar12) {
          uVar12 = 0;
        }
        lVar14 = *(long *)(lVar14 + 0x28) + (long)(int)uVar12 * 0x1c;
      }
      else {
        lVar14 = FUN_03ef9df0();
      }
      FUN_03ee48b0(&local_c0,lVar18,lVar14);
      goto LAB_03ee7e94;
    }
    local_c0 = uVar3;
    local_b8 = uVar4;
    puVar9 = (undefined8 *)FUN_03ef9b40(*(undefined8 *)(param_2 + 8),(long)psVar1[1]);
  }
  local_c0 = *puVar9;
  local_b8 = puVar9[1];
  local_a8 = *(float *)(puVar9 + 3);
  local_b0 = puVar9[2];
LAB_03ee7e94:
  uVar6 = *(uint *)(lVar19 + (ulong)uVar5 * 0x290 + 0x1c8);
  if (uVar6 == 0xffffffff) {
    local_c4 = *(float *)(lVar19 + (ulong)uVar5 * 0x290 + 0x108);
  }
  else {
    uVar12 = uVar6;
    if (*(uint *)(*(long *)(param_2 + 0x10) + 0x1f0) <= uVar6) {
      uVar12 = 0;
    }
    lVar14 = *(long *)(*(long *)(param_2 + 0x10) + 0x1f8) + (long)(int)uVar12 * 0xb0;
    iVar7 = *(int *)(lVar14 + 0x68);
    if (*(int *)(lVar14 + 0x48) < 0) {
      fVar33 = 0.0;
    }
    else {
      fVar33 = (float)FUN_03ee85bc(param_2);
      fVar33 = fVar33 + 0.0;
    }
    if (-1 < iVar7) {
      fVar31 = (float)FUN_03ee85bc(param_2,iVar7);
      fVar33 = fVar33 + fVar31;
    }
    if (*(uint *)(*(long *)(param_2 + 0x10) + 0x1f0) <= uVar6) {
      uVar6 = 0;
    }
    lVar14 = *(long *)(*(long *)(param_2 + 0x10) + 0x1f8) + (long)(int)uVar6 * 0xb0;
    fVar31 = *(float *)(lVar14 + 0xa8);
    local_c4 = *(float *)(lVar14 + 0x88);
    if (fVar33 <= fVar31) {
      fVar31 = fVar33;
    }
    if (local_c4 <= fVar33) {
      local_c4 = fVar31;
    }
  }
  uVar6 = *(uint *)(lVar19 + (ulong)uVar5 * 0x290 + 0x1e8);
  if (uVar6 == 0xffffffff) {
    local_cc = *(float *)(lVar19 + (ulong)uVar5 * 0x290 + 0x128);
  }
  else {
    uVar12 = uVar6;
    if (*(uint *)(*(long *)(param_2 + 0x10) + 0x1f0) <= uVar6) {
      uVar12 = 0;
    }
    lVar14 = *(long *)(*(long *)(param_2 + 0x10) + 0x1f8) + (long)(int)uVar12 * 0xb0;
    iVar7 = *(int *)(lVar14 + 0x68);
    if (*(int *)(lVar14 + 0x48) < 0) {
      fVar33 = 0.0;
    }
    else {
      fVar33 = (float)FUN_03ee85bc(param_2);
      fVar33 = fVar33 + 0.0;
    }
    if (-1 < iVar7) {
      fVar31 = (float)FUN_03ee85bc(param_2,iVar7);
      fVar33 = fVar33 + fVar31;
    }
    if (*(uint *)(*(long *)(param_2 + 0x10) + 0x1f0) <= uVar6) {
      uVar6 = 0;
    }
    lVar14 = *(long *)(*(long *)(param_2 + 0x10) + 0x1f8) + (long)(int)uVar6 * 0xb0;
    fVar31 = *(float *)(lVar14 + 0xa8);
    local_cc = *(float *)(lVar14 + 0x88);
    if (fVar33 <= fVar31) {
      fVar31 = fVar33;
    }
    if (local_cc <= fVar33) {
      local_cc = fVar31;
    }
  }
  uVar6 = *(uint *)(lVar19 + (ulong)uVar5 * 0x290 + 0x208);
  if (uVar6 == 0xffffffff) {
    local_c8 = *(float *)(lVar19 + (ulong)uVar5 * 0x290 + 0x148);
  }
  else {
    uVar12 = uVar6;
    if (*(uint *)(*(long *)(param_2 + 0x10) + 0x1f0) <= uVar6) {
      uVar12 = 0;
    }
    lVar14 = *(long *)(*(long *)(param_2 + 0x10) + 0x1f8) + (long)(int)uVar12 * 0xb0;
    iVar7 = *(int *)(lVar14 + 0x68);
    if (*(int *)(lVar14 + 0x48) < 0) {
      fVar33 = 0.0;
    }
    else {
      fVar33 = (float)FUN_03ee85bc(param_2);
      fVar33 = fVar33 + 0.0;
    }
    if (-1 < iVar7) {
      fVar31 = (float)FUN_03ee85bc(param_2,iVar7);
      fVar33 = fVar33 + fVar31;
    }
    if (*(uint *)(*(long *)(param_2 + 0x10) + 0x1f0) <= uVar6) {
      uVar6 = 0;
    }
    lVar14 = *(long *)(*(long *)(param_2 + 0x10) + 0x1f8) + (long)(int)uVar6 * 0xb0;
    fVar31 = *(float *)(lVar14 + 0xa8);
    local_c8 = *(float *)(lVar14 + 0x88);
    if (fVar33 <= fVar31) {
      fVar31 = fVar33;
    }
    if (local_c8 <= fVar33) {
      local_c8 = fVar31;
    }
  }
  lVar14 = lVar19 + (ulong)uVar5 * 0x290;
  uVar10 = FUN_03efb424(&local_dc,&local_cc,lVar14 + 0x98,lVar14 + 0xc0,lVar14 + 0x280);
  if ((uVar10 & 1) != 0) {
    lVar19 = lVar19 + (ulong)uVar5 * 0x290;
    fVar32 = *(float *)(lVar19 + 0x70);
    fVar20 = *(float *)(lVar19 + 0x74);
    fVar23 = *(float *)(lVar19 + 0x78);
    fVar22 = *(float *)(lVar19 + 0x7c);
    fVar21 = fVar32 * fStack_d8;
    fVar33 = ((-(fVar32 * local_dc) + fStack_d0 * fVar22) - fStack_d8 * fVar20) - local_d4 * fVar23;
    fVar31 = (fStack_d0 * fVar32 + local_dc * fVar22 + local_d4 * fVar20) - fStack_d8 * fVar23;
    fStack_d8 = -(fVar32 * local_d4) + fStack_d8 * fVar22 + fStack_d0 * fVar20 + local_dc * fVar23;
    local_d4 = ((fVar21 + local_d4 * fVar22) - local_dc * fVar20) + fStack_d0 * fVar23;
    fVar32 = SQRT(fVar31 * fVar31 + fVar33 * fVar33 + fStack_d8 * fStack_d8 + local_d4 * local_d4);
    local_dc = fVar31;
    fStack_d0 = fVar33;
    if (0.0 < fVar32) {
      fVar32 = 1.0 / fVar32;
      fStack_d0 = fVar33 * fVar32;
      local_dc = fVar31 * fVar32;
      fStack_d8 = fStack_d8 * fVar32;
      local_d4 = local_d4 * fVar32;
    }
    if (param_1 == 1.0) {
      local_c0 = CONCAT44(fStack_d8,local_dc);
      fVar32 = fStack_d0;
      fVar33 = local_d4;
    }
    else {
      fVar31 = fStack_d8 * local_c0._4_4_ + local_dc * (float)local_c0 + local_d4 * (float)local_b8
               + fStack_d0 * local_b8._4_4_;
      fVar33 = 1.0;
      if ((fVar31 <= 1.0) && (fVar33 = fVar31, fVar31 < -1.0)) {
        fVar33 = -1.0;
      }
      fVar31 = fVar33;
      if (fVar33 < 0.0) {
        fVar31 = -fVar33;
      }
      fVar32 = acosf(fVar31);
      fVar21 = sinf(fVar32);
      fVar31 = -fVar21;
      if (0.0 <= fVar21) {
        fVar31 = fVar21;
      }
      if (1.1920929e-07 <= fVar31) {
        fVar31 = sinf(fVar32 - fVar32 * param_1);
        fVar31 = (1.0 / fVar21) * fVar31;
        param_1 = sinf(fVar32 * param_1);
        param_1 = (1.0 / fVar21) * param_1;
      }
      else {
        fVar31 = 1.0 - param_1;
      }
      if (fVar33 < 0.0) {
        param_1 = -param_1;
      }
      fVar33 = param_1 * local_d4 + (float)local_b8 * fVar31;
      fVar32 = param_1 * fStack_d0 + local_b8._4_4_ * fVar31;
      local_c0 = CONCAT44(param_1 * fStack_d8 + local_c0._4_4_ * fVar31,
                          param_1 * local_dc + (float)local_c0 * fVar31);
    }
    local_b8 = CONCAT44(fVar32,fVar33);
  }
  if (uVar13 == 0xffffffff) {
    lVar19 = *(long *)(param_2 + 8);
    sVar8 = psVar1[1];
    FUN_03efa0c0(lVar19,(int)sVar8);
    uVar13 = (uint)sVar8;
    uVar5 = uVar13;
    if (*(uint *)(lVar19 + 0x20) <= (uint)(int)sVar8) {
      uVar5 = 0;
    }
    puVar15 = (undefined4 *)(*(long *)(lVar19 + 0x28) + (long)(int)uVar5 * 0x1c);
    *puVar15 = (float)local_c0;
    puVar15[1] = local_c0._4_4_;
    puVar15[2] = (float)local_b8;
    puVar15[3] = local_b8._4_4_;
    puVar15[4] = (float)local_b0;
    puVar15[5] = local_b0._4_4_;
    puVar15[6] = local_a8;
    if (*(uint *)(lVar19 + 0x30) <= uVar13) {
      uVar13 = 0;
    }
    *(undefined1 *)(*(long *)(lVar19 + 0x38) + (long)(int)uVar13) = 1;
    *(undefined1 *)(lVar19 + 0x41) = 0;
  }
  else if (uVar13 == 0xfffffffe) {
    lVar19 = *(long *)(param_2 + 8);
    sVar8 = psVar1[1];
    FUN_03efa0c0(lVar19,(int)sVar8);
    uVar13 = (uint)sVar8;
    uVar5 = uVar13;
    if (*(uint *)(lVar19 + 0x10) <= (uint)(int)sVar8) {
      uVar5 = 0;
    }
    puVar15 = (undefined4 *)(*(long *)(lVar19 + 0x18) + (long)(int)uVar5 * 0x1c);
    *puVar15 = (float)local_c0;
    puVar15[1] = local_c0._4_4_;
    puVar15[2] = (float)local_b8;
    puVar15[3] = local_b8._4_4_;
    puVar15[4] = (float)local_b0;
    puVar15[5] = local_b0._4_4_;
    puVar15[6] = local_a8;
    if (*(uint *)(lVar19 + 0x30) <= uVar13) {
      uVar13 = 0;
    }
    *(undefined1 *)(*(long *)(lVar19 + 0x38) + (long)(int)uVar13) = 2;
    *(undefined1 *)(lVar19 + 0x40) = 0;
  }
  else {
    lVar19 = *(long *)(param_2 + 8);
    if (*(uint *)(param_2 + 0x20) <= uVar13) {
      uVar13 = 0;
    }
    sVar8 = *(short *)(*(long *)(param_2 + 0x28) + (long)(int)uVar13 * 4 + 2);
    uVar13 = (uint)sVar8;
    uVar5 = uVar13;
    if (*(uint *)(lVar19 + 0x30) <= (uint)(int)sVar8) {
      uVar5 = 0;
    }
    if ((*(byte *)(*(long *)(lVar19 + 0x38) + (long)(int)uVar5) >> 1 & 1) == 0) {
      if (*(uint *)(lVar19 + 0x20) <= uVar13) {
        uVar13 = 0;
      }
      pfVar11 = (float *)(*(long *)(lVar19 + 0x28) + (long)(int)uVar13 * 0x1c);
    }
    else {
      pfVar11 = (float *)FUN_03ef9df0(lVar19);
      lVar19 = *(long *)(param_2 + 8);
    }
    fVar31 = pfVar11[2];
    fVar32 = pfVar11[3];
    fVar22 = *pfVar11;
    fVar20 = pfVar11[1];
    fVar21 = -(fVar31 * local_b0._4_4_) + local_a8 * fVar20 + (float)local_b0 * fVar32;
    fVar23 = (fVar31 * (float)local_b0 - local_a8 * fVar22) + local_b0._4_4_ * fVar32;
    fVar24 = -(fVar20 * (float)local_b0) + local_b0._4_4_ * fVar22 + local_a8 * fVar32;
    fVar33 = (-(fVar20 * local_b0._4_4_) - (float)local_b0 * fVar22) - local_a8 * fVar31;
    local_b0._0_4_ =
         pfVar11[4] + ((-(fVar31 * fVar23) + fVar32 * fVar21 + fVar20 * fVar24) - fVar22 * fVar33);
    local_b0._4_4_ =
         pfVar11[5] + (((fVar32 * fVar23 + fVar31 * fVar21) - fVar22 * fVar24) - fVar20 * fVar33);
    local_a8 = pfVar11[6] +
               (((fVar22 * fVar23 - fVar20 * fVar21) + fVar32 * fVar24) - fVar31 * fVar33);
    fVar22 = *pfVar11;
    fVar24 = pfVar11[1];
    fVar29 = pfVar11[2];
    fVar26 = pfVar11[3];
    fVar20 = fVar22 * (float)local_c0;
    fVar23 = fVar22 * local_c0._4_4_;
    fVar31 = local_c0._4_4_ * fVar24;
    fVar33 = (float)local_b8 * fVar24;
    fVar32 = (float)local_b8 * fVar29;
    fVar21 = local_c0._4_4_ * fVar29;
    local_c0._4_4_ =
         -(fVar22 * (float)local_b8) + local_c0._4_4_ * fVar26 + local_b8._4_4_ * fVar24 +
         (float)local_c0 * fVar29;
    local_b8._0_4_ =
         ((fVar23 + (float)local_b8 * fVar26) - (float)local_c0 * fVar24) + local_b8._4_4_ * fVar29;
    sVar8 = psVar1[1];
    local_c0._0_4_ = (local_b8._4_4_ * fVar22 + (float)local_c0 * fVar26 + fVar33) - fVar21;
    local_b8._4_4_ = ((-fVar20 + local_b8._4_4_ * fVar26) - fVar31) - fVar32;
    FUN_03efa0c0(lVar19,(int)sVar8);
    uVar13 = (uint)sVar8;
    uVar5 = uVar13;
    if (*(uint *)(lVar19 + 0x20) <= (uint)(int)sVar8) {
      uVar5 = 0;
    }
    pfVar11 = (float *)(*(long *)(lVar19 + 0x28) + (long)(int)uVar5 * 0x1c);
    *pfVar11 = (float)local_c0;
    pfVar11[1] = local_c0._4_4_;
    pfVar11[2] = (float)local_b8;
    pfVar11[3] = local_b8._4_4_;
    pfVar11[4] = (float)local_b0;
    pfVar11[5] = local_b0._4_4_;
    pfVar11[6] = local_a8;
    if (*(uint *)(lVar19 + 0x30) <= uVar13) {
      uVar13 = 0;
    }
    *(undefined1 *)(*(long *)(lVar19 + 0x38) + (long)(int)uVar13) = 1;
    *(undefined1 *)(lVar19 + 0x41) = 0;
  }
  return;
}

