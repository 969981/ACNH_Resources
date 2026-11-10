
void FUN_00226fc0(undefined8 param_1,int *param_2,undefined8 param_3,int param_4,long param_5,
                 uint param_6,undefined4 *param_7)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined4 local_54;
  ErrorResultVariant aEStack_50 [12];
  undefined4 local_44;
  
  iVar1 = *param_2;
  if ((iVar1 < 0) || (param_6 - 0x21 < 0xffffffe0)) {
    local_54 = 0x10c07;
  }
  else {
    uVar3 = (ulong)param_6;
    do {
      lVar2 = nn::socket::SendTo(iVar1,param_3,(long)param_4,0,param_5,0x10);
      if (lVar2 < 0) {
        nn::socket::GetLastError();
        nn::socket::GetLastError();
        FUN_00226750(param_1);
        return;
      }
      param_5 = param_5 + 0x10;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    if (param_7 != (undefined4 *)0x0) {
      *param_7 = (int)lVar2;
    }
    local_54 = 0;
  }
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_44);
  FUN_002296c4(param_1,&local_54);
  return;
}

