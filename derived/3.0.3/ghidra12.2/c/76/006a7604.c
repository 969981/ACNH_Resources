
int FUN_006a7604(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  FUN_00692648();
  FUN_006922d4();
  FUN_00692648(param_1);
  FUN_00692344();
  lVar3 = FUN_006925f4();
  if (lVar3 == 0) {
    return 0x806db;
  }
  iVar2 = FUN_00692658(param_1,lVar3);
  if (iVar2 != 0) goto LAB_006a76e8;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_140 = 0;
  uStack_138 = 0;
  FUN_00693290(&local_140,0x100,&DAT_0405bd3d,"/api/v1/dream_lands/%llu/storage",
               *(undefined8 *)(param_1 + 600));
  iVar2 = FUN_00174e0c(lVar3,0x2734,&DAT_040ccbde);
  if ((iVar2 != 0) || (iVar2 = FUN_00174e0c(lVar3,0x2712,&local_140), iVar2 != 0)) {
    iVar2 = FUN_00693380();
    goto LAB_006a76e8;
  }
  local_28 = 0;
  FUN_00696a0c(&local_28);
  FUN_00692d10(param_1);
  nn::os::SdkMutexType::Lock();
  uVar4 = FUN_00692d30(param_1);
  if ((uVar4 & 1) == 0) {
LAB_006a79b0:
    nn::os::SdkMutexType::Unlock();
    iVar2 = 0x4db;
  }
  else {
    local_368 = 0;
    uStack_360 = 0;
    local_378 = 0;
    uStack_370 = 0;
    FUN_006960d0(&local_378);
    local_148 = 0;
    FUN_00696170(&local_148);
    uVar5 = thunk_FUN_00692d18(param_1);
    uVar6 = thunk_FUN_00692d20(param_1);
    FUN_006960e8(&local_378,uVar5,uVar6);
    FUN_00696178(&local_148,&local_378);
    uVar4 = FUN_00696180(&local_148,2);
    if (((((uVar4 & 1) == 0) || (uVar4 = FUN_006963a0(&local_148,"count"), (uVar4 & 1) == 0)) ||
        (uVar4 = FUN_0069677c(&local_148,*(undefined4 *)(param_1 + 0x260)), (uVar4 & 1) == 0)) ||
       ((uVar4 = FUN_006963a0(&local_148,"endpoint"), (uVar4 & 1) == 0 ||
        (uVar4 = FUN_00696840(&local_148,*(undefined8 *)(param_1 + 0x268)), (uVar4 & 1) == 0)))) {
      iVar2 = 0x6db;
    }
    else {
      uVar5 = FUN_00696158(&local_378);
      iVar2 = FUN_00174e0c(lVar3,0x271f,uVar5);
      if (iVar2 == 0) {
        uVar5 = FUN_00696160(&local_378);
        iVar2 = FUN_00174e0c(lVar3,0x3c,uVar5);
        if (iVar2 == 0) {
          nn::os::SdkMutexType::Unlock();
          uVar5 = FUN_0069c3c4(param_1);
          iVar2 = FUN_00696a48(&local_28,"Authorization","Bearer %s",uVar5);
          if (((iVar2 == 0) &&
              (iVar2 = FUN_00696a48(&local_28,"Content-Type","application/x-msgpack"), iVar2 == 0))
             && (iVar2 = FUN_00696a48(&local_28,"Expect",&DAT_0407ebb1), iVar2 == 0)) {
            uVar5 = FUN_00696a40(&local_28);
            iVar2 = FUN_00174e0c(lVar3,0x2727,uVar5);
            if (iVar2 == 0) {
              iVar2 = FUN_00692988(param_1,DAT_04bdf458);
              if (iVar2 == 0) {
                FUN_00692d10(param_1);
                nn::os::SdkMutexType::Lock();
                uVar4 = FUN_00692d30(param_1);
                if ((uVar4 & 1) == 0) goto LAB_006a79b0;
                *(undefined4 *)(param_1 + 0x270) = 0;
                memset(&local_378,0,0x230);
                FUN_00694a2c(&local_378);
                FUN_00694a74(&local_378,DAT_04bdf5b0,param_1);
                uVar5 = thunk_FUN_00692d18(param_1);
                uVar6 = FUN_00692abc(param_1);
                uVar4 = FUN_00694a80(&local_378,uVar5,uVar6);
                if (((uVar4 & 1) == 0) ||
                   (uVar1 = *(uint *)(param_1 + 0x270) -
                            (*(uint *)(param_1 + 0x270) >> 1 & 0x55555555),
                   uVar1 = (uVar1 & 0x33333333) + (uVar1 >> 2 & 0x33333333),
                   (uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 != 1)) {
                  iVar2 = 0x2adb;
                }
                else {
                  iVar2 = 0;
                }
                FUN_00695e14(&local_378);
                goto LAB_006a7820;
              }
            }
            else {
              iVar2 = FUN_00693380();
            }
          }
          goto LAB_006a7824;
        }
      }
      iVar2 = FUN_00693380();
    }
LAB_006a7820:
    nn::os::SdkMutexType::Unlock();
  }
LAB_006a7824:
  FUN_00696a14(&local_28);
LAB_006a76e8:
  FUN_00692648(param_1);
  FUN_00692338();
  return iVar2;
}

