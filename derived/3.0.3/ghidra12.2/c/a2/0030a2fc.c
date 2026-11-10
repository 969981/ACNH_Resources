
void FUN_0030a2fc(undefined8 param_1,long param_2,void *param_3,uint param_4)

{
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if (param_3 == (void *)0x0) {
    local_24 = 0x10c07;
  }
  else if (param_4 < *(uint *)(param_2 + 0x230)) {
    local_24 = 0x10c04;
  }
  else {
    memcpy(param_3,(void *)(param_2 + 0x30),(ulong)*(uint *)(param_2 + 0x230));
    local_24 = 0;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

