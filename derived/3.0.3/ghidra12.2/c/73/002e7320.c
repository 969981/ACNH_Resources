
void FUN_002e7320(undefined8 param_1,long param_2,void *param_3,int param_4)

{
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  memset((void *)(param_2 + 0x568),0,0x20);
  if ((param_3 == (void *)0x0) || (param_4 != 0x20)) {
    local_40 = 0x10c07;
  }
  else {
    memcpy((void *)(param_2 + 0x568),param_3,0x20);
    local_40 = 0;
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
  FUN_002296c4(param_1,&local_40);
  return;
}

