
void FUN_00c6e238(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  *param_1 = (long)(PTR_DAT_04bbb810 + 0x10);
  puVar4 = PTR_DAT_04bb6568;
  param_1[1] = *param_2;
  lVar5 = param_2[1];
  param_1[0x18] = (long)(puVar4 + 0x10);
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = (long)param_1;
  *param_1 = (long)&PTR_LAB_04943d18;
  puVar3 = PTR_DAT_04bb2020;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[6] = (long)(param_1 + 0x18);
  puVar1 = puVar3 + 0x10;
  param_1[0x19] = (long)puVar1;
  param_1[0x1a] = (long)"PosIsOffset";
  puVar2 = PTR_DAT_04bb65a8;
  *(int *)(param_1 + 2) = (int)lVar5;
  param_1[0x1e] = (long)puVar1;
  param_1[0x1f] = (long)"TargetX";
  param_1[0x1c] = (long)param_1;
  param_1[5] = (long)(param_1 + 6);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x23] = (long)puVar1;
  param_1[0x24] = (long)"TargetZ";
  puVar2 = puVar2 + 0x10;
  param_1[0x1d] = (long)puVar2;
  param_1[0x21] = (long)param_1;
  param_1[0x22] = (long)puVar2;
  param_1[0x26] = (long)param_1;
  param_1[0x27] = (long)puVar2;
  param_1[7] = (long)(param_1 + 0x1d);
  param_1[8] = (long)(param_1 + 0x22);
  *(undefined4 *)(param_1 + 4) = 3;
  *(undefined4 *)((long)param_1 + 0x24) = 0x10;
  lVar5 = param_1[0x17];
  param_1[0x2b] = lVar5;
  param_1[0x28] = (long)puVar1;
  param_1[0x29] = (long)"MiddleTargetX";
  if (*(int *)(lVar5 + 0x20) < *(int *)(lVar5 + 0x24)) {
    *(long **)(*(long *)(lVar5 + 0x28) + (long)*(int *)(lVar5 + 0x20) * 8) = param_1 + 0x27;
    *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
    lVar5 = param_1[0x17];
  }
  param_1[0x2c] = (long)puVar2;
  param_1[0x2d] = (long)puVar1;
  param_1[0x2e] = (long)"MiddleTargetZ";
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = lVar5;
  if (*(int *)(lVar5 + 0x20) < *(int *)(lVar5 + 0x24)) {
    *(long **)(*(long *)(lVar5 + 0x28) + (long)*(int *)(lVar5 + 0x20) * 8) = param_1 + 0x2c;
    *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
    lVar5 = param_1[0x17];
  }
  puVar3 = puVar3 + 0x10;
  *(undefined1 *)(param_1 + 0x34) = 0;
  param_1[0x33] = (long)"UseStateAfterWait";
  param_1[0x31] = (long)(puVar4 + 0x10);
  param_1[0x32] = (long)puVar3;
  param_1[0x35] = lVar5;
  if (*(int *)(lVar5 + 0x20) < *(int *)(lVar5 + 0x24)) {
    *(long **)(*(long *)(lVar5 + 0x28) + (long)*(int *)(lVar5 + 0x20) * 8) = param_1 + 0x31;
    *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
    lVar5 = param_1[0x17];
  }
  puVar1 = PTR_DAT_04bb6560;
  param_1[0x3a] = (long)&DAT_0407ebb1;
  param_1[0x3b] = lVar5;
  param_1[0x36] = (long)(puVar1 + 0x10);
  param_1[0x37] = (long)puVar3;
  param_1[0x38] = (long)"StateAfterWait";
  param_1[0x39] = (long)puVar3;
  if (*(int *)(lVar5 + 0x20) < *(int *)(lVar5 + 0x24)) {
    *(long **)(*(long *)(lVar5 + 0x28) + (long)*(int *)(lVar5 + 0x20) * 8) = param_1 + 0x36;
    *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
  }
  return;
}

