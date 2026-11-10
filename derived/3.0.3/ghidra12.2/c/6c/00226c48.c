
void FUN_00226c48(undefined8 param_1,long param_2,int param_3)

{
  int iVar1;
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if (param_3 < 0) {
    local_24 = 0x10c07;
  }
  else {
    if (*(char *)(param_2 + 8) == '\x02') {
      local_24 = 1;
      iVar1 = nn::socket::SetSockOpt(param_3,0xffff,0x20,&local_24,4);
      if (iVar1 < 0) {
        nn::socket::GetLastError();
        FUN_00226870(param_1);
        return;
      }
    }
    local_24 = 0;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

