
void FUN_00dea764(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  *param_1 = (long)(PTR_DAT_04bbb810 + 0x10);
  puVar4 = PTR_DAT_04bb6560;
  param_1[1] = *param_2;
  puVar1 = puVar4 + 0x10;
  lVar6 = param_2[1];
  param_1[3] = 0;
  param_1[0x18] = (long)puVar1;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *param_1 = (long)&PTR_LAB_04958b90;
  param_1[0x17] = (long)param_1;
  param_1[0x1e] = (long)puVar1;
  puVar3 = PTR_DAT_04bb2020;
  param_1[0x1d] = (long)param_1;
  param_1[6] = (long)(param_1 + 0x18);
  param_1[5] = (long)(param_1 + 6);
  *(int *)(param_1 + 2) = (int)lVar6;
  puVar2 = puVar3 + 0x10;
  param_1[0x19] = (long)puVar2;
  param_1[0x1a] = (long)"FromType";
  param_1[0x1f] = (long)puVar2;
  param_1[0x20] = (long)"FileIndex";
  param_1[0x1b] = (long)puVar2;
  param_1[0x1c] = (long)&DAT_0407ebb1;
  param_1[0x21] = (long)puVar2;
  param_1[0x22] = (long)&DAT_0407ebb1;
  puVar5 = PTR_DAT_04bb6570;
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined4 *)((long)param_1 + 0x24) = 0x10;
  param_1[7] = (long)(param_1 + 0x1e);
  param_1[8] = (long)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = (long)param_1;
  param_1[0x29] = (long)puVar1;
  param_1[0x2a] = (long)puVar2;
  param_1[0x2b] = (long)"TagType";
  param_1[0x2c] = (long)puVar2;
  param_1[0x2d] = (long)&DAT_0407ebb1;
  param_1[0x23] = (long)param_1;
  param_1[0x24] = (long)(puVar5 + 0x10);
  param_1[0x25] = (long)puVar2;
  param_1[0x26] = (long)"LabelIndex";
  *(undefined4 *)(param_1 + 4) = 3;
  lVar6 = param_1[0x17];
  param_1[0x2e] = lVar6;
  if (*(int *)(lVar6 + 0x20) < *(int *)(lVar6 + 0x24)) {
    *(long **)(*(long *)(lVar6 + 0x28) + (long)*(int *)(lVar6 + 0x20) * 8) = param_1 + 0x29;
    *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
    lVar6 = param_1[0x17];
  }
  param_1[0x2f] = (long)puVar1;
  param_1[0x30] = (long)puVar2;
  param_1[0x31] = (long)"Route";
  param_1[0x32] = (long)puVar2;
  param_1[0x33] = (long)&DAT_0407ebb1;
  param_1[0x34] = lVar6;
  if (*(int *)(lVar6 + 0x20) < *(int *)(lVar6 + 0x24)) {
    *(long **)(*(long *)(lVar6 + 0x28) + (long)*(int *)(lVar6 + 0x20) * 8) = param_1 + 0x2f;
    *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
    lVar6 = param_1[0x17];
  }
  puVar1 = puVar3 + 0x10;
  param_1[0x35] = (long)(puVar4 + 0x10);
  param_1[0x36] = (long)puVar1;
  param_1[0x37] = (long)"Present";
  param_1[0x38] = (long)puVar1;
  param_1[0x39] = (long)&DAT_0407ebb1;
  param_1[0x3a] = lVar6;
  if (*(int *)(lVar6 + 0x20) < *(int *)(lVar6 + 0x24)) {
    *(long **)(*(long *)(lVar6 + 0x28) + (long)*(int *)(lVar6 + 0x20) * 8) = param_1 + 0x35;
    *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
    lVar6 = param_1[0x17];
  }
  puVar2 = PTR_DAT_04bb6568;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  param_1[0x3f] = lVar6;
  param_1[0x3b] = (long)(puVar2 + 0x10);
  param_1[0x3c] = (long)puVar1;
  param_1[0x3d] = (long)"ToSharePlayer";
  if (*(int *)(lVar6 + 0x20) < *(int *)(lVar6 + 0x24)) {
    *(long **)(*(long *)(lVar6 + 0x28) + (long)*(int *)(lVar6 + 0x20) * 8) = param_1 + 0x3b;
    *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
    lVar6 = param_1[0x17];
  }
  param_1[0x40] = (long)(puVar2 + 0x10);
  *(undefined1 *)(param_1 + 0x43) = 0;
  param_1[0x41] = (long)(puVar3 + 0x10);
  param_1[0x42] = (long)"PrimaryItem";
  param_1[0x44] = lVar6;
  if (*(int *)(lVar6 + 0x20) < *(int *)(lVar6 + 0x24)) {
    *(long **)(*(long *)(lVar6 + 0x28) + (long)*(int *)(lVar6 + 0x20) * 8) = param_1 + 0x40;
    *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
  }
  return;
}

