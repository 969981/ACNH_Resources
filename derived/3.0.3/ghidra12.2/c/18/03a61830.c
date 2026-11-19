
void FUN_03a61830(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  
  *param_1 = (long)&PTR_FUN_04b701a0;
  param_1[0x49] = (long)&PTR_LAB_04b701f0;
  if ((long *)param_1[0x50] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x50] + 8))();
    param_1[0x50] = 0;
  }
  if ((long *)param_1[0x5c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x5c] + 8))();
    param_1[0x5c] = 0;
  }
  if ((long *)param_1[0x5d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x5d] + 8))();
    param_1[0x5d] = 0;
  }
  if ((long *)param_1[0x51] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x51] + 8))();
    param_1[0x51] = 0;
  }
  if ((long *)param_1[0x52] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x52] + 8))();
    param_1[0x52] = 0;
  }
  if ((long *)param_1[0x53] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x53] + 0x10))();
    param_1[0x53] = 0;
  }
  if ((long *)param_1[0x54] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x54] + 8))();
    param_1[0x54] = 0;
  }
  if ((long *)param_1[0x55] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x55] + 8))();
    param_1[0x55] = 0;
  }
  puVar1 = PTR_DAT_04bb2698;
  pvVar5 = (void *)param_1[0x56];
  if (pvVar5 == (void *)0x0) goto LAB_03a619ac;
  lVar4 = param_1[1];
  if (*(int *)(lVar4 + 0x14e0) < 1) {
LAB_03a61978:
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
  }
  else {
    lVar6 = 0;
    do {
      plVar3 = *(long **)(param_1[0x56] + lVar6 * 8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
        lVar4 = param_1[1];
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(lVar4 + 0x14e0));
    pvVar5 = (void *)param_1[0x56];
    if (pvVar5 != (void *)0x0) goto LAB_03a61978;
  }
  param_1[0x56] = 0;
LAB_03a619ac:
  if ((long *)param_1[0x57] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x57] + 8))();
    param_1[0x57] = 0;
  }
  if ((long *)param_1[0x58] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x58] + 8))();
    param_1[0x58] = 0;
  }
  pvVar5 = (void *)param_1[0x5a];
  if (pvVar5 != (void *)0x0) {
    FUN_03af0400(pvVar5);
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    param_1[0x5a] = 0;
  }
  pvVar5 = (void *)param_1[0x5b];
  if (pvVar5 != (void *)0x0) {
    FUN_03b0bbb0(pvVar5);
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    param_1[0x5b] = 0;
  }
  puVar2 = PTR_DAT_04bd18d8;
  lVar4 = param_1[3];
  puVar1 = PTR_DAT_04bd0d40 + 0x10;
  param_1[0x49] = (long)(PTR_DAT_04bd1068 + 0x10);
  param_1[2] = (long)puVar1;
  *param_1 = (long)(puVar2 + 0x10);
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
    plVar3 = (long *)((long)*(int *)(lVar4 + 0x84) + (long)(param_1 + 2));
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + -1;
    if (lVar6 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
    }
  }
  param_1[3] = 1;
  return;
}

