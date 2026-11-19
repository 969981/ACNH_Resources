
void FUN_03a6a6c0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  short sVar6;
  uint uVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  
  *param_1 = &PTR_LAB_04b703f0;
  param_1[1] = &PTR_LAB_04b70418;
  lVar10 = param_1[0x3c];
  if (lVar10 != 0) {
    plVar11 = (long *)(lVar10 + -8);
    if (*plVar11 != 0) {
      lVar12 = *plVar11 * 0x78;
      puVar1 = PTR_DAT_04bd11b8 + 0x10;
      do {
        *(undefined **)(lVar10 + -0x78 + lVar12) = puVar1;
        FUN_0390d560();
        lVar12 = lVar12 + -0x78;
      } while (lVar12 != 0);
    }
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(plVar11);
    }
    else {
      plVar9 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,plVar11);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9,plVar11);
      }
    }
    param_1[0x3c] = 0;
    *(undefined4 *)(param_1 + 0x3b) = 0;
  }
  puVar1 = PTR_DAT_04bc1010;
  if (*(short *)((long)param_1 + 0xc42) != -1) {
    lVar10 = *(long *)PTR_DAT_04bc1010;
    nn::os::LockMutex((MutexType *)(lVar10 + 0x580));
    uVar7 = (int)*(short *)((long)param_1 + 0xc42) - (uint)*(ushort *)(lVar10 + 0x5c0);
    if (*(uint *)(lVar10 + 0x5a0) <= uVar7) {
      uVar7 = 0;
    }
    lVar12 = *(long *)(lVar10 + 0x5a8) + (long)(int)uVar7 * 0x80;
    sVar6 = *(short *)(lVar12 + 0x76) + -1;
    *(short *)(lVar12 + 0x76) = sVar6;
    if (sVar6 == 0) {
      *(short *)(lVar10 + 0x5c4) = *(short *)(lVar10 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar10 + 0x580));
    *(undefined2 *)((long)param_1 + 0xc42) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x177);
  FUN_038fd0e0(param_1 + 0x163);
  FUN_0390e230(param_1 + 0x11d);
  FUN_0390e230(param_1 + 0xe1);
  puVar2 = PTR_DAT_04bd11c0 + 0x10;
  param_1[0xbd] = puVar2;
  puVar8 = PTR_DAT_04bc8e38;
  if (param_1[0xdd] != 0) {
    lVar10 = *(long *)puVar1;
    (**(code **)PTR_DAT_04bc8e38)(param_1 + 0xbe);
    piVar3 = (int *)(lVar10 + 0x650);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = *piVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
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
    *(undefined1 *)(param_1 + 0xd4) = 0;
    *(undefined1 *)((long)param_1 + 0x6ac) = 0;
    *(undefined1 *)(param_1 + 0xd7) = 0;
    *(undefined1 *)((long)param_1 + 0x6c4) = 0;
    *(undefined1 *)(param_1 + 0xda) = 0;
    *(undefined1 *)((long)param_1 + 0x6dc) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0;
    param_1[0xdf] = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    param_1[0xdd] = 0;
    param_1[0xde] = 0;
  }
  param_1[0x99] = puVar2;
  if (param_1[0xb9] != 0) {
    lVar10 = *(long *)puVar1;
    (**(code **)puVar8)(param_1 + 0x9a);
    piVar3 = (int *)(lVar10 + 0x650);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = *piVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *(undefined1 *)(param_1 + 0xa1) = 0;
    *(undefined1 *)((long)param_1 + 0x514) = 0;
    *(undefined1 *)(param_1 + 0xa4) = 0;
    *(undefined1 *)((long)param_1 + 0x52c) = 0;
    *(undefined1 *)(param_1 + 0xa7) = 0;
    *(undefined1 *)((long)param_1 + 0x544) = 0;
    *(undefined1 *)(param_1 + 0xaa) = 0;
    *(undefined1 *)((long)param_1 + 0x55c) = 0;
    *(undefined1 *)(param_1 + 0xad) = 0;
    *(undefined1 *)((long)param_1 + 0x574) = 0;
    *(undefined1 *)(param_1 + 0xb0) = 0;
    *(undefined1 *)((long)param_1 + 0x58c) = 0;
    *(undefined1 *)(param_1 + 0xb3) = 0;
    *(undefined1 *)((long)param_1 + 0x5a4) = 0;
    *(undefined1 *)(param_1 + 0xb6) = 0;
    *(undefined1 *)((long)param_1 + 0x5bc) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    param_1[0xbb] = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    param_1[0xb9] = 0;
    param_1[0xba] = 0;
  }
  param_1[0x92] = &PTR_LAB_04b704c8;
  FUN_038f4940(param_1 + 0x92);
  param_1[0x8b] = &PTR_LAB_04b704c8;
  FUN_038f4940(param_1 + 0x8b);
  lVar10 = param_1[0x3f];
  param_1[0x3e] = PTR_DAT_04bd0d40 + 0x10;
  if (lVar10 != 0) {
    if (lVar10 == 1) goto LAB_03a6a9d4;
    if ((*(uint *)(lVar10 + 0xd0) & 1) == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = lVar10 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar10 + 0xb0));
    }
    plVar11 = (long *)((long)param_1 + (long)*(int *)(lVar10 + 0x84) + 0x1f0);
    if (*plVar11 != 0) {
      *(long *)(*plVar11 + 8) = plVar11[1];
    }
    if ((long *)plVar11[1] != (long *)0x0) {
      *(long *)plVar11[1] = *plVar11;
    }
    *plVar11 = 0;
    plVar11[1] = 0;
    *(int *)(lVar10 + 0x80) = *(int *)(lVar10 + 0x80) + -1;
    if (lVar12 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar12 + 0x20));
    }
  }
  param_1[0x3f] = 1;
LAB_03a6a9d4:
  param_1[1] = PTR_DAT_04bd1070 + 0x10;
  return;
}

