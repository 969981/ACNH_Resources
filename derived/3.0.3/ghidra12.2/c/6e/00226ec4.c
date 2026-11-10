
void FUN_00226ec4(undefined8 param_1,int *param_2,undefined8 param_3,int param_4,undefined8 param_5,
                 undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_e0;
  ErrorResultVariant aEStack_dc [12];
  undefined1 auStack_d0 [128];
  undefined4 local_44;
  
  iVar1 = param_2[3];
  iVar2 = param_2[2];
  FUN_0022719c(auStack_d0);
  FUN_002271a8(auStack_d0,param_5,(char)iVar2,iVar1);
  iVar1 = *param_2;
  if (iVar1 < 0) {
    local_e0 = 0x10c07;
  }
  else {
    uVar3 = FUN_00227250(auStack_d0);
    lVar4 = nn::socket::SendTo(iVar1,param_3,(long)param_4,0,uVar3,0x10);
    if (lVar4 < 0) {
      nn::socket::GetLastError();
      FUN_00226750(param_1);
      return;
    }
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = (int)lVar4;
    }
    local_e0 = 0;
  }
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_dc,(Result *)&local_44);
  FUN_002296c4(param_1,&local_e0);
  return;
}

