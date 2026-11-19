
void FUN_039a85e0(undefined8 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  long *plVar5;
  undefined *puVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  void *pvVar11;
  long *plVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  
  *param_1 = &PTR_FUN_04b6a3c0;
  FUN_039ccec0(*(undefined8 *)PTR_DAT_04bbdcb8,param_1);
  if (param_1[0xe] != 0) {
    FUN_03a03df0(param_1[0xe],param_1);
  }
  lVar8 = param_1[10];
  param_1[0xe] = 0;
  puVar6 = PTR_DAT_04bd1770;
  if ((lVar8 != 0) && (*(int *)(lVar8 + 200) != 0)) {
    plVar12 = *(long **)(lVar8 + 0xd0);
    plVar5 = plVar12 + *(int *)(lVar8 + 200);
    do {
      lVar15 = *(long *)puVar6;
      lVar14 = *plVar12;
      nn::os::LockMutex((MutexType *)(lVar15 + 0x68));
      bVar7 = *(long *)(lVar15 + 0x20) == lVar15 + 0x18;
      lVar9 = (long)*(int *)(lVar15 + 0x2c);
      lVar8 = *(long *)(lVar15 + 0x20) - lVar9;
      lVar10 = (lVar15 + 0x18) - lVar9;
      if (lVar14 != lVar8 && lVar8 != lVar10) {
        do {
          lVar8 = *(long *)(lVar8 + lVar9 + 8) - lVar9;
          bVar7 = lVar8 == lVar10;
        } while (lVar14 != lVar8 && lVar8 != lVar10);
      }
      nn::os::UnlockMutex((MutexType *)(lVar15 + 0x68));
      if (!bVar7) {
        piVar1 = (int *)(lVar14 + 0x2b8);
        do {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = *piVar1 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar5);
  }
  uVar2 = *(uint *)(param_1 + 4);
  if ((uint)*(ushort *)((long)param_1 + 0x284) <= *(uint *)(param_1 + 4)) {
    uVar2 = (uint)*(ushort *)((long)param_1 + 0x284);
  }
  if (uVar2 != 0) {
    lVar8 = param_1[5];
    uVar13 = 0;
    do {
      puVar16 = (undefined8 *)(lVar8 + (long)(int)uVar13 * 0x38);
      plVar12 = (long *)*puVar16;
      (**(code **)(*plVar12 + 0x280))(plVar12);
      if ((*(byte *)((long)puVar16 + 0x1e) >> 1 & 1) != 0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
      uVar13 = uVar13 + 1;
    } while (uVar2 != uVar13);
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x3f));
  puVar16 = (undefined8 *)param_1[0x39];
  if (puVar16 != param_1 + 0x38) {
    iVar3 = *(int *)((long)param_1 + 0x1d4);
    do {
      puVar16 = (undefined8 *)puVar16[1];
      FUN_039aa568();
    } while ((long)puVar16 - (long)iVar3 !=
             (long)(param_1 + 0x38) - (long)*(int *)((long)param_1 + 0x1d4));
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3f));
  if ((long *)param_1[10] != (long *)0x0) {
    (**(code **)(*(long *)param_1[10] + 8))();
    param_1[10] = 0;
  }
  if ((long *)param_1[0xc] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xc] + 0x18))();
    param_1[0xc] = 0;
  }
  plVar12 = (long *)param_1[0xf];
  plVar5 = (long *)PTR_DAT_04bb2698;
  while (PTR_DAT_04bb2698 = (undefined *)plVar5, plVar12 != (long *)0x0) {
    lVar8 = *plVar12;
    plVar12 = (long *)plVar12[5];
    (**(code **)(lVar8 + 8))();
    plVar5 = (long *)PTR_DAT_04bb2698;
  }
  pvVar11 = (void *)param_1[5];
  if (pvVar11 != (void *)0x0) {
    if (*plVar5 == 0) {
      free(pvVar11);
    }
    else {
      plVar12 = (long *)FUN_038cb610(*plVar5,pvVar11);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x38))(plVar12,pvVar11);
      }
    }
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  pvVar11 = (void *)param_1[7];
  if (pvVar11 != (void *)0x0) {
    if (*plVar5 == 0) {
      free(pvVar11);
    }
    else {
      plVar12 = (long *)FUN_038cb610(*plVar5,pvVar11);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x38))(plVar12,pvVar11);
      }
    }
    param_1[6] = 0;
    param_1[7] = 0;
  }
  pvVar11 = (void *)param_1[9];
  if (pvVar11 != (void *)0x0) {
    if (*plVar5 == 0) {
      free(pvVar11);
    }
    else {
      plVar12 = (long *)FUN_038cb610(*plVar5,pvVar11);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x38))(plVar12,pvVar11);
      }
    }
    param_1[8] = 0;
    param_1[9] = 0;
  }
  pvVar11 = (void *)param_1[0x14];
  if (pvVar11 != (void *)0x0) {
    FUN_039b2c94((long)pvVar11 + 0xb0);
    FUN_039aa618((long)pvVar11 + 0x78);
    if (*plVar5 == 0) {
      free(pvVar11);
    }
    else {
      plVar12 = (long *)FUN_038cb610(*plVar5,pvVar11);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x38))(plVar12,pvVar11);
      }
    }
    param_1[0x14] = 0;
  }
  if ((undefined8 *)param_1[0x13] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x13] = 0;
  }
  FUN_038e1a84(param_1 + 0x3b);
  lVar8 = param_1[1];
  *param_1 = &PTR_FUN_04b64428;
  if (lVar8 != 0) {
    if (lVar8 == 1) {
      return;
    }
    if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = lVar8 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
    }
    plVar12 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)param_1);
    if (*plVar12 != 0) {
      *(long *)(*plVar12 + 8) = plVar12[1];
    }
    if ((long *)plVar12[1] != (long *)0x0) {
      *(long *)plVar12[1] = *plVar12;
    }
    *plVar12 = 0;
    plVar12[1] = 0;
    *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + -1;
    if (lVar9 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar9 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

