
void FUN_0033d320(long param_1,int param_2)

{
  MutexType *pMVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(param_1 + (long)param_2 * 8 + 0x438);
  if (lVar6 != 0) {
    pMVar1 = (MutexType *)(param_1 + 0x1918);
    do {
      while (lVar7 = *(long *)(lVar6 + 0x1e0), *(char *)(lVar6 + 0x1c) != '\0') {
        nn::os::LockMutex(pMVar1);
        uVar2 = *(ulong *)(param_1 + 0xc40);
        if (0 < (int)uVar2) {
          uVar3 = uVar2 & 0xffffffff;
          lVar5 = 0xffffffff;
          plVar4 = *(long **)(param_1 + 0xc38);
          do {
            if (*plVar4 == lVar6) {
              if (lVar5 != 0) {
                nn::os::UnlockMutex(pMVar1);
                goto joined_r0x0033d3dc;
              }
              break;
            }
            lVar5 = lVar5 + -1;
            uVar3 = uVar3 - 1;
            plVar4 = plVar4 + 1;
          } while (uVar3 != 0);
        }
        *(ulong *)(param_1 + 0xc40) = uVar2 + 1;
        (*(long **)(param_1 + 0xc38))[uVar2] = lVar6;
        nn::os::UnlockMutex(pMVar1);
joined_r0x0033d3dc:
        lVar6 = lVar7;
        if (lVar7 == 0) goto LAB_0033d400;
      }
      FUN_0032c410("The EmitterSet has been already deleted.\n");
      lVar6 = lVar7;
    } while (lVar7 != 0);
  }
LAB_0033d400:
  lVar6 = *(long *)(param_1 + (long)param_2 * 8 + 0x838);
  if (lVar6 != 0) {
    pMVar1 = (MutexType *)(param_1 + 0x1918);
    do {
      lVar7 = *(long *)(lVar6 + 0x1e0);
      if (*(char *)(lVar6 + 0x1c) == '\0') {
        FUN_0032c410("The EmitterSet has been already deleted.\n");
        *(undefined1 *)(lVar6 + 0x1f) = 0;
      }
      else {
        nn::os::LockMutex(pMVar1);
        uVar2 = *(ulong *)(param_1 + 0xc40);
        if (0 < (int)uVar2) {
          uVar3 = uVar2 & 0xffffffff;
          lVar5 = 0xffffffff;
          plVar4 = *(long **)(param_1 + 0xc38);
          do {
            if (*plVar4 == lVar6) {
              if (lVar5 != 0) {
                nn::os::UnlockMutex(pMVar1);
                *(undefined1 *)(lVar6 + 0x1f) = 0;
                goto joined_r0x0033d4a4;
              }
              break;
            }
            lVar5 = lVar5 + -1;
            uVar3 = uVar3 - 1;
            plVar4 = plVar4 + 1;
          } while (uVar3 != 0);
        }
        *(ulong *)(param_1 + 0xc40) = uVar2 + 1;
        (*(long **)(param_1 + 0xc38))[uVar2] = lVar6;
        nn::os::UnlockMutex(pMVar1);
        *(undefined1 *)(lVar6 + 0x1f) = 0;
      }
joined_r0x0033d4a4:
      lVar6 = lVar7;
    } while (lVar7 != 0);
  }
  return;
}

