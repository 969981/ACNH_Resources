
int FUN_006a666c(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  void *__src;
  size_t __n;
  ulong uVar6;
  void *__dest;
  undefined1 auStack_370 [560];
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
  lVar2 = FUN_006925f4();
  if (lVar2 == 0) {
    return 0x806db;
  }
  iVar1 = FUN_00692658(param_1,lVar2);
  if (iVar1 == 0) {
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
    FUN_00693290(&local_140,0x100,&DAT_0405bd3d,"/api/v1/resort_planners/%llu/profile",
                 *(undefined8 *)(param_1 + 600));
    iVar1 = FUN_00174e0c(lVar2,0x2734,&DAT_040f20e7);
    if ((iVar1 == 0) && (iVar1 = FUN_00174e0c(lVar2,0x2712,&local_140), iVar1 == 0)) {
      local_28 = 0;
      FUN_00696a0c(&local_28);
      uVar3 = FUN_0069c3c4(param_1);
      iVar1 = FUN_00696a48(&local_28,"Authorization","Bearer %s",uVar3);
      if ((iVar1 == 0) &&
         (iVar1 = FUN_00696a48(&local_28,"Content-Type","application/x-msgpack"), iVar1 == 0)) {
        uVar3 = FUN_00696a40(&local_28);
        iVar1 = FUN_00174e0c(lVar2,0x2727,uVar3);
        if (iVar1 == 0) {
          iVar1 = FUN_00692988(param_1,DAT_04bdf458);
          if (iVar1 == 0) {
            memset(auStack_370,0,0x230);
            FUN_00694a2c(auStack_370);
            uVar3 = thunk_FUN_00692d18(param_1);
            uVar4 = FUN_00692abc(param_1);
            uVar5 = FUN_00694a80(auStack_370,uVar3,uVar4);
            if ((uVar5 & 1) == 0) {
              iVar1 = 0x2adb;
            }
            else {
              FUN_00692d10(param_1);
              nn::os::SdkMutexType::Lock();
              uVar5 = FUN_00692d30(param_1);
              if ((uVar5 & 1) == 0) {
                iVar1 = 0x4db;
              }
              else {
                uVar6 = *(ulong *)(*(long *)(param_1 + 0x250) + 8);
                uVar5 = FUN_00692abc(param_1);
                if (uVar6 < uVar5) {
                  iVar1 = 0x2edb;
                }
                else {
                  __dest = (void *)**(undefined8 **)(param_1 + 0x250);
                  __src = (void *)thunk_FUN_00692d18(param_1);
                  __n = FUN_00692abc(param_1);
                  memcpy(__dest,__src,__n);
                  uVar3 = FUN_00692abc(param_1);
                  iVar1 = 0;
                  *(undefined8 *)(*(long *)(param_1 + 0x250) + 0x10) = uVar3;
                }
              }
              nn::os::SdkMutexType::Unlock();
            }
            FUN_00695e14(auStack_370);
          }
        }
        else {
          iVar1 = FUN_00693380();
        }
      }
      FUN_00696a14(&local_28);
    }
    else {
      iVar1 = FUN_00693380();
    }
  }
  FUN_00692648(param_1);
  FUN_00692338();
  return iVar1;
}

