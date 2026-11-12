
void FUN_00ada9c4(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_04bbb810 + 0x10);
  param_1[1] = *param_2;
  lVar2 = param_2[1];
  param_1[0x19] = (long)&PTR_LAB_04933af8;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *param_1 = (long)&PTR_LAB_04933b58;
  *(undefined8 *)((long)param_1 + 0xb4) = 0;
  param_1[0x18] = (long)param_1;
  param_1[0x1a] = (long)&PTR_LAB_048f9770;
  param_1[0x1b] = (long)"Reaction";
  param_1[6] = (long)(param_1 + 0x19);
  param_1[5] = (long)(param_1 + 6);
  param_1[0x20] = (long)&PTR_LAB_048f9770;
  param_1[0x21] = (long)"PlayerAutoEnd";
  puVar1 = PTR_DAT_04bb6568;
  *(int *)(param_1 + 2) = (int)lVar2;
  param_1[0x23] = (long)param_1;
  param_1[0x24] = (long)&PTR_LAB_04933af8;
  param_1[0x1c] = (long)&PTR_LAB_048f9770;
  param_1[0x1d] = (long)&DAT_0407ebb1;
  param_1[0x1e] = (long)param_1;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x25] = (long)&PTR_LAB_048f9770;
  param_1[0x26] = (long)"MessageID";
  param_1[0x27] = (long)&PTR_LAB_048f9770;
  param_1[0x28] = (long)&DAT_0407ebb1;
  param_1[0x1f] = (long)(puVar1 + 0x10);
  param_1[7] = (long)(param_1 + 0x1f);
  param_1[8] = (long)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 4) = 3;
  *(undefined4 *)((long)param_1 + 0x24) = 0x10;
  lVar2 = param_1[0x18];
  param_1[0x2e] = lVar2;
  param_1[0x29] = (long)param_1;
  param_1[0x2a] = (long)&PTR_LAB_04933bc8;
  param_1[0x2b] = (long)&PTR_LAB_048f9770;
  param_1[0x2c] = (long)"Frame";
  if (*(int *)(lVar2 + 0x20) < *(int *)(lVar2 + 0x24)) {
    *(long **)(*(long *)(lVar2 + 0x28) + (long)*(int *)(lVar2 + 0x20) * 8) = param_1 + 0x2a;
    *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + 1;
    lVar2 = param_1[0x18];
  }
  param_1[0x2f] = (long)(puVar1 + 0x10);
  param_1[0x30] = (long)&PTR_LAB_048f9770;
  param_1[0x31] = (long)"Continue";
  *(undefined1 *)(param_1 + 0x32) = 0;
  param_1[0x33] = lVar2;
  if (*(int *)(lVar2 + 0x20) < *(int *)(lVar2 + 0x24)) {
    *(long **)(*(long *)(lVar2 + 0x28) + (long)*(int *)(lVar2 + 0x20) * 8) = param_1 + 0x2f;
    *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + 1;
  }
  return;
}

