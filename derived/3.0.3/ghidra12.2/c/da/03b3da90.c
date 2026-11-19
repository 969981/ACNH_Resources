
void FUN_03b3da90(long param_1)

{
  MutexType *pMVar1;
  MutexType *pMVar2;
  int iVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  
  puVar5 = PTR_DAT_04bc3ee8;
  if (*(long *)PTR_DAT_04bc3ee8 == 0) {
    lVar12 = 0;
LAB_03b3db30:
    bVar4 = true;
  }
  else {
    lVar12 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x18);
    if (lVar12 == 0) goto LAB_03b3db30;
    if (*(char *)(lVar12 + 8) != '\0') {
      lVar11 = lVar12 + 0x20;
      if (*(long *)(lVar12 + 0x28) != lVar11) {
        lVar13 = (long)*(int *)(lVar12 + 0x34);
        lVar15 = *(long *)(lVar12 + 0x28) - lVar13;
        do {
          if (*(long **)(lVar15 + 0x90) != (long *)0x0) {
            (**(code **)(**(long **)(lVar15 + 0x90) + 0x20))();
          }
          lVar15 = *(long *)(lVar15 + lVar13 + 8) - lVar13;
        } while (lVar15 != lVar11 - lVar13);
        if (*(long *)(lVar12 + 0x28) != lVar11) {
          lVar13 = (long)*(int *)(lVar12 + 0x34);
          lVar15 = *(long *)(lVar12 + 0x28) - lVar13;
          do {
            plVar6 = *(long **)(*(long *)(lVar15 + 0x160) + 0x28);
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x18))();
            }
            *(undefined8 *)(lVar15 + 0x170) = 0;
            *(undefined8 *)(lVar15 + 0x178) = 0;
            *(undefined8 *)(lVar15 + 0x168) = 0;
            lVar15 = *(long *)(lVar15 + lVar13 + 8) - lVar13;
          } while (lVar11 - lVar13 != lVar15);
        }
      }
      if (*(char *)(lVar12 + 8) != '\0') {
        iVar8 = *(int *)(lVar12 + 0x34);
        lVar13 = (long)iVar8;
        lVar15 = -lVar13;
        plVar6 = (long *)(lVar11 - lVar13);
        if (*(long *)(lVar12 + 0x20) != lVar11) {
          plVar14 = (long *)(*(long *)(lVar12 + 0x20) - lVar13);
          do {
            (**(code **)(*plVar14 + 0x88))(plVar14);
            plVar14 = (long *)(*(long *)((long)plVar14 + lVar13) + lVar15);
          } while (plVar14 != plVar6);
          iVar8 = *(int *)(lVar12 + 0x34);
          lVar15 = -(long)iVar8;
          plVar6 = (long *)(lVar11 - iVar8);
        }
        plVar14 = (long *)(lVar15 + *(long *)(lVar12 + 0x28));
        if (plVar6 != plVar14) {
          do {
            FUN_03ba2310(plVar14);
            plVar14 = (long *)(lVar15 + *(long *)((long)plVar14 + (long)iVar8 + 8));
          } while (plVar6 != plVar14);
        }
      }
    }
    bVar4 = false;
  }
  pMVar1 = (MutexType *)(param_1 + 200);
  nn::os::LockMutex(pMVar1);
  lVar11 = param_1 + 0x40;
  if (*(long *)(param_1 + 0x48) != lVar11) {
    lVar10 = (long)*(int *)(param_1 + 0x54);
    lVar13 = *(long *)(param_1 + 0x48) - lVar10;
    lVar15 = lVar13 + lVar10;
    do {
      lVar15 = *(long *)(lVar15 + 8);
      nn::os::LockMutex((MutexType *)(param_1 + 0x108));
      FUN_03b43a00(lVar13);
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x108));
      lVar13 = lVar15 - lVar10;
    } while (lVar13 != lVar11 - lVar10);
  }
  nn::os::UnlockMutex(pMVar1);
  lVar15 = *(long *)puVar5;
  if (lVar15 != 0) {
    if (*(long *)(lVar15 + 0x40) != 0) {
      FUN_03bc0f60();
      lVar15 = *(long *)puVar5;
      if (lVar15 == 0) goto LAB_03b3dd1c;
    }
    lVar15 = *(long *)(lVar15 + 0x38);
    if ((lVar15 != 0) && (*(char *)(lVar15 + 8) != '\0')) {
      uVar7 = nn::os::GetSystemTick();
      *(undefined8 *)(lVar15 + 200) = uVar7;
      if (*(long *)(lVar15 + 0x28) != lVar15 + 0x20) {
        lVar10 = (long)*(int *)(lVar15 + 0x34);
        lVar13 = *(long *)(lVar15 + 0x28) - lVar10;
        do {
          FUN_03bc4d10(lVar13);
          lVar13 = *(long *)(lVar13 + lVar10 + 8) - lVar10;
        } while (lVar13 != (lVar15 + 0x20) - lVar10);
      }
      lVar13 = nn::os::GetSystemTick();
      *(long *)(lVar15 + 0xd0) = lVar13 - *(long *)(lVar15 + 200);
    }
  }
