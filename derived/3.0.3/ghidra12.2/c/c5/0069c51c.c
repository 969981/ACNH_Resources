
undefined8 FUN_0069c51c(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00692d10();
  nn::os::SdkMutexType::Lock();
  uVar3 = FUN_00692d30(param_1);
  if ((uVar3 & 1) == 0) {
    nn::os::SdkMutexType::Unlock();
    return 0x4db;
  }
  lVar1 = param_1 + 0x70;
  FUN_006a0d34(lVar1,param_1 + 0x1d0,param_1 + 0x180);
  uVar4 = FUN_00692650(param_1);
  FUN_00692640(lVar1,uVar4);
  nn::os::SdkMutexType::Unlock();
  uVar4 = FUN_00692d18(param_1);
  uVar5 = FUN_00692d20(param_1);
  FUN_00692bcc(lVar1,uVar4,uVar5);
  uVar4 = FUN_00692648(param_1);
  FUN_00692638(lVar1,uVar4);
  FUN_00692c40(lVar1);
  uVar2 = FUN_00691564(param_1 + 0x138);
  FUN_00692d40(param_1,uVar2);
  uVar4 = FUN_0069155c(param_1 + 0x138);
  return uVar4;
}

