
void FUN_03b625e0(long param_1,int *param_2,undefined8 *param_3)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined2 uVar8;
  char cVar9;
  bool bVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 uVar17;
  int iVar18;
  undefined8 local_18;
  
  if (*(char *)(param_1 + 0x7a) == '\0') {
    return;
  }
  if (1 < *(int *)(param_1 + 0x70) - 3U) {
    return;
  }
  *(undefined4 *)(param_1 + 0x70) = 1;
  *(undefined1 *)(param_1 + 0x7d) = 1;
  puVar11 = PTR_DAT_04bd1e70;
  uVar8 = *(undefined2 *)(param_1 + 0x118);
  iVar18 = param_2[1];
  lVar14 = *(long *)(*(long *)PTR_DAT_04bd1e70 + 0x188);
  piVar1 = (int *)(lVar14 + 0x40);
  iVar4 = *piVar1;
  if (iVar4 == 0) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (uint *)(lVar14 + 0x38);
    do {
      while( true ) {
        uVar5 = *puVar2;
        if (*puVar2 == uVar5) break;
        ClearExclusiveLocal();
      }
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar10) {
        *puVar2 = (uint)*(ushort *)(*(long *)(lVar14 + 0x30) + (ulong)uVar5 * 2);
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    piVar3 = (int *)(lVar14 + 0x10);
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar10) {
        *piVar3 = *piVar3 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    puVar15 = (undefined8 *)(*(long *)(lVar14 + 0x18) + ((ulong)uVar5 & 0xffff) * 0x40);
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar10) {
        *piVar1 = *piVar1 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    *(undefined2 *)(puVar15 + 1) = uVar8;
    *(int *)(puVar15 + 2) = iVar18;
    *(undefined4 *)((long)puVar15 + 0xc) = 1;
    *puVar15 = &PTR_LAB_04b77270;
    uVar17 = param_3[2];
    uVar6 = param_3[1];
    puVar15[3] = *param_3;
    puVar15[4] = uVar6;
    puVar15[5] = uVar17;
  }
  iVar7 = *param_2;
  lVar14 = *(long *)(*(long *)puVar11 + 0x188);
  piVar1 = (int *)(lVar14 + 0x40);
  iVar18 = *piVar1;
  if (iVar18 == 0) {
    plVar16 = (long *)0x0;
  }
  else {
    puVar2 = (uint *)(lVar14 + 0x38);
    do {
      while( true ) {
        uVar5 = *puVar2;
        if (*puVar2 == uVar5) break;
        ClearExclusiveLocal();
      }
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar10) {
        *puVar2 = (uint)*(ushort *)(*(long *)(lVar14 + 0x30) + (ulong)uVar5 * 2);
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    piVar3 = (int *)(lVar14 + 0x10);
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar10) {
        *piVar3 = *piVar3 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    plVar16 = (long *)(*(long *)(lVar14 + 0x18) + ((ulong)uVar5 & 0xffff) * 0x40);
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar10) {
        *piVar1 = *piVar1 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    *plVar16 = (long)(PTR_DAT_04bd1f70 + 0x10);
    plVar16[1] = (ulong)(iVar7 - 1);
  }
  lVar14 = *(long *)(*(long *)puVar11 + 0x188);
  piVar1 = (int *)(lVar14 + 0x40);
  if (*piVar1 == 0) {
    puVar12 = (undefined8 *)0x0;
    goto LAB_03b62878;
  }
  puVar2 = (uint *)(lVar14 + 0x38);
  do {
    while( true ) {
      uVar5 = *puVar2;
      if (*puVar2 == uVar5) break;
      ClearExclusiveLocal();
    }
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar10) {
      *puVar2 = (uint)*(ushort *)(*(long *)(lVar14 + 0x30) + (ulong)uVar5 * 2);
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  piVar3 = (int *)(lVar14 + 0x10);
  do {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
    if (bVar10) {
      *piVar3 = *piVar3 + 1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  puVar12 = (undefined8 *)(*(long *)(lVar14 + 0x18) + ((ulong)uVar5 & 0xffff) * 0x40);
  do {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar10) {
      *piVar1 = *piVar1 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  *puVar12 = &PTR_LAB_04b77110;
  if (iVar4 == 0) {
    *(undefined4 *)(puVar12 + 1) = 0xffffffff;
    if (iVar18 == 0) goto LAB_03b6286c;
LAB_03b62840:
    uVar13 = (undefined4)
             ((ulong)((long)plVar16 - *(long *)(*(long *)(*(long *)puVar11 + 0x188) + 0x18)) >> 6);
  }
  else {
    *(int *)(puVar12 + 1) =
         (int)((ulong)((long)puVar15 - *(long *)(*(long *)(*(long *)puVar11 + 0x188) + 0x18)) >> 6);
    if (iVar18 != 0) goto LAB_03b62840;
LAB_03b6286c:
    uVar13 = 0xffffffff;
  }
  *(undefined4 *)((long)puVar12 + 0xc) = uVar13;
  *(undefined4 *)(puVar12 + 2) = 2;
LAB_03b62878:
  local_18 = *(undefined8 *)puVar11;
  FUN_03b519f0(&local_18,puVar12);
  return;
}

