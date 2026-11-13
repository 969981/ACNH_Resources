
void FUN_00e427b8(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  *param_1 = (long)(PTR_DAT_04bbb810 + 0x10);
  puVar3 = PTR_DAT_04bb6560;
  param_1[1] = *param_2;
  lVar5 = param_2[1];
  param_1[3] = 0;
  param_1[0x18] = (long)(puVar3 + 0x10);
  puVar2 = PTR_DAT_04bb2020;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *param_1 = (long)&PTR_LAB_04961100;
  puVar4 = PTR_DAT_04bb6570;
  param_1[6] = (long)(param_1 + 0x18);
  param_1[0x17] = (long)param_1;
  param_1[0x1d] = (long)param_1;
  param_1[5] = (long)(param_1 + 6);
  *(int *)(param_1 + 2) = (int)lVar5;
  puVar1 = puVar2 + 0x10;
  param_1[0x19] = (long)puVar1;
  param_1[0x1a] = (long)"TexType";
  param_1[0x1f] = (long)puVar1;
  param_1[0x20] = (long)&DAT_040916b1;
  param_1[0x1e] = (long)(puVar4 + 0x10);
  param_1[0x1b] = (long)puVar1;
  param_1[0x1c] = (long)&DAT_0407ebb1;
  puVar4 = PTR_DAT_04bb6568;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[7] = (long)(param_1 + 0x1e);
  param_1[8] = (long)(param_1 + 0x23);
  param_1[0x22] = (long)param_1;
  param_1[0x23] = (long)(puVar4 + 0x10);
  param_1[0x24] = (long)puVar1;
  param_1[0x25] = (long)"DrawHighlight";
  *(undefined4 *)(param_1 + 4) = 3;
  *(undefined4 *)((long)param_1 + 0x24) = 0x10;
  puVar4 = PTR_DAT_04bb65a8;
  lVar5 = param_1[0x17];
  param_1[0x29] = (long)puVar1;
  param_1[0x2a] = (long)"HighlightX";
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = lVar5;
  param_1[0x27] = (long)param_1;
  param_1[0x28] = (long)(puVar4 + 0x10);
  if (*(int *)(lVar5 + 0x20) < *(int *)(lVar5 + 0x24)) {
    *(long **)(*(long *)(lVar5 + 0x28) + (long)*(int *)(lVar5 + 0x20) * 8) = param_1 + 0x28;
    *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
    lVar5 = param_1[0x17];
  }
  param_1[0x2d] = (long)(puVar4 + 0x10);
  param_1[0x2e] = (long)puVar1;
  param_1[0x2f] = (long)"HighlightY";
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x31] = lVar5;
  if (*(int *)(lVar5 + 0x20) < *(int *)(lVar5 + 0x24)) {
    *(long **)(*(long *)(lVar5 + 0x28) + (long)*(int *)(lVar5 + 0x20) * 8) = param_1 + 0x2d;
    *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
    lVar5 = param_1[0x17];
  }
  puVar2 = puVar2 + 0x10;
  param_1[0x32] = (long)(puVar3 + 0x10);
  param_1[0x33] = (long)puVar2;
  param_1[0x34] = (long)"TexName";
  param_1[0x35] = (long)puVar2;
  param_1[0x36] = (long)&DAT_0407ebb1;
  param_1[0x37] = lVar5;
  if (*(int *)(lVar5 + 0x20) < *(int *)(lVar5 + 0x24)) {
    *(long **)(*(long *)(lVar5 + 0x28) + (long)*(int *)(lVar5 + 0x20) * 8) = param_1 + 0x32;
    *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
  }
  return;
}

