
void FUN_00703f3c(undefined8 *param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_DAT_04bb2ea0;
  *(undefined4 *)(param_1 + 0xd) = 0x100;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)((long)param_1 + 0x16b) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
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
  puVar2 = PTR_DAT_04bb21f8;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x2e] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x2f) = 0xb;
  param_1[0xb] = puVar2 + 0x10;
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
  puVar2 = PTR_LAB_04bb30d8;
  param_1[0x30] = &PTR_LAB_048fe328;
  param_1[0x31] = param_1;
  param_1[0x32] = puVar2;
  param_1[0x33] = 0;
  param_1[0x37] = &PTR_LAB_048fe328;
  param_1[0x38] = param_1;
  param_1[0x39] = 0;
  param_1[0x3f] = param_1;
  param_1[0x40] = 0;
  param_1[0x39] = &LAB_00705dbc;
  param_1[0x3a] = 0;
  param_1[0x3e] = &PTR_LAB_048fe328;
  param_1[0x40] = &LAB_00705dc8;
  param_1[0x45] = &PTR_LAB_048fe328;
  param_1[0x46] = param_1;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  *(undefined1 *)((long)param_1 + 0x2f3) = 0;
  *param_1 = &PTR_LAB_048fe0a8;
  param_1[0x47] = &LAB_00705dd4;
  *(undefined4 *)(param_1 + 0x4c) = 0xe;
  *(undefined1 *)((long)param_1 + 0x2b4) = 0;
  param_1[0x55] = (undefined1 *)((long)param_1 + 0x2b4);
  *(undefined4 *)(param_1 + 0x56) = 0x40;
  *(undefined1 *)((long)param_1 + 0x354) = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  *(undefined4 *)((long)param_1 + 0x334) = 0;
  param_1[0x69] = (undefined1 *)((long)param_1 + 0x354);
  param_1[0x54] = &PTR_LAB_048fb9f8;
  *(undefined8 *)((long)param_1 + 0x32c) = 0;
  *(undefined1 *)(param_1 + 0x67) = 1;
  *(undefined4 *)((long)param_1 + 0x339) = 0;
  puVar2 = PTR_DAT_04bb2028 + 0x10;
  *(undefined4 *)(param_1 + 0x6a) = 0x20;
  *(undefined1 *)((long)param_1 + 0x373) = 0;
  param_1[0x68] = puVar2;
  if (pcVar1 != "Cloth") {
    *(undefined1 *)((long)param_1 + 0x71) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0x68;
    builtin_strncpy(pcVar1,"Clot",4);
  }
  *(undefined4 *)(param_1 + 0x2f) = 0xb;
  *(undefined4 *)(param_1 + 0x4c) = 2;
  return;
}

