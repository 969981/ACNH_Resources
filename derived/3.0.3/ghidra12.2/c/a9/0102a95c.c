
void FUN_0102a95c(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  *param_1 = (long)(PTR_DAT_04bbb810 + 0x10);
  puVar1 = PTR_DAT_04bb6570;
  param_1[1] = *param_2;
  puVar1 = puVar1 + 0x10;
  lVar3 = param_2[1];
  param_1[0x17] = (long)puVar1;
  param_1[6] = (long)(param_1 + 0x17);
  puVar2 = PTR_DAT_04bb2020;
  *param_1 = (long)&PTR_FUN_049722d8;
  param_1[5] = (long)(param_1 + 6);
  param_1[0x16] = (long)param_1;
  param_1[0x20] = (long)param_1;
  param_1[0x21] = (long)puVar1;
  param_1[0x25] = (long)param_1;
  param_1[0x26] = (long)puVar1;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = (long)param_1;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  puVar2 = puVar2 + 0x10;
  *(int *)(param_1 + 2) = (int)lVar3;
  param_1[3] = 0;
  param_1[4] = 0x1000000002;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x1c] = (long)puVar1;
  param_1[0x22] = (long)puVar2;
  param_1[0x23] = (long)"Month1";
  param_1[0x18] = (long)puVar2;
  param_1[0x19] = (long)"Month0";
  param_1[7] = (long)(param_1 + 0x1c);
  param_1[8] = (long)(param_1 + 0x21);
  *(undefined4 *)(param_1 + 4) = 3;
  lVar3 = param_1[0x16];
  param_1[0x2a] = lVar3;
  param_1[0x1d] = (long)puVar2;
  param_1[0x1e] = (long)&DAT_040b04e3;
  param_1[0x27] = (long)puVar2;
  param_1[0x28] = (long)&DAT_040eeb9b;
  if (*(int *)(lVar3 + 0x20) < *(int *)(lVar3 + 0x24)) {
    *(long **)(*(long *)(lVar3 + 0x28) + (long)*(int *)(lVar3 + 0x20) * 8) = param_1 + 0x26;
    *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
    lVar3 = param_1[0x16];
  }
  puVar1 = PTR_DAT_04bb6560;
  param_1[0x2f] = (long)&DAT_0407ebb1;
  param_1[0x30] = lVar3;
  param_1[0x2b] = (long)(puVar1 + 0x10);
  param_1[0x2c] = (long)puVar2;
  param_1[0x2d] = (long)"TimeType";
  param_1[0x2e] = (long)puVar2;
  if (*(int *)(lVar3 + 0x20) < *(int *)(lVar3 + 0x24)) {
    *(long **)(*(long *)(lVar3 + 0x28) + (long)*(int *)(lVar3 + 0x20) * 8) = param_1 + 0x2b;
    *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
  }
  return;
}

