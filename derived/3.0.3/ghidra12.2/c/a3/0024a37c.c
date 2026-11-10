
bool FUN_0024a37c(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  SubnetMask aSStack_34 [4];
  int local_30 [4];
  undefined4 local_18;
  int local_14;
  
  uVar2 = nn::ldn::GetState();
  *(undefined2 *)(param_1 + 8) = uVar2;
  iVar3 = nn::ldn::GetDisconnectReason();
  if (iVar3 == 0xff) {
    iVar3 = -1;
  }
  *(int *)(param_1 + 0x4c0) = iVar3;
  local_14 = nn::ldn::GetNetworkInfo((NetworkInfo *)(param_1 + 0x40));
  FUN_00247918(local_30,param_2,&local_14);
  if (local_30[0] == 0) {
    local_14 = nn::ldn::GetIpv4Address((Ipv4Address *)&local_18,aSStack_34);
    bVar1 = local_14 == 0;
    if (local_14 == 0) {
      FUN_0021f5a0(param_1 + 0x10,local_18);
      *(undefined2 *)(param_1 + 0x28) = 0x3039;
      return true;
    }
  }
  else {
    FUN_00229780(param_1 + 0x30,local_30);
    bVar1 = false;
  }
  return bVar1;
}

