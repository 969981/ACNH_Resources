
void FUN_029f4248(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  undefined8 *puVar16;
  int iVar17;
  int iVar18;
  long *plVar19;
  long lVar20;
  MutexType *pMVar21;
  undefined8 uVar22;
  int iVar23;
  undefined *local_98;
  char *pcStack_90;
  undefined *local_88;
  char *pcStack_80;
  undefined *local_78;
  char *pcStack_70;
  uint local_64;
  
  pMVar21 = (MutexType *)(param_1 + 0x98);
  nn::os::LockMutex(pMVar21);
  iVar17 = (int)*(short *)(param_1 + 0x18);
  iVar13 = (int)*(short *)(param_1 + 0x1c);
  iVar5 = *(int *)(param_1 + 0x50);
  iVar3 = *(int *)(param_1 + 100);
  uVar4 = *(uint *)(param_1 + 0x68);
  iVar18 = (int)*(short *)(param_1 + 0x1e);
  iVar23 = (int)*(short *)(param_1 + 0x20);
  iVar6 = *(int *)(param_1 + 0x58);
  cVar8 = *(char *)(param_1 + 0x5c);
  iVar7 = *(int *)(param_1 + 0x70);
  local_64 = uVar4;
  nn::os::UnlockMutex(pMVar21);
  bVar9 = cVar8 != '\0';
  uVar22 = *(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 0x18);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "WorldBGM_Chime";
  local_78 = puVar1;
  FUN_02a227e8(uVar22,&local_78,bVar9);
  pcStack_80 = "Structure_DoorBell";
  local_88 = puVar1;
  FUN_02a227e8(uVar22,&local_88,bVar9);
  pcStack_90 = "SystemBGM_EventNoFade";
  local_98 = puVar1;
  FUN_02a227e8(uVar22,&local_98,bVar9);
  lVar15 = *(long *)PTR_DAT_04bb2808;
  if (lVar15 == 0) {
    bVar9 = false;
    if (uVar4 != 1) goto LAB_029f4390;
LAB_029f43a0:
    nn::os::LockMutex(pMVar21);
    if ((*(byte *)(param_1 + 0xb8) & 1) != 0) {
      *(byte *)(param_1 + 0xb8) = *(byte *)(param_1 + 0xb8) & 0xfe;
      uVar12 = *(undefined4 *)(param_1 + 0xbc);
      *(undefined4 *)(param_1 + 0xbc) = 0;
      *(undefined4 *)(param_1 + 0xc0) = uVar12;
    }
    nn::os::UnlockMutex(pMVar21);
    iVar11 = *(int *)(param_1 + 0xc0);
    if (iVar11 == 0) {
      uVar12 = FUN_006bd550(&DAT_040fff4c,0);
      lVar15 = *(long *)PTR_DAT_04bb26a8;
      pMVar21 = (MutexType *)(lVar15 + 0xb3b58);
      plVar2 = (long *)(lVar15 + 0xb3b78);
      nn::os::LockMutex(pMVar21);
      if (*(int *)(lVar15 + 0xb3b88) < *(int *)(lVar15 + 0xb3ba0)) {
        puVar16 = *(undefined8 **)(lVar15 + 0xb3b90);
        if (puVar16 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar15 + 0xb3b90) = *puVar16;
        }
        *(undefined1 *)((long)puVar16 + 2) = 0;
        *(undefined2 *)puVar16 = 0x100;
        *(undefined4 *)((long)puVar16 + 4) = uVar12;
        *(undefined4 *)(puVar16 + 1) = 0x3f800000;
        plVar19 = puVar16 + 2;
        *plVar19 = 0;
        puVar16[3] = 0;
        lVar20 = *plVar2;
        *plVar2 = (long)plVar19;
        puVar16[3] = plVar2;
        *plVar19 = lVar20;
        if (lVar20 != 0) {
          *(long **)(lVar20 + 8) = plVar19;
        }
        *(int *)(lVar15 + 0xb3b88) = *(int *)(lVar15 + 0xb3b88) + 1;
      }
    }
    else {
      lVar15 = *(long *)PTR_DAT_04bb26a8;
      pMVar21 = (MutexType *)(lVar15 + 0xb3b58);
      plVar2 = (long *)(lVar15 + 0xb3b78);
      nn::os::LockMutex(pMVar21);
      if (*(int *)(lVar15 + 0xb3b88) < *(int *)(lVar15 + 0xb3ba0)) {
        puVar16 = *(undefined8 **)(lVar15 + 0xb3b90);
        if (puVar16 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar15 + 0xb3b90) = *puVar16;
        }
        *(undefined1 *)((long)puVar16 + 2) = 0;
        *(undefined2 *)puVar16 = 0x100;
        *(int *)((long)puVar16 + 4) = iVar11;
        *(undefined4 *)(puVar16 + 1) = 0x3f800000;
        plVar19 = puVar16 + 2;
        *plVar19 = 0;
        puVar16[3] = 0;
        lVar20 = *plVar2;
        *plVar2 = (long)plVar19;
        puVar16[3] = plVar2;
        *plVar19 = lVar20;
        if (lVar20 != 0) {
          *(long **)(lVar20 + 8) = plVar19;
        }
        *(int *)(lVar15 + 0xb3b88) = *(int *)(lVar15 + 0xb3b88) + 1;
      }
    }
    nn::os::UnlockMutex(pMVar21);
  }
  else {
    bVar10 = false;
    if (*(long *)(lVar15 + 8) != 0) {
      bVar10 = *(int *)(*(long *)(lVar15 + 8) + 0x1b0) == 3;
    }
    bVar9 = false;
    if (*(int *)(lVar15 + 0x10) != 1) {
      bVar9 = bVar10;
    }
    if (uVar4 == 1) goto LAB_029f43a0;
LAB_029f4390:
    if (bVar9) goto LAB_029f43a0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  lVar15 = *(long *)PTR_DAT_04bb2720;
  if (lVar15 == 0) {
    puVar16 = &DAT_055c04a0;
  }
  else {
    puVar16 = &DAT_055c04a0;
    if (*(long *)(lVar15 + 0x330) != 0) {
      puVar16 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
      iVar11 = FUN_006bd550(*puVar16,0);
      puVar16 = (undefined8 *)PTR_DAT_04bc3a88;
      if (iVar11 != 0x758f7eaf) {
        puVar16 = &DAT_055c04a0;
      }
    }
  }
  iVar11 = *(int *)(puVar16 + 7);
  if ((iVar11 == *(int *)(param_1 + 0x10)) || (DAT_055f0238 == iVar11)) goto LAB_029f46d8;
  if (iVar11 < 0x43080996) {
    if (iVar11 < -0x280cede1) {
      if (iVar11 != -0x6efba09b) {
        iVar14 = -0x6d41fcf3;
        goto LAB_029f462c;
      }
    }
    else if (iVar11 != -0x280cede1) {
      iVar14 = -0x10e0fba8;
      goto LAB_029f462c;
    }
  }
  else if (iVar11 < 0x6622bd46) {
    if (iVar11 != 0x43080996) {
      iVar14 = 0x565b4aba;
      goto LAB_029f462c;
    }
  }
  else if (iVar11 != 0x77130016) {
    iVar14 = 0x6622bd46;
LAB_029f462c:
    if (iVar11 != iVar14) goto LAB_029f46d8;
  }
  if ((iVar17 == -1) || ((iVar6 != iVar17 && (iVar3 != iVar17)))) {
    lVar15 = *(long *)PTR_DAT_04bb26a8;
    plVar2 = (long *)(lVar15 + 0xb3b78);
    nn::os::LockMutex((MutexType *)(lVar15 + 0xb3b58));
    if (*(int *)(lVar15 + 0xb3b88) < *(int *)(lVar15 + 0xb3ba0)) {
      puVar16 = *(undefined8 **)(lVar15 + 0xb3b90);
      if (puVar16 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar15 + 0xb3b90) = *puVar16;
      }
      *(undefined1 *)((long)puVar16 + 2) = 0;
      *(undefined8 *)((long)puVar16 + 4) = 0;
      *(undefined2 *)puVar16 = 2;
      puVar16[3] = 0;
      plVar19 = puVar16 + 2;
      *plVar19 = 0;
      lVar20 = *plVar2;
      *plVar2 = (long)plVar19;
      puVar16[3] = plVar2;
      *plVar19 = lVar20;
      if (lVar20 != 0) {
        *(long **)(lVar20 + 8) = plVar19;
      }
      *(int *)(lVar15 + 0xb3b88) = *(int *)(lVar15 + 0xb3b88) + 1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar15 + 0xb3b58));
  }
