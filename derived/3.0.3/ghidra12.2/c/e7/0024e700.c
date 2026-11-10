
void FUN_0024e700(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined4 local_30;
  ErrorResultVariant aEStack_2c [12];
  undefined4 local_14;
  
  if (*(char *)((long)param_2 + 0x65) == '\0') {
    uVar1 = FUN_002212e4();
    if ((uVar1 & 1) != 0) {
      uVar1 = FUN_0022131c(param_2);
      if ((uVar1 & 1) != 0) {
        local_30 = 0x10c08;
        goto LAB_0024e774;
      }
      if (param_2[0xb] != 0) {
        FUN_002210f0();
      }
    }
    (**(code **)(*param_2 + 0x10))(param_2,0);
    local_30 = 0;
    *(undefined1 *)((long)param_2 + 0x65) = 1;
  }
  else {
    local_30 = 0;
  }
LAB_0024e774:
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)&local_14);
  FUN_002296c4(param_1,&local_30);
  return;
}

