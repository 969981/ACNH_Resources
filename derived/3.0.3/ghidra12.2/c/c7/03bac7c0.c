
/* WARNING: Removing unreachable block (ram,0x03bad2a4) */
/* WARNING: Removing unreachable block (ram,0x03bad238) */
/* WARNING: Removing unreachable block (ram,0x03bad1e0) */
/* WARNING: Removing unreachable block (ram,0x03bad160) */
/* WARNING: Removing unreachable block (ram,0x03bad080) */
/* WARNING: Removing unreachable block (ram,0x03bace50) */
/* WARNING: Removing unreachable block (ram,0x03bace08) */
/* WARNING: Removing unreachable block (ram,0x03bace28) */
/* WARNING: Removing unreachable block (ram,0x03bad35c) */
/* WARNING: Removing unreachable block (ram,0x03bad380) */
/* WARNING: Removing unreachable block (ram,0x03bad444) */
/* WARNING: Removing unreachable block (ram,0x03bad48c) */
/* WARNING: Removing unreachable block (ram,0x03bad684) */
/* WARNING: Removing unreachable block (ram,0x03bad6cc) */
/* WARNING: Removing unreachable block (ram,0x03bad514) */
/* WARNING: Removing unreachable block (ram,0x03bad434) */
/* WARNING: Removing unreachable block (ram,0x03bad40c) */
/* WARNING: Removing unreachable block (ram,0x03bacd44) */
/* WARNING: Removing unreachable block (ram,0x03bacd14) */
/* WARNING: Removing unreachable block (ram,0x03baccec) */
/* WARNING: Removing unreachable block (ram,0x03bac994) */
/* WARNING: Removing unreachable block (ram,0x03bad044) */
/* WARNING: Removing unreachable block (ram,0x03bad13c) */
/* WARNING: Removing unreachable block (ram,0x03bad198) */
/* WARNING: Removing unreachable block (ram,0x03bad204) */
/* WARNING: Removing unreachable block (ram,0x03bad280) */
/* WARNING: Removing unreachable block (ram,0x03bad2cc) */
/* WARNING: Removing unreachable block (ram,0x03bac9bc) */
/* WARNING: Removing unreachable block (ram,0x03bacd6c) */
/* WARNING: Removing unreachable block (ram,0x03bad6a4) */
/* WARNING: Removing unreachable block (ram,0x03bad468) */
/* WARNING: Removing unreachable block (ram,0x03bad3a8) */
/* WARNING: Removing unreachable block (ram,0x03bad020) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03bac7c0(float param_1,float param_2,float param_3,float param_4,float *param_5,int param_6
                 ,long *param_7,uint param_8,int param_9)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  float *pfVar13;
  undefined4 *puVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_c8;
  int local_c0;
  uint local_bc;
  uint local_b8;
  uint uStack_b4;
  undefined8 local_b0;
  float local_a8 [2];
  undefined8 local_a0;
  float local_98;
  uint local_94;
  
  fVar16 = 2.0 - param_4;
  fVar17 = 1.0;
  if (param_4 <= 1.0) {
    fVar16 = 1.0;
    fVar17 = param_4;
  }
  fVar16 = fVar16 * param_1;
  if (param_7 == (long *)0x0) {
    if (param_8 == 1) {
      fVar16 = fVar16 * 0.7071;
      fVar17 = *param_5;
      if (*param_5 <= fVar16) {
        fVar17 = fVar16;
      }
      fVar18 = param_5[1];
      if (param_5[1] <= fVar16) {
        fVar18 = fVar16;
      }
      *param_5 = fVar17;
      param_5[1] = fVar18;
      return;
    }
    if (param_8 == 0) {
      *param_5 = *param_5 + fVar16 * 0.7071;
      param_5[1] = param_5[1] + fVar16 * 0.7071;
      return;
    }
    return;
  }
  uVar4 = (**(code **)(*param_7 + 0x20))(param_7);
  if ((uVar4 & 1) != 0) {
    fVar17 = fVar17 * param_1;
    if (param_8 == 1) {
      param_8 = 1;
      fVar18 = param_5[5];
      if (param_5[5] <= fVar17) {
        fVar18 = fVar17;
      }
    }
    else {
      if (param_8 != 0) goto LAB_03bac8d8;
      fVar18 = fVar17 + param_5[5];
    }
    param_5[5] = fVar18;
  }
LAB_03bac8d8:
  fVar17 = 1.0;
  if (param_3 <= 1.0) {
    fVar17 = param_3;
  }
  if (fVar17 < 0.0) {
    fVar18 = 1.0;
    if (0.0 < fVar17 + 1.0) {
      fVar18 = param_2 / (fVar17 + 1.0);
    }
    param_2 = fVar18;
    fVar17 = 0.0;
  }
  fVar18 = 0.0;
  if (param_2 <= 1.0) {
    fVar18 = 1.0 - param_2;
  }
  fVar19 = 1.0;
  if (0.0 <= param_2) {
    fVar19 = fVar18;
  }
  if (fVar17 <= fVar19) {
    fVar17 = fVar19;
  }
  fVar19 = *(float *)((long)param_7 + 0x1c);
  fVar18 = fVar19 + (1.0 - fVar19) * fVar17;
  if (fVar19 <= 0.0) {
    fVar18 = fVar17;
  }
  uVar4 = (**(code **)(*param_7 + 0x28))(param_7);
  iVar11 = _DAT_041022b0;
  uVar10 = local_c8._4_4_;
  if (fVar18 != 0.0) {
    local_94 = param_8;
    if ((uVar4 & 1) != 0) {
      uVar10 = (uint)(fVar18 * 2.1474836e+09);
      local_98 = 0.0;
      local_a8[0] = 0.0;
      local_a8[1] = 0.0;
      local_a0._0_4_ = 0.0;
      local_a0._4_4_ = 0.0;
      param_6 = param_6 - *(int *)((long)param_7 + 0x24);
      local_b0 = 0xffffffff;
      if (uVar10 < 2) {
        uVar10 = 1;
      }
      local_b8 = param_6 - uVar10;
      uStack_b4 = (uVar10 + param_6) - 1;
      if (uStack_b4 < local_b8) {
        local_b0 = CONCAT44(0xffffffff,local_b8);
        local_b8 = 0;
      }
      puVar14 = (undefined4 *)((long)param_7 + 0x2c);
      uVar4 = (**(code **)(*param_7 + 0x18))(param_7);
      uVar7 = 4;
      if ((uVar4 & 1) != 0) {
        uVar7 = 5;
      }
      uVar6 = 0;
      pfVar13 = local_a8;
      do {
        uVar12 = (uint)uVar6;
        local_c8 = CONCAT44(local_c8._4_4_,uVar12);
        puVar2 = puVar14 + (uVar6 & 0xffffffff);
        if (4 < uVar12) {
          puVar2 = puVar14;
        }
        uVar3 = *puVar2;
        uVar5 = (**(code **)(*param_7 + 0x18))(param_7);
        uVar9 = 3;
        if ((uVar5 & 1) != 0) {
          uVar9 = 4;
        }
        iVar11 = -1;
        if (uVar6 < uVar9) {
          uVar9 = (ulong)(uVar12 + 1);
          if (4 < uVar12 + 1) {
            uVar9 = 0;
          }
          iVar11 = puVar14[uVar9] + -1;
        }
        local_c8 = CONCAT44(iVar11,uVar3);
        pfVar1 = pfVar13 + 1;
        if (uVar7 - 1 <= uVar6) {
          pfVar1 = local_a8;
        }
        uVar6 = uVar6 + 1;
        FUN_03bad850((float)uVar10 + (float)uVar10,pfVar13,pfVar1,&local_c8,&local_b8,param_9);
        pfVar13 = pfVar13 + 1;
      } while (uVar7 != uVar6);
      if (param_9 == 1) {
        fVar17 = SQRT(local_a8[0]);
        if (NAN(fVar17)) {
          fVar17 = sqrtf(local_a8[0]);
        }
        local_a8[0] = fVar17;
        fVar17 = SQRT(local_a8[1]);
        if (NAN(fVar17)) {
          fVar17 = sqrtf(local_a8[1]);
        }
        local_a8[1] = fVar17;
        fVar17 = SQRT((float)local_a0);
        if (NAN(fVar17)) {
          fVar17 = sqrtf((float)local_a0);
        }
        local_a0 = CONCAT44(local_a0._4_4_,fVar17);
        fVar17 = SQRT(local_a0._4_4_);
        if (NAN(fVar17)) {
          fVar17 = sqrtf(local_a0._4_4_);
        }
        local_a0._4_4_ = fVar17;
        if ((uVar4 & 1) != 0) {
          fVar17 = SQRT(local_98);
          if (NAN(fVar17)) {
            fVar17 = sqrtf(local_98);
          }
          local_98 = fVar17;
        }
      }
      fVar17 = fVar16 * *(float *)(param_7 + 4);
      if (local_94 != 1) {
        if (local_94 == 0) {
          param_5[3] = param_5[3] + fVar17 * local_a8[1];
          param_5[4] = param_5[4] + fVar16 * local_98;
          param_5[1] = param_5[1] + fVar16 * local_a8[0];
          param_5[2] = param_5[2] + fVar17 * (float)local_a0;
          *param_5 = *param_5 + fVar16 * local_a0._4_4_;
          return;
        }
        return;
      }
      fVar18 = param_5[4];
      if (param_5[4] <= fVar16 * local_98) {
        fVar18 = fVar16 * local_98;
      }
      fVar19 = param_5[1];
      if (param_5[1] <= fVar16 * local_a8[0]) {
        fVar19 = fVar16 * local_a8[0];
      }
      fVar20 = param_5[3];
      if (param_5[3] <= fVar17 * local_a8[1]) {
        fVar20 = fVar17 * local_a8[1];
      }
      param_5[3] = fVar20;
      param_5[4] = fVar18;
      fVar18 = param_5[2];
      if (param_5[2] <= fVar17 * (float)local_a0) {
        fVar18 = fVar17 * (float)local_a0;
      }
      param_5[1] = fVar19;
      param_5[2] = fVar18;
      fVar17 = *param_5;
      if (*param_5 <= fVar16 * local_a0._4_4_) {
        fVar17 = fVar16 * local_a0._4_4_;
      }
      *param_5 = fVar17;
      return;
    }
    if (DAT_05aec018 == '\0') {
      uVar10 = (uint)(fVar18 * 2.1474836e+09);
      local_98 = 0.0;
      local_a8[0] = 0.0;
      local_a8[1] = 0.0;
      local_a0 = 0;
      local_b0 = 0xffffffff;
      if (uVar10 < 2) {
        uVar10 = 1;
      }
      local_b8 = (param_6 - uVar10) + 0xc0000000;
      uStack_b4 = param_6 + -0x40000001 + uVar10;
      fVar17 = (float)uVar10 + (float)uVar10;
      if (uStack_b4 < local_b8) {
        local_b0 = CONCAT44(0xffffffff,local_b8);
        local_b8 = 0;
      }
      local_c0 = 3;
      local_bc = 0;
      local_c8 = 0x7fffffff00000000;
      FUN_03bad850(fVar17,local_a8,(long)&local_a0 + 4,&local_c8,&local_b8,param_9);
      local_c0 = 0;
      local_bc = 3;
      local_c8 = 0xffffffff80000000;
      FUN_03bad850(fVar17,(long)&local_a0 + 4,local_a8,&local_c8,&local_b8,param_9);
      if (param_9 == 1) {
        fVar17 = SQRT(local_a8[0]);
        if (NAN(fVar17)) {
          fVar17 = sqrtf(local_a8[0]);
        }
        local_a8[0] = fVar17;
        fVar17 = SQRT(local_a0._4_4_);
        if (NAN(fVar17)) {
          fVar17 = sqrtf(local_a0._4_4_);
        }
        local_a0 = (ulong)(uint)fVar17 << 0x20;
      }
      local_b8 = local_94;
      if (local_94 != 1) {
LAB_03bad11c:
        if (local_b8 != 0) {
          return;
        }
        param_5[1] = param_5[1] + fVar16 * local_a8[0];
        fVar18 = *param_5 + fVar16 * local_a0._4_4_;
        goto LAB_03bad778;
      }
LAB_03bacf98:
      fVar18 = *param_5;
      fVar17 = param_5[1];
      if (param_5[1] <= fVar16 * local_a8[0]) {
        fVar17 = fVar16 * local_a8[0];
      }
      param_5[1] = fVar17;
    }
    else {
      uVar10 = (uint)(fVar18 * 2.1474836e+09);
      local_98 = 0.0;
      local_a8[0] = 0.0;
      local_a8[1] = 0.0;
      local_a0 = 0;
      param_6 = param_6 - *(int *)((long)param_7 + 0x24);
      local_b0 = 0xffffffff;
      if (uVar10 < 2) {
        uVar10 = 1;
      }
      local_b8 = param_6 - uVar10;
      uStack_b4 = (uVar10 + param_6) - 1;
      if (uStack_b4 < local_b8) {
        local_b0 = CONCAT44(0xffffffff,local_b8);
        local_b8 = 0;
      }
      fVar17 = (float)uVar10 + (float)uVar10;
      local_c8 = (ulong)local_c8._4_4_ << 0x20;
      local_c0 = _DAT_04102370;
      local_94 = 0;
      uVar3 = *(undefined4 *)((long)param_7 + 0x2c);
      local_bc = param_8;
      (**(code **)(*param_7 + 0x18))(param_7);
      local_94 = 1;
      local_c8._4_4_ = (int)param_7[6] + -1;
      local_c8._0_4_ = uVar3;
      FUN_03bad850(fVar17,local_a8 + local_c0,local_a8 + iVar11,&local_c8,&local_b8,1);
      iVar11 = DAT_041022b4;
      local_c8 = CONCAT44(local_c8._4_4_,1);
      local_c0 = DAT_04102374;
      local_94 = 1;
      lVar15 = param_7[6];
      (**(code **)(*param_7 + 0x18))(param_7);
      local_94 = 2;
      local_c8._4_4_ = *(int *)((long)param_7 + 0x34) + -1;
      local_c8._0_4_ = (int)lVar15;
      FUN_03bad850(fVar17,local_a8 + local_c0,local_a8 + iVar11,&local_c8,&local_b8,1);
      iVar11 = DAT_041022b8;
      local_c8 = CONCAT44(local_c8._4_4_,2);
      local_c0 = DAT_04102378;
      local_94 = 2;
      uVar3 = *(undefined4 *)((long)param_7 + 0x34);
      (**(code **)(*param_7 + 0x18))(param_7);
      local_94 = 3;
      local_c8._4_4_ = (int)param_7[7] + -1;
      local_c8._0_4_ = uVar3;
      FUN_03bad850(fVar17,local_a8 + local_c0,local_a8 + iVar11,&local_c8,&local_b8,1);
      iVar11 = DAT_041022bc;
      local_c8 = CONCAT44(local_c8._4_4_,3);
      local_c0 = DAT_0410237c;
      local_94 = 3;
      lVar15 = param_7[7];
      uVar4 = (**(code **)(*param_7 + 0x18))(param_7);
      if ((uVar4 & 1) == 0) {
        iVar8 = -1;
      }
      else {
        local_94 = 4;
        iVar8 = *(int *)((long)param_7 + 0x3c) + -1;
      }
      local_c8 = CONCAT44(iVar8,(int)lVar15);
      FUN_03bad850(fVar17,local_a8 + local_c0,local_a8 + iVar11,&local_c8,&local_b8,1);
      fVar17 = SQRT(local_a8[0]);
      if (NAN(fVar17)) {
        fVar17 = sqrtf(local_a8[0]);
      }
      fVar18 = SQRT(local_a0._4_4_);
      if (NAN(SQRT(local_a0._4_4_))) {
        fVar18 = sqrtf(local_a0._4_4_);
      }
joined_r0x03bad334:
      local_a0._4_4_ = fVar18;
      if (local_bc != 1) {
        if (local_bc != 0) {
          return;
        }
        fVar18 = *param_5 + fVar16 * local_a0._4_4_;
        param_5[1] = param_5[1] + fVar16 * fVar17;
        goto LAB_03bad778;
      }
      fVar18 = *param_5;
      fVar19 = param_5[1];
      if (param_5[1] <= fVar16 * fVar17) {
        fVar19 = fVar16 * fVar17;
      }
      param_5[1] = fVar19;
    }
    if (fVar18 <= fVar16 * local_a0._4_4_) {
      fVar18 = fVar16 * local_a0._4_4_;
    }
    goto LAB_03bad778;
  }
  if ((uVar4 & 1) == 0) {
    if (DAT_05aec018 == '\0') {
      iVar11 = 0;
      local_98 = 0.0;
      local_a8[0] = 0.0;
      local_a8[1] = 0.0;
      local_a0 = 0;
      local_c8 = (ulong)local_c8._4_4_ << 0x20;
      local_94 = 3;
      if (param_6 + -0x40000000 < 0) {
        local_c8 = CONCAT44(uVar10,3);
        iVar11 = -0x80000000;
        local_94 = 0;
      }
      fVar17 = (float)(uint)(iVar11 + param_6 + -0x40000000) * 4.656613e-10;
      local_b8 = param_8;
      if (param_9 == 1) {
        fVar19 = SQRT(1.0 - fVar17);
        if (NAN(fVar19)) {
          fVar19 = sqrtf(1.0 - fVar17);
        }
        fVar18 = SQRT(fVar17);
        if (NAN(fVar18)) {
          fVar18 = sqrtf(fVar17);
        }
      }
      else {
        uVar4 = (ulong)((uint)(int)(fVar17 * 1.0737418e+09) >> 0x18);
        fVar17 = (float)((int)(fVar17 * 1.0737418e+09) & 0xffffff) * 5.9604645e-08;
        fVar18 = (float)(&DAT_04199798)[uVar4 * 4] + fVar17 * (float)(&DAT_0419979c)[uVar4 * 4];
        fVar19 = (float)(&DAT_041997a0)[uVar4 * 4] + fVar17 * (float)(&DAT_041997a4)[uVar4 * 4];
      }
      local_a8[(int)(uint)local_c8] = fVar19;
      local_a8[(int)local_94] = fVar18;
      if (local_b8 != 1) goto LAB_03bad11c;
      goto LAB_03bacf98;
    }
    local_c8 = CONCAT44(local_c8._4_4_,param_8);
    local_98 = 0.0;
    uVar7 = param_6 - *(int *)((long)param_7 + 0x24);
    local_a8[0] = 0.0;
    local_a8[1] = 0.0;
    local_a0 = 0;
    local_bc = _DAT_041022b0;
    local_94 = _DAT_04102370;
    local_b8 = 0;
    uVar10 = *(uint *)((long)param_7 + 0x2c);
    (**(code **)(*param_7 + 0x18))(param_7);
    local_b8 = 1;
    if ((uVar7 < uVar10) || (uVar12 = (int)param_7[6] - 1, uVar12 < uVar7)) {
      local_bc = DAT_041022b4;
      local_94 = DAT_04102374;
      local_b8 = 1;
      uVar10 = *(uint *)(param_7 + 6);
      (**(code **)(*param_7 + 0x18))(param_7);
      local_b8 = 2;
      if ((uVar10 <= uVar7) && (uVar12 = *(int *)((long)param_7 + 0x34) - 1, uVar7 <= uVar12))
      goto LAB_03bad6f0;
      local_bc = DAT_041022b8;
      local_94 = DAT_04102378;
      local_b8 = 2;
      uVar10 = *(uint *)((long)param_7 + 0x34);
      (**(code **)(*param_7 + 0x18))(param_7);
      local_b8 = 3;
      if ((uVar10 <= uVar7) && (uVar12 = (int)param_7[7] - 1, uVar7 <= uVar12)) goto LAB_03bad6f0;
      local_bc = DAT_041022bc;
      local_94 = DAT_0410237c;
      local_b8 = 3;
      uVar10 = *(uint *)(param_7 + 7);
      uVar4 = (**(code **)(*param_7 + 0x18))(param_7);
      if ((uVar4 & 1) == 0) {
        uVar12 = 0xffffffff;
      }
      else {
        local_b8 = 4;
        uVar12 = *(int *)((long)param_7 + 0x3c) - 1;
      }
      if ((uVar10 <= uVar7) && (uVar7 <= uVar12)) goto LAB_03bad6f0;
      fVar19 = 0.0;
      fVar18 = 0.0;
    }
    else {
LAB_03bad6f0:
      fVar17 = (float)(uVar7 - uVar10) / (float)((uVar12 - uVar10) + 1);
      local_a8[(int)local_94] = local_a8[(int)local_94] + (1.0 - fVar17);
      local_a8[(int)local_bc] = fVar17 + local_a8[(int)local_bc];
      fVar18 = local_a8[0];
      fVar19 = local_a0._4_4_;
    }
    fVar17 = SQRT(fVar18);
    if (NAN(fVar17)) {
      fVar17 = sqrtf(fVar18);
    }
    fVar18 = SQRT(fVar19);
    if (NAN(fVar18)) {
      fVar18 = sqrtf(fVar19);
    }
    local_bc = (uint)local_c8;
    goto joined_r0x03bad334;
  }
  local_c8 = CONCAT44(local_c8._4_4_,param_8);
  local_98 = 0.0;
  uVar7 = param_6 - *(int *)((long)param_7 + 0x24);
  local_a8[0] = 0.0;
  local_a8[1] = 0.0;
  local_a0 = 0;
  uVar4 = (**(code **)(*param_7 + 0x18))(param_7);
  local_b8 = 0;
  uVar10 = *(uint *)((long)param_7 + 0x2c);
  (**(code **)(*param_7 + 0x18))(param_7);
  lVar15 = 1;
  local_b8 = 1;
  if ((uVar7 < uVar10) || (uVar12 = (int)param_7[6] - 1, uVar12 < uVar7)) {
    local_b8 = 1;
    uVar10 = *(uint *)(param_7 + 6);
    (**(code **)(*param_7 + 0x18))(param_7);
    local_b8 = 2;
    if ((uVar10 <= uVar7) && (uVar12 = *(int *)((long)param_7 + 0x34) - 1, uVar7 <= uVar12))
    goto LAB_03bad534;
    local_b8 = 2;
    uVar10 = *(uint *)((long)param_7 + 0x34);
    (**(code **)(*param_7 + 0x18))(param_7);
    local_b8 = 3;
    if ((uVar10 <= uVar7) && (uVar12 = (int)param_7[7] - 1, uVar7 <= uVar12)) {
      lVar15 = 2;
      goto LAB_03bad534;
    }
    local_b8 = 3;
    uVar10 = *(uint *)(param_7 + 7);
    uVar6 = (**(code **)(*param_7 + 0x18))(param_7);
    if ((uVar6 & 1) == 0) {
      uVar12 = 0xffffffff;
    }
    else {
      local_b8 = 4;
      uVar12 = *(int *)((long)param_7 + 0x3c) - 1;
    }
    if ((uVar10 <= uVar7) && (uVar7 <= uVar12)) {
      lVar15 = 3;
      goto LAB_03bad534;
    }
    if ((uVar4 & 1) != 0) {
      lVar15 = 4;
      local_b8 = 4;
      uVar10 = *(uint *)((long)param_7 + 0x3c);
      (**(code **)(*param_7 + 0x18))(param_7);
      if (uVar10 <= uVar7) {
        uVar12 = 0xffffffff;
        goto LAB_03bad534;
      }
    }
  }
  else {
    lVar15 = 0;
LAB_03bad534:
    fVar17 = (float)(uVar7 - uVar10) / (float)((uVar12 - uVar10) + 1);
    if (param_9 == 1) {
      fVar18 = SQRT(1.0 - fVar17);
      if (NAN(fVar18)) {
        fVar18 = sqrtf(1.0 - fVar17);
      }
      fVar17 = SQRT(fVar17);
    }
    else {
      uVar6 = (ulong)((uint)(int)(fVar17 * 1.0737418e+09) >> 0x18);
      fVar18 = (float)((int)(fVar17 * 1.0737418e+09) & 0xffffff) * 5.9604645e-08;
      fVar17 = (float)(&DAT_04199798)[uVar6 * 4] + fVar18 * (float)(&DAT_0419979c)[uVar6 * 4];
      fVar18 = (float)(&DAT_041997a0)[uVar6 * 4] + fVar18 * (float)(&DAT_041997a4)[uVar6 * 4];
    }
    uVar10 = 3;
    if ((uVar4 & 1) != 0) {
      uVar10 = 4;
    }
    local_a8[lVar15] = fVar18;
    if ((uint)lVar15 < uVar10) {
      local_a8[(uint)lVar15 + 1] = fVar17;
    }
    else {
      local_a8[0] = fVar17;
    }
  }
  fVar17 = fVar16 * *(float *)(param_7 + 4);
  if ((uint)local_c8 == 1) {
    fVar18 = param_5[4];
    if (param_5[4] <= fVar16 * local_98) {
      fVar18 = fVar16 * local_98;
    }
    fVar19 = param_5[1];
    if (param_5[1] <= fVar16 * local_a8[0]) {
      fVar19 = fVar16 * local_a8[0];
    }
    fVar20 = param_5[3];
    if (param_5[3] <= fVar17 * local_a8[1]) {
      fVar20 = fVar17 * local_a8[1];
    }
    param_5[3] = fVar20;
    param_5[4] = fVar18;
    fVar18 = param_5[2];
    if (param_5[2] <= fVar17 * (float)local_a0) {
      fVar18 = fVar17 * (float)local_a0;
    }
    param_5[1] = fVar19;
    param_5[2] = fVar18;
    fVar18 = *param_5;
    if (*param_5 <= fVar16 * local_a0._4_4_) {
      fVar18 = fVar16 * local_a0._4_4_;
    }
  }
  else {
    if ((uint)local_c8 != 0) {
      return;
    }
    param_5[3] = param_5[3] + fVar17 * local_a8[1];
    param_5[4] = param_5[4] + fVar16 * local_98;
    param_5[1] = param_5[1] + fVar16 * local_a8[0];
    param_5[2] = param_5[2] + fVar17 * (float)local_a0;
    fVar18 = *param_5 + fVar16 * local_a0._4_4_;
  }
LAB_03bad778:
  *param_5 = fVar18;
  return;
}

