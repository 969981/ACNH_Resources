
void FUN_0023fc04(undefined8 param_1,long param_2,undefined1 *param_3,undefined4 *param_4,
                 uint param_5)

{
  undefined4 local_30;
  ErrorResultVariant aEStack_2c [12];
  undefined4 local_14;
  
  if (((param_3 == (undefined1 *)0x0) || (param_4 == (undefined4 *)0x0)) || (param_5 < 0xc)) {
    local_30 = 0x10c07;
  }
  else {
    *param_3 = (char)*(undefined4 *)(param_2 + 8);
    memcpy(param_3 + 1,(void *)(param_2 + 0xc),0xb);
    local_30 = 0;
    *param_4 = 0xc;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)&local_14);
  FUN_002296c4(param_1,&local_30);
  return;
}

