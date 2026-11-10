
void FUN_0030ca24(undefined8 param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  uVar1 = *param_3;
  *(undefined2 *)(param_2 + 0x30) = 0x101;
  local_24 = 0;
  local_14 = 0;
  *(undefined4 *)(param_2 + 0x18) = uVar1;
  *(undefined4 *)(param_2 + 0x1c) = param_3[1];
  uVar1 = param_3[2];
  *(undefined4 *)(param_2 + 0x32) = 0x1010101;
  *(undefined4 *)(param_2 + 0x20) = uVar1;
  *(undefined4 *)(param_2 + 0x24) = param_3[3];
  *(undefined4 *)(param_2 + 0x28) = param_3[4];
  uVar1 = param_3[5];
  *(uint *)(param_2 + 0x628) = *(uint *)(param_2 + 0x628) | 1;
  *(undefined4 *)(param_2 + 0x2c) = uVar1;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

