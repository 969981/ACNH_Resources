
void FUN_00877a94(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long *plVar7;
  void *pvVar8;
  undefined8 *puVar9;
  
  *param_1 = &PTR_FUN_0491db78;
  param_1[0x259] = &PTR_FUN_0491e758;
  FUN_0089fa90(param_1 + 0x259);
  param_1[0x259] = &PTR_LAB_0491e7b0;
  puVar2 = PTR_DAT_04bb57f8;
  pvVar8 = (void *)param_1[0x273];
  *PTR_DAT_04bb57f0 = 1;
  *(undefined8 *)puVar2 = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
  *(undefined4 *)(puVar2 + 0x40) = 0xffffffff;
  *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
  puVar2 = PTR_DAT_04bb2698;
  param_1[0x26f] = 0;
  if (pvVar8 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar8);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar8);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
      }
    }
    param_1[0x273] = 0;
    *(undefined4 *)(param_1 + 0x272) = 0;
  }
  pvVar8 = (void *)param_1[0x290];
  if (pvVar8 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar8);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar8);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
      }
    }
    param_1[0x290] = 0;
    *(undefined4 *)(param_1 + 0x28f) = 0;
  }
  pvVar8 = (void *)param_1[0x293];
  *(undefined4 *)(param_1 + 0x291) = 0xffffffff;
  if (pvVar8 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar8);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar8);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
      }
    }
    param_1[0x293] = 0;
    *(undefined4 *)(param_1 + 0x292) = 0;
  }
  puVar5 = PTR_DAT_04bcb440;
  puVar9 = (undefined8 *)param_1[0x25b];
  param_1[0x259] = PTR_DAT_04bcb440 + 0x10;
  if (puVar9 != &DAT_0407ebb1) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x25c) < 1) {
      iVar1 = *(int *)(param_1 + 0x25c) + -1;
    }
    memset(puVar9,0,(long)iVar1);
    *(undefined1 *)((long)puVar9 + (long)iVar1) = 0;
  }
  (**(code **)(param_1[0x25a] + 0x18))(param_1 + 0x25a);
  uVar6 = FUN_006bd550(param_1[0x25b],0);
  *(undefined4 *)(param_1 + 0x26d) = uVar6;
  param_1[0x26e] = 0;
  param_1[0x26f] = 0;
  param_1[0x270] = 0;
  param_1[0x215] = &PTR_FUN_0491e640;
  FUN_0089d4a0(param_1 + 0x215);
  puVar3 = PTR_DAT_04bb57e0;
  param_1[0x215] = &PTR_LAB_0491e698;
  *puVar3 = 1;
  puVar3 = PTR_DAT_04bb57e8;
  pvVar8 = (void *)param_1[0x22f];
  param_1[0x22b] = 0;
  *(undefined4 *)(puVar3 + 0x20) = 0xffffffff;
  *(undefined8 *)puVar3 = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
  if (pvVar8 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar8);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar8);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
      }
    }
    param_1[0x22f] = 0;
    *(undefined4 *)(param_1 + 0x22e) = 0;
  }
  pvVar8 = (void *)param_1[0x24c];
  if (pvVar8 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar8);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar8);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
      }
    }
    param_1[0x24c] = 0;
    *(undefined4 *)(param_1 + 0x24b) = 0;
  }
  pvVar8 = (void *)param_1[0x24f];
  *(undefined4 *)(param_1 + 0x24d) = 0xffffffff;
  if (pvVar8 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar8);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar8);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
      }
    }
    param_1[0x24f] = 0;
    *(undefined4 *)(param_1 + 0x24e) = 0;
  }
  puVar9 = (undefined8 *)param_1[0x217];
  param_1[0x215] = puVar5 + 0x10;
  if (puVar9 != &DAT_0407ebb1) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x218) < 1) {
      iVar1 = *(int *)(param_1 + 0x218) + -1;
    }
    memset(puVar9,0,(long)iVar1);
    *(undefined1 *)((long)puVar9 + (long)iVar1) = 0;
  }
  (**(code **)(param_1[0x216] + 0x18))(param_1 + 0x216);
  uVar6 = FUN_006bd550(param_1[0x217],0);
  *(undefined4 *)(param_1 + 0x229) = uVar6;
  param_1[0x22a] = 0;
  param_1[0x22b] = 0;
  param_1[0x22c] = 0;
  param_1[0x1d1] = &PTR_FUN_0491e528;
  FUN_0089aef0(param_1 + 0x1d1);
  puVar4 = PTR_DAT_04bb57d8;
  puVar3 = PTR_DAT_04bb57d0;
  pvVar8 = (void *)param_1[0x1eb];
  param_1[0x1d1] = &PTR_LAB_0491e580;
  param_1[0x1e7] = 0;
  *puVar3 = 1;
  *(undefined8 *)puVar4 = 0xffffffffffffffff;
  *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
  if (pvVar8 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar8);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar8);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
      }
    }
    param_1[0x1eb] = 0;
    *(undefined4 *)(param_1 + 0x1ea) = 0;
  }
  pvVar8 = (void *)param_1[0x208];
  if (pvVar8 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar8);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar8);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
      }
    }
    param_1[0x208] = 0;
    *(undefined4 *)(param_1 + 0x207) = 0;
  }
  pvVar8 = (void *)param_1[0x20b];
  *(undefined4 *)(param_1 + 0x209) = 0xffffffff;
  if (pvVar8 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar8);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar8);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
      }
    }
    param_1[0x20b] = 0;
    *(undefined4 *)(param_1 + 0x20a) = 0;
  }
  puVar9 = (undefined8 *)param_1[0x1d3];
  param_1[0x1d1] = puVar5 + 0x10;
  if (puVar9 != &DAT_0407ebb1) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x1d4) < 1) {
      iVar1 = *(int *)(param_1 + 0x1d4) + -1;
    }
    memset(puVar9,0,(long)iVar1);
    *(undefined1 *)((long)puVar9 + (long)iVar1) = 0;
  }
  (**(code **)(param_1[0x1d2] + 0x18))(param_1 + 0x1d2);
  uVar6 = FUN_006bd550(param_1[0x1d3],0);
  *(undefined4 *)(param_1 + 0x1e5) = uVar6;
  param_1[0x1e6] = 0;
  param_1[0x1e7] = 0;
  param_1[0x1e8] = 0;
  param_1[0x18d] = &PTR_LAB_0491e410;
  FUN_008989d0(param_1 + 0x18d);
  puVar3 = PTR_DAT_04bb57c0;
  param_1[0x18d] = &PTR_LAB_0491e468;
  puVar4 = PTR_DAT_04bb57c8;
  pvVar8 = (void *)param_1[0x1a7];
  param_1[0x1a3] = 0;
  *puVar3 = 1;
  *(undefined4 *)(puVar4 + 0x10) = 0xffffffff;
  *(undefined8 *)puVar4 = 0xffffffffffffffff;
  *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
  if (pvVar8 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar8);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar8);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
      }
    }
    param_1[0x1a7] = 0;
    *(undefined4 *)(param_1 + 0x1a6) = 0;
  }
  pvVar8 = (void *)param_1[0x1c4];
  if (pvVar8 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar8);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar8);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
      }
    }
    param_1[0x1c4] = 0;
    *(undefined4 *)(param_1 + 0x1c3) = 0;
  }
  pvVar8 = (void *)param_1[0x1c7];
  *(undefined4 *)(param_1 + 0x1c5) = 0xffffffff;
  if (pvVar8 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar8);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar8);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
      }
    }
    param_1[0x1c7] = 0;
    *(undefined4 *)(param_1 + 0x1c6) = 0;
  }
  puVar9 = (undefined8 *)param_1[399];
  param_1[0x18d] = puVar5 + 0x10;
  if (puVar9 != &DAT_0407ebb1) {
    iVar1 = 0;
    if (*(int *)(param_1 + 400) < 1) {
      iVar1 = *(int *)(param_1 + 400) + -1;
    }
    memset(puVar9,0,(long)iVar1);
    *(undefined1 *)((long)puVar9 + (long)iVar1) = 0;
  }
  (**(code **)(param_1[0x18e] + 0x18))(param_1 + 0x18e);
  uVar6 = FUN_006bd550(param_1[399],0);
  *(undefined4 *)(param_1 + 0x1a1) = uVar6;
  param_1[0x1a2] = 0;
  param_1[0x1a3] = 0;
  param_1[0x1a4] = 0;
  FUN_008789c8(param_1 + 0x14d);
  FUN_00878b70(param_1 + 0x109);
  param_1[0xc9] = &PTR_FUN_0491e248;
  FUN_00895124(param_1 + 0xc9);
  FUN_00892de8(param_1 + 0xc9);
  param_1[0x85] = &PTR_LAB_0491df20;
  FUN_00892490(param_1 + 0x85);
  FUN_00892de8(param_1 + 0x85);
  pvVar8 = (void *)param_1[0x81];
  param_1[0x45] = &PTR_FUN_0491dec8;
  if (pvVar8 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar8);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar8);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
      }
    }
    param_1[0x81] = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined1 *)((long)param_1 + 0x424) = 0;
  FUN_0088d348(param_1 + 0x45);
  param_1[0x45] = &PTR_LAB_0491dc10;
  FUN_0088d348(param_1 + 0x45);
  puVar9 = (undefined8 *)param_1[0x47];
  param_1[0x45] = puVar5 + 0x10;
  if (puVar9 != &DAT_0407ebb1) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x48) < 1) {
      iVar1 = *(int *)(param_1 + 0x48) + -1;
    }
    memset(puVar9,0,(long)iVar1);
    *(undefined1 *)((long)puVar9 + (long)iVar1) = 0;
  }
  (**(code **)(param_1[0x46] + 0x18))(param_1 + 0x46);
  uVar6 = FUN_006bd550(param_1[0x47],0);
  puVar9 = param_1 + 1;
  *puVar9 = &PTR_FUN_0491dbb8;
  *(undefined4 *)(param_1 + 0x59) = uVar6;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  if (param_1[0x3d] != 0) {
    pvVar8 = (void *)(param_1[0x3d] + -8);
    if (*(long *)puVar2 == 0) {
      free(pvVar8);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar8);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
      }
    }
    param_1[0x3d] = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  pvVar8 = (void *)param_1[0x3f];
  if (pvVar8 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar8);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar8);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
      }
    }
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
  }
  *(undefined1 *)((long)param_1 + 0x201) = 0;
  FUN_0088d348(puVar9);
  param_1[1] = &PTR_LAB_0491dc10;
  FUN_0088d348(puVar9);
  puVar9 = (undefined8 *)param_1[3];
  param_1[1] = puVar5 + 0x10;
  if (puVar9 != &DAT_0407ebb1) {
    iVar1 = 0;
    if (*(int *)(param_1 + 4) < 1) {
      iVar1 = *(int *)(param_1 + 4) + -1;
    }
    memset(puVar9,0,(long)iVar1);
    *(undefined1 *)((long)puVar9 + (long)iVar1) = 0;
  }
  (**(code **)(param_1[2] + 0x18))(param_1 + 2);
  uVar6 = FUN_006bd550(param_1[3],0);
  *(undefined4 *)(param_1 + 0x15) = uVar6;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  return;
}

