
void FUN_009931e0(undefined8 *param_1)

{
  uint *puVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  
  pvVar5 = (void *)param_1[2];
  *param_1 = &PTR_FUN_0492b4a8;
  puVar3 = PTR_DAT_04bb2698;
  if (pvVar5 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  pvVar5 = (void *)param_1[4];
  iVar2 = *(int *)(param_1 + 3);
  if (iVar2 != 0) {
    uVar7 = 0;
    do {
      plVar4 = *(long **)((long)pvVar5 + (-(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3));
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x18))();
      }
      uVar6 = uVar7 + 1;
      uVar7 = uVar6 & 0xffffffff;
    } while (iVar2 != (int)uVar6);
    pvVar5 = (void *)param_1[4];
  }
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar3 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  if ((long *)param_1[5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[5] + 8))();
    param_1[5] = 0;
  }
  pvVar5 = (void *)param_1[7];
  iVar2 = *(int *)(param_1 + 6);
  if (iVar2 != 0) {
    uVar7 = 0;
    do {
      plVar4 = *(long **)((long)pvVar5 + (-(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3));
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      uVar6 = uVar7 + 1;
      uVar7 = uVar6 & 0xffffffff;
    } while (iVar2 != (int)uVar6);
    pvVar5 = (void *)param_1[7];
  }
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar3 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    param_1[7] = 0;
    *(undefined4 *)(param_1 + 6) = 0;
  }
  pvVar5 = (void *)param_1[9];
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != 0) {
    uVar7 = 0;
    do {
      plVar4 = *(long **)((long)pvVar5 + (-(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3));
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      uVar6 = uVar7 + 1;
      uVar7 = uVar6 & 0xffffffff;
    } while (iVar2 != (int)uVar6);
    pvVar5 = (void *)param_1[9];
  }
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar3 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    param_1[9] = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  uVar7 = (ulong)*(uint *)(param_1 + 0x27);
  puVar1 = (uint *)(param_1 + 0x27);
  if (0 < (int)*(uint *)(param_1 + 0x27)) {
    uVar6 = 0;
    do {
      if ((uVar6 < uVar7) && (plVar4 = *(long **)(param_1[0x28] + uVar6 * 8), plVar4 != (long *)0x0)
         ) {
        (**(code **)(*plVar4 + 8))();
        uVar7 = (ulong)*puVar1;
      }
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)(int)uVar7);
  }
  pvVar5 = (void *)param_1[0x28];
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar3 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    puVar1[0] = 0;
    puVar1[1] = 0;
    param_1[0x28] = 0;
  }
  return;
}

