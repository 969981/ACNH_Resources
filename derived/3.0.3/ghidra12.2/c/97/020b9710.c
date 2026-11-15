
void FUN_020b9710(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *pvVar9;
  long lVar10;
  undefined8 *puVar11;
  
  *param_1 = &PTR_FUN_04a71f10;
  FUN_020bc6d0(param_1 + 0x30a9);
  FUN_020baad0(param_1 + 0x2ec2);
  param_1[0x2e78] = &PTR_FUN_04a72d30;
  *PTR_DAT_04bbaaa0 = 1;
  puVar1 = PTR_DAT_04bbaaa8;
  *(undefined8 *)PTR_DAT_04bbaaa8 = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x18) = 0xffffffffffffffff;
  param_1[0x2e8e] = 0;
  puVar1 = PTR_DAT_04bb2698;
  pvVar9 = (void *)param_1[0x2e92];
  if (pvVar9 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar9);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar9);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar9);
      }
    }
    param_1[0x2e92] = 0;
    *(undefined4 *)(param_1 + 0x2e91) = 0;
  }
  pvVar9 = (void *)param_1[0x2eaf];
  if (pvVar9 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar9);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar1,pvVar9);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar9);
      }
    }
    param_1[0x2eaf] = 0;
    *(undefined4 *)(param_1 + 0x2eae) = 0;
  }
  pvVar9 = (void *)param_1[0x2eb2];
  *(undefined4 *)(param_1 + 0x2eb0) = 0xffffffff;
  if (pvVar9 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar9);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar1,pvVar9);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar9);
      }
    }
    param_1[0x2eb2] = 0;
    *(undefined4 *)(param_1 + 0x2eb1) = 0;
  }
  puVar4 = PTR_DAT_04bcb440;
  puVar11 = (undefined8 *)param_1[0x2e7a];
  param_1[0x2e78] = PTR_DAT_04bcb440 + 0x10;
  if (puVar11 != &DAT_0407ebb1) {
    iVar2 = 0;
    if (*(int *)(param_1 + 0x2e7b) < 1) {
      iVar2 = *(int *)(param_1 + 0x2e7b) + -1;
    }
    memset(puVar11,0,(long)iVar2);
    *(undefined1 *)((long)puVar11 + (long)iVar2) = 0;
  }
  (**(code **)(param_1[0x2e79] + 0x18))(param_1 + 0x2e79);
  uVar5 = FUN_006bd550(param_1[0x2e7a],0);
  *(undefined4 *)(param_1 + 0x2e8c) = uVar5;
  param_1[0x2e8f] = 0;
  param_1[0x2e8d] = 0;
  param_1[0x2e8e] = 0;
  puVar3 = PTR_DAT_04bbaad8;
  param_1[0x2e3d] = &PTR_FUN_04a72c88;
  *puVar3 = 1;
  puVar3 = PTR_DAT_04bbaae0;
  *(undefined8 *)PTR_DAT_04bbaae0 = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
  param_1[0x2e53] = 0;
  pvVar9 = (void *)param_1[0x2e57];
  if (pvVar9 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar9);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar1,pvVar9);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar9);
      }
    }
    param_1[0x2e57] = 0;
    *(undefined4 *)(param_1 + 0x2e56) = 0;
  }
  pvVar9 = (void *)param_1[0x2e74];
  if (pvVar9 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar9);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar1,pvVar9);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar9);
      }
    }
    param_1[0x2e74] = 0;
    *(undefined4 *)(param_1 + 0x2e73) = 0;
  }
  pvVar9 = (void *)param_1[0x2e77];
  *(undefined4 *)(param_1 + 0x2e75) = 0xffffffff;
  if (pvVar9 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar9);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar1,pvVar9);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar9);
      }
    }
    param_1[0x2e77] = 0;
    *(undefined4 *)(param_1 + 0x2e76) = 0;
  }
  puVar11 = (undefined8 *)param_1[0x2e3f];
  param_1[0x2e3d] = puVar4 + 0x10;
  if (puVar11 != &DAT_0407ebb1) {
    iVar2 = 0;
    if (*(int *)(param_1 + 0x2e40) < 1) {
      iVar2 = *(int *)(param_1 + 0x2e40) + -1;
    }
    memset(puVar11,0,(long)iVar2);
    *(undefined1 *)((long)puVar11 + (long)iVar2) = 0;
  }
  (**(code **)(param_1[0x2e3e] + 0x18))(param_1 + 0x2e3e);
  uVar5 = FUN_006bd550(param_1[0x2e3f],0);
  *(undefined4 *)(param_1 + 0x2e51) = uVar5;
  puVar3 = PTR_DAT_04bbc540;
  param_1[0x2dd2] = &PTR_FUN_04a73350;
  *puVar3 = 1;
  param_1[0x2e52] = 0;
  param_1[0x2e53] = 0;
  puVar3 = PTR_DAT_04bbc548;
  param_1[0x2e54] = 0;
  *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)puVar3 = 0xffffffffffffffff;
  param_1[0x2de8] = 0;
  pvVar9 = (void *)param_1[0x2dec];
  if (pvVar9 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar9);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar1,pvVar9);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar9);
      }
    }
    param_1[0x2dec] = 0;
    *(undefined4 *)(param_1 + 0x2deb) = 0;
  }
  pvVar9 = (void *)param_1[0x2e09];
  if (pvVar9 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar9);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar1,pvVar9);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar9);
      }
    }
    param_1[0x2e09] = 0;
    *(undefined4 *)(param_1 + 0x2e08) = 0;
  }
  pvVar9 = (void *)param_1[0x2e0c];
  *(undefined4 *)(param_1 + 0x2e0a) = 0xffffffff;
  if (pvVar9 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar9);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar1,pvVar9);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar9);
      }
    }
    param_1[0x2e0c] = 0;
    *(undefined4 *)(param_1 + 0x2e0b) = 0;
  }
  puVar11 = (undefined8 *)param_1[0x2dd4];
  param_1[0x2dd2] = puVar4 + 0x10;
  if (puVar11 != &DAT_0407ebb1) {
    iVar2 = 0;
    if (*(int *)(param_1 + 0x2dd5) < 1) {
      iVar2 = *(int *)(param_1 + 0x2dd5) + -1;
    }
    memset(puVar11,0,(long)iVar2);
    *(undefined1 *)((long)puVar11 + (long)iVar2) = 0;
  }
  (**(code **)(param_1[0x2dd3] + 0x18))(param_1 + 0x2dd3);
  uVar5 = FUN_006bd550(param_1[0x2dd4],0);
  *(undefined4 *)(param_1 + 0x2de6) = uVar5;
  plVar6 = param_1 + 0x2d97;
  *plVar6 = (long)&PTR_FUN_04a72be0;
  param_1[0x2de7] = 0;
  param_1[0x2de8] = 0;
  param_1[0x2de9] = 0;
  FUN_020c25f0(plVar6);
  *plVar6 = (long)(puVar4 + 0x10);
  puVar11 = (undefined8 *)param_1[0x2d99];
  if (puVar11 != &DAT_0407ebb1) {
    iVar2 = 0;
    if (*(int *)(param_1 + 0x2d9a) < 1) {
      iVar2 = *(int *)(param_1 + 0x2d9a) + -1;
    }
    memset(puVar11,0,(long)iVar2);
    *(undefined1 *)((long)puVar11 + (long)iVar2) = 0;
  }
  (**(code **)(param_1[0x2d98] + 0x18))(param_1 + 0x2d98);
  uVar5 = FUN_006bd550(param_1[0x2d99],0);
  *(undefined4 *)(param_1 + 0x2dab) = uVar5;
  param_1[0x2dae] = 0;
  param_1[0x2dac] = 0;
  param_1[0x2dad] = 0;
  puVar1 = PTR_DAT_04bc1570;
  param_1[0x2d5c] = &PTR_FUN_04a72b38;
  *puVar1 = 1;
  puVar1 = PTR_DAT_04bc1578;
  *(undefined4 *)(PTR_DAT_04bc1578 + 0x68) = 0xffffffff;
  *(undefined8 *)(puVar1 + 0x58) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x60) = 0xffffffffffffffff;
  *(undefined8 *)puVar1 = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x48) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x50) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x38) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x40) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x28) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x10) = 0xffffffffffffffff;
  pvVar9 = (void *)param_1[0x2d76];
  param_1[0x2d72] = 0;
  puVar1 = PTR_DAT_04bb2698;
  if (pvVar9 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar9);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar9);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar9);
      }
    }
    param_1[0x2d76] = 0;
    *(undefined4 *)(param_1 + 0x2d75) = 0;
  }
  pvVar9 = (void *)param_1[0x2d93];
  if (pvVar9 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar9);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar1,pvVar9);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar9);
      }
    }
    param_1[0x2d93] = 0;
    *(undefined4 *)(param_1 + 0x2d92) = 0;
  }
  pvVar9 = (void *)param_1[0x2d96];
  *(undefined4 *)(param_1 + 0x2d94) = 0xffffffff;
  if (pvVar9 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar9);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar1,pvVar9);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar9);
      }
    }
    param_1[0x2d96] = 0;
    *(undefined4 *)(param_1 + 0x2d95) = 0;
  }
  puVar11 = (undefined8 *)param_1[0x2d5e];
  param_1[0x2d5c] = puVar4 + 0x10;
  if (puVar11 != &DAT_0407ebb1) {
    iVar2 = 0;
    if (*(int *)(param_1 + 0x2d5f) < 1) {
      iVar2 = *(int *)(param_1 + 0x2d5f) + -1;
    }
    memset(puVar11,0,(long)iVar2);
    *(undefined1 *)((long)puVar11 + (long)iVar2) = 0;
  }
  (**(code **)(param_1[0x2d5d] + 0x18))(param_1 + 0x2d5d);
  uVar5 = FUN_006bd550(param_1[0x2d5e],0);
  *(undefined4 *)(param_1 + 0x2d70) = uVar5;
  param_1[0x2d21] = &PTR_FUN_04a72a90;
  *PTR_DAT_04bc1560 = 1;
  puVar3 = PTR_DAT_04bc1568;
  param_1[0x2d71] = 0;
  param_1[0x2d72] = 0;
  param_1[0x2d73] = 0;
  *(undefined8 *)(puVar3 + 0x90) = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 0x98) = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 0x80) = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 0x88) = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 0x70) = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 0x78) = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 0x60) = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 0x68) = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)puVar3 = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
  pvVar9 = (void *)param_1[0x2d3b];
  param_1[0x2d37] = 0;
  if (pvVar9 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar9);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar1,pvVar9);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar9);
      }
    }
    param_1[0x2d3b] = 0;
    *(undefined4 *)(param_1 + 0x2d3a) = 0;
  }
  pvVar9 = (void *)param_1[0x2d58];
  if (pvVar9 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar9);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar1,pvVar9);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar9);
      }
    }
    param_1[0x2d58] = 0;
    *(undefined4 *)(param_1 + 0x2d57) = 0;
  }
  pvVar9 = (void *)param_1[0x2d5b];
  *(undefined4 *)(param_1 + 0x2d59) = 0xffffffff;
  if (pvVar9 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar9);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar1,pvVar9);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar9);
      }
    }
    param_1[0x2d5b] = 0;
    *(undefined4 *)(param_1 + 0x2d5a) = 0;
  }
  puVar11 = (undefined8 *)param_1[0x2d23];
  param_1[0x2d21] = puVar4 + 0x10;
  if (puVar11 != &DAT_0407ebb1) {
    iVar2 = 0;
    if (*(int *)(param_1 + 0x2d24) < 1) {
      iVar2 = *(int *)(param_1 + 0x2d24) + -1;
    }
    memset(puVar11,0,(long)iVar2);
    *(undefined1 *)((long)puVar11 + (long)iVar2) = 0;
  }
  (**(code **)(param_1[0x2d22] + 0x18))(param_1 + 0x2d22);
  uVar5 = FUN_006bd550(param_1[0x2d23],0);
  *(undefined4 *)(param_1 + 0x2d35) = uVar5;
  param_1[0x2d36] = 0;
  param_1[0x2d37] = 0;
  param_1[0x2d38] = 0;
  puVar3 = PTR_DAT_04bc25e8;
  param_1[0x2ce6] = PTR_DAT_04bc25d0 + 0x10;
  *puVar3 = 1;
  puVar3 = PTR_DAT_04bc25f0;
  *(undefined8 *)PTR_DAT_04bc25f0 = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
  param_1[0x2cfc] = 0;
  pvVar9 = (void *)param_1[0x2d00];
  if (pvVar9 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar9);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar1,pvVar9);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar9);
      }
    }
    param_1[0x2d00] = 0;
    *(undefined4 *)(param_1 + 0x2cff) = 0;
  }
  pvVar9 = (void *)param_1[0x2d1d];
  if (pvVar9 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar9);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar1,pvVar9);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar9);
      }
    }
    param_1[0x2d1d] = 0;
    *(undefined4 *)(param_1 + 0x2d1c) = 0;
  }
  pvVar9 = (void *)param_1[0x2d20];
  *(undefined4 *)(param_1 + 0x2d1e) = 0xffffffff;
  if (pvVar9 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar9);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar1,pvVar9);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar9);
      }
    }
    param_1[0x2d20] = 0;
    *(undefined4 *)(param_1 + 0x2d1f) = 0;
  }
  puVar11 = (undefined8 *)param_1[0x2ce8];
  param_1[0x2ce6] = puVar4 + 0x10;
  if (puVar11 != &DAT_0407ebb1) {
    iVar2 = 0;
    if (*(int *)(param_1 + 0x2ce9) < 1) {
      iVar2 = *(int *)(param_1 + 0x2ce9) + -1;
    }
    memset(puVar11,0,(long)iVar2);
    *(undefined1 *)((long)puVar11 + (long)iVar2) = 0;
  }
  (**(code **)(param_1[0x2ce7] + 0x18))(param_1 + 0x2ce7);
  uVar5 = FUN_006bd550(param_1[0x2ce8],0);
  *(undefined4 *)(param_1 + 0x2cfa) = uVar5;
  puVar3 = PTR_DAT_04bc2630;
  param_1[0x2cab] = PTR_DAT_04bc2618 + 0x10;
  *puVar3 = 1;
  param_1[0x2cfb] = 0;
  param_1[0x2cfc] = 0;
  puVar3 = PTR_DAT_04bc2638;
  param_1[0x2cfd] = 0;
  *(undefined4 *)(puVar3 + 0x28) = 0xffffffff;
  *(undefined8 *)puVar3 = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
  param_1[0x2cc1] = 0;
  pvVar9 = (void *)param_1[0x2cc5];
  if (pvVar9 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar9);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar1,pvVar9);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar9);
      }
    }
    param_1[0x2cc5] = 0;
    *(undefined4 *)(param_1 + 0x2cc4) = 0;
  }
  pvVar9 = (void *)param_1[0x2ce2];
  if (pvVar9 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar9);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar1,pvVar9);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar9);
      }
    }
    param_1[0x2ce2] = 0;
    *(undefined4 *)(param_1 + 0x2ce1) = 0;
  }
  pvVar9 = (void *)param_1[0x2ce5];
  *(undefined4 *)(param_1 + 0x2ce3) = 0xffffffff;
  if (pvVar9 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar9);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar1,pvVar9);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar9);
      }
    }
    param_1[0x2ce5] = 0;
    *(undefined4 *)(param_1 + 0x2ce4) = 0;
  }
  puVar11 = (undefined8 *)param_1[0x2cad];
  param_1[0x2cab] = puVar4 + 0x10;
  if (puVar11 != &DAT_0407ebb1) {
    iVar2 = 0;
    if (*(int *)(param_1 + 0x2cae) < 1) {
      iVar2 = *(int *)(param_1 + 0x2cae) + -1;
    }
    memset(puVar11,0,(long)iVar2);
    *(undefined1 *)((long)puVar11 + (long)iVar2) = 0;
  }
  (**(code **)(param_1[0x2cac] + 0x18))(param_1 + 0x2cac);
  uVar5 = FUN_006bd550(param_1[0x2cad],0);
  *(undefined4 *)(param_1 + 0x2cbf) = uVar5;
  param_1[0x2cc0] = 0;
  param_1[0x2cc1] = 0;
  param_1[0x2cc2] = 0;
  if (0 < *(int *)(param_1 + 0x9cc)) {
    lVar10 = 0;
    do {
      (**(code **)**(undefined8 **)(param_1[0x9cd] + lVar10 * 8))();
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_1 + 0x9cc));
  }
  puVar11 = (undefined8 *)param_1[0x5ea];
  while (puVar11 != param_1 + 0x5e9) {
    puVar7 = puVar11 + -0x1c;
    puVar11 = (undefined8 *)puVar11[1];
    puVar8 = puVar7;
    do {
      puVar8 = (undefined8 *)puVar8[1];
    } while (puVar8 != puVar7);
  }
  puVar11 = param_1 + 0x5cb;
  do {
    puVar11 = (undefined8 *)puVar11[1];
  } while (puVar11 != param_1 + 0x5cb);
  puVar1 = PTR_DAT_04bbc1a0 + 0x10;
  param_1[0x5c6] = puVar1;
  param_1[0x5c1] = puVar1;
  FUN_020ba4b8(param_1 + 0x267);
  param_1[0x1b4] = PTR_DAT_04bc1580 + 0x10;
  puVar11 = param_1 + 0x23b;
  do {
    puVar11 = (undefined8 *)puVar11[1];
  } while (puVar11 != param_1 + 0x23b);
  (**(code **)(*(long *)param_1[0x16f] + 0x20))();
  param_1[0x16f] = 0;
  return;
}

