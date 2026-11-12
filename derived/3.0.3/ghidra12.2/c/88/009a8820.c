
void FUN_009a8820(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *__ptr;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04bb60c8;
  *param_1 = (long)&PTR_LAB_0492c2d0;
  param_1[0x26] = (long)(puVar1 + 0x10);
  param_1[4] = (long)&PTR_LAB_0492c358;
  plVar2 = (long *)param_1[9];
  while (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x40))();
    plVar2 = (long *)param_1[9];
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xc] != 0) {
    if (0 < (int)param_1[0xb]) {
      lVar3 = 0;
      do {
        plVar2 = *(long **)(param_1[0xc] + lVar3 * 8);
        (**(code **)*plVar2)(plVar2);
        lVar3 = lVar3 + 1;
        *plVar2 = param_1[0xd];
        param_1[0xd] = (long)plVar2;
      } while (lVar3 < (int)param_1[0xb]);
    }
    __ptr = (void *)param_1[0xe];
    *(undefined4 *)(param_1 + 0xb) = 0;
    if (__ptr != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(__ptr);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x74) = 0;
    *(undefined8 *)((long)param_1 + 0x6c) = 0;
    *(undefined8 *)((long)param_1 + 100) = 0;
    *(undefined8 *)((long)param_1 + 0x5c) = 0;
  }
  lVar3 = param_1[1];
  *param_1 = (long)(PTR_DAT_04bd0d40 + 0x10);
  if (lVar3 != 0) {
    if (lVar3 == 1) {
      return;
    }
    if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar3 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
    }
    plVar2 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)param_1);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar4 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

