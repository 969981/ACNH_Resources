
undefined8 FUN_033487ac(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  puVar1 = PTR_DAT_04bc9410;
  plVar5 = *(long **)PTR_DAT_04bc9410;
  if (*(long *)(param_1 + 0x3c0) != 0) {
    nn::os::LockMutex((MutexType *)(plVar5 + 5));
    lVar2 = *(long *)(param_1 + 0x3d0);
    lVar3 = *(long *)(param_1 + 0x3c8);
    *(undefined8 *)(param_1 + 0x3d0) = 0;
    *(undefined8 *)(param_1 + 0x3c0) = 0;
    *(undefined8 *)(param_1 + 0x3c8) = 0;
    if ((undefined8 *)*plVar5 == (undefined8 *)(param_1 + 0x3c0)) {
      *plVar5 = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar2;
    }
    nn::os::UnlockMutex((MutexType *)(plVar5 + 5));
    plVar5 = *(long **)puVar1;
  }
  if ((*(char *)(param_1 + 0x17f1) != '\0') && (*(long *)(param_1 + 0x418) != 0)) {
    nn::os::LockMutex((MutexType *)(plVar5 + 5));
    lVar2 = *(long *)(param_1 + 0x428);
    lVar3 = *(long *)(param_1 + 0x420);
    *(undefined8 *)(param_1 + 0x428) = 0;
    *(undefined8 *)(param_1 + 0x418) = 0;
    *(undefined8 *)(param_1 + 0x420) = 0;
    if ((undefined8 *)*plVar5 == (undefined8 *)(param_1 + 0x418)) {
      *plVar5 = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar2;
    }
    nn::os::UnlockMutex((MutexType *)(plVar5 + 5));
    plVar5 = *(long **)puVar1;
  }
  lVar2 = *(long *)(param_1 + 0x3b8);
  plVar6 = (long *)(lVar2 + 0x18);
  if (*plVar6 != 0) {
    nn::os::LockMutex((MutexType *)(plVar5 + 5));
    lVar3 = *(long *)(lVar2 + 0x20);
    lVar4 = *(long *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *plVar6 = 0;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    if ((long *)*plVar5 == plVar6) {
      *plVar5 = lVar4;
    }
    if (lVar4 != 0) {
      *(long *)(lVar4 + 8) = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar4;
    }
    nn::os::UnlockMutex((MutexType *)(plVar5 + 5));
  }
  puVar1 = PTR_DAT_04bc6338;
  plVar5 = *(long **)(lVar2 + 0x10);
  if (*plVar5 != 0) {
    lVar4 = *(long *)PTR_DAT_04bc6338;
    lVar2 = plVar5[1];
    lVar3 = plVar5[2];
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = 0;
    if (*(long **)(lVar4 + 0x560) == plVar5) {
      *(long *)(lVar4 + 0x560) = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 8) = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
    }
  }
  plVar5 = *(long **)(param_1 + 0x2f8);
  if (*plVar5 != 0) {
    lVar4 = *(long *)puVar1;
    lVar2 = plVar5[1];
    lVar3 = plVar5[2];
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = 0;
    if (*(long **)(lVar4 + 0x560) == plVar5) {
      *(long *)(lVar4 + 0x560) = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 8) = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
    }
  }
  FUN_032c1bf0(*(undefined8 *)(param_1 + 0x20c0));
  if (((param_2 & 1) == 0) && (DAT_05355a60 != 0)) {
    lVar2 = DAT_05355a60 + 0xf08;
    lVar3 = DAT_05355a60 + 0xf18;
    lVar4 = DAT_05355a60 + 0xf28;
    (**(code **)(*(long *)(param_1 + 0x4e8) + 0x18))(param_1 + 0x4e8);
    FUN_03363ed0(lVar2,*(undefined8 *)(param_1 + 0x4f0));
    (**(code **)(*(long *)(param_1 + 0xb40) + 0x18))(param_1 + 0xb40);
    FUN_03363ed0(lVar3,*(undefined8 *)(param_1 + 0xb48));
    (**(code **)(*(long *)(param_1 + 0x1198) + 0x18))(param_1 + 0x1198);
    FUN_03363ed0(lVar4,*(undefined8 *)(param_1 + 0x11a0));
  }
  return 1;
}

