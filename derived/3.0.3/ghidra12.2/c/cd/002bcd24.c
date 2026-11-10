
void FUN_002bcd24(undefined8 param_1,void *param_2,void *param_3,uint *param_4,uint param_5)

{
  uint uVar1;
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  if ((param_3 == (void *)0x0) || (param_4 == (uint *)0x0)) {
    local_34 = 0x10c07;
  }
  else {
    uVar1 = *(uint *)((long)param_2 + 0x5a0);
    if (param_5 <= *(uint *)((long)param_2 + 0x5a0)) {
      uVar1 = param_5;
    }
    memcpy(param_3,param_2,(ulong)uVar1);
    *param_4 = uVar1;
    local_34 = 0;
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
  FUN_002296c4(param_1,&local_34);
  return;
}

