
void FUN_019fe990(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  void *__ptr;
  long lVar8;
  long lVar9;
  
  *param_1 = &PTR_FUN_049f7860;
  puVar2 = PTR_DAT_04bbfbf8;
  puVar4 = PTR_DAT_04bb31d0;
  param_1[0x7c] = 0;
  param_1[0x76] = 0;
  param_1[0x70] = 0;
  param_1[0x6a] = 0;
  puVar1 = puVar4 + 0x10;
  param_1[100] = 0;
  param_1[0x5e] = 0;
  param_1[0x40] = puVar2 + 0x10;
  param_1[0x77] = puVar1;
  param_1[0x71] = puVar1;
  param_1[0x6b] = puVar1;
  param_1[0x65] = puVar1;
  param_1[0x5f] = puVar1;
  param_1[0x59] = puVar1;
  param_1[0x53] = puVar1;
  puVar2 = PTR_DAT_04bb5950 + 0x10;
  param_1[0x58] = 0;
  puVar3 = PTR_DAT_04bb3058;
  param_1[0x46] = puVar2;
  uVar5 = (**(code **)(**(long **)(*(long *)puVar3 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar3 + 0x330),param_1[0x52]);
  if (((uVar5 & 1) != 0) && ((long *)param_1[0x52] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x52] + 8))();
  }
  param_1[0x52] = 0;
  puVar2 = PTR_DAT_04bbfbf0;
  param_1[0x24] = &PTR_LAB_049f7c00;
  param_1[0x3a] = puVar1;
  param_1[0x3f] = 0;
  param_1[0x28] = &PTR_LAB_049f7c88;
  param_1[0x34] = puVar2 + 0x10;
  plVar6 = (long *)param_1[0x2d];
  while (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x40))();
    plVar6 = (long *)param_1[0x2d];
  }
  *(undefined4 *)(param_1 + 0x33) = 0;
  if (param_1[0x30] != 0) {
    if (0 < *(int *)(param_1 + 0x2f)) {
      lVar8 = 0;
      do {
        puVar7 = *(undefined8 **)(param_1[0x30] + lVar8 * 8);
        (**(code **)*puVar7)(puVar7);
        lVar8 = lVar8 + 1;
        *puVar7 = param_1[0x31];
        param_1[0x31] = puVar7;
      } while (lVar8 < *(int *)(param_1 + 0x2f));
    }
    __ptr = (void *)param_1[0x32];
    *(undefined4 *)(param_1 + 0x2f) = 0;
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
    *(undefined4 *)((long)param_1 + 0x194) = 0;
    *(undefined8 *)((long)param_1 + 0x18c) = 0;
    *(undefined8 *)((long)param_1 + 0x184) = 0;
    *(undefined8 *)((long)param_1 + 0x17c) = 0;
  }
  lVar8 = param_1[0x25];
  param_1[0x24] = PTR_DAT_04bd0d40 + 0x10;
  if (lVar8 != 0) {
    if (lVar8 == 1) goto LAB_019febd8;
    if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = lVar8 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
    }
    plVar6 = (long *)((long)param_1 + (long)*(int *)(lVar8 + 0x84) + 0x120);
    if (*plVar6 != 0) {
      *(long *)(*plVar6 + 8) = plVar6[1];
    }
    if ((long *)plVar6[1] != (long *)0x0) {
      *(long *)plVar6[1] = *plVar6;
    }
    *plVar6 = 0;
    plVar6[1] = 0;
    *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + -1;
    if (lVar9 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar9 + 0x20));
    }
  }
  param_1[0x25] = 1;
LAB_019febd8:
  param_1[0x23] = 0;
  param_1[0x18] = puVar2 + 0x10;
  param_1[0x1e] = puVar4 + 0x10;
  return;
}

