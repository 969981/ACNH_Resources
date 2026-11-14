
/* WARNING: Removing unreachable block (ram,0x014eb384) */

undefined8 FUN_014eac80(long param_1,long param_2,float *param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  undefined4 uVar13;
  float *pfVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  long *plVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined *local_120;
  undefined8 local_118;
  undefined *local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  byte local_a8;
  undefined4 local_a4;
  undefined4 local_9c;
  undefined4 local_98;
  float local_94;
  float fStack_90;
  float local_8c;
  undefined4 local_88;
  int local_84;
  undefined1 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  int local_74;
  
  puVar2 = PTR_DAT_04bb2010;
  if (*(char *)(param_1 + 0x74) == '\0') {
    local_94 = *param_3;
    fStack_90 = param_3[1];
    local_8c = param_3[2];
  }
  else {
    local_c8 = PTR_DAT_04bb2010 + 0x10;
    local_b0 = 0;
    local_c0 = 0;
    FUN_014edb38(param_1,&local_d0,param_1 + 0x20);
    fVar20 = -2.5;
    if ((((int)local_b0 - (int)local_c0) + 1U & 1) != 0) {
      fVar20 = 0.0;
    }
    fVar19 = -2.5;
    if (((local_b0._4_4_ - local_c0._4_4_) + 1U & 1) != 0) {
      fVar19 = 0.0;
    }
    fVar21 = fVar20 + *(float *)(param_1 + 0x28);
    fStack_90 = param_3[1];
    fVar23 = fVar19 + *(float *)(param_1 + 0x30);
    fVar20 = *param_3 + fVar20;
    iVar9 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
    fVar19 = param_3[2] + fVar19;
    iVar6 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
    iVar7 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
    uVar10 = iVar7 - iVar9 & 1;
    uVar4 = -uVar10;
    if (iVar9 <= iVar7) {
      uVar4 = uVar10;
    }
    fVar20 = -1.0;
    if (iVar7 - iVar9 == 0 || iVar7 < iVar9) {
      fVar20 = 1.0;
    }
    local_94 = *param_3 + (float)(int)uVar4 * 5.0 * fVar20;
    iVar9 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
    uVar10 = iVar9 - iVar6 & 1;
    fVar20 = -1.0;
    if (iVar9 - iVar6 == 0 || iVar9 < iVar6) {
      fVar20 = 1.0;
    }
    uVar4 = -uVar10;
    if (iVar6 <= iVar9) {
      uVar4 = uVar10;
    }
    local_8c = param_3[2] + (float)(int)((float)(int)uVar4 * 5.0) * fVar20;
  }
  puVar1 = PTR_DAT_04bb37e0;
  local_7c = 0;
  local_78 = 0;
  local_84 = 0;
  local_9c = *(undefined4 *)PTR_DAT_04bb37e0;
  local_98 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_80 = 0;
  local_88 = FUN_014eb484(param_1);
  if (*(int *)(param_1 + 0x18) == 6) {
    local_d0 = 0xfffe;
    FUN_0277d4ac(&local_d0);
    FUN_0123fca0(param_1 + 0x60,&local_d0);
    uVar15 = local_d0._2_1_;
    uVar16 = local_d0._3_1_;
    local_98 = local_d0._4_4_;
    uVar5 = (undefined2)local_d0;
  }
  else {
    uVar5 = *(undefined2 *)(param_1 + 0x60);
    uVar15 = *(undefined1 *)(param_1 + 0x62);
    uVar16 = *(undefined1 *)(param_1 + 99);
    local_98 = *(undefined4 *)(param_1 + 100);
  }
  local_9c = CONCAT13(uVar16,CONCAT12(uVar15,uVar5));
  local_84 = FUN_014eb660(param_1);
  uVar11 = FUN_014eb83c(param_1);
  if (((uVar11 & 1) == 0) && (uVar11 = FUN_014eb9bc(param_1), (uVar11 & 1) == 0)) {
    local_80 = 0 < *(int *)(param_1 + 0xe8);
  }
  else {
    local_80 = true;
  }
  if (local_84 == 1) {
    local_84 = 0;
  }
  if ((param_4 & 1) != 0) {
    local_7c = 2;
  }
  local_c8 = puVar2 + 0x10;
  local_c0 = 0;
  local_a8 = *PTR_DAT_04bb32e0;
  local_d0 = *(undefined8 *)puVar1;
  local_b8 = 0;
  local_b0 = 0;
  local_a4 = 0;
  if (7 < local_a8) {
    local_a8 = 0xff;
  }
  if (*(int *)(param_1 + 0x18) == 4) {
    lVar18 = FUN_014bac20(param_1 + 0x90);
    if (lVar18 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined4 *)(lVar18 + 0x550);
    }
    iVar9 = FUN_0148d2d0(&local_d0,&local_9c,uVar13);
    uVar8 = local_b0;
  }
  else if (*(int *)(param_1 + 0x18) == 6) {
    iVar9 = FUN_0148c3f0();
    uVar8 = local_b0;
  }
  else {
    iVar9 = FUN_0148a480(&local_d0,&local_9c);
    uVar8 = local_b0;
  }
  if (iVar9 != 9) {
    return 0;
  }
  local_b0._4_4_ = (int)((ulong)uVar8 >> 0x20);
  local_b0 = uVar8;
  if (local_b0._4_4_ == 1) {
    if (0 < *(int *)(param_1 + 0xe8)) {
      return 0;
    }
  }
  else {
    bVar3 = local_b0._4_4_ == 0;
    if ((bVar3) && (0 < *(int *)(param_1 + 0xe8))) {
      local_d8 = 0;
      puVar1 = puVar2 + 0x10;
      local_d0._4_4_ = (undefined4)((ulong)local_d0 >> 0x20);
      local_e8 = 0;
      local_f8 = PTR_DAT_04bbc1a0 + 0x10;
      local_100 = (undefined4)local_d0;
      uStack_fc = local_d0._4_4_;
      local_f0 = puVar1;
      local_e0 = puVar1;
      if (*(int *)(param_1 + 0x18) == 6) {
        FUN_0123fca0(&local_d0,&local_100);
      }
      local_120 = PTR_DAT_04bbd460 + 0x10;
      local_118 = 0xfffe;
      FUN_0277d4ac(&local_118);
      local_118 = CONCAT44(uStack_fc,local_100);
      local_108 = (int)local_c0;
      uStack_104 = local_c0._4_4_;
      local_74 = local_b0._4_4_;
      local_110 = puVar1;
      uVar11 = FUN_0154f6c8(&local_120,&local_f8,local_b0._4_4_ - 2U < 4);
      if (*(int *)(param_1 + 0xe8) != 0) {
        lVar18 = (long)*(int *)(param_1 + 0xe8) << 3;
        uVar13 = local_b0._4_4_;
        plVar17 = *(long **)(param_1 + 0xf0);
        fVar19 = (float)local_d8._4_4_;
        fVar20 = (float)(int)local_d8;
        fVar23 = (float)(int)local_e8;
        fVar22 = (float)local_e8._4_4_;
        fVar21 = (float)(int)local_b8;
        puVar1 = PTR_DAT_04bbbc20 + 0x10;
        do {
          pfVar14 = (float *)*plVar17;
          local_e0 = (undefined *)CONCAT44(local_e0._4_4_,uVar13);
          local_f0 = (undefined *)
                     CONCAT44(pfVar14[1] + 0.0,(fVar23 * 5.0 + fVar20 * 5.0 + 5.0) * 0.5 + *pfVar14)
          ;
          local_e8 = CONCAT44((int)pfVar14[3] + (int)(long)(fVar21 * 90.0 * 11930465.0),
                              (fVar22 * 5.0 + fVar19 * 5.0 + 5.0) * 0.5 + pfVar14[2]);
          local_f8 = puVar1;
          plVar12 = (long *)FUN_014e7558(uVar11,pfVar14[5]);
          uVar11 = 0;
          if ((plVar12 != (long *)0x0) &&
             (uVar11 = (**(code **)(*plVar12 + 0x388))(plVar12,&local_f8), (uVar11 & 1) == 0)) {
            return 0;
          }
          plVar17 = plVar17 + 1;
          lVar18 = lVar18 + -8;
        } while (lVar18 != 0);
      }
    }
  }
  if (*(int *)(param_1 + 0x18) != 4) {
    puVar2 = puVar2 + 0x10;
    local_e8 = 0;
    local_f8 = PTR_DAT_04bbc1a0 + 0x10;
    local_d8 = 0;
    local_100 = (undefined4)local_d0;
    uStack_fc = local_d0._4_4_;
    local_f0 = puVar2;
    local_e0 = puVar2;
    if (*(int *)(param_1 + 0x18) == 6) {
      FUN_0123fca0(&local_d0,&local_100);
    }
    local_120 = PTR_DAT_04bbd460 + 0x10;
    local_118 = 0xfffe;
    FUN_0277d4ac(&local_118);
    local_118 = CONCAT44(uStack_fc,local_100);
    local_108 = (int)local_c0;
    uStack_104 = local_c0._4_4_;
    local_110 = puVar2;
    local_74 = FUN_014eb660(param_1);
    FUN_0154f6c8(&local_120,&local_f8,local_74 - 2U < 4);
    *(float *)(param_2 + 8) = ((float)(int)local_e8 * 5.0 + (float)(int)local_d8 * 5.0 + 5.0) * 0.5;
    *(float *)(param_2 + 0x10) =
         ((float)local_e8._4_4_ * 5.0 + (float)local_d8._4_4_ * 5.0 + 5.0) * 0.5;
    goto LAB_014eb418;
  }
  lVar18 = FUN_014bac20(param_1 + 0x90);
  if (lVar18 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined4 *)(lVar18 + 0x550);
  }
  uVar10 = FUN_02a752d0(*(long *)PTR_DAT_04bb5008 + 0x1e08,uVar13);
  lVar18 = *(long *)PTR_DAT_04bb27c0;
  if (lVar18 == 0) {
    plVar17 = (long *)0x0;
    if ((bRam0000000000000560 >> 1 & 1) == 0) goto LAB_014eb354;
LAB_014eb368:
    plVar17 = plVar17 + 0x115;
  }
  else {
    if ((((uVar10 == 0) ||
         (plVar17 = *(long **)(*(long *)(*(long *)(lVar18 + 0x1c0) + 8) +
                              (ulong)(uVar10 >> 0x14) * 8), plVar17 == (long *)0x0)) ||
        ((*(uint *)(plVar17 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar17 + 0x46) != uVar10)) {
      plVar17 = (long *)0x0;
    }
    if ((*(int *)(lVar18 + 0x288) == 1) || (*(int *)(lVar18 + 0x288) == -1)) {
      plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      (**(code **)(*plVar12 + 0x60))();
    }
    if (plVar17 != (long *)0x0) {
      if (((*PTR_DAT_04bb59a0 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb59a0), iVar9 != 0)) {
        *(undefined **)PTR_DAT_04bb5998 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb59a0);
      }
      (**(code **)(*plVar17 + 0x20))(plVar17,PTR_DAT_04bb5998);
    }
    if ((*(byte *)(plVar17 + 0xac) >> 1 & 1) != 0) goto LAB_014eb368;
LAB_014eb354:
    plVar17 = plVar17 + 0xae;
  }
  iVar9 = *(int *)((long)plVar17 + 0x14);
  iVar6 = *(int *)((long)plVar17 + 0x24);
  *(float *)(param_2 + 8) =
       ((float)(int)local_c0 * 5.0 +
       (float)(((int)plVar17[4] - (int)plVar17[2]) + (int)local_c0) * 5.0 + 5.0) * 0.5;
  *(float *)(param_2 + 0x10) =
       ((float)local_c0._4_4_ * 5.0 + (float)((iVar6 - iVar9) + local_c0._4_4_) * 5.0 + 5.0) * 0.5;
LAB_014eb418:
  *(int *)(param_2 + 0x14) = (int)(long)((float)(int)local_b8 * 90.0 * 11930465.0);
  *(int *)(param_2 + 0x18) = local_b0._4_4_;
  return 1;
}

