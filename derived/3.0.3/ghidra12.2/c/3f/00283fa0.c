
void FUN_00283fa0(undefined8 param_1,long param_2)

{
  int *piVar1;
  byte in_w4;
  int local_50;
  ErrorResultVariant aEStack_4c [12];
  int local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  piVar1 = &local_50;
  if (in_w4 < 0x20) {
    FUN_00283d90(&local_40);
    if (local_40 == 0) {
      FUN_0021fef8(*(long *)(param_2 + 0x30) + 8);
      **(byte **)(param_2 + 0x28) = in_w4;
      local_50 = 0;
      local_24 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_24);
    }
    else {
      piVar1 = &local_40;
    }
  }
  else {
    local_50 = 0;
    local_40 = 0x10c07;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_50);
    piVar1 = &local_40;
  }
  FUN_002296c4(param_1,piVar1);
  return;
}

