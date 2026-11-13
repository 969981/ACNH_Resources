
void FUN_01274864(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  void *pvVar9;
  
  *param_1 = &PTR_FUN_04989890;
  FUN_01274e58(param_1 + 0x1ed);
  FUN_01275128(param_1 + 0x1ad);
  param_1[0x172] = &PTR_FUN_0498a888;
  FUN_01295940(param_1 + 0x172);
  puVar5 = PTR_DAT_04bcb440;
  puVar8 = (undefined8 *)param_1[0x174];
  param_1[0x172] = PTR_DAT_04bcb440 + 0x10;
  if (puVar8 != &DAT_0407ebb1) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x175) < 1) {
      iVar1 = *(int *)(param_1 + 0x175) + -1;
    }
    memset(puVar8,0,(long)iVar1);
    *(undefined1 *)((long)puVar8 + (long)iVar1) = 0;
  }
  (**(code **)(param_1[0x173] + 0x18))(param_1 + 0x173);
  uVar6 = FUN_006bd550(param_1[0x174],0);
  *(undefined4 *)(param_1 + 0x186) = uVar6;
  param_1[0x187] = 0;
  param_1[0x188] = 0;
  param_1[0x189] = 0;
  FUN_012754a8(param_1 + 0x132);
  pvVar9 = (void *)param_1[0x12e];
  param_1[0xf2] = &PTR_FUN_04989e98;
  puVar2 = PTR_DAT_04bb2698;
  if (pvVar9 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar9);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar9);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
      }
    }
    param_1[0x12e] = 0;
    *(undefined4 *)(param_1 + 0x12d) = 0;
  }
  *(undefined4 *)(param_1 + 0x131) = 0;
  *(undefined1 *)((long)param_1 + 0x98c) = 0;
  FUN_01289ee8(param_1 + 0xf2);
  param_1[0xf2] = &PTR_LAB_04989ef0;
  FUN_01289ee8(param_1 + 0xf2);
  puVar8 = (undefined8 *)param_1[0xf4];
  param_1[0xf2] = puVar5 + 0x10;
  if (puVar8 != &DAT_0407ebb1) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0xf5) < 1) {
      iVar1 = *(int *)(param_1 + 0xf5) + -1;
    }
    memset(puVar8,0,(long)iVar1);
    *(undefined1 *)((long)puVar8 + (long)iVar1) = 0;
  }
  (**(code **)(param_1[0xf3] + 0x18))(param_1 + 0xf3);
  uVar6 = FUN_006bd550(param_1[0xf4],0);
  puVar3 = PTR_DAT_04bbbe18;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  *puVar3 = 1;
  puVar3 = PTR_DAT_04bbbe20;
  pvVar9 = (void *)param_1[0xd1];
  *(undefined4 *)(param_1 + 0x106) = uVar6;
  param_1[0x109] = 0;
  param_1[0xb7] = &PTR_FUN_04989df0;
  param_1[0xcd] = 0;
  *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
  *(undefined4 *)(puVar3 + 0x18) = 0xffffffff;
  *(undefined8 *)puVar3 = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
  if (pvVar9 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar9);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar9);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
      }
    }
    param_1[0xd1] = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  pvVar9 = (void *)param_1[0xee];
  if (pvVar9 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar9);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar9);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
      }
    }
    param_1[0xee] = 0;
    *(undefined4 *)(param_1 + 0xed) = 0;
  }
  pvVar9 = (void *)param_1[0xf1];
  *(undefined4 *)(param_1 + 0xef) = 0xffffffff;
  if (pvVar9 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar9);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar9);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
      }
    }
    param_1[0xf1] = 0;
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  puVar8 = (undefined8 *)param_1[0xb9];
  param_1[0xb7] = puVar5 + 0x10;
  if (puVar8 != &DAT_0407ebb1) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0xba) < 1) {
      iVar1 = *(int *)(param_1 + 0xba) + -1;
    }
    memset(puVar8,0,(long)iVar1);
    *(undefined1 *)((long)puVar8 + (long)iVar1) = 0;
  }
  (**(code **)(param_1[0xb8] + 0x18))(param_1 + 0xb8);
  uVar6 = FUN_006bd550(param_1[0xb9],0);
  puVar3 = PTR_DAT_04bbbeb0;
  param_1[0xcc] = 0;
  puVar4 = PTR_DAT_04bbbeb8;
  pvVar9 = (void *)param_1[0x96];
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  *(undefined4 *)(param_1 + 0xcb) = uVar6;
  param_1[0x7c] = &PTR_FUN_04989d48;
  param_1[0x92] = 0;
  *puVar3 = 1;
  *(undefined8 *)puVar4 = 0xffffffffffffffff;
  *(undefined4 *)(puVar4 + 8) = 0xffffffff;
  if (pvVar9 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar9);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar9);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
      }
    }
    param_1[0x96] = 0;
    *(undefined4 *)(param_1 + 0x95) = 0;
  }
  pvVar9 = (void *)param_1[0xb3];
  if (pvVar9 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar9);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar9);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
      }
    }
    param_1[0xb3] = 0;
    *(undefined4 *)(param_1 + 0xb2) = 0;
  }
  pvVar9 = (void *)param_1[0xb6];
  *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
  if (pvVar9 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar9);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar9);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
      }
    }
    param_1[0xb6] = 0;
    *(undefined4 *)(param_1 + 0xb5) = 0;
  }
  puVar8 = (undefined8 *)param_1[0x7e];
  param_1[0x7c] = puVar5 + 0x10;
  if (puVar8 != &DAT_0407ebb1) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x7f) < 1) {
      iVar1 = *(int *)(param_1 + 0x7f) + -1;
    }
    memset(puVar8,0,(long)iVar1);
    *(undefined1 *)((long)puVar8 + (long)iVar1) = 0;
  }
  (**(code **)(param_1[0x7d] + 0x18))(param_1 + 0x7d);
  uVar6 = FUN_006bd550(param_1[0x7e],0);
  *(undefined4 *)(param_1 + 0x90) = uVar6;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x41] = &PTR_FUN_04989ca0;
  FUN_0127fb1c();
  puVar4 = PTR_DAT_04bbbe68;
  puVar3 = PTR_DAT_04bbbe60;
  param_1[0x57] = 0;
  pvVar9 = (void *)param_1[0x5b];
  *puVar3 = 1;
  *(undefined8 *)puVar4 = 0xffffffffffffffff;
  *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
  if (pvVar9 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar9);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar9);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
      }
    }
    param_1[0x5b] = 0;
    *(undefined4 *)(param_1 + 0x5a) = 0;
  }
  pvVar9 = (void *)param_1[0x78];
  if (pvVar9 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar9);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar9);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
      }
    }
    param_1[0x78] = 0;
    *(undefined4 *)(param_1 + 0x77) = 0;
  }
  pvVar9 = (void *)param_1[0x7b];
  *(undefined4 *)(param_1 + 0x79) = 0xffffffff;
  if (pvVar9 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar9);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar9);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
      }
    }
    param_1[0x7b] = 0;
    *(undefined4 *)(param_1 + 0x7a) = 0;
  }
  puVar8 = (undefined8 *)param_1[0x43];
  param_1[0x41] = puVar5 + 0x10;
  if (puVar8 != &DAT_0407ebb1) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x44) < 1) {
      iVar1 = *(int *)(param_1 + 0x44) + -1;
    }
    memset(puVar8,0,(long)iVar1);
    *(undefined1 *)((long)puVar8 + (long)iVar1) = 0;
  }
  (**(code **)(param_1[0x42] + 0x18))(param_1 + 0x42);
  uVar6 = FUN_006bd550(param_1[0x43],0);
  *(undefined4 *)(param_1 + 0x55) = uVar6;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  FUN_01275c60(param_1 + 1);
  return;
}

