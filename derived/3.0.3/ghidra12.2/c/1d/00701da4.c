
void FUN_00701da4(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  param_1[3] = 0;
  puVar2 = PTR_DAT_04bb2ea0;
  *(undefined4 *)(param_1 + 0xd) = 0x100;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  *(undefined1 *)((long)param_1 + 0x16b) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[1] = puVar2 + 0x10;
  param_1[2] = 0;
  pcVar1 = (char *)((long)param_1 + 0x6c);
  param_1[0xc] = pcVar1;
  uVar3 = s_Component_040afd3c._0_8_;
  if (pcVar1 != "Component") {
    *(undefined1 *)((long)param_1 + 0x75) = 0;
    *(undefined8 *)pcVar1 = uVar3;
    *(char *)((long)param_1 + 0x74) = s_Component_040afd3c[8];
  }
  puVar4 = PTR_DAT_04bb21f8;
  param_1[0x2e] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x2f) = 0xb;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  puVar2 = PTR_DAT_04bb3108 + 0x10;
  param_1[0xb] = puVar4 + 0x10;
  param_1[0x38] = 0;
  param_1[0x3f] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0xffffffff;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0xffffffff;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x4d] = PTR_DAT_04bb3100 + 0x10;
  param_1[0x4e] = param_1;
  puVar4 = PTR_LAB_04bb30d8;
  param_1[0x30] = puVar2;
  param_1[0x31] = param_1;
  param_1[0x32] = puVar4;
  param_1[0x33] = 0;
  param_1[0x37] = puVar2;
  param_1[0x38] = param_1;
  param_1[0x39] = 0;
  param_1[0x3f] = param_1;
  param_1[0x40] = 0;
  param_1[0x39] = &LAB_00705dbc;
  param_1[0x3a] = 0;
  param_1[0x3e] = puVar2;
  param_1[0x40] = &LAB_00705dc8;
  param_1[0x45] = puVar2;
  param_1[0x46] = param_1;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  *(undefined8 *)((long)param_1 + 0x2cc) = 0;
  param_1[0x47] = &LAB_00705dd4;
  *param_1 = &PTR_LAB_048fdc00;
  param_1[0x54] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0x55) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 700) = 0;
  *(undefined8 *)((long)param_1 + 0x2c1) = 0;
  *(undefined8 *)((long)param_1 + 0x2ac) = 0;
  *(undefined8 *)((long)param_1 + 0x2b4) = 0;
  *(undefined8 *)((long)param_1 + 0x2d4) = 0;
  *(undefined8 *)((long)param_1 + 0x2dc) = 0;
  if (pcVar1 != "Body") {
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined4 *)((long)param_1 + 0x6c) = 0x79646f42;
  }
  *(undefined4 *)(param_1 + 0x4c) = 5;
  if (param_2 != 0) {
    uVar5 = *(undefined4 *)(param_2 + 0x160);
    *(undefined4 *)((long)param_1 + 0x284) = uVar5;
    uVar6 = *(undefined4 *)(param_2 + 0x164);
    *(undefined4 *)(param_1 + 0x51) = uVar6;
    uVar7 = *(undefined4 *)(param_2 + 0x168);
    *(undefined4 *)(param_1 + 0x4f) = uVar5;
    *(undefined4 *)((long)param_1 + 0x27c) = uVar6;
    *(undefined4 *)((long)param_1 + 0x28c) = uVar7;
    *(undefined4 *)(param_1 + 0x50) = uVar7;
    uVar5 = *(undefined4 *)(param_2 + 0x16c);
    *(undefined4 *)(param_1 + 0x54) = uVar5;
    *(undefined4 *)((long)param_1 + 0x2a4) = uVar5;
    *(undefined4 *)(param_1 + 0x55) = uVar5;
    *(undefined4 *)((long)param_1 + 0x2b4) = *(undefined4 *)(param_2 + 0x170);
  }
  return;
}

