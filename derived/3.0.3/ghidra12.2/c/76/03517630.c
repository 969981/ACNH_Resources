
void FUN_03517630(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  
  puVar1 = PTR_DAT_04bb2698;
  plVar3 = param_1 + 0x387c;
  plVar5 = (long *)param_1[0x3884];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
    pvVar6 = (void *)plVar5[2];
    if (pvVar6 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar6);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar6);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar6);
        }
      }
      plVar5[1] = 0;
      plVar5[2] = 0;
    }
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  if (param_1[0x3830] != 0) {
    pvVar6 = (void *)(param_1[0x3830] + -8);
    if (*(long *)puVar1 == 0) {
      free(pvVar6);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar1,pvVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar6);
      }
    }
    param_1[0x3830] = 0;
    *(undefined4 *)(param_1 + 0x382f) = 0;
  }
  if (param_1[0x387d] != 0) {
    if (0 < (int)*plVar3) {
      lVar4 = 0;
      plVar5 = (long *)param_1[0x387e];
      do {
        plVar2 = *(long **)(param_1[0x387d] + lVar4 * 8);
        lVar4 = lVar4 + 1;
        *plVar2 = (long)plVar5;
        param_1[0x387e] = (long)plVar2;
        plVar5 = plVar2;
      } while (lVar4 < (int)*plVar3);
    }
    pvVar6 = (void *)param_1[0x387f];
    *(undefined4 *)plVar3 = 0;
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
    }
    *(undefined4 *)((long)param_1 + 0x1c3fc) = 0;
    *(undefined8 *)((long)param_1 + 0x1c3f4) = 0;
    *(undefined8 *)((long)param_1 + 0x1c3ec) = 0;
    *(undefined8 *)((long)param_1 + 0x1c3e4) = 0;
  }
  if (param_1[0x3881] != 0) {
    if (0 < (int)param_1[0x3880]) {
      lVar4 = 0;
      plVar3 = (long *)param_1[0x3882];
      do {
        plVar5 = *(long **)(param_1[0x3881] + lVar4 * 8);
        lVar4 = lVar4 + 1;
        *plVar5 = (long)plVar3;
        param_1[0x3882] = (long)plVar5;
        plVar3 = plVar5;
      } while (lVar4 < (int)param_1[0x3880]);
    }
    pvVar6 = (void *)param_1[0x3883];
    *(undefined4 *)(param_1 + 0x3880) = 0;
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
    }
    *(undefined4 *)((long)param_1 + 0x1c41c) = 0;
    *(undefined8 *)((long)param_1 + 0x1c414) = 0;
    *(undefined8 *)((long)param_1 + 0x1c40c) = 0;
    *(undefined8 *)((long)param_1 + 0x1c404) = 0;
  }
  FUN_03515820(param_1 + 0x3a0c);
  FUN_03465b80(param_1 + 0x3885);
  if (((*(byte *)(param_1 + 0x3839) >> 1 & 1) != 0) && (DAT_04cce818 != 0)) {
    plVar3 = *(long **)(*(long *)(DAT_04cce818 + 0x10) + (long)(int)param_1[0x3840] * 8);
    nn::os::LockMutex((MutexType *)(plVar3 + 0x4d));
    (**(code **)(*plVar3 + 0x38))(plVar3,param_1 + 0x3836);
    nn::os::UnlockMutex((MutexType *)(plVar3 + 0x4d));
  }
  FUN_03ebae78(param_1 + 0x3855);
  FUN_03f2d448(param_1 + 0x3838);
  FUN_034129e0(param_1 + 0x44);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

