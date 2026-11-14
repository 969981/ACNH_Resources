
void FUN_019ed780(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  void *__ptr;
  long lVar7;
  long lVar8;
  
  *param_1 = &PTR_FUN_049f44b8;
  puVar3 = PTR_DAT_04bbf828;
  puVar2 = PTR_DAT_04bb31d0;
  param_1[0x76] = 0;
  param_1[0x70] = 0;
  param_1[0x6a] = 0;
  param_1[100] = 0;
  puVar1 = puVar2 + 0x10;
  param_1[0x4c] = puVar3 + 0x10;
  param_1[0x71] = puVar1;
  param_1[0x6b] = puVar1;
  param_1[0x65] = puVar1;
  param_1[0x5f] = puVar1;
  puVar3 = PTR_DAT_04bb3058;
  param_1[0x52] = PTR_DAT_04bb5950 + 0x10;
  uVar4 = (**(code **)(**(long **)(*(long *)puVar3 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar3 + 0x330),param_1[0x5e]);
  if (((uVar4 & 1) != 0) && ((long *)param_1[0x5e] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x5e] + 8))();
  }
  param_1[0x5e] = 0;
  puVar3 = PTR_DAT_04bbf820;
  plVar5 = (long *)param_1[0x33];
  param_1[0x2a] = &PTR_LAB_049f4858;
  param_1[0x46] = puVar1;
  param_1[0x4b] = 0;
  param_1[0x40] = puVar1;
  param_1[0x45] = 0;
  param_1[0x2e] = &PTR_LAB_049f48e0;
  param_1[0x3a] = puVar3 + 0x10;
  while (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x40))();
    plVar5 = (long *)param_1[0x33];
  }
  *(undefined4 *)(param_1 + 0x39) = 0;
  if (param_1[0x36] != 0) {
    if (0 < *(int *)(param_1 + 0x35)) {
      lVar7 = 0;
      do {
        puVar6 = *(undefined8 **)(param_1[0x36] + lVar7 * 8);
        (**(code **)*puVar6)(puVar6);
        lVar7 = lVar7 + 1;
        *puVar6 = param_1[0x37];
        param_1[0x37] = puVar6;
      } while (lVar7 < *(int *)(param_1 + 0x35));
    }
    __ptr = (void *)param_1[0x38];
    *(undefined4 *)(param_1 + 0x35) = 0;
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
    *(undefined4 *)((long)param_1 + 0x1c4) = 0;
    *(undefined8 *)((long)param_1 + 0x1bc) = 0;
    *(undefined8 *)((long)param_1 + 0x1b4) = 0;
    *(undefined8 *)((long)param_1 + 0x1ac) = 0;
  }
  lVar7 = param_1[0x2b];
  param_1[0x2a] = PTR_DAT_04bd0d40 + 0x10;
  if (lVar7 != 0) {
    if (lVar7 == 1) goto LAB_019ed9b8;
    if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar7 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
    }
    plVar5 = (long *)((long)param_1 + (long)*(int *)(lVar7 + 0x84) + 0x150);
    if (*plVar5 != 0) {
      *(long *)(*plVar5 + 8) = plVar5[1];
    }
    if ((long *)plVar5[1] != (long *)0x0) {
      *(long *)plVar5[1] = *plVar5;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + -1;
    if (lVar8 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
    }
  }
  param_1[0x2b] = 1;
LAB_019ed9b8:
  puVar2 = puVar2 + 0x10;
  param_1[0x29] = 0;
  param_1[0x18] = puVar3 + 0x10;
  param_1[0x1e] = puVar2;
  param_1[0x23] = 0;
  param_1[0x24] = puVar2;
  return;
}

