
void FUN_0386c170(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_04b5fdd0;
  if (param_1[0xac] != 0) {
    param_1[0xac] = 0;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0xa8));
  iVar1 = *(int *)(param_1 + 0xa0);
  while (iVar1 != 0) {
    if (0 < iVar1) {
      plVar4 = (long *)param_1[0x9e];
      if (*plVar4 != 0) {
        *(long *)(*plVar4 + 8) = plVar4[1];
      }
      if ((long *)plVar4[1] != (long *)0x0) {
        *(long *)plVar4[1] = *plVar4;
      }
      *plVar4 = 0;
      plVar4[1] = 0;
      iVar1 = *(int *)(param_1 + 0xa0) + -1;
      *(int *)(param_1 + 0xa0) = iVar1;
      if ((plVar4 != (long *)0x0) &&
         (plVar4 = (long *)((long)plVar4 - (long)*(int *)((long)param_1 + 0x504)),
         plVar4 != (long *)0x0)) {
        (**(code **)(*plVar4 + 8))();
        iVar1 = *(int *)(param_1 + 0xa0);
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xa8));
  puVar3 = DAT_05ae6328;
  if ((DAT_05ae6330 != (long *)0x0) && (DAT_05ae6328 != (undefined8 *)0x0)) {
    DAT_05ae6328 = (undefined8 *)0x0;
    (**(code **)*puVar3)();
    if (DAT_05ae6330 != (long *)0x0) {
      (**(code **)(*DAT_05ae6330 + 8))();
    }
    DAT_05ae6330 = (long *)0x0;
  }
  puVar3 = DAT_05ae5f10;
  if ((DAT_05ae5f18 != (long *)0x0) && (DAT_05ae5f10 != (undefined8 *)0x0)) {
    DAT_05ae5f10 = (undefined8 *)0x0;
    (**(code **)*puVar3)();
    if (DAT_05ae5f18 != (long *)0x0) {
      (**(code **)(*DAT_05ae5f18 + 8))();
    }
    DAT_05ae5f18 = (long *)0x0;
  }
  FUN_038e1a84(param_1 + 0xa4);
  puVar2 = PTR_DAT_04bb24a8;
  param_1[0x8b] = PTR_DAT_04bb24a8 + 0x10;
  FUN_038bbe20(param_1 + 0x8b);
  lVar5 = param_1[0x8c];
  param_1[0x8b] = &PTR_FUN_04b64428;
  if (lVar5 == 0) {
LAB_0386c368:
    param_1[0x8c] = 1;
  }
  else if (lVar5 != 1) {
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar5 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
    }
    plVar4 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)(param_1 + 0x8b));
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + -1;
    if (lVar6 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
    }
    goto LAB_0386c368;
  }
  param_1[0x78] = puVar2 + 0x10;
  FUN_038bbe20(param_1 + 0x78);
  lVar5 = param_1[0x79];
  param_1[0x78] = &PTR_FUN_04b64428;
  if (lVar5 == 0) {
LAB_0386c3fc:
    param_1[0x79] = 1;
  }
  else if (lVar5 != 1) {
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar5 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
    }
    plVar4 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)(param_1 + 0x78));
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + -1;
    if (lVar6 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
    }
    goto LAB_0386c3fc;
  }
  param_1[0x65] = puVar2 + 0x10;
  FUN_038bbe20(param_1 + 0x65);
  lVar5 = param_1[0x66];
  param_1[0x65] = &PTR_FUN_04b64428;
  if (lVar5 != 0) {
    if (lVar5 == 1) goto LAB_0386c498;
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar5 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
    }
    plVar4 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)(param_1 + 0x65));
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + -1;
    if (lVar6 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
    }
  }
  param_1[0x66] = 1;
LAB_0386c498:
  if (*(char *)(param_1 + 100) != '\0') {
    DAT_05ae62d0 = 0;
  }
  FUN_038e31ec(param_1 + 0x58);
  FUN_038e31ec(param_1 + 0x4e);
  FUN_038e1a84(param_1 + 0x45);
  *param_1 = &PTR_LAB_04b5fef8;
  FUN_03968cfc(param_1 + 0x39);
  FUN_03968cfc(param_1 + 0x2d);
  FUN_038ba020(param_1);
  return;
}

