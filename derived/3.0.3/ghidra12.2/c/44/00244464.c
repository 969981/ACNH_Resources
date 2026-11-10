
void FUN_00244464(undefined8 param_1,long param_2,void *param_3,byte param_4)

{
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  if ((param_3 == (void *)0x0) || (param_4 - 0x41 < 0xffffffcf)) {
    local_34 = 0x10c07;
  }
  else {
    memcpy((void *)(param_2 + 100),param_3,(ulong)(uint)param_4);
    *(byte *)(param_2 + 0xa4) = param_4;
    local_34 = 0;
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
  FUN_002296c4(param_1,&local_34);
  return;
}

