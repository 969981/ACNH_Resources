
void FUN_00af40e8(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_04bbb810 + 0x10);
  param_1[1] = *param_2;
  lVar2 = param_2[1];
  param_1[0x18] = (long)&PTR_LAB_04933d60;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *param_1 = (long)&PTR_LAB_04934878;
  param_1[0x17] = (long)param_1;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x19] = (long)&PTR_LAB_048f9770;
  param_1[0x1a] = (long)"Angle";
  param_1[0x1d] = (long)&PTR_LAB_04933d60;
  param_1[0x1e] = (long)&PTR_LAB_048f9770;
  param_1[0x1f] = (long)"Distance";
  param_1[6] = (long)(param_1 + 0x18);
  param_1[5] = (long)(param_1 + 6);
  puVar1 = PTR_DAT_04bb6570;
  *(int *)(param_1 + 2) = (int)lVar2;
  param_1[0x1c] = (long)param_1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[7] = (long)(param_1 + 0x1d);
  param_1[8] = (long)(param_1 + 0x22);
  param_1[0x21] = (long)param_1;
  param_1[0x22] = (long)(puVar1 + 0x10);
  param_1[0x23] = (long)&PTR_LAB_048f9770;
  param_1[0x24] = (long)"MoveType";
  *(undefined4 *)(param_1 + 4) = 3;
  *(undefined4 *)((long)param_1 + 0x24) = 0x10;
  puVar1 = PTR_DAT_04bb6568;
  lVar2 = param_1[0x17];
  *(undefined1 *)(param_1 + 0x2a) = 0;
  param_1[0x28] = (long)&PTR_LAB_048f9770;
  param_1[0x29] = (long)"IsUseFollower";
  param_1[0x2b] = lVar2;
  param_1[0x26] = (long)param_1;
  param_1[0x27] = (long)(puVar1 + 0x10);
  if (*(int *)(lVar2 + 0x20) < *(int *)(lVar2 + 0x24)) {
    *(long **)(*(long *)(lVar2 + 0x28) + (long)*(int *)(lVar2 + 0x20) * 8) = param_1 + 0x27;
    *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + 1;
    lVar2 = param_1[0x17];
  }
  param_1[0x2c] = (long)(puVar1 + 0x10);
  param_1[0x2d] = (long)&PTR_LAB_048f9770;
  param_1[0x2e] = (long)"IsEndWaitAction";
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = lVar2;
  if (*(int *)(lVar2 + 0x20) < *(int *)(lVar2 + 0x24)) {
    *(long **)(*(long *)(lVar2 + 0x28) + (long)*(int *)(lVar2 + 0x20) * 8) = param_1 + 0x2c;
    *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + 1;
  }
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  return;
}

