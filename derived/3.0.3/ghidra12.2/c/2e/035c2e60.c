
void FUN_035c2e60(long param_1)

{
  MutexType *pMVar1;
  char cVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  pMVar1 = (MutexType *)(param_1 + 0x680);
LAB_035c2e98:
  do {
    nn::os::LockMutex(pMVar1);
    do {
      if (*(long *)(param_1 + 0x6e8) == 0) {
        cVar2 = *(char *)(param_1 + 0x6c8);
        if ((*(long *)(param_1 + 0x6b8) == -1) || (cVar2 != '\0')) {
          nn::os::UnlockMutex(pMVar1);
          if (cVar2 != '\0') goto LAB_035c2e98;
          uVar3 = *(long *)(param_1 + 0x658) - *(long *)(param_1 + 0x650);
          if (uVar3 == 0) goto LAB_035c2f80;
          if (*(long *)(param_1 + 0x658) == *(long *)(param_1 + 0x650) + 1) {
            uVar5 = 0;
            if ((uVar3 & 1) == 0) goto LAB_035c2f80;
            goto LAB_035c2f68;
          }
          uVar5 = 0;
          do {
            uVar7 = uVar5 & 6;
            uVar5 = uVar5 + 2;
            lVar6 = param_1 + 0x50 + uVar7 * 0xb8;
            lVar8 = param_1 + 0x50 + (uVar7 | 1) * 0xb8;
            *(undefined4 *)(lVar6 + 0xb0) = 0;
            *(undefined4 *)(lVar6 + 0xb4) = 0;
            *(undefined4 *)(lVar8 + 0xb0) = 0;
            *(undefined4 *)(lVar8 + 0xb4) = 0;
          } while ((uVar3 & 0xfffffffffffffffe) != uVar5);
          uVar5 = uVar5 & 6;
          if ((uVar3 & 1) != 0) {
LAB_035c2f68:
            lVar6 = param_1 + uVar5 * 0xb8;
            *(undefined4 *)(lVar6 + 0x100) = 0;
            *(undefined4 *)(lVar6 + 0x104) = 0;
          }
LAB_035c2f80:
          FUN_035c1dd0(param_1);
          return;
        }
      }
      else if (*(char *)(param_1 + 0x6c8) != '\0') break;
      iVar4 = nn::os::TimedWaitConditionVariable(param_1 + 0x6b0,pMVar1,1000000000);
    } while (iVar4 == 1);
    nn::os::UnlockMutex(pMVar1);
  } while( true );
}

