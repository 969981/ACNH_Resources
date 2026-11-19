
void FUN_038595a4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined *puVar4;
  
  FUN_03d5830c(param_1,param_2,0);
  puVar4 = PTR_DAT_04bd4580;
  *(undefined8 *)((long)param_1 + 0x3ec) = 0;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  iVar3 = *(int *)puVar4;
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
  param_1[0x90] = 0;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  *(int *)(param_1 + 0x7d) = iVar3;
  param_1[0xa3] = 0;
  *(int *)puVar4 = iVar3 + 1;
  puVar1 = param_1 + 0xaa;
  *param_1 = &PTR_LAB_04b5ece8;
  param_1[0x91] = &PTR_LAB_04b5f268;
  param_1[0x95] = &PTR_LAB_04b5f268;
  param_1[0x99] = &PTR_LAB_04b5f268;
  param_1[0x9d] = &PTR_LAB_04b5f268;
  puVar2 = param_1 + 0xa7;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  param_1[0xa9] = 0x2000000000;
  param_1[0xa8] = puVar2;
  param_1[0xa7] = puVar2;
  param_1[0xac] = 0x2000000000;
  param_1[0xab] = puVar1;
  param_1[0xaa] = puVar1;
  if (param_3 != 0) {
    *(undefined4 *)((long)param_1 + 0x4c) = *(undefined4 *)(param_3 + 0x24);
  }
  *(undefined4 *)(param_1 + 0xa9) = 0;
  param_1[0xa8] = puVar2;
  param_1[0xa7] = puVar2;
  *(undefined4 *)(param_1 + 0xac) = 0;
  param_1[0xab] = puVar1;
  param_1[0xaa] = puVar1;
  return;
}

