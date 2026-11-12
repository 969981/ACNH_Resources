
void FUN_0070f160(undefined8 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
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
  uVar4 = s_Component_040afd3c._0_8_;
  if (pcVar1 != "Component") {
    *(undefined1 *)((long)param_1 + 0x75) = 0;
    *(undefined8 *)pcVar1 = uVar4;
    *(char *)((long)param_1 + 0x74) = s_Component_040afd3c[8];
  }
  param_1[0x2e] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x2f) = 0xb;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0xb] = &PTR_LAB_048f9a70;
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
  *(undefined4 *)(param_1 + 0x4b) = 0xffffffff;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  puVar2 = PTR_DAT_04bb3100 + 0x10;
  param_1[0x4a] = 0;
  param_1[0x4d] = puVar2;
  param_1[0x4e] = param_1;
  puVar2 = PTR_LAB_04bb30d8;
  param_1[0x30] = &PTR_LAB_048fe328;
  param_1[0x31] = param_1;
  param_1[0x38] = param_1;
  param_1[0x39] = 0;
  param_1[0x32] = puVar2;
  param_1[0x33] = 0;
  param_1[0x37] = &PTR_LAB_048fe328;
  param_1[0x3f] = param_1;
  param_1[0x40] = 0;
  param_1[0x39] = &LAB_00705dbc;
  param_1[0x3a] = 0;
  param_1[0x3e] = &PTR_LAB_048fe328;
  param_1[0x46] = param_1;
  param_1[0x40] = &LAB_00705dc8;
  param_1[0x45] = &PTR_LAB_048fe328;
  param_1[0x47] = &LAB_00705dd4;
  *(undefined4 *)(param_1 + 0x4c) = 0xe;
  *param_1 = &PTR_LAB_048feeb8;
  uVar3 = *param_2;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  param_1[0x5c] = 0;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x4f) = uVar3;
  *(undefined1 *)(param_1 + 0x55) = 0xff;
  *(undefined1 *)(param_1 + 0x58) = 0xff;
  if (pcVar1 != "EventFlowReceptor") {
    *(undefined1 *)((long)param_1 + 0x7d) = 0;
    *(undefined1 *)((long)param_1 + 0x7c) = 0x72;
    uVar4 = s_EventFlowReceptor_040b4df0._8_8_;
    *(undefined8 *)pcVar1 = s_EventFlowReceptor_040b4df0._0_8_;
    *(undefined8 *)((long)param_1 + 0x74) = uVar4;
  }
  return;
}

