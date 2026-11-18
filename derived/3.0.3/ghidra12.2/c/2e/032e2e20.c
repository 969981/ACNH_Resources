
void FUN_032e2e20(undefined8 *param_1)

{
  MutexType *pMVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  
  lVar12 = *(long *)PTR_DAT_04bb29d0;
  pMVar1 = (MutexType *)(param_1 + 0xc);
  do {
    nn::os::LockMutex(pMVar1);
    iVar8 = *(int *)(param_1 + 0x12);
    while (iVar8 < 1) {
      nn::os::UnlockMutex(pMVar1);
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 6));
      nn::os::LockMutex(pMVar1);
      iVar8 = *(int *)(param_1 + 0x12);
    }
    iVar6 = *(int *)(param_1 + 0x11);
    iVar7 = *(int *)((long)param_1 + 0x8c);
    iVar5 = 0;
    if (iVar6 <= iVar7) {
      iVar5 = iVar6;
    }
    lVar15 = *(long *)(param_1[0x10] + (long)(iVar7 - iVar5) * 8);
    iVar5 = 0;
    if (iVar7 + 1 < iVar6) {
      iVar5 = iVar7 + 1;
    }
    *(int *)((long)param_1 + 0x8c) = iVar5;
    *(int *)(param_1 + 0x12) = iVar8 + -1;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 6));
    nn::os::UnlockMutex(pMVar1);
    do {
      if (*(char *)(param_1 + 0x29) == '\0') goto LAB_032e2f28;
      nn::os::ConvertToTimeSpan(lVar12 / 10);
      nn::os::SleepThread();
    } while (*(char *)((long)param_1 + 0x149) == '\0');
    *(undefined1 *)((long)param_1 + 0x149) = 0;
LAB_032e2f28:
    if (*(int *)(lVar15 + 0x30) == 0x104b) {
      nn::os::LockMutex(pMVar1);
      uVar13 = *(uint *)(param_1 + 0x12);
      if (0 < (int)uVar13) {
        uVar11 = 0;
        do {
          if (uVar11 < uVar13) {
            iVar8 = *(int *)((long)param_1 + 0x8c) + uVar11;
            iVar5 = 0;
            if (*(int *)(param_1 + 0x11) <= iVar8) {
              iVar5 = *(int *)(param_1 + 0x11);
            }
            lVar14 = ((long *)param_1[0x10])[iVar8 - iVar5];
            cVar9 = *(char *)(lVar14 + 0x38);
          }
          else {
            lVar14 = *(long *)param_1[0x10];
            cVar9 = *(char *)(lVar14 + 0x38);
          }
          if (cVar9 != '\0') {
            *(undefined4 *)(lVar14 + 0x34) = 3;
            uVar13 = *(uint *)(param_1 + 0x12);
            if ((((int)uVar11 < (int)uVar13) && (-1 < (int)uVar11)) &&
               (uVar10 = uVar13 - 1, 0 < (int)uVar13)) {
              uVar13 = uVar10;
              if (uVar11 < uVar10) {
                lVar14 = (long)(int)uVar11;
                do {
                  iVar6 = *(int *)(param_1 + 0x11);
                  iVar7 = *(int *)((long)param_1 + 0x8c);
                  iVar8 = (int)lVar14 + iVar7;
                  iVar5 = 0;
                  if (iVar6 <= iVar8 + 1) {
                    iVar5 = iVar6;
                  }
                  iVar4 = 0;
                  if (iVar6 <= iVar8) {
                    iVar4 = iVar6;
                  }
                  lVar2 = lVar14 + ((long)iVar7 - (long)iVar5);
                  lVar3 = lVar14 + ((long)iVar7 - (long)iVar4);
                  lVar14 = lVar14 + 1;
                  *(undefined8 *)(param_1[0x10] + lVar3 * 8) =
                       *(undefined8 *)(param_1[0x10] + lVar2 * 8 + 8);
                  uVar13 = *(int *)(param_1 + 0x12) - 1;
                } while ((int)lVar14 < (int)uVar13);
              }
              *(uint *)(param_1 + 0x12) = uVar13;
            }
            if ((int)uVar11 < 2) {
              uVar11 = 1;
            }
            uVar11 = uVar11 - 1;
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)uVar13);
      }
      nn::os::UnlockMutex(pMVar1);
      param_1[1] = lVar15;
      *(undefined4 *)(lVar15 + 0x34) = 2;
      if (*(char *)(lVar15 + 0x38) == '\0') {
        (**(code **)(*(long *)param_1[1] + 0x10))();
      }
      *(undefined8 *)(param_1[1] + 0x70) = 0;
      *(undefined4 *)(param_1[1] + 0x34) = 3;
      param_1[1] = 0;
    }
    else if (*(int *)(lVar15 + 0x30) == 0x9110) {
      param_1[1] = lVar15;
      *(undefined4 *)(lVar15 + 0x34) = 3;
                    /* WARNING: Could not recover jumptable at 0x032e30a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)*param_1 + 0x38))((long *)*param_1,0);
      return;
    }
  } while( true );
}

