
void FUN_002b3c88(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 local_30;
  ErrorResultVariant aEStack_2c [12];
  undefined4 local_14;
  
  FUN_002ba790(DAT_04c61168);
  uVar1 = FUN_002b54cc();
  *(undefined8 *)(param_2 + 0x50) = uVar1;
  *(undefined1 *)(param_2 + 8) = 0;
  local_30 = 0;
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)&local_14);
  FUN_002296c4(param_1,&local_30);
  return;
}

