
void FUN_00249f28(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_78;
  undefined4 local_70;
  undefined *local_68 [3];
  undefined2 local_50;
  int local_48 [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar2 = nn::ldn::GetIpv4Address((Ipv4Address *)&local_28,(SubnetMask *)&local_34);
  local_38 = (undefined4)uVar2;
  FUN_00247918(local_48,uVar2,&local_38);
  if (local_48[0] == 0) {
    uVar1 = nn::ldn::MakeBroadcastAddress(local_28,local_34);
    local_68[0] = PTR_DAT_04bccf70 + 0x10;
    FUN_0021f5a0(local_68,uVar1);
    local_50 = 0x3039;
    nn::os::LockMutex((MutexType *)(param_2 + 0x88));
    FUN_00227440(&local_78,param_2 + 0x60,local_68);
    local_70 = 0;
    local_78 = 0x10;
    FUN_00227524(param_2 + 0x60,&local_78);
    local_78 = local_78 & 0xffffffff00000000;
    local_24 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_78 + 4),(Result *)&local_24);
    FUN_002296c4(param_1,&local_78);
    nn::os::UnlockMutex((MutexType *)(param_2 + 0x88));
    FUN_0021f584(local_68);
    return;
  }
  FUN_002296c4(param_1,local_48);
  return;
}

