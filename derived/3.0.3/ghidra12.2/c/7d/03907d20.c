
void FUN_03907d20(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  long lVar7;
  int iVar8;
  
  *param_1 = &PTR_FUN_04b65e40;
  puVar2 = PTR_DAT_04bb2698;
  lVar4 = param_1[3];
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + -8);
    if (*plVar5 != 0) {
      lVar7 = *plVar5 * 0x150;
      do {
        FUN_039051d8(lVar4 + -0x150 + lVar7);
        lVar7 = lVar7 + -0x150;
      } while (lVar7 != 0);
    }
    if (*(long *)puVar2 == 0) {
      free(plVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,plVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,plVar5);
      }
    }
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  lVar4 = param_1[5];
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    iVar8 = 0;
    do {
      plVar5 = (long *)(lVar4 + (long)iVar8 * 0x38 + 0x28);
      lVar7 = *plVar5;
      if (lVar7 != 0) {
        pvVar6 = (void *)(lVar7 + -8);
        if (*(long *)puVar2 == 0) {
          free(pvVar6);
        }
        else {
          plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
          }
        }
        *plVar5 = 0;
        *(undefined4 *)(lVar4 + (long)iVar8 * 0x38 + 0x20) = 0;
      }
      iVar8 = iVar8 + 1;
    } while (iVar1 != iVar8);
    lVar4 = param_1[5];
  }
  if (lVar4 != 0) {
    pvVar6 = (void *)(lVar4 + -8);
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar6);
      }
    }
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