LAB_03b3dd1c:
  pMVar2 = (MutexType *)(param_1 + 0x108);
  nn::os::LockMutex(pMVar2);
  nn::os::LockMutex((MutexType *)(param_1 + 0x88));
  if (*(long *)(param_1 + 8) != param_1) {
    lVar10 = (long)*(int *)(param_1 + 0x14);
    lVar13 = *(long *)(param_1 + 8) - lVar10;
    lVar15 = lVar13 + lVar10;
    do {
      lVar15 = *(long *)(lVar15 + 8);
      if (*(long *)(lVar13 + 0xb0) != 0) {
        nn::os::LockMutex((MutexType *)(lVar13 + 0x88));
        FUN_03ba71d0(*(undefined8 *)(lVar13 + 0xb0),*(undefined8 *)(lVar13 + 0x60));
        nn::os::UnlockMutex((MutexType *)(lVar13 + 0x88));
      }
      lVar13 = lVar15 - lVar10;
    } while (lVar13 != param_1 - lVar10);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x88));
  nn::os::UnlockMutex(pMVar2);
  if (!bVar4) {
    FUN_03ba4260(lVar12);
  }
  if (*(undefined8 **)(param_1 + 0x130) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x130))();
  }
  if (!bVar4) {
    FUN_03ba4370(lVar12);
  }
  nn::os::LockMutex(pMVar1);
  if (*(long *)(param_1 + 0x48) != lVar11) {
    lVar10 = (long)*(int *)(param_1 + 0x54);
    lVar13 = *(long *)(param_1 + 0x48) - lVar10;
    lVar15 = lVar13 + lVar10;
    do {
      lVar15 = *(long *)(lVar15 + 8);
      nn::os::LockMutex(pMVar2);
      if (*(int *)(lVar13 + 0xc) == 7) {
        lVar9 = *(long *)(*(long *)(lVar13 + 0x120) + 8);
        if (DAT_05aebc00 == '\0') {
          iVar8 = *(int *)(lVar9 + 0x10);
        }
        else {
          iVar8 = *(int *)(lVar9 + 0x5c);
        }
        if (iVar8 != 0) goto LAB_03b3de20;
        FUN_03b42d30(lVar13);
        nn::os::LockMutex(pMVar1);
        *(undefined4 *)(lVar13 + 0x10) = 0;
        plVar6 = (long *)(lVar13 + *(int *)(param_1 + 0x54));
        lVar13 = *plVar6;
        plVar14 = (long *)plVar6[1];
        if (plVar14 != (long *)0x0 || lVar13 != 0) {
          if (lVar13 != 0) {
            *(long **)(lVar13 + 8) = plVar14;
            plVar14 = (long *)plVar6[1];
          }
          if (plVar14 != (long *)0x0) {
            *plVar14 = *plVar6;
          }
          *plVar6 = 0;
          plVar6[1] = 0;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
        }
        nn::os::UnlockMutex(pMVar1);
      }
      else {
LAB_03b3de20:
        FUN_03b432ac(lVar13);
      }
      nn::os::UnlockMutex(pMVar2);
      lVar13 = lVar15 - lVar10;
    } while (lVar13 != lVar11 - lVar10);
  }
  nn::os::UnlockMutex(pMVar1);
  if (!bVar4) {
    if (*(long *)(lVar12 + 0x28) != lVar12 + 0x20) {
      lVar15 = (long)*(int *)(lVar12 + 0x34);
      lVar11 = *(long *)(lVar12 + 0x28) - lVar15;
      do {
        *(undefined4 *)(lVar11 + 0x148) = 0x3f800000;
        lVar11 = *(long *)(lVar11 + lVar15 + 8) - lVar15;
      } while (lVar11 != (lVar12 + 0x20) - lVar15);
    }
  }
  iVar3 = *(int *)(*(long *)(param_1 + 0x58) + 0x20);
  iVar8 = 0;
  if (iVar3 != -2) {
    iVar8 = iVar3 + 1;
  }
  *(int *)(*(long *)(param_1 + 0x58) + 0x20) = iVar8;
  return;
}

