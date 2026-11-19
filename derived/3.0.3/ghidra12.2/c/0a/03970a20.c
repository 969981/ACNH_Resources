
void FUN_03970a20(undefined8 *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  long lVar9;
  ulong uVar10;
  
  iVar4 = *(int *)(param_1 + 4);
  *param_1 = &PTR_FUN_04b68510;
  if (iVar4 != 0) {
    lVar9 = param_1[5];
    uVar10 = 0;
    do {
      plVar5 = *(long **)(lVar9 + (-(uVar10 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3));
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
        *(undefined8 *)(lVar9 + (long)(int)uVar10 * 8) = 0;
      }
      uVar2 = uVar10 + 1;
      uVar10 = uVar2 & 0xffffffff;
    } while (iVar4 != (int)uVar2);
  }
  *(undefined4 *)((long)param_1 + 0x21c) = 5;
  uVar6 = *(uint *)(param_1 + 0x47);
  if (0 < (int)uVar6) {
    uVar7 = 0;
    do {
      uVar1 = uVar7 + 1;
      if (uVar6 <= uVar7) {
        uVar7 = 0;
      }
      *(undefined4 *)(param_1[0x48] + (long)(int)uVar7 * 4) = 0;
      uVar6 = *(uint *)(param_1 + 0x47);
      uVar7 = uVar1;
    } while ((int)uVar1 < (int)uVar6);
  }
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)((long)param_1 + 0x2e4) = 5;
  uVar6 = *(uint *)(param_1 + 0x60);
  if (0 < (int)uVar6) {
    uVar7 = 0;
    do {
      uVar1 = uVar7 + 1;
      if (uVar6 <= uVar7) {
        uVar7 = 0;
      }
      *(undefined4 *)(param_1[0x61] + (long)(int)uVar7 * 4) = 0;
      uVar6 = *(uint *)(param_1 + 0x60);
      uVar7 = uVar1;
    } while ((int)uVar1 < (int)uVar6);
  }
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  *(undefined4 *)((long)param_1 + 0x3ac) = 5;
  uVar6 = *(uint *)(param_1 + 0x79);
  if (0 < (int)uVar6) {
    uVar7 = 0;
    do {
      uVar1 = uVar7 + 1;
      if (uVar6 <= uVar7) {
        uVar7 = 0;
      }
      *(undefined4 *)(param_1[0x7a] + (long)(int)uVar7 * 4) = 0;
      uVar6 = *(uint *)(param_1 + 0x79);
      uVar7 = uVar1;
    } while ((int)uVar1 < (int)uVar6);
  }
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  *(undefined4 *)((long)param_1 + 0x474) = 5;
  uVar6 = *(uint *)(param_1 + 0x92);
  if (0 < (int)uVar6) {
    uVar7 = 0;
    do {
      uVar1 = uVar7 + 1;
      if (uVar6 <= uVar7) {
        uVar7 = 0;
      }
      *(undefined4 *)(param_1[0x93] + (long)(int)uVar7 * 4) = 0;
      uVar6 = *(uint *)(param_1 + 0x92);
      uVar7 = uVar1;
    } while ((int)uVar1 < (int)uVar6);
  }
  param_1[0x98] = 0;
  pvVar8 = (void *)param_1[5];
  *(undefined4 *)(param_1 + 0x83) = 0;
  puVar3 = PTR_DAT_04bb2698;
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
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (param_1[7] != 0) {
    pvVar8 = (void *)(param_1[7] + -8);
    if (*(long *)puVar3 == 0) {
      free(pvVar8);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar8);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar8);
      }
    }
    param_1[7] = 0;
    *(undefined4 *)(param_1 + 6) = 0;
  }
  if (param_1[9] != 0) {
    pvVar8 = (void *)(param_1[9] + -8);
    if (*(long *)puVar3 == 0) {
      free(pvVar8);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar8);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar8);
      }
    }
    param_1[9] = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (param_1[0xb] != 0) {
    pvVar8 = (void *)(param_1[0xb] + -8);
    if (*(long *)puVar3 == 0) {
      free(pvVar8);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar8);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar8);
      }
    }
    param_1[0xb] = 0;
    *(undefined4 *)(param_1 + 10) = 0;
  }
  pvVar8 = (void *)param_1[3];
  iVar4 = *(int *)(param_1 + 2);
  if (iVar4 != 0) {
    uVar10 = 0;
    do {
      plVar5 = *(long **)((long)pvVar8 + (-(uVar10 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3));
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      uVar2 = uVar10 + 1;
      uVar10 = uVar2 & 0xffffffff;
    } while (iVar4 != (int)uVar2);
    pvVar8 = (void *)param_1[3];
  }
  if (pvVar8 != (void *)0x0) {
    if (*(long *)puVar3 == 0) {
      free(pvVar8);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar8);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar8);
      }
    }
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  FUN_038e1a84(param_1 + 0x9b);
  puVar3 = PTR_DAT_04bb34f8 + 0x10;
  param_1[0x80] = puVar3;
  FUN_038e1c80(param_1 + 0x85);
  param_1[0x67] = puVar3;
  FUN_038e1c80(param_1 + 0x6c);
  param_1[0x4e] = puVar3;
  FUN_038e1c80(param_1 + 0x53);
  param_1[0x35] = puVar3;
  FUN_038e1c80(param_1 + 0x3a);
  FUN_0396ef30(param_1 + 0xc);
  return;
}

