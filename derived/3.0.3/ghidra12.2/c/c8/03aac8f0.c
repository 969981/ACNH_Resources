
void FUN_03aac8f0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  
  pvVar6 = (void *)param_1[0xf6];
  *param_1 = (long)&PTR_FUN_04b70f68;
  param_1[0x49] = (long)&PTR_LAB_04b70fc0;
  puVar1 = PTR_DAT_04bb2698;
  if (pvVar6 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    param_1[0xf6] = 0;
    *(undefined4 *)(param_1 + 0xf5) = 0;
  }
  pvVar6 = (void *)param_1[0x2bf];
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    param_1[0x2bf] = 0;
    *(undefined4 *)(param_1 + 0x2be) = 0;
  }
  lVar5 = param_1[699];
  if (lVar5 != 0) {
    plVar3 = (long *)(lVar5 + -8);
    if (*plVar3 != 0) {
      lVar7 = *plVar3 * 0x7e8;
      do {
        FUN_03ab42f8(lVar5 + -0x7e8 + lVar7);
        lVar7 = lVar7 + -0x7e8;
      } while (lVar7 != 0);
    }
    if (*(long *)puVar1 == 0) {
      free(plVar3);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar1,plVar3);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,plVar3);
      }
    }
    param_1[699] = 0;
    *(undefined4 *)(param_1 + 0x2ba) = 0;
  }
  lVar5 = param_1[0x2bd];
  if (lVar5 != 0) {
    plVar3 = (long *)(lVar5 + -8);
    if (*plVar3 != 0) {
      lVar7 = *plVar3 * 0x68;
      do {
        FUN_03ab43d0(lVar5 + -0x68 + lVar7);
        lVar7 = lVar7 + -0x68;
      } while (lVar7 != 0);
    }
    if (*(long *)puVar1 == 0) {
      free(plVar3);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar1,plVar3);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,plVar3);
      }
    }
    param_1[0x2bd] = 0;
    *(undefined4 *)(param_1 + 700) = 0;
  }
  if ((long *)param_1[0x84] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x84] + 8))();
    param_1[0x84] = 0;
  }
  if ((long *)param_1[0x86] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x86] + 8))();
    param_1[0x86] = 0;
  }
  puVar1 = PTR_DAT_04bd0d40;
  lVar5 = param_1[0x274];
  param_1[0x273] = (long)(PTR_DAT_04bd0d40 + 0x10);
  if (lVar5 != 0) {
    if (lVar5 == 1) goto LAB_03aacb3c;
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar5 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
    }
    plVar3 = (long *)((long)param_1 + (long)*(int *)(lVar5 + 0x84) + 0x1398);
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + -1;
    if (lVar7 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
    }
  }
  param_1[0x274] = 1;
LAB_03aacb3c:
  puVar2 = PTR_DAT_04bd1068;
  param_1[0x268] = (long)(PTR_DAT_04bbd578 + 0x10);
  param_1[0x262] = (long)(puVar2 + 0x10);
  FUN_03ab4a18(param_1 + 0xf7);
  FUN_03ab41b0(param_1 + 0x89);
  puVar2 = PTR_DAT_04bd18d8;
  lVar5 = param_1[3];
  param_1[0x49] = (long)(PTR_DAT_04bd1070 + 0x10);
  param_1[2] = (long)(puVar1 + 0x10);
  *param_1 = (long)(puVar2 + 0x10);
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
    plVar3 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)(param_1 + 2));
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + -1;
    if (lVar7 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
    }
  }
  param_1[3] = 1;
  return;
}

