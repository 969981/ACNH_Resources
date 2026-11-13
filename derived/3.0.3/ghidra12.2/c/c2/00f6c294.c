
void FUN_00f6c294(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  *param_1 = (long)(PTR_DAT_04bbb810 + 0x10);
  param_1[1] = *param_2;
  lVar3 = param_2[1];
  param_1[0x17] = (long)&PTR_LAB_04933bc8;
  puVar2 = PTR_DAT_04bb2020;
  *param_1 = (long)&PTR_LAB_0496b3a0;
  param_1[0x16] = (long)param_1;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = (long)param_1;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = (long)param_1;
  param_1[0x21] = (long)&PTR_LAB_04933bc8;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x25] = (long)param_1;
  param_1[0x26] = (long)&PTR_LAB_04933bc8;
  *(undefined4 *)(param_1 + 0x29) = 0;
  puVar1 = puVar2 + 0x10;
  *(int *)(param_1 + 2) = (int)lVar3;
  param_1[0x18] = (long)puVar1;
  param_1[0x19] = (long)"ItemUniqueID1";
  param_1[6] = (long)(param_1 + 0x17);
  param_1[5] = (long)(param_1 + 6);
  param_1[0x1d] = (long)puVar1;
  param_1[0x1e] = (long)"ItemUniqueID2";
  param_1[0x1c] = (long)&PTR_LAB_04933bc8;
  param_1[7] = (long)(param_1 + 0x1c);
  param_1[8] = (long)(param_1 + 0x21);
  param_1[3] = 0;
  param_1[4] = 0x1000000002;
  *(undefined4 *)(param_1 + 4) = 3;
  lVar3 = param_1[0x16];
  param_1[0x2a] = lVar3;
  param_1[0x22] = (long)puVar1;
  param_1[0x23] = (long)"ItemUniqueID3";
  param_1[0x27] = (long)puVar1;
  param_1[0x28] = (long)"ItemUniqueID4";
  if (*(int *)(lVar3 + 0x20) < *(int *)(lVar3 + 0x24)) {
    *(long **)(*(long *)(lVar3 + 0x28) + (long)*(int *)(lVar3 + 0x20) * 8) = param_1 + 0x26;
    *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
    lVar3 = param_1[0x16];
  }
  param_1[0x2b] = (long)&PTR_LAB_04933bc8;
  param_1[0x2c] = (long)puVar1;
  param_1[0x2d] = (long)"ItemUniqueID5";
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = lVar3;
  if (*(int *)(lVar3 + 0x20) < *(int *)(lVar3 + 0x24)) {
    *(long **)(*(long *)(lVar3 + 0x28) + (long)*(int *)(lVar3 + 0x20) * 8) = param_1 + 0x2b;
    *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
    lVar3 = param_1[0x16];
  }
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x30] = (long)&PTR_LAB_04933bc8;
  param_1[0x31] = (long)(puVar2 + 0x10);
  param_1[0x32] = (long)"SetNum";
  param_1[0x34] = lVar3;
  if (*(int *)(lVar3 + 0x20) < *(int *)(lVar3 + 0x24)) {
    *(long **)(*(long *)(lVar3 + 0x28) + (long)*(int *)(lVar3 + 0x20) * 8) = param_1 + 0x30;
    *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
  }
  return;
}

