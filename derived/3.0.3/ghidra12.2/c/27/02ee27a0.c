
void FUN_02ee27a0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  
  if (param_1[0x44] != 0) {
    if (0 < (int)param_1[0x43]) {
      lVar2 = 0;
      plVar1 = (long *)param_1[0x45];
      do {
        plVar3 = *(long **)(param_1[0x44] + lVar2 * 8);
        lVar2 = lVar2 + 1;
        *plVar3 = (long)plVar1;
        param_1[0x45] = (long)plVar3;
        plVar1 = plVar3;
      } while (lVar2 < (int)param_1[0x43]);
    }
    pvVar4 = (void *)param_1[0x46];
    *(undefined4 *)(param_1 + 0x43) = 0;
    if (pvVar4 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar4);
      }
      else {
        plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar4);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x38))(plVar1,pvVar4);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x234) = 0;
    *(undefined8 *)((long)param_1 + 0x22c) = 0;
    *(undefined8 *)((long)param_1 + 0x224) = 0;
    *(undefined8 *)((long)param_1 + 0x21c) = 0;
  }
  if (param_1[0x4a] != 0) {
    if (0 < (int)param_1[0x49]) {
      lVar2 = 0;
      plVar1 = (long *)param_1[0x4b];
      do {
        plVar3 = *(long **)(param_1[0x4a] + lVar2 * 8);
        lVar2 = lVar2 + 1;
        *plVar3 = (long)plVar1;
        param_1[0x4b] = (long)plVar3;
        plVar1 = plVar3;
      } while (lVar2 < (int)param_1[0x49]);
    }
    pvVar4 = (void *)param_1[0x4c];
    *(undefined4 *)(param_1 + 0x49) = 0;
    if (pvVar4 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar4);
      }
      else {
        plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar4);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x38))(plVar1,pvVar4);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x264) = 0;
    *(undefined8 *)((long)param_1 + 0x25c) = 0;
    *(undefined8 *)((long)param_1 + 0x254) = 0;
    *(undefined8 *)((long)param_1 + 0x24c) = 0;
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

