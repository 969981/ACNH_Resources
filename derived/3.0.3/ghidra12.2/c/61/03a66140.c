
void FUN_03a66140(undefined8 *param_1)

{
  undefined *puVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  short sVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  long *plVar12;
  void *pvVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  *param_1 = &PTR_FUN_04b70318;
  puVar10 = PTR_DAT_04bbd510;
  puVar9 = PTR_DAT_04bb2698;
  lVar14 = param_1[0xa5];
  if (lVar14 != 0) {
    plVar12 = (long *)(lVar14 + -8);
    if (*plVar12 != 0) {
      lVar16 = *plVar12 * 0x338;
      lVar15 = 0;
      puVar1 = PTR_DAT_04bbd508 + 0x10;
      do {
        lVar3 = lVar14 + lVar16;
        pvVar13 = *(void **)(lVar3 + -0x330);
        if (pvVar13 != (void *)0x0) {
          if (*(long *)puVar9 == 0) {
            free(pvVar13);
          }
          else {
            plVar11 = (long *)FUN_038cb610(*(long *)puVar9,pvVar13);
            if (plVar11 != (long *)0x0) {
              (**(code **)(*plVar11 + 0x38))(plVar11,pvVar13);
            }
          }
          *(undefined8 *)(lVar3 + -0x330) = 0;
          *(undefined4 *)(lVar3 + -0x338) = 0;
        }
        pvVar13 = *(void **)(lVar3 + -0x310);
        if (pvVar13 != (void *)0x0) {
          if (*(long *)puVar9 == 0) {
            free(pvVar13);
          }
          else {
            plVar11 = (long *)FUN_038cb610(*(long *)puVar9,pvVar13);
            if (plVar11 != (long *)0x0) {
              (**(code **)(*plVar11 + 0x38))(plVar11,pvVar13);
            }
          }
          *(undefined8 *)(lVar3 + -0x310) = 0;
          *(undefined4 *)(lVar3 + -0x318) = 0;
        }
        if (*(long *)(lVar3 + -0x308) != 0) {
          FUN_039499cc(*(undefined8 *)puVar10);
          *(long *)(lVar3 + -0x308) = 0;
        }
        if (*(long *)(lVar3 + -0x20) != 0) {
          FUN_039499cc(*(undefined8 *)puVar10);
          *(undefined8 *)(lVar3 + -0x20) = 0;
        }
        if (*(short *)(lVar3 + -0x26) != -1) {
          lVar17 = *(long *)PTR_DAT_04bc1010;
          nn::os::LockMutex((MutexType *)(lVar17 + 0x580));
          uVar8 = (int)*(short *)(lVar3 + -0x26) - (uint)*(ushort *)(lVar17 + 0x5c0);
          if (*(uint *)(lVar17 + 0x5a0) <= uVar8) {
            uVar8 = 0;
          }
          lVar4 = *(long *)(lVar17 + 0x5a8) + (long)(int)uVar8 * 0x80;
          sVar7 = *(short *)(lVar4 + 0x76) + -1;
          *(short *)(lVar4 + 0x76) = sVar7;
          if (sVar7 == 0) {
            *(short *)(lVar17 + 0x5c4) = *(short *)(lVar17 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar17 + 0x580));
          *(undefined2 *)(lVar3 + -0x26) = 0xffff;
        }
        FUN_038fd0e0(lVar3 + -0xb0);
        *(undefined **)(lVar3 + -0x1e0) = puVar1;
        FUN_038fd0e0(lVar3 + -0x188);
        FUN_038fd0e0(lVar3 + -0x298);
        lVar15 = lVar15 + 0x338;
        lVar14 = lVar14 + -0x338;
      } while (lVar16 != lVar15);
    }
    if (*(long *)puVar9 == 0) {
      free(plVar12);
    }
    else {
      plVar11 = (long *)FUN_038cb610(*(long *)puVar9,plVar12);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x38))(plVar11,plVar12);
      }
    }
    param_1[0xa5] = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  pvVar13 = (void *)param_1[4];
  if (pvVar13 != (void *)0x0) {
    if (*(long *)puVar9 == 0) {
      free(pvVar13);
    }
    else {
      plVar12 = (long *)FUN_038cb610(*(long *)puVar9,pvVar13);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x38))(plVar12,pvVar13);
      }
    }
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  pvVar13 = (void *)param_1[2];
  if (pvVar13 != (void *)0x0) {
    if (*(long *)puVar9 == 0) {
      free(pvVar13);
    }
    else {
      plVar12 = (long *)FUN_038cb610(*(long *)puVar9,pvVar13);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x38))(plVar12,pvVar13);
      }
    }
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  param_1[0xb4] = PTR_DAT_04bd11c0 + 0x10;
  puVar9 = PTR_DAT_04bc8e38;
  if (param_1[0xd4] != 0) {
    lVar14 = *(long *)PTR_DAT_04bc1010;
    (**(code **)PTR_DAT_04bc8e38)(param_1 + 0xb5);
    piVar2 = (int *)(lVar14 + 0x650);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(undefined1 *)(param_1 + 0xbc) = 0;
    *(undefined1 *)((long)param_1 + 0x5ec) = 0;
    *(undefined1 *)(param_1 + 0xbf) = 0;
    *(undefined1 *)((long)param_1 + 0x604) = 0;
    *(undefined1 *)(param_1 + 0xc2) = 0;
    *(undefined1 *)((long)param_1 + 0x61c) = 0;
    *(undefined1 *)(param_1 + 0xc5) = 0;
    *(undefined1 *)((long)param_1 + 0x634) = 0;
    *(undefined1 *)(param_1 + 200) = 0;
    *(undefined1 *)((long)param_1 + 0x64c) = 0;
    *(undefined1 *)(param_1 + 0xcb) = 0;
    *(undefined1 *)((long)param_1 + 0x664) = 0;
    *(undefined1 *)(param_1 + 0xce) = 0;
    *(undefined1 *)((long)param_1 + 0x67c) = 0;
    *(undefined1 *)(param_1 + 0xd1) = 0;
    *(undefined1 *)((long)param_1 + 0x694) = 0;
    *(undefined4 *)(param_1 + 0xd3) = 0;
    param_1[0xd6] = 0;
    *(undefined4 *)(param_1 + 0xd7) = 0;
    param_1[0xd4] = 0;
    param_1[0xd5] = 0;
  }
  param_1[0xad] = PTR_DAT_04bbd550 + 0x10;
  FUN_038f4940(param_1 + 0xad);
  param_1[0xa6] = &PTR_LAB_04b70358;
  FUN_038f4940(param_1 + 0xa6);
  param_1[0x98] = PTR_DAT_04bd1170 + 0x10;
  if (param_1[0x9b] != 0) {
    lVar14 = *(long *)PTR_DAT_04bc1010;
    (**(code **)puVar9)(param_1 + 0x9e);
    piVar2 = (int *)(lVar14 + 0x65c);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(undefined4 *)(param_1 + 0x9a) = 0;
    param_1[0x9d] = 0;
    param_1[0x9b] = 0;
    param_1[0x9c] = 0;
  }
  FUN_0390e230(param_1 + 0x5c);
  param_1[0x15] = PTR_DAT_04bd0d40 + 0x10;
  lVar14 = param_1[0x16];
  if (lVar14 != 0) {
    if (lVar14 == 1) {
      return;
    }
    if ((*(uint *)(lVar14 + 0xd0) & 1) == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = lVar14 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar14 + 0xb0));
    }
    plVar12 = (long *)((long)*(int *)(lVar14 + 0x84) + (long)(param_1 + 0x15));
    if (*plVar12 != 0) {
      *(long *)(*plVar12 + 8) = plVar12[1];
    }
    if ((long *)plVar12[1] != (long *)0x0) {
      *(long *)plVar12[1] = *plVar12;
    }
    *plVar12 = 0;
    plVar12[1] = 0;
    *(int *)(lVar14 + 0x80) = *(int *)(lVar14 + 0x80) + -1;
    if (lVar15 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar15 + 0x20));
    }
  }
  param_1[0x16] = 1;
  return;
}

