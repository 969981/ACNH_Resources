
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029d2674(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar1 = (undefined8 *)((long)param_1 + 0x14);
  param_1[1] = (long)puVar1;
  *(undefined4 *)(param_1 + 2) = 0x40;
  *(undefined1 *)((long)param_1 + 0x53) = 0;
  if (puVar1 != &DAT_040a1f38) {
    uVar8 = CONCAT26(DAT_040a1f38._6_2_,(undefined6)DAT_040a1f38);
    *(undefined1 *)((long)param_1 + 0x22) = 0;
    *puVar1 = uVar8;
    *(ulong *)((long)param_1 + 0x1a) = CONCAT62(_UNK_040a1f40,DAT_040a1f38._6_2_);
  }
  puVar5 = PTR_DAT_04bb2bc0;
  puVar2 = (undefined8 *)((long)param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0xd) = 0x40;
  *(undefined1 *)((long)param_1 + 0xab) = 0;
  param_1[0xc] = (long)puVar2;
  puVar3 = puVar5 + 0x10;
  *param_1 = (long)puVar3;
  uVar9 = DAT_040c13bf;
  uVar8 = DAT_040c13b7;
  if (puVar2 != &DAT_040c13b7) {
    *(undefined1 *)((long)param_1 + 0x89) = 0;
    uVar7 = CONCAT35(DAT_040c13c7._5_3_,(undefined5)DAT_040c13c7);
    *puVar2 = uVar8;
    *(undefined8 *)((long)param_1 + 0x74) = uVar9;
    uVar8 = CONCAT53(_UNK_040c13cf,DAT_040c13c7._5_3_);
    *(undefined8 *)((long)param_1 + 0x7c) = uVar7;
    *(undefined8 *)((long)param_1 + 0x81) = uVar8;
  }
  param_1[0xb] = (long)puVar3;
  puVar4 = (undefined8 *)((long)param_1 + 0xc4);
  param_1[0x17] = (long)puVar4;
  *(undefined4 *)(param_1 + 0x18) = 0x40;
  *(undefined1 *)((long)param_1 + 0x103) = 0;
  uVar9 = DAT_0409d3c9;
  uVar8 = DAT_0409d3c1;
  if (puVar4 != &DAT_0409d3c1) {
    *(undefined1 *)((long)param_1 + 0xe1) = 0;
    uVar7 = CONCAT35(DAT_0409d3d1._5_3_,(undefined5)DAT_0409d3d1);
    *puVar4 = uVar8;
    *(undefined8 *)((long)param_1 + 0xcc) = uVar9;
    uVar8 = CONCAT53(_UNK_0409d3d9,DAT_0409d3d1._5_3_);
    *(undefined8 *)((long)param_1 + 0xd4) = uVar7;
    *(undefined8 *)((long)param_1 + 0xd9) = uVar8;
  }
  puVar5 = puVar5 + 0x10;
  puVar6 = (undefined8 *)((long)param_1 + 0x11c);
  *(undefined4 *)(param_1 + 0x23) = 0x40;
  param_1[0x16] = (long)puVar5;
  param_1[0x22] = (long)puVar6;
  *(undefined1 *)((long)param_1 + 0x15b) = 0;
  uVar8 = DAT_040b6eb3;
  if (puVar6 != &DAT_040b6ea3) {
    uVar9 = CONCAT35(DAT_040b6ebb._5_3_,(undefined5)DAT_040b6ebb);
    *(undefined1 *)((long)param_1 + 0x141) = 0;
    uVar7 = CONCAT53(_UNK_040b6ec3,DAT_040b6ebb._5_3_);
    *(undefined8 *)((long)param_1 + 300) = uVar8;
    *(undefined8 *)((long)param_1 + 0x134) = uVar9;
    uVar9 = DAT_040b6eab;
    uVar8 = DAT_040b6ea3;
    *(undefined8 *)((long)param_1 + 0x139) = uVar7;
    *puVar6 = uVar8;
    *(undefined8 *)((long)param_1 + 0x124) = uVar9;
  }
  param_1[0x21] = (long)puVar5;
  puVar5 = PTR_PTR_04bb2238;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  puVar3 = PTR_DAT_04bb2020;
  *(undefined1 *)(param_1 + 0x30) = 3;
  param_1[0x4a] = (long)puVar1;
  lVar10 = *(long *)(puVar5 + 8);
  param_1[0x4e] = (long)puVar1;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  puVar3 = puVar3 + 0x10;
  *(undefined4 *)(param_1 + 0x33) = 0x42700000;
  *(undefined1 *)(param_1 + 0x34) = 1;
  *(undefined4 *)(param_1 + 0x37) = 0x42700000;
  *(undefined1 *)(param_1 + 0x38) = 1;
  *(undefined4 *)(param_1 + 0x3b) = 0x42700000;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  *(undefined4 *)(param_1 + 0x3f) = 0x42700000;
  *(undefined1 *)(param_1 + 0x40) = 0;
  param_1[0x41] = (long)puVar3;
  *(undefined4 *)(param_1 + 0x43) = 0x42700000;
  *(undefined1 *)(param_1 + 0x44) = 1;
  param_1[0x45] = (long)puVar3;
  param_1[0x42] = lVar10;
  param_1[0x46] = (long)puVar6;
  *(undefined4 *)(param_1 + 0x47) = 0x42700000;
  *(undefined1 *)(param_1 + 0x48) = 1;
  param_1[0x49] = (long)puVar3;
  *(undefined4 *)(param_1 + 0x4b) = 0x42700000;
  *(undefined1 *)(param_1 + 0x4c) = 1;
  param_1[0x4d] = (long)puVar3;
  *(undefined4 *)(param_1 + 0x4f) = 0x42700000;
  *(undefined2 *)(param_1 + 0x50) = 0;
  *(undefined1 *)((long)param_1 + 0x282) = 0;
  param_1[0x31] = (long)puVar3;
  param_1[0x32] = (long)puVar1;
  param_1[0x35] = (long)puVar3;
  param_1[0x36] = (long)puVar2;
  param_1[0x3d] = (long)puVar3;
  param_1[0x3e] = (long)puVar1;
  *(undefined8 *)((long)param_1 + 0x284) = 0xffffffffffffffff;
  param_1[0x2d] = (long)puVar3;
  param_1[0x2e] = lVar10;
  param_1[0x39] = (long)puVar3;
  param_1[0x3a] = (long)puVar4;
  return;
}

