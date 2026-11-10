
void FUN_0024f088(long param_1)

{
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  *(undefined2 *)(param_1 + 8) = 0;
  FUN_0021fef8(param_1 + 0x10);
  local_24 = 0;
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_00229780(param_1 + 0x30,&local_24);
  return;
}

