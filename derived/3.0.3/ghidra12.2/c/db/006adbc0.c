
int thunk_FUN_006adbc4(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
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
  undefined8 uStack_28;
  
  FUN_00692648();
  FUN_006922d4();
  FUN_00692648(param_1);
  FUN_00692344();
  lVar2 = FUN_006925f4();
  if (lVar2 == 0) {
    return 0x806db;
  }
  iVar1 = FUN_00692658(param_1,lVar2);
  if (iVar1 != 0) goto LAB_006adcb0;
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
  uStack_140 = 0;
  uStack_138 = 0;
  puVar3 = (undefined8 *)FUN_0069c3bc(param_1);
  FUN_00693290(&uStack_140,0x100,&DAT_0405bd3d,"/api/v1/users/%llu/profile",*puVar3);
  iVar1 = FUN_00174e0c(lVar2,0x2734,&DAT_040844d6);
  if ((iVar1 != 0) || (iVar1 = FUN_00174e0c(lVar2,0x2712,&uStack_140), iVar1 != 0)) {
    iVar1 = FUN_00693380();
    goto LAB_006adcb0;
  }
  uStack_28 = 0;
  FUN_00696a0c(&uStack_28);
  FUN_00692d10(param_1);
  nn::os::SdkMutexType::Lock();
  uVar4 = FUN_00692d30(param_1);
  if ((uVar4 & 1) == 0) {
LAB_006adf90:
    nn::os::SdkMutexType::Unlock();
    iVar1 = 0x4db;
  }
  else {
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    FUN_006960d0(&uStack_1e8);
    uStack_240 = 0;
    FUN_00696170(&uStack_240);
    uVar5 = thunk_FUN_00692d18(param_1);
    uVar6 = thunk_FUN_00692d20(param_1);
    FUN_006960e8(&uStack_1e8,uVar5,uVar6);
    FUN_00696178(&uStack_240,&uStack_1e8);
    uVar4 = FUN_006969fc(&uStack_240,*(undefined8 *)(param_1 + 600),*(undefined8 *)(param_1 + 0x260)
                        );
    if ((uVar4 & 1) == 0) {
      iVar1 = 0x6db;
    }
    else {
      uVar5 = FUN_00696158(&uStack_1e8);
      iVar1 = FUN_00174e0c(lVar2,0x271f,uVar5);
      if (iVar1 == 0) {
        uVar5 = FUN_00696160(&uStack_1e8);
        iVar1 = FUN_00174e0c(lVar2,0x3c,uVar5);
        if (iVar1 == 0) {
          nn::os::SdkMutexType::Unlock();
          uVar5 = FUN_0069c3c4(param_1);
          iVar1 = FUN_00696a48(&uStack_28,"Authorization","Bearer %s",uVar5);
          if (((iVar1 == 0) &&
              (iVar1 = FUN_00696a48(&uStack_28,"Content-Type","application/x-msgpack"), iVar1 == 0))
             && (iVar1 = FUN_00696a48(&uStack_28,"Expect",&DAT_0407ebb1), iVar1 == 0)) {
            uVar5 = FUN_00696a40(&uStack_28);
            iVar1 = FUN_00174e0c(lVar2,0x2727,uVar5);
            if (iVar1 == 0) {
              iVar1 = FUN_00692988(param_1,DAT_04bdf458);
              if (iVar1 == 0) {
                FUN_00692d10(param_1);
                nn::os::SdkMutexType::Lock();
                uVar4 = FUN_00692d30(param_1);
                if ((uVar4 & 1) == 0) goto LAB_006adf90;
                uStack_1e8 = 0;
                uStack_150 = 0;
                uStack_148 = 0;
                uStack_160 = 0;
                uStack_158 = 0;
                uStack_170 = 0;
                uStack_168 = 0;
                uStack_180 = 0;
                uStack_178 = 0;
                uStack_190 = 0;
                uStack_188 = 0;
                uStack_1a0 = 0;
                uStack_198 = 0;
                uStack_1b0 = 0;
                uStack_1a8 = 0;
                uStack_1c0 = 0;
                uStack_1b8 = 0;
                uStack_1d0 = 0;
                uStack_1c8 = 0;
                uStack_1e0 = 0;
                uStack_1d8 = 0;
                FUN_00693484(&uStack_1e8,&uStack_1d0,3);
                uStack_1f8 = 0;
                uStack_1f0 = 0;
                uStack_208 = 0;
                uStack_200 = 0;
                uStack_210 = 0;
                uStack_218 = 0;
                uStack_240 = 0;
                uStack_228 = 0;
                uStack_220 = 0;
                uStack_238 = 0;
                uStack_230 = 0;
                FUN_006938e4(&uStack_1e8,&DAT_0407666f,&uStack_210);
                FUN_0069396c(&uStack_1e8,"$.digest",&uStack_240,0x29);
                FUN_006936b4(&uStack_1e8,"$.created_at",&uStack_1f0);
                uVar5 = thunk_FUN_00692d18(param_1);
                uVar6 = FUN_00692abc(param_1);
                uVar4 = FUN_0069dac0(&uStack_1e8,uVar5,uVar6);
                if (((uVar4 & 1) == 0) ||
                   (uVar4 = FUN_0069be70(&uStack_208,&uStack_240), (uVar4 & 1) == 0)) {
                  nn::os::SdkMutexType::Unlock();
                  iVar1 = 0x2adb;
                }
                else {
                  puVar3 = *(undefined8 **)(param_1 + 0x250);
                  if (puVar3 != (undefined8 *)0x0) {
                    *puVar3 = uStack_210;
                    puVar3[3] = uStack_1f8;
                    puVar3[4] = uStack_1f0;
                    puVar3[1] = uStack_208;
                    puVar3[2] = uStack_200;
                  }
                  nn::os::SdkMutexType::Unlock();
                  iVar1 = 0;
                }
              }
            }
            else {
              iVar1 = FUN_00693380();
            }
          }
          goto LAB_006adda8;
        }
      }
      iVar1 = FUN_00693380();
    }
    nn::os::SdkMutexType::Unlock();
  }
LAB_006adda8:
  FUN_00696a14(&uStack_28);
LAB_006adcb0:
  FUN_00692648(param_1);
  FUN_00692338();
  return iVar1;
}

