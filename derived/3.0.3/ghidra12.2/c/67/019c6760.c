
void FUN_019c6760(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  void *__ptr;
  long lVar8;
  
  puVar1 = PTR_DAT_04bbefc0;
  *param_1 = &PTR_FUN_049efad0;
  param_1[0x34] = puVar1 + 0x10;
  puVar1 = PTR_DAT_04bb31d0;
  param_1[0x94] = 0;
  param_1[0x8e] = 0;
  param_1[0x88] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0x8f] = puVar1;
  param_1[0x89] = puVar1;
  param_1[0x83] = puVar1;
  param_1[0x7d] = puVar1;
  puVar2 = PTR_DAT_04bbefc8;
  param_1[0x82] = 0;
  param_1[0x77] = puVar1;
  param_1[0x7c] = 0;
  param_1[0x71] = puVar1;
  param_1[0x76] = 0;
  param_1[0x6b] = puVar1;
  param_1[0x70] = 0;
  param_1[0x65] = puVar1;
  param_1[0x6a] = 0;
  param_1[0x5f] = puVar1;
  param_1[100] = 0;
  param_1[0x47] = puVar2 + 0x10;
  puVar2 = PTR_DAT_04bb5950 + 0x10;
  param_1[0x59] = puVar1;
  param_1[0x5e] = 0;
  puVar3 = PTR_DAT_04bb3058;
  param_1[0x53] = puVar1;
  lVar6 = *(long *)puVar3;
  param_1[0x58] = 0;
  param_1[0x4d] = puVar1;
  param_1[0x52] = 0;
  param_1[0x3a] = puVar2;
  uVar4 = (**(code **)(**(long **)(lVar6 + 0x330) + 0x88))(*(long **)(lVar6 + 0x330),param_1[0x46]);
  if (((uVar4 & 1) != 0) && ((long *)param_1[0x46] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x46] + 8))();
  }
  param_1[0x1e] = &PTR_LAB_049effe8;
  plVar5 = (long *)param_1[0x27];
  param_1[0x46] = 0;
  param_1[0x22] = &PTR_LAB_049f0070;
  while (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x40))();
    plVar5 = (long *)param_1[0x27];
  }
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (param_1[0x2a] != 0) {
    if (0 < *(int *)(param_1 + 0x29)) {
      lVar6 = 0;
      do {
        puVar7 = *(undefined8 **)(param_1[0x2a] + lVar6 * 8);
        (**(code **)*puVar7)(puVar7);
        lVar6 = lVar6 + 1;
        *puVar7 = param_1[0x2b];
        param_1[0x2b] = puVar7;
      } while (lVar6 < *(int *)(param_1 + 0x29));
    }
    __ptr = (void *)param_1[0x2c];
    *(undefined4 *)(param_1 + 0x29) = 0;
    if (__ptr != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(__ptr);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,__ptr);
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
      lVar8 = 0;
    }
    else {
      lVar8 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar5 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)(param_1 + 0x1e));
    if (*plVar5 != 0) {
      *(long *)(*plVar5 + 8) = plVar5[1];
    }
    if ((long *)plVar5[1] != (long *)0x0) {
      *(long *)plVar5[1] = *plVar5;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar8 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
    }
  }
  param_1[0x1f] = 1;
  return;
}