LAB_029f46d8:
  *(int *)(param_1 + 0x10) = iVar11;
  if ((local_64 == 3) && (*(int *)(param_1 + 0x14) != 3)) {
    lVar15 = *(long *)PTR_DAT_04bb26a8;
    plVar2 = (long *)(lVar15 + 0xb3b78);
    nn::os::LockMutex((MutexType *)(lVar15 + 0xb3b58));
    if (*(int *)(lVar15 + 0xb3b88) < *(int *)(lVar15 + 0xb3ba0)) {
      puVar16 = *(undefined8 **)(lVar15 + 0xb3b90);
      if (puVar16 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar15 + 0xb3b90) = *puVar16;
      }
      *(undefined1 *)((long)puVar16 + 2) = 0;
      *(undefined8 *)((long)puVar16 + 4) = 0;
      *(undefined2 *)puVar16 = 3;
      puVar16[3] = 0;
      plVar19 = puVar16 + 2;
      *plVar19 = 0;
      lVar20 = *plVar2;
      *plVar2 = (long)plVar19;
      puVar16[3] = plVar2;
      *plVar19 = lVar20;
      if (lVar20 != 0) {
        *(long **)(lVar20 + 8) = plVar19;
      }
      *(int *)(lVar15 + 0xb3b88) = *(int *)(lVar15 + 0xb3b88) + 1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar15 + 0xb3b58));
  }
  if ((local_64 < 2) &&
     ((iVar17 == 0 || (((iVar5 != iVar17 && (iVar3 != iVar17)) && (iVar6 != iVar17)))))) {
    uVar12 = FUN_006bd550(&DAT_040fff66,0);
    puVar1 = PTR_DAT_04bb26a8;
    lVar15 = *(long *)PTR_DAT_04bb26a8;
    plVar2 = (long *)(lVar15 + 0xb3b78);
    nn::os::LockMutex((MutexType *)(lVar15 + 0xb3b58));
    if (*(int *)(lVar15 + 0xb3b88) < *(int *)(lVar15 + 0xb3ba0)) {
      puVar16 = *(undefined8 **)(lVar15 + 0xb3b90);
      if (puVar16 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar15 + 0xb3b90) = *puVar16;
      }
      *(undefined1 *)((long)puVar16 + 2) = 0;
      *(undefined2 *)puVar16 = 0x100;
      *(undefined4 *)((long)puVar16 + 4) = uVar12;
      *(undefined4 *)(puVar16 + 1) = 0x3f800000;
      plVar19 = puVar16 + 2;
      *plVar19 = 0;
      puVar16[3] = 0;
      lVar20 = *plVar2;
      *plVar2 = (long)plVar19;
      puVar16[3] = plVar2;
      *plVar19 = lVar20;
      if (lVar20 != 0) {
        *(long **)(lVar20 + 8) = plVar19;
      }
      *(int *)(lVar15 + 0xb3b88) = *(int *)(lVar15 + 0xb3b88) + 1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar15 + 0xb3b58));
    uVar12 = FUN_006bd550(&DAT_040db3e2,0);
    lVar15 = *(long *)puVar1;
    plVar2 = (long *)(lVar15 + 0xb3b78);
    nn::os::LockMutex((MutexType *)(lVar15 + 0xb3b58));
    if (*(int *)(lVar15 + 0xb3b88) < *(int *)(lVar15 + 0xb3ba0)) {
      puVar16 = *(undefined8 **)(lVar15 + 0xb3b90);
      if (puVar16 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar15 + 0xb3b90) = *puVar16;
      }
      *(undefined1 *)((long)puVar16 + 2) = 0;
      *(undefined2 *)puVar16 = 0x100;
      *(undefined4 *)((long)puVar16 + 4) = uVar12;
      *(undefined4 *)(puVar16 + 1) = 0x3f800000;
      plVar19 = puVar16 + 2;
      *plVar19 = 0;
      puVar16[3] = 0;
      lVar20 = *plVar2;
      *plVar2 = (long)plVar19;
      puVar16[3] = plVar2;
      *plVar19 = lVar20;
      if (lVar20 != 0) {
        *(long **)(lVar20 + 8) = plVar19;
      }
      *(int *)(lVar15 + 0xb3b88) = *(int *)(lVar15 + 0xb3b88) + 1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar15 + 0xb3b58));
  }
  if ((-1 < iVar17) &&
     (((iVar6 == iVar17 || (iVar3 == iVar17)) || ((iVar5 == iVar17 && (local_64 == 1)))))) {
    uVar12 = FUN_006bd550(&DAT_040c13ed,0);
    lVar15 = *(long *)PTR_DAT_04bb26a8;
    plVar2 = (long *)(lVar15 + 0xb3b78);
    nn::os::LockMutex((MutexType *)(lVar15 + 0xb3b58));
    if (*(int *)(lVar15 + 0xb3b88) < *(int *)(lVar15 + 0xb3ba0)) {
      puVar16 = *(undefined8 **)(lVar15 + 0xb3b90);
      if (puVar16 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar15 + 0xb3b90) = *puVar16;
      }
      *(undefined1 *)((long)puVar16 + 2) = 0;
      *(undefined2 *)puVar16 = 0x100;
      *(undefined4 *)((long)puVar16 + 4) = uVar12;
      *(undefined4 *)(puVar16 + 1) = 0x3f800000;
      plVar19 = puVar16 + 2;
      *plVar19 = 0;
      puVar16[3] = 0;
      lVar20 = *plVar2;
      *plVar2 = (long)plVar19;
      puVar16[3] = plVar2;
      *plVar19 = lVar20;
      if (lVar20 != 0) {
        *(long **)(lVar20 + 8) = plVar19;
      }
      *(int *)(lVar15 + 0xb3b88) = *(int *)(lVar15 + 0xb3b88) + 1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar15 + 0xb3b58));
  }
  if ((-1 < iVar13) && (-1 < iVar18)) {
    bVar9 = iVar3 == iVar13 && local_64 == 0;
    if (iVar7 != iVar13 && local_64 == 1) {
      bVar9 = iVar6 == iVar13 || iVar3 == iVar13;
    }
    if ((((local_64 == 1 && iVar7 != iVar18) && (iVar6 == iVar18 || iVar3 == iVar18)) ||
        (iVar3 == iVar18 && local_64 == 0)) || (bVar9)) {
      uVar12 = FUN_006bd550(&DAT_040f5d68,0);
      lVar15 = *(long *)PTR_DAT_04bb26a8;
      plVar2 = (long *)(lVar15 + 0xb3b78);
      nn::os::LockMutex((MutexType *)(lVar15 + 0xb3b58));
      if (*(int *)(lVar15 + 0xb3b88) < *(int *)(lVar15 + 0xb3ba0)) {
        puVar16 = *(undefined8 **)(lVar15 + 0xb3b90);
        if (puVar16 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar15 + 0xb3b90) = *puVar16;
        }
        *(undefined1 *)((long)puVar16 + 2) = 0;
        *(undefined2 *)puVar16 = 0x100;
        *(undefined4 *)((long)puVar16 + 4) = uVar12;
        *(undefined4 *)(puVar16 + 1) = 0x3f800000;
        plVar19 = puVar16 + 2;
        *plVar19 = 0;
        puVar16[3] = 0;
        lVar20 = *plVar2;
        *plVar2 = (long)plVar19;
        puVar16[3] = plVar2;
        *plVar19 = lVar20;
        if (lVar20 != 0) {
          *(long **)(lVar20 + 8) = plVar19;
        }
        *(int *)(lVar15 + 0xb3b88) = *(int *)(lVar15 + 0xb3b88) + 1;
      }
      nn::os::UnlockMutex((MutexType *)(lVar15 + 0xb3b58));
    }
  }
  if (-1 < iVar23) {
    bVar9 = iVar6 == iVar23 || iVar3 == iVar23;
    if (iVar7 == iVar23 || local_64 != 1) {
      bVar9 = iVar3 == iVar23 && local_64 == 0;
    }
    if (bVar9) {
      uVar12 = FUN_006bd550(&DAT_0407326c,0);
      lVar15 = *(long *)PTR_DAT_04bb26a8;
      plVar2 = (long *)(lVar15 + 0xb3b78);
      nn::os::LockMutex((MutexType *)(lVar15 + 0xb3b58));
      if (*(int *)(lVar15 + 0xb3b88) < *(int *)(lVar15 + 0xb3ba0)) {
        puVar16 = *(undefined8 **)(lVar15 + 0xb3b90);
        if (puVar16 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar15 + 0xb3b90) = *puVar16;
        }
        *(undefined1 *)((long)puVar16 + 2) = 0;
        *(undefined2 *)puVar16 = 0x100;
        *(undefined4 *)((long)puVar16 + 4) = uVar12;
        *(undefined4 *)(puVar16 + 1) = 0x3f800000;
        plVar19 = puVar16 + 2;
        *plVar19 = 0;
        puVar16[3] = 0;
        lVar20 = *plVar2;
        *plVar2 = (long)plVar19;
        puVar16[3] = plVar2;
        *plVar19 = lVar20;
        if (lVar20 != 0) {
          *(long **)(lVar20 + 8) = plVar19;
        }
        *(int *)(lVar15 + 0xb3b88) = *(int *)(lVar15 + 0xb3b88) + 1;
      }
      nn::os::UnlockMutex((MutexType *)(lVar15 + 0xb3b58));
    }
  }
  *(uint *)(param_1 + 0x14) = local_64;
  return;
}

