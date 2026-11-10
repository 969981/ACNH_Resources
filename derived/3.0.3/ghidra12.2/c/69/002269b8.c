
void FUN_002269b8(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined4 local_30;
  ErrorResultVariant aEStack_2c [12];
  undefined4 local_14;
  
  if (*param_2 < 0) {
    local_30 = 0x10c07;
  }
  else {
    iVar1 = nn::socket::Close(*param_2);
    *(undefined1 *)(param_2 + 2) = 0;
    param_2[3] = -1;
    *param_2 = -1;
    param_2[1] = param_2[1] + -1;
    if (iVar1 < 0) {
      nn::socket::GetLastError();
      FUN_00226870(param_1);
      return;
    }
    local_30 = 0;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)&local_14);
  FUN_002296c4(param_1,&local_30);
  return;
}

