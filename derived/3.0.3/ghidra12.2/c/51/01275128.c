
void FUN_01275128(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long *plVar6;
  void *pvVar7;
  undefined8 *__s;
  
  pvVar7 = (void *)param_1[0x3c];
  *param_1 = (long)&PTR_FUN_0498ace0;
  puVar2 = PTR_DAT_04bb2698;
  if (pvVar7 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar7);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar7);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar7);
      }
    }
    param_1[0x3c] = 0;
    *(undefined4 *)(param_1 + 0x3b) = 0;
  }
  puVar3 = PTR_DAT_04bbbdf8;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  puVar4 = PTR_DAT_04bbbe00;
  pvVar7 = (void *)param_1[0x1a];
  *(undefined1 *)((long)param_1 + 0x1fc) = 0;
  param_1[0x16] = 0;
  *puVar3 = 1;
  *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)puVar4 = 0xffffffffffffffff;
  *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
  if (pvVar7 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar7);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar2,pvVar7);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar7);
      }
    }
    param_1[0x1a] = 0;
    *(undefined4 *)(param_1 + 0x19) = 0;
  }
  pvVar7 = (void *)param_1[0x37];
  if (pvVar7 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar7);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar2,pvVar7);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar7);
      }
    }
    param_1[0x37] = 0;
    *(undefined4 *)(param_1 + 0x36) = 0;
  }
  pvVar7 = (void *)param_1[0x3a];
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  if (pvVar7 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar7);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar2,pvVar7);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar7);
      }
    }
    param_1[0x3a] = 0;
    *(undefined4 *)(param_1 + 0x39) = 0;
  }
  pvVar7 = (void *)param_1[0x1a];
  *param_1 = (long)&PTR_LAB_0498ad38;
  *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
  *puVar3 = 1;
  param_1[0x16] = 0;
  *(undefined8 *)puVar4 = 0xffffffffffffffff;
  *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
  if (pvVar7 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar7);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar2,pvVar7);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar7);
      }
    }
    param_1[0x1a] = 0;
    *(undefined4 *)(param_1 + 0x19) = 0;
  }
  pvVar7 = (void *)param_1[0x37];
  if (pvVar7 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar7);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar2,pvVar7);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar7);
      }
    }
    param_1[0x37] = 0;
    *(undefined4 *)(param_1 + 0x36) = 0;
  }
  pvVar7 = (void *)param_1[0x3a];
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  if (pvVar7 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar7);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar2,pvVar7);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar7);
      }
    }
    param_1[0x3a] = 0;
    *(undefined4 *)(param_1 + 0x39) = 0;
  }
  __s = (undefined8 *)param_1[2];
  *param_1 = (long)(PTR_DAT_04bcb440 + 0x10);
  if (__s != &DAT_0407ebb1) {
    iVar1 = 0;
    if ((int)param_1[3] < 1) {
      iVar1 = (int)param_1[3] + -1;
    }
    memset(__s,0,(long)iVar1);
    *(undefined1 *)((long)__s + (long)iVar1) = 0;
  }
  (**(code **)(param_1[1] + 0x18))(param_1 + 1);
  uVar5 = FUN_006bd550(param_1[2],0);
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return;
}

