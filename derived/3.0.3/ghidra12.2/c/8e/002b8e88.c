
void FUN_002b8e88(undefined8 *param_1)

{
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  *param_1 = 0;
  FUN_002282f0();
  param_1[1] = 0;
  FUN_002aabc4(param_1 + 2);
  param_1[10] = 0;
  local_34 = 0x10c08;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  *(undefined2 *)(param_1 + 0x17) = 0;
  *(undefined8 *)((long)param_1 + 0xbc) = 0;
  *(undefined4 *)((long)param_1 + 0xc4) = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  local_24 = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
  FUN_002296c4((long)param_1 + 0xd4,&local_34);
  local_34 = 0;
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
  FUN_002296c4((long)param_1 + 0xe4,&local_34);
  return;
}

