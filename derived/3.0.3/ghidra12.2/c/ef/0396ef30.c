
void FUN_0396ef30(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  
  *param_1 = &PTR_FUN_04b684b0;
  puVar1 = PTR_DAT_04bb2698;
  if (param_1[0x12] != 0) {
    pvVar7 = (void *)(param_1[0x12] + -8);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar7);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar7);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar7);
      }
    }
    param_1[0x12] = 0;
    *(undefined4 *)(param_1 + 0x11) = 0;
  }
  if (param_1[0x17] != 0) {
    pvVar7 = (void *)(param_1[0x17] + -8);
    if (*(long *)puVar1 == 0) {
      free(pvVar7);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar7);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar7);
      }
    }
    param_1[0x17] = 0;
    *(undefined4 *)(param_1 + 0x16) = 0;
  }
  if (param_1[0x1c] != 0) {
    pvVar7 = (void *)(param_1[0x1c] + -8);
    if (*(long *)puVar1 == 0) {
      free(pvVar7);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar7);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar7);
      }
    }
    param_1[0x1c] = 0;
    *(undefined4 *)(param_1 + 0x1b) = 0;
  }
  lVar5 = param_1[0x21];
  if (lVar5 != 0) {
    plVar3 = (long *)(lVar5 + -8);
    if (*plVar3 != 0) {
      lVar6 = *plVar3 * 0x398;
      do {
        lVar2 = lVar5 + lVar6;
        *(undefined ***)(lVar2 + -0x398) = &PTR_LAB_04b65c30;
        *(undefined8 *)(lVar2 + -0x390) = 0;
        *(undefined8 *)(lVar2 + -0x388) = 0;
        *(undefined8 *)(lVar2 + -0x380) = 0;
        *(undefined8 *)(lVar2 + -0x378) = 0;
        lVar6 = lVar6 + -0x398;
        *(byte *)(lVar2 + -0x140) = *(byte *)(lVar2 + -0x140) & 0xfc | *(int *)(lVar2 + -0x14c) != 0
        ;
      } while (lVar6 != 0);
    }
    if (*(long *)puVar1 == 0) {
      free(plVar3);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar1,plVar3);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,plVar3);
      }
    }
    param_1[0x21] = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  pvVar7 = (void *)param_1[0xf];
  if (pvVar7 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar7);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar7);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar7);
      }
    }
  }
  puVar1 = PTR_DAT_04bbdcf0 + 0x10;
  param_1[8] = puVar1;
  FUN_038f4940();
  param_1[1] = puVar1;
  FUN_038f4940(param_1 + 1);
  return;
}

