
void FUN_03905290(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  int iVar8;
  
  puVar2 = PTR_DAT_04bb2698;
  if (*(long *)(param_1 + 0x28) != 0) {
    pvVar6 = (void *)(*(long *)(param_1 + 0x28) + -8);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x20);
  if (iVar1 != 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x28);
    iVar8 = 0;
    do {
      plVar3 = (long *)(lVar7 + (long)iVar8 * 0x150 + 0x28);
      lVar5 = *plVar3;
      if (lVar5 != 0) {
        pvVar6 = (void *)(lVar5 + -8);
        if (*(long *)puVar2 == 0) {
          free(pvVar6);
        }
        else {
          plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
          }
        }
        *plVar3 = 0;
        *(undefined4 *)(lVar7 + (long)iVar8 * 0x150 + 0x20) = 0;
      }
      iVar8 = iVar8 + 1;
    } while (iVar1 != iVar8);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    pvVar6 = (void *)(*(long *)(param_1 + 0x38) + -8);
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x20);
  if (iVar1 != 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x28);
    iVar8 = 0;
    do {
      plVar3 = (long *)(lVar7 + (long)iVar8 * 0x150 + 0x38);
      lVar5 = *plVar3;
      if (lVar5 != 0) {
        pvVar6 = (void *)(lVar5 + -8);
        if (*(long *)puVar2 == 0) {
          free(pvVar6);
        }
        else {
          plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
          }
        }
        *plVar3 = 0;
        *(undefined4 *)(lVar7 + (long)iVar8 * 0x150 + 0x30) = 0;
      }
      iVar8 = iVar8 + 1;
    } while (iVar1 != iVar8);
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    pvVar6 = (void *)(*(long *)(param_1 + 0x68) + -8);
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x20);
  if (iVar1 != 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x28);
    iVar8 = 0;
    do {
      plVar3 = (long *)(lVar7 + (long)iVar8 * 0x150 + 0x68);
      lVar5 = *plVar3;
      if (lVar5 != 0) {
        pvVar6 = (void *)(lVar5 + -8);
        if (*(long *)puVar2 == 0) {
          free(pvVar6);
        }
        else {
          plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
          }
        }
        *plVar3 = 0;
        *(undefined4 *)(lVar7 + (long)iVar8 * 0x150 + 0x60) = 0;
      }
      iVar8 = iVar8 + 1;
    } while (iVar1 != iVar8);
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    pvVar6 = (void *)(*(long *)(param_1 + 0x78) + -8);
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x20);
  if (iVar1 != 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x28);
    iVar8 = 0;
    do {
      plVar3 = (long *)(lVar7 + (long)iVar8 * 0x150 + 0x78);
      lVar5 = *plVar3;
      if (lVar5 != 0) {
        pvVar6 = (void *)(lVar5 + -8);
        if (*(long *)puVar2 == 0) {
          free(pvVar6);
        }
        else {
          plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
          }
        }
        *plVar3 = 0;
        *(undefined4 *)(lVar7 + (long)iVar8 * 0x150 + 0x70) = 0;
      }
      iVar8 = iVar8 + 1;
    } while (iVar1 != iVar8);
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    pvVar6 = (void *)(*(long *)(param_1 + 0x48) + -8);
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x20);
  if (iVar1 != 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x28);
    iVar8 = 0;
    do {
      plVar3 = (long *)(lVar7 + (long)iVar8 * 0x150 + 0x48);
      lVar5 = *plVar3;
      if (lVar5 != 0) {
        pvVar6 = (void *)(lVar5 + -8);
        if (*(long *)puVar2 == 0) {
          free(pvVar6);
        }
        else {
          plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
          }
        }
        *plVar3 = 0;
        *(undefined4 *)(lVar7 + (long)iVar8 * 0x150 + 0x40) = 0;
      }
      iVar8 = iVar8 + 1;
    } while (iVar1 != iVar8);
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    pvVar6 = (void *)(*(long *)(param_1 + 0x58) + -8);
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x20);
  if (iVar1 != 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x28);
    iVar8 = 0;
    do {
      plVar3 = (long *)(lVar7 + (long)iVar8 * 0x150 + 0x58);
      lVar5 = *plVar3;
      if (lVar5 != 0) {
        pvVar6 = (void *)(lVar5 + -8);
        if (*(long *)puVar2 == 0) {
          free(pvVar6);
        }
        else {
          plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
          }
        }
        *plVar3 = 0;
        *(undefined4 *)(lVar7 + (long)iVar8 * 0x150 + 0x50) = 0;
      }
      iVar8 = iVar8 + 1;
    } while (iVar1 != iVar8);
  }
  return;
}

