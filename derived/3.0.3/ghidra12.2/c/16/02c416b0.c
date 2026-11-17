
void FUN_02c416b0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  
  puVar1 = PTR_DAT_04bb2698;
  pvVar5 = (void *)param_1[0x46];
  if (pvVar5 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar5);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
      }
    }
    param_1[0x45] = 0;
    param_1[0x46] = 0;
  }
  if (param_1[0x4a] != 0) {
    if (0 < (int)param_1[0x49]) {
      lVar3 = 0;
      plVar2 = (long *)param_1[0x4b];
      do {
        plVar4 = *(long **)(param_1[0x4a] + lVar3 * 8);
        lVar3 = lVar3 + 1;
        *plVar4 = (long)plVar2;
        param_1[0x4b] = (long)plVar4;
        plVar2 = plVar4;
      } while (lVar3 < (int)param_1[0x49]);
    }
    pvVar5 = (void *)param_1[0x4c];
    *(undefined4 *)(param_1 + 0x49) = 0;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar5);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x264) = 0;
    *(undefined8 *)((long)param_1 + 0x25c) = 0;
    *(undefined8 *)((long)param_1 + 0x254) = 0;
    *(undefined8 *)((long)param_1 + 0x24c) = 0;
  }
  if (param_1[0x4e] != 0) {
    if (0 < (int)param_1[0x4d]) {
      lVar3 = 0;
      plVar2 = (long *)param_1[0x4f];
      do {
        plVar4 = *(long **)(param_1[0x4e] + lVar3 * 8);
        lVar3 = lVar3 + 1;
        *plVar4 = (long)plVar2;
        param_1[0x4f] = (long)plVar4;
        plVar2 = plVar4;
      } while (lVar3 < (int)param_1[0x4d]);
    }
    pvVar5 = (void *)param_1[0x50];
    *(undefined4 *)(param_1 + 0x4d) = 0;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar5);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x284) = 0;
    *(undefined8 *)((long)param_1 + 0x27c) = 0;
    *(undefined8 *)((long)param_1 + 0x274) = 0;
    *(undefined8 *)((long)param_1 + 0x26c) = 0;
  }
  if (param_1[0x52] != 0) {
    if (0 < (int)param_1[0x51]) {
      lVar3 = 0;
      plVar2 = (long *)param_1[0x53];
      do {
        plVar4 = *(long **)(param_1[0x52] + lVar3 * 8);
        lVar3 = lVar3 + 1;
        *plVar4 = (long)plVar2;
        param_1[0x53] = (long)plVar4;
        plVar2 = plVar4;
      } while (lVar3 < (int)param_1[0x51]);
    }
    pvVar5 = (void *)param_1[0x54];
    *(undefined4 *)(param_1 + 0x51) = 0;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar5);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x2a4) = 0;
    *(undefined8 *)((long)param_1 + 0x29c) = 0;
    *(undefined8 *)((long)param_1 + 0x294) = 0;
    *(undefined8 *)((long)param_1 + 0x28c) = 0;
  }
  pvVar5 = (void *)param_1[0x56];
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
      }
    }
    param_1[0x55] = 0;
    param_1[0x56] = 0;
  }
  if (param_1[0x58] != 0) {
    if (0 < (int)param_1[0x57]) {
      lVar3 = 0;
      plVar2 = (long *)param_1[0x59];
      do {
        plVar4 = *(long **)(param_1[0x58] + lVar3 * 8);
        lVar3 = lVar3 + 1;
        *plVar4 = (long)plVar2;
        param_1[0x59] = (long)plVar4;
        plVar2 = plVar4;
      } while (lVar3 < (int)param_1[0x57]);
    }
    pvVar5 = (void *)param_1[0x5a];
    *(undefined4 *)(param_1 + 0x57) = 0;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar5);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x2d4) = 0;
    *(undefined8 *)((long)param_1 + 0x2cc) = 0;
    *(undefined8 *)((long)param_1 + 0x2c4) = 0;
    *(undefined8 *)((long)param_1 + 700) = 0;
  }
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

