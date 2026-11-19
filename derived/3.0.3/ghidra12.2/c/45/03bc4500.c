
void FUN_03bc4500(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  void *pvVar9;
  undefined4 *__ptr;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    return;
  }
  lVar6 = 0;
  if (*(long *)PTR_DAT_04bc3ee8 != 0) {
    lVar6 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x38);
  }
  plVar4 = (long *)(*(int *)(lVar6 + 0x34) + param_1);
  lVar2 = *plVar4;
  plVar7 = (long *)plVar4[1];
  if (plVar7 != (long *)0x0 || lVar2 != 0) {
    if (lVar2 != 0) {
      *(long **)(lVar2 + 8) = plVar7;
      plVar7 = (long *)plVar4[1];
    }
    if (plVar7 != (long *)0x0) {
      *plVar7 = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar6 + 0x30) = *(int *)(lVar6 + 0x30) + -1;
  }
  FUN_03bc4ba0(param_1);
  uVar5 = *(uint *)(param_1 + 0x80);
  if (0 < (int)uVar5) {
    uVar8 = 0;
    do {
      uVar1 = uVar8;
      if (uVar5 <= uVar8) {
        uVar1 = 0;
      }
      FUN_03bc6240(*(long *)(param_1 + 0x88) + (ulong)uVar1 * 0x28);
      uVar5 = *(uint *)(param_1 + 0x80);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)uVar5);
  }
  puVar3 = PTR_DAT_04bb2698;
  if (*(long *)(param_1 + 0x88) != 0) {
    pvVar9 = (void *)(*(long *)(param_1 + 0x88) + -8);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar9);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar9);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar9);
      }
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    pvVar9 = (void *)(*(long *)(param_1 + 0xd0) + -8);
    if (*(long *)puVar3 == 0) {
      free(pvVar9);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar9);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar9);
      }
    }
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  __ptr = *(undefined4 **)(param_1 + 0x1c0);
  if (__ptr == (undefined4 *)0x0) goto LAB_03bc46c8;
  pvVar9 = *(void **)(__ptr + 2);
  if (pvVar9 == (void *)0x0) {
LAB_03bc4694:
    if (*(long *)puVar3 == 0) {
      free(__ptr);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,__ptr);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
      }
    }
  }
  else {
    if (*(long *)puVar3 == 0) {
      free(pvVar9);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar9);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar9);
      }
    }
    *(undefined8 *)(__ptr + 2) = 0;
    *__ptr = 0;
    __ptr = *(undefined4 **)(param_1 + 0x1c0);
    if (__ptr != (undefined4 *)0x0) goto LAB_03bc4694;
  }
  *(undefined8 *)(param_1 + 0x1c0) = 0;
LAB_03bc46c8:
  *(undefined1 *)(param_1 + 0x78) = 0;
  return;
}

