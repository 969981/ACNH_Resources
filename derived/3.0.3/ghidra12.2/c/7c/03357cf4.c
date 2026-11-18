
undefined8 FUN_03357cf4(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  puVar2 = PTR_DAT_04bc9410;
  plVar6 = *(long **)PTR_DAT_04bc9410;
  if (*(long *)(param_1 + 0x440) != 0) {
    nn::os::LockMutex((MutexType *)(plVar6 + 5));
    lVar3 = *(long *)(param_1 + 0x450);
    lVar4 = *(long *)(param_1 + 0x448);
    *(undefined8 *)(param_1 + 0x450) = 0;
    *(undefined8 *)(param_1 + 0x440) = 0;
    *(undefined8 *)(param_1 + 0x448) = 0;
    if ((undefined8 *)*plVar6 == (undefined8 *)(param_1 + 0x440)) {
      *plVar6 = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 8) = lVar4;
    }
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x10) = lVar3;
    }
    nn::os::UnlockMutex((MutexType *)(plVar6 + 5));
    plVar6 = *(long **)puVar2;
  }
  lVar3 = 1000;
  puVar1 = (undefined8 *)(param_1 + 1000);
  if (*(int *)(param_1 + 0x17a0) != 1) {
    lVar3 = 0x390;
    puVar1 = (undefined8 *)(param_1 + 0x390);
  }
  if (*(long *)(param_1 + lVar3) != 0) {
    nn::os::LockMutex((MutexType *)(plVar6 + 5));
    lVar3 = puVar1[1];
    lVar4 = puVar1[2];
    puVar1[2] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    if ((undefined8 *)*plVar6 == puVar1) {
      *plVar6 = lVar4;
    }
    if (lVar4 != 0) {
      *(long *)(lVar4 + 8) = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar4;
    }
    nn::os::UnlockMutex((MutexType *)(plVar6 + 5));
    plVar6 = *(long **)puVar2;
  }
  lVar3 = *(long *)(param_1 + 0x388);
  plVar7 = (long *)(lVar3 + 0x18);
  if (*plVar7 != 0) {
    nn::os::LockMutex((MutexType *)(plVar6 + 5));
    lVar4 = *(long *)(lVar3 + 0x20);
    lVar5 = *(long *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *plVar7 = 0;
    *(undefined8 *)(lVar3 + 0x20) = 0;
    if ((long *)*plVar6 == plVar7) {
      *plVar6 = lVar5;
    }
    if (lVar5 != 0) {
      *(long *)(lVar5 + 8) = lVar4;
    }
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x10) = lVar5;
    }
    nn::os::UnlockMutex((MutexType *)(plVar6 + 5));
  }
  puVar2 = PTR_DAT_04bc6338;
  plVar6 = *(long **)(lVar3 + 0x10);
  if (*plVar6 != 0) {
    lVar5 = *(long *)PTR_DAT_04bc6338;
    lVar3 = plVar6[1];
    lVar4 = plVar6[2];
    *plVar6 = 0;
    plVar6[1] = 0;
    plVar6[2] = 0;
    if (*(long **)(lVar5 + 0x560) == plVar6) {
      *(long *)(lVar5 + 0x560) = lVar4;
    }
    if (lVar4 != 0) {
      *(long *)(lVar4 + 8) = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar4;
    }
  }
  plVar6 = *(long **)(param_1 + 0x300);
  if (*plVar6 != 0) {
    lVar5 = *(long *)puVar2;
    lVar3 = plVar6[1];
    lVar4 = plVar6[2];
    *plVar6 = 0;
    plVar6[1] = 0;
    plVar6[2] = 0;
    if (*(long **)(lVar5 + 0x560) == plVar6) {
      *(long *)(lVar5 + 0x560) = lVar4;
    }
    if (lVar4 != 0) {
      *(long *)(lVar4 + 8) = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar4;
    }
  }
  FUN_032c1bf0(*(undefined8 *)(param_1 + 0x1788));
  return 1;
}

