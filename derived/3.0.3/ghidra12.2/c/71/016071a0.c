
void FUN_016071a0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  void *__ptr;
  long lVar7;
  
  param_1[0x62] = 0;
  *param_1 = &PTR_FUN_049b2928;
  param_1[0x5d] = &PTR_LAB_049b1bd8;
  puVar2 = PTR_DAT_04bb3058;
  puVar1 = PTR_DAT_04bb3578 + 0x10;
  lVar5 = *(long *)PTR_DAT_04bb3058;
  param_1[0x4c] = puVar1;
  uVar3 = (**(code **)(**(long **)(lVar5 + 0x330) + 0x88))(*(long **)(lVar5 + 0x330),param_1[0x5c]);
  if (((uVar3 & 1) != 0) && ((long *)param_1[0x5c] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x5c] + 8))();
  }
  lVar5 = *(long *)puVar2;
  param_1[0x5c] = 0;
  param_1[0x3b] = puVar1;
  uVar3 = (**(code **)(**(long **)(lVar5 + 0x330) + 0x88))(*(long **)(lVar5 + 0x330),param_1[0x4b]);
  if (((uVar3 & 1) != 0) && ((long *)param_1[0x4b] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x4b] + 8))();
  }
  param_1[0x4b] = 0;
  param_1[0x2b] = &PTR_LAB_049b2cb0;
  param_1[0x2f] = &PTR_LAB_049b2d38;
  plVar4 = (long *)param_1[0x34];
  while (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x40))();
    plVar4 = (long *)param_1[0x34];
  }
  *(undefined4 *)(param_1 + 0x3a) = 0;
  if (param_1[0x37] != 0) {
    if (0 < *(int *)(param_1 + 0x36)) {
      lVar5 = 0;
      do {
        puVar6 = *(undefined8 **)(param_1[0x37] + lVar5 * 8);
        (**(code **)*puVar6)(puVar6);
        lVar5 = lVar5 + 1;
        *puVar6 = param_1[0x38];
        param_1[0x38] = puVar6;
      } while (lVar5 < *(int *)(param_1 + 0x36));
    }
    __ptr = (void *)param_1[0x39];
    *(undefined4 *)(param_1 + 0x36) = 0;
    if (__ptr != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(__ptr);
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x1cc) = 0;
    *(undefined8 *)((long)param_1 + 0x1c4) = 0;
    *(undefined8 *)((long)param_1 + 0x1bc) = 0;
    *(undefined8 *)((long)param_1 + 0x1b4) = 0;
  }
  lVar5 = param_1[0x2c];
  param_1[0x2b] = PTR_DAT_04bd0d40 + 0x10;
  if (lVar5 != 0) {
    if (lVar5 == 1) {
      return;
    }
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar5 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
    }
    plVar4 = (long *)((long)param_1 + (long)*(int *)(lVar5 + 0x84) + 0x158);
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + -1;
    if (lVar7 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
    }
  }
  param_1[0x2c] = 1;
  return;
}

