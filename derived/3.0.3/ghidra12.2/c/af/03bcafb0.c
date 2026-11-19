
void FUN_03bcafb0(long param_1,long param_2)

{
  MutexType *pMVar1;
  MemoryPoolType *pMVar2;
  long *plVar3;
  ulong uVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  AudioRendererConfig *pAVar8;
  
  if (param_2 != 0) {
    pMVar1 = (MutexType *)(param_1 + 0x58);
    nn::os::LockMutex(pMVar1);
    if (*(long *)(param_1 + 0x10) != param_1 + 8) {
      lVar6 = (long)*(int *)(param_1 + 0x1c);
      lVar7 = *(long *)(param_1 + 0x10) - lVar6;
      do {
        plVar3 = (long *)(lVar7 + lVar6);
        if (lVar7 == param_2) {
          if (*plVar3 != 0) {
            *(long *)(*plVar3 + 8) = plVar3[1];
          }
          if ((long *)plVar3[1] != (long *)0x0) {
            *(long *)plVar3[1] = *plVar3;
          }
          *plVar3 = 0;
          plVar3[1] = 0;
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
          nn::os::UnlockMutex(pMVar1);
          return;
        }
        lVar7 = plVar3[1] - lVar6;
      } while (lVar7 != (param_1 + 8) - lVar6);
    }
    nn::os::UnlockMutex(pMVar1);
    pMVar2 = (MemoryPoolType *)(param_2 + 0x38);
    uVar4 = nn::audio::IsMemoryPoolAttached(pMVar2);
    if (((uVar4 & 1) != 0) && (uVar4 = nn::audio::RequestDetachMemoryPool(pMVar2), (uVar4 & 1) != 0)
       ) {
      if (DAT_05aebc00 == '\0') {
        pcVar5 = (char *)FUN_03b38a74();
        pAVar8 = (AudioRendererConfig *)(pcVar5 + 0x18);
        if (*pcVar5 == '\0') {
          return;
        }
      }
      else {
        pAVar8 = (AudioRendererConfig *)(DAT_05aebb88 + 0x98);
      }
      lVar7 = *(long *)PTR_DAT_04bb29d0;
      do {
        nn::os::ConvertToTimeSpan(lVar7 / 200);
        nn::os::SleepThread();
        uVar4 = nn::audio::IsMemoryPoolAttached(pMVar2);
      } while ((uVar4 & 1) != 0);
      nn::audio::ReleaseMemoryPool(pAVar8,pMVar2);
      return;
    }
  }
  return;
}

