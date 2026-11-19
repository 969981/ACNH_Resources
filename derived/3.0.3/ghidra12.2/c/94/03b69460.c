
bool FUN_03b69460(long param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  char cVar11;
  bool bVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  int iVar18;
  long *plVar19;
  int *piVar20;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  MutexType *pMVar24;
  int iVar25;
  
  iVar5 = *(int *)(param_1 + 0x28);
  iVar6 = *(int *)(param_1 + 0x80);
  if (iVar5 <= iVar6) goto LAB_03b69798;
  if (*(int *)(param_1 + 0x78) < 1) {
    plVar19 = (long *)0x0;
  }
  else {
    plVar19 = *(long **)(param_1 + 0x70);
    if (*plVar19 != 0) {
      *(long *)(*plVar19 + 8) = plVar19[1];
    }
    if ((long *)plVar19[1] != (long *)0x0) {
      *(long *)plVar19[1] = *plVar19;
    }
    *plVar19 = 0;
    plVar19[1] = 0;
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + -1;
  }
  puVar3 = (undefined1 *)0x0;
  if (plVar19 != (long *)0x0) {
    puVar3 = (undefined1 *)((long)plVar19 - (long)*(int *)(param_1 + 0x7c));
  }
  uVar23 = *(ulong *)(puVar3 + 0x10);
  if (*(int *)(param_1 + 0x20) == 6) {
    iVar18 = (int)(uVar23 >> 3) * 0xe;
  }
  else if (*(int *)(param_1 + 0x20) == 2) {
    uVar17 = nn::audio::GetSampleByteSize(2);
    iVar18 = 0;
    if (uVar17 != 0) {
      iVar18 = (int)(uVar23 / uVar17);
    }
  }
  else {
    iVar18 = 0;
  }
  iVar16 = *(int *)(param_1 + 0x28);
  iVar7 = *(int *)(param_1 + 0x80);
  puVar3[0x20] = 1;
  iVar16 = iVar16 - iVar7;
  uVar9 = *(undefined2 *)(param_1 + 0x24);
  iVar7 = *(int *)(param_1 + 0x80);
  if (iVar16 <= iVar18) {
    iVar18 = iVar16;
  }
  iVar16 = *(int *)(param_1 + 0x20);
  iVar25 = (int)*(undefined8 *)(param_1 + 0x18);
  if (iVar16 == 6) {
    uVar4 = iVar7 % 0xe;
    if (uVar4 == 0) {
      iVar15 = 0;
    }
    else {
      iVar15 = 1;
      if ((uVar4 & 1) != 0) {
        iVar15 = 2;
      }
      iVar15 = iVar15 + ((int)((uVar4 + ((uVar4 & 0x80) >> 7)) * 0x1000000) >> 0x19);
    }
    iVar15 = iVar25 + (iVar7 / 0xe) * 8 + iVar15;
LAB_03b695f8:
    uVar4 = iVar18 % 0xe;
    if (uVar4 == 0) {
      iVar16 = 0;
    }
    else {
      iVar16 = 1;
      if ((uVar4 & 1) != 0) {
        iVar16 = 2;
      }
      iVar16 = iVar16 + ((int)((uVar4 + ((uVar4 & 0x80) >> 7)) * 0x1000000) >> 0x19);
    }
    iVar16 = iVar16 + (iVar18 / 0xe) * 8;
  }
  else {
    if (iVar16 == 2) {
      iVar15 = nn::audio::GetSampleByteSize(2);
      iVar15 = iVar15 * iVar7;
      iVar16 = *(int *)(param_1 + 0x20);
    }
    else {
      iVar15 = 0;
    }
    iVar15 = iVar15 + iVar25;
    if (iVar16 == 6) goto LAB_03b695f8;
    if (iVar16 == 2) {
      iVar16 = nn::audio::GetSampleByteSize(2);
      iVar16 = iVar16 * iVar18;
    }
    else {
      iVar16 = 0;
    }
  }
  puVar13 = PTR_DAT_04bd1e70;
  uVar8 = *puVar3;
  lVar22 = *(long *)(*(long *)PTR_DAT_04bd1e70 + 0x188);
  piVar20 = (int *)(lVar22 + 0x40);
  if (*piVar20 != 0) {
    puVar1 = (uint *)(lVar22 + 0x38);
    do {
      while( true ) {
        uVar4 = *puVar1;
        if (*puVar1 == uVar4) break;
        ClearExclusiveLocal();
      }
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar12) {
        *puVar1 = (uint)*(ushort *)(*(long *)(lVar22 + 0x30) + (ulong)uVar4 * 2);
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    piVar2 = (int *)(lVar22 + 0x10);
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar12) {
        *piVar2 = *piVar2 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    plVar19 = (long *)(*(long *)(lVar22 + 0x18) + ((ulong)uVar4 & 0xffff) * 0x40);
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar20,0x10);
      if (bVar12) {
        *piVar20 = *piVar20 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    *plVar19 = (long)(PTR_DAT_04bd2008 + 0x10);
    puVar14 = PTR_DAT_04bd1fa0;
    lVar22 = *(long *)(param_1 + 0x10);
    uVar10 = *(undefined2 *)(param_1 + 8);
    *(undefined2 *)(plVar19 + 2) = uVar9;
    *(int *)((long)plVar19 + 0x14) = iVar15;
    *(int *)(plVar19 + 3) = iVar16;
    *(undefined1 *)((long)plVar19 + 0x1e) = uVar8;
    *(undefined2 *)((long)plVar19 + 0x1c) = uVar10;
    *plVar19 = (long)(puVar14 + 0x10);
    plVar19[1] = lVar22;
    lVar22 = *(long *)(*(long *)puVar13 + 400);
    pMVar24 = *(MutexType **)(lVar22 + 0x40278);
    nn::os::LockMutex(pMVar24);
    piVar20 = *(int **)(lVar22 + 0x40258);
    if (*piVar20 < piVar20[1]) {
      *(long **)(*(long *)(piVar20 + 2) + (long)*piVar20 * 8) = plVar19;
      *piVar20 = *piVar20 + 1;
    }
    nn::os::UnlockMutex(pMVar24);
  }
  iVar16 = *(int *)(param_1 + 0x80);
  *(int *)(puVar3 + 0x18) = iVar16;
  *(int *)(puVar3 + 0x1c) = iVar16 + iVar18;
  plVar21 = (long *)(param_1 + 0x50);
  lVar22 = *plVar21;
  plVar19 = (long *)(puVar3 + *(int *)(param_1 + 100));
  *plVar21 = (long)plVar19;
  *plVar19 = lVar22;
  plVar19[1] = (long)plVar21;
  if (lVar22 != 0) {
    *(long **)(lVar22 + 8) = plVar19;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + iVar18;
LAB_03b69798:
  return iVar6 < iVar5;
}

