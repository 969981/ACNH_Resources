
void FUN_00e0fac0(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  *param_1 = (long)(PTR_DAT_04bbb810 + 0x10);
  param_1[1] = *param_2;
  lVar3 = param_2[1];
  param_1[3] = 0;
  puVar1 = PTR_DAT_04bb6560;
  *(undefined4 *)(param_1 + 0x16) = 0;
  puVar1 = puVar1 + 0x10;
  *(undefined2 *)((long)param_1 + 0xb4) = 1;
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  param_1[0x19] = (long)puVar1;
  puVar2 = PTR_DAT_04bb6570;
  *param_1 = (long)&PTR_LAB_0495b730;
  param_1[0x18] = (long)param_1;
  param_1[0x1f] = (long)(puVar2 + 0x10);
  *(int *)(param_1 + 2) = (int)lVar3;
  param_1[6] = (long)(param_1 + 0x19);
  param_1[0x1e] = (long)param_1;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[5] = (long)(param_1 + 6);
  param_1[0x23] = (long)param_1;
  param_1[0x24] = (long)puVar1;
  param_1[0x29] = (long)param_1;
  param_1[0x2a] = (long)puVar1;
  param_1[0x20] = (long)&PTR_LAB_048f9770;
  param_1[0x21] = (long)"ItemUniqueID";
  param_1[0x1a] = (long)&PTR_LAB_048f9770;
  param_1[0x1b] = (long)"FilterType";
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined4 *)((long)param_1 + 0x24) = 0x10;
  param_1[0x1c] = (long)&PTR_LAB_048f9770;
  param_1[0x1d] = (long)&DAT_0407ebb1;
  param_1[0x27] = (long)&PTR_LAB_048f9770;
  param_1[0x28] = (long)&DAT_0407ebb1;
  param_1[0x2d] = (long)&PTR_LAB_048f9770;
  param_1[0x2e] = (long)&DAT_0407ebb1;
  param_1[7] = (long)(param_1 + 0x1f);
  param_1[8] = (long)(param_1 + 0x24);
  param_1[0x25] = (long)&PTR_LAB_048f9770;
  param_1[0x26] = (long)"ItemKindType";
  *(undefined4 *)(param_1 + 4) = 3;
  lVar3 = param_1[0x18];
  param_1[0x2f] = lVar3;
  param_1[0x2b] = (long)&PTR_LAB_048f9770;
  param_1[0x2c] = (long)"ItemFilterType";
  if (*(int *)(lVar3 + 0x20) < *(int *)(lVar3 + 0x24)) {
    *(long **)(*(long *)(lVar3 + 0x28) + (long)*(int *)(lVar3 + 0x20) * 8) = param_1 + 0x2a;
    *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
    lVar3 = param_1[0x18];
  }
  param_1[0x30] = (long)puVar1;
  param_1[0x31] = (long)&PTR_LAB_048f9770;
  param_1[0x32] = (long)&DAT_040f4153;
  param_1[0x33] = (long)&PTR_LAB_048f9770;
  param_1[0x34] = (long)&DAT_0407ebb1;
  param_1[0x35] = lVar3;
  if (*(int *)(lVar3 + 0x20) < *(int *)(lVar3 + 0x24)) {
    *(long **)(*(long *)(lVar3 + 0x28) + (long)*(int *)(lVar3 + 0x20) * 8) = param_1 + 0x30;
    *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
    lVar3 = param_1[0x18];
  }
  puVar1 = PTR_DAT_04bb6568;
  *(undefined1 *)(param_1 + 0x39) = 0;
  param_1[0x3a] = lVar3;
  param_1[0x36] = (long)(puVar1 + 0x10);
  param_1[0x37] = (long)&PTR_LAB_048f9770;
  param_1[0x38] = (long)"IsSingleSelect";
  if (*(int *)(lVar3 + 0x20) < *(int *)(lVar3 + 0x24)) {
    *(long **)(*(long *)(lVar3 + 0x28) + (long)*(int *)(lVar3 + 0x20) * 8) = param_1 + 0x36;
    *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
  }
  return;
}

