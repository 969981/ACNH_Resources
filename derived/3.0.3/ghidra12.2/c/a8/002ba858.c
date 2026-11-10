
void FUN_002ba858(undefined8 param_1,long param_2)

{
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  local_24 = 0;
  *(undefined8 *)(param_2 + 8) = 0xfdfdfdfdfdfdfdfd;
  *(undefined8 *)(param_2 + 0x10) = 0xfdfdfdfdfdfdfdfd;
  local_14 = 0;
  *(undefined8 *)(param_2 + 0x18) = 0xfdfdfdfdfdfdfdfd;
  *(undefined8 *)(param_2 + 0x20) = 0xfdfdfdfdfdfdfdfd;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

