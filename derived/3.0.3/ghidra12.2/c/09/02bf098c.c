
void FUN_02bf098c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  int iVar4;
  
  FUN_03d5830c(param_1,param_2,0);
  param_1[0x7f] = 0;
  puVar2 = PTR_DAT_04bd4580;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined8 *)((long)param_1 + 0x3ec) = 0;
  iVar4 = *(int *)puVar2;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  *(undefined4 *)(param_1 + 0x89) = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  *(int *)(param_1 + 0x7d) = iVar4;
  *(int *)puVar2 = iVar4 + 1;
  puVar1 = param_1 + 0xaa;
  *param_1 = &PTR_LAB_04b5ece8;
  puVar2 = PTR_DAT_04bcb568 + 0x10;
  param_1[0x90] = 0;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  param_1[0xa9] = 0x2000000000;
  param_1[0xac] = 0x2000000000;
  param_1[0xab] = puVar1;
  param_1[0xaa] = puVar1;
  param_1[0x91] = puVar2;
  param_1[0x95] = puVar2;
  param_1[0x99] = puVar2;
  param_1[0x9d] = puVar2;
  puVar3 = param_1 + 0xa7;
  param_1[0xa8] = puVar3;
  param_1[0xa7] = puVar3;
  if (param_3 != 0) {
    *(undefined4 *)((long)param_1 + 0x4c) = *(undefined4 *)(param_3 + 0x24);
  }
  param_1[0xa8] = puVar3;
  param_1[0xa7] = puVar3;
  param_1[0xab] = puVar1;
  param_1[0xaa] = puVar1;
  *param_1 = &PTR_LAB_04aab1d0;
  *(undefined4 *)(param_1 + 0xa9) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined2 *)(param_1 + 0xad) = 1;
  *(undefined1 *)((long)param_1 + 0x56a) = 1;
  *(undefined4 *)((long)param_1 + 0x3ec) = 0xe;
  if (*(int *)(param_1 + 0x43) != 3) {
    *(undefined1 *)((long)param_1 + 0x21d) = 1;
    *(undefined4 *)(param_1 + 0x43) = 3;
  }
  *(undefined4 *)(param_1 + 0xa6) = 1;
  return;
}

