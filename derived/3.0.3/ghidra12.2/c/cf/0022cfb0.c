
void FUN_0022cfb0(undefined8 param_1,long param_2,uint param_3,undefined4 param_4)

{
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if (param_3 < 6) {
    local_24 = 0;
    *(undefined4 *)(param_2 + (ulong)param_3 * 4 + 0x18) = param_4;
    *(uint *)(param_2 + 0x1b8) = *(uint *)(param_2 + 0x1b8) | 4 << (ulong)(param_3 & 0x1f);
  }
  else {
    local_24 = 0x10c07;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

