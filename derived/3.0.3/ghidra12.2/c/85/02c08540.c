
void FUN_02c08540(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  void *__ptr;
  long lVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_04aac1c0;
  param_1[0x30] = &PTR_LAB_04aac5c0;
  param_1[0x34] = &PTR_LAB_04aac648;
  plVar3 = (long *)param_1[0x39];
  while (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x40))();
    plVar3 = (long *)param_1[0x39];
  }
  *(undefined4 *)(param_1 + 0x3f) = 0;
  if (param_1[0x3c] != 0) {
    if (0 < *(int *)(param_1 + 0x3b)) {
      lVar6 = 0;
      do {
        puVar5 = *(undefined8 **)(param_1[0x3c] + lVar6 * 8);
        (**(code **)*puVar5)(puVar5);
        lVar6 = lVar6 + 1;
        *puVar5 = param_1[0x3d];
        param_1[0x3d] = puVar5;
      } while (lVar6 < *(int *)(param_1 + 0x3b));
    }
    __ptr = (void *)param_1[0x3e];
    *(undefined4 *)(param_1 + 0x3b) = 0;
    if (__ptr != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(__ptr);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 500) = 0;
    *(undefined8 *)((long)param_1 + 0x1ec) = 0;
    *(undefined8 *)((long)param_1 + 0x1e4) = 0;
    *(undefined8 *)((long)param_1 + 0x1dc) = 0;
  }
  lVar6 = param_1[0x31];
  param_1[0x30] = PTR_DAT_04bd0d40 + 0x10;
  if (lVar6 != 0) {
    if (lVar6 == 1) goto LAB_02c086c8;
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar3 = (long *)((long)param_1 + (long)*(int *)(lVar6 + 0x84) + 0x180);
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar7 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
    }
  }
  param_1[0x31] = 1;
LAB_02c086c8:
  param_1[0x2f] = 0;
  param_1[0x2a] = &PTR_LAB_04aac480;
  puVar1 = PTR_DAT_04bb3058;
  param_1[0x1d] = PTR_DAT_04bb5950 + 0x10;
  plVar3 = *(long **)(*(long *)puVar1 + 0x330);
  uVar4 = (**(code **)(*plVar3 + 0x88))(plVar3,param_1[0x29]);
  if (((uVar4 & 1) != 0) && ((long *)param_1[0x29] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x29] + 8))();
  }
  param_1[0x29] = 0;
  puVar2 = PTR_DAT_04bb33a8;
  param_1[0x1c] = 0;
  param_1[0x17] = puVar2 + 0x10;
  param_1[6] = PTR_DAT_04bb3578 + 0x10;
  plVar3 = *(long **)(*(long *)puVar1 + 0x330);
  uVar4 = (**(code **)(*plVar3 + 0x88))(plVar3,param_1[0x16]);
  if (((uVar4 & 1) != 0) && ((long *)param_1[0x16] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x16] + 8))();
  }
  param_1[0x16] = 0;
  return;
}

