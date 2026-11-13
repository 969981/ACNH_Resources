
void FUN_00e4f890(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_04bbb810 + 0x10);
  param_1[1] = *param_2;
  lVar2 = param_2[1];
  param_1[0x18] = (long)&PTR_LAB_04933b28;
  puVar1 = PTR_DAT_04bb6560 + 0x10;
  param_1[6] = (long)(param_1 + 0x18);
  param_1[0x1d] = (long)puVar1;
  *(int *)(param_1 + 2) = (int)lVar2;
  *param_1 = (long)&PTR_LAB_04961bc8;
  param_1[0x17] = (long)param_1;
  param_1[0x22] = (long)param_1;
  param_1[0x23] = (long)&PTR_LAB_04933b28;
  param_1[3] = 0;
  param_1[0x27] = (long)param_1;
  param_1[0x28] = (long)&PTR_LAB_04933b28;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[5] = (long)(param_1 + 6);
  param_1[0x1c] = (long)param_1;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x20] = (long)&PTR_LAB_048f9770;
  param_1[0x21] = (long)&DAT_0407ebb1;
  param_1[0x1e] = (long)&PTR_LAB_048f9770;
  param_1[0x1f] = (long)"Target";
  param_1[0x19] = (long)&PTR_LAB_048f9770;
  param_1[0x1a] = (long)"IsExcludeGuest";
  param_1[0x29] = (long)&PTR_LAB_048f9770;
  param_1[0x2a] = (long)"IsExcludeFacilitator";
  param_1[0x24] = (long)&PTR_LAB_048f9770;
  param_1[0x25] = (long)"IsExcludeRco";
  param_1[7] = (long)(param_1 + 0x1d);
  param_1[8] = (long)(param_1 + 0x23);
  *(undefined4 *)(param_1 + 4) = 3;
  *(undefined4 *)((long)param_1 + 0x24) = 0x10;
  lVar2 = param_1[0x17];
  param_1[0x2c] = lVar2;
  if (*(int *)(lVar2 + 0x20) < *(int *)(lVar2 + 0x24)) {
    *(long **)(*(long *)(lVar2 + 0x28) + (long)*(int *)(lVar2 + 0x20) * 8) = param_1 + 0x28;
    *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + 1;
    lVar2 = param_1[0x17];
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x31] = lVar2;
  param_1[0x2d] = (long)&PTR_LAB_04933d60;
  param_1[0x2e] = (long)&PTR_LAB_048f9770;
  param_1[0x2f] = (long)"OffsetX";
  if (*(int *)(lVar2 + 0x20) < *(int *)(lVar2 + 0x24)) {
    *(long **)(*(long *)(lVar2 + 0x28) + (long)*(int *)(lVar2 + 0x20) * 8) = param_1 + 0x2d;
    *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + 1;
    lVar2 = param_1[0x17];
  }
  param_1[0x32] = (long)&PTR_LAB_04933d60;
  param_1[0x33] = (long)&PTR_LAB_048f9770;
  param_1[0x34] = (long)"OffsetY";
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x36] = lVar2;
  if (*(int *)(lVar2 + 0x20) < *(int *)(lVar2 + 0x24)) {
    *(long **)(*(long *)(lVar2 + 0x28) + (long)*(int *)(lVar2 + 0x20) * 8) = param_1 + 0x32;
    *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + 1;
    lVar2 = param_1[0x17];
  }
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x3b] = lVar2;
  param_1[0x37] = (long)&PTR_LAB_04933d60;
  param_1[0x38] = (long)&PTR_LAB_048f9770;
  param_1[0x39] = (long)"OffsetZ";
  if (*(int *)(lVar2 + 0x20) < *(int *)(lVar2 + 0x24)) {
    *(long **)(*(long *)(lVar2 + 0x28) + (long)*(int *)(lVar2 + 0x20) * 8) = param_1 + 0x37;
    *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + 1;
  }
  return;
}

