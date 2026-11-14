
void FUN_019f8df0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  void *__ptr;
  long lVar9;
  
  puVar1 = PTR_DAT_04bbfac0;
  *param_1 = &PTR_FUN_049f6730;
  param_1[0x58] = puVar1 + 0x10;
  puVar3 = PTR_DAT_04bb31d0;
  param_1[0x9a] = 0;
  param_1[0x94] = 0;
  param_1[0x8e] = 0;
  param_1[0x88] = 0;
  param_1[0x82] = 0;
  param_1[0x7c] = 0;
  puVar1 = puVar3 + 0x10;
  param_1[0x95] = puVar1;
  param_1[0x8f] = puVar1;
  param_1[0x89] = puVar1;
  param_1[0x83] = puVar1;
  param_1[0x7d] = puVar1;
  param_1[0x77] = puVar1;
  puVar2 = PTR_DAT_04bb5950 + 0x10;
  param_1[0x71] = puVar1;
  puVar4 = PTR_DAT_04bb3058;
  param_1[0x76] = 0;
  param_1[0x6b] = puVar1;
  param_1[0x70] = 0;
  lVar7 = *(long *)puVar4;
  param_1[0x5e] = puVar2;
  uVar5 = (**(code **)(**(long **)(lVar7 + 0x330) + 0x88))(*(long **)(lVar7 + 0x330),param_1[0x6a]);
  if (((uVar5 & 1) != 0) && ((long *)param_1[0x6a] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x6a] + 8))();
  }
  puVar2 = PTR_DAT_04bbfab8;
  plVar6 = (long *)param_1[0x39];
  param_1[0x6a] = 0;
  param_1[0x52] = puVar1;
  param_1[0x57] = 0;
  param_1[0x4c] = puVar1;
  param_1[0x51] = 0;
  param_1[0x46] = puVar1;
  param_1[0x4b] = 0;
  param_1[0x40] = puVar2 + 0x10;
  param_1[0x30] = &PTR_LAB_049f6ad0;
  param_1[0x34] = &PTR_LAB_049f6b58;
  while (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x40))();
    plVar6 = (long *)param_1[0x39];
  }
  *(undefined4 *)(param_1 + 0x3f) = 0;
  if (param_1[0x3c] != 0) {
    if (0 < *(int *)(param_1 + 0x3b)) {
      lVar7 = 0;
      do {
        puVar8 = *(undefined8 **)(param_1[0x3c] + lVar7 * 8);
        (**(code **)*puVar8)(puVar8);
        lVar7 = lVar7 + 1;
        *puVar8 = param_1[0x3d];
        param_1[0x3d] = puVar8;
      } while (lVar7 < *(int *)(param_1 + 0x3b));
    }
    __ptr = (void *)param_1[0x3e];
    *(undefined4 *)(param_1 + 0x3b) = 0;
    if (__ptr != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(__ptr);
      }
      else {
        plVar6 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,__ptr);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 500) = 0;
    *(undefined8 *)((long)param_1 + 0x1ec) = 0;
    *(undefined8 *)((long)param_1 + 0x1e4) = 0;
    *(undefined8 *)((long)param_1 + 0x1dc) = 0;
  }
  lVar7 = param_1[0x31];
  param_1[0x30] = PTR_DAT_04bd0d40 + 0x10;
  if (lVar7 != 0) {
    if (lVar7 == 1) goto LAB_019f9048;
    if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = lVar7 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
    }
    plVar6 = (long *)((long)param_1 + (long)*(int *)(lVar7 + 0x84) + 0x180);
    if (*plVar6 != 0) {
      *(long *)(*plVar6 + 8) = plVar6[1];
    }
    if ((long *)plVar6[1] != (long *)0x0) {
      *(long *)plVar6[1] = *plVar6;
    }
    *plVar6 = 0;
    plVar6[1] = 0;
    *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + -1;
    if (lVar9 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar9 + 0x20));
    }
  }
  param_1[0x31] = 1;
LAB_019f9048:
  puVar3 = puVar3 + 0x10;
  param_1[0x2f] = 0;
  param_1[0x18] = puVar2 + 0x10;
  param_1[0x29] = 0;
  param_1[0x2a] = puVar3;
  param_1[0x1e] = puVar3;
  param_1[0x23] = 0;
  param_1[0x24] = puVar3;
  return;
}

