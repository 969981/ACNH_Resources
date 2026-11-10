
void FUN_0023fc98(undefined8 param_1,long param_2,byte *param_3,uint param_4)

{
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if ((param_3 == (byte *)0x0) || (param_4 < 0xc)) {
    local_24 = 0x10c07;
  }
  else {
    *(uint *)(param_2 + 8) = (uint)*param_3;
    memcpy((void *)(param_2 + 0xc),param_3 + 1,0xb);
    local_24 = 0;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

