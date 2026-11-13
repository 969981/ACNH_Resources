
void FUN_00ca1964(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  *param_1 = (long)(PTR_DAT_04bbb810 + 0x10);
  param_1[1] = *param_2;
  lVar6 = param_2[1];
  param_1[5] = (long)(param_1 + 6);
  *param_1 = (long)&PTR_LAB_049459e8;
  param_1[3] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)((long)param_1 + 0xdb) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x10;
  *(undefined1 *)(param_1 + 0x17) = 1;
  *(undefined4 *)(param_1 + 0x1a) = 8;
  puVar1 = (undefined8 *)((long)param_1 + 0xd4);
  param_1[0x19] = (long)puVar1;
  *(int *)(param_1 + 2) = (int)lVar6;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  puVar5 = PTR_DAT_04bb6560;
  param_1[0x1c] = (long)param_1;
  puVar2 = puVar5 + 0x10;
  param_1[0x1d] = (long)puVar2;
  param_1[0x18] = (long)(PTR_DAT_04bb3768 + 0x10);
  puVar4 = PTR_DAT_04bb2020;
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  param_1[0x22] = (long)param_1;
  param_1[0x23] = (long)puVar2;
  param_1[0x28] = (long)param_1;
  param_1[0x29] = (long)puVar2;
  param_1[0x2e] = (long)param_1;
  param_1[0x2f] = (long)puVar2;
  param_1[0x1e] = (long)puVar3;
  param_1[0x1f] = (long)"ReactionGuest";
  param_1[0x20] = (long)puVar3;
  param_1[0x21] = (long)&DAT_0407ebb1;
  param_1[0x24] = (long)puVar3;
  param_1[0x25] = (long)"ReactionGuest2";
  param_1[0x26] = (long)puVar3;
  param_1[0x27] = (long)&DAT_0407ebb1;
  param_1[0x2c] = (long)puVar3;
  param_1[0x2d] = (long)&DAT_0407ebb1;
  param_1[0x32] = (long)puVar3;
  param_1[0x33] = (long)&DAT_0407ebb1;
  param_1[6] = (long)(param_1 + 0x1d);
  param_1[7] = (long)(param_1 + 0x23);
  *(undefined4 *)(param_1 + 4) = 2;
  param_1[8] = (long)(param_1 + 0x29);
  *(undefined4 *)(param_1 + 4) = 3;
  lVar6 = param_1[0x1c];
  param_1[0x34] = lVar6;
  param_1[0x2a] = (long)puVar3;
  param_1[0x2b] = (long)"Reaction";
  param_1[0x30] = (long)puVar3;
  param_1[0x31] = (long)"ReactionAN";
  if (*(int *)(lVar6 + 0x20) < *(int *)(lVar6 + 0x24)) {
    *(long **)(*(long *)(lVar6 + 0x28) + (long)*(int *)(lVar6 + 0x20) * 8) = param_1 + 0x2f;
    *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
    lVar6 = param_1[0x1c];
  }
  param_1[0x35] = (long)puVar2;
  param_1[0x36] = (long)puVar3;
  param_1[0x37] = (long)"ReactionOT";
  param_1[0x38] = (long)puVar3;
  param_1[0x39] = (long)&DAT_0407ebb1;
  param_1[0x3a] = lVar6;
  if (*(int *)(lVar6 + 0x20) < *(int *)(lVar6 + 0x24)) {
    *(long **)(*(long *)(lVar6 + 0x28) + (long)*(int *)(lVar6 + 0x20) * 8) = param_1 + 0x35;
    *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
    lVar6 = param_1[0x1c];
  }
  puVar2 = puVar4 + 0x10;
  param_1[0x3b] = (long)(puVar5 + 0x10);
  param_1[0x3c] = (long)puVar2;
  param_1[0x3d] = (long)"ReactionGE";
  param_1[0x3e] = (long)puVar2;
  param_1[0x3f] = (long)&DAT_0407ebb1;
  param_1[0x40] = lVar6;
  if (*(int *)(lVar6 + 0x20) < *(int *)(lVar6 + 0x24)) {
    *(long **)(*(long *)(lVar6 + 0x28) + (long)*(int *)(lVar6 + 0x20) * 8) = param_1 + 0x3b;
    *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
    lVar6 = param_1[0x1c];
  }
  param_1[0x41] = (long)(puVar5 + 0x10);
  param_1[0x42] = (long)puVar2;
  param_1[0x43] = (long)"ReactionFU";
  param_1[0x44] = (long)puVar2;
  param_1[0x45] = (long)&DAT_0407ebb1;
  param_1[0x46] = lVar6;
  if (*(int *)(lVar6 + 0x20) < *(int *)(lVar6 + 0x24)) {
    *(long **)(*(long *)(lVar6 + 0x28) + (long)*(int *)(lVar6 + 0x20) * 8) = param_1 + 0x41;
    *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
    lVar6 = param_1[0x1c];
  }
  puVar2 = puVar4 + 0x10;
  param_1[0x4b] = (long)&DAT_0407ebb1;
  param_1[0x47] = (long)(puVar5 + 0x10);
  param_1[0x48] = (long)puVar2;
  param_1[0x49] = (long)"ReactionZK";
  param_1[0x4a] = (long)puVar2;
  param_1[0x4c] = lVar6;
  if (*(int *)(lVar6 + 0x20) < *(int *)(lVar6 + 0x24)) {
    *(long **)(*(long *)(lVar6 + 0x28) + (long)*(int *)(lVar6 + 0x20) * 8) = param_1 + 0x47;
    *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
    lVar6 = param_1[0x1c];
  }
  param_1[0x4d] = (long)(puVar5 + 0x10);
  param_1[0x4e] = (long)puVar2;
  param_1[0x4f] = (long)"ReactionKO";
  param_1[0x50] = (long)puVar2;
  param_1[0x51] = (long)&DAT_0407ebb1;
  param_1[0x52] = lVar6;
  if (*(int *)(lVar6 + 0x20) < *(int *)(lVar6 + 0x24)) {
    *(long **)(*(long *)(lVar6 + 0x28) + (long)*(int *)(lVar6 + 0x20) * 8) = param_1 + 0x4d;
    *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
    lVar6 = param_1[0x1c];
  }
  puVar2 = puVar4 + 0x10;
  param_1[0x57] = (long)&DAT_0407ebb1;
  param_1[0x53] = (long)(puVar5 + 0x10);
  param_1[0x54] = (long)puVar2;
  param_1[0x55] = (long)"ReactionHA";
  param_1[0x56] = (long)puVar2;
  param_1[0x58] = lVar6;
  if (*(int *)(lVar6 + 0x20) < *(int *)(lVar6 + 0x24)) {
    *(long **)(*(long *)(lVar6 + 0x28) + (long)*(int *)(lVar6 + 0x20) * 8) = param_1 + 0x53;
    *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
    lVar6 = param_1[0x1c];
  }
  param_1[0x59] = (long)(puVar5 + 0x10);
  param_1[0x5a] = (long)puVar2;
  param_1[0x5b] = (long)"ReactionBO";
  param_1[0x5c] = (long)puVar2;
  param_1[0x5d] = (long)&DAT_0407ebb1;
  param_1[0x5e] = lVar6;
  if (*(int *)(lVar6 + 0x20) < *(int *)(lVar6 + 0x24)) {
    *(long **)(*(long *)(lVar6 + 0x28) + (long)*(int *)(lVar6 + 0x20) * 8) = param_1 + 0x59;
    *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
    lVar6 = param_1[0x1c];
  }
  puVar2 = PTR_DAT_04bb6570;
  param_1[0x61] = (long)"Frame";
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[99] = lVar6;
  param_1[0x5f] = (long)(puVar2 + 0x10);
  param_1[0x60] = (long)(puVar4 + 0x10);
  if (*(int *)(lVar6 + 0x20) < *(int *)(lVar6 + 0x24)) {
    *(long **)(*(long *)(lVar6 + 0x28) + (long)*(int *)(lVar6 + 0x20) * 8) = param_1 + 0x5f;
    *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
    lVar6 = param_1[0x1c];
  }
  puVar2 = PTR_DAT_04bb6568;
  param_1[0x65] = (long)(puVar4 + 0x10);
  *(undefined1 *)(param_1 + 0x67) = 0;
  param_1[0x66] = (long)"ExcludeMainPlayer";
  param_1[0x68] = lVar6;
  param_1[100] = (long)(puVar2 + 0x10);
  if (*(int *)(lVar6 + 0x20) < *(int *)(lVar6 + 0x24)) {
    *(long **)(*(long *)(lVar6 + 0x28) + (long)*(int *)(lVar6 + 0x20) * 8) = param_1 + 100;
    *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
    lVar6 = param_1[0x1c];
  }
  param_1[0x69] = (long)(puVar2 + 0x10);
  *(undefined1 *)(param_1 + 0x6c) = 0;
  param_1[0x6a] = (long)(puVar4 + 0x10);
  param_1[0x6b] = (long)"PrioritizeGuestSetting";
  param_1[0x6d] = lVar6;
  if (*(int *)(lVar6 + 0x20) < *(int *)(lVar6 + 0x24)) {
    *(long **)(*(long *)(lVar6 + 0x28) + (long)*(int *)(lVar6 + 0x20) * 8) = param_1 + 0x69;
    *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
  }
  return;
}

