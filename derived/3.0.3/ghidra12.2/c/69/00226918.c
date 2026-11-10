
void FUN_00226918(undefined8 param_1,int *param_2,char param_3,undefined4 param_4,undefined4 param_5
                 )

{
  int iVar1;
  undefined4 local_30;
  ErrorResultVariant aEStack_2c [12];
  undefined4 local_14;
  
  if (param_3 == '\x02') {
    *(undefined1 *)(param_2 + 2) = 2;
    iVar1 = nn::socket::Socket(2,param_4,param_5);
    if (iVar1 < 0) {
      nn::socket::GetLastError();
      FUN_00226870(param_1);
      return;
    }
    local_30 = 0;
    *param_2 = iVar1;
    param_2[1] = param_2[1] + 1;
  }
  else {
    local_30 = 0x10c07;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)&local_14);
  FUN_002296c4(param_1,&local_30);
  return;
}

