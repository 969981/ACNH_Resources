
void FUN_02b4f8d0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  void *pvVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_04bc4ac8;
  param_1[0x14b] = (long)&PTR_LAB_04aa36d8;
  *param_1 = (long)(puVar1 + 0x10);
  if (0 < (int)param_1[0x152]) {
    lVar7 = 0;
    do {
      plVar5 = *(long **)(param_1[0x153] + lVar7 * 8);
      (**(code **)*plVar5)(plVar5);
      lVar7 = lVar7 + 1;
      *plVar5 = param_1[0x154];
      param_1[0x154] = (long)plVar5;
    } while (lVar7 < (int)param_1[0x152]);
  }
  *(undefined4 *)(param_1 + 0x152) = 0;
  param_1[0x7d] = (long)&PTR_LAB_04aa3858;
  if (0 < (int)param_1[0x84]) {
    lVar7 = 0;
    do {
      plVar5 = *(long **)(param_1[0x85] + lVar7 * 8);
      (**(code **)*plVar5)(plVar5);
      lVar7 = lVar7 + 1;
      *plVar5 = param_1[0x86];
      param_1[0x86] = (long)plVar5;
    } while (lVar7 < (int)param_1[0x84]);
  }
  *(undefined4 *)(param_1 + 0x84) = 0;
  param_1[0x4b] = (long)&PTR_LAB_04aa39d8;
  if (0 < (int)param_1[0x52]) {
    lVar7 = 0;
    do {
      plVar5 = *(long **)(param_1[0x53] + lVar7 * 8);
      (**(code **)*plVar5)(plVar5);
      lVar7 = lVar7 + 1;
      *plVar5 = param_1[0x54];
      param_1[0x54] = (long)plVar5;
    } while (lVar7 < (int)param_1[0x52]);
  }
  puVar3 = PTR_DAT_04bb33a8;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x4a] = 0;
  param_1[0x45] = (long)(puVar3 + 0x10);
  param_1[0x1f] = (long)&PTR_FUN_04aa3578;
  puVar1 = PTR_DAT_04bb31d0;
  param_1[0x44] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0x33] = (long)puVar1;
  param_1[0x3e] = 0;
  param_1[0x3f] = (long)puVar1;
  param_1[0x38] = 0;
  param_1[0x39] = (long)puVar1;
  puVar2 = PTR_DAT_04bb3058;
  puVar1 = PTR_DAT_04bb2fe8 + 0x10;
  lVar7 = *(long *)PTR_DAT_04bb3058;
  param_1[0x2c] = (long)puVar1;
  uVar4 = (**(code **)(**(long **)(lVar7 + 0x330) + 0x88))(*(long **)(lVar7 + 0x330),param_1[0x32]);
  if (((uVar4 & 1) != 0) && (pvVar6 = (void *)param_1[0x32], pvVar6 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar6);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar6);
      }
    }
  }
  lVar7 = *(long *)puVar2;
  param_1[0x32] = 0;
  param_1[0x25] = (long)puVar1;
  uVar4 = (**(code **)(**(long **)(lVar7 + 0x330) + 0x88))(*(long **)(lVar7 + 0x330),param_1[0x2b]);
  if (((uVar4 & 1) != 0) && (pvVar6 = (void *)param_1[0x2b], pvVar6 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar6);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar6);
      }
    }
  }
  param_1[0x2b] = 0;
  param_1[0x19] = (long)(puVar3 + 0x10);
  param_1[0x1e] = 0;
  return;
}

