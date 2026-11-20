
void FUN_03f2c590(long param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  double dVar19;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  pMVar1 = (MutexType *)(param_1 + 0x90);
  nn::os::LockMutex(pMVar1);
  bVar3 = *(byte *)(param_1 + 0x18);
  if ((bVar3 >> 3 & 1) == 0) {
    lVar14 = *(long *)(param_1 + 0xc0) - *(long *)(param_1 + 200);
    plVar13 = *(long **)(param_1 + 0x20);
    if ((bVar3 >> 4 & 1) == 0) {
      lVar6 = (**(code **)(*plVar13 + 0x78))(plVar13);
    }
    else {
      if ((*(uint *)(plVar13 + 0x1a) & 1) == 0) {
        plVar15 = (long *)0x0;
      }
      else {
        plVar15 = plVar13 + 0x12;
        nn::os::LockMutex((MutexType *)(plVar13 + 0x16));
      }
      if ((long *)plVar13[0x1c] == plVar13 + 0x1b) {
        lVar6 = 0;
      }
      else {
        lVar9 = (long)*(int *)((long)plVar13 + 0xec);
        lVar6 = 0;
        lVar11 = plVar13[0x1c] - lVar9;
        do {
          lVar6 = *(long *)(lVar11 + 0x18) + lVar6;
          lVar11 = *(long *)(lVar11 + lVar9 + 8) - lVar9;
        } while (lVar11 != (long)(plVar13 + 0x1b) - lVar9);
      }
      if (plVar15 != (long *)0x0) {
        nn::os::UnlockMutex((MutexType *)(plVar15 + 4));
      }
    }
    *(long *)(param_1 + 0xe0) = lVar14;
    *(long *)(param_1 + 0xd0) = lVar6 + lVar14;
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 200);
    uVar7 = (**(code **)(**(long **)(param_1 + 0x20) + 0x70))();
    *(undefined8 *)(param_1 + 0xe8) = uVar7;
    dVar19 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 200));
    *(long *)(param_1 + 0xf8) = (*(long **)(param_1 + 0x20))[5];
    lVar6 = (**(code **)(**(long **)(param_1 + 0x20) + 0x70))();
    lVar14 = -0x128;
    if ((*(byte *)(param_1 + 0x18) & 0x10) != 0) {
      lVar14 = -0x138;
    }
    dVar19 = dVar19 / (double)(ulong)(lVar14 + lVar6);
    goto LAB_03f2ca3c;
  }
  if (((bVar3 >> 1 & 1) != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    nn::os::LockMutex(pMVar1);
    if (1 < *(int *)(param_1 + 0x50)) {
      plVar13 = (long *)(param_1 + 0x40);
      plVar15 = *(long **)(*(long *)(param_1 + 0x48) + 8);
      if (plVar15 != plVar13) {
        lVar14 = -(long)*(int *)(param_1 + 0x54);
        do {
          plVar18 = (long *)*plVar15;
          plVar2 = (long *)plVar15[1];
          iVar4 = (**(code **)(**(long **)((long)plVar18 + lVar14 + 0x3f8) + 0x60))();
          iVar5 = (**(code **)(**(long **)((long)plVar15 + lVar14 + 0x3f8) + 0x60))();
          if (-1 < iVar4 - iVar5) {
            do {
              plVar18 = (long *)*plVar18;
              if (plVar18 == plVar13) {
                lVar6 = *plVar15;
                plVar18 = plVar13;
                goto joined_r0x03f2c708;
              }
              iVar4 = (**(code **)(**(long **)((long)plVar18 + lVar14 + 0x3f8) + 0x60))();
              iVar5 = (**(code **)(**(long **)((long)plVar15 + lVar14 + 0x3f8) + 0x60))();
            } while (-1 < iVar4 - iVar5);
            lVar6 = *plVar15;
joined_r0x03f2c708:
            if (lVar6 != 0) {
              *(long *)(lVar6 + 8) = plVar15[1];
            }
            if ((long *)plVar15[1] != (long *)0x0) {
              *(long *)plVar15[1] = *plVar15;
            }
            *plVar15 = 0;
            plVar15[1] = 0;
            puVar8 = (undefined8 *)plVar18[1];
            plVar18[1] = (long)plVar15;
            *plVar15 = (long)plVar18;
            plVar15[1] = (long)puVar8;
            if (puVar8 != (undefined8 *)0x0) {
              *puVar8 = plVar15;
            }
          }
          plVar15 = plVar2;
        } while (plVar2 != plVar13);
      }
    }
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfd;
    nn::os::UnlockMutex(pMVar1);
  }
  if (*(long *)(param_1 + 0x48) == param_1 + 0x40) {
    lVar14 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x54);
    lVar14 = 0;
    lVar11 = (long)-iVar4;
    lVar6 = lVar11 + *(long *)(param_1 + 0x48);
    do {
      if (*(char *)(lVar6 + 0xd) < '\0') {
        lVar9 = 0;
        if (*(long **)(lVar6 + 0x3f8) != (long *)0x0) {
          lVar9 = (**(code **)(**(long **)(lVar6 + 0x3f8) + 0x70))();
        }
        lVar14 = lVar9 + lVar14;
      }
      lVar6 = *(long *)(lVar6 + iVar4 + 8) + lVar11;
    } while (lVar6 != lVar11 + param_1 + 0x40);
  }
  plVar13 = *(long **)(param_1 + 0x20);
  bVar3 = *(byte *)(param_1 + 0x18);
  lVar6 = (**(code **)(*plVar13 + 0x70))(plVar13);
  if ((bVar3 >> 4 & 1) == 0) {
    lVar11 = (**(code **)(**(long **)(param_1 + 0x20) + 0x78))();
    lVar12 = -0x128;
    if ((*(byte *)(param_1 + 0x18) & 0x10) != 0) {
      lVar12 = -0x138;
    }
    lVar6 = lVar6 - lVar11;
  }
  else {
    plVar15 = (long *)plVar13[0x21];
    if (plVar15 == (long *)0x0) {
      lVar11 = 0;
      if ((*(uint *)(plVar13 + 0x1a) & 1) != 0) goto LAB_03f2c8dc;
LAB_03f2c808:
      plVar15 = (long *)0x0;
    }
    else {
      lVar11 = 0;
      do {
        lVar9 = *plVar15;
        plVar15 = (long *)plVar15[1];
        lVar11 = lVar9 + lVar11;
      } while (plVar15 != (long *)0x0);
      if ((*(uint *)(plVar13 + 0x1a) & 1) == 0) goto LAB_03f2c808;
LAB_03f2c8dc:
      plVar15 = plVar13 + 0x12;
      nn::os::LockMutex((MutexType *)(plVar13 + 0x16));
    }
    if ((long *)plVar13[0x1c] == plVar13 + 0x1b) {
      lVar9 = 0;
    }
    else {
      lVar10 = (long)*(int *)((long)plVar13 + 0xec);
      lVar9 = 0;
      lVar12 = plVar13[0x1c] - lVar10;
      do {
        lVar9 = *(long *)(lVar12 + 0x18) + lVar9;
        lVar12 = *(long *)(lVar12 + lVar10 + 8) - lVar10;
      } while (lVar12 != (long)(plVar13 + 0x1b) - lVar10);
    }
    if (plVar15 != (long *)0x0) {
      nn::os::UnlockMutex((MutexType *)(plVar15 + 4));
    }
    lVar12 = -0x128;
    if ((*(byte *)(param_1 + 0x18) & 0x10) != 0) {
      lVar12 = -0x138;
    }
    lVar6 = (lVar11 + lVar6) - lVar9;
  }
  uVar16 = (lVar6 + lVar12) - lVar14;
  lVar6 = (**(code **)(**(long **)(param_1 + 0x20) + 0x70))();
  plVar13 = *(long **)(param_1 + 0x20);
  if ((*(byte *)(param_1 + 0x18) >> 4 & 1) == 0) {
    uVar17 = lVar6 - 0x128;
    lVar6 = (**(code **)(*plVar13 + 0x78))(plVar13);
  }
  else {
    if ((*(uint *)(plVar13 + 0x1a) & 1) == 0) {
      plVar15 = (long *)0x0;
    }
    else {
      plVar15 = plVar13 + 0x12;
      nn::os::LockMutex((MutexType *)(plVar13 + 0x16));
    }
    uVar17 = lVar6 - 0x138;
    if ((long *)plVar13[0x1c] == plVar13 + 0x1b) {
      lVar6 = 0;
    }
    else {
      lVar9 = (long)*(int *)((long)plVar13 + 0xec);
      lVar6 = 0;
      lVar11 = plVar13[0x1c] - lVar9;
      do {
        lVar6 = *(long *)(lVar11 + 0x18) + lVar6;
        lVar11 = *(long *)(lVar11 + lVar9 + 8) - lVar9;
      } while (lVar11 != (long)(plVar13 + 0x1b) - lVar9);
    }
    if (plVar15 != (long *)0x0) {
      nn::os::UnlockMutex((MutexType *)(plVar15 + 4));
    }
  }
  *(long *)(param_1 + 0xe0) = lVar14;
  dVar19 = (double)uVar16 / (double)uVar17;
  *(long *)(param_1 + 0xd0) = lVar6 + lVar14;
  *(ulong *)(param_1 + 0xd8) = uVar16;
  uVar7 = (**(code **)(**(long **)(param_1 + 0x20) + 0x70))();
  *(undefined8 *)(param_1 + 0xe8) = uVar7;
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
LAB_03f2ca3c:
  *(float *)(param_1 + 0x100) = (float)dVar19;
  nn::os::UnlockMutex(pMVar1);
  return;
}

