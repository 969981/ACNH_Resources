
void FUN_00cb87d8(long *param_1,long *param_2)

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
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x18] = (long)puVar1;
  *param_1 = (long)&PTR_FUN_04946d90;
  param_1[0x17] = (long)param_1;
  param_1[0x1e] = (long)puVar1;
  puVar3 = PTR_DAT_04bb2020;
  param_1[0x23] = (long)param_1;
  param_1[0x24] = (long)puVar1;
  param_1[0x1d] = (long)param_1;
  *(int *)(param_1 + 2) = (int)lVar4;
  puVar1 = puVar3 + 0x10;
  param_1[0x19] = (long)puVar1;
  param_1[0x1a] = (long)"FadeOutKindString";
  param_1[0x1f] = (long)puVar1;
  param_1[0x20] = (long)"FadeInKindString";
  param_1[0x25] = (long)puVar1;
  param_1[0x26] = (long)"FadeColorString";
  param_1[6] = (long)(param_1 + 0x18);
  param_1[5] = (long)(param_1 + 6);
  param_1[0x1b] = (long)puVar1;
  param_1[0x1c] = (long)&DAT_0407ebb1;
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined4 *)((long)param_1 + 0x24) = 0x10;
  param_1[0x21] = (long)puVar1;
  param_1[0x22] = (long)&DAT_0407ebb1;
  param_1[0x27] = (long)puVar1;
  param_1[0x28] = (long)&DAT_0407ebb1;
  *(undefined4 *)(param_1 + 4) = 3;
  lVar4 = param_1[0x17];
  param_1[7] = (long)(param_1 + 0x1e);
  param_1[8] = (long)(param_1 + 0x24);
  puVar2 = PTR_DAT_04bb65a8 + 0x10;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = lVar4;
  param_1[0x2b] = (long)puVar1;
  param_1[0x2c] = (long)"FadeOutSpeed";
  param_1[0x29] = (long)param_1;
  param_1[0x2a] = (long)puVar2;
  if (*(int *)(lVar4 + 0x20) < *(int *)(lVar4 + 0x24)) {
    *(long **)(*(long *)(lVar4 + 0x28) + (long)*(int *)(lVar4 + 0x20) * 8) = param_1 + 0x2a;
    *(int *)(lVar4 + 0x20) = *(int *)(lVar4 + 0x20) + 1;
    lVar4 = param_1[0x17];
  }
  param_1[0x2f] = (long)puVar2;
  param_1[0x30] = (long)puVar1;
  param_1[0x31] = (long)"FadeInSpeed";
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x33] = lVar4;
  if (*(int *)(lVar4 + 0x20) < *(int *)(lVar4 + 0x24)) {
    *(long **)(*(long *)(lVar4 + 0x28) + (long)*(int *)(lVar4 + 0x20) * 8) = param_1 + 0x2f;
    *(int *)(lVar4 + 0x20) = *(int *)(lVar4 + 0x20) + 1;
    lVar4 = param_1[0x17];
  }
  puVar1 = PTR_DAT_04bb6568;
  *(undefined1 *)(param_1 + 0x37) = 0;
  param_1[0x38] = lVar4;
  param_1[0x34] = (long)(puVar1 + 0x10);
  param_1[0x35] = (long)(puVar3 + 0x10);
  param_1[0x36] = (long)"IsUseDucking";
  if (*(int *)(lVar4 + 0x20) < *(int *)(lVar4 + 0x24)) {
    *(long **)(*(long *)(lVar4 + 0x28) + (long)*(int *)(lVar4 + 0x20) * 8) = param_1 + 0x34;
    *(int *)(lVar4 + 0x20) = *(int *)(lVar4 + 0x20) + 1;
  }
  *(undefined1 *)(param_1 + 0x39) = 0;
  return;
}

