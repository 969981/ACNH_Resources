
void FUN_002b3a54(undefined8 param_1,long param_2)

{
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined2 *)(param_2 + 0x10) = 0;
  *(undefined1 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  local_24 = 0;
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

