
void FUN_002eb85c(undefined8 param_1,long param_2,uint param_3,undefined4 *param_4)

{
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if ((param_4 == (undefined4 *)0x0) || (5 < param_3)) {
    local_24 = 0x10c07;
  }
  else {
    local_24 = 0;
    *param_4 = *(undefined4 *)(param_2 + (ulong)param_3 * 4 + 0x10);
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

