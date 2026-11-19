
void FUN_03a0a990(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  
  *param_1 = &PTR_FUN_04b6c1f8;
  *(undefined4 *)((long)param_1 + 0x7c) = 5;
  uVar4 = *(uint *)(param_1 + 0x13);
  if (0 < (int)uVar4) {
    uVar5 = 0;
    do {
      uVar1 = uVar5 + 1;
      if (uVar4 <= uVar5) {
        uVar5 = 0;
      }
      *(undefined4 *)(param_1[0x14] + (long)(int)uVar5 * 4) = 0;
      uVar4 = *(uint *)(param_1 + 0x13);
      uVar5 = uVar1;
    } while ((int)uVar1 < (int)uVar4);
  }
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_039728e8(param_1 + 1);
  puVar2 = PTR_DAT_04bb2698;
  if (param_1[0x1c] != 0) {
    pvVar6 = (void *)(param_1[0x1c] + -8);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    param_1[0x1c] = 0;
    *(undefined4 *)(param_1 + 0x1b) = 0;
  }
  FUN_03a0ab50(param_1 + 0x24);
  pvVar6 = (void *)param_1[0x20];
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
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
  }
  pvVar6 = (void *)param_1[0x22];
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
    param_1[0x22] = 0;
    *(undefined4 *)(param_1 + 0x21) = 0;
    *(undefined4 *)((long)param_1 + 0x10c) = 0;
  }
  pvVar6 = (void *)param_1[0x27];
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
    param_1[0x27] = 0;
    *(undefined4 *)(param_1 + 0x26) = 0;
    *(undefined4 *)((long)param_1 + 0x134) = 0;
  }
  FUN_038e1a84(param_1 + 0x2b);
  param_1[1] = PTR_DAT_04bb34f8 + 0x10;
  FUN_038e1c80(param_1 + 6);
  return;
}

