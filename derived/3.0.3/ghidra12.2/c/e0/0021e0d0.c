
void FUN_0021e0d0(undefined8 param_1,long *param_2,undefined4 param_3,undefined4 param_4)

{
  ulong uVar1;
  int *piVar2;
  undefined8 local_50;
  undefined4 local_48;
  int local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  piVar2 = (int *)&local_50;
  uVar1 = FUN_002aed20(param_2[0xb]);
  if ((uVar1 & 1) == 0) {
    local_50 = local_50 & 0xffffffff00000000;
    local_40 = 0x2c27;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_50);
    piVar2 = &local_40;
  }
  else {
    FUN_0021e850(&local_40,param_2,param_3,param_4);
    if (local_40 == 0) {
      if ((short)param_2[0xc] == 0) {
        local_48 = 0;
        local_50 = 0x800000000000000;
        (**(code **)(*param_2 + 0x10))(param_2,&local_50);
      }
      local_50 = local_50 & 0xffffffff00000000;
      local_24 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_50 + 4),(Result *)&local_24);
    }
    else {
      piVar2 = &local_40;
    }
  }
  FUN_002296c4(param_1,piVar2);
  return;
}

