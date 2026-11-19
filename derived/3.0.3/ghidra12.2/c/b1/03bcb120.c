
void FUN_03bcb120(long param_1)

{
  long *plVar1;
  char *pcVar2;
  ulong uVar3;
  long lVar4;
  AudioRendererConfig *pAVar5;
  long lVar6;
  long lVar7;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x58));
  if (*(int *)(param_1 + 0x18) != 0) {
    if (DAT_05aebc00 == '\0') {
      pcVar2 = (char *)FUN_03b38a74();
      pAVar5 = (AudioRendererConfig *)(pcVar2 + 0x18);
      if (*pcVar2 == '\0') goto LAB_03bcb224;
    }
    else {
      pAVar5 = (AudioRendererConfig *)(DAT_05aebb88 + 0x98);
    }
    if (*(long *)(param_1 + 0x10) != param_1 + 8) {
      lVar4 = (long)*(int *)(param_1 + 0x1c);
      lVar7 = *(long *)(param_1 + 0x10) - lVar4;
      lVar6 = lVar7 + lVar4;
      do {
        lVar6 = *(long *)(lVar6 + 8);
        uVar3 = nn::audio::AcquireMemoryPool
                          (pAVar5,(MemoryPoolType *)(lVar7 + 0x38),*(void **)(lVar7 + 0x40),
                           *(ulong *)(lVar7 + 0x48));
        if (((uVar3 & 1) != 0) &&
           (uVar3 = nn::audio::RequestAttachMemoryPool((MemoryPoolType *)(lVar7 + 0x38)),
           (uVar3 & 1) != 0)) {
          *(undefined1 *)(lVar7 + 0x50) = 1;
        }
        plVar1 = (long *)(lVar7 + *(int *)(param_1 + 0x1c));
        if (*plVar1 != 0) {
          *(long *)(*plVar1 + 8) = plVar1[1];
        }
        if ((long *)plVar1[1] != (long *)0x0) {
          *(long *)plVar1[1] = *plVar1;
        }
        *plVar1 = 0;
        plVar1[1] = 0;
        lVar7 = lVar6 - lVar4;
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      } while (lVar7 != (param_1 + 8) - lVar4);
    }
  }
LAB_03bcb224:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x58));
  return;
}

