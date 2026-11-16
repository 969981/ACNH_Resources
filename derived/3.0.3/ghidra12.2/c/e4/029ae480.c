
/* WARNING: Removing unreachable block (ram,0x029ae94c) */

void FUN_029ae480(long param_1)

{
  char *pcVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  uint uVar17;
  undefined8 *puVar18;
  float fVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  byte local_e0;
  undefined1 uStack_df;
  undefined2 uStack_de;
  uint uStack_dc;
  undefined4 local_d8;
  float local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  float local_b8;
  undefined8 local_b4;
  float local_ac;
  undefined8 local_a8;
  float local_a0;
  undefined8 local_98;
  float local_90;
  
  lVar14 = *(long *)(param_1 + 0x2d68);
  pcVar1 = (char *)(param_1 + 0x2d50);
  if ((lVar14 == 0) || (*(int *)(param_1 + 0x2d70) != *(int *)(lVar14 + 0x10))) {
    local_d8 = *(undefined4 *)(param_1 + 0x2d58);
    *pcVar1 = '\0';
    local_e0 = *(byte *)(param_1 + 0x2d51);
    uStack_de = *(undefined2 *)(param_1 + 0x2d52);
    uStack_dc = *(uint *)(param_1 + 0x2d54);
  }
  else {
    *pcVar1 = '\x01';
    local_e0 = *(byte *)(lVar14 + 0x1d0) >> 5 & 1;
    *(byte *)(param_1 + 0x2d51) = local_e0;
    uStack_de = *(undefined2 *)(lVar14 + 0x1d2);
    *(undefined2 *)(param_1 + 0x2d52) = uStack_de;
    uStack_dc = (uint)*(ushort *)(lVar14 + 0xe8);
    *(uint *)(param_1 + 0x2d54) = (uint)*(ushort *)(lVar14 + 0xe8);
    local_d8 = *(undefined4 *)(*(long *)(lVar14 + 0xd8) + 0x38);
    *(undefined4 *)(param_1 + 0x2d58) = local_d8;
    *(undefined8 *)(param_1 + 0x2d60) = *(undefined8 *)(lVar14 + 0x1b8);
  }
  local_d0 = *(undefined8 *)(param_1 + 0x2dd0);
  local_c8 = 0;
  FUN_02a06880(param_1 + 0x10,&local_e0);
  FUN_02a06880(param_1 + 0x16b0,&local_e0);
  nn::os::LockMutex((MutexType *)(param_1 + 0x2d98));
  if (*(long *)(param_1 + 0x2dc0) != param_1 + 0x2db8) {
    lVar16 = (long)*(int *)(param_1 + 0x2dcc);
    puVar18 = (undefined8 *)((ulong)&local_e0 | 4);
    lVar14 = *(long *)(param_1 + 0x2dc0) - lVar16;
    do {
      puVar12 = (undefined8 *)(lVar14 + 0x18);
      uVar10 = *puVar12;
      fVar22 = *(float *)(lVar14 + 0x20);
      fVar19 = (float)NEON_ucvtf(*(undefined4 *)(lVar14 + 0x28));
      lVar11 = *(long *)PTR_DAT_04bb26a8;
      fVar19 = fVar19 / (*(float *)(param_1 + 0x2dd8) * 30.0);
      fVar23 = 1.0;
      if (fVar19 <= 1.0) {
        fVar23 = fVar19;
      }
      local_e0 = SUB41(fVar23,0);
      bVar2 = local_e0;
      uStack_df = (undefined1)((uint)fVar23 >> 8);
      uVar3 = uStack_df;
      uStack_de = (undefined2)((uint)fVar23 >> 0x10);
      uVar4 = uStack_de;
      if (*(char *)(lVar14 + 0x24) != '\0') {
        local_98 = *puVar12;
        local_90 = *(float *)(lVar14 + 0x20);
        local_a8 = *puVar12;
        local_a0 = *(float *)(lVar14 + 0x20);
        lVar11 = *(long *)(lVar11 + 0xb4510);
        uVar20 = *(undefined8 *)(lVar11 + 0x130);
        local_e0 = (byte)uVar20;
        uStack_df = (undefined1)((ulong)uVar20 >> 8);
        uStack_de = (undefined2)((ulong)uVar20 >> 0x10);
        uStack_dc = (uint)((ulong)uVar20 >> 0x20);
        local_d8 = (undefined4)*(undefined8 *)(lVar11 + 0x138);
        FUN_02a1e144(lVar11,&local_a8,&local_98,&local_e0,0);
        if (0 < *(int *)(param_1 + 0x28)) {
          iVar8 = 0;
          uVar17 = 0;
          do {
            *(undefined4 *)(puVar18 + 2) = 0;
            *puVar18 = 0;
            puVar18[1] = 0;
            local_c8 = 0;
            local_c0 = local_a8;
            local_b8 = local_a0;
            local_b4 = local_98;
            local_ac = local_90;
            local_e0 = bVar2;
            uStack_df = uVar3;
            uStack_de = uVar4;
            uVar7 = FUN_02a08450(param_1 + 0x30,&local_e0);
            iVar8 = iVar8 + 1;
            uVar17 = uVar7 | uVar17;
          } while (iVar8 < *(int *)(param_1 + 0x28));
          if ((uVar17 & 1) != 0) {
            *(int *)(param_1 + 0x16ac) = *(int *)(param_1 + 0x16ac) + 1;
          }
        }
        lVar11 = *(long *)PTR_DAT_04bb26a8;
      }
      lVar11 = *(long *)(lVar11 + 0xb4510);
      uVar20 = *(undefined8 *)(lVar11 + 0x130);
      local_e0 = (byte)uVar20;
      uStack_df = (undefined1)((ulong)uVar20 >> 8);
      uStack_de = (undefined2)((ulong)uVar20 >> 0x10);
      uStack_dc = (uint)((ulong)uVar20 >> 0x20);
      local_d8 = (undefined4)*(undefined8 *)(lVar11 + 0x138);
      local_a8 = uVar10;
      local_a0 = fVar22;
      local_98 = uVar10;
      local_90 = fVar22;
      FUN_02a1e144(lVar11,&local_a8,&local_98,&local_e0,0);
      if (0 < *(int *)(param_1 + 0x16c8)) {
        iVar8 = 0;
        uVar17 = 0;
        do {
          *(undefined4 *)(puVar18 + 2) = 0;
          *puVar18 = 0;
          puVar18[1] = 0;
          local_c8 = 0;
          local_c0 = local_a8;
          local_b8 = local_a0;
          local_e0 = bVar2;
          uStack_df = uVar3;
          uStack_de = uVar4;
          local_b4 = uVar10;
          local_ac = fVar22;
          uVar7 = FUN_02a08450(param_1 + 0x16d0,&local_e0);
          iVar8 = iVar8 + 1;
          uVar17 = uVar7 | uVar17;
        } while (iVar8 < *(int *)(param_1 + 0x16c8));
        if ((uVar17 & 1) != 0) {
          *(int *)(param_1 + 0x2d4c) = *(int *)(param_1 + 0x2d4c) + 1;
        }
      }
      lVar14 = *(long *)(lVar14 + lVar16 + 8) - lVar16;
    } while (lVar14 != (param_1 + 0x2db8) - lVar16);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x2d98));
  lVar14 = *(long *)PTR_DAT_04bb26a8;
  if (*(long *)(*(long *)(lVar14 + 0xb4510) + 0x50) == 0) {
    fVar22 = 0.0;
    fVar23 = 0.0;
    fVar19 = 0.0;
  }
  else {
    fVar19 = *(float *)(lVar14 + 0xb44d4);
    fVar23 = *(float *)(lVar14 + 0xb44d8);
    fVar22 = *(float *)(lVar14 + 0xb44dc);
  }
  if (*pcVar1 != '\0') {
    local_d0 = CONCAT44(DAT_055e6484,0x3c23d70a);
    local_d8 = 0x3c23d70a;
    local_d4 = (float)DAT_055e6484;
    local_e0 = 10;
    uStack_df = 0xd7;
    uStack_de = 0x3c23;
    uStack_dc = DAT_055e6484;
    FUN_02a069d0(param_1 + 0x10,&local_e0);
    local_d0 = CONCAT44(DAT_055e6484,0x3c23d70a);
    local_d8 = 0x3c23d70a;
    local_d4 = (float)DAT_055e6484;
    local_e0 = 10;
    uStack_df = 0xd7;
    uStack_de = 0x3c23;
    uStack_dc = DAT_055e6484;
    FUN_02a069d0(param_1 + 0x16b0,&local_e0);
  }
  if (*(int *)(param_1 + 0x2d4c) == 0) {
    fVar22 = 3.4028235e+38;
  }
  else {
    local_90 = 0.0;
    local_98 = 0;
    uVar21 = *(undefined4 *)(param_1 + 0x1738);
    local_a8 = *(undefined8 *)(param_1 + 0x1734);
    local_a0 = *(float *)(param_1 + 0x173c);
    lVar14 = *(long *)(param_1 + 8);
    if (lVar14 != 0) {
      *(undefined4 *)(lVar14 + 0xc0) = *(undefined4 *)(param_1 + 0x1734);
      *(undefined4 *)(lVar14 + 0xc4) = uVar21;
      *(float *)(lVar14 + 200) = local_a0;
      *(ushort *)(lVar14 + 0x98) = *(ushort *)(lVar14 + 0x98) | 0x200;
      *(ushort *)(lVar14 + 0x9a) = *(ushort *)(lVar14 + 0x9a) | 0x200;
    }
    lVar14 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0xb4510);
    uVar10 = *(undefined8 *)(lVar14 + 0x130);
    local_e0 = (byte)uVar10;
    uStack_df = (undefined1)((ulong)uVar10 >> 8);
    uStack_de = (undefined2)((ulong)uVar10 >> 0x10);
    uStack_dc = (uint)((ulong)uVar10 >> 0x20);
    local_d8 = (undefined4)*(undefined8 *)(lVar14 + 0x138);
    FUN_02a1e144(lVar14,&local_98,&local_a8,&local_e0,0);
    fVar22 = (float)NEON_fminnm((local_98._4_4_ - fVar23) * (local_98._4_4_ - fVar23) +
                                ((float)local_98 - fVar19) * ((float)local_98 - fVar19) +
                                (local_90 - fVar22) * (local_90 - fVar22),0x7f7fffff);
  }
  fVar23 = SQRT(fVar22);
  if (NAN(fVar23)) {
    fVar23 = sqrtf(fVar22);
    lVar14 = *(long *)(param_1 + 0x2dd0);
  }
  else {
    lVar14 = *(long *)(param_1 + 0x2dd0);
  }
  if (lVar14 == 0) {
    return;
  }
  local_e0 = 0;
  uStack_df = 0;
  uStack_de = 0;
  fVar22 = *(float *)(*(long *)(lVar14 + 0x90) + 0x50);
  plVar15 = *(long **)(lVar14 + 0x60);
  if (((*PTR_DAT_04bc3e28 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc3e28), iVar8 != 0))
  {
    *(undefined ***)PTR_DAT_04bc3e20 = &PTR_LAB_04a97800;
    __cxa_guard_release(PTR_DAT_04bc3e28);
  }
  if ((plVar15 == (long *)0x0) ||
     (uVar9 = (**(code **)(*plVar15 + 0x18))(plVar15,PTR_DAT_04bc3e20), (uVar9 & 1) == 0)) {
    if (((*PTR_DAT_04bc3e50 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc3e50), iVar8 != 0)) {
      *(undefined ***)PTR_DAT_04bc3e48 = &PTR_LAB_04a97800;
      __cxa_guard_release(PTR_DAT_04bc3e50);
    }
    fVar19 = -1.0;
    if ((plVar15 != (long *)0x0) &&
       (uVar9 = (**(code **)(*plVar15 + 0x18))(plVar15,PTR_DAT_04bc3e48), (uVar9 & 1) != 0)) {
      fVar19 = *(float *)(plVar15 + 0xd);
    }
  }
  else {
    fVar19 = *(float *)((long)plVar15 + 0x6c);
  }
  fVar23 = (fVar23 / 10.0 - fVar19) / (fVar22 - fVar19);
  fVar19 = 0.0;
  fVar22 = 0.0;
  if (fVar23 <= 1.0) {
    fVar22 = 1.0 - fVar23;
  }
  local_d4 = 1.0;
  if (0.0 <= fVar23) {
    local_d4 = fVar22;
  }
  local_d4 = local_d4 * local_d4;
  fVar22 = local_d4 - *(float *)(param_1 + 0x2de0);
  *(float *)(param_1 + 0x2de0) = local_d4;
  bVar5 = false;
  bVar6 = true;
  if (-0.1 <= fVar22) {
    bVar5 = false;
    bVar6 = true;
    if (!NAN(fVar22)) {
      bVar5 = fVar22 == 0.1;
      bVar6 = 0.1 <= fVar22;
    }
  }
  if (!bVar6 || bVar5) {
    if ((*(float *)(param_1 + 0x2df0) == *(float *)(param_1 + 0x2df4)) ||
       (iVar8 = *(int *)(param_1 + 0x2de4), iVar8 < 1)) goto LAB_029aea70;
  }
  else {
    iVar8 = 0xf;
  }
  *(int *)(param_1 + 0x2de4) = iVar8 + -1;
  fVar19 = (float)iVar8 * 0.033333335;
