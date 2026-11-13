
void FUN_00ceb934(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  *param_1 = (long)(PTR_DAT_04bbb810 + 0x10);
  param_1[1] = *param_2;
  lVar3 = param_2[1];
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x18] = (long)&PTR_LAB_04933af8;
  *param_1 = (long)&PTR_LAB_04949470;
  param_1[0x17] = (long)param_1;
  param_1[0x1e] = (long)&PTR_LAB_04933af8;
  puVar2 = PTR_DAT_04bb2020;
  param_1[0x23] = (long)param_1;
  param_1[0x24] = (long)&PTR_LAB_04933af8;
  param_1[0x1d] = (long)param_1;
  *(int *)(param_1 + 2) = (int)lVar3;
  puVar1 = puVar2 + 0x10;
  param_1[0x19] = (long)puVar1;
  param_1[0x1a] = (long)"FadeOutKindString";
  param_1[0x1f] = (long)puVar1;
  param_1[0x20] = (long)"FadeInKindString";
  param_1[6] = (long)(param_1 + 0x18);
  param_1[5] = (long)(param_1 + 6);
  param_1[0x1b] = (long)puVar1;
  param_1[0x1c] = (long)&DAT_0407ebb1;
  param_1[0x21] = (long)puVar1;
  param_1[0x22] = (long)&DAT_0407ebb1;
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined4 *)((long)param_1 + 0x24) = 0x10;
  *(undefined4 *)(param_1 + 4) = 3;
  lVar3 = param_1[0x17];
  param_1[0x27] = (long)puVar1;
  param_1[0x28] = (long)&DAT_0407ebb1;
  param_1[0x25] = (long)puVar1;
  param_1[0x26] = (long)"FadeColorString";
  param_1[7] = (long)(param_1 + 0x1e);
  param_1[8] = (long)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = lVar3;
  param_1[0x2b] = (long)puVar1;
  param_1[0x2c] = (long)"FadeOutSpeed";
  param_1[0x29] = (long)param_1;
  param_1[0x2a] = (long)&PTR_LAB_04933d60;
  if (*(int *)(lVar3 + 0x20) < *(int *)(lVar3 + 0x24)) {
    *(long **)(*(long *)(lVar3 + 0x28) + (long)*(int *)(lVar3 + 0x20) * 8) = param_1 + 0x2a;
    *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
    lVar3 = param_1[0x17];
  }
  param_1[0x2f] = (long)&PTR_LAB_04933d60;
  param_1[0x30] = (long)puVar1;
  param_1[0x31] = (long)"FadeInSpeed";
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x33] = lVar3;
  if (*(int *)(lVar3 + 0x20) < *(int *)(lVar3 + 0x24)) {
    *(long **)(*(long *)(lVar3 + 0x28) + (long)*(int *)(lVar3 + 0x20) * 8) = param_1 + 0x2f;
    *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
    lVar3 = param_1[0x17];
  }
  puVar2 = puVar2 + 0x10;
  param_1[0x34] = (long)&PTR_LAB_04933af8;
  param_1[0x35] = (long)puVar2;
  param_1[0x36] = (long)"OverWriteFlow";
  param_1[0x37] = (long)puVar2;
  param_1[0x38] = (long)&DAT_0407ebb1;
  param_1[0x39] = lVar3;
  if (*(int *)(lVar3 + 0x20) < *(int *)(lVar3 + 0x24)) {
    *(long **)(*(long *)(lVar3 + 0x28) + (long)*(int *)(lVar3 + 0x20) * 8) = param_1 + 0x34;
    *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
  }
  return;
}

