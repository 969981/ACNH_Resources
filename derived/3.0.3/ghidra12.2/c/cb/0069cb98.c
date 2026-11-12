
int FUN_0069cb98(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
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
  if (iVar1 != 0) goto LAB_0069cc78;
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
  FUN_00693290(&local_140,0x100,&DAT_0405bd3d,"/api/v1/notification_tokens");
  iVar1 = FUN_00174e0c(lVar2,0x2734,&DAT_040ccbde);
  if ((iVar1 != 0) || (iVar1 = FUN_00174e0c(lVar2,0x2712,&local_140), iVar1 != 0)) {
    iVar1 = FUN_00693380();
    goto LAB_0069cc78;
  }
  local_28 = 0;
  FUN_00696a0c(&local_28);
  FUN_00692d10(param_1);
  nn::os::SdkMutexType::Lock();
  uVar3 = FUN_00692d30(param_1);
  if ((uVar3 & 1) == 0) {
    nn::os::SdkMutexType::Unlock();
    iVar1 = 0x4db;
  }
  else {
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    uStack_158 = 0;
    FUN_006960d0(&local_160);
    local_168 = 0;
    FUN_00696170(&local_168);
    uVar4 = thunk_FUN_00692d18(param_1);
    uVar5 = thunk_FUN_00692d20(param_1);
    FUN_006960e8(&local_160,uVar4,uVar5);
    FUN_00696178(&local_168,&local_160);
    uVar3 = FUN_00696180(&local_168,1);
    if (((uVar3 & 1) == 0) || (uVar3 = FUN_006963a0(&local_168,"token"), (uVar3 & 1) == 0)) {
LAB_0069d0c0:
      iVar1 = 0x6db;
    }
    else {
      if (*(char *)(param_1 + 0x260) == '\0') {
        uVar4 = 0;
      }
      else if (*(char *)(param_1 + 0x261) == '\0') {
        uVar4 = 1;
      }
      else if (*(char *)(param_1 + 0x262) == '\0') {
        uVar4 = 2;
      }
      else if (*(char *)(param_1 + 0x263) == '\0') {
        uVar4 = 3;
      }
      else if (*(char *)(param_1 + 0x264) == '\0') {
        uVar4 = 4;
      }
      else if (*(char *)(param_1 + 0x265) == '\0') {
        uVar4 = 5;
      }
      else if (*(char *)(param_1 + 0x266) == '\0') {
        uVar4 = 6;
      }
      else if (*(char *)(param_1 + 0x267) == '\0') {
        uVar4 = 7;
      }
      else if (*(char *)(param_1 + 0x268) == '\0') {
        uVar4 = 8;
      }
      else if (*(char *)(param_1 + 0x269) == '\0') {
        uVar4 = 9;
      }
      else if (*(char *)(param_1 + 0x26a) == '\0') {
        uVar4 = 10;
      }
      else if (*(char *)(param_1 + 0x26b) == '\0') {
        uVar4 = 0xb;
      }
      else if (*(char *)(param_1 + 0x26c) == '\0') {
        uVar4 = 0xc;
      }
      else if (*(char *)(param_1 + 0x26d) == '\0') {
        uVar4 = 0xd;
      }
      else if (*(char *)(param_1 + 0x26e) == '\0') {
        uVar4 = 0xe;
      }
      else if (*(char *)(param_1 + 0x26f) == '\0') {
        uVar4 = 0xf;
      }
      else if (*(char *)(param_1 + 0x270) == '\0') {
        uVar4 = 0x10;
      }
      else if (*(char *)(param_1 + 0x271) == '\0') {
        uVar4 = 0x11;
      }
      else if (*(char *)(param_1 + 0x272) == '\0') {
        uVar4 = 0x12;
      }
      else if (*(char *)(param_1 + 0x273) == '\0') {
        uVar4 = 0x13;
      }
      else if (*(char *)(param_1 + 0x274) == '\0') {
        uVar4 = 0x14;
      }
      else if (*(char *)(param_1 + 0x275) == '\0') {
        uVar4 = 0x15;
      }
      else if (*(char *)(param_1 + 0x276) == '\0') {
        uVar4 = 0x16;
      }
      else if (*(char *)(param_1 + 0x277) == '\0') {
        uVar4 = 0x17;
      }
      else if (*(char *)(param_1 + 0x278) == '\0') {
        uVar4 = 0x18;
      }
      else if (*(char *)(param_1 + 0x279) == '\0') {
        uVar4 = 0x19;
      }
      else if (*(char *)(param_1 + 0x27a) == '\0') {
        uVar4 = 0x1a;
      }
      else if (*(char *)(param_1 + 0x27b) == '\0') {
        uVar4 = 0x1b;
      }
      else if (*(char *)(param_1 + 0x27c) == '\0') {
        uVar4 = 0x1c;
      }
      else if (*(char *)(param_1 + 0x27d) == '\0') {
        uVar4 = 0x1d;
      }
      else if (*(char *)(param_1 + 0x27e) == '\0') {
        uVar4 = 0x1e;
      }
      else if (*(char *)(param_1 + 0x27f) == '\0') {
        uVar4 = 0x1f;
      }
      else if (*(char *)(param_1 + 0x280) == '\0') {
        uVar4 = 0x20;
      }
      else if (*(char *)(param_1 + 0x281) == '\0') {
        uVar4 = 0x21;
      }
      else if (*(char *)(param_1 + 0x282) == '\0') {
        uVar4 = 0x22;
      }
      else if (*(char *)(param_1 + 0x283) == '\0') {
        uVar4 = 0x23;
      }
      else if (*(char *)(param_1 + 0x284) == '\0') {
        uVar4 = 0x24;
      }
      else if (*(char *)(param_1 + 0x285) == '\0') {
        uVar4 = 0x25;
      }
      else if (*(char *)(param_1 + 0x286) == '\0') {
        uVar4 = 0x26;
      }
      else {
        uVar4 = 0x27;
        if (*(char *)(param_1 + 0x287) != '\0') {
          uVar4 = 0x28;
        }
      }
      uVar3 = FUN_006963fc(&local_168,param_1 + 0x260,uVar4);
      if ((uVar3 & 1) == 0) goto LAB_0069d0c0;
      uVar4 = FUN_00696158(&local_160);
      iVar1 = FUN_00174e0c(lVar2,0x271f,uVar4);
      if (iVar1 == 0) {
        uVar4 = FUN_00696160(&local_160);
        iVar1 = FUN_00174e0c(lVar2,0x3c,uVar4);
        if (iVar1 == 0) {
          nn::os::SdkMutexType::Unlock();
          uVar4 = FUN_0069c3c4(param_1);
          iVar1 = FUN_00696a48(&local_28,"Authorization","Bearer %s",uVar4);
          if ((iVar1 == 0) &&
             (iVar1 = FUN_00696a48(&local_28,"Content-Type","application/x-msgpack"), iVar1 == 0)) {
            uVar4 = FUN_00696a40(&local_28);
            iVar1 = FUN_00174e0c(lVar2,0x2727,uVar4);
            if (iVar1 == 0) {
              iVar1 = FUN_00692988(param_1,DAT_04bdf458);
            }
            else {
              iVar1 = FUN_00693380();
            }
          }
          goto LAB_0069d02c;
        }
      }
      iVar1 = FUN_00693380();
    }
    nn::os::SdkMutexType::Unlock();
  }
LAB_0069d02c:
  FUN_00696a14(&local_28);
LAB_0069cc78:
  FUN_00692648(param_1);
  FUN_00692338();
  return iVar1;
}

