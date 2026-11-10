
void FUN_002540cc(undefined8 param_1,long param_2,undefined8 param_3,undefined2 param_4)

{
  int local_40;
  ErrorResultVariant aEStack_3c [12];
  int local_30 [4];
  undefined4 local_14;
  
  FUN_0025036c(local_30,*(undefined8 *)(param_2 + 0x18),param_3,param_4);
  if (local_30[0] != 0) {
    local_14 = 0;
    local_40 = 0x6c19;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
    if (local_30[0] == local_40) {
      local_14 = 0;
      local_40 = 0xc406;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
      FUN_002296c4(param_1,&local_40);
      return;
    }
  }
  FUN_002296c4(param_1,local_30);
  return;
}

