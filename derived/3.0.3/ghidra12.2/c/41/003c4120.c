
void FUN_003c4120(long param_1,long param_2,ulong param_3,int param_4)

{
  int *piVar1;
  MutexType *pMVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  iVar6 = (**(code **)(**(long **)(param_1 + 0x60) + 0x10))();
  uVar7 = (**(code **)(**(long **)(param_1 + 0x60) + 8))();
  iVar8 = *(int *)(param_1 + 0xa0);
  if (iVar8 < 1) {
    return;
  }
  pMVar2 = (MutexType *)(param_1 + 0xb0);
  uVar15 = (uint)param_3;
  if (iVar6 < 1) {
    if ((int)uVar15 < 1) {
      iVar8 = 0;
      do {
        nn::os::LockMutex(pMVar2);
        nn::os::UnlockMutex(pMVar2);
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(param_1 + 0xa0));
      goto LAB_003c4450;
    }
    bVar9 = false;
    iVar6 = 0;
    do {
      if (uVar15 < 4) {
        lVar12 = 0;
        bVar5 = false;
      }
      else {
        lVar12 = 0;
        bVar5 = false;
        piVar13 = (int *)(param_2 + 8);
        do {
          iVar18 = *piVar13;
          piVar3 = piVar13 + 1;
          lVar12 = lVar12 + -4;
          piVar1 = piVar13 + -2;
          piVar4 = piVar13 + -1;
          piVar13 = piVar13 + 4;
          bVar5 = (bool)((((iVar6 == *piVar3 || iVar6 == iVar18) || iVar6 == *piVar4) ||
                         iVar6 == *piVar1) | bVar5);
        } while (-lVar12 != (param_3 & 0xfffffffc));
        lVar12 = -lVar12;
      }
      if ((param_3 & 3) != 0) {
        piVar13 = (int *)(param_2 + lVar12 * 4);
        uVar10 = param_3 & 3;
        do {
          uVar10 = uVar10 - 1;
          bVar5 = (bool)(iVar6 == *piVar13 | bVar5);
          piVar13 = piVar13 + 1;
        } while (uVar10 != 0);
      }
      if (!bVar5) {
        nn::os::LockMutex(pMVar2);
        nn::os::UnlockMutex(pMVar2);
        iVar8 = *(int *)(param_1 + 0xa0);
        bVar9 = true;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar8);
  }
  else {
    bVar9 = false;
    iVar18 = 0;
    do {
      if ((int)uVar15 < 1) {
LAB_003c427c:
        nn::os::LockMutex(pMVar2);
        if (0 < (int)uVar7) {
          iVar8 = 0;
          lVar12 = *(long *)(*(long *)(param_1 + 0x98) +
                            (long)(iVar18 + *(int *)(param_1 + 0xa0) * param_4) * 8);
          do {
            if (uVar7 < 4) {
              uVar10 = 0;
            }
            else {
              uVar10 = 0;
              do {
                *(undefined4 *)
                 (lVar12 + (uVar10 + (long)*(int *)(param_1 + 0xa8) * (long)iVar8) * 4) = 0;
                *(undefined4 *)
                 (lVar12 + (uVar10 + (long)*(int *)(param_1 + 0xa8) * (long)iVar8) * 4 + 4) = 0;
                *(undefined4 *)
                 (lVar12 + (uVar10 + (long)*(int *)(param_1 + 0xa8) * (long)iVar8) * 4 + 8) = 0;
                lVar14 = uVar10 + (long)*(int *)(param_1 + 0xa8) * (long)iVar8;
                uVar10 = uVar10 + 4;
                *(undefined4 *)(lVar12 + lVar14 * 4 + 0xc) = 0;
              } while ((uVar7 & 0xfffffffc) != (uint)uVar10);
              uVar10 = uVar10 & 0xffffffff;
            }
            if ((uVar7 & 3) != 0) {
              uVar11 = uVar7 & 3;
              do {
                uVar11 = uVar11 - 1;
                lVar14 = uVar10 + (long)*(int *)(param_1 + 0xa8) * (long)iVar8;
                uVar10 = uVar10 + 1;
                *(undefined4 *)(lVar12 + lVar14 * 4) = 0;
              } while (uVar11 != 0);
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 != iVar6);
        }
        nn::os::UnlockMutex(pMVar2);
        iVar8 = *(int *)(param_1 + 0xa0);
        bVar9 = true;
      }
      else {
        if (uVar15 < 4) {
          lVar12 = 0;
          bVar5 = false;
        }
        else {
          lVar12 = 0;
          bVar5 = false;
          piVar13 = (int *)(param_2 + 8);
          do {
            iVar16 = *piVar13;
            piVar3 = piVar13 + 1;
            lVar12 = lVar12 + -4;
            piVar1 = piVar13 + -2;
            piVar4 = piVar13 + -1;
            piVar13 = piVar13 + 4;
            bVar5 = (bool)((((iVar18 == *piVar3 || iVar18 == iVar16) || iVar18 == *piVar4) ||
                           iVar18 == *piVar1) | bVar5);
          } while (-lVar12 != (param_3 & 0xfffffffc));
          lVar12 = -lVar12;
        }
        if ((param_3 & 3) != 0) {
          piVar13 = (int *)(param_2 + lVar12 * 4);
          uVar10 = param_3 & 3;
          do {
            uVar10 = uVar10 - 1;
            bVar5 = (bool)(iVar18 == *piVar13 | bVar5);
            piVar13 = piVar13 + 1;
          } while (uVar10 != 0);
        }
        if (!bVar5) goto LAB_003c427c;
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < iVar8);
  }
  if (!bVar9) {
    return;
  }
LAB_003c4450:
  iVar8 = (**(code **)(**(long **)(param_1 + 0x60) + 0x10))();
  iVar6 = (**(code **)(**(long **)(param_1 + 0x60) + 8))();
  if ((0 < iVar6 && 0 < iVar8) && 0 < *(int *)(param_1 + 0xa0)) {
    iVar18 = 0;
    do {
      iVar16 = 0;
      do {
        iVar17 = 0;
        do {
          FUN_003c3afc(param_1,param_4,iVar18,iVar16,iVar17);
          iVar17 = iVar17 + 1;
        } while (iVar6 != iVar17);
        iVar16 = iVar16 + 1;
      } while (iVar16 != iVar8);
      iVar18 = iVar18 + 1;
    } while (iVar18 < *(int *)(param_1 + 0xa0));
  }
  return;
}

