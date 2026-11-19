
void FUN_03a33150(long *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  long lVar7;
  
  param_1[0x4a] = 0;
  *param_1 = (long)&PTR_FUN_04b6d7f0;
  if ((long *)param_1[0x49] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x49] + 8))();
    param_1[0x49] = 0;
  }
  if ((*(byte *)((long)param_1 + 0x264) & 1) != 0) {
    pvVar6 = (void *)param_1[0x4b];
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
    }
    param_1[0x4b] = 0;
  }
  param_1[0xac] = 0;
  param_1[0xae] = 0;
  param_1[0x4f] = -1;
  param_1[0x4e] = -1;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  lVar7 = param_1[0xcc];
  param_1[0xb0] = 0;
  param_1[0xb2] = 0;
  param_1[0xb4] = 0;
  param_1[0xb6] = 0;
  param_1[0xb8] = 0;
  param_1[0xba] = 0;
  param_1[0xbc] = 0;
  param_1[0xbe] = 0;
  param_1[0xc0] = 0;
  param_1[0xc2] = 0;
  param_1[0xc4] = 0;
  param_1[0xc6] = 0;
  param_1[200] = 0;
  param_1[0xca] = 0;
  if ((int)lVar7 != 0) {
    lVar4 = param_1[0xcd];
    uVar5 = 0;
    do {
      *(undefined8 *)(lVar4 + (-(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3)) = 0;
      uVar1 = uVar5 + 1;
      uVar5 = uVar1 & 0xffffffff;
    } while ((int)lVar7 != (int)uVar1);
  }
  pvVar6 = (void *)param_1[0x5e];
  *(byte *)(param_1 + 0xce) = *(byte *)(param_1 + 0xce) & 0xfe;
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
    param_1[0x5d] = 0;
    param_1[0x5e] = 0;
  }
  pvVar6 = (void *)param_1[0x60];
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
    param_1[0x60] = 0;
    *(undefined4 *)(param_1 + 0x5f) = 0;
  }
  if (param_1[0x62] != 0) {
    pvVar6 = (void *)(param_1[0x62] + -8);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    param_1[0x62] = 0;
    *(undefined4 *)(param_1 + 0x61) = 0;
  }
  FUN_0390e230(param_1 + 0xab);
  puVar2 = PTR_DAT_04bd0d40 + 0x10;
  lVar7 = param_1[3];
  *param_1 = (long)(PTR_DAT_04bd18d8 + 0x10);
  param_1[2] = (long)puVar2;
  if (lVar7 != 0) {
    if (lVar7 == 1) {
      return;
    }
    if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar7 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
    }
    plVar3 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)(param_1 + 2));
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + -1;
    if (lVar4 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar4 + 0x20));
    }
  }
  param_1[3] = 1;
  return;
}

