
void FUN_0024e644(undefined8 param_1,long *param_2,long param_3,int param_4)

{
  ulong uVar1;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  uVar1 = FUN_002212e4();
  if ((((uVar1 & 1) == 0) && ((param_4 < 2 || (*(char *)((long)param_2 + 100) == '\0')))) &&
     ((param_4 < 3 || (*(char *)((long)param_2 + 0x65) == '\0')))) {
    (**(code **)(*param_2 + 0x10))(param_2,0);
    param_2[0xb] = param_3;
    FUN_00220f24(param_3);
    FUN_00220f78(param_2[0xb]);
    *(int *)(param_2 + 0xc) = param_4;
    local_40 = 0;
  }
  else {
    local_40 = 0x10c08;
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
  FUN_002296c4(param_1,&local_40);
  return;
}

