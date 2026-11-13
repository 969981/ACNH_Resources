
void FUN_010bb0a4(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  *param_1 = (long)(PTR_DAT_04bbb810 + 0x10);
  puVar4 = PTR_DAT_04bb6560;
  param_1[1] = *param_2;
  puVar1 = puVar4 + 0x10;
  lVar5 = param_2[1];
  param_1[3] = 0;
  param_1[0x17] = (long)puVar1;
  param_1[0x1d] = (long)puVar1;
  puVar3 = PTR_DAT_04bb2020;
  *param_1 = (long)&PTR_LAB_04978680;
  param_1[0x16] = (long)param_1;
  param_1[0x1c] = (long)param_1;
  param_1[0x22] = (long)param_1;
  param_1[0x23] = (long)puVar1;
  param_1[0x28] = (long)param_1;
  param_1[0x29] = (long)puVar1;
  *(int *)(param_1 + 2) = (int)lVar5;
  puVar2 = puVar3 + 0x10;
  param_1[0x18] = (long)puVar2;
  param_1[0x19] = (long)"ItemKindType1";
  param_1[0x1e] = (long)puVar2;
  param_1[0x1f] = (long)"ItemKindType2";
  param_1[6] = (long)(param_1 + 0x17);
  param_1[5] = (long)(param_1 + 6);
  param_1[0x1a] = (long)puVar2;
  param_1[0x1b] = (long)&DAT_0407ebb1;
  param_1[0x20] = (long)puVar2;
  param_1[0x21] = (long)&DAT_0407ebb1;
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined4 *)((long)param_1 + 0x24) = 0x10;
  param_1[0x26] = (long)puVar2;
  param_1[0x27] = (long)&DAT_0407ebb1;
  param_1[0x2c] = (long)puVar2;
  param_1[0x2d] = (long)&DAT_0407ebb1;
  param_1[7] = (long)(param_1 + 0x1d);
  param_1[8] = (long)(param_1 + 0x23);
  *(undefined4 *)(param_1 + 4) = 3;
  lVar5 = param_1[0x16];
  param_1[0x2e] = lVar5;
  param_1[0x24] = (long)puVar2;
  param_1[0x25] = (long)"ItemKindType3";
  param_1[0x2a] = (long)puVar2;
  param_1[0x2b] = (long)"ItemKindType4";
  if (*(int *)(lVar5 + 0x20) < *(int *)(lVar5 + 0x24)) {
    *(long **)(*(long *)(lVar5 + 0x28) + (long)*(int *)(lVar5 + 0x20) * 8) = param_1 + 0x29;
    *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
    lVar5 = param_1[0x16];
  }
  param_1[0x2f] = (long)puVar1;
  param_1[0x30] = (long)puVar2;
  param_1[0x31] = (long)"ItemKindType5";
  param_1[0x32] = (long)puVar2;
  param_1[0x33] = (long)&DAT_0407ebb1;
  param_1[0x34] = lVar5;
  if (*(int *)(lVar5 + 0x20) < *(int *)(lVar5 + 0x24)) {
    *(long **)(*(long *)(lVar5 + 0x28) + (long)*(int *)(lVar5 + 0x20) * 8) = param_1 + 0x2f;
    *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
    lVar5 = param_1[0x16];
  }
  puVar1 = puVar3 + 0x10;
  param_1[0x35] = (long)(puVar4 + 0x10);
  param_1[0x36] = (long)puVar1;
  param_1[0x37] = (long)"ItemKindType6";
  param_1[0x38] = (long)puVar1;
  param_1[0x39] = (long)&DAT_0407ebb1;
  param_1[0x3a] = lVar5;
  if (*(int *)(lVar5 + 0x20) < *(int *)(lVar5 + 0x24)) {
    *(long **)(*(long *)(lVar5 + 0x28) + (long)*(int *)(lVar5 + 0x20) * 8) = param_1 + 0x35;
    *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
    lVar5 = param_1[0x16];
  }
  param_1[0x3b] = (long)(puVar4 + 0x10);
  param_1[0x3c] = (long)puVar1;
  param_1[0x3d] = (long)"ItemKindType7";
  param_1[0x3e] = (long)puVar1;
  param_1[0x3f] = (long)&DAT_0407ebb1;
  param_1[0x40] = lVar5;
  if (*(int *)(lVar5 + 0x20) < *(int *)(lVar5 + 0x24)) {
    *(long **)(*(long *)(lVar5 + 0x28) + (long)*(int *)(lVar5 + 0x20) * 8) = param_1 + 0x3b;
    *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
    lVar5 = param_1[0x16];
  }
  puVar3 = puVar3 + 0x10;
  param_1[0x45] = (long)&DAT_0407ebb1;
  param_1[0x41] = (long)(puVar4 + 0x10);
  param_1[0x42] = (long)puVar3;
  param_1[0x43] = (long)"ItemKindType8";
  param_1[0x44] = (long)puVar3;
  param_1[0x46] = lVar5;
  if (*(int *)(lVar5 + 0x20) < *(int *)(lVar5 + 0x24)) {
    *(long **)(*(long *)(lVar5 + 0x28) + (long)*(int *)(lVar5 + 0x20) * 8) = param_1 + 0x41;
    *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
    lVar5 = param_1[0x16];
  }
  param_1[0x47] = (long)(puVar4 + 0x10);
  param_1[0x48] = (long)puVar3;
  param_1[0x49] = (long)"JudgeTarget";
  param_1[0x4a] = (long)puVar3;
  param_1[0x4b] = (long)&DAT_0407ebb1;
  param_1[0x4c] = lVar5;
  if (*(int *)(lVar5 + 0x20) < *(int *)(lVar5 + 0x24)) {
    *(long **)(*(long *)(lVar5 + 0x28) + (long)*(int *)(lVar5 + 0x20) * 8) = param_1 + 0x47;
    *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
  }
  return;
}

