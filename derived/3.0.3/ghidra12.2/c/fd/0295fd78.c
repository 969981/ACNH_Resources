
void FUN_0295fd78(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  void *pvVar5;
  undefined8 *__s;
  
  *param_1 = (long)&PTR_LAB_04a95120;
  pvVar5 = DAT_055d6e30;
  puVar2 = PTR_DAT_04bb2698;
  if (DAT_055d6e30 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(DAT_055d6e30);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,DAT_055d6e30);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    DAT_055d6e30 = (void *)0x0;
    DAT_055d6e28 = 0;
  }
  pvVar5 = (void *)param_1[0x1a];
  DAT_055d6d60 = 1;
  DAT_055d6d64 = 0xffffffffffffffff;
  DAT_055d6d6c = 0xffffffffffffffff;
  DAT_055d6d74 = 0xffffffffffffffff;
  DAT_055d6d7c = 0xffffffffffffffff;
  DAT_055d6e04 = 0xffffffff;
  param_1[0x16] = 0;
  DAT_055d6d84 = 0xffffffffffffffff;
  DAT_055d6d8c = 0xffffffffffffffff;
  DAT_055d6d94 = 0xffffffffffffffff;
  DAT_055d6d9c = 0xffffffffffffffff;
  DAT_055d6da4 = 0xffffffffffffffff;
  DAT_055d6dac = 0xffffffffffffffff;
  DAT_055d6db4 = 0xffffffffffffffff;
  DAT_055d6dbc = 0xffffffffffffffff;
  DAT_055d6dc4 = 0xffffffffffffffff;
  DAT_055d6dcc = 0xffffffffffffffff;
  DAT_055d6dd4 = 0xffffffffffffffff;
  DAT_055d6ddc = 0xffffffffffffffff;
  DAT_055d6de4 = 0xffffffffffffffff;
  DAT_055d6dec = 0xffffffffffffffff;
  DAT_055d6df4 = 0xffffffffffffffff;
  DAT_055d6dfc = 0xffffffffffffffff;
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    param_1[0x1a] = 0;
    *(undefined4 *)(param_1 + 0x19) = 0;
  }
  pvVar5 = (void *)param_1[0x37];
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    param_1[0x37] = 0;
    *(undefined4 *)(param_1 + 0x36) = 0;
  }
  pvVar5 = (void *)param_1[0x3a];
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
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
  uVar3 = FUN_006bd550(param_1[2],0);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return;
}

