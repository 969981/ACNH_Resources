
void FUN_03abca40(undefined8 *param_1)

{
  undefined *puVar1;
  MutexType *pMVar2;
  long lVar3;
  int iVar4;
  short sVar5;
  uint uVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  void *__ptr;
  long *plVar13;
  short *psVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  
  __ptr = (void *)param_1[5];
  *param_1 = &PTR_FUN_04b71270;
  if (__ptr != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar9 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9,__ptr);
      }
    }
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  puVar7 = PTR_DAT_04bd11b8;
  lVar15 = param_1[3];
  iVar4 = *(int *)(param_1 + 2);
  if (iVar4 != 0) {
    iVar16 = 0;
    puVar1 = PTR_DAT_04bd11b8 + 0x10;
    do {
      lVar12 = lVar15 + (long)iVar16 * 0x488;
      plVar9 = (long *)(lVar12 + 0x80);
      lVar11 = *plVar9;
      if (lVar11 != 0) {
        plVar13 = (long *)(lVar11 + -8);
        if (*plVar13 != 0) {
          lVar17 = *plVar13 * 0x78;
          do {
            *(undefined **)(lVar11 + -0x78 + lVar17) = puVar7 + 0x10;
            FUN_0390d560();
            lVar17 = lVar17 + -0x78;
          } while (lVar17 != 0);
        }
        if (DAT_05ae7600 == 0) {
          free(plVar13);
        }
        else {
          plVar10 = (long *)FUN_038cb610(DAT_05ae7600,plVar13);
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 0x38))(plVar10,plVar13);
          }
        }
        *plVar9 = 0;
        *(undefined4 *)(lVar12 + 0x78) = 0;
      }
      lVar12 = lVar15 + (long)iVar16 * 0x488;
      plVar9 = (long *)(lVar12 + 0x90);
      lVar11 = *plVar9;
      if (lVar11 != 0) {
        plVar13 = (long *)(lVar11 + -8);
        if (*plVar13 != 0) {
          lVar17 = *plVar13 * 0x78;
          do {
            *(undefined **)(lVar11 + -0x78 + lVar17) = puVar1;
            FUN_0390d560();
            lVar17 = lVar17 + -0x78;
          } while (lVar17 != 0);
        }
        if (DAT_05ae7600 == 0) {
          free(plVar13);
        }
        else {
          plVar10 = (long *)FUN_038cb610(DAT_05ae7600,plVar13);
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 0x38))(plVar10,plVar13);
          }
        }
        *plVar9 = 0;
        *(undefined4 *)(lVar12 + 0x88) = 0;
      }
      iVar16 = iVar16 + 1;
    } while (iVar4 != iVar16);
    lVar15 = param_1[3];
  }
  if (lVar15 != 0) {
    plVar9 = (long *)(lVar15 + -8);
    if (*plVar9 != 0) {
      lVar12 = *plVar9 * 0x488;
      lVar11 = 0;
      do {
        lVar17 = lVar15 + lVar12;
        *(undefined ***)(lVar17 + -0xe0) = &PTR_LAB_049a8b20;
        FUN_038fd0e0(lVar17 + -0x88);
        *(undefined ***)(lVar17 + -0x230) = &PTR_LAB_049a8af0;
        FUN_038fd0e0(lVar17 + -0x1d8);
        lVar8 = DAT_05ae78f0;
        psVar14 = (short *)(lVar17 + -0x236);
        if (*psVar14 != -1) {
          pMVar2 = (MutexType *)(DAT_05ae78f0 + 0x580);
          nn::os::LockMutex(pMVar2);
          uVar6 = (int)*psVar14 - (uint)*(ushort *)(lVar8 + 0x5c0);
          if (*(uint *)(lVar8 + 0x5a0) <= uVar6) {
            uVar6 = 0;
          }
          lVar3 = *(long *)(lVar8 + 0x5a8) + (long)(int)uVar6 * 0x80;
          sVar5 = *(short *)(lVar3 + 0x76) + -1;
          *(short *)(lVar3 + 0x76) = sVar5;
          if (sVar5 == 0) {
            *(short *)(lVar8 + 0x5c4) = *(short *)(lVar8 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex(pMVar2);
          *psVar14 = -1;
        }
        FUN_038fd0e0(lVar17 + -0x2c0);
        lVar8 = DAT_05ae78f0;
        psVar14 = (short *)(lVar17 + -0x316);
        if (*psVar14 != -1) {
          pMVar2 = (MutexType *)(DAT_05ae78f0 + 0x580);
          nn::os::LockMutex(pMVar2);
          uVar6 = (int)*psVar14 - (uint)*(ushort *)(lVar8 + 0x5c0);
          if (*(uint *)(lVar8 + 0x5a0) <= uVar6) {
            uVar6 = 0;
          }
          lVar3 = *(long *)(lVar8 + 0x5a8) + (long)(int)uVar6 * 0x80;
          sVar5 = *(short *)(lVar3 + 0x76) + -1;
          *(short *)(lVar3 + 0x76) = sVar5;
          if (sVar5 == 0) {
            *(short *)(lVar8 + 0x5c4) = *(short *)(lVar8 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex(pMVar2);
          *psVar14 = -1;
        }
        FUN_038fd0e0(lVar17 + -0x3a0);
        *(long *)(lVar17 + -0x488) = (long)(puVar7 + 0x10);
        FUN_0390d560((long *)(lVar17 + -0x488));
        lVar11 = lVar11 + 0x488;
        lVar15 = lVar15 + -0x488;
      } while (lVar12 != lVar11);
    }
    if (DAT_05ae7600 == 0) {
      free(plVar9);
    }
    else {
      plVar13 = (long *)FUN_038cb610(DAT_05ae7600,plVar9);
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x38))(plVar13,plVar9);
      }
    }
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  lVar15 = param_1[0xbd];
  param_1[0xbc] = &PTR_FUN_04b64428;
  if (lVar15 != 0) {
    if (lVar15 == 1) goto LAB_03abce74;
    if ((*(uint *)(lVar15 + 0xd0) & 1) == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = lVar15 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar15 + 0xb0));
    }
    plVar9 = (long *)((long)param_1 + (long)*(int *)(lVar15 + 0x84) + 0x5e0);
    if (*plVar9 != 0) {
      *(long *)(*plVar9 + 8) = plVar9[1];
    }
    if ((long *)plVar9[1] != (long *)0x0) {
      *(long *)plVar9[1] = *plVar9;
    }
    *plVar9 = 0;
    plVar9[1] = 0;
    *(int *)(lVar15 + 0x80) = *(int *)(lVar15 + 0x80) + -1;
    if (lVar11 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar11 + 0x20));
    }
  }
  param_1[0xbd] = 1;
LAB_03abce74:
  FUN_0390e230(param_1 + 0x7e);
  FUN_0390e230(param_1 + 0x42);
  FUN_0390e230(param_1 + 6);
  return;
}

