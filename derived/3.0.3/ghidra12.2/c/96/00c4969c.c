
void FUN_00c4969c(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  *param_1 = (long)(PTR_DAT_04bbb810 + 0x10);
  puVar1 = PTR_DAT_04bb6560;
  param_1[1] = *param_2;
  puVar1 = puVar1 + 0x10;
  lVar3 = param_2[1];
  param_1[0x18] = (long)puVar1;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[6] = (long)(param_1 + 0x18);
  puVar2 = PTR_DAT_04bb2020;
  *param_1 = (long)&PTR_FUN_04942810;
  param_1[5] = (long)(param_1 + 6);
  param_1[0x17] = (long)param_1;
  param_1[0x1d] = (long)param_1;
  param_1[0x23] = (long)param_1;
  param_1[0x24] = (long)puVar1;
  *(int *)(param_1 + 2) = (int)lVar3;
  param_1[0x29] = (long)param_1;
  param_1[0x2a] = (long)puVar1;
  puVar2 = puVar2 + 0x10;
  param_1[0x19] = (long)puVar2;
  param_1[0x1a] = (long)"OrderType";
  param_1[0x1f] = (long)puVar2;
  param_1[0x20] = (long)"ThemeIndex";
  param_1[0x1b] = (long)puVar2;
  param_1[0x1c] = (long)&DAT_0407ebb1;
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined4 *)((long)param_1 + 0x24) = 0x10;
  param_1[0x1e] = (long)puVar1;
  param_1[0x21] = (long)puVar2;
  param_1[0x22] = (long)&DAT_0407ebb1;
  param_1[0x27] = (long)puVar2;
  param_1[0x28] = (long)&DAT_0407ebb1;
  param_1[7] = (long)(param_1 + 0x1e);
  param_1[8] = (long)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 4) = 3;
  lVar3 = param_1[0x17];
  param_1[0x2f] = lVar3;
  param_1[0x25] = (long)puVar2;
  param_1[0x26] = (long)"ReformType";
  param_1[0x2b] = (long)puVar2;
  param_1[0x2c] = (long)"MovingType";
  param_1[0x2d] = (long)puVar2;
  param_1[0x2e] = (long)&DAT_0407ebb1;
  if (*(int *)(lVar3 + 0x20) < *(int *)(lVar3 + 0x24)) {
    *(long **)(*(long *)(lVar3 + 0x28) + (long)*(int *)(lVar3 + 0x20) * 8) = param_1 + 0x2a;
    *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
    lVar3 = param_1[0x17];
  }
  param_1[0x30] = (long)puVar1;
  param_1[0x31] = (long)puVar2;
  param_1[0x32] = (long)"NewType";
  param_1[0x33] = (long)puVar2;
  param_1[0x34] = (long)&DAT_0407ebb1;
  param_1[0x35] = lVar3;
  if (*(int *)(lVar3 + 0x20) < *(int *)(lVar3 + 0x24)) {
    *(long **)(*(long *)(lVar3 + 0x28) + (long)*(int *)(lVar3 + 0x20) * 8) = param_1 + 0x30;
    *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
  }
  return;
}

