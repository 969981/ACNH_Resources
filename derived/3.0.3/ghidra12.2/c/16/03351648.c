
undefined8 FUN_03351648(long param_1)

{
  char *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  char *pcVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  puVar3 = PTR_DAT_04bc9410;
  if (*(long *)(param_1 + 0x370) != 0) {
    plVar8 = *(long **)PTR_DAT_04bc9410;
    nn::os::LockMutex((MutexType *)(plVar8 + 5));
    lVar4 = *(long *)(param_1 + 0x380);
    lVar7 = *(long *)(param_1 + 0x378);
    *(undefined8 *)(param_1 + 0x380) = 0;
    *(undefined8 *)(param_1 + 0x370) = 0;
    *(undefined8 *)(param_1 + 0x378) = 0;
    if ((undefined8 *)*plVar8 == (undefined8 *)(param_1 + 0x370)) {
      *plVar8 = lVar4;
    }
    if (lVar4 != 0) {
      *(long *)(lVar4 + 8) = lVar7;
    }
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    nn::os::UnlockMutex((MutexType *)(plVar8 + 5));
  }
  pcVar5 = *(char **)(param_1 + 5000);
  if ((*pcVar5 != '\0') && (plVar8 = *(long **)(param_1 + 0x3d0), *plVar8 != 0)) {
    plVar9 = *(long **)puVar3;
    nn::os::LockMutex((MutexType *)(plVar9 + 5));
    lVar4 = plVar8[1];
    lVar7 = plVar8[2];
    plVar8[2] = 0;
    *plVar8 = 0;
    plVar8[1] = 0;
    if ((long *)*plVar9 == plVar8) {
      *plVar9 = lVar7;
    }
    if (lVar7 != 0) {
      *(long *)(lVar7 + 8) = lVar4;
    }
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x10) = lVar7;
    }
    nn::os::UnlockMutex((MutexType *)(plVar9 + 5));
    pcVar5 = *(char **)(param_1 + 5000);
  }
  uVar6 = *(uint *)(param_1 + 0x1380);
  pcVar1 = pcVar5;
  if (1 < uVar6) {
    pcVar1 = pcVar5 + 1;
  }
  if ((*pcVar1 != '\0') &&
     (plVar8 = (long *)(*(long *)(param_1 + 0x3d0) + (ulong)(1 < *(uint *)(param_1 + 0x3c8)) * 0x58)
     , *plVar8 != 0)) {
    plVar9 = *(long **)puVar3;
    nn::os::LockMutex((MutexType *)(plVar9 + 5));
    lVar4 = plVar8[1];
    lVar7 = plVar8[2];
    plVar8[2] = 0;
    *plVar8 = 0;
    plVar8[1] = 0;
    if ((long *)*plVar9 == plVar8) {
      *plVar9 = lVar7;
    }
    if (lVar7 != 0) {
      *(long *)(lVar7 + 8) = lVar4;
    }
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x10) = lVar7;
    }
    nn::os::UnlockMutex((MutexType *)(plVar9 + 5));
    uVar6 = *(uint *)(param_1 + 0x1380);
    pcVar5 = *(char **)(param_1 + 5000);
  }
  if (pcVar5[(ulong)(2 < uVar6) * 2] != '\0') {
    lVar4 = 0xb0;
    if (*(uint *)(param_1 + 0x3c8) < 3) {
      lVar4 = 0;
    }
    plVar8 = (long *)(*(long *)(param_1 + 0x3d0) + lVar4);
    if (*plVar8 != 0) {
      plVar9 = *(long **)puVar3;
      nn::os::LockMutex((MutexType *)(plVar9 + 5));
      lVar4 = plVar8[1];
      lVar7 = plVar8[2];
      plVar8[2] = 0;
      *plVar8 = 0;
      plVar8[1] = 0;
      if ((long *)*plVar9 == plVar8) {
        *plVar9 = lVar7;
      }
      if (lVar7 != 0) {
        *(long *)(lVar7 + 8) = lVar4;
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x10) = lVar7;
      }
      nn::os::UnlockMutex((MutexType *)(plVar9 + 5));
      uVar6 = *(uint *)(param_1 + 0x1380);
      pcVar5 = *(char **)(param_1 + 5000);
    }
  }
  lVar4 = 3;
  if (uVar6 < 4) {
    lVar4 = 0;
  }
  if (pcVar5[lVar4] != '\0') {
    lVar4 = 0x108;
    if (*(uint *)(param_1 + 0x3c8) < 4) {
      lVar4 = 0;
    }
    plVar8 = (long *)(*(long *)(param_1 + 0x3d0) + lVar4);
    if (*plVar8 != 0) {
      plVar9 = *(long **)puVar3;
      nn::os::LockMutex((MutexType *)(plVar9 + 5));
      lVar4 = plVar8[1];
      lVar7 = plVar8[2];
      plVar8[2] = 0;
      *plVar8 = 0;
      plVar8[1] = 0;
      if ((long *)*plVar9 == plVar8) {
        *plVar9 = lVar7;
      }
      if (lVar7 != 0) {
        *(long *)(lVar7 + 8) = lVar4;
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x10) = lVar7;
      }
      nn::os::UnlockMutex((MutexType *)(plVar9 + 5));
    }
  }
  if (((*(uint *)(param_1 + 0x1390) < 0x2a) &&
      ((1L << ((ulong)*(uint *)(param_1 + 0x1390) & 0x3f) & 0x20c00000000U) != 0)) &&
     (*(long *)(param_1 + 0x3d8) != 0)) {
    plVar8 = *(long **)puVar3;
    nn::os::LockMutex((MutexType *)(plVar8 + 5));
    lVar4 = *(long *)(param_1 + 1000);
    lVar7 = *(long *)(param_1 + 0x3e0);
    *(undefined8 *)(param_1 + 1000) = 0;
    *(undefined8 *)(param_1 + 0x3d8) = 0;
    *(undefined8 *)(param_1 + 0x3e0) = 0;
    if ((undefined8 *)*plVar8 == (undefined8 *)(param_1 + 0x3d8)) {
      *plVar8 = lVar4;
    }
    if (lVar4 != 0) {
      *(long *)(lVar4 + 8) = lVar7;
    }
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    nn::os::UnlockMutex((MutexType *)(plVar8 + 5));
  }
  if ((*(char *)(param_1 + 0x360) != '\0') && (lVar4 = *(long *)(param_1 + 0x368), lVar4 != 0)) {
    plVar8 = (long *)(lVar4 + 0x18);
    if (*plVar8 != 0) {
      plVar9 = *(long **)puVar3;
      nn::os::LockMutex((MutexType *)(plVar9 + 5));
      lVar7 = *(long *)(lVar4 + 0x20);
      lVar2 = *(long *)(lVar4 + 0x28);
      *(undefined8 *)(lVar4 + 0x28) = 0;
      *plVar8 = 0;
      *(undefined8 *)(lVar4 + 0x20) = 0;
      if ((long *)*plVar9 == plVar8) {
        *plVar9 = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar7;
      }
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0x10) = lVar2;
      }
      nn::os::UnlockMutex((MutexType *)(plVar9 + 5));
    }
    lVar7 = DAT_05688e68;
    plVar8 = *(long **)(lVar4 + 0x10);
    if (*plVar8 != 0) {
      lVar4 = plVar8[1];
      lVar2 = plVar8[2];
      plVar8[2] = 0;
      *plVar8 = 0;
      plVar8[1] = 0;
      if (*(long **)(lVar7 + 0x560) == plVar8) {
        *(long *)(lVar7 + 0x560) = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar4;
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x10) = lVar2;
      }
    }
  }
  lVar4 = DAT_05688e68;
  plVar8 = *(long **)(param_1 + 0x300);
  if (*plVar8 != 0) {
    lVar7 = plVar8[1];
    lVar2 = plVar8[2];
    plVar8[2] = 0;
    *plVar8 = 0;
    plVar8[1] = 0;
    if (*(long **)(lVar4 + 0x560) == plVar8) {
      *(long *)(lVar4 + 0x560) = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = lVar7;
    }
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x10) = lVar2;
    }
  }
  FUN_032c1bf0(*(undefined8 *)(param_1 + 0x1350));
  return 1;
}

