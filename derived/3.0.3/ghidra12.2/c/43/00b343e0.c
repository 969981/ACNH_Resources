
void FUN_00b343e0(long *param_1,long *param_2)

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
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined1 *)((long)param_1 + 0x14b) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x10;
  *(undefined4 *)(param_1 + 0x19) = 0x80;
  puVar1 = (undefined8 *)((long)param_1 + 0xcc);
  param_1[0x18] = (long)puVar1;
  *(int *)(param_1 + 2) = (int)lVar6;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  *(undefined2 *)(param_1 + 0x2a) = 0;
  puVar2 = PTR_DAT_04bb2d88;
  *(undefined1 *)((long)param_1 + 0x152) = 0;
  param_1[0x2b] = 0x400000000;
  param_1[0x2c] = (long)(param_1 + 0x2d);
  param_1[0x31] = 0x400000000;
  param_1[0x32] = (long)(param_1 + 0x33);
  param_1[0x17] = (long)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x37) = 0;
  *param_1 = (long)&PTR_LAB_04937708;
  puVar5 = PTR_DAT_04bb6560;
  puVar2 = PTR_DAT_04bb6560 + 0x10;
  param_1[0x38] = (long)param_1;
  param_1[0x39] = (long)puVar2;
  puVar4 = PTR_DAT_04bb2020;
  param_1[0x3e] = (long)param_1;
  param_1[0x3f] = (long)puVar2;
  param_1[0x41] = (long)"StartType1";
  param_1[0x43] = (long)&DAT_0407ebb1;
  puVar3 = puVar4 + 0x10;
  param_1[0x44] = (long)param_1;
  param_1[0x45] = (long)puVar2;
  param_1[0x49] = (long)&DAT_0407ebb1;
  param_1[0x4a] = (long)param_1;
  param_1[0x4b] = (long)puVar2;
  param_1[0x4f] = (long)&DAT_0407ebb1;
  param_1[0x40] = (long)puVar3;
  param_1[0x42] = (long)puVar3;
  param_1[0x46] = (long)puVar3;
  param_1[0x48] = (long)puVar3;
  param_1[0x4c] = (long)puVar3;
  param_1[0x4e] = (long)puVar3;
  param_1[0x3a] = (long)puVar3;
  param_1[0x3b] = (long)"StartType0";
  param_1[0x3c] = (long)puVar3;
  param_1[0x3d] = (long)&DAT_0407ebb1;
  param_1[6] = (long)(param_1 + 0x39);
  param_1[7] = (long)(param_1 + 0x3f);
  param_1[8] = (long)(param_1 + 0x45);
  param_1[0x47] = (long)"StartType2";
  *(undefined4 *)(param_1 + 4) = 3;
  lVar6 = param_1[0x38];
  param_1[0x4d] = (long)"StartType3";
  param_1[0x50] = lVar6;
  if (*(int *)(lVar6 + 0x20) < *(int *)(lVar6 + 0x24)) {
    *(long **)(*(long *)(lVar6 + 0x28) + (long)*(int *)(lVar6 + 0x20) * 8) = param_1 + 0x4b;
    *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
    lVar6 = param_1[0x38];
  }
  param_1[0x51] = (long)puVar2;
  param_1[0x52] = (long)puVar3;
  param_1[0x53] = (long)"MessageID0";
  param_1[0x54] = (long)puVar3;
  param_1[0x55] = (long)&DAT_0407ebb1;
  param_1[0x56] = lVar6;
  if (*(int *)(lVar6 + 0x20) < *(int *)(lVar6 + 0x24)) {
    *(long **)(*(long *)(lVar6 + 0x28) + (long)*(int *)(lVar6 + 0x20) * 8) = param_1 + 0x51;
    *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
    lVar6 = param_1[0x38];
  }
  puVar2 = puVar5 + 0x10;
  puVar3 = puVar4 + 0x10;
  param_1[0x5b] = (long)&DAT_0407ebb1;
  param_1[0x57] = (long)puVar2;
  param_1[0x58] = (long)puVar3;
  param_1[0x59] = (long)"MessageID1";
  param_1[0x5a] = (long)puVar3;
  param_1[0x5c] = lVar6;
  if (*(int *)(lVar6 + 0x20) < *(int *)(lVar6 + 0x24)) {
    *(long **)(*(long *)(lVar6 + 0x28) + (long)*(int *)(lVar6 + 0x20) * 8) = param_1 + 0x57;
    *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
    lVar6 = param_1[0x38];
  }
  param_1[0x5d] = (long)puVar2;
  param_1[0x5e] = (long)puVar3;
  param_1[0x5f] = (long)"MessageID2";
  param_1[0x60] = (long)puVar3;
  param_1[0x61] = (long)&DAT_0407ebb1;
  param_1[0x62] = lVar6;
  if (*(int *)(lVar6 + 0x20) < *(int *)(lVar6 + 0x24)) {
    *(long **)(*(long *)(lVar6 + 0x28) + (long)*(int *)(lVar6 + 0x20) * 8) = param_1 + 0x5d;
    *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
    lVar6 = param_1[0x38];
  }
  param_1[0x67] = (long)&DAT_0407ebb1;
  param_1[0x68] = lVar6;
  param_1[99] = (long)(puVar5 + 0x10);
  puVar4 = puVar4 + 0x10;
  param_1[100] = (long)puVar4;
  param_1[0x65] = (long)"MessageID3";
  param_1[0x66] = (long)puVar4;
  if (*(int *)(lVar6 + 0x20) < *(int *)(lVar6 + 0x24)) {
    *(long **)(*(long *)(lVar6 + 0x28) + (long)*(int *)(lVar6 + 0x20) * 8) = param_1 + 99;
    *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
    lVar6 = param_1[0x38];
  }
  puVar2 = PTR_DAT_04bb6568;
  param_1[0x6a] = (long)puVar4;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  param_1[0x6b] = (long)"IsCheckAttr";
  param_1[0x6d] = lVar6;
  param_1[0x69] = (long)(puVar2 + 0x10);
  if (*(int *)(lVar6 + 0x20) < *(int *)(lVar6 + 0x24)) {
    *(long **)(*(long *)(lVar6 + 0x28) + (long)*(int *)(lVar6 + 0x20) * 8) = param_1 + 0x69;
    *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
  }
  return;
}

