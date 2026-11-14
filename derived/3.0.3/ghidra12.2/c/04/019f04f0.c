
void FUN_019f04f0(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_049f4d50;
  puVar3 = PTR_DAT_04bb31d0;
  param_1[0xa0] = 0;
  param_1[0x9a] = 0;
  param_1[0x94] = 0;
  puVar1 = puVar3 + 0x10;
  param_1[0x9b] = puVar1;
  param_1[0x95] = puVar1;
  param_1[0x8f] = puVar1;
  puVar2 = PTR_DAT_04bbf828;
  param_1[0x89] = puVar1;
  param_1[0x8e] = 0;
  param_1[0x83] = puVar1;
  param_1[0x88] = 0;
  param_1[0x7d] = puVar1;
  param_1[0x82] = 0;
  param_1[0x77] = puVar1;
  param_1[100] = puVar2 + 0x10;
  puVar2 = PTR_DAT_04bb5950 + 0x10;
  param_1[0x7c] = 0;
  puVar4 = PTR_DAT_04bb3058;
  param_1[0x6a] = puVar2;
  uVar5 = (**(code **)(**(long **)(*(long *)puVar4 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar4 + 0x330),param_1[0x76]);
  if (((uVar5 & 1) != 0) && ((long *)param_1[0x76] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x76] + 8))();
  }
  param_1[0x76] = 0;
  puVar2 = PTR_DAT_04bbf820;
  plVar6 = (long *)param_1[0x3f];
  param_1[0x5e] = puVar1;
  param_1[99] = 0;
  param_1[0x58] = puVar1;
  param_1[0x5d] = 0;
  param_1[0x52] = puVar1;
  param_1[0x57] = 0;
  param_1[0x4c] = puVar1;
  param_1[0x51] = 0;
  param_1[0x46] = puVar2 + 0x10;
  param_1[0x36] = &PTR_LAB_049f50f0;
  param_1[0x3a] = &PTR_LAB_049f5178;
  while (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x40))();
    plVar6 = (long *)param_1[0x3f];
  }
  *(undefined4 *)(param_1 + 0x45) = 0;
  if (param_1[0x42] != 0) {
    if (0 < *(int *)(param_1 + 0x41)) {
      lVar8 = 0;
      do {
        puVar7 = *(undefined8 **)(param_1[0x42] + lVar8 * 8);
        (**(code **)*puVar7)(puVar7);
        lVar8 = lVar8 + 1;
        *puVar7 = param_1[0x43];
        param_1[0x43] = puVar7;
      } while (lVar8 < *(int *)(param_1 + 0x41));
    }
    __ptr = (void *)param_1[0x44];
    *(undefined4 *)(param_1 + 0x41) = 0;
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
    *(undefined4 *)((long)param_1 + 0x224) = 0;
    *(undefined8 *)((long)param_1 + 0x21c) = 0;
    *(undefined8 *)((long)param_1 + 0x214) = 0;
    *(undefined8 *)((long)param_1 + 0x20c) = 0;
  }
  lVar8 = param_1[0x37];
  param_1[0x36] = PTR_DAT_04bd0d40 + 0x10;
  if (lVar8 != 0) {
    if (lVar8 == 1) goto LAB_019f0748;
    if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = lVar8 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
    }
    plVar6 = (long *)((long)param_1 + (long)*(int *)(lVar8 + 0x84) + 0x1b0);
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
  param_1[0x37] = 1;
LAB_019f0748:
  puVar3 = puVar3 + 0x10;
  param_1[0x35] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = puVar3;
  param_1[0x18] = puVar2 + 0x10;
  param_1[0x1e] = puVar3;
  param_1[0x29] = 0;
  param_1[0x2a] = puVar3;
  param_1[0x23] = 0;
  param_1[0x24] = puVar3;
  return;
}

