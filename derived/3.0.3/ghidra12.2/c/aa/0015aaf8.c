
undefined8 FUN_0015aaf8(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined4 local_44;
  
  if ((param_2 & 1) == 0) {
LAB_0015ab20:
    uVar5 = 0;
  }
  else {
    if ((*(byte *)((long)param_1 + 0x41c) & 1) == 0) {
      uVar1 = FUN_00159114(*(undefined4 *)(param_1 + 0x4b),0xffffffff,0xffffffff,0);
      if (uVar1 == 0) goto LAB_0015ab20;
      if (((uVar1 & 5) == 1) && (uVar3 = FUN_00158da8(param_1), (uVar3 & 1) != 0)) {
        local_44 = 0;
        if (((code *)param_1[0xbb] != (code *)0x0) &&
           (uVar3 = (*(code *)param_1[0xbb])(param_1,0,param_1[0xbc],0x8000,&local_44),
           uVar3 != 0xffffffffffffffff)) {
          FUN_0014d430(*param_1,"%d bytes stray data read before trying h2 connection\n",
                       uVar3 & 0xffffffff);
          param_1[0xbe] = 0;
          param_1[0xbd] = uVar3;
          FUN_0015992c(param_1,param_1 + 0xae,&local_44);
          goto LAB_0015ab20;
        }
      }
    }
    uVar5 = 1;
  }
  if ((param_2 >> 1 & 1) != 0) {
    auVar7 = FUN_00147178();
    iVar2 = FUN_001471a8(auVar7._0_8_,auVar7._8_8_,param_1[0x8b],param_1[0x8c]);
    if ((long)param_1[0x8d] < (long)iVar2) {
      iVar2 = FUN_001670cc(param_1[0xae],0,0);
      if (iVar2 == 0) {
        *(undefined1 (*) [16])(param_1 + 0x8b) = auVar7;
        iVar2 = FUN_0016defc(param_1[0xae]);
        if (iVar2 != 0) {
          uVar6 = *param_1;
          uVar4 = FUN_001686c8();
          FUN_0014d5f8(uVar6,"nghttp2_session_send() failed: %s(%d)",uVar4,iVar2);
        }
      }
      else {
        uVar6 = *param_1;
        uVar4 = FUN_001686c8();
        FUN_0014d5f8(uVar6,"nghttp2_submit_ping() failed: %s(%d)",uVar4,iVar2);
        *(undefined1 (*) [16])(param_1 + 0x8b) = auVar7;
      }
    }
  }
  return uVar5;
}

