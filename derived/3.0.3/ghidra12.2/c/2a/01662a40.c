
void FUN_01662a40(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  long *plVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined2 *puVar17;
  long lVar18;
  
  param_1[1] = param_1 + 1;
  param_1[2] = param_1 + 1;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_049ba140;
  puVar1 = param_1 + 0x2d;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[5] = param_1 + 5;
  param_1[6] = param_1 + 5;
  memset(param_1 + 8,0,0x114);
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  param_1[0x35] = puVar1;
  param_1[0x36] = puVar2;
  puVar3 = PTR_DAT_04bd0d40 + 0x10;
  param_1[0x37] = &DAT_0407ebb1;
  param_1[0x2d] = puVar3;
  param_1[0x2e] = 0;
  puVar13 = PTR_DAT_04bb2698;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  lVar14 = *(long *)puVar13;
  if (lVar14 != 0) {
    lVar14 = FUN_038cb610(lVar14,puVar1);
    param_1[0x2e] = lVar14;
    if (lVar14 != 0) {
      if ((*(uint *)(lVar14 + 0xd0) & 1) == 0) {
        lVar18 = 0;
      }
      else {
        lVar18 = lVar14 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar14 + 0xb0));
      }
      plVar16 = (long *)(lVar14 + 0x70);
      lVar15 = *plVar16;
      plVar5 = (long *)((long)*(int *)(lVar14 + 0x84) + (long)puVar1);
      *plVar16 = (long)plVar5;
      *plVar5 = lVar15;
      plVar5[1] = (long)plVar16;
      if (lVar15 != 0) {
        *(long **)(lVar15 + 8) = plVar5;
      }
      *(int *)(lVar14 + 0x80) = *(int *)(lVar14 + 0x80) + 1;
      if (lVar18 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar18 + 0x20));
      }
    }
  }
  puVar11 = PTR_DAT_04bb24a8;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  puVar1 = param_1 + 0x40;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  puVar12 = PTR_DAT_04bb24b0;
  lVar14 = *(long *)puVar13;
  *(undefined4 *)((long)param_1 + 0x1ec) = 0;
  param_1[0x2d] = puVar11 + 0x10;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = puVar1;
  param_1[0x49] = puVar2;
  param_1[0x4a] = &DAT_0407ebb1;
  param_1[0x40] = puVar3;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x38] = puVar12 + 0x10;
  param_1[0x39] = 0;
  if (lVar14 != 0) {
    lVar14 = FUN_038cb610(lVar14,puVar1);
    param_1[0x41] = lVar14;
    if (lVar14 != 0) {
      if ((*(uint *)(lVar14 + 0xd0) & 1) == 0) {
        lVar18 = 0;
      }
      else {
        lVar18 = lVar14 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar14 + 0xb0));
      }
      plVar16 = (long *)(lVar14 + 0x70);
      lVar15 = *plVar16;
      plVar5 = (long *)((long)*(int *)(lVar14 + 0x84) + (long)puVar1);
      *plVar16 = (long)plVar5;
      *plVar5 = lVar15;
      plVar5[1] = (long)plVar16;
      if (lVar15 != 0) {
        *(long **)(lVar15 + 8) = plVar5;
      }
      *(int *)(lVar14 + 0x80) = *(int *)(lVar14 + 0x80) + 1;
      if (lVar18 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar18 + 0x20));
      }
    }
  }
  param_1[0x40] = puVar11 + 0x10;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x4b] = puVar12 + 0x10;
  *(undefined4 *)((long)param_1 + 0x284) = 0;
  param_1[0x53] = 0;
  puVar2 = PTR_DAT_04bd1408 + 0x10;
  param_1[0x54] = puVar2;
  FUN_0034f694(param_1 + 0x8a);
  FUN_0034f814(param_1 + 0xa5);
  param_1[0x65] = 0;
  param_1[0x65] = param_1 + 0x8a;
  *(undefined2 *)(param_1 + 0x69) = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[100] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[0x61] = param_1 + 0x69;
  param_1[0x66] = param_1 + 0xa5;
  param_1[0xad] = param_1 + 0x55;
  param_1[0xae] = 0;
  param_1[0xaf] = puVar2;
  FUN_0034f694(param_1 + 0xe5);
  FUN_0034f814(param_1 + 0x100);
  param_1[0xc0] = 0;
  param_1[0xc0] = param_1 + 0xe5;
  *(undefined2 *)(param_1 + 0xc4) = 0;
  param_1[0xc3] = 0;
  param_1[0xc2] = 0;
  param_1[0xc1] = 0;
  param_1[0xbf] = 0;
  param_1[0xbe] = 0;
  param_1[0xbd] = 0;
  param_1[0xbc] = 0;
  param_1[0xbb] = 0;
  param_1[0xba] = 0;
  param_1[0xb9] = 0;
  param_1[0xb8] = 0;
  param_1[0xb7] = 0;
  param_1[0xb6] = 0;
  param_1[0xb5] = 0;
  param_1[0xb4] = 0;
  param_1[0xb3] = 0;
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  param_1[0xb0] = 0;
  param_1[0xbc] = param_1 + 0xc4;
  param_1[0xc1] = param_1 + 0x100;
  param_1[0x108] = param_1 + 0xb0;
  param_1[0x109] = 0;
  param_1[0x10a] = puVar2;
  FUN_0034f694(param_1 + 0x140);
  FUN_0034f814(param_1 + 0x15b);
  *(undefined2 *)(param_1 + 0x11f) = 0;
  param_1[0x11e] = 0;
  param_1[0x11d] = 0;
  param_1[0x11c] = 0;
  param_1[0x11b] = 0;
  param_1[0x11a] = 0;
  param_1[0x119] = 0;
  param_1[0x118] = 0;
  param_1[0x117] = 0;
  param_1[0x116] = 0;
  param_1[0x115] = 0;
  param_1[0x114] = 0;
  param_1[0x113] = 0;
  param_1[0x112] = 0;
  param_1[0x111] = 0;
  param_1[0x110] = 0;
  param_1[0x10f] = 0;
  param_1[0x10e] = 0;
  param_1[0x10d] = 0;
  param_1[0x10c] = 0;
  param_1[0x10b] = 0;
  param_1[0x117] = param_1 + 0x11f;
  param_1[0x11b] = param_1 + 0x140;
  param_1[0x11c] = param_1 + 0x15b;
  param_1[0x163] = param_1 + 0x10b;
  memset(param_1 + 8,0,0x110);
  if (param_1[0x3c] == 0) {
    param_1[0x3a] = &LAB_01663080;
    param_1[0x3b] = 0;
    param_1[0x38] = &PTR_LAB_049ba188;
    param_1[0x39] = param_1;
    lVar14 = param_1[0x4f];
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1[0x3c] + 0x20));
    param_1[0x3a] = &LAB_01663080;
    param_1[0x3b] = 0;
    param_1[0x38] = &PTR_LAB_049ba188;
    param_1[0x39] = param_1;
    if (param_1[0x3c] != 0) {
      nn::os::UnlockMutex((MutexType *)(param_1[0x3c] + 0x20));
    }
    lVar14 = param_1[0x4f];
  }
  if (lVar14 == 0) {
    param_1[0x4c] = param_1;
    param_1[0x4d] = &LAB_01663190;
    param_1[0x4e] = 0;
    param_1[0x4b] = &PTR_LAB_049ba188;
  }
  else {
    nn::os::LockMutex((MutexType *)(lVar14 + 0x20));
    param_1[0x4c] = param_1;
    param_1[0x4d] = &LAB_01663190;
    param_1[0x4e] = 0;
    param_1[0x4b] = &PTR_LAB_049ba188;
    if (param_1[0x4f] != 0) {
      nn::os::UnlockMutex((MutexType *)(param_1[0x4f] + 0x20));
    }
  }
  puVar2 = PTR_DAT_04bb31c8;
  uVar10 = s_GfxG3DDummy_0406ccee._0_8_;
  puVar17 = (undefined2 *)param_1[0x61];
  lVar14 = *(long *)(*(long *)PTR_DAT_04bb31c8 + 0x18);
  *(undefined8 *)(puVar17 + 1) = s_GfxG3DDummy_0406ccee._0_8_;
  *(undefined4 *)((long)puVar17 + 9) = 0x796d6d75;
  *(undefined1 *)((long)puVar17 + 0xd) = 0;
  *puVar17 = 0xb;
  puVar3 = PTR_DAT_04bc1010;
  iVar6 = *(int *)(lVar14 + 0x50);
  if (iVar6 == -1) {
    lVar14 = -1;
  }
  else {
    lVar18 = *(long *)PTR_DAT_04bc1010;
    uVar9 = iVar6 - (uint)*(ushort *)(lVar18 + 0x3da);
    if (*(uint *)(lVar18 + 0x368) <= uVar9) {
      uVar9 = 0;
    }
    puVar4 = (uint *)(*(long *)(lVar18 + 0x370) + (long)(int)uVar9 * 0x20 + 4);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar8) {
        *puVar4 = *puVar4 & 0xfffffffb | 4;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    lVar14 = (long)*(int *)(lVar14 + 0x50);
  }
  param_1[0x67] = lVar14;
  lVar14 = *(long *)puVar2;
  puVar17 = (undefined2 *)param_1[0xbc];
  param_1[0x53] = param_1 + 0x55;
  lVar14 = *(long *)(lVar14 + 0x40);
  *puVar17 = 0xb;
  *(undefined8 *)(puVar17 + 1) = uVar10;
  *(undefined4 *)((long)puVar17 + 9) = 0x796d6d75;
  *(undefined1 *)((long)puVar17 + 0xd) = 0;
  iVar6 = *(int *)(lVar14 + 0x50);
  if (iVar6 == -1) {
    lVar14 = -1;
  }
  else {
    lVar18 = *(long *)puVar3;
    uVar9 = iVar6 - (uint)*(ushort *)(lVar18 + 0x3da);
    if (*(uint *)(lVar18 + 0x368) <= uVar9) {
      uVar9 = 0;
    }
    puVar4 = (uint *)(*(long *)(lVar18 + 0x370) + (long)(int)uVar9 * 0x20 + 4);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar8) {
        *puVar4 = *puVar4 & 0xfffffffb | 4;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    lVar14 = (long)*(int *)(lVar14 + 0x50);
  }
  lVar18 = *(long *)puVar2;
  param_1[0xc2] = lVar14;
  param_1[0xae] = param_1 + 0xb0;
  puVar17 = (undefined2 *)param_1[0x117];
  lVar14 = *(long *)(lVar18 + 0x88);
  *puVar17 = 0xb;
  *(undefined8 *)(puVar17 + 1) = uVar10;
  *(undefined4 *)((long)puVar17 + 9) = 0x796d6d75;
  *(undefined1 *)((long)puVar17 + 0xd) = 0;
  iVar6 = *(int *)(lVar14 + 0x50);
  if (iVar6 == -1) {
    lVar14 = -1;
  }
  else {
    lVar18 = *(long *)puVar3;
    uVar9 = iVar6 - (uint)*(ushort *)(lVar18 + 0x3da);
    if (*(uint *)(lVar18 + 0x368) <= uVar9) {
      uVar9 = 0;
    }
    puVar4 = (uint *)(*(long *)(lVar18 + 0x370) + (long)(int)uVar9 * 0x20 + 4);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar8) {
        *puVar4 = *puVar4 & 0xfffffffb | 4;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    lVar14 = (long)*(int *)(lVar14 + 0x50);
  }
  param_1[0x11d] = lVar14;
  param_1[0x109] = param_1 + 0x10b;
  return;
}

