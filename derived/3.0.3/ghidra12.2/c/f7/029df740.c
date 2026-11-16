
void FUN_029df740(long param_1)

{
  void *__dest;
  MutexType *pMVar1;
  ulong uVar2;
  uint uVar3;
  undefined *puVar4;
  char cVar5;
  char cVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  uint uVar15;
  byte bVar16;
  long *plVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  void *__src;
  undefined2 uVar21;
  long lVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  undefined1 local_130 [4];
  undefined8 local_12c;
  undefined8 local_120;
  undefined8 uStack_118;
  float *local_110;
  undefined8 *puStack_108;
  float local_fc;
  float fStack_f8;
  float local_f4;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float local_e4;
  float fStack_e0;
  float local_dc;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  float *local_a8;
  undefined8 local_a0;
  undefined1 local_95;
  int local_90;
  
  lVar13 = *(long *)PTR_DAT_04bb2720;
  if (lVar13 == 0) {
    plVar17 = &DAT_055c04a0;
  }
  else {
    plVar17 = &DAT_055c04a0;
    if (*(long *)(lVar13 + 0x330) != 0) {
      puVar11 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar13 + 0x338));
      iVar10 = FUN_006bd550(*puVar11,0);
      plVar17 = (long *)PTR_DAT_04bc3a80;
      if (iVar10 != 0x758f7eaf) {
        plVar17 = &DAT_055c04a0;
      }
    }
  }
  __dest = (void *)((long)&local_b8 + 4);
  local_b8 = CONCAT44(local_b8._4_4_,0x20);
  local_95 = 0;
  local_c8._0_4_ = 0x48fa8f8;
  local_c8._4_4_ = 0;
  local_c0 = __dest;
  (**(code **)(*plVar17 + 0x18))(plVar17);
  __src = (void *)plVar17[1];
  if (__dest != __src) {
    (**(code **)(*plVar17 + 0x18))(plVar17);
    lVar13 = 0;
    do {
      if (*(char *)(plVar17[1] + lVar13) == '\0') goto LAB_029df87c;
      lVar22 = plVar17[1] + lVar13;
      if (*(char *)(lVar22 + 1) == '\0') {
        lVar13 = lVar13 + 1;
        goto LAB_029df87c;
      }
      if (*(char *)(lVar22 + 2) == '\0') {
        lVar13 = lVar13 + 2;
        goto LAB_029df87c;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    lVar13 = 0;
LAB_029df87c:
    iVar10 = (int)lVar13;
    if ((int)local_b8 <= (int)lVar13) {
      iVar10 = (int)local_b8 + -1;
    }
    memcpy(__dest,__src,(long)iVar10);
    *(undefined1 *)((long)__dest + (long)iVar10) = 0;
  }
  puVar7 = PTR_DAT_04bb26a8;
  lVar13 = plVar17[7];
  local_c8 = PTR_DAT_04bb2028 + 0x10;
  lVar22 = *(long *)PTR_DAT_04bb26a8;
  pMVar1 = (MutexType *)(lVar22 + 0xb4408);
  local_90 = (int)lVar13;
  nn::os::LockMutex(pMVar1);
  cVar6 = *(char *)(lVar22 + 0xb4428);
  nn::os::UnlockMutex(pMVar1);
  lVar22 = *(long *)puVar7;
  fVar24 = 0.0;
  if (*(long *)(*(long *)(lVar22 + 0xb4510) + 0x50) == 0) {
LAB_029df984:
    lVar18 = param_1 + 0x5a30;
    fVar27 = (fVar24 + 4.0) / 19.52;
    fVar25 = 1.0;
    if (fVar27 <= 1.0) {
      fVar25 = fVar27;
    }
    lVar20 = lVar18;
    fVar24 = 0.0;
    if (0.0 <= fVar27) {
      fVar24 = fVar25;
    }
  }
  else {
    fVar24 = *(float *)(lVar22 + 0xb44d8);
    if (30.0 <= fVar24) {
      lVar18 = param_1 + 0x6f80;
      lVar20 = lVar18;
      fVar24 = 1.0;
    }
    else {
      if (15.52 <= fVar24) {
        lVar20 = param_1 + 0x5a30;
        lVar18 = param_1 + 0x6f80;
        fVar27 = -15.52;
        fVar25 = 14.48;
      }
      else {
        if (-4.0 <= fVar24) goto LAB_029df984;
        lVar20 = param_1 + 34000;
        lVar18 = param_1 + 0x5a30;
        fVar27 = 13.11;
        fVar25 = 9.11;
      }
      fVar25 = (fVar24 + fVar27) / fVar25;
      fVar27 = 1.0;
      if (fVar25 <= 1.0) {
        fVar27 = fVar25;
      }
      fVar24 = 0.0;
      if (0.0 <= fVar25) {
        fVar24 = fVar27;
      }
    }
  }
  cVar5 = *(char *)(lVar22 + 0xb3838);
  FUN_029dc580(fVar24,0x27,param_1 + 0x45f0,lVar20,lVar18);
  FUN_029dc580(fVar24,0x12,param_1 + 0x4be0,lVar20 + 0x5f0,lVar18 + 0x5f0);
  FUN_029dc580(fVar24,0xf,param_1 + 0x4f30,lVar20 + 0x940,lVar18 + 0x940);
  FUN_029dc580(fVar24,0xc,param_1 + 0x5220,lVar20 + 0xc30,lVar18 + 0xc30);
  FUN_029dc580(fVar24,0xf,param_1 + 0x54b0,lVar20 + 0xec0,lVar18 + 0xec0);
  FUN_029dc580(fVar24,6,param_1 + 0x57a0,lVar20 + 0x11b0,lVar18 + 0x11b0);
  FUN_029dc580(fVar24,6,param_1 + 0x5970,lVar20 + 0x1380,lVar18 + 0x1380);
  lVar22 = *(long *)(param_1 + 0x2de0);
  if ((lVar22 == 0) || (*(int *)(param_1 + 0x2de8) != *(int *)(lVar22 + 0x10))) {
    uVar26 = *(undefined4 *)(param_1 + 0x2dd0);
    *(undefined1 *)(param_1 + 0x2dc8) = 0;
    bVar16 = *(byte *)(param_1 + 0x2dc9);
    uVar21 = *(undefined2 *)(param_1 + 0x2dca);
    uVar19 = *(uint *)(param_1 + 0x2dcc);
  }
  else {
    *(undefined1 *)(param_1 + 0x2dc8) = 1;
    bVar16 = *(byte *)(lVar22 + 0x1d0) >> 5 & 1;
    *(byte *)(param_1 + 0x2dc9) = bVar16;
    uVar21 = *(undefined2 *)(lVar22 + 0x1d2);
    *(undefined2 *)(param_1 + 0x2dca) = uVar21;
    uVar19 = (uint)*(ushort *)(lVar22 + 0xe8);
    *(uint *)(param_1 + 0x2dcc) = (uint)*(ushort *)(lVar22 + 0xe8);
    uVar26 = *(undefined4 *)(*(long *)(lVar22 + 0xd8) + 0x38);
    *(undefined4 *)(param_1 + 0x2dd0) = uVar26;
    *(undefined8 *)(param_1 + 0x2dd8) = *(undefined8 *)(lVar22 + 0x1b8);
  }
  if (*(long *)PTR_DAT_04bb38d0 != 0) {
    uVar12 = FUN_008a6b24();
    if ((uVar12 & 1) != 0) {
      puVar11 = (undefined8 *)(param_1 + 0x9a80);
      goto LAB_029dfb80;
    }
  }
  puVar11 = (undefined8 *)(param_1 + 0x9a78);
LAB_029dfb80:
  uVar15 = *(uint *)(param_1 + 0x38);
  uVar23 = *puVar11;
  if (0 < (int)uVar15) {
    *(undefined4 *)(param_1 + 0x14c8) = 0;
    *(undefined8 *)(param_1 + 0x84) = 0xff7fffff;
    uVar3 = uVar15 & 3;
    *(undefined8 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined8 *)(param_1 + 0x8c) = 0x7f7fffff7f7fffff;
    *(undefined8 *)(param_1 + 0x94) = 0x7f7fffff7f7fffff;
    *(undefined8 *)(param_1 + 0x9c) = 0x3f8000007f7fffff;
    if (3 < uVar15) {
      uVar15 = uVar15 & 0xfffffffc;
      do {
        uVar15 = uVar15 - 4;
        *(undefined8 *)(param_1 + 0xb0) = 0;
        *(undefined8 *)(param_1 + 0xb8) = 0;
      } while (uVar15 != 0);
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined8 *)(param_1 + 0xb0) = 0;
      *(undefined8 *)(param_1 + 0xb8) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x16bc) = 0;
  *(uint *)(param_1 + 0x1604) = uVar19;
  *(undefined2 *)(param_1 + 0x1608) = uVar21;
  local_b8 = CONCAT44(uVar26,uVar19);
  local_c8._0_4_ = (uint)uVar23;
  uVar8 = (uint)local_c8;
  local_c8._4_4_ = (undefined4)((ulong)uVar23 >> 0x20);
  uVar9 = local_c8._4_4_;
  local_c0._0_4_ = 0;
  local_c0._4_4_ = 0.0;
  local_b0._0_1_ = bVar16;
  FUN_02a078bc(param_1 + 0x40,&local_c8);
  uVar15 = *(uint *)(param_1 + 0x1710);
  if (0 < (int)uVar15) {
    *(undefined4 *)(param_1 + 0x2ba0) = 0;
    *(undefined4 *)(param_1 + 0x1784) = 0;
    *(undefined8 *)(param_1 + 0x175c) = 0xff7fffff;
    uVar3 = uVar15 & 3;
    *(undefined8 *)(param_1 + 0x177c) = 0;
    *(undefined8 *)(param_1 + 0x1764) = 0x7f7fffff7f7fffff;
    *(undefined8 *)(param_1 + 0x176c) = 0x7f7fffff7f7fffff;
    *(undefined8 *)(param_1 + 0x1774) = 0x3f8000007f7fffff;
    if (3 < uVar15) {
      uVar15 = uVar15 & 0xfffffffc;
      do {
        uVar15 = uVar15 - 4;
        *(undefined8 *)(param_1 + 0x1788) = 0;
        *(undefined8 *)(param_1 + 0x1790) = 0;
      } while (uVar15 != 0);
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined8 *)(param_1 + 0x1788) = 0;
      *(undefined8 *)(param_1 + 0x1790) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x2d94) = 0;
  *(uint *)(param_1 + 0x2cdc) = uVar19;
  *(undefined2 *)(param_1 + 0x2ce0) = uVar21;
  local_b8 = CONCAT44(uVar26,uVar19);
  local_c0._0_4_ = 0;
  local_c0._4_4_ = 0.0;
  local_c8._0_4_ = uVar8;
  local_c8._4_4_ = uVar9;
  local_b0._0_1_ = bVar16;
  FUN_02a078bc(param_1 + 0x1718,&local_c8);
  uVar19 = *(uint *)(param_1 + 0x2e10);
  lVar22 = param_1 + 20000;
  if (0 < (int)uVar19) {
    *(undefined4 *)(param_1 + 0x42a0) = 0;
    *(undefined4 *)(param_1 + 0x2e84) = 0;
    *(undefined8 *)(param_1 + 0x2e5c) = 0xff7fffff;
    uVar15 = uVar19 & 3;
    *(undefined8 *)(param_1 + 0x2e7c) = 0;
    *(undefined8 *)(param_1 + 0x2e64) = 0x7f7fffff7f7fffff;
    *(undefined8 *)(param_1 + 0x2e6c) = 0x7f7fffff7f7fffff;
    *(undefined8 *)(param_1 + 0x2e74) = 0x3f8000007f7fffff;
    if (3 < uVar19) {
      uVar19 = uVar19 & 0xfffffffc;
      do {
        uVar19 = uVar19 - 4;
        *(undefined8 *)(param_1 + 0x2e88) = 0;
        *(undefined8 *)(param_1 + 0x2e90) = 0;
      } while (uVar19 != 0);
    }
    for (; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined8 *)(param_1 + 0x2e88) = 0;
      *(undefined8 *)(param_1 + 0x2e90) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x4494) = 0;
  *(undefined2 *)(param_1 + 0x43e0) = 0xffff;
  *(undefined4 *)(param_1 + 0x43dc) = 0;
  local_b8 = 0;
  local_b0 = (ulong)local_b0._1_7_ << 8;
  local_c8._0_4_ = (uint)*(undefined8 *)(param_1 + 0x44d8);
  local_c8._4_4_ = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x44d8) >> 0x20);
  local_c0 = (void *)lVar22;
  FUN_02a078bc(param_1 + 0x2e18,&local_c8);
  nn::os::LockMutex((MutexType *)(param_1 + 0x9a40));
  if (cVar5 != '\0' && (cVar6 != '\0' && (int)lVar13 == -0x6efba09b)) {
    if (*(int *)(param_1 + 0x9a70) == 0) {
      fStack_ec = -4.0;
      fVar25 = 220.0;
      fVar24 = 565.0;
    }
    else {
      lVar13 = *(long *)(param_1 + 0x9a68);
      if (*(int *)(param_1 + 0x9a70) < 1) {
        lVar13 = 0;
      }
      lVar20 = 0;
      if (lVar13 != 0) {
        lVar20 = lVar13 - *(int *)(param_1 + 0x9a74);
      }
      fVar24 = *(float *)(lVar20 + 0x1c);
      fStack_ec = *(float *)(lVar20 + 0x20);
      fVar25 = *(float *)(lVar20 + 0x24);
    }
    lVar13 = param_1 + 0x20;
    fVar27 = fStack_ec + 20.0;
    local_e8 = fVar25 + 6.0;
    local_c0._4_4_ = fVar24 + -18.0;
    local_b8 = 0x3f80000000000000;
    local_110 = (float *)&local_d8;
    fStack_ec = fStack_ec + 2.3;
    local_c8._0_4_ = 0x3f800000;
    local_c8._4_4_ = 0;
    local_c0._0_4_ = 0;
    fVar25 = fVar25 + -7.0;
    local_a8 = (float *)0x0;
    local_d8 = CONCAT44(fStack_ec,local_c0._4_4_);
    local_b0 = (ulong)(uint)fStack_ec << 0x20;
    local_f0 = fVar24 + 18.0;
    local_fc = fVar24 + 20.0;
    local_a0 = CONCAT44(local_e8,0x3f800000);
    local_130[0] = 0;
    local_12c = 0x3f800000;
    local_120 = 0;
    uStack_118 = 0;
    puStack_108 = &local_c8;
    fStack_f8 = fVar27;
    local_f4 = fVar25;
    local_e4 = fVar24 + -20.0;
    fStack_e0 = fVar27;
    local_dc = fVar25;
    local_d0 = local_e8;
    FUN_02a07000(lVar13,local_130);
    local_110 = &local_e4;
    local_c8._0_4_ = 0x3f800000;
    local_c8._4_4_ = 0;
    local_c0._0_4_ = 0;
    local_b8 = 0x3f80000000000000;
    local_a8 = (float *)0x0;
    local_b0 = (ulong)(uint)fVar27 << 0x20;
    local_a0 = CONCAT44(fVar25,0x3f800000);
    local_130[0] = 0;
    local_12c = 0x3f800000;
    local_120 = 0;
    uStack_118 = 0;
    puStack_108 = &local_c8;
    local_c0._4_4_ = fVar24 + -20.0;
    FUN_02a07000(lVar13,local_130);
    lVar20 = param_1 + 0x16f8;
    local_110 = &local_f0;
    local_c8._0_4_ = 0x3f800000;
    local_c8._4_4_ = 0;
    local_c0._0_4_ = 0;
    local_b8 = 0x3f80000000000000;
    local_a8 = (float *)0x0;
    local_b0 = (ulong)(uint)fStack_ec << 0x20;
    local_c0._4_4_ = local_f0;
    local_130[0] = 0;
    local_12c = 0x3f800000;
    local_a0 = CONCAT44(local_e8,0x3f800000);
    local_120 = 0;
    uStack_118 = 0;
    puStack_108 = &local_c8;
    FUN_02a07000(lVar20,local_130);
    local_b8 = 0x3f80000000000000;
    local_c8._0_4_ = 0x3f800000;
    local_c8._4_4_ = 0;
    local_c0._0_4_ = 0;
    local_a8 = (float *)0x0;
    local_130[0] = 0;
    local_b0 = (ulong)(uint)fStack_f8 << 0x20;
    local_12c = 0x3f800000;
    local_c0._4_4_ = local_fc;
    local_a0 = CONCAT44(local_f4,0x3f800000);
    local_120 = 0;
    uStack_118 = 0;
    local_110 = &local_fc;
    puStack_108 = &local_c8;
    FUN_02a07000(lVar20,local_130);
    local_b8 = *(undefined8 *)(param_1 + 0x44d8);
    lVar18 = param_1 + 0x2df8;
    local_c8._0_4_ = (uint)local_c8 & 0xffffff00;
    local_c8._4_4_ = 0x3f800000;
    local_c0._0_4_ = 0;
    local_a8 = (float *)&local_d8;
    local_a0 = 0;
    local_b0 = lVar22;
    FUN_02a07000(lVar18,&local_c8);
    local_b8 = *(undefined8 *)(param_1 + 0x44d8);
    local_c8._0_4_ = (uint)local_c8 & 0xffffff00;
    local_c8._4_4_ = 0x3f800000;
    local_c0._0_4_ = 0;
    local_a0 = 0;
    local_b0 = lVar22;
    local_a8 = &local_e4;
    FUN_02a07000(lVar18,&local_c8);
    local_b8 = *(undefined8 *)(param_1 + 0x44d8);
    local_c8._0_4_ = (uint)local_c8 & 0xffffff00;
    local_c8._4_4_ = 0x3f800000;
    local_c0._0_4_ = 0;
    local_a0 = 0;
    local_b0 = lVar22;
    local_a8 = &local_f0;
    FUN_02a07000(lVar18,&local_c8);
    local_b8 = *(undefined8 *)(param_1 + 0x44d8);
    local_c8._0_4_ = (uint)local_c8 & 0xffffff00;
    local_c8._4_4_ = 0x3f800000;
    local_c0._0_4_ = 0;
    local_a0 = 0;
    local_b0 = lVar22;
    local_a8 = &local_fc;
    FUN_02a07000(lVar18,&local_c8);
    local_130[0] = 0;
    local_d0 = 220.0;
    local_12c = 0x3f800000;
    local_d8 = DAT_0417e268;
    local_b8 = 0x3f80000000000000;
    local_b0 = 0x4170000000000000;
    puStack_108 = &local_c8;
    local_c8._0_4_ = 0x3f800000;
    local_c8._4_4_ = 0;
    local_c0._0_4_ = 0;
    local_c0._4_4_ = 565.0;
    local_a8 = (float *)0x0;
    local_a0 = 0x435c00003f800000;
    local_120 = 0;
    uStack_118 = 0;
    local_110 = (float *)&local_d8;
    FUN_02a07000(lVar13,local_130);
    local_b8 = *(undefined8 *)(param_1 + 0x44d8);
    local_c8._0_4_ = (uint)local_c8 & 0xffffff00;
    local_c8._4_4_ = 0x3f800000;
    local_c0._0_4_ = 0;
    local_a0 = 0;
    local_b0 = lVar22;
    local_a8 = (float *)&local_d8;
    FUN_02a07000(lVar18,&local_c8);
    local_130[0] = 0;
    local_d0 = 220.0;
    local_12c = 0x3f800000;
    local_b8 = 0x3f80000000000000;
    local_b0 = 0x4170000000000000;
    local_d8 = DAT_0417e274;
    local_c8._0_4_ = 0x3f800000;
    local_c8._4_4_ = 0;
    local_c0._0_4_ = 0;
    local_c0._4_4_ = 670.0;
    local_a8 = (float *)0x0;
    local_a0 = 0x435c00003f800000;
    local_120 = 0;
    uStack_118 = 0;
    local_110 = (float *)&local_d8;
    puStack_108 = &local_c8;
    FUN_02a07000(lVar20,local_130);
    local_b8 = *(undefined8 *)(param_1 + 0x44d8);
    local_c8._0_4_ = (uint)local_c8 & 0xffffff00;
    local_c8._4_4_ = 0x3f800000;
    local_c0._0_4_ = 0;
    local_a0 = 0;
    local_b0 = lVar22;
    local_a8 = (float *)&local_d8;
    FUN_02a07000(lVar18,&local_c8);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x9a40));
  puVar7 = PTR_DAT_04bb26a8;
  local_b8 = CONCAT44(DAT_055ed5b0,0x3c23d70a);
  local_c0._0_4_ = 0x3c23d70a;
  local_c0._4_4_ = (float)DAT_055ed5b0;
  local_c8._0_4_ = 0x3c23d70a;
  local_c8._4_4_ = DAT_055ed5b0;
  local_a8 = (float *)(*(long *)PTR_DAT_04bb26a8 + 0x89850);
  local_b0 = 0;
  FUN_029e2ae0(param_1 + 0x18,&local_c8);
  local_b8 = CONCAT44(DAT_055ed5b0,0x3c23d70a);
  local_c0._0_4_ = 0x3c23d70a;
  local_c0._4_4_ = (float)DAT_055ed5b0;
  local_c8._0_4_ = 0x3c23d70a;
  local_c8._4_4_ = DAT_055ed5b0;
  local_a8 = (float *)(*(long *)puVar7 + 0x89850);
  local_b0 = 0;
  FUN_029e2ae0(param_1 + 0x16f0,&local_c8);
  local_b8 = CONCAT44(DAT_055ed5b0,0x3c23d70a);
  local_c0._0_4_ = 0x3c23d70a;
  local_c0._4_4_ = (float)DAT_055ed5b0;
  local_c8._0_4_ = 0x3c23d70a;
  local_c8._4_4_ = DAT_055ed5b0;
  local_a8 = (float *)(*(long *)puVar7 + 0x89850);
  local_b0 = param_1 + 0x44e0;
  FUN_029e2ae0(param_1 + 0x2df0,&local_c8);
  fVar24 = *(float *)(param_1 + 0x2e6c) / 10.0;
  uVar26 = FUN_03b74750(fVar24,param_1 + 0x53a0);
  *(undefined4 *)(param_1 + 0x44c8) = uVar26;
  uVar26 = FUN_03b74750(fVar24,param_1 + 0x5690);
  *(undefined4 *)(param_1 + 0x44cc) = uVar26;
  uVar26 = FUN_03b74750(fVar24,param_1 + 0x5860);
  *(undefined4 *)(param_1 + 0x44d0) = uVar26;
  if (cVar5 != '\0') {
    lVar13 = *(long *)puVar7;
    if ((*(int *)(param_1 + 0x16bc) != 0) && (lVar22 = *(long *)(param_1 + 8), lVar22 != 0)) {
      uVar26 = *(undefined4 *)(param_1 + 0xac);
      *(undefined8 *)(lVar22 + 0xc0) = *(undefined8 *)(param_1 + 0xa4);
      *(ushort *)(lVar22 + 0x98) = *(ushort *)(lVar22 + 0x98) | 0x200;
      *(undefined4 *)(lVar22 + 200) = uVar26;
      *(ushort *)(lVar22 + 0x9a) = *(ushort *)(lVar22 + 0x9a) | 0x200;
    }
    if ((*(int *)(param_1 + 0x2d94) != 0) && (lVar22 = *(long *)(param_1 + 0x10), lVar22 != 0)) {
      uVar26 = *(undefined4 *)(param_1 + 0x1784);
      *(undefined8 *)(lVar22 + 0xc0) = *(undefined8 *)(param_1 + 0x177c);
      *(undefined4 *)(lVar22 + 200) = uVar26;
      *(ushort *)(lVar22 + 0x98) = *(ushort *)(lVar22 + 0x98) | 0x200;
      *(ushort *)(lVar22 + 0x9a) = *(ushort *)(lVar22 + 0x9a) | 0x200;
    }
    if (*(int *)(lVar13 + 0x63804) == 3) {
      fVar24 = *(float *)(param_1 + 0x8c);
      if (*(float *)(param_1 + 0x1764) <= *(float *)(param_1 + 0x8c)) {
        fVar24 = *(float *)(param_1 + 0x1764);
      }
      if (11.0 <= fVar24 / 10.0) {
        uVar26 = FUN_006bd550(&DAT_04068c94,0);
        lVar13 = *(long *)puVar7;
        plVar17 = (long *)(lVar13 + 0xb3b78);
        nn::os::LockMutex((MutexType *)(lVar13 + 0xb3b58));
        if (*(int *)(lVar13 + 0xb3b88) < *(int *)(lVar13 + 0xb3ba0)) {
          puVar11 = *(undefined8 **)(lVar13 + 0xb3b90);
          if (puVar11 != (undefined8 *)0x0) {
            *(undefined8 *)(lVar13 + 0xb3b90) = *puVar11;
          }
          *(undefined1 *)((long)puVar11 + 2) = 0;
          *(undefined2 *)puVar11 = 0x100;
          *(undefined4 *)((long)puVar11 + 4) = uVar26;
          *(undefined4 *)(puVar11 + 1) = 0x3f800000;
          plVar14 = puVar11 + 2;
          *plVar14 = 0;
          puVar11[3] = 0;
          lVar22 = *plVar17;
          *plVar17 = (long)plVar14;
          puVar11[3] = plVar17;
          *plVar14 = lVar22;
          if (lVar22 != 0) {
            *(long **)(lVar22 + 8) = plVar14;
          }
          *(int *)(lVar13 + 0xb3b88) = *(int *)(lVar13 + 0xb3b88) + 1;
        }
        nn::os::UnlockMutex((MutexType *)(lVar13 + 0xb3b58));
        lVar13 = *(long *)puVar7;
      }
      if (*(int *)(lVar13 + 0x89850) != 0) {
        lVar22 = *(long *)(lVar13 + 0x89858);
        fVar24 = 0.0;
        uVar12 = 0;
        do {
          iVar10 = *(int *)(lVar22 + (-(uVar12 >> 0x1f) & 0xffffffc000000000 | uVar12 << 6));
          if (iVar10 == 0) {
            fVar25 = *(float *)(lVar22 + (long)(int)uVar12 * 0x40 + 4);
            if (fVar25 <= fVar24) {
              fVar25 = fVar24;
            }
LAB_029e0394:
            fVar24 = fVar25;
          }
          else {
            fVar25 = *(float *)(lVar22 + (long)(int)uVar12 * 0x40 + 4);
            if (fVar25 <= fVar24) {
              fVar25 = fVar24;
            }
            if (iVar10 == 1) goto LAB_029e0394;
          }
          uVar2 = uVar12 + 1;
          uVar12 = uVar2 & 0xffffffff;
        } while (*(int *)(lVar13 + 0x89850) != (int)uVar2);
        if (0.0 < fVar24) {
          puVar4 = &DAT_040786f0;
          if (*(char *)(lVar13 + 0xb81c0) < '\x01') {
            puVar4 = &DAT_040b6edf;
          }
          uVar26 = FUN_006bd550(puVar4,0);
          lVar13 = *(long *)puVar7;
          plVar17 = (long *)(lVar13 + 0xb3b78);
          nn::os::LockMutex((MutexType *)(lVar13 + 0xb3b58));
          if (*(int *)(lVar13 + 0xb3b88) < *(int *)(lVar13 + 0xb3ba0)) {
            puVar11 = *(undefined8 **)(lVar13 + 0xb3b90);
            if (puVar11 != (undefined8 *)0x0) {
              *(undefined8 *)(lVar13 + 0xb3b90) = *puVar11;
            }
            *(undefined4 *)((long)puVar11 + 4) = uVar26;
            *(float *)(puVar11 + 1) = fVar24;
            *(undefined2 *)puVar11 = 0x100;
            puVar11[3] = 0;
            *(undefined1 *)((long)puVar11 + 2) = 1;
            plVar14 = puVar11 + 2;
            *plVar14 = 0;
            lVar22 = *plVar17;
            *plVar17 = (long)plVar14;
            puVar11[3] = plVar17;
            *plVar14 = lVar22;
            if (lVar22 != 0) {
              *(long **)(lVar22 + 8) = plVar14;
            }
            *(int *)(lVar13 + 0xb3b88) = *(int *)(lVar13 + 0xb3b88) + 1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar13 + 0xb3b58));
        }
      }
    }
  }
  return;
}