LAB_029aea70:
  local_e0 = 1;
  local_d0 = (ulong)(uint)fVar19;
  uStack_dc = 0;
  local_d8 = 0x3f800000;
  FUN_029eb6a4(param_1 + 0x2de8,&local_e0);
  fVar22 = *(float *)(param_1 + 0x2de8);
  *(float *)(param_1 + 0x2ddc) = fVar22;
  if (0.0 < fVar22) {
    uVar21 = FUN_006bd550(&DAT_0409d2ab,0);
    lVar14 = *(long *)PTR_DAT_04bb26a8;
    plVar15 = (long *)(lVar14 + 0xb3b78);
    nn::os::LockMutex((MutexType *)(lVar14 + 0xb3b58));
    if (*(int *)(lVar14 + 0xb3b88) < *(int *)(lVar14 + 0xb3ba0)) {
      puVar18 = *(undefined8 **)(lVar14 + 0xb3b90);
      if (puVar18 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar14 + 0xb3b90) = *puVar18;
      }
      *(undefined4 *)((long)puVar18 + 4) = uVar21;
      *(float *)(puVar18 + 1) = fVar22;
      *(undefined2 *)puVar18 = 0x100;
      puVar18[3] = 0;
      *(undefined1 *)((long)puVar18 + 2) = 1;
      plVar13 = puVar18 + 2;
      *plVar13 = 0;
      lVar16 = *plVar15;
      *plVar15 = (long)plVar13;
      puVar18[3] = plVar15;
      *plVar13 = lVar16;
      if (lVar16 != 0) {
        *(long **)(lVar16 + 8) = plVar13;
      }
      *(int *)(lVar14 + 0xb3b88) = *(int *)(lVar14 + 0xb3b88) + 1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar14 + 0xb3b58));
  }
  return;
}

