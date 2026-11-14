
void FUN_019f3390(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  void *__ptr;
  long lVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_049f5600;
  puVar2 = PTR_DAT_04bbf8c8;
  puVar1 = PTR_DAT_04bb31d0;
  param_1[0x4c] = 0;
  param_1[0x34] = puVar2 + 0x10;
  param_1[0x47] = puVar1 + 0x10;
  puVar1 = PTR_DAT_04bb3058;
  param_1[0x3a] = PTR_DAT_04bb5950 + 0x10;
  uVar3 = (**(code **)(**(long **)(*(long *)puVar1 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar1 + 0x330),param_1[0x46]);
  if (((uVar3 & 1) != 0) && ((long *)param_1[0x46] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x46] + 8))();
  }
  param_1[0x1e] = &PTR_LAB_049f59a0;
  plVar4 = (long *)param_1[0x27];
  param_1[0x46] = 0;
  param_1[0x22] = &PTR_LAB_049f5a28;
  while (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x40))();
    plVar4 = (long *)param_1[0x27];
  }
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (param_1[0x2a] != 0) {
    if (0 < *(int *)(param_1 + 0x29)) {
      lVar6 = 0;
      do {
        puVar5 = *(undefined8 **)(param_1[0x2a] + lVar6 * 8);
        (**(code **)*puVar5)(puVar5);
        lVar6 = lVar6 + 1;
        *puVar5 = param_1[0x2b];
        param_1[0x2b] = puVar5;
      } while (lVar6 < *(int *)(param_1 + 0x29));
    }
    __ptr = (void *)param_1[0x2c];
    *(undefined4 *)(param_1 + 0x29) = 0;
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
    *(undefined4 *)((long)param_1 + 0x164) = 0;
    *(undefined8 *)((long)param_1 + 0x15c) = 0;
    *(undefined8 *)((long)param_1 + 0x154) = 0;
    *(undefined8 *)((long)param_1 + 0x14c) = 0;
  }
  lVar6 = param_1[0x1f];
  param_1[0x1e] = PTR_DAT_04bd0d40 + 0x10;
  if (lVar6 != 0) {
    if (lVar6 == 1) {
      return;
    }
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar4 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)(param_1 + 0x1e));
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar7 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
    }
  }
  param_1[0x1f] = 1;
  return;
}

