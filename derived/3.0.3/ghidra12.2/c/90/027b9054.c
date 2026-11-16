
undefined8 FUN_027b9054(long param_1)

{
  MutexType *pMVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined1 auStack_53 [16];
  undefined2 local_43;
  long local_40;
  long lStack_38;
  
  if (*(long *)PTR_DAT_04bb46b0 != 0) {
    FUN_026f4ca0(auStack_53);
    local_43 = *(undefined2 *)(param_1 + 0x68);
    lVar4 = FUN_02701b70(auStack_53);
    local_40 = 0;
    lStack_38 = 0;
    nn::fs::GetDeviceSaveDataSize(&lStack_38,&local_40);
    lVar2 = DAT_0556ca20;
    if ((ulong)(lVar4 << 1) <= (ulong)(local_40 + lStack_38)) {
LAB_027b9108:
      uVar6 = 1;
      goto LAB_027b911c;
    }
    if (DAT_0556ca20 != 0) {
      pMVar1 = (MutexType *)(DAT_0556ca20 + 0x20);
      nn::os::LockMutex(pMVar1);
      if ((*(int *)(lVar2 + 0x40) == 0) && (*(char *)(lVar2 + 0x44) == '\0')) {
        uVar5 = lVar4 + 0x3ffffffU & 0xfffffffffc000000;
        iVar3 = nn::fs::ExtendDeviceSaveData(uVar5,uVar5);
        nn::os::UnlockMutex(pMVar1);
        if (iVar3 == 0) goto LAB_027b9108;
      }
      else {
        nn::os::UnlockMutex(pMVar1);
      }
    }
  }
  uVar6 = 2;
LAB_027b911c:
  *(undefined4 *)(param_1 + 0xa0) = uVar6;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x90));
  return 1;
}

