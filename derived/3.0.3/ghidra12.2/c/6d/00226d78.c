
void FUN_00226d78(undefined8 param_1,int *param_2,undefined8 param_3,int param_4,long param_5,
                 undefined8 param_6,undefined4 *param_7)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 local_d8;
  undefined4 local_d4;
  ErrorResultVariant aEStack_d0 [124];
  undefined4 local_54;
  ErrorResultVariant aEStack_50 [12];
  undefined4 local_44;
  
  iVar1 = *param_2;
  if (iVar1 < 0) {
    local_54 = 0;
    local_d4 = 0x10c07;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_d0,(Result *)&local_54);
    puVar5 = &local_d4;
    goto LAB_00226e84;
  }
  FUN_0022719c(&local_d4);
  local_d8 = 0x10;
  uVar3 = FUN_00227250(&local_d4);
  lVar4 = nn::socket::RecvFrom(iVar1,param_3,(long)param_4,0x80,uVar3,&local_d8);
  if (lVar4 < 0) {
    iVar2 = nn::socket::GetLastError();
    if (iVar2 != 9) {
      FUN_002267e0(param_1);
      return;
    }
    if (iVar1 != *param_2) goto LAB_00226e64;
    local_54 = 0x10c07;
  }
  else if (lVar4 == 0) {
LAB_00226e64:
    local_54 = 0x2c09;
  }
  else {
    if (param_5 != 0) {
      FUN_00227210(&local_d4,param_5);
    }
    if (param_7 != (undefined4 *)0x0) {
      *param_7 = (int)lVar4;
    }
    local_54 = 0;
  }
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_44);
  puVar5 = &local_54;
LAB_00226e84:
  FUN_002296c4(param_1,puVar5);
  return;
}

