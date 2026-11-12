
int FUN_006a69c0(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_150;
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
  
  FUN_00692648();
  FUN_006922d4();
  FUN_00692648(param_1);
  FUN_00692344();
  lVar3 = FUN_006925f4();
  if (lVar3 == 0) {
    return 0x806db;
  }
  iVar2 = FUN_00692658(param_1,lVar3);
  if (iVar2 != 0) goto LAB_006a6aa0;
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
  FUN_00693290(&local_140,0x100,&DAT_0405bd3d,"/api/v1/lands/updated_addresses");
  iVar2 = FUN_00174e0c(lVar3,0x2734,&DAT_040ccbde);
  if ((iVar2 != 0) || (iVar2 = FUN_00174e0c(lVar3,0x2712,&local_140), iVar2 != 0)) {
    iVar2 = FUN_00693380();
    goto LAB_006a6aa0;
  }
  local_148 = 0;
  FUN_00696a0c(&local_148);
  FUN_00692d10(param_1);
  nn::os::SdkMutexType::Lock();
  uVar4 = FUN_00692d30(param_1);
  if ((uVar4 & 1) == 0) {
LAB_006a6d84:
    nn::os::SdkMutexType::Unlock();
    iVar2 = 0x4db;
    goto LAB_006a6c14;
  }
  local_370 = 0;
  uStack_368 = 0;
  local_380 = 0;
  uStack_378 = 0;
  FUN_006960d0(&local_380);
  local_150 = 0;
  FUN_00696170(&local_150);
  uVar5 = thunk_FUN_00692d18(param_1);
  uVar6 = thunk_FUN_00692d20(param_1);
  FUN_006960e8(&local_380,uVar5,uVar6);
  FUN_00696178(&local_150,&local_380);
  uVar4 = FUN_00696180(&local_150,2);
  if ((((uVar4 & 1) == 0) || (uVar4 = FUN_006963a0(&local_150,"user_ids"), (uVar4 & 1) == 0)) ||
     (uVar4 = FUN_00696288(&local_150,(long)*(int *)(param_1 + 0x270)), (uVar4 & 1) == 0)) {
LAB_006a6d78:
    iVar2 = 0x6db;
LAB_006a6c10:
    nn::os::SdkMutexType::Unlock();
  }
  else {
    if (0 < *(int *)(param_1 + 0x270)) {
      lVar7 = 0;
      iVar2 = 0x6db;
      do {
        uVar4 = FUN_006967a0(&local_150,*(undefined8 *)(*(long *)(param_1 + 0x268) + lVar7 * 8));
        if ((uVar4 & 1) == 0) goto LAB_006a6c10;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(param_1 + 0x270));
    }
    uVar4 = FUN_006963a0(&local_150,"since");
    if (((uVar4 & 1) == 0) ||
       (uVar4 = thunk_FUN_006965e8(&local_150,*(undefined8 *)(param_1 + 0x278)), (uVar4 & 1) == 0))
    goto LAB_006a6d78;
    uVar5 = FUN_00696158(&local_380);
    iVar2 = FUN_00174e0c(lVar3,0x271f,uVar5);
    if (iVar2 != 0) {
LAB_006a6c04:
      iVar2 = FUN_00693380();
      goto LAB_006a6c10;
    }
    uVar5 = FUN_00696160(&local_380);
    iVar2 = FUN_00174e0c(lVar3,0x3c,uVar5);
    if (iVar2 != 0) goto LAB_006a6c04;
    nn::os::SdkMutexType::Unlock();
    uVar5 = FUN_0069c3c4(param_1);
    iVar2 = FUN_00696a48(&local_148,"Authorization","Bearer %s",uVar5);
    if ((iVar2 == 0) &&
       (iVar2 = FUN_00696a48(&local_148,"Content-Type","application/x-msgpack"), iVar2 == 0)) {
      uVar5 = FUN_00696a40(&local_148);
      iVar2 = FUN_00174e0c(lVar3,0x2727,uVar5);
      if (iVar2 != 0) {
        iVar2 = FUN_00693380();
        goto LAB_006a6c14;
      }
      iVar2 = FUN_00692988(param_1,DAT_04bdf458);
      if (iVar2 != 0) goto LAB_006a6c14;
      FUN_00692d10(param_1);
      nn::os::SdkMutexType::Lock();
      uVar4 = FUN_00692d30(param_1);
      if ((uVar4 & 1) == 0) goto LAB_006a6d84;
      *(undefined4 *)(param_1 + 0x280) = 0;
      memset(&local_380,0,0x230);
      FUN_00694a2c(&local_380);
      FUN_00694a74(&local_380,DAT_04bdf598,param_1);
      uVar5 = thunk_FUN_00692d18(param_1);
      uVar6 = FUN_00692abc(param_1);
      uVar4 = FUN_00694a80(&local_380,uVar5,uVar6);
      if (((uVar4 & 1) == 0) ||
         (uVar1 = *(uint *)(param_1 + 0x280) - (*(uint *)(param_1 + 0x280) >> 1 & 0x55555555),
         uVar1 = (uVar1 & 0x33333333) + (uVar1 >> 2 & 0x33333333),
         (uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 != 2)) {
        iVar2 = 0x2adb;
      }
      else {
        iVar2 = 0;
      }
      FUN_00695e14(&local_380);
      goto LAB_006a6c10;
    }
  }
LAB_006a6c14:
  FUN_00696a14(&local_148);
LAB_006a6aa0:
  FUN_00692648(param_1);
  FUN_00692338();
  return iVar2;
}

