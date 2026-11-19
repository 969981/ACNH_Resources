
void FUN_03a7b110(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  *param_1 = (long)&PTR_FUN_04b70778;
  FUN_038f4ad0(param_1 + 0x5b);
  puVar2 = PTR_DAT_04bd11b8;
  lVar4 = param_1[0x4a];
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + -8);
    if (*plVar5 != 0) {
      puVar1 = PTR_DAT_04bd11b8 + 0x10;
      lVar6 = *plVar5 * 0x88;
      do {
        *(undefined **)(lVar4 + -0x88 + lVar6) = puVar1;
        FUN_0390d560();
        lVar6 = lVar6 + -0x88;
      } while (lVar6 != 0);
    }
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(plVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,plVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,plVar5);
      }
    }
    param_1[0x4a] = 0;
    *(undefined4 *)(param_1 + 0x49) = 0;
  }
  param_1[0x5b] = (long)(PTR_DAT_04bb2cd0 + 0x10);
  FUN_038f4940(param_1 + 0x5b);
  param_1[0x4b] = (long)(puVar2 + 0x10);
  FUN_0390d560(param_1 + 0x4b);
  puVar2 = PTR_DAT_04bd0d40 + 0x10;
  lVar4 = param_1[3];
  *param_1 = (long)(PTR_DAT_04bd18d8 + 0x10);
  param_1[2] = (long)puVar2;
  if (lVar4 != 0) {
    if (lVar4 == 1) {
      return;
    }
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar5 = (long *)((long)*(int *)(lVar4 + 0x84) + (long)(param_1 + 2));
    if (*plVar5 != 0) {
      *(long *)(*plVar5 + 8) = plVar5[1];
    }
    if ((long *)plVar5[1] != (long *)0x0) {
      *(long *)plVar5[1] = *plVar5;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + -1;
    if (lVar6 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
    }
  }
  param_1[3] = 1;
  return;
}

