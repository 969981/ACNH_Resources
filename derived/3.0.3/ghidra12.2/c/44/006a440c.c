
int thunk_FUN_006a4410(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_1078 [560];
  undefined8 uStack_e48;
  undefined1 auStack_e40 [2048];
  char acStack_640 [1536];
  
  FUN_00692648();
  FUN_006922d4();
  FUN_00692648(param_1);
  FUN_00692344();
  lVar4 = FUN_006925f4();
  if (lVar4 == 0) {
    return 0x806db;
  }
  iVar2 = FUN_00692658(param_1,lVar4);
  if (iVar2 == 0) {
    memset(acStack_640,0,0x600);
    FUN_00692d10(param_1);
    nn::os::SdkMutexType::Lock();
    uVar5 = FUN_00692d30(param_1);
    if ((uVar5 & 1) == 0) {
      iVar2 = 0x4db;
    }
    else {
      iVar3 = nn::util::SNPrintf(acStack_640,0x600,"offset=%d&limit=%d&with_binaries=false",
                                 (ulong)*(uint *)(param_1 + 0x268),(ulong)*(uint *)(param_1 + 0x26c)
                                );
      pcVar6 = *(char **)(param_1 + 0x270);
      if (pcVar6 == (char *)0x0) {
LAB_006a4538:
        nn::os::SdkMutexType::Unlock();
        memset(auStack_e40,0,0x800);
        FUN_00693290(auStack_e40,0x800,&DAT_0405bd3d,"/api/v2/designs?%s",acStack_640);
        iVar2 = FUN_00174e0c(lVar4,0x2734,&DAT_040f20e7);
        if ((iVar2 == 0) && (iVar2 = FUN_00174e0c(lVar4,0x2712,auStack_e40), iVar2 == 0)) {
          uStack_e48 = 0;
          FUN_00696a0c(&uStack_e48);
          uVar7 = FUN_0069c3c4(param_1);
          iVar2 = FUN_00696a48(&uStack_e48,"Authorization","Bearer %s",uVar7);
          if ((iVar2 == 0) &&
             (iVar2 = FUN_00696a48(&uStack_e48,"Content-Type","application/x-msgpack"), iVar2 == 0))
          {
            uVar7 = FUN_00696a40(&uStack_e48);
            iVar2 = FUN_00174e0c(lVar4,0x2727,uVar7);
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
                  *(undefined4 *)(param_1 + 0x278) = 0;
                  memset(auStack_1078,0,0x230);
                  FUN_00694a2c(auStack_1078);
                  FUN_00694a74(auStack_1078,PTR_LAB_04bdf550,param_1);
                  uVar7 = thunk_FUN_00692d18(param_1);
                  uVar8 = FUN_00692abc(param_1);
                  uVar5 = FUN_00694a80(auStack_1078,uVar7,uVar8);
                  if (((uVar5 & 1) == 0) ||
                     (uVar1 = *(uint *)(param_1 + 0x278) -
                              (*(uint *)(param_1 + 0x278) >> 1 & 0x55555555),
                     uVar1 = (uVar1 & 0x33333333) + (uVar1 >> 2 & 0x33333333),
                     (uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 != 3)) {
                    iVar2 = 0x2adb;
                  }
                  else {
                    iVar2 = 0;
                  }
                  FUN_00695e14(auStack_1078);
                  nn::os::SdkMutexType::Unlock();
                }
              }
            }
            else {
              iVar2 = FUN_00693380();
            }
          }
          FUN_00696a14(&uStack_e48);
        }
        else {
          iVar2 = FUN_00693380();
        }
        goto LAB_006a45a4;
      }
      uVar5 = 0;
      iVar2 = 0x2db;
      do {
        if (pcVar6[uVar5] == '\0') {
LAB_006a44f0:
          if ((((int)uVar5 - 1U < 0x3ff) && (*pcVar6 == '&')) &&
             (uVar5 = FUN_00696050(pcVar6,uVar5 & 0xffffffff), (uVar5 & 1) != 0)) {
            nn::util::SNPrintf(acStack_640 + iVar3,0x600 - (long)iVar3,"%s",
                               *(undefined8 *)(param_1 + 0x270));
            goto LAB_006a4538;
          }
          iVar2 = 0x2db;
          break;
        }
        if ((pcVar6 + uVar5)[1] == '\0') {
          uVar5 = (ulong)((int)uVar5 + 1);
          goto LAB_006a44f0;
        }
        uVar5 = uVar5 + 2;
      } while ((int)uVar5 != 0x400);
    }
    nn::os::SdkMutexType::Unlock();
  }
LAB_006a45a4:
  FUN_00692648(param_1);
  FUN_00692338();
  return iVar2;
}

