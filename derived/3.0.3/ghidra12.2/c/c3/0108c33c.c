
void FUN_0108c33c(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  *param_1 = (long)(PTR_DAT_04bbb810 + 0x10);
  puVar4 = PTR_DAT_04bb6570;
  param_1[1] = *param_2;
  puVar1 = puVar4 + 0x10;
  lVar5 = param_2[1];
  param_1[0x17] = (long)puVar1;
  puVar3 = PTR_DAT_04bb2020;
  *param_1 = (long)&PTR_LAB_04976998;
  param_1[0x16] = (long)param_1;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = (long)param_1;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = (long)param_1;
  param_1[0x21] = (long)puVar1;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x25] = (long)param_1;
  param_1[0x26] = (long)puVar1;
  *(undefined4 *)(param_1 + 0x29) = 0;
  puVar2 = puVar3 + 0x10;
  *(int *)(param_1 + 2) = (int)lVar5;
  param_1[0x18] = (long)puVar2;
  param_1[0x19] = (long)"ItemUniqueID1";
  param_1[6] = (long)(param_1 + 0x17);
  param_1[5] = (long)(param_1 + 6);
  param_1[0x1d] = (long)puVar2;
  param_1[0x1e] = (long)"ItemUniqueID2";
  param_1[0x1c] = (long)puVar1;
  param_1[7] = (long)(param_1 + 0x1c);
  param_1[8] = (long)(param_1 + 0x21);
  param_1[3] = 0;
  param_1[4] = 0x1000000002;
  *(undefined4 *)(param_1 + 4) = 3;
  lVar5 = param_1[0x16];
  param_1[0x2a] = lVar5;
  param_1[0x22] = (long)puVar2;
  param_1[0x23] = (long)"ItemUniqueID3";
  param_1[0x27] = (long)puVar2;
  param_1[0x28] = (long)"ItemUniqueID4";
  if (*(int *)(lVar5 + 0x20) < *(int *)(lVar5 + 0x24)) {
    *(long **)(*(long *)(lVar5 + 0x28) + (long)*(int *)(lVar5 + 0x20) * 8) = param_1 + 0x26;
    *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
    lVar5 = param_1[0x16];
  }
  param_1[0x2b] = (long)puVar1;
  param_1[0x2c] = (long)puVar2;
  param_1[0x2d] = (long)"ItemUniqueID5";
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = lVar5;
  if (*(int *)(lVar5 + 0x20) < *(int *)(lVar5 + 0x24)) {
    *(long **)(*(long *)(lVar5 + 0x28) + (long)*(int *)(lVar5 + 0x20) * 8) = param_1 + 0x2b;
    *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
    lVar5 = param_1[0x16];
  }
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x32] = (long)"ItemUniqueID6";
  param_1[0x30] = (long)(puVar4 + 0x10);
  param_1[0x31] = (long)(puVar3 + 0x10);
  param_1[0x34] = lVar5;
  if (*(int *)(lVar5 + 0x20) < *(int *)(lVar5 + 0x24)) {
    *(long **)(*(long *)(lVar5 + 0x28) + (long)*(int *)(lVar5 + 0x20) * 8) = param_1 + 0x30;
    *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
    lVar5 = param_1[0x16];
  }
  param_1[0x35] = (long)(puVar4 + 0x10);
  param_1[0x36] = (long)(puVar3 + 0x10);
  param_1[0x37] = (long)"ItemUniqueID7";
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x39] = lVar5;
  if (*(int *)(lVar5 + 0x20) < *(int *)(lVar5 + 0x24)) {
    *(long **)(*(long *)(lVar5 + 0x28) + (long)*(int *)(lVar5 + 0x20) * 8) = param_1 + 0x35;
    *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
    lVar5 = param_1[0x16];
  }
  puVar1 = puVar3 + 0x10;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x3a] = (long)(puVar4 + 0x10);
  param_1[0x3b] = (long)puVar1;
  param_1[0x3c] = (long)"ItemUniqueID8";
  param_1[0x3e] = lVar5;
  if (*(int *)(lVar5 + 0x20) < *(int *)(lVar5 + 0x24)) {
    *(long **)(*(long *)(lVar5 + 0x28) + (long)*(int *)(lVar5 + 0x20) * 8) = param_1 + 0x3a;
    *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
    lVar5 = param_1[0x16];
  }
  puVar2 = PTR_DAT_04bb6560;
  param_1[0x42] = (long)puVar1;
  param_1[0x44] = lVar5;
  param_1[0x3f] = (long)(puVar2 + 0x10);
  param_1[0x40] = (long)puVar1;
  param_1[0x41] = (long)"EquipRequireType";
  param_1[0x43] = (long)&DAT_0407ebb1;
  if (*(int *)(lVar5 + 0x20) < *(int *)(lVar5 + 0x24)) {
    *(long **)(*(long *)(lVar5 + 0x28) + (long)*(int *)(lVar5 + 0x20) * 8) = param_1 + 0x3f;
    *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
    lVar5 = param_1[0x16];
  }
  puVar1 = PTR_DAT_04bb6568;
  param_1[0x46] = (long)(puVar3 + 0x10);
  param_1[0x47] = (long)"PutawayType";
  *(undefined1 *)(param_1 + 0x48) = 0;
  param_1[0x49] = lVar5;
  param_1[0x45] = (long)(puVar1 + 0x10);
  if (*(int *)(lVar5 + 0x20) < *(int *)(lVar5 + 0x24)) {
    *(long **)(*(long *)(lVar5 + 0x28) + (long)*(int *)(lVar5 + 0x20) * 8) = param_1 + 0x45;
    *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
    lVar5 = param_1[0x16];
  }
  param_1[0x4b] = (long)(puVar3 + 0x10);
  param_1[0x4a] = (long)(puVar1 + 0x10);
  param_1[0x4c] = (long)"ReferenceLook";
  *(undefined1 *)(param_1 + 0x4d) = 0;
  param_1[0x4e] = lVar5;
  if (*(int *)(lVar5 + 0x20) < *(int *)(lVar5 + 0x24)) {
    *(long **)(*(long *)(lVar5 + 0x28) + (long)*(int *)(lVar5 + 0x20) * 8) = param_1 + 0x4a;
    *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
  }
  return;
}

