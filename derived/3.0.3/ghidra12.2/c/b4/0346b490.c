
void FUN_0346b490(long *param_1)

{
  MutexType *pMVar1;
  ulong uVar2;
  long *plVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  if (*param_1 != 0) {
    if ((((long *)param_1[2] != (long *)0x0) && (lVar6 = *(long *)param_1[2], lVar6 != 0)) &&
       (lVar6 = *(long *)(lVar6 + 0x210), lVar6 != 0)) {
      FUN_0346c774(lVar6,0);
    }
    lVar6 = DAT_05ae62d0;
    if ((char)param_1[3] != '\0') {
      lVar8 = *param_1;
      pMVar1 = (MutexType *)(DAT_05ae62d0 + 0x540);
      nn::os::LockMutex(pMVar1);
      lVar7 = *(long *)(lVar6 + 0x510);
      if (lVar7 != lVar6 + 0x508) {
LAB_0346b510:
        if (lVar7 != *(int *)(lVar6 + 0x51c) + lVar8) goto code_r0x0346b518;
        nn::os::UnlockMutex(pMVar1);
        lVar6 = param_1[1];
        if ((int)lVar6 != 0) {
          lVar7 = param_1[2];
          uVar9 = 0;
          do {
            if (*(long *)(lVar7 + (-(uVar9 >> 0x1f) & 0xfffffff800000000 | uVar9 << 3)) != 0) {
              FUN_0386b2b0(*param_1);
            }
            uVar2 = uVar9 + 1;
            uVar9 = uVar2 & 0xffffffff;
          } while ((int)lVar6 != (int)uVar2);
        }
        lVar6 = DAT_05ae62d0;
        lVar7 = *param_1;
        iVar4 = *(int *)(lVar7 + 0xc0);
        uVar5 = 5;
        if ((iVar4 == 6) || (iVar4 == 4)) {
LAB_0346b5f8:
          *(undefined4 *)(lVar7 + 0xc0) = uVar5;
        }
        else if (iVar4 == 3) {
          pMVar1 = (MutexType *)(DAT_05ae62d0 + 0x540);
          nn::os::LockMutex(pMVar1);
          plVar3 = (long *)(*(int *)(lVar6 + 0x51c) + lVar7);
          if (*plVar3 != 0) {
            *(long *)(*plVar3 + 8) = plVar3[1];
          }
          if ((long *)plVar3[1] != (long *)0x0) {
            *(long *)plVar3[1] = *plVar3;
          }
          *plVar3 = 0;
          plVar3[1] = 0;
          *(int *)(lVar6 + 0x518) = *(int *)(lVar6 + 0x518) + -1;
          nn::os::UnlockMutex(pMVar1);
          uVar5 = 2;
          goto LAB_0346b5f8;
        }
        goto LAB_0346b5fc;
      }
LAB_0346b524:
      nn::os::UnlockMutex(pMVar1);
LAB_0346b5fc:
      *(undefined1 *)(param_1 + 3) = 0;
    }
  }
  return;
code_r0x0346b518:
  lVar7 = *(long *)(lVar7 + 8);
  if (lVar7 == lVar6 + 0x508) goto LAB_0346b524;
  goto LAB_0346b510;
}

