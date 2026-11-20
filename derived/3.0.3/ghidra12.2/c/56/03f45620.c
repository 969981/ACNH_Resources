
long FUN_03f45620(long param_1,ulong param_2)

{
  MutexType *pMVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  pMVar1 = (MutexType *)(param_1 + 0x38);
  nn::os::LockMutex(pMVar1);
  uVar5 = (ulong)*(byte *)(param_1 + 9);
  lVar2 = param_1 + 0xf8;
  lVar8 = lVar2 + uVar5 * 0x18;
  if (1 < *(byte *)(param_1 + 9)) {
    lVar8 = lVar2;
  }
  if (*(int *)(lVar8 + 0x10) != 0) {
    if ((param_2 & 1) != 0) {
      lVar8 = *(long *)PTR_DAT_04bb29d0;
      do {
        lVar7 = lVar2 + uVar5 * 0x18;
        if (1 < (uint)uVar5) {
          lVar7 = lVar2;
        }
        if (*(long *)(lVar7 + 8) != lVar7) {
          lVar6 = (long)*(int *)(lVar7 + 0x14);
          lVar9 = *(long *)(lVar7 + 8) - lVar6;
          do {
            if (*(char *)(lVar9 + 0x98) != '\0') goto LAB_03f45744;
            lVar9 = *(long *)(lVar9 + lVar6 + 8) - lVar6;
          } while (lVar9 != lVar7 - lVar6);
        }
        uVar4 = nn::os::ConvertToTimeSpan(lVar8 / 1000);
        nn::os::TimedWaitLightEvent(param_1 + 0xe8,uVar4);
        uVar5 = (ulong)*(byte *)(param_1 + 9);
      } while( true );
    }
    if (*(long *)(lVar8 + 8) != lVar8) {
      lVar7 = (long)*(int *)(lVar8 + 0x14);
      lVar9 = *(long *)(lVar8 + 8) - lVar7;
      do {
        if (*(char *)(lVar9 + 0x98) != '\0') goto LAB_03f45744;
        lVar9 = *(long *)(lVar9 + lVar7 + 8) - lVar7;
      } while (lVar9 != lVar8 - lVar7);
    }
  }
  lVar9 = 0;
LAB_03f457a0:
  nn::os::UnlockMutex(pMVar1);
  return lVar9;
LAB_03f45744:
  nn::os::LockMutex(pMVar1);
  lVar8 = lVar2 + (ulong)*(byte *)(param_1 + 9) * 0x18;
  if (1 < *(byte *)(param_1 + 9)) {
    lVar8 = lVar2;
  }
  plVar3 = (long *)(lVar9 + *(int *)(lVar8 + 0x14));
  if (*plVar3 != 0) {
    *(long *)(*plVar3 + 8) = plVar3[1];
  }
  if ((long *)plVar3[1] != (long *)0x0) {
    *(long *)plVar3[1] = *plVar3;
  }
  *plVar3 = 0;
  plVar3[1] = 0;
  *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
  nn::os::UnlockMutex(pMVar1);
  goto LAB_03f457a0;
}

