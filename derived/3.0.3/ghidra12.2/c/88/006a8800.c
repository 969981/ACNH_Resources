
int thunk_FUN_006a8804(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_368 [560];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_00692648();
  FUN_006922d4();
  FUN_00692648(param_1);
  FUN_00692344();
  lVar3 = FUN_006925f4();
  if (lVar3 == 0) {
    return 0x806db;
  }
  iVar2 = FUN_00692658(param_1,lVar3);
  if (iVar2 != 0) goto LAB_006a88e8;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  FUN_00693290(&uStack_130,0x100,&DAT_0405bd3d,"/api/v1/message_cards?offset=%d&limit=%d",
               *(undefined4 *)(param_1 + 0x268),*(undefined4 *)(param_1 + 0x26c));
  iVar2 = FUN_00174e0c(lVar3,0x2734,&DAT_040f20e7);
  if ((iVar2 != 0) || (iVar2 = FUN_00174e0c(lVar3,0x2712,&uStack_130), iVar2 != 0)) {
    iVar2 = FUN_00693380();
    goto LAB_006a88e8;
  }
  uStack_138 = 0;
  FUN_00696a0c(&uStack_138);
  uVar4 = FUN_0069c3c4(param_1);
  iVar2 = FUN_00696a48(&uStack_138,"Authorization","Bearer %s",uVar4);
  if ((iVar2 == 0) &&
     (iVar2 = FUN_00696a48(&uStack_138,"Content-Type","application/x-msgpack"), iVar2 == 0)) {
    uVar4 = FUN_00696a40(&uStack_138);
    iVar2 = FUN_00174e0c(lVar3,0x2727,uVar4);
    if (iVar2 == 0) {
      iVar2 = FUN_00692988(param_1,DAT_04bdf458);
      if (iVar2 == 0) {
        FUN_00692d10(param_1);
        nn::os::SdkMutexType::Lock();
        uVar5 = FUN_00692d30(param_1);
        if ((uVar5 & 1) == 0) {
          nn::os::SdkMutexType::Unlock();
          iVar2 = 0x4db;
        }
        else {
          *(undefined4 *)(param_1 + 0x270) = 0;
          memset(auStack_368,0,0x230);
          FUN_00694a2c(auStack_368);
          FUN_00694a74(auStack_368,DAT_04bdf5d8,param_1);
          uVar4 = thunk_FUN_00692d18(param_1);
          uVar6 = FUN_00692abc(param_1);
          uVar5 = FUN_00694a80(auStack_368,uVar4,uVar6);
          if ((uVar5 & 1) == 0) {
            if (*(char *)(param_1 + 0x27d) == '\0') goto LAB_006a8a58;
            iVar2 = 0x2edb;
          }
          else {
            uVar1 = *(uint *)(param_1 + 0x270) - (*(uint *)(param_1 + 0x270) >> 1 & 0x55555555);
            uVar1 = (uVar1 & 0x33333333) + (uVar1 >> 2 & 0x33333333);
            if ((uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 == 3) {
              iVar2 = 0;
            }
            else {
LAB_006a8a58:
              iVar2 = 0x2adb;
            }
          }
          FUN_00695e14(auStack_368);
          nn::os::SdkMutexType::Unlock();
        }
      }
    }
    else {
      iVar2 = FUN_00693380();
    }
  }
  FUN_00696a14(&uStack_138);
LAB_006a88e8:
  FUN_00692648(param_1);
  FUN_00692338();
  return iVar2;
}

