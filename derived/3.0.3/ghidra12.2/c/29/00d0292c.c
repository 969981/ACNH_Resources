
void FUN_00d0292c(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  *param_1 = (long)(PTR_DAT_04bbb810 + 0x10);
  puVar1 = PTR_DAT_04bb6568;
  param_1[1] = *param_2;
  puVar1 = puVar1 + 0x10;
  lVar3 = param_2[1];
  param_1[0x18] = (long)puVar1;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *param_1 = (long)&PTR_LAB_0494b0b0;
  param_1[0x17] = (long)param_1;
  puVar2 = PTR_DAT_04bb2020;
  param_1[0x21] = (long)param_1;
  param_1[0x22] = (long)puVar1;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x26] = (long)param_1;
  param_1[0x27] = (long)puVar1;
  param_1[0x1c] = (long)param_1;
  *(undefined1 *)(param_1 + 0x20) = 0;
  puVar2 = puVar2 + 0x10;
  *(int *)(param_1 + 2) = (int)lVar3;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  param_1[0x19] = (long)puVar2;
  param_1[0x1a] = (long)"Player";
  param_1[0x23] = (long)puVar2;
  param_1[0x24] = (long)"Customer";
  param_1[6] = (long)(param_1 + 0x18);
  param_1[5] = (long)(param_1 + 6);
  param_1[0x1e] = (long)puVar2;
  param_1[0x1f] = (long)"MncOtg";
  param_1[0x1d] = (long)puVar1;
  param_1[7] = (long)(param_1 + 0x1d);
  param_1[8] = (long)(param_1 + 0x22);
  *(undefined4 *)(param_1 + 4) = 3;
  *(undefined4 *)((long)param_1 + 0x24) = 0x10;
  lVar3 = param_1[0x17];
  param_1[0x2b] = lVar3;
  param_1[0x28] = (long)puVar2;
  param_1[0x29] = (long)"Housemate";
  if (*(int *)(lVar3 + 0x20) < *(int *)(lVar3 + 0x24)) {
    *(long **)(*(long *)(lVar3 + 0x28) + (long)*(int *)(lVar3 + 0x20) * 8) = param_1 + 0x27;
    *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
    lVar3 = param_1[0x17];
  }
  puVar1 = PTR_DAT_04bb6560;
  param_1[0x30] = (long)&DAT_0407ebb1;
  param_1[0x31] = lVar3;
  param_1[0x2c] = (long)(puVar1 + 0x10);
  param_1[0x2d] = (long)puVar2;
  param_1[0x2e] = (long)"SafePostionType";
  param_1[0x2f] = (long)puVar2;
  if (*(int *)(lVar3 + 0x20) < *(int *)(lVar3 + 0x24)) {
    *(long **)(*(long *)(lVar3 + 0x28) + (long)*(int *)(lVar3 + 0x20) * 8) = param_1 + 0x2c;
    *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
  }
  return;
}

