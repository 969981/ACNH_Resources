
void FUN_0025c06c(int *param_1,long param_2,undefined8 param_3)

{
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  if (*(int *)(param_2 + 0x4f0) == 1) {
    local_24 = 0;
    local_40 = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
    FUN_002296c4(param_1,&local_40);
  }
  else {
    if (*(int *)(param_2 + 0x520) != 0) {
      FUN_00220f24(param_2 + 0x4f0);
      *(undefined4 *)(param_2 + 0x520) = 0;
    }
    FUN_0025bdf4(param_1,param_2,param_2 + 0x4f0,param_3);
    if (*param_1 == 0) {
      *(undefined4 *)(param_2 + 0x520) = 4;
      return;
    }
  }
  return;
}

