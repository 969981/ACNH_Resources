
int FUN_006a5e90(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auStack_368 [560];
  undefined8 local_138;
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
  undefined8 local_40;
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
  if (iVar2 != 0) goto LAB_006a5f80;
  local_40 = 0;
  uStack_38 = 0;
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
  puVar4 = (undefined8 *)FUN_0069c3bc(param_1);
  FUN_00693290(&local_130,0x100,&DAT_0405bd3d,
               "/api/v1/resort_planner_follows/%llu?offset=%d&limit=%d",*puVar4,
               *(undefined4 *)(param_1 + 0x268),*(undefined4 *)(param_1 + 0x26c));
  iVar2 = FUN_00174e0c(lVar3,0x2734,&DAT_040f20e7);
  if ((iVar2 != 0) || (iVar2 = FUN_00174e0c(lVar3,0x2712,&local_130), iVar2 != 0)) {
    iVar2 = FUN_00693380();
    goto LAB_006a5f80;
  }
  local_138 = 0;
  FUN_00696a0c(&local_138);
  uVar5 = FUN_0069c3c4(param_1);
  iVar2 = FUN_00696a48(&local_138,"Authorization","Bearer %s",uVar5);
  if ((iVar2 == 0) &&
     (iVar2 = FUN_00696a48(&local_138,"Content-Type","application/x-msgpack"), iVar2 == 0)) {
    uVar5 = FUN_00696a40(&local_138);
    iVar2 = FUN_00174e0c(lVar3,0x2727,uVar5);
    if (iVar2 == 0) {
      iVar2 = FUN_00692988(param_1,DAT_04bdf458);
      if (iVar2 == 0) {
        FUN_00692d10(param_1);
        nn::os::SdkMutexType::Lock();
        uVar6 = FUN_00692d30(param_1);
        if ((uVar6 & 1) == 0) {
          nn::os::SdkMutexType::Unlock();
          iVar2 = 0x4db;
        }
        else {
          *(undefined4 *)(param_1 + 0x270) = 0;
          memset(auStack_368,0,0x230);
          FUN_00694a2c(auStack_368);
          FUN_00694a74(auStack_368,DAT_04bdf580,param_1);
          uVar5 = thunk_FUN_00692d18(param_1);
          uVar7 = FUN_00692abc(param_1);
          uVar6 = FUN_00694a80(auStack_368,uVar5,uVar7);
          if ((uVar6 & 1) == 0) {
            if (*(char *)(param_1 + 0x27d) == '\0') goto LAB_006a60f0;
            iVar2 = 0x2edb;
          }
          else {
            uVar1 = *(uint *)(param_1 + 0x270) - (*(uint *)(param_1 + 0x270) >> 1 & 0x55555555);
            uVar1 = (uVar1 & 0x33333333) + (uVar1 >> 2 & 0x33333333);
            if ((uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 == 3) {
              iVar2 = 0;
            }
            else {
LAB_006a60f0:
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
  FUN_00696a14(&local_138);
LAB_006a5f80:
  FUN_00692648(param_1);
  FUN_00692338();
  return iVar2;
}

