
void FUN_017bde48(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  void *pvVar8;
  
  *param_1 = &PTR_FUN_049c3d60;
  param_1[0x281] = &PTR_FUN_049c4920;
  FUN_017dfab0(param_1 + 0x281);
  FUN_017e01f8(param_1 + 0x281);
  param_1[0x241] = &PTR_FUN_049c4808;
  FUN_017dcb50(param_1 + 0x241);
  FUN_017dd298(param_1 + 0x241);
  FUN_017be204(param_1 + 0x201);
  FUN_017be4d8(param_1 + 0x1c1);
  FUN_017be7a4(param_1 + 0x181);
  FUN_017bea7c(param_1 + 0x141);
  FUN_017bed48(param_1 + 0x101);
  FUN_017beef0(param_1 + 0xc1);
  pvVar8 = (void *)param_1[0xbd];
  param_1[0x81] = &PTR_FUN_049c3fb0;
  puVar2 = PTR_DAT_04bb2698;
  if (pvVar8 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar8);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar8);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar8);
      }
    }
    param_1[0xbd] = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)((long)param_1 + 0x604) = 0;
  FUN_017cd178(param_1 + 0x81);
  param_1[0x81] = &PTR_LAB_049c4008;
  FUN_017cd178(param_1 + 0x81);
  puVar3 = PTR_DAT_04bcb440;
  puVar7 = (undefined8 *)param_1[0x83];
  param_1[0x81] = PTR_DAT_04bcb440 + 0x10;
  if (puVar7 != &DAT_0407ebb1) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x84) < 1) {
      iVar1 = *(int *)(param_1 + 0x84) + -1;
    }
    memset(puVar7,0,(long)iVar1);
    *(undefined1 *)((long)puVar7 + (long)iVar1) = 0;
  }
  (**(code **)(param_1[0x82] + 0x18))(param_1 + 0x82);
  uVar4 = FUN_006bd550(param_1[0x83],0);
  pvVar8 = (void *)param_1[0x7d];
  *(undefined4 *)(param_1 + 0x95) = uVar4;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x41] = &PTR_FUN_049c3e98;
  if (pvVar8 != (void *)0x0) {
    lVar6 = *(long *)puVar2;
    if (lVar6 == 0) {
      free(pvVar8);
    }
    else {
      plVar5 = (long *)FUN_038cb610(lVar6,pvVar8);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar8);
      }
    }
    param_1[0x7d] = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined1 *)((long)param_1 + 0x404) = 0;
  FUN_017c88d8(param_1 + 0x41);
  param_1[0x41] = &PTR_LAB_049c3ef0;
  FUN_017c88d8(param_1 + 0x41);
  puVar7 = (undefined8 *)param_1[0x43];
  param_1[0x41] = puVar3 + 0x10;
  if (puVar7 != &DAT_0407ebb1) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x44) < 1) {
      iVar1 = *(int *)(param_1 + 0x44) + -1;
    }
    memset(puVar7,0,(long)iVar1);
    *(undefined1 *)((long)puVar7 + (long)iVar1) = 0;
  }
  (**(code **)(param_1[0x42] + 0x18))(param_1 + 0x42);
  uVar4 = FUN_006bd550(param_1[0x43],0);
  puVar7 = param_1 + 1;
  *puVar7 = &PTR_FUN_049c3d80;
  pvVar8 = (void *)param_1[0x3d];
  *(undefined4 *)(param_1 + 0x55) = uVar4;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  if (pvVar8 != (void *)0x0) {
    lVar6 = *(long *)puVar2;
    if (lVar6 == 0) {
      free(pvVar8);
    }
    else {
      plVar5 = (long *)FUN_038cb610(lVar6,pvVar8);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar8);
      }
    }
    param_1[0x3d] = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x204) = 0;
  FUN_017c4be8(puVar7);
  param_1[1] = &PTR_LAB_049c3dd8;
  FUN_017c4be8(puVar7);
  puVar7 = (undefined8 *)param_1[3];
  param_1[1] = puVar3 + 0x10;
  if (puVar7 != &DAT_0407ebb1) {
    iVar1 = 0;
    if (*(int *)(param_1 + 4) < 1) {
      iVar1 = *(int *)(param_1 + 4) + -1;
    }
    memset(puVar7,0,(long)iVar1);
    *(undefined1 *)((long)puVar7 + (long)iVar1) = 0;
  }
  (**(code **)(param_1[2] + 0x18))(param_1 + 2);
  uVar4 = FUN_006bd550(param_1[3],0);
  *(undefined4 *)(param_1 + 0x15) = uVar4;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  return;
}

