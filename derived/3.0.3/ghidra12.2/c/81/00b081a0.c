
void FUN_00b081a0(long *param_1,long *param_2)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_04bbb810 + 0x10);
  param_1[1] = *param_2;
  lVar1 = param_2[1];
  param_1[3] = 0;
  param_1[0x18] = (long)&PTR_LAB_04933af8;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[6] = (long)(param_1 + 0x18);
  *param_1 = (long)&PTR_LAB_04935828;
  param_1[5] = (long)(param_1 + 6);
  param_1[0x1e] = (long)&PTR_LAB_04933af8;
  param_1[0x17] = (long)param_1;
  param_1[0x1d] = (long)param_1;
  *(int *)(param_1 + 2) = (int)lVar1;
  param_1[0x23] = (long)param_1;
  param_1[0x24] = (long)&PTR_LAB_04933af8;
  param_1[0x29] = (long)param_1;
  param_1[0x2a] = (long)&PTR_LAB_04933af8;
  param_1[0x1f] = (long)&PTR_LAB_048f9770;
  param_1[0x20] = (long)"AIEntryPointName";
  param_1[0x19] = (long)&PTR_LAB_048f9770;
  param_1[0x1a] = (long)"CheckRobType";
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined4 *)((long)param_1 + 0x24) = 0x10;
  param_1[0x1b] = (long)&PTR_LAB_048f9770;
  param_1[0x1c] = (long)&DAT_0407ebb1;
  param_1[0x21] = (long)&PTR_LAB_048f9770;
  param_1[0x22] = (long)&DAT_0407ebb1;
  param_1[0x25] = (long)&PTR_LAB_048f9770;
  param_1[0x26] = (long)"TalkEventFlowName";
  param_1[7] = (long)(param_1 + 0x1e);
  param_1[8] = (long)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 4) = 3;
  lVar1 = param_1[0x17];
  param_1[0x2f] = lVar1;
  param_1[0x27] = (long)&PTR_LAB_048f9770;
  param_1[0x28] = (long)&DAT_0407ebb1;
  param_1[0x2b] = (long)&PTR_LAB_048f9770;
  param_1[0x2c] = (long)"TalkEntryPointName";
  param_1[0x2d] = (long)&PTR_LAB_048f9770;
  param_1[0x2e] = (long)&DAT_0407ebb1;
  if (*(int *)(lVar1 + 0x20) < *(int *)(lVar1 + 0x24)) {
    *(long **)(*(long *)(lVar1 + 0x28) + (long)*(int *)(lVar1 + 0x20) * 8) = param_1 + 0x2a;
    *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + 1;
    lVar1 = param_1[0x17];
  }
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x34] = lVar1;
  param_1[0x30] = (long)&PTR_LAB_04933b28;
  param_1[0x31] = (long)&PTR_LAB_048f9770;
  param_1[0x32] = (long)"IsUnregist";
  if (*(int *)(lVar1 + 0x20) < *(int *)(lVar1 + 0x24)) {
    *(long **)(*(long *)(lVar1 + 0x28) + (long)*(int *)(lVar1 + 0x20) * 8) = param_1 + 0x30;
    *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + 1;
    lVar1 = param_1[0x17];
  }
  *(undefined1 *)(param_1 + 0x38) = 0;
  param_1[0x39] = lVar1;
  param_1[0x35] = (long)&PTR_LAB_04933b28;
  param_1[0x36] = (long)&PTR_LAB_048f9770;
  param_1[0x37] = (long)"RobContinue";
  if (*(int *)(lVar1 + 0x20) < *(int *)(lVar1 + 0x24)) {
    *(long **)(*(long *)(lVar1 + 0x28) + (long)*(int *)(lVar1 + 0x20) * 8) = param_1 + 0x35;
    *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + 1;
  }
  return;
}

