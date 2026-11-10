
void FUN_00243ef0(undefined8 param_1,long param_2,void *param_3,uint param_4)

{
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  if ((param_3 == (void *)0x0) || (0x180 < param_4)) {
    local_44 = 0x10c07;
  }
  else {
    memset((void *)(param_2 + 0x2c),0,0x180);
    memcpy((void *)(param_2 + 0x2c),param_3,(ulong)param_4);
    *(uint *)(param_2 + 0x1ac) = param_4;
    local_44 = 0;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 2;
  }
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_34);
  FUN_002296c4(param_1,&local_44);
  return;
}

