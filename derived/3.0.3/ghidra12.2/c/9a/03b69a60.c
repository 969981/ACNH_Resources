
void FUN_03b69a60(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  void *pvVar8;
  
  *param_1 = &PTR_FUN_04b77bc8;
  if (*(char *)(param_1 + 1) != '\0') {
    if (param_1[2] != 0) {
      if (*(char *)((long)param_1 + 9) == '\0') {
        pvVar8 = (void *)(param_1[2] + -8);
        if (DAT_05ae7600 == 0) {
          free(pvVar8);
        }
        else {
          plVar2 = (long *)FUN_038cb610(DAT_05ae7600,pvVar8);
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x38))(plVar2,pvVar8);
          }
        }
      }
      param_1[2] = 0;
    }
    *(undefined1 *)(param_1 + 1) = 0;
  }
  if (*(char *)(param_1 + 8) != '\0') {
    lVar4 = param_1[9];
    if (lVar4 != 0) {
      if (*(char *)((long)param_1 + 0x41) == '\0') {
        plVar2 = (long *)(lVar4 + -8);
        if (*plVar2 != 0) {
          lVar5 = lVar4 + *plVar2 * 0xe0;
          do {
            puVar6 = (undefined8 *)(lVar5 + -0x68);
            *(undefined2 *)(lVar5 + -0xb0) = 0xffff;
            *(undefined8 *)(lVar5 + -0xa8) = 0xffffffffffffffff;
            *(undefined8 *)(lVar5 + -0xa0) = 0;
            *(undefined4 *)(lVar5 + -0x98) = 0;
            *(undefined2 *)(lVar5 + -0x94) = 0;
            *(undefined4 *)(lVar5 + -0x90) = 0;
            *(undefined8 *)(lVar5 + -0x88) = 0;
            *(undefined4 *)(lVar5 + -0x38) = 0;
            *(undefined2 *)(lVar5 + -0x34) = 0;
            puVar1 = *(undefined8 **)(lVar5 + -0x60);
            while (puVar1 != puVar6) {
              puVar7 = (undefined8 *)puVar1[1];
              *puVar1 = 0;
              puVar1[1] = 0;
              puVar1 = puVar7;
            }
            *(undefined8 **)(lVar5 + -0x68) = puVar6;
            *(undefined8 **)(lVar5 + -0x60) = puVar6;
            puVar6 = (undefined8 *)(lVar5 + -0x50);
            *(undefined4 *)(lVar5 + -0x58) = 0;
            puVar1 = *(undefined8 **)(lVar5 + -0x48);
            while (puVar1 != puVar6) {
              puVar7 = (undefined8 *)puVar1[1];
              *puVar1 = 0;
              puVar1[1] = 0;
              puVar1 = puVar7;
            }
            *(undefined4 *)(lVar5 + -0x40) = 0;
            *(undefined2 *)(lVar5 + -0xb0) = 0xffff;
            *(undefined4 *)(lVar5 + -0x98) = 0;
            *(undefined2 *)(lVar5 + -0x94) = 0;
            *(undefined4 *)(lVar5 + -0x90) = 0;
            *(undefined8 *)(lVar5 + -0x88) = 0;
            *(undefined8 **)(lVar5 + -0x50) = puVar6;
            *(undefined8 **)(lVar5 + -0x48) = puVar6;
            *(undefined8 *)(lVar5 + -0xa8) = 0xffffffffffffffff;
            *(undefined8 *)(lVar5 + -0xa0) = 0;
            lVar5 = lVar5 + -0xe0;
          } while (lVar5 != lVar4);
        }
        if (DAT_05ae7600 == 0) {
          free(plVar2);
        }
        else {
          plVar3 = (long *)FUN_038cb610(DAT_05ae7600,plVar2);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,plVar2);
          }
        }
      }
      param_1[9] = 0;
    }
    *(undefined1 *)(param_1 + 8) = 0;
  }
  pvVar8 = (void *)param_1[0x1f];
  if (pvVar8 != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(pvVar8);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,pvVar8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar8);
      }
    }
    param_1[0x1f] = 0;
  }
  pvVar8 = (void *)param_1[0x1e];
  if (pvVar8 != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(pvVar8);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,pvVar8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar8);
      }
    }
    param_1[0x1e] = 0;
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x16));
  if (*(char *)(param_1 + 0xf) != '\0') {
    *(undefined4 *)((long)param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    pvVar8 = (void *)param_1[0x14];
    if (pvVar8 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar8);
      }
      else {
        plVar2 = (long *)FUN_038cb610(DAT_05ae7600,pvVar8);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar8);
        }
      }
      param_1[0x14] = 0;
    }
    pvVar8 = (void *)param_1[0x11];
    if (pvVar8 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar8);
      }
      else {
        plVar2 = (long *)FUN_038cb610(DAT_05ae7600,pvVar8);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar8);
        }
      }
      param_1[0x11] = 0;
    }
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  if (*(char *)(param_1 + 8) != '\0') {
    lVar4 = param_1[9];
    if (lVar4 != 0) {
      if (*(char *)((long)param_1 + 0x41) == '\0') {
        plVar2 = (long *)(lVar4 + -8);
        if (*plVar2 != 0) {
          lVar5 = lVar4 + *plVar2 * 0xe0;
          do {
            puVar6 = (undefined8 *)(lVar5 + -0x68);
            *(undefined2 *)(lVar5 + -0xb0) = 0xffff;
            *(undefined8 *)(lVar5 + -0xa8) = 0xffffffffffffffff;
            *(undefined8 *)(lVar5 + -0xa0) = 0;
            *(undefined4 *)(lVar5 + -0x98) = 0;
            *(undefined2 *)(lVar5 + -0x94) = 0;
            *(undefined4 *)(lVar5 + -0x90) = 0;
            *(undefined8 *)(lVar5 + -0x88) = 0;
            *(undefined4 *)(lVar5 + -0x38) = 0;
            *(undefined2 *)(lVar5 + -0x34) = 0;
            puVar1 = *(undefined8 **)(lVar5 + -0x60);
            while (puVar1 != puVar6) {
              puVar7 = (undefined8 *)puVar1[1];
              *puVar1 = 0;
              puVar1[1] = 0;
              puVar1 = puVar7;
            }
            *(undefined8 **)(lVar5 + -0x68) = puVar6;
            *(undefined8 **)(lVar5 + -0x60) = puVar6;
            puVar6 = (undefined8 *)(lVar5 + -0x50);
            *(undefined4 *)(lVar5 + -0x58) = 0;
            puVar1 = *(undefined8 **)(lVar5 + -0x48);
            while (puVar1 != puVar6) {
              puVar7 = (undefined8 *)puVar1[1];
              *puVar1 = 0;
              puVar1[1] = 0;
              puVar1 = puVar7;
            }
            *(undefined4 *)(lVar5 + -0x40) = 0;
            *(undefined2 *)(lVar5 + -0xb0) = 0xffff;
            *(undefined4 *)(lVar5 + -0x98) = 0;
            *(undefined2 *)(lVar5 + -0x94) = 0;
            *(undefined4 *)(lVar5 + -0x90) = 0;
            *(undefined8 *)(lVar5 + -0x88) = 0;
            *(undefined8 **)(lVar5 + -0x50) = puVar6;
            *(undefined8 **)(lVar5 + -0x48) = puVar6;
            *(undefined8 *)(lVar5 + -0xa8) = 0xffffffffffffffff;
            *(undefined8 *)(lVar5 + -0xa0) = 0;
            lVar5 = lVar5 + -0xe0;
          } while (lVar5 != lVar4);
        }
        if (DAT_05ae7600 == 0) {
          free(plVar2);
        }
        else {
          plVar3 = (long *)FUN_038cb610(DAT_05ae7600,plVar2);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,plVar2);
          }
        }
      }
      param_1[9] = 0;
    }
    *(undefined1 *)(param_1 + 8) = 0;
  }
  *(undefined4 *)(param_1 + 10) = 0;
  pvVar8 = (void *)param_1[0xd];
  if (pvVar8 != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(pvVar8);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,pvVar8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar8);
      }
    }
    param_1[0xd] = 0;
  }
  if (*(char *)(param_1 + 1) != '\0') {
    if (param_1[2] != 0) {
      if (*(char *)((long)param_1 + 9) == '\0') {
        pvVar8 = (void *)(param_1[2] + -8);
        if (DAT_05ae7600 == 0) {
          free(pvVar8);
        }
        else {
          plVar2 = (long *)FUN_038cb610(DAT_05ae7600,pvVar8);
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x38))(plVar2,pvVar8);
          }
        }
      }
      param_1[2] = 0;
    }
    *(undefined1 *)(param_1 + 1) = 0;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  pvVar8 = (void *)param_1[6];
  if (pvVar8 != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(pvVar8);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,pvVar8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar8);
      }
    }
    param_1[6] = 0;
  }
  return;
}

