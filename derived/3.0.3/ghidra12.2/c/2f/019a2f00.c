
void FUN_019a2f00(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  void *__ptr;
  long lVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_049e9d38;
  param_1[0x34] = PTR_DAT_04bbf538 + 0x10;
  puVar1 = PTR_DAT_04bb31d0;
  param_1[0x6a] = 0;
  param_1[100] = 0;
  param_1[0x5e] = 0;
  param_1[0x58] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0x65] = puVar1;
  param_1[0x5f] = puVar1;
  param_1[0x59] = puVar1;
  param_1[0x53] = puVar1;
  param_1[0x4d] = puVar1;
  puVar1 = PTR_DAT_04bb3380;
  param_1[0x52] = 0;
  param_1[0x4c] = 0;
  param_1[0x47] = puVar1 + 0x10;
  puVar1 = PTR_DAT_04bb3058;
  param_1[0x3a] = PTR_DAT_04bb5950 + 0x10;
  uVar2 = (**(code **)(**(long **)(*(long *)puVar1 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar1 + 0x330),param_1[0x46]);
  if (((uVar2 & 1) != 0) && ((long *)param_1[0x46] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x46] + 8))();
  }
  param_1[0x1e] = &PTR_LAB_049ea0d8;
  plVar3 = (long *)param_1[0x27];
  param_1[0x46] = 0;
  param_1[0x22] = &PTR_LAB_049ea160;
  while (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x40))();
    plVar3 = (long *)param_1[0x27];
  }
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (param_1[0x2a] != 0) {
    if (0 < *(int *)(param_1 + 0x29)) {
      lVar5 = 0;
      do {
        puVar4 = *(undefined8 **)(param_1[0x2a] + lVar5 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar5 = lVar5 + 1;
        *puVar4 = param_1[0x2b];
        param_1[0x2b] = puVar4;
      } while (lVar5 < *(int *)(param_1 + 0x29));
    }
    __ptr = (void *)param_1[0x2c];
    *(undefined4 *)(param_1 + 0x29) = 0;
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
    *(undefined4 *)((long)param_1 + 0x164) = 0;
    *(undefined8 *)((long)param_1 + 0x15c) = 0;
    *(undefined8 *)((long)param_1 + 0x154) = 0;
    *(undefined8 *)((long)param_1 + 0x14c) = 0;
  }
  lVar5 = param_1[0x1f];
  param_1[0x1e] = PTR_DAT_04bd0d40 + 0x10;
  if (lVar5 != 0) {
    if (lVar5 == 1) {
      return;
    }
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar5 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
    }
    plVar3 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)(param_1 + 0x1e));
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + -1;
    if (lVar6 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
    }
  }
  param_1[0x1f] = 1;
  return;
}

