
void FUN_03492d60(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  void *__ptr;
  void *__ptr_00;
  long lVar5;
  
  puVar1 = PTR_DAT_04bb2698;
  __ptr = (void *)param_1[0x46];
  if (__ptr != (void *)0x0) {
    __ptr_00 = *(void **)((long)__ptr + 0x10);
    if (__ptr_00 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(__ptr_00);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr_00);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,__ptr_00);
        }
      }
      *(undefined8 *)((long)__ptr + 8) = 0;
      *(undefined8 *)((long)__ptr + 0x10) = 0;
    }
    if (*(long *)puVar1 == 0) {
      free(__ptr);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
    }
    param_1[0x46] = 0;
  }
  lVar4 = param_1[0x48];
  if (lVar4 != 0) {
    plVar2 = (long *)(lVar4 + -8);
    if (*plVar2 != 0) {
      lVar5 = *plVar2 * 0x38;
      do {
        FUN_0344c1b0(lVar4 + -0x38 + lVar5);
        lVar5 = lVar5 + -0x38;
      } while (lVar5 != 0);
    }
    if (*(long *)puVar1 == 0) {
      free(plVar2);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,plVar2);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,plVar2);
      }
    }
    param_1[0x48] = 0;
    *(undefined4 *)(param_1 + 0x47) = 0;
  }
  lVar4 = param_1[0x4a];
  if (lVar4 != 0) {
    plVar2 = (long *)(lVar4 + -8);
    if (*plVar2 != 0) {
      lVar5 = *plVar2 * 0x38;
      do {
        FUN_03464b44(lVar4 + -0x38 + lVar5);
        lVar5 = lVar5 + -0x38;
      } while (lVar5 != 0);
    }
    if (*(long *)puVar1 == 0) {
      free(plVar2);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,plVar2);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,plVar2);
      }
    }
    param_1[0x4a] = 0;
    *(undefined4 *)(param_1 + 0x49) = 0;
  }
  FUN_03515820(param_1 + 0x3a0f);
  if (((*(byte *)(param_1 + 0x39cc) >> 1 & 1) != 0) && (DAT_04cce818 != 0)) {
    plVar2 = *(long **)(*(long *)(DAT_04cce818 + 0x10) + (long)(int)param_1[0x39d3] * 8);
    nn::os::LockMutex((MutexType *)(plVar2 + 0x4d));
    (**(code **)(*plVar2 + 0x38))(plVar2,param_1 + 0x39c9);
    nn::os::UnlockMutex((MutexType *)(plVar2 + 0x4d));
  }
  FUN_03ebae78(param_1 + 0x39e8);
  FUN_03f2d448(param_1 + 0x39cb);
  FUN_03465b80(param_1 + 0x383b);
  FUN_034129e0(param_1 + 0x50);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

