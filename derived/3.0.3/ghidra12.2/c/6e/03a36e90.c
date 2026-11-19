
void FUN_03a36e90(long *param_1)

{
  undefined *puVar1;
  uint *puVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  void *__ptr;
  long lVar6;
  long lVar7;
  
  *param_1 = (long)&PTR_FUN_04b6d8c0;
  if ((long *)param_1[0x297] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x297] + 8))();
    param_1[0x297] = 0;
  }
  puVar2 = (uint *)(param_1 + 0x299);
  uVar4 = *(uint *)(param_1 + 0x299);
  if (0 < (int)uVar4) {
    uVar5 = 0;
    do {
      if ((uVar5 < uVar4) &&
         (plVar3 = *(long **)(param_1[0x29a] + uVar5 * 8), plVar3 != (long *)0x0)) {
        (**(code **)(*plVar3 + 0x18))();
        uVar4 = *puVar2;
      }
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)(int)uVar4);
  }
  __ptr = (void *)param_1[0x29a];
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
    puVar2[0] = 0;
    puVar2[1] = 0;
    param_1[0x29a] = 0;
  }
  if ((long *)param_1[0x49] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x49] + 8))();
  }
  FUN_03a3afe0(param_1 + 0x95);
  FUN_03a39c20(param_1 + 0x4a);
  puVar1 = PTR_DAT_04bd0d40 + 0x10;
  lVar6 = param_1[3];
  *param_1 = (long)(PTR_DAT_04bd18d8 + 0x10);
  param_1[2] = (long)puVar1;
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
    plVar3 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)(param_1 + 2));
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar7 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
    }
  }
  param_1[3] = 1;
  return;
}

