
void FUN_00226ce0(undefined8 param_1,int *param_2,byte param_3)

{
  byte bVar1;
  int iVar2;
  uint local_28 [2];
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if (*param_2 < 0) {
    local_28[1] = 0x10c07;
  }
  else {
    bVar1 = 0x40;
    if (param_3 != 0) {
      bVar1 = param_3;
    }
    local_28[0] = (uint)bVar1;
    iVar2 = nn::socket::SetSockOpt(*param_2,0,4,local_28,4);
    if (iVar2 < 0) {
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

