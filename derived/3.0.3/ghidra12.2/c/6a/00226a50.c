
/* WARNING: Type propagation algorithm not settling */

void FUN_00226a50(int *param_1,int *param_2,undefined8 param_3,int param_4,ulong param_5)

{
  int iVar1;
  int iVar2;
  SockAddr *pSVar3;
  ulong *puVar4;
  undefined4 local_e0;
  ErrorResultVariant aEStack_dc [12];
  ulong local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_34;
  
  puVar4 = (ulong *)&local_e0;
  iVar1 = *param_2;
  if (iVar1 < 0) {
    local_d0 = local_d0 & 0xffffffff00000000;
    local_c0._0_4_ = 0x10c07;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_c0 + 4),(Result *)&local_d0);
    puVar4 = &local_c0;
  }
  else {
    FUN_0021f6f8(param_3);
    if (((param_5 & 1) != 0) && (FUN_00226bbc(param_1,param_2,1), *param_1 != 0)) {
      return;
    }
    iVar2 = param_2[2];
    FUN_0022719c(&local_c0);
    FUN_002271a8(&local_c0,param_3,(char)iVar2,param_4);
    local_c8 = 0;
    local_d0 = 4;
    FUN_00227254(&local_c0,&local_d0);
    pSVar3 = (SockAddr *)FUN_00227250(&local_c0);
    iVar2 = nn::socket::Bind(iVar1,pSVar3,0x10);
    if (iVar2 < 0) {
      nn::socket::GetLastError();
      FUN_00226870(param_1);
      return;
    }
    FUN_00226c48(&local_d0,param_2,iVar1);
    if ((int)local_d0 == 0) {
      param_2[3] = param_4;
      local_e0 = 0;
      local_34 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_dc,(Result *)&local_34);
    }
    else {
      puVar4 = &local_d0;
    }
  }
  FUN_002296c4(param_1,puVar4);
  return;
}

