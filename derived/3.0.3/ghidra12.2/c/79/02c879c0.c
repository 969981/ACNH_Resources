
void FUN_02c879c0(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  
  puVar2 = PTR_DAT_04bb2698;
  pvVar7 = (void *)param_1[0x3838];
  if (pvVar7 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar7);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar7);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar7);
      }
    }
    param_1[0x3838] = 0;
    *(uint *)(param_1 + 0x3837) = 0;
  }
  pvVar7 = (void *)param_1[0x383a];
  if (pvVar7 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar7);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar7);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar7);
      }
    }
    param_1[0x383a] = 0;
    *(undefined4 *)(param_1 + 0x3839) = 0;
  }
  if (param_1[0x3860] != 0) {
    pvVar7 = (void *)(param_1[0x3860] + -8);
    if (*(long *)puVar2 == 0) {
      free(pvVar7);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar7);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar7);
      }
    }
    param_1[0x3860] = 0;
    *(undefined4 *)(param_1 + 0x385f) = 0;
  }
  if (param_1[0x45] != 0) {
    pvVar7 = (void *)(param_1[0x45] + -8);
    if (*(long *)puVar2 == 0) {
      free(pvVar7);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar7);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar7);
      }
    }
    param_1[0x45] = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x3837);
  if (0 < (int)uVar1) {
    uVar4 = (ulong)uVar1 & 3;
    if (uVar1 < 4) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      do {
        lVar6 = uVar5 * 4;
        uVar5 = uVar5 + 4;
        *(undefined4 *)(param_1[0x3838] + lVar6) = 0;
        *(undefined4 *)(param_1[0x3838] + lVar6 + 4) = 0;
        *(undefined4 *)(param_1[0x3838] + lVar6 + 8) = 0;
        *(undefined4 *)(param_1[0x3838] + lVar6 + 0xc) = 0;
      } while (((ulong)uVar1 & 0xfffffffc) != uVar5);
    }
    if ((uVar1 & 3) != 0) {
      lVar6 = uVar5 << 2;
      do {
        uVar4 = uVar4 - 1;
        *(undefined4 *)(param_1[0x3838] + lVar6) = 0;
        lVar6 = lVar6 + 4;
      } while (uVar4 != 0);
    }
  }
  uVar1 = *(uint *)(param_1 + 0x3839);
  if (0 < (int)uVar1) {
    uVar4 = (ulong)uVar1 & 3;
    if (uVar1 < 4) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      do {
        lVar6 = uVar5 * 4;
        uVar5 = uVar5 + 4;
        *(undefined4 *)(param_1[0x383a] + lVar6) = 0;
        *(undefined4 *)(param_1[0x383a] + lVar6 + 4) = 0;
        *(undefined4 *)(param_1[0x383a] + lVar6 + 8) = 0;
        *(undefined4 *)(param_1[0x383a] + lVar6 + 0xc) = 0;
      } while (((ulong)uVar1 & 0xfffffffc) != uVar5);
    }
    if ((uVar1 & 3) != 0) {
      lVar6 = uVar5 << 2;
      do {
        uVar4 = uVar4 - 1;
        *(undefined4 *)(param_1[0x383a] + lVar6) = 0;
        lVar6 = lVar6 + 4;
      } while (uVar4 != 0);
    }
  }
  param_1[0x3862] = (long)&PTR_LAB_04ab3940;
  FUN_031356e0(param_1 + 0x383c);
  FUN_034129e0(param_1 + 0x4b);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

