
void FUN_00e4ba5c(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  *param_1 = (long)(PTR_DAT_04bbb810 + 0x10);
  param_1[1] = *param_2;
  lVar4 = param_2[1];
  param_1[5] = (long)(param_1 + 6);
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined1 *)((long)param_1 + 0x14b) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x10;
  *(undefined4 *)(param_1 + 0x19) = 0x80;
  puVar1 = (undefined8 *)((long)param_1 + 0xcc);
  param_1[0x18] = (long)puVar1;
  *(int *)(param_1 + 2) = (int)lVar4;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  *(undefined2 *)(param_1 + 0x2a) = 0;
  puVar3 = PTR_DAT_04bb2d88;
  *(undefined1 *)((long)param_1 + 0x152) = 0;
  *param_1 = (long)&PTR_LAB_049619f0;
  puVar2 = PTR_DAT_04bb6560;
  param_1[0x17] = (long)(puVar3 + 0x10);
  puVar3 = PTR_DAT_04bb2020;
  puVar2 = puVar2 + 0x10;
  param_1[0x2b] = (long)param_1;
  param_1[0x2c] = (long)puVar2;
  param_1[0x31] = (long)param_1;
  param_1[0x32] = (long)puVar2;
  puVar3 = puVar3 + 0x10;
  param_1[0x37] = (long)param_1;
  param_1[0x38] = (long)puVar2;
  param_1[0x3d] = (long)param_1;
  *(undefined1 *)((long)param_1 + 0x213) = 0;
  param_1[0x2d] = (long)puVar3;
  param_1[0x2e] = (long)"StructureType";
  param_1[0x33] = (long)puVar3;
  param_1[0x34] = (long)"StructureBuildPosType";
  param_1[0x39] = (long)puVar3;
  param_1[0x3a] = (long)"StructureBuildTiming";
  *(undefined4 *)(param_1 + 0x41) = 8;
  param_1[0x2f] = (long)puVar3;
  param_1[0x30] = (long)&DAT_0407ebb1;
  param_1[0x35] = (long)puVar3;
  param_1[0x36] = (long)&DAT_0407ebb1;
  param_1[0x3b] = (long)puVar3;
  param_1[0x3c] = (long)&DAT_0407ebb1;
  *(undefined4 *)(param_1 + 4) = 3;
  *(undefined4 *)(param_1 + 0x3e) = 0x38e;
  puVar1 = (undefined8 *)((long)param_1 + 0x20c);
  param_1[0x40] = (long)puVar1;
  param_1[6] = (long)(param_1 + 0x2c);
  param_1[7] = (long)(param_1 + 0x32);
  param_1[8] = (long)(param_1 + 0x38);
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  param_1[0x3f] = (long)(PTR_DAT_04bb3768 + 0x10);
  return;
}

