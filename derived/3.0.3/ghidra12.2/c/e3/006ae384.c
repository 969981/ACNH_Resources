
uint FUN_006ae384(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  FUN_00692648();
  FUN_006922d4();
  FUN_00692648(param_1);
  FUN_00692344();
  lVar3 = FUN_006925f4();
  if (lVar3 == 0) {
    return 0x806db;
  }
  uVar1 = FUN_00692658(param_1,lVar3);
  if (uVar1 == 0) {
    iVar2 = FUN_00174e0c(lVar3,0x2734,&DAT_040f20e7);
    if ((iVar2 == 0) &&
       (((lVar4 = FUN_0069168c(), lVar4 == 0 ||
         (((iVar2 = FUN_00174e0c(lVar3,0x34,1), iVar2 == 0 &&
           (iVar2 = FUN_00174e0c(lVar3,0x44,lVar4), iVar2 == 0)) &&
          (iVar2 = FUN_00174e0c(lVar3,0xb6,3), iVar2 == 0)))) &&
        ((iVar2 = FUN_00174e0c(lVar3,0x4e2b,PTR_FUN_04bdf690), iVar2 == 0 &&
         (iVar2 = FUN_00174e0c(lVar3,0x2711,param_1), iVar2 == 0)))))) {
      FUN_00692d10(param_1);
      nn::os::SdkMutexType::Lock();
      uVar5 = FUN_00692d30(param_1);
      if ((uVar5 & 1) == 0) {
        uVar1 = 0x4db;
      }
      else {
        iVar2 = FUN_00174e0c(lVar3,0x2712,*(undefined8 *)(param_1 + 0x78));
        if (iVar2 == 0) {
          *(undefined8 *)(*(long *)(param_1 + 0x70) + 0x10) = 0;
          nn::os::SdkMutexType::Unlock();
          uVar1 = FUN_00692988(param_1,0);
          if ((uVar1 != 0) && ((uVar1 & 0x3fffff) == 0x7fedb)) {
            if (*(uint *)(param_1 + 0x80) != 0) {
              uVar1 = *(uint *)(param_1 + 0x80);
            }
          }
          goto LAB_006ae3f8;
        }
        uVar1 = FUN_00693380();
      }
      nn::os::SdkMutexType::Unlock();
    }
    else {
      uVar1 = FUN_00693380();
    }
  }
LAB_006ae3f8:
  FUN_00692648(param_1);
  FUN_00692338();
  return uVar1;
}

