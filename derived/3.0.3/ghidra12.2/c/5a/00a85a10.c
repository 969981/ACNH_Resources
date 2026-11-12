
void FUN_00a85a10(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long *plVar6;
  ulong uVar7;
  void *pvVar8;
  undefined8 *puVar9;
  long lVar10;
  
  *param_1 = &PTR_FUN_0492ebe8;
  param_1[0xc9fe] = &PTR_LAB_04931c30;
  puVar2 = PTR_DAT_04bb62f0;
  *PTR_DAT_04bb62e8 = 1;
  *(undefined8 *)puVar2 = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
  pvVar8 = (void *)param_1[0xca18];
  *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
  puVar2 = PTR_DAT_04bb2698;
  param_1[0xca14] = 0;
  if (pvVar8 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar8);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar2,pvVar8);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar8);
      }
    }
    param_1[0xca18] = 0;
    *(undefined4 *)(param_1 + 0xca17) = 0;
  }
  pvVar8 = (void *)param_1[0xca35];
  if (pvVar8 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar8);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar2,pvVar8);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar8);
      }
    }
    param_1[0xca35] = 0;
    *(undefined4 *)(param_1 + 0xca34) = 0;
  }
  pvVar8 = (void *)param_1[0xca38];
  *(undefined4 *)(param_1 + 0xca36) = 0xffffffff;
  if (pvVar8 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar8);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar2,pvVar8);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar8);
      }
    }
    param_1[0xca38] = 0;
    *(undefined4 *)(param_1 + 0xca37) = 0;
  }
  puVar9 = (undefined8 *)param_1[0xca00];
  param_1[0xc9fe] = PTR_DAT_04bcb440 + 0x10;
  if (puVar9 != &DAT_0407ebb1) {
    iVar3 = 0;
    if (*(int *)(param_1 + 0xca01) < 1) {
      iVar3 = *(int *)(param_1 + 0xca01) + -1;
    }
    memset(puVar9,0,(long)iVar3);
    *(undefined1 *)((long)puVar9 + (long)iVar3) = 0;
  }
  (**(code **)(param_1[0xc9ff] + 0x18))(param_1 + 0xc9ff);
  uVar5 = FUN_006bd550(param_1[0xca00],0);
  *(undefined4 *)(param_1 + 0xca12) = uVar5;
  param_1[0xca13] = 0;
  param_1[0xca14] = 0;
  param_1[0xca15] = 0;
  param_1[0xc9cc] = &PTR_FUN_0492ed78;
  puVar1 = PTR_DAT_04bb3380 + 0x10;
  param_1[0xc9fd] = 0;
  param_1[0xc9f2] = puVar1;
  param_1[0xc9f7] = 0;
  param_1[0xc9f8] = puVar1;
  puVar4 = PTR_DAT_04bb3058;
  param_1[0xc9ea] = PTR_DAT_04bb3550 + 0x10;
  uVar7 = (**(code **)(**(long **)(*(long *)puVar4 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar4 + 0x330),param_1[0xc9f1]);
  if (((uVar7 & 1) != 0) && (pvVar8 = (void *)param_1[0xc9f1], pvVar8 != (void *)0x0)) {
    if (*(long *)puVar2 == 0) {
      free(pvVar8);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar2,pvVar8);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar8);
      }
    }
  }
  param_1[0xc9f1] = 0;
  param_1[0xc9e4] = &PTR_LAB_04931cd8;
  param_1[0xc9e9] = 0;
  puVar2 = PTR_DAT_04bb31d0;
  param_1[0xc98a] = &PTR_LAB_0492ec08;
  param_1[0xc9cb] = 0;
  param_1[0xc9ae] = puVar1;
  puVar2 = puVar2 + 0x10;
  param_1[0xc9ad] = 0;
  param_1[0xc9a2] = puVar1;
  param_1[0x8bd7] = &PTR_LAB_0492eee8;
  param_1[0x8bef] = &PTR_LAB_0492f058;
  param_1[0xc9c5] = 0;
  param_1[0xc9c6] = puVar2;
  param_1[0xc9bf] = 0;
  param_1[0xc9c0] = puVar2;
  param_1[0xc9b9] = 0;
  param_1[0xc9ba] = puVar2;
  param_1[0xc9b3] = 0;
  param_1[0xc9b4] = puVar2;
  param_1[0xc9a7] = 0;
  param_1[0xc9a8] = puVar1;
  if (0 < *(int *)(param_1 + 0x8bf6)) {
    lVar10 = 0;
    do {
      puVar9 = *(undefined8 **)(param_1[0x8bf7] + lVar10 * 8);
      (**(code **)*puVar9)(puVar9);
      lVar10 = lVar10 + 1;
      *puVar9 = param_1[0x8bf8];
      param_1[0x8bf8] = puVar9;
    } while (lVar10 < *(int *)(param_1 + 0x8bf6));
  }
  *(undefined4 *)(param_1 + 0x8bf6) = 0;
  param_1[0x4e24] = &PTR_LAB_0492eee8;
  param_1[0x4e3c] = &PTR_LAB_0492f058;
  if (0 < *(int *)(param_1 + 0x4e43)) {
    lVar10 = 0;
    do {
      puVar9 = *(undefined8 **)(param_1[0x4e44] + lVar10 * 8);
      (**(code **)*puVar9)(puVar9);
      lVar10 = lVar10 + 1;
      *puVar9 = param_1[0x4e45];
      param_1[0x4e45] = puVar9;
    } while (lVar10 < *(int *)(param_1 + 0x4e43));
  }
  *(undefined4 *)(param_1 + 0x4e43) = 0;
  param_1[1] = &PTR_LAB_0492f1d8;
  param_1[0x19] = &PTR_LAB_0492f348;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar10 = 0;
    do {
      puVar9 = *(undefined8 **)(param_1[0x21] + lVar10 * 8);
      (**(code **)*puVar9)(puVar9);
      lVar10 = lVar10 + 1;
      *puVar9 = param_1[0x22];
      param_1[0x22] = puVar9;
    } while (lVar10 < *(int *)(param_1 + 0x20));
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

