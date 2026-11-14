
void FUN_0198fec0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  void *__ptr;
  long lVar7;
  
  puVar1 = PTR_DAT_04bbf590;
  *param_1 = &PTR_FUN_049e6ba8;
  param_1[0x34] = puVar1 + 0x10;
  puVar1 = PTR_DAT_04bb31d0;
  param_1[0x9a] = 0;
  param_1[0x94] = 0;
  param_1[0x8e] = 0;
  param_1[0x88] = 0;
  param_1[0x82] = 0;
  param_1[0x7c] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0x76] = 0;
  param_1[0x70] = 0;
  param_1[0x6a] = 0;
  param_1[100] = 0;
  param_1[0x5e] = 0;
  param_1[0x95] = puVar1;
  param_1[0x8f] = puVar1;
  param_1[0x89] = puVar1;
  param_1[0x83] = puVar1;
  param_1[0x7d] = puVar1;
  param_1[0x77] = puVar1;
  param_1[0x71] = puVar1;
  param_1[0x6b] = puVar1;
  param_1[0x65] = puVar1;
  param_1[0x5f] = puVar1;
  param_1[0x59] = puVar1;
  puVar2 = PTR_DAT_04bb5950 + 0x10;
  param_1[0x53] = puVar1;
  param_1[0x58] = 0;
  lVar5 = *(long *)PTR_DAT_04bb3058;
  param_1[0x4d] = puVar1;
  param_1[0x52] = 0;
  param_1[0x47] = puVar1;
  param_1[0x4c] = 0;
  param_1[0x3a] = puVar2;
  uVar3 = (**(code **)(**(long **)(lVar5 + 0x330) + 0x88))(*(long **)(lVar5 + 0x330),param_1[0x46]);
  if (((uVar3 & 1) != 0) && ((long *)param_1[0x46] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x46] + 8))();
  }
  param_1[0x1e] = &PTR_LAB_049e6f48;
  plVar4 = (long *)param_1[0x27];
  param_1[0x46] = 0;
  param_1[0x22] = &PTR_LAB_049e6fd0;
  while (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x40))();
    plVar4 = (long *)param_1[0x27];
  }
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (param_1[0x2a] != 0) {
    if (0 < *(int *)(param_1 + 0x29)) {
      lVar5 = 0;
      do {
        puVar6 = *(undefined8 **)(param_1[0x2a] + lVar5 * 8);
        (**(code **)*puVar6)(puVar6);
        lVar5 = lVar5 + 1;
        *puVar6 = param_1[0x2b];
        param_1[0x2b] = puVar6;
      } while (lVar5 < *(int *)(param_1 + 0x29));
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
  lVar5 = param_1[0x1f];
  param_1[0x1e] = PTR_DAT_04bd0d40 + 0x10;
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
    plVar4 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)(param_1 + 0x1e));
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
  param_1[0x1f] = 1;
  return;
}

