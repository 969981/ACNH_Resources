
void FUN_0204784c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  plVar9 = (long *)PTR_DAT_04bb3350;
  lVar11 = *(long *)(param_1 + 0x2b8);
  if (lVar11 == 0) {
    lVar12 = 1;
    iVar13 = *(int *)(param_1 + 0x2c0);
    plVar8 = (long *)PTR_DAT_04bb2698;
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar12 = *(long *)(lVar6 + 0xa8);
    *(long *)(lVar6 + 0xa8) = lVar11;
    iVar13 = *(int *)(param_1 + 0x2c0);
    plVar8 = (long *)PTR_DAT_04bb2698;
  }
  PTR_DAT_04bb2698 = (undefined *)plVar8;
  if (iVar13 == 0) {
    lVar11 = *(long *)PTR_DAT_04bb5c90;
    iVar13 = *(int *)(lVar11 + 0x38);
    lVar6 = *plVar8;
    fVar16 = (float)*(int *)(lVar11 + 0x2c) * 5.0;
    fVar15 = (float)*(int *)(lVar11 + 0x28) * 5.0;
    fVar14 = (float)*(int *)(lVar11 + 0x3c) * 5.0 + 5.0;
    fVar18 = (fVar16 + fVar14) * 0.5;
    if (lVar6 == 0) {
      plVar7 = malloc(0x1f0);
    }
    else {
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
      plVar7 = (long *)(lVar6 + 8);
      if (lVar11 != 0) {
        plVar7 = (long *)(lVar11 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x1f0,8);
      }
    }
    *(undefined8 *)((long)plVar7 + 0x1d) = 0;
    puVar5 = PTR_DAT_04bb5cb0;
    puVar4 = PTR_DAT_04bb5bb8;
    plVar7[2] = 0;
    plVar7[3] = 0;
    puVar3 = PTR_DAT_04bb5ba8;
    plVar7[0x10] = 0;
    plVar7[0x11] = 0;
    plVar7[0x16] = 0;
    plVar7[0x17] = 0;
    plVar7[10] = (long)(puVar4 + 0x10);
    *plVar7 = (long)(puVar5 + 0x10);
    plVar7[1] = 0;
    puVar1 = puVar3 + 0x10;
    plVar7[0xc] = (long)puVar1;
    plVar7[0xd] = 0;
    plVar7[0xe] = 0;
    plVar7[0xf] = (long)puVar1;
    plVar7[0x12] = (long)puVar1;
    plVar7[0x13] = 0;
    plVar7[0x14] = 0;
    plVar7[0x15] = (long)puVar1;
    plVar7[0x18] = (long)puVar1;
    plVar7[0x19] = 0;
    plVar7[0x1a] = 0;
    plVar7[0x1b] = (long)puVar1;
    plVar7[0x1c] = 0;
    plVar7[0x1d] = 0;
    plVar7[0x1e] = (long)puVar1;
    plVar7[0x1f] = 0;
    plVar7[0x20] = 0;
    plVar7[0x21] = (long)puVar1;
    plVar7[0x22] = 0;
    plVar7[0x23] = 0;
    plVar7[0x24] = (long)puVar1;
    plVar7[0x25] = 0;
    plVar7[0x26] = 0;
    plVar7[0x27] = (long)puVar1;
    plVar7[0x28] = 0;
    plVar7[0x29] = 0;
    plVar7[0x2a] = (long)puVar1;
    plVar7[0x2b] = 0;
    plVar7[0x2c] = 0;
    plVar7[0x2d] = (long)puVar1;
    plVar7[0x2e] = 0;
    plVar7[0x2f] = 0;
    plVar7[0x30] = (long)puVar1;
    plVar7[0x31] = 0;
    plVar7[0x32] = 0;
    plVar7[0x33] = (long)puVar1;
    plVar7[0x34] = 0;
    plVar7[0x35] = 0;
    *(undefined4 *)(plVar7 + 0x36) = 0;
    *(undefined1 *)(plVar7 + 0x37) = 0;
    puVar1 = PTR_DAT_04bbc1a0 + 0x10;
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    plVar7[0x3a] = 0;
    *(undefined4 *)(plVar7 + 0x3d) = 0;
    plVar7[5] = 0x41a0000041200000;
    *(float *)(plVar7 + 6) = fVar14 - fVar16;
    *(undefined8 *)((long)plVar7 + 0x34) = 0;
    *(undefined4 *)((long)plVar7 + 0x3c) = 0;
    *(float *)(plVar7 + 8) = fVar15 + -5.0;
    *(undefined4 *)((long)plVar7 + 0x44) = 0;
    *(float *)(plVar7 + 9) = fVar18;
    *(undefined4 *)(plVar7 + 0xb) = 0;
    plVar7[0x38] = (long)puVar1;
    plVar7[0x39] = (long)puVar2;
    *(undefined4 *)((long)plVar7 + 0x1c) = 0x800;
    *(undefined1 *)((long)plVar7 + 0x1ec) = 1;
    plVar7[0x3b] = (long)puVar2;
    plVar7[0x3c] = 0;
    *(undefined4 *)((long)plVar7 + 0x4c) = 0x200000;
    if (*(int *)(param_1 + 0x2c0) < *(int *)(param_1 + 0x2c4)) {
      *(long **)(*(long *)(param_1 + 0x2c8) + (long)*(int *)(param_1 + 0x2c0) * 8) = plVar7;
      *(int *)(param_1 + 0x2c0) = *(int *)(param_1 + 0x2c0) + 1;
    }
    fVar17 = (float)iVar13 * 5.0 + 5.0;
    lVar11 = *(long *)PTR_DAT_04bb27c8;
    if ((lVar11 != 0) && (plVar7[2] == 0 && plVar7[1] == 0)) {
      nn::os::LockMutex((MutexType *)(lVar11 + 0x50));
      plVar9 = (long *)(lVar11 + 0x70);
      lVar6 = *plVar9;
      plVar7 = (long *)((long)*(int *)(lVar11 + 0x84) + (long)plVar7);
      *plVar9 = (long)plVar7;
      *plVar7 = lVar6;
      plVar7[1] = (long)plVar9;
      if (lVar6 != 0) {
        *(long **)(lVar6 + 8) = plVar7;
      }
      *(int *)(lVar11 + 0x80) = *(int *)(lVar11 + 0x80) + 1;
      nn::os::UnlockMutex((MutexType *)(lVar11 + 0x50));
      plVar9 = (long *)PTR_DAT_04bb3350;
    }
    lVar11 = *plVar8;
    if (lVar11 == 0) {
      plVar7 = malloc(0x1f0);
    }
    else {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
      plVar7 = (long *)(lVar11 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x1f0,8);
      }
    }
    *(undefined8 *)((long)plVar7 + 0x1d) = 0;
    *plVar7 = (long)(puVar5 + 0x10);
    plVar7[1] = 0;
    plVar7[10] = (long)(puVar4 + 0x10);
    puVar1 = puVar3 + 0x10;
    plVar7[2] = 0;
    plVar7[3] = 0;
    plVar7[0xc] = (long)puVar1;
    plVar7[0xd] = 0;
    plVar7[0xe] = 0;
    plVar7[0xf] = (long)puVar1;
    plVar7[0x10] = 0;
    plVar7[0x11] = 0;
    plVar7[0x12] = (long)puVar1;
    plVar7[0x13] = 0;
    plVar7[0x14] = 0;
    plVar7[0x15] = (long)puVar1;
    plVar7[0x16] = 0;
    plVar7[0x17] = 0;
    plVar7[0x18] = (long)puVar1;
    plVar7[0x19] = 0;
    plVar7[0x1a] = 0;
    plVar7[0x1b] = (long)puVar1;
    plVar7[0x1c] = 0;
    plVar7[0x1d] = 0;
    plVar7[0x1e] = (long)puVar1;
    plVar7[0x1f] = 0;
    plVar7[0x20] = 0;
    plVar7[0x21] = (long)puVar1;
    plVar7[0x22] = 0;
    plVar7[0x23] = 0;
    plVar7[0x24] = (long)puVar1;
    plVar7[0x25] = 0;
    plVar7[0x26] = 0;
    plVar7[0x27] = (long)puVar1;
    plVar7[0x28] = 0;
    plVar7[0x29] = 0;
    plVar7[0x2a] = (long)puVar1;
    plVar7[0x2b] = 0;
    plVar7[0x2c] = 0;
    plVar7[0x2d] = (long)puVar1;
    plVar7[0x2e] = 0;
    plVar7[0x2f] = 0;
    plVar7[0x30] = (long)puVar1;
    plVar7[0x31] = 0;
    plVar7[0x32] = 0;
    plVar7[0x33] = (long)puVar1;
    plVar7[0x34] = 0;
    plVar7[0x35] = 0;
    *(undefined4 *)(plVar7 + 0x36) = 0;
    *(undefined1 *)(plVar7 + 0x37) = 0;
    puVar1 = PTR_DAT_04bbc1a0 + 0x10;
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    plVar7[0x3a] = 0;
    *(undefined4 *)(plVar7 + 0x3d) = 0;
    plVar7[5] = 0x41a0000041200000;
    *(float *)(plVar7 + 6) = fVar14 - fVar16;
    *(undefined8 *)((long)plVar7 + 0x34) = 0;
    *(undefined4 *)((long)plVar7 + 0x3c) = 0;
    *(float *)(plVar7 + 8) = fVar17 + 5.0;
    *(undefined4 *)((long)plVar7 + 0x44) = 0;
    *(float *)(plVar7 + 9) = fVar18;
    *(undefined4 *)(plVar7 + 0xb) = 0;
    plVar7[0x38] = (long)puVar1;
    plVar7[0x39] = (long)puVar2;
    *(undefined4 *)((long)plVar7 + 0x1c) = 0x800;
    *(undefined1 *)((long)plVar7 + 0x1ec) = 1;
    plVar7[0x3b] = (long)puVar2;
    plVar7[0x3c] = 0;
    *(undefined4 *)((long)plVar7 + 0x4c) = 0x200000;
    if (*(int *)(param_1 + 0x2c0) < *(int *)(param_1 + 0x2c4)) {
      *(long **)(*(long *)(param_1 + 0x2c8) + (long)*(int *)(param_1 + 0x2c0) * 8) = plVar7;
      *(int *)(param_1 + 0x2c0) = *(int *)(param_1 + 0x2c0) + 1;
    }
    lVar11 = *(long *)PTR_DAT_04bb27c8;
    if ((lVar11 != 0) && (plVar7[2] == 0 && plVar7[1] == 0)) {
      nn::os::LockMutex((MutexType *)(lVar11 + 0x50));
      plVar10 = (long *)(lVar11 + 0x70);
      lVar6 = *plVar10;
      plVar7 = (long *)((long)*(int *)(lVar11 + 0x84) + (long)plVar7);
      *plVar10 = (long)plVar7;
      *plVar7 = lVar6;
      plVar7[1] = (long)plVar10;
      if (lVar6 != 0) {
        *(long **)(lVar6 + 8) = plVar7;
      }
      *(int *)(lVar11 + 0x80) = *(int *)(lVar11 + 0x80) + 1;
      nn::os::UnlockMutex((MutexType *)(lVar11 + 0x50));
    }
    lVar11 = *plVar8;
    fVar18 = (fVar15 + fVar17) * 0.5;
    if (lVar11 == 0) {
      plVar7 = malloc(0x1f0);
    }
    else {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
      plVar7 = (long *)(lVar11 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x1f0,8);
      }
    }
    *(undefined8 *)((long)plVar7 + 0x1d) = 0;
    *plVar7 = (long)(puVar5 + 0x10);
    plVar7[1] = 0;
    plVar7[10] = (long)(puVar4 + 0x10);
    puVar1 = puVar3 + 0x10;
    plVar7[2] = 0;
    plVar7[3] = 0;
    plVar7[0xc] = (long)puVar1;
    plVar7[0xd] = 0;
    plVar7[0xe] = 0;
    plVar7[0xf] = (long)puVar1;
    plVar7[0x10] = 0;
    plVar7[0x11] = 0;
    plVar7[0x12] = (long)puVar1;
    plVar7[0x13] = 0;
    plVar7[0x14] = 0;
    plVar7[0x15] = (long)puVar1;
    plVar7[0x16] = 0;
    plVar7[0x17] = 0;
    plVar7[0x18] = (long)puVar1;
    plVar7[0x19] = 0;
    plVar7[0x1a] = 0;
    plVar7[0x1b] = (long)puVar1;
    plVar7[0x1c] = 0;
    plVar7[0x1d] = 0;
    plVar7[0x1e] = (long)puVar1;
    plVar7[0x1f] = 0;
    plVar7[0x20] = 0;
    plVar7[0x21] = (long)puVar1;
    plVar7[0x22] = 0;
    plVar7[0x23] = 0;
    plVar7[0x24] = (long)puVar1;
    plVar7[0x25] = 0;
    plVar7[0x26] = 0;
    plVar7[0x27] = (long)puVar1;
    plVar7[0x28] = 0;
    plVar7[0x29] = 0;
    plVar7[0x2a] = (long)puVar1;
    plVar7[0x2b] = 0;
    plVar7[0x2c] = 0;
    plVar7[0x2d] = (long)puVar1;
    plVar7[0x2e] = 0;
    plVar7[0x2f] = 0;
    plVar7[0x30] = (long)puVar1;
    plVar7[0x31] = 0;
    plVar7[0x32] = 0;
    plVar7[0x33] = (long)puVar1;
    plVar7[0x34] = 0;
    plVar7[0x35] = 0;
    *(undefined4 *)(plVar7 + 0x36) = 0;
    *(undefined1 *)(plVar7 + 0x37) = 0;
    puVar1 = PTR_DAT_04bbc1a0 + 0x10;
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    plVar7[0x3a] = 0;
    *(undefined4 *)(plVar7 + 0x3d) = 0;
    *(float *)(plVar7 + 5) = fVar17 - fVar15;
    *(undefined8 *)((long)plVar7 + 0x2c) = 0x4120000041a00000;
    *(undefined8 *)((long)plVar7 + 0x34) = 0;
    *(undefined4 *)((long)plVar7 + 0x3c) = 0;
    *(float *)(plVar7 + 8) = fVar18;
    *(undefined4 *)((long)plVar7 + 0x44) = 0;
    *(float *)(plVar7 + 9) = fVar16 + -5.0;
    *(undefined4 *)(plVar7 + 0xb) = 0;
    plVar7[0x38] = (long)puVar1;
    plVar7[0x39] = (long)puVar2;
    *(undefined4 *)((long)plVar7 + 0x1c) = 0x800;
    *(undefined1 *)((long)plVar7 + 0x1ec) = 1;
    plVar7[0x3b] = (long)puVar2;
    plVar7[0x3c] = 0;
    *(undefined4 *)((long)plVar7 + 0x4c) = 0x200000;
    if (*(int *)(param_1 + 0x2c0) < *(int *)(param_1 + 0x2c4)) {
      *(long **)(*(long *)(param_1 + 0x2c8) + (long)*(int *)(param_1 + 0x2c0) * 8) = plVar7;
      *(int *)(param_1 + 0x2c0) = *(int *)(param_1 + 0x2c0) + 1;
    }
    lVar11 = *(long *)PTR_DAT_04bb27c8;
    if ((lVar11 != 0) && (plVar7[2] == 0 && plVar7[1] == 0)) {
      nn::os::LockMutex((MutexType *)(lVar11 + 0x50));
      plVar10 = (long *)(lVar11 + 0x70);
      lVar6 = *plVar10;
      plVar7 = (long *)((long)*(int *)(lVar11 + 0x84) + (long)plVar7);
      *plVar10 = (long)plVar7;
      *plVar7 = lVar6;
      plVar7[1] = (long)plVar10;
      if (lVar6 != 0) {
        *(long **)(lVar6 + 8) = plVar7;
      }
      *(int *)(lVar11 + 0x80) = *(int *)(lVar11 + 0x80) + 1;
      nn::os::UnlockMutex((MutexType *)(lVar11 + 0x50));
    }
    lVar11 = *plVar8;
    if (lVar11 == 0) {
      plVar8 = malloc(0x1f0);
    }
    else {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
      plVar8 = (long *)(lVar11 + 8);
      if (lVar6 != 0) {
        plVar8 = (long *)(lVar6 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)0x0;
      }
      else {
        plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x1f0,8);
      }
    }
    *(undefined8 *)((long)plVar8 + 0x1d) = 0;
    *plVar8 = (long)(puVar5 + 0x10);
    plVar8[1] = 0;
    plVar8[10] = (long)(puVar4 + 0x10);
    puVar3 = puVar3 + 0x10;
    plVar8[2] = 0;
    plVar8[3] = 0;
    plVar8[0xc] = (long)puVar3;
    plVar8[0xd] = 0;
    plVar8[0xe] = 0;
    plVar8[0xf] = (long)puVar3;
    plVar8[0x10] = 0;
    plVar8[0x11] = 0;
    plVar8[0x12] = (long)puVar3;
    plVar8[0x13] = 0;
    plVar8[0x14] = 0;
    plVar8[0x15] = (long)puVar3;
    plVar8[0x16] = 0;
    plVar8[0x17] = 0;
    plVar8[0x18] = (long)puVar3;
    plVar8[0x19] = 0;
    plVar8[0x1a] = 0;
    plVar8[0x1b] = (long)puVar3;
    plVar8[0x1c] = 0;
    plVar8[0x1d] = 0;
    plVar8[0x1e] = (long)puVar3;
    plVar8[0x1f] = 0;
    plVar8[0x20] = 0;
    plVar8[0x21] = (long)puVar3;
    plVar8[0x22] = 0;
    plVar8[0x23] = 0;
    plVar8[0x24] = (long)puVar3;
    plVar8[0x25] = 0;
    plVar8[0x26] = 0;
    plVar8[0x27] = (long)puVar3;
    plVar8[0x28] = 0;
    plVar8[0x29] = 0;
    plVar8[0x2a] = (long)puVar3;
    plVar8[0x2b] = 0;
    plVar8[0x2c] = 0;
    plVar8[0x2d] = (long)puVar3;
    plVar8[0x2e] = 0;
    plVar8[0x2f] = 0;
    plVar8[0x30] = (long)puVar3;
    plVar8[0x31] = 0;
    plVar8[0x32] = 0;
    plVar8[0x33] = (long)puVar3;
    plVar8[0x34] = 0;
    plVar8[0x35] = 0;
    *(undefined4 *)(plVar8 + 0x36) = 0;
    *(undefined1 *)(plVar8 + 0x37) = 0;
    puVar1 = PTR_DAT_04bbc1a0 + 0x10;
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    plVar8[0x3a] = 0;
    *(undefined4 *)(plVar8 + 0x3d) = 0;
    *(float *)(plVar8 + 5) = fVar17 - fVar15;
    *(undefined8 *)((long)plVar8 + 0x2c) = 0x4120000041a00000;
    *(undefined8 *)((long)plVar8 + 0x34) = 0;
    *(undefined4 *)((long)plVar8 + 0x3c) = 0;
    *(float *)(plVar8 + 8) = fVar18;
    *(undefined4 *)((long)plVar8 + 0x44) = 0;
    *(float *)(plVar8 + 9) = fVar14 + 5.0;
    *(undefined4 *)(plVar8 + 0xb) = 0;
    *(undefined4 *)((long)plVar8 + 0x4c) = 0x200000;
    plVar8[0x38] = (long)puVar1;
    plVar8[0x39] = (long)puVar2;
    *(undefined4 *)((long)plVar8 + 0x1c) = 0x800;
    plVar8[0x3b] = (long)puVar2;
    plVar8[0x3c] = 0;
    *(undefined1 *)((long)plVar8 + 0x1ec) = 1;
    if (*(int *)(param_1 + 0x2c0) < *(int *)(param_1 + 0x2c4)) {
      *(long **)(*(long *)(param_1 + 0x2c8) + (long)*(int *)(param_1 + 0x2c0) * 8) = plVar8;
      *(int *)(param_1 + 0x2c0) = *(int *)(param_1 + 0x2c0) + 1;
    }
    lVar11 = *(long *)PTR_DAT_04bb27c8;
    if ((lVar11 != 0) && (plVar8[2] == 0 && plVar8[1] == 0)) {
      nn::os::LockMutex((MutexType *)(lVar11 + 0x50));
      plVar7 = (long *)(lVar11 + 0x70);
      lVar6 = *plVar7;
      plVar8 = (long *)((long)*(int *)(lVar11 + 0x84) + (long)plVar8);
      *plVar7 = (long)plVar8;
      *plVar8 = lVar6;
      plVar8[1] = (long)plVar7;
      if (lVar6 != 0) {
        *(long **)(lVar6 + 8) = plVar8;
      }
      *(int *)(lVar11 + 0x80) = *(int *)(lVar11 + 0x80) + 1;
      nn::os::UnlockMutex((MutexType *)(lVar11 + 0x50));
    }
  }
  if (lVar12 != 1) {
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    *(long *)(lVar11 + 0xa8) = lVar12;
  }
  return;
}

