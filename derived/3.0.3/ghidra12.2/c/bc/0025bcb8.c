
void FUN_0025bcb8(int *param_1,long param_2)

{
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  if (*(int *)(param_2 + 0x4f0) == 1) {
    local_24 = 0;
    local_34 = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
    FUN_002296c4(param_1,&local_34);
  }
  else {
    if (*(int *)(param_2 + 0x520) != 0) {
      FUN_00220f24(param_2 + 0x4f0);
      *(undefined4 *)(param_2 + 0x520) = 0;
    }
    *(undefined1 *)(param_2 + 0x478) = 1;
    FUN_0025bbe4(param_1,param_2,param_2 + 0x4f0);
    if (*param_1 == 0) {
      *(undefined4 *)(param_2 + 0x520) = 2;
      return;
    }
  }
  return;
}

