
void FUN_02ad636c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_DAT_04bbc5d8;
  *(undefined4 *)(param_1 + 2) = 0;
  puVar2 = PTR_DAT_04bb2018;
  *param_1 = &PTR_LAB_04a9f498;
  param_1[1] = 0;
  param_1[5] = 0;
  puVar1 = puVar1 + 0x10;
  puVar2 = puVar2 + 0x10;
  param_1[3] = puVar1;
  param_1[4] = puVar2;
  param_1[6] = puVar2;
  param_1[7] = 0;
  memset(param_1 + 8,0,0x4d0);
  FUN_02ad64a0(param_1 + 8);
  param_1[0xa2] = puVar1;
  param_1[0xa4] = 0;
  param_1[0xa3] = puVar2;
  param_1[0xa6] = 0;
  puVar3 = PTR_DAT_04bbc1a0 + 0x10;
  param_1[0xa5] = puVar2;
  puVar4 = PTR_DAT_04bb2010;
  param_1[0xa9] = 0;
  puVar4 = puVar4 + 0x10;
  param_1[0xa7] = puVar3;
  param_1[0xab] = 0;
  param_1[0xad] = 0;
  param_1[0xac] = puVar2;
  param_1[0xaf] = 0;
  param_1[0xb0] = puVar1;
  param_1[0xb2] = 0;
  param_1[0xb1] = puVar2;
  param_1[0xb4] = 0;
  param_1[0xa8] = puVar4;
  param_1[0xaa] = puVar4;
  param_1[0xae] = puVar4;
  param_1[0xb3] = puVar2;
  param_1[0xb5] = puVar3;
  param_1[0xb7] = 0;
  param_1[0xb6] = puVar4;
  param_1[0xb9] = 0;
  param_1[0xb8] = puVar4;
  param_1[0xbb] = 0;
  param_1[0xba] = puVar2;
  param_1[0xbd] = 0;
  param_1[0xbc] = puVar4;
  param_1[0xbe] = puVar1;
  param_1[0xc0] = 0;
  param_1[0xbf] = puVar2;
  param_1[0xc2] = 0;
  param_1[0xc1] = puVar2;
  param_1[0xc3] = puVar3;
  param_1[0xc5] = 0;
  param_1[0xc4] = puVar4;
  param_1[199] = 0;
  param_1[0xc6] = puVar4;
  param_1[0xc9] = 0;
  param_1[200] = puVar2;
  param_1[0xcb] = 0;
  param_1[0xca] = puVar4;
  return;
}

