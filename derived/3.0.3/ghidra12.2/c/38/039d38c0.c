
void FUN_039d38c0(long *param_1)

{
  int *piVar1;
  long *plVar2;
  byte bVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  void *pvVar16;
  MutexType *pMVar17;
  int iVar18;
  long lVar19;
  
  *param_1 = (long)&PTR_LAB_04b6b058;
  puVar7 = PTR_DAT_04bd1770;
  plVar10 = param_1 + 0x1b;
  lVar19 = *plVar10;
  param_1[0x1a] = (long)&PTR_LAB_04b6b340;
  lVar15 = *(long *)puVar7;
  pMVar17 = (MutexType *)(lVar15 + 0x68);
  nn::os::LockMutex(pMVar17);
  if (*(long *)(lVar15 + 0x20) != lVar15 + 0x18) {
    lVar11 = (long)*(int *)(lVar15 + 0x2c);
    lVar12 = *(long *)(lVar15 + 0x20) - lVar11;
    do {
      uVar13 = (ulong)*(ushort *)(*(long *)(lVar12 + 0x20) + 0xdc);
      if (uVar13 != 0) {
        lVar14 = *(long *)(*(long *)(lVar12 + 0x20) + 0x28) + -0x78;
        do {
          lVar14 = lVar14 + 0x78;
          if (lVar14 == lVar19) {
            nn::os::UnlockMutex(pMVar17);
            lVar15 = *(long *)(*plVar10 + 0x60);
            pMVar17 = (MutexType *)(lVar15 + 0x400);
            nn::os::LockMutex(pMVar17);
            piVar1 = (int *)(lVar15 + 0x420);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = *piVar1 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            goto LAB_039d39c0;
          }
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      lVar12 = *(long *)(lVar12 + lVar11 + 8) - lVar11;
    } while (lVar12 != (lVar15 + 0x18) - lVar11);
  }
LAB_039d39c0:
  nn::os::UnlockMutex(pMVar17);
  if ((DAT_05ae9cb8 != 0) && (uVar8 = (**(code **)(*param_1 + 0xb8))(param_1), 0 < (int)uVar8)) {
    uVar13 = 0;
    do {
      plVar9 = (long *)(param_1[0x24] + uVar13 * 0x80);
      bVar3 = *(byte *)(*plVar9 + 0x9c);
      if ((ulong)bVar3 != 0) {
        iVar18 = 0;
        lVar15 = 0;
        plVar2 = plVar9 + 0xb;
        do {
          lVar19 = *plVar2;
          lVar12 = *(long *)(plVar9[10] + lVar15);
          *(undefined8 *)(plVar9[10] + lVar15) = 0;
          *(undefined8 *)(*plVar2 + lVar15) = 0xffffffffffffffff;
          if (((code *)plVar9[0xf] != (code *)0x0) &&
             ((lVar12 != 0 || (*(long *)(lVar19 + lVar15) != *(long *)(*plVar2 + lVar15))))) {
            (*(code *)plVar9[0xf])(plVar9,iVar18);
          }
          lVar15 = lVar15 + 8;
          iVar18 = iVar18 + 1;
        } while ((ulong)bVar3 * 8 != lVar15);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar8);
  }
  plVar9 = *(long **)(DAT_05ae9b00 + 0x48);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x60))(plVar9,param_1);
  }
  uVar4 = *(ushort *)(param_1 + 0x21);
  if ((ulong)uVar4 != 0) {
    lVar15 = 0;
    do {
      if (*(long **)(param_1[0x2d] + lVar15) != (long *)0x0) {
        (**(code **)(**(long **)(param_1[0x2d] + lVar15) + 8))();
      }
      lVar15 = lVar15 + 8;
    } while ((ulong)uVar4 * 8 != lVar15);
  }
  if ((long *)param_1[0x30] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x30] + 8))();
  }
  plVar9 = (long *)param_1[0x2f];
  if ((plVar9 == (long *)0x0) || ((long *)plVar9[1] != param_1)) {
    lVar15 = param_1[0x36];
  }
  else {
    (**(code **)(*plVar9 + 8))();
    lVar15 = param_1[0x36];
  }
  if (lVar15 != 0) {
    FUN_003ad250(plVar10,*(undefined8 *)(*(long *)PTR_DAT_04bc1010 + 0x30));
    if ((long *)param_1[0x37] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x37] + 8))();
    }
    *(undefined4 *)(param_1 + 0x35) = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
  }
  pvVar16 = (void *)param_1[0x27];
  if (pvVar16 != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(pvVar16);
    }
    else {
      plVar10 = (long *)FUN_038cb610(DAT_05ae7600,pvVar16);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x38))(plVar10,pvVar16);
      }
    }
  }
  FUN_003490c0(param_1 + 0x38);
  *param_1 = (long)&PTR_FUN_04b71508;
  if (((*(byte *)((long)param_1 + 0xae) >> 1 & 1) != 0) &&
     (pvVar16 = (void *)param_1[9], pvVar16 != (void *)0x0)) {
    if (DAT_05ae7600 == 0) {
      free(pvVar16);
    }
    else {
      plVar10 = (long *)FUN_038cb610(DAT_05ae7600,pvVar16);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x38))(plVar10,pvVar16);
      }
    }
    param_1[9] = 0;
  }
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
    param_1[2] = 0;
  }
  return;
}

