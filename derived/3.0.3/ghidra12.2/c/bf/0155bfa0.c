
void FUN_0155bfa0(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  short sVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  void *__ptr;
  long lVar11;
  
  __ptr = (void *)param_1[0x15f];
  *param_1 = &PTR_LAB_049a8b70;
  puVar6 = PTR_DAT_04bb2698;
  if (__ptr != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,__ptr);
      }
    }
    param_1[0x15f] = 0;
    *(undefined4 *)(param_1 + 0x15e) = 0;
  }
  lVar10 = param_1[0x161];
  if (lVar10 != 0) {
    plVar8 = (long *)(lVar10 + -8);
    if (*plVar8 != 0) {
      lVar11 = *plVar8 * 0xa0;
      do {
        FUN_038fd0e0(lVar10 + -0x50 + lVar11);
        lVar11 = lVar11 + -0xa0;
      } while (lVar11 != 0);
    }
    if (*(long *)puVar6 == 0) {
      free(plVar8);
    }
    else {
      plVar9 = (long *)FUN_038cb610(*(long *)puVar6,plVar8);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9,plVar8);
      }
    }
    param_1[0x161] = 0;
    *(undefined4 *)(param_1 + 0x160) = 0;
  }
  puVar6 = PTR_DAT_04bd1408;
  param_1[0x14a] = 0;
  param_1[0xf1] = puVar6 + 0x10;
  FUN_0034f82c(param_1 + 0x142);
  FUN_0034f6d0(param_1 + 0x127);
  puVar6 = PTR_DAT_04bc1010;
  if (*(short *)((long)param_1 + 0x782) != -1) {
    lVar10 = *(long *)PTR_DAT_04bc1010;
    nn::os::LockMutex((MutexType *)(lVar10 + 0x580));
    uVar5 = (int)*(short *)((long)param_1 + 0x782) - (uint)*(ushort *)(lVar10 + 0x5c0);
    if (*(uint *)(lVar10 + 0x5a0) <= uVar5) {
      uVar5 = 0;
    }
    lVar11 = *(long *)(lVar10 + 0x5a8) + (long)(int)uVar5 * 0x80;
    sVar4 = *(short *)(lVar11 + 0x76) + -1;
    *(short *)(lVar11 + 0x76) = sVar4;
    if (sVar4 == 0) {
      *(short *)(lVar10 + 0x5c4) = *(short *)(lVar10 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar10 + 0x580));
    *(undefined2 *)((long)param_1 + 0x782) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0xdf);
  FUN_038fd0e0(param_1 + 0xcb);
  if (*(char *)(param_1 + 0xbf) != '\0') {
    param_1[0xb3] = PTR_DAT_04bd1170 + 0x10;
    puVar7 = PTR_DAT_04bc8e38;
    if (param_1[0xb6] != 0) {
      lVar10 = *(long *)puVar6;
      (**(code **)PTR_DAT_04bc8e38)(param_1 + 0xb9);
      piVar1 = (int *)(lVar10 + 0x65c);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *(undefined4 *)(param_1 + 0xb5) = 0;
      param_1[0xb8] = 0;
      param_1[0xb6] = 0;
      param_1[0xb7] = 0;
    }
    FUN_0390e230(param_1 + 0x77);
    param_1[0x53] = PTR_DAT_04bd11c0 + 0x10;
    if (param_1[0x73] != 0) {
      lVar10 = *(long *)puVar6;
      (**(code **)puVar7)(param_1 + 0x54);
      piVar1 = (int *)(lVar10 + 0x650);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *(undefined1 *)(param_1 + 0x5b) = 0;
      *(undefined1 *)((long)param_1 + 0x2e4) = 0;
      *(undefined1 *)(param_1 + 0x5e) = 0;
      *(undefined1 *)((long)param_1 + 0x2fc) = 0;
      *(undefined1 *)(param_1 + 0x61) = 0;
      *(undefined1 *)((long)param_1 + 0x314) = 0;
      *(undefined1 *)(param_1 + 100) = 0;
      *(undefined1 *)((long)param_1 + 0x32c) = 0;
      *(undefined1 *)(param_1 + 0x67) = 0;
      *(undefined1 *)((long)param_1 + 0x344) = 0;
      *(undefined1 *)(param_1 + 0x6a) = 0;
      *(undefined1 *)((long)param_1 + 0x35c) = 0;
      *(undefined1 *)(param_1 + 0x6d) = 0;
      *(undefined1 *)((long)param_1 + 0x374) = 0;
      *(undefined1 *)(param_1 + 0x70) = 0;
      *(undefined1 *)((long)param_1 + 0x38c) = 0;
      *(undefined4 *)(param_1 + 0x72) = 0;
      param_1[0x75] = 0;
      *(undefined4 *)(param_1 + 0x76) = 0;
      param_1[0x73] = 0;
      param_1[0x74] = 0;
    }
    *(undefined1 *)(param_1 + 0xbf) = 0;
  }
  FUN_01629448(param_1);
  return;
}

