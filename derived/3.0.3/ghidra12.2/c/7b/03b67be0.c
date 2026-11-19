
void FUN_03b67be0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  void *pvVar11;
  
  *param_1 = &PTR_FUN_04b77ba8;
  puVar5 = PTR_DAT_04bb2698;
  if (*(char *)(param_1 + 1) != '\0') {
    pvVar11 = (void *)param_1[0x7f];
    if (pvVar11 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar11);
      }
      else {
        plVar6 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar11);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,pvVar11);
        }
      }
      param_1[0x7e] = 0;
      param_1[0x7f] = 0;
    }
    param_1[0x10] = 0;
    if (*(char *)(param_1 + 9) != '\0') {
      lVar8 = param_1[10];
      if (lVar8 != 0) {
        if (*(char *)((long)param_1 + 0x49) == '\0') {
          if (*(long *)(lVar8 + -8) != 0) {
            lVar9 = *(long *)(lVar8 + -8) * 0x240;
            puVar1 = PTR_DAT_04bd2050 + 0x10;
            puVar2 = PTR_DAT_04bd2048 + 0x10;
            puVar3 = PTR_DAT_04bd2040 + 0x10;
            do {
              lVar4 = lVar8 + lVar9;
              *(undefined2 *)(lVar4 + -0xf8) = 0;
              *(undefined2 *)(lVar4 + -0xb8) = 0;
              *(undefined **)(lVar4 + -0x1b0) = puVar1;
              *(undefined **)(lVar4 + -0x168) = puVar2;
              *(undefined8 *)(lVar4 + -0x178) = 0;
              *(undefined8 *)(lVar4 + -0x170) = 0;
              if ((*(int *)(lVar4 + -0x114) != 0) &&
                 (piVar10 = (int *)(lVar4 + -0x118), *piVar10 != 0)) {
                if (*(int *)(lVar4 + -0x114) == 1) {
                  *(undefined **)(lVar4 + -0x138) = puVar3;
                  *(undefined8 *)(lVar4 + -0x128) = 0;
                }
                *(undefined8 *)(lVar4 + -0x100) = 0;
                piVar10[0] = 0;
                piVar10[1] = 0;
                *(undefined8 *)(lVar4 + -0x110) = 0;
                *(undefined8 *)(lVar4 + -0x10b) = 0;
              }
              lVar9 = lVar9 + -0x240;
            } while (lVar9 != 0);
          }
          operator_delete__(lVar8 + -0x40,0x40);
        }
        param_1[10] = 0;
      }
      *(undefined1 *)(param_1 + 9) = 0;
    }
    if (*(char *)(param_1 + 2) != '\0') {
      lVar8 = param_1[3];
      if (lVar8 != 0) {
        if (*(char *)((long)param_1 + 0x11) == '\0') {
          plVar6 = (long *)(lVar8 + -8);
          if (*plVar6 != 0) {
            lVar9 = *plVar6 * 0x120;
            puVar1 = PTR_DAT_04bd1f00 + 0x10;
            puVar2 = PTR_DAT_04bd1f08 + 0x10;
            puVar3 = PTR_DAT_04bd1ef8 + 0x10;
            do {
              lVar4 = lVar8 + lVar9;
              *(undefined **)(lVar4 + -0xf8) = puVar2;
              *(undefined **)(lVar4 + -0x120) = puVar1;
              nn::os::FinalizeMutex((MutexType *)(lVar4 + -0xd0));
              *(undefined4 *)(lVar4 + -0x100) = 0;
              *(undefined **)(lVar4 + -0x108) = puVar3;
              lVar9 = lVar9 + -0x120;
              *(undefined **)(lVar4 + -0x118) = puVar3;
              *(undefined4 *)(lVar4 + -0x110) = 0;
            } while (lVar9 != 0);
          }
          if (*(long *)puVar5 == 0) {
            free(plVar6);
          }
          else {
            plVar7 = (long *)FUN_038cb610(*(long *)puVar5,plVar6);
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 0x38))(plVar7,plVar6);
            }
          }
        }
        param_1[3] = 0;
      }
      *(undefined1 *)(param_1 + 2) = 0;
    }
    pvVar11 = (void *)param_1[0x12];
    if (pvVar11 != (void *)0x0) {
      if (*(long *)puVar5 == 0) {
        free(pvVar11);
      }
      else {
        plVar6 = (long *)FUN_038cb610(*(long *)puVar5,pvVar11);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,pvVar11);
        }
      }
      param_1[0x12] = 0;
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  param_1[0x1b] = 0;
  puVar1 = PTR_DAT_04bd1ee8;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0x19] = puVar1;
  param_1[0x1a] = 0;
  param_1[0x13] = puVar1;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = puVar1;
  if (*(char *)(param_1 + 9) != '\0') {
    lVar8 = param_1[10];
    if (lVar8 != 0) {
      if (*(char *)((long)param_1 + 0x49) == '\0') {
        if (*(long *)(lVar8 + -8) != 0) {
          lVar9 = *(long *)(lVar8 + -8) * 0x240;
          puVar1 = PTR_DAT_04bd2050 + 0x10;
          puVar2 = PTR_DAT_04bd2048 + 0x10;
          puVar3 = PTR_DAT_04bd2040 + 0x10;
          do {
            lVar4 = lVar8 + lVar9;
            *(undefined2 *)(lVar4 + -0xf8) = 0;
            *(undefined2 *)(lVar4 + -0xb8) = 0;
            *(undefined **)(lVar4 + -0x1b0) = puVar1;
            *(undefined **)(lVar4 + -0x168) = puVar2;
            *(undefined8 *)(lVar4 + -0x178) = 0;
            *(undefined8 *)(lVar4 + -0x170) = 0;
            if ((*(int *)(lVar4 + -0x114) != 0) &&
               (piVar10 = (int *)(lVar4 + -0x118), *piVar10 != 0)) {
              if (*(int *)(lVar4 + -0x114) == 1) {
                *(undefined **)(lVar4 + -0x138) = puVar3;
                *(undefined8 *)(lVar4 + -0x128) = 0;
              }
              *(undefined8 *)(lVar4 + -0x100) = 0;
              piVar10[0] = 0;
              piVar10[1] = 0;
              *(undefined8 *)(lVar4 + -0x110) = 0;
              *(undefined8 *)(lVar4 + -0x10b) = 0;
            }
            lVar9 = lVar9 + -0x240;
          } while (lVar9 != 0);
        }
        operator_delete__(lVar8 + -0x40,0x40);
      }
      param_1[10] = 0;
    }
    *(undefined1 *)(param_1 + 9) = 0;
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  pvVar11 = (void *)param_1[0xe];
  if (pvVar11 != (void *)0x0) {
    if (*(long *)puVar5 == 0) {
      free(pvVar11);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar5,pvVar11);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar11);
      }
    }
    param_1[0xe] = 0;
  }
  if (*(char *)(param_1 + 2) != '\0') {
    lVar8 = param_1[3];
    if (lVar8 != 0) {
      if (*(char *)((long)param_1 + 0x11) == '\0') {
        plVar6 = (long *)(lVar8 + -8);
        if (*plVar6 != 0) {
          lVar9 = *plVar6 * 0x120;
          puVar1 = PTR_DAT_04bd1f00 + 0x10;
          puVar2 = PTR_DAT_04bd1f08 + 0x10;
          puVar3 = PTR_DAT_04bd1ef8 + 0x10;
          do {
            lVar4 = lVar8 + lVar9;
            *(undefined **)(lVar4 + -0xf8) = puVar2;
            *(undefined **)(lVar4 + -0x120) = puVar1;
            nn::os::FinalizeMutex((MutexType *)(lVar4 + -0xd0));
            *(undefined4 *)(lVar4 + -0x100) = 0;
            *(undefined **)(lVar4 + -0x108) = puVar3;
            lVar9 = lVar9 + -0x120;
            *(undefined **)(lVar4 + -0x118) = puVar3;
            *(undefined4 *)(lVar4 + -0x110) = 0;
          } while (lVar9 != 0);
        }
        if (*(long *)puVar5 == 0) {
          free(plVar6);
        }
        else {
          plVar7 = (long *)FUN_038cb610(*(long *)puVar5,plVar6);
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x38))(plVar7,plVar6);
          }
        }
      }
      param_1[3] = 0;
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  pvVar11 = (void *)param_1[7];
  if (pvVar11 != (void *)0x0) {
    if (*(long *)puVar5 == 0) {
      free(pvVar11);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar5,pvVar11);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar11);
      }
    }
    param_1[7] = 0;
  }
  return;
}

