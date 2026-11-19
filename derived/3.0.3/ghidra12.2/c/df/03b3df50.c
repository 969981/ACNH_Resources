
void FUN_03b3df50(long param_1)

{
  MutexType *pMVar1;
  MutexType *pMVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  byte bVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  int iVar15;
  ulong uVar16;
  byte bVar17;
  
  pMVar1 = (MutexType *)(param_1 + 200);
  nn::os::LockMutex(pMVar1);
  lVar7 = param_1 + 0x40;
  if (*(long *)(param_1 + 0x48) != lVar7) {
    lVar9 = (long)*(int *)(param_1 + 0x54);
    lVar11 = *(long *)(param_1 + 0x48) - lVar9;
    lVar13 = lVar11 + lVar9;
    do {
      lVar13 = *(long *)(lVar13 + 8);
      nn::os::LockMutex((MutexType *)(param_1 + 0x108));
      FUN_03b43a00(lVar11);
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x108));
      lVar11 = lVar13 - lVar9;
    } while (lVar11 != lVar7 - lVar9);
  }
  nn::os::UnlockMutex(pMVar1);
  if ((*(long *)(param_1 + 0x168) == 0) || (**(char **)(*(long *)(param_1 + 0x168) + 8) == '\0')) {
    bVar8 = 0;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1 + 0x108));
    nn::os::LockMutex((MutexType *)(param_1 + 0x88));
    if (*(long *)(param_1 + 8) != param_1) {
      lVar11 = (long)*(int *)(param_1 + 0x14);
      lVar13 = *(long *)(param_1 + 8) - lVar11;
LAB_03b3e064:
      plVar14 = *(long **)(lVar13 + 0x150);
      if (plVar14 == (long *)0x0) goto LAB_03b3e040;
      plVar12 = *(long **)(param_1 + 0x168);
      (**(code **)(*plVar14 + 0x18))(plVar14);
      lVar9 = 0;
      do {
        if (*(char *)(plVar14[1] + lVar9) == '\0') goto LAB_03b3e0cc;
        lVar5 = plVar14[1] + lVar9;
        if (*(char *)(lVar5 + 1) == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_03b3e0cc;
        }
        if (*(char *)(lVar5 + 2) == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_03b3e0cc;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_03b3e0cc:
      (**(code **)(*plVar12 + 0x18))(plVar12);
      lVar5 = 0;
      do {
        iVar15 = (int)lVar9;
        if (*(char *)(plVar12[1] + lVar5) == '\0') {
LAB_03b3e118:
          iVar4 = (int)lVar5;
          if (iVar15 < iVar4) goto LAB_03b3e040;
LAB_03b3e130:
          if ((int)lVar5 < 1) goto LAB_03b3e1d4;
          uVar16 = 0;
          goto LAB_03b3e14c;
        }
        lVar10 = plVar12[1] + lVar5;
        if (*(char *)(lVar10 + 1) == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_03b3e118;
        }
        if (*(char *)(lVar10 + 2) == '\0') {
          lVar5 = lVar5 + 2;
          iVar4 = (int)lVar5;
          if (iVar4 <= iVar15) goto LAB_03b3e130;
          goto LAB_03b3e040;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      if (iVar15 < 0) goto LAB_03b3e040;
LAB_03b3e1d4:
      (**(code **)(*plVar12 + 0x18))(plVar12);
LAB_03b3e200:
      bVar8 = *(byte *)(lVar13 + 0x14c) & 0xfc | 1;
      goto LAB_03b3e04c;
    }
LAB_03b3e21c:
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x88));
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x108));
    bVar8 = 1;
  }
  pMVar2 = (MutexType *)(param_1 + 0x108);
  nn::os::LockMutex(pMVar2);
  nn::os::LockMutex((MutexType *)(param_1 + 0x88));
  if (*(long *)(param_1 + 8) != param_1) {
    lVar11 = (long)*(int *)(param_1 + 0x14);
    lVar13 = *(long *)(param_1 + 8) - lVar11;
    do {
      bVar17 = 2;
      if (!(bool)(bVar8 & (*(byte *)(lVar13 + 0x14c) & 1) == 0)) {
        bVar17 = 0;
      }
      *(byte *)(lVar13 + 0x14c) = bVar17 | *(byte *)(lVar13 + 0x14c) & 0xfd;
      if (*(long *)(lVar13 + 0xb0) != 0) {
        nn::os::LockMutex((MutexType *)(lVar13 + 0x88));
        FUN_03ba71d0(*(undefined8 *)(lVar13 + 0xb0),*(undefined8 *)(lVar13 + 0x60));
        nn::os::UnlockMutex((MutexType *)(lVar13 + 0x88));
      }
      lVar13 = *(long *)(lVar13 + lVar11 + 8) - lVar11;
    } while (lVar13 != param_1 - lVar11);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x88));
  nn::os::UnlockMutex(pMVar2);
  FUN_03ba3f50(*(undefined8 *)(DAT_05aebb78 + 0x18));
  if (((DAT_05aebb78 != 0) &&
      (((*(long *)(DAT_05aebb78 + 0x40) == 0 || (FUN_03bc0f60(), DAT_05aebb78 != 0)) &&
       (lVar13 = *(long *)(DAT_05aebb78 + 0x38), lVar13 != 0)))) && (*(char *)(lVar13 + 8) != '\0'))
  {
    uVar3 = nn::os::GetSystemTick();
    *(undefined8 *)(lVar13 + 200) = uVar3;
    if (*(long *)(lVar13 + 0x28) != lVar13 + 0x20) {
      lVar9 = (long)*(int *)(lVar13 + 0x34);
      lVar11 = *(long *)(lVar13 + 0x28) - lVar9;
      do {
        FUN_03bc4d10(lVar11);
        lVar11 = *(long *)(lVar11 + lVar9 + 8) - lVar9;
      } while (lVar11 != (lVar13 + 0x20) - lVar9);
    }
    lVar11 = nn::os::GetSystemTick();
    *(long *)(lVar13 + 0xd0) = lVar11 - *(long *)(lVar13 + 200);
  }
  nn::os::LockMutex(pMVar1);
  if (*(long *)(param_1 + 0x48) != lVar7) {
    lVar9 = (long)*(int *)(param_1 + 0x54);
    lVar11 = *(long *)(param_1 + 0x48) - lVar9;
    lVar13 = lVar11 + lVar9;
    do {
      lVar13 = *(long *)(lVar13 + 8);
      nn::os::LockMutex(pMVar2);
      if (*(int *)(lVar11 + 0xc) == 7) {
        lVar5 = *(long *)(*(long *)(lVar11 + 0x120) + 8);
        if (DAT_05aebc00 == '\0') {
          iVar15 = *(int *)(lVar5 + 0x10);
        }
        else {
          iVar15 = *(int *)(lVar5 + 0x5c);
        }
        if (iVar15 != 0) goto LAB_03b3e3c0;
        FUN_03b42d30(lVar11);
        nn::os::LockMutex(pMVar1);
        *(undefined4 *)(lVar11 + 0x10) = 0;
        plVar14 = (long *)(lVar11 + *(int *)(param_1 + 0x54));
        lVar11 = *plVar14;
        plVar12 = (long *)plVar14[1];
        if (plVar12 != (long *)0x0 || lVar11 != 0) {
          if (lVar11 != 0) {
            *(long **)(lVar11 + 8) = plVar12;
            plVar12 = (long *)plVar14[1];
          }
          if (plVar12 != (long *)0x0) {
            *plVar12 = *plVar14;
          }
          *plVar14 = 0;
          plVar14[1] = 0;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
        }
        nn::os::UnlockMutex(pMVar1);
      }
      else {
LAB_03b3e3c0:
        FUN_03b432ac(lVar11);
      }
      nn::os::UnlockMutex(pMVar2);
      lVar11 = lVar13 - lVar9;
    } while (lVar11 != lVar7 - lVar9);
  }
  nn::os::UnlockMutex(pMVar1);
  lVar7 = *(long *)(DAT_05aebb78 + 0x18);
  if (*(long *)(lVar7 + 0x28) != lVar7 + 0x20) {
    lVar11 = (long)*(int *)(lVar7 + 0x34);
    lVar13 = *(long *)(lVar7 + 0x28) - lVar11;
    do {
      *(undefined4 *)(lVar13 + 0x148) = 0x3f800000;
      lVar13 = *(long *)(lVar13 + lVar11 + 8) - lVar11;
    } while (lVar13 != (lVar7 + 0x20) - lVar11);
  }
  iVar4 = *(int *)(*(long *)(param_1 + 0x58) + 0x20);
  iVar15 = 0;
  if (iVar4 != -2) {
    iVar15 = iVar4 + 1;
  }
  *(int *)(*(long *)(param_1 + 0x58) + 0x20) = iVar15;
  return;
  while( true ) {
    pcVar6 = (char *)plVar12[1];
    lVar10 = lVar5;
    while( true ) {
      lVar10 = lVar10 + -1;
      if (*(char *)(lVar9 + uVar16) != *pcVar6) break;
      if ((*(char *)(lVar9 + uVar16) == '\0') ||
         (lVar9 = lVar9 + 1, pcVar6 = pcVar6 + 1, lVar10 == 0)) goto LAB_03b3e1e8;
    }
    uVar16 = uVar16 + 1;
    if (uVar16 == (iVar15 - iVar4) + 1) break;
LAB_03b3e14c:
    lVar9 = plVar14[1];
    (**(code **)(*plVar12 + 0x18))(plVar12);
    if ((char *)(lVar9 + uVar16) == (char *)plVar12[1]) {
LAB_03b3e1e8:
      if ((int)uVar16 != -1) goto LAB_03b3e200;
      break;
    }
  }
LAB_03b3e040:
  bVar8 = *(byte *)(lVar13 + 0x14c) & 0xfe;
LAB_03b3e04c:
  *(byte *)(lVar13 + 0x14c) = bVar8;
  lVar13 = *(long *)(lVar13 + lVar11 + 8) - lVar11;
  if (lVar13 == param_1 - lVar11) goto LAB_03b3e21c;
  goto LAB_03b3e064;
}

