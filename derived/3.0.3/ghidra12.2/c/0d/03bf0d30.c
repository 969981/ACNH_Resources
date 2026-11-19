
void FUN_03bf0d30(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  
  puVar2 = PTR_DAT_04bb2698;
  if (*(long *)(param_2 + 2) != 0) {
    pvVar6 = (void *)(*(long *)(param_2 + 2) + -8);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    *(undefined8 *)(param_2 + 2) = 0;
    *param_2 = 0;
  }
  if (*(long *)(param_2 + 6) != 0) {
    pvVar6 = (void *)(*(long *)(param_2 + 6) + -8);
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    *(undefined8 *)(param_2 + 6) = 0;
    param_2[4] = 0;
  }
  if (*(long *)(param_2 + 10) != 0) {
    pvVar6 = (void *)(*(long *)(param_2 + 10) + -8);
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    *(undefined8 *)(param_2 + 10) = 0;
    param_2[8] = 0;
  }
  uVar4 = param_2[0xc];
  if (0 < (int)uVar4) {
    uVar5 = 0;
    do {
      uVar1 = uVar5;
      if (uVar4 <= uVar5) {
        uVar1 = 0;
      }
      plVar3 = *(long **)(*(long *)(param_2 + 0xe) + (ulong)uVar1 * 8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
        uVar4 = uVar5;
        if ((uint)param_2[0xc] <= uVar5) {
          uVar4 = 0;
        }
        *(undefined8 *)(*(long *)(param_2 + 0xe) + (ulong)uVar4 * 8) = 0;
        uVar4 = param_2[0xc];
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)uVar4);
  }
  pvVar6 = *(void **)(param_2 + 0xe);
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    *(undefined8 *)(param_2 + 0xe) = 0;
    param_2[0xc] = 0;
  }
  uVar4 = param_2[0x10];
  if (0 < (int)uVar4) {
    uVar5 = 0;
    do {
      uVar1 = uVar5;
      if (uVar4 <= uVar5) {
        uVar1 = 0;
      }
      plVar3 = *(long **)(*(long *)(param_2 + 0x12) + (ulong)uVar1 * 8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
        uVar4 = uVar5;
        if ((uint)param_2[0x10] <= uVar5) {
          uVar4 = 0;
        }
        *(undefined8 *)(*(long *)(param_2 + 0x12) + (ulong)uVar4 * 8) = 0;
        uVar4 = param_2[0x10];
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)uVar4);
  }
  pvVar6 = *(void **)(param_2 + 0x12);
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    *(undefined8 *)(param_2 + 0x12) = 0;
    param_2[0x10] = 0;
  }
  uVar4 = param_2[0x14];
  if (0 < (int)uVar4) {
    uVar5 = 0;
    do {
      uVar1 = uVar5;
      if (uVar4 <= uVar5) {
        uVar1 = 0;
      }
      plVar3 = *(long **)(*(long *)(param_2 + 0x16) + (ulong)uVar1 * 8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
        uVar4 = uVar5;
        if ((uint)param_2[0x14] <= uVar5) {
          uVar4 = 0;
        }
        *(undefined8 *)(*(long *)(param_2 + 0x16) + (ulong)uVar4 * 8) = 0;
        uVar4 = param_2[0x14];
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)uVar4);
  }
  pvVar6 = *(void **)(param_2 + 0x16);
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    *(undefined8 *)(param_2 + 0x16) = 0;
    param_2[0x14] = 0;
  }
  if (*(long **)(param_2 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0x18) + 0x10))();
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  pvVar6 = *(void **)(param_2 + 0x1c);
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    *(undefined8 *)(param_2 + 0x1a) = 0;
    *(undefined8 *)(param_2 + 0x1c) = 0;
  }
  if (*(long *)puVar2 == 0) {
    free(param_2);
    return;
  }
  plVar3 = (long *)FUN_038cb610(*(long *)puVar2,param_2);
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03bf107c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x38))(plVar3,param_2);
  return;
}

