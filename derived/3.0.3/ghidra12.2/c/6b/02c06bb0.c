
void FUN_02c06bb0(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_04aac320;
  param_1[0x47] = &PTR_LAB_04aac920;
  param_1[0x4b] = &PTR_LAB_04aac9a8;
  plVar2 = (long *)param_1[0x50];
  while (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x40))();
    plVar2 = (long *)param_1[0x50];
  }
  *(undefined4 *)(param_1 + 0x56) = 0;
  if (param_1[0x53] != 0) {
    if (0 < *(int *)(param_1 + 0x52)) {
      lVar6 = 0;
      do {
        puVar4 = *(undefined8 **)(param_1[0x53] + lVar6 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar6 = lVar6 + 1;
        *puVar4 = param_1[0x54];
        param_1[0x54] = puVar4;
      } while (lVar6 < *(int *)(param_1 + 0x52));
    }
    pvVar5 = (void *)param_1[0x55];
    *(undefined4 *)(param_1 + 0x52) = 0;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar5);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x2ac) = 0;
    *(undefined8 *)((long)param_1 + 0x2a4) = 0;
    *(undefined8 *)((long)param_1 + 0x29c) = 0;
    *(undefined8 *)((long)param_1 + 0x294) = 0;
  }
  puVar1 = PTR_DAT_04bd0d40;
  lVar6 = param_1[0x48];
  param_1[0x47] = PTR_DAT_04bd0d40 + 0x10;
  if (lVar6 == 0) {
LAB_02c06d30:
    param_1[0x48] = 1;
  }
  else if (lVar6 != 1) {
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar2 = (long *)((long)param_1 + (long)*(int *)(lVar6 + 0x84) + 0x238);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar7 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
    }
    goto LAB_02c06d30;
  }
  param_1[0x37] = &PTR_LAB_04aac5c0;
  param_1[0x3b] = &PTR_LAB_04aac648;
  plVar2 = (long *)param_1[0x40];
  while (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x40))();
    plVar2 = (long *)param_1[0x40];
  }
  *(undefined4 *)(param_1 + 0x46) = 0;
  if (param_1[0x43] != 0) {
    if (0 < *(int *)(param_1 + 0x42)) {
      lVar6 = 0;
      do {
        puVar4 = *(undefined8 **)(param_1[0x43] + lVar6 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar6 = lVar6 + 1;
        *puVar4 = param_1[0x44];
        param_1[0x44] = puVar4;
      } while (lVar6 < *(int *)(param_1 + 0x42));
    }
    pvVar5 = (void *)param_1[0x45];
    *(undefined4 *)(param_1 + 0x42) = 0;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar5);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x22c) = 0;
    *(undefined8 *)((long)param_1 + 0x224) = 0;
    *(undefined8 *)((long)param_1 + 0x21c) = 0;
    *(undefined8 *)((long)param_1 + 0x214) = 0;
  }
  lVar6 = param_1[0x38];
  param_1[0x37] = puVar1 + 0x10;
  if (lVar6 != 0) {
    if (lVar6 == 1) goto LAB_02c06e94;
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar2 = (long *)((long)param_1 + (long)*(int *)(lVar6 + 0x84) + 0x1b8);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar7 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
    }
  }
  param_1[0x38] = 1;
LAB_02c06e94:
  puVar1 = PTR_DAT_04bb33a8;
  param_1[0x36] = 0;
  param_1[0x31] = puVar1 + 0x10;
  puVar1 = PTR_DAT_04bb3058;
  param_1[0x20] = PTR_DAT_04bb3578 + 0x10;
  uVar3 = (**(code **)(**(long **)(*(long *)puVar1 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar1 + 0x330),param_1[0x30]);
  if (((uVar3 & 1) != 0) && ((long *)param_1[0x30] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x30] + 8))();
  }
  param_1[0x30] = 0;
  return;
}

