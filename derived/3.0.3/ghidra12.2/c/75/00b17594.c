
void FUN_00b17594(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  
  FUN_00b11554();
  puVar3 = PTR_DAT_04bb6560;
  puVar2 = PTR_DAT_04bb2020;
  param_1[0x5f] = "StateName";
  *param_1 = &PTR_LAB_049362b0;
  param_1[0x5c] = param_1;
  param_1[0x61] = &DAT_0407ebb1;
  param_1[0x62] = param_1;
  puVar1 = puVar2 + 0x10;
  param_1[0x5d] = puVar3 + 0x10;
  param_1[0x5e] = puVar1;
  param_1[0x60] = puVar1;
  puVar5 = param_1;
  if (*(int *)(param_1 + 4) < *(int *)((long)param_1 + 0x24)) {
    *(undefined8 **)(param_1[5] + (long)*(int *)(param_1 + 4) * 8) = param_1 + 0x5d;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    puVar5 = (undefined8 *)param_1[0x5c];
  }
  puVar4 = PTR_DAT_04bb6568;
  param_1[100] = puVar1;
  *(undefined1 *)(param_1 + 0x66) = 0;
  param_1[0x65] = "ArgFlag0";
  param_1[0x67] = puVar5;
  param_1[99] = puVar4 + 0x10;
  if (*(int *)(puVar5 + 4) < *(int *)((long)puVar5 + 0x24)) {
    *(undefined8 **)(puVar5[5] + (long)*(int *)(puVar5 + 4) * 8) = param_1 + 99;
    *(int *)(puVar5 + 4) = *(int *)(puVar5 + 4) + 1;
    puVar5 = (undefined8 *)param_1[0x5c];
  }
  puVar1 = PTR_DAT_04bb6570;
  param_1[0x6a] = "ArgInt0";
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x6c] = puVar5;
  param_1[0x68] = puVar1 + 0x10;
  param_1[0x69] = puVar2 + 0x10;
  if (*(int *)(puVar5 + 4) < *(int *)((long)puVar5 + 0x24)) {
    *(undefined8 **)(puVar5[5] + (long)*(int *)(puVar5 + 4) * 8) = param_1 + 0x68;
    *(int *)(puVar5 + 4) = *(int *)(puVar5 + 4) + 1;
    puVar5 = (undefined8 *)param_1[0x5c];
  }
  puVar1 = PTR_DAT_04bb65a8;
  param_1[0x6e] = puVar2 + 0x10;
  *(undefined4 *)(param_1 + 0x70) = 0;
  param_1[0x6f] = "ArgFloat0";
  param_1[0x71] = puVar5;
  param_1[0x6d] = puVar1 + 0x10;
  if (*(int *)(puVar5 + 4) < *(int *)((long)puVar5 + 0x24)) {
    *(undefined8 **)(puVar5[5] + (long)*(int *)(puVar5 + 4) * 8) = param_1 + 0x6d;
    *(int *)(puVar5 + 4) = *(int *)(puVar5 + 4) + 1;
    puVar5 = (undefined8 *)param_1[0x5c];
  }
  param_1[0x76] = &DAT_0407ebb1;
  param_1[0x77] = puVar5;
  param_1[0x72] = puVar3 + 0x10;
  param_1[0x73] = puVar2 + 0x10;
  param_1[0x74] = "ArgStr1";
  param_1[0x75] = puVar2 + 0x10;
  if (*(int *)(puVar5 + 4) < *(int *)((long)puVar5 + 0x24)) {
    *(undefined8 **)(puVar5[5] + (long)*(int *)(puVar5 + 4) * 8) = param_1 + 0x72;
    *(int *)(puVar5 + 4) = *(int *)(puVar5 + 4) + 1;
  }
  return;
}

