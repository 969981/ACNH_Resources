
void FUN_03bcb250(long param_1)

{
  MemoryPoolType *pMVar1;
  long *plVar2;
  char *pcVar3;
  ulong uVar4;
  long lVar5;
  AudioRendererConfig *pAVar6;
  long lVar7;
  long lVar8;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x58));
  if (*(int *)(param_1 + 0x30) != 0) {
    if (DAT_05aebc00 == '\0') {
      pcVar3 = (char *)FUN_03b38a74();
      pAVar6 = (AudioRendererConfig *)(pcVar3 + 0x18);
      if (*pcVar3 == '\0') goto LAB_03bcb358;
    }
    else {
      pAVar6 = (AudioRendererConfig *)(DAT_05aebb88 + 0x98);
    }
    if (*(long *)(param_1 + 0x28) != param_1 + 0x20) {
      lVar5 = (long)*(int *)(param_1 + 0x34);
      lVar8 = *(long *)(param_1 + 0x28) - lVar5;
      lVar7 = lVar8 + lVar5;
      do {
        lVar7 = *(long *)(lVar7 + 8);
        pMVar1 = (MemoryPoolType *)(lVar8 + 0x38);
        uVar4 = nn::audio::IsMemoryPoolAttached(pMVar1);
        if ((uVar4 & 1) == 0) {
          nn::audio::GetMemoryPoolAddress(pMVar1);
          nn::audio::GetMemoryPoolSize(pMVar1);
          nn::audio::ReleaseMemoryPool(pAVar6,pMVar1);
          plVar2 = (long *)(lVar8 + *(int *)(param_1 + 0x34));
          if (*plVar2 != 0) {
            *(long *)(*plVar2 + 8) = plVar2[1];
          }
          if ((long *)plVar2[1] != (long *)0x0) {
            *(long *)plVar2[1] = *plVar2;
          }
          *plVar2 = 0;
          plVar2[1] = 0;
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
        }
        lVar8 = lVar7 - lVar5;
      } while (lVar8 != (param_1 + 0x20) - lVar5);
    }
  }
LAB_03bcb358:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x58));
  return;
}

