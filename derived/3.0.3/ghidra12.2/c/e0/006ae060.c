
int thunk_FUN_006ae064(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 auStack_250 [512];
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
  if (iVar1 != 0) goto LAB_006ae118;
  memset(auStack_250,0,0x200);
  FUN_00693290(auStack_250,0x200,&DAT_0405bd3d,"/api/v1/web_service_resources/%s",
               *(undefined8 *)(param_1 + 0x250));
  iVar1 = FUN_00174e0c(lVar2,0x2734,&DAT_040844d6);
  if ((iVar1 != 0) || (iVar1 = FUN_00174e0c(lVar2,0x2712,auStack_250), iVar1 != 0)) {
    iVar1 = FUN_00693380();
    goto LAB_006ae118;
  }
  uStack_28 = 0;
  FUN_00696a0c(&uStack_28);
  FUN_00692d10(param_1);
  nn::os::SdkMutexType::Lock();
  uVar3 = FUN_00692d30(param_1);
  if ((uVar3 & 1) == 0) {
    nn::os::SdkMutexType::Unlock();
    iVar1 = 0x4db;
  }
  else {
    uStack_260 = 0;
    uStack_258 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    FUN_006960d0(&uStack_270);
    uStack_278 = 0;
    FUN_00696170(&uStack_278);
    uVar4 = thunk_FUN_00692d18(param_1);
    uVar5 = thunk_FUN_00692d20(param_1);
    FUN_006960e8(&uStack_270,uVar4,uVar5);
    FUN_00696178(&uStack_278,&uStack_270);
    uVar3 = FUN_00696180(&uStack_278,1);
    if ((uVar3 & 1) == 0) {
LAB_006ae2dc:
      iVar1 = 0x6db;
    }
    else {
      uStack_50 = *(undefined8 *)(param_1 + 600);
      uStack_48 = *(undefined8 *)(param_1 + 0x260);
      uVar3 = FUN_006963a0(&uStack_278,&DAT_040e2594);
      if (((uVar3 & 1) == 0) || (uVar3 = FUN_006969f0(&uStack_278,&uStack_50), (uVar3 & 1) == 0))
      goto LAB_006ae2dc;
      uVar4 = FUN_00696158(&uStack_270);
      iVar1 = FUN_00174e0c(lVar2,0x271f,uVar4);
      if (iVar1 == 0) {
        uVar4 = FUN_00696160(&uStack_270);
        iVar1 = FUN_00174e0c(lVar2,0x3c,uVar4);
        if (iVar1 == 0) {
          nn::os::SdkMutexType::Unlock();
          uVar4 = FUN_0069c3c4(param_1);
          iVar1 = FUN_00696a48(&uStack_28,"Authorization","Bearer %s",uVar4);
          if ((iVar1 == 0) &&
             (iVar1 = FUN_00696a48(&uStack_28,"Content-Type","application/x-msgpack"), iVar1 == 0))
          {
            uVar4 = FUN_00696a40(&uStack_28);
            iVar1 = FUN_00174e0c(lVar2,0x2727,uVar4);
            if (iVar1 == 0) {
              iVar1 = FUN_00692988(param_1,DAT_04bdf458);
            }
            else {
              iVar1 = FUN_00693380();
            }
          }
          goto LAB_006ae23c;
        }
      }
      iVar1 = FUN_00693380();
    }
    nn::os::SdkMutexType::Unlock();
  }
LAB_006ae23c:
  FUN_00696a14(&uStack_28);
LAB_006ae118:
  FUN_00692648(param_1);
  FUN_00692338();
  return iVar1;
}

