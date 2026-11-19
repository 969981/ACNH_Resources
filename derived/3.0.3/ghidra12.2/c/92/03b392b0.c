
void FUN_03b392b0(short *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  MutexType *pMVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  undefined8 uVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  long *plVar18;
  undefined8 uVar19;
  long lVar20;
  long local_80 [8];
  
  uVar9 = DAT_05aebb88;
  iVar11 = *(int *)(param_1 + 0x3c);
  if (iVar11 == 0) {
    return;
  }
  plVar18 = local_80;
  iVar5 = *(int *)(param_1 + 0x38);
  iVar6 = *(int *)(param_1 + 0x3a);
  iVar15 = 0;
  if (iVar5 <= iVar6) {
    iVar15 = iVar5;
  }
  piVar1 = (int *)(*(long *)(param_1 + 0x34) + (long)(iVar6 - iVar15) * 0x10);
  iVar15 = *piVar1;
  if (iVar15 == 3) {
    if (0 < iVar11) {
      iVar15 = 0;
      if (iVar6 + 1 < iVar5) {
        iVar15 = iVar6 + 1;
      }
      *(int *)(param_1 + 0x3a) = iVar15;
      *(int *)(param_1 + 0x3c) = iVar11 + -1;
    }
    lVar13 = *(long *)(DAT_05aebb78 + 0x98);
    pMVar3 = (MutexType *)(lVar13 + 0x40);
    nn::os::LockMutex(pMVar3);
    if (*(long *)(lVar13 + 0x10) == lVar13 + 8) {
      nn::os::UnlockMutex(pMVar3);
      iVar11 = *(int *)(param_1 + 0x3c);
    }
    else {
      lVar20 = (long)*(int *)(lVar13 + 0x1c);
      lVar12 = *(long *)(lVar13 + 0x10) - lVar20;
      uVar17 = 0;
      do {
        uVar16 = uVar17;
        if (*(short **)(lVar12 + 0x68) == param_1) {
          uVar16 = uVar17 + 1;
          local_80[(int)uVar17] = lVar12;
          if (6 < (int)uVar17) {
            nn::os::UnlockMutex(pMVar3);
            iVar11 = *(int *)(param_1 + 0x3c);
            goto LAB_03b3953c;
          }
        }
        lVar12 = *(long *)(lVar12 + lVar20 + 8) - lVar20;
        uVar17 = uVar16;
      } while (lVar12 != (lVar13 + 8) - lVar20);
      nn::os::UnlockMutex(pMVar3);
      iVar11 = *(int *)(param_1 + 0x3c);
      if (0 < (int)uVar16) {
LAB_03b3953c:
        if (iVar11 < *(int *)(param_1 + 0x38)) {
          uVar10 = (ulong)uVar16;
          do {
            iVar15 = *(int *)(param_1 + 0x3c);
            iVar5 = *(int *)(param_1 + 0x38);
            if (iVar15 < iVar5) {
              *(int *)(param_1 + 0x3c) = iVar15 + 1;
              uVar9 = *plVar18;
              iVar6 = 0;
              if (iVar5 <= *(int *)(param_1 + 0x3a) + iVar15) {
                iVar6 = iVar5;
              }
              puVar14 = (undefined8 *)
                        (*(long *)(param_1 + 0x34) +
                        (long)((*(int *)(param_1 + 0x3a) + iVar15) - iVar6) * 0x10);
              *puVar14 = 2;
              puVar14[1] = uVar9;
            }
            plVar18 = plVar18 + 1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
      }
    }
    if (iVar11 < 1) {
      return;
    }
    do {
      iVar15 = *(int *)(param_1 + 0x3c);
      iVar5 = *(int *)(param_1 + 0x38);
      if (iVar15 == 0) {
        puVar14 = (undefined8 *)0x0;
        if (0 < iVar5) goto LAB_03b3962c;
      }
      else {
        iVar7 = *(int *)(param_1 + 0x3a);
        iVar6 = 0;
        if (iVar5 <= iVar7) {
          iVar6 = iVar5;
        }
        puVar14 = (undefined8 *)(*(long *)(param_1 + 0x34) + (long)(iVar7 - iVar6) * 0x10);
        if (0 < iVar15) {
          iVar6 = 0;
          if (iVar7 + 1 < iVar5) {
            iVar6 = iVar7 + 1;
          }
          *(int *)(param_1 + 0x3a) = iVar6;
          *(int *)(param_1 + 0x3c) = iVar15 + -1;
          iVar15 = iVar15 + -1;
        }
        if (iVar15 < iVar5) {
LAB_03b3962c:
          *(int *)(param_1 + 0x3c) = iVar15 + 1;
          iVar6 = 0;
          if (iVar5 <= *(int *)(param_1 + 0x3a) + iVar15) {
            iVar6 = iVar5;
          }
          puVar2 = (undefined8 *)
                   (*(long *)(param_1 + 0x34) +
                   (long)((*(int *)(param_1 + 0x3a) + iVar15) - iVar6) * 0x10);
          uVar9 = puVar14[1];
          *puVar2 = *puVar14;
          puVar2[1] = uVar9;
        }
      }
      iVar11 = iVar11 + -1;
      if (iVar11 == 0) {
        return;
      }
    } while( true );
  }
  if (iVar15 == 2) {
    if (piVar1[1] == 1) {
      if ((*(long **)(piVar1 + 2) != (long *)0x0) &&
         (lVar13 = (**(code **)(**(long **)(piVar1 + 2) + 0x10))(), (*(byte *)(lVar13 + 8) & 1) != 0
         )) goto LAB_03b396a8;
      goto LAB_03b396a0;
    }
    if (piVar1[1] != 0) goto LAB_03b396a8;
    plVar18 = *(long **)(piVar1 + 2);
    if ((plVar18 == (long *)0x0) || ((short *)plVar18[0xd] != param_1)) goto LAB_03b396a0;
    sVar8 = *param_1;
    if (sVar8 == -1) goto LAB_03b396a8;
    uVar19 = (**(code **)(*plVar18 + 0x10))();
    FUN_03b51680(uVar9,sVar8,uVar19);
    *(undefined8 *)(*(long *)(piVar1 + 2) + 0x68) = 0;
    iVar11 = 1;
  }
  else {
    if (iVar15 != 1) goto LAB_03b396a8;
    if (piVar1[1] == 1) {
      if ((*(long **)(piVar1 + 2) != (long *)0x0) &&
         (lVar13 = (**(code **)(**(long **)(piVar1 + 2) + 0x10))(), (*(byte *)(lVar13 + 8) & 1) == 0
         )) goto LAB_03b396a8;
    }
    else {
      if (piVar1[1] != 0) goto LAB_03b396a8;
      plVar18 = *(long **)(piVar1 + 2);
      if ((plVar18 != (long *)0x0) && (plVar18[0xd] == 0)) {
        sVar8 = *param_1;
        if (sVar8 != -1) {
          uVar19 = *(undefined8 *)PTR_DAT_04bd1e70;
          uVar9 = (**(code **)(*plVar18 + 0x10))(plVar18);
          uVar10 = FUN_03b51440(uVar19,sVar8,uVar9);
          if ((uVar10 & 1) == 0) goto LAB_03b396a0;
          *(short **)(*(long *)(piVar1 + 2) + 0x68) = param_1;
          plVar18 = *(long **)(piVar1 + 2);
          piVar1[1] = 1;
        }
        lVar20 = *(long *)(DAT_05aebb78 + 0x98);
        nn::os::LockMutex((MutexType *)(lVar20 + 0x40));
        lVar12 = (long)*(int *)(lVar20 + 0x1c);
        lVar13 = *(long *)(lVar20 + 8);
        if (*(int *)(lVar20 + 0x18) < 1) {
          lVar13 = 0;
        }
        plVar4 = (long *)0x0;
        if (lVar13 != 0) {
          plVar4 = (long *)(lVar13 - lVar12);
        }
        if ((plVar4 != plVar18) && (plVar4 != plVar18)) {
          lVar13 = (long)plVar4 + lVar12;
          plVar18 = (long *)(lVar12 + (long)plVar18);
          if (*plVar18 != 0) {
            *(long *)(*plVar18 + 8) = plVar18[1];
          }
          if ((long *)plVar18[1] != (long *)0x0) {
            *(long *)plVar18[1] = *plVar18;
          }
          *plVar18 = 0;
          plVar18[1] = 0;
          puVar14 = *(undefined8 **)(lVar13 + 8);
          *(long **)(lVar13 + 8) = plVar18;
          *plVar18 = lVar13;
          plVar18[1] = (long)puVar14;
          if (puVar14 != (undefined8 *)0x0) {
            *puVar14 = plVar18;
          }
        }
        nn::os::UnlockMutex((MutexType *)(lVar20 + 0x40));
        goto LAB_03b396a8;
      }
    }
LAB_03b396a0:
    iVar11 = 2;
  }
  piVar1[1] = iVar11;
LAB_03b396a8:
  if ((piVar1[1] == 2) && (0 < *(int *)(param_1 + 0x3c))) {
    iVar11 = 0;
    if (*(int *)(param_1 + 0x3a) + 1 < *(int *)(param_1 + 0x38)) {
      iVar11 = *(int *)(param_1 + 0x3a) + 1;
    }
    *(int *)(param_1 + 0x3a) = iVar11;
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
  }
  return;
}

