
void FUN_0108e8a0(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  *param_1 = (long)(PTR_DAT_04bbb810 + 0x10);
  param_1[1] = *param_2;
  lVar3 = param_2[1];
  param_1[3] = 0;
  param_1[0x18] = (long)&PTR_LAB_04933af8;
  param_1[0x17] = (long)param_1;
  *param_1 = (long)&PTR_LAB_04976a28;
  *(undefined1 *)(param_1 + 0x16) = 8;
  param_1[6] = (long)(param_1 + 0x18);
  param_1[0x19] = (long)&PTR_LAB_048f9770;
  param_1[0x1a] = (long)"CheckMode";
  param_1[0x1b] = (long)&PTR_LAB_048f9770;
  param_1[0x1c] = (long)&DAT_0407ebb1;
  puVar2 = PTR_DAT_04bb6570;
  param_1[5] = (long)(param_1 + 6);
  *(int *)(param_1 + 2) = (int)lVar3;
  param_1[0x1d] = (long)param_1;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x1f] = (long)&PTR_LAB_048f9770;
  param_1[0x20] = (long)"MadeItemID0";
  puVar1 = puVar2 + 0x10;
  param_1[0x24] = (long)&PTR_LAB_048f9770;
  param_1[0x25] = (long)"MadeItemID1";
  param_1[0x1e] = (long)puVar1;
  param_1[0x22] = (long)param_1;
  param_1[0x23] = (long)puVar1;
  param_1[0x27] = (long)param_1;
  param_1[0x28] = (long)puVar1;
  param_1[7] = (long)(param_1 + 0x1e);
  param_1[8] = (long)(param_1 + 0x23);
  *(undefined4 *)(param_1 + 4) = 3;
  *(undefined4 *)((long)param_1 + 0x24) = 0x10;
  lVar3 = param_1[0x17];
  param_1[0x2c] = lVar3;
  param_1[0x29] = (long)&PTR_LAB_048f9770;
  param_1[0x2a] = (long)"MadeItemID2";
  if (*(int *)(lVar3 + 0x20) < *(int *)(lVar3 + 0x24)) {
    *(long **)(*(long *)(lVar3 + 0x28) + (long)*(int *)(lVar3 + 0x20) * 8) = param_1 + 0x28;
    *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
    lVar3 = param_1[0x17];
  }
  param_1[0x2d] = (long)puVar1;
  param_1[0x2e] = (long)&PTR_LAB_048f9770;
  param_1[0x2f] = (long)"MadeItemID3";
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x31] = lVar3;
  if (*(int *)(lVar3 + 0x20) < *(int *)(lVar3 + 0x24)) {
    *(long **)(*(long *)(lVar3 + 0x28) + (long)*(int *)(lVar3 + 0x20) * 8) = param_1 + 0x2d;
    *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
    lVar3 = param_1[0x17];
  }
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x34] = (long)"MadeItemID4";
  param_1[0x32] = (long)(puVar2 + 0x10);
  param_1[0x33] = (long)&PTR_LAB_048f9770;
  param_1[0x36] = lVar3;
  if (*(int *)(lVar3 + 0x20) < *(int *)(lVar3 + 0x24)) {
    *(long **)(*(long *)(lVar3 + 0x28) + (long)*(int *)(lVar3 + 0x20) * 8) = param_1 + 0x32;
    *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
    lVar3 = param_1[0x17];
  }
  param_1[0x37] = (long)(puVar2 + 0x10);
  param_1[0x38] = (long)&PTR_LAB_048f9770;
  param_1[0x39] = (long)"MadeItemID5";
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x3b] = lVar3;
  if (*(int *)(lVar3 + 0x20) < *(int *)(lVar3 + 0x24)) {
    *(long **)(*(long *)(lVar3 + 0x28) + (long)*(int *)(lVar3 + 0x20) * 8) = param_1 + 0x37;
    *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
    lVar3 = param_1[0x17];
  }
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x3e] = (long)"MadeItemID6";
  param_1[0x3c] = (long)(puVar2 + 0x10);
  param_1[0x3d] = (long)&PTR_LAB_048f9770;
  param_1[0x40] = lVar3;
  if (*(int *)(lVar3 + 0x20) < *(int *)(lVar3 + 0x24)) {
    *(long **)(*(long *)(lVar3 + 0x28) + (long)*(int *)(lVar3 + 0x20) * 8) = param_1 + 0x3c;
    *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
    lVar3 = param_1[0x17];
  }
  param_1[0x42] = (long)&PTR_LAB_048f9770;
  param_1[0x41] = (long)(puVar2 + 0x10);
  param_1[0x43] = (long)"MadeItemID7";
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x45] = lVar3;
  if (*(int *)(lVar3 + 0x20) < *(int *)(lVar3 + 0x24)) {
    *(long **)(*(long *)(lVar3 + 0x28) + (long)*(int *)(lVar3 + 0x20) * 8) = param_1 + 0x41;
    *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
  }
  return;
}

