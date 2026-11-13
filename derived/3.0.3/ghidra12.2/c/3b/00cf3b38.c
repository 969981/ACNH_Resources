
void FUN_00cf3b38(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  *param_1 = (long)(PTR_DAT_04bbb810 + 0x10);
  puVar1 = PTR_DAT_04bb6560;
  param_1[1] = *param_2;
  puVar1 = puVar1 + 0x10;
  lVar4 = param_2[1];
  param_1[3] = 0;
  param_1[0x18] = (long)puVar1;
  param_1[0x1e] = (long)puVar1;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[6] = (long)(param_1 + 0x18);
  *param_1 = (long)&PTR_LAB_04949930;
  puVar3 = PTR_DAT_04bb2020;
  param_1[5] = (long)(param_1 + 6);
  param_1[0x17] = (long)param_1;
  *(undefined1 *)((long)param_1 + 0xb4) = 0;
  param_1[0x1d] = (long)param_1;
  param_1[0x23] = (long)param_1;
  param_1[0x24] = (long)puVar1;
  *(int *)(param_1 + 2) = (int)lVar4;
  puVar2 = puVar3 + 0x10;
  param_1[0x29] = (long)param_1;
  param_1[0x2a] = (long)puVar1;
  param_1[0x1f] = (long)puVar2;
  param_1[0x20] = (long)"FadeOutKindString";
  param_1[0x19] = (long)puVar2;
  param_1[0x1a] = (long)"TargetStage";
  param_1[0x1b] = (long)puVar2;
  param_1[0x1c] = (long)&DAT_0407ebb1;
  param_1[0x21] = (long)puVar2;
  param_1[0x22] = (long)&DAT_0407ebb1;
  param_1[0x27] = (long)puVar2;
  param_1[0x28] = (long)&DAT_0407ebb1;
  param_1[0x25] = (long)puVar2;
  param_1[0x26] = (long)"FadeInKindString";
  param_1[7] = (long)(param_1 + 0x1e);
  param_1[8] = (long)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 4) = 3;
  *(undefined4 *)((long)param_1 + 0x24) = 0x10;
  lVar4 = param_1[0x17];
  param_1[0x2f] = lVar4;
  param_1[0x2b] = (long)puVar2;
  param_1[0x2c] = (long)"FadeColorString";
  param_1[0x2d] = (long)puVar2;
  param_1[0x2e] = (long)&DAT_0407ebb1;
  if (*(int *)(lVar4 + 0x20) < *(int *)(lVar4 + 0x24)) {
    *(long **)(*(long *)(lVar4 + 0x28) + (long)*(int *)(lVar4 + 0x20) * 8) = param_1 + 0x2a;
    *(int *)(lVar4 + 0x20) = *(int *)(lVar4 + 0x20) + 1;
    lVar4 = param_1[0x17];
  }
  puVar1 = PTR_DAT_04bb65a8;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x34] = lVar4;
  param_1[0x30] = (long)(puVar1 + 0x10);
  param_1[0x31] = (long)puVar2;
  param_1[0x32] = (long)"FadeOutSpeed";
  if (*(int *)(lVar4 + 0x20) < *(int *)(lVar4 + 0x24)) {
    *(long **)(*(long *)(lVar4 + 0x28) + (long)*(int *)(lVar4 + 0x20) * 8) = param_1 + 0x30;
    *(int *)(lVar4 + 0x20) = *(int *)(lVar4 + 0x20) + 1;
    lVar4 = param_1[0x17];
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x39] = lVar4;
  param_1[0x35] = (long)(puVar1 + 0x10);
  param_1[0x36] = (long)(puVar3 + 0x10);
  param_1[0x37] = (long)"FadeInSpeed";
  if (*(int *)(lVar4 + 0x20) < *(int *)(lVar4 + 0x24)) {
    *(long **)(*(long *)(lVar4 + 0x28) + (long)*(int *)(lVar4 + 0x20) * 8) = param_1 + 0x35;
    *(int *)(lVar4 + 0x20) = *(int *)(lVar4 + 0x20) + 1;
  }
  return;
}

