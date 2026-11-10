
void FUN_0022ce2c(undefined8 param_1,long param_2,void *param_3,uint param_4)

{
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  if ((param_3 == (void *)0x0) || (0x180 < param_4)) {
    local_34 = 0x10c07;
  }
  else {
    memcpy((void *)(param_2 + 0x30),param_3,(ulong)param_4);
    *(uint *)(param_2 + 0x1b0) = param_4;
    local_34 = 0;
    *(uint *)(param_2 + 0x1b8) = *(uint *)(param_2 + 0x1b8) | 0x100;
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
  FUN_002296c4(param_1,&local_34);
  return;
}

