
void FUN_00226bbc(undefined8 param_1,int *param_2,uint param_3)

{
  int iVar1;
  uint local_28 [2];
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if (*param_2 < 0) {
    local_28[1] = 0x10c07;
  }
  else {
    local_28[0] = param_3 & 1;
    iVar1 = nn::socket::SetSockOpt(*param_2,0xffff,4,local_28,4);
    if (iVar1 < 0) {
      nn::socket::GetLastError();
      FUN_00226870(param_1);
      return;
    }
    local_28[1] = 0;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,local_28 + 1);
  return;
}

