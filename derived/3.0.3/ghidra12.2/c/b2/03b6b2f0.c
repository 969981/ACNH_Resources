
undefined8 FUN_03b6b2f0(long param_1,long param_2)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  uint *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  ushort uVar7;
  char cVar8;
  bool bVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  
  if (param_2 == 0) {
    return 0;
  }
  if (*(long *)(param_2 + 8) != param_2) {
    iVar13 = *(int *)(param_2 + 0x14);
    lVar11 = (long)iVar13;
    lVar12 = *(long *)(param_2 + 8) - lVar11;
    do {
      if (*(long *)(lVar12 + 0x68) != lVar12 + 0x60) {
        lVar14 = (long)*(int *)(lVar12 + 0x74);
        lVar15 = *(long *)(lVar12 + 0x68) - lVar14;
        do {
          if ((*(byte *)(lVar15 + 0x20) & 1) != 0) {
            return 0;
          }
          lVar15 = *(long *)(lVar15 + lVar14 + 8) - lVar14;
        } while (lVar15 != (lVar12 + 0x60) - lVar14);
        iVar13 = *(int *)(param_2 + 0x14);
      }
      lVar12 = *(long *)(lVar12 + lVar11 + 8) - lVar11;
    } while (lVar12 != param_2 + -iVar13);
  }
  puVar19 = *(undefined8 **)(param_2 + 0x20);
  if (puVar19 != &DAT_0407ebb1) {
    iVar13 = 0;
    if (*(int *)(param_2 + 0x28) < 1) {
      iVar13 = *(int *)(param_2 + 0x28) + -1;
    }
    memset(puVar19,0,(long)iVar13);
    *(undefined1 *)((long)puVar19 + (long)iVar13) = 0;
  }
  piVar1 = (int *)(param_1 + 0x80);
  *(undefined8 *)(param_2 + 0xb0) = 0xffffffffffffffff;
  puVar2 = (uint *)(param_1 + 0xa8);
  piVar3 = (int *)(param_1 + 0x50);
  puVar4 = (uint *)(param_1 + 0x70);
  while (0 < *(int *)(param_2 + 0x10)) {
    plVar16 = *(long **)(param_2 + 8);
    if (*plVar16 != 0) {
      *(long *)(*plVar16 + 8) = plVar16[1];
    }
    if ((long *)plVar16[1] != (long *)0x0) {
      *(long *)plVar16[1] = *plVar16;
    }
    *plVar16 = 0;
    plVar16[1] = 0;
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
    if ((plVar16 == (long *)0x0) ||
       (puVar19 = (undefined8 *)((long)plVar16 - (long)*(int *)(param_2 + 0x14)),
       puVar19 == (undefined8 *)0x0)) break;
    puVar5 = puVar19 + 0xf;
    *(undefined2 *)(puVar19 + 0x16) = 0;
    *puVar19 = 0;
    puVar19[1] = 0;
    puVar19[2] = 0;
    puVar19[3] = 0;
    *(undefined8 *)((long)puVar19 + 0xb4) = 0;
    *(undefined8 *)((long)puVar19 + 0xbc) = 0;
    *(undefined4 *)((long)puVar19 + 0xc4) = 0;
    *(undefined2 *)(puVar19 + 6) = 0xffff;
    *(undefined4 *)(puVar19 + 9) = 0;
    *(undefined2 *)((long)puVar19 + 0x4c) = 0;
    *(undefined4 *)(puVar19 + 10) = 0;
    puVar19[0xb] = 0;
    *(undefined4 *)(puVar19 + 0x15) = 0;
    *(undefined2 *)((long)puVar19 + 0xac) = 0;
    puVar19[7] = 0xffffffffffffffff;
    puVar19[8] = 0;
    puVar10 = (undefined8 *)puVar19[0x10];
    while (puVar10 != puVar5) {
      puVar18 = (undefined8 *)puVar10[1];
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10 = puVar18;
    }
    puVar19[0xf] = puVar5;
    puVar19[0x10] = puVar5;
    puVar5 = puVar19 + 0x12;
    *(undefined4 *)(puVar19 + 0x11) = 0;
    puVar10 = (undefined8 *)puVar19[0x13];
    while (puVar10 != puVar5) {
      puVar18 = (undefined8 *)puVar10[1];
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10 = puVar18;
    }
    puVar19[0x12] = puVar5;
    puVar19[0x13] = puVar5;
    iVar13 = *(int *)(puVar19 + 5);
    *(undefined4 *)(puVar19 + 0x14) = 0;
    *(undefined2 *)(puVar19 + 6) = 0xffff;
    puVar19[7] = 0xffffffffffffffff;
    puVar19[8] = 0;
    *(undefined4 *)(puVar19 + 9) = 0;
    *(undefined2 *)((long)puVar19 + 0x4c) = 0;
    *(undefined4 *)(puVar19 + 10) = 0;
    puVar19[0xb] = 0;
    while ((0 < iVar13 && (*(int *)(puVar19 + 5) = iVar13 + -1, 0 < *(int *)(puVar19 + 0xe)))) {
      plVar16 = (long *)puVar19[0xd];
      if (*plVar16 != 0) {
        *(long *)(*plVar16 + 8) = plVar16[1];
      }
      if ((long *)plVar16[1] != (long *)0x0) {
        *(long *)plVar16[1] = *plVar16;
      }
      *plVar16 = 0;
      plVar16[1] = 0;
      *(int *)(puVar19 + 0xe) = *(int *)(puVar19 + 0xe) + -1;
      if ((plVar16 == (long *)0x0) ||
         (lVar12 = (long)plVar16 - (long)*(int *)((long)puVar19 + 0x74), lVar12 == 0)) break;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = *piVar1 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      uVar17 = (lVar12 - *(long *)(param_1 + 0x88) >> 3) * 0x8e39;
      do {
        while (uVar6 = *(uint *)(param_1 + 0xa8),
              *(short *)(*(long *)(param_1 + 0xa0) + (uVar17 & 0xffff) * 2) = (short)uVar6,
              *puVar2 != uVar6) {
          ClearExclusiveLocal();
        }
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar9) {
          *puVar2 = (uint)uVar17 & 0xffff;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      iVar13 = *(int *)(puVar19 + 5);
    }
    if ((*(char *)(param_1 + 0x40) != '\0') || (*(long *)(param_1 + 0x48) != 0)) {
      uVar7 = *(ushort *)(puVar19 + 0x1b);
      if ((int)(uint)uVar7 < *(int *)(param_1 + 0x60)) {
        do {
          while (uVar6 = *(uint *)(param_1 + 0x70),
                *(short *)(*(long *)(param_1 + 0x68) + (ulong)uVar7 * 2) = (short)uVar6,
                *puVar4 != uVar6) {
            ClearExclusiveLocal();
          }
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar9) {
            *puVar4 = (uint)uVar7;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar9) {
            *piVar3 = *piVar3 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      *(undefined2 *)(puVar19 + 0x1b) = 0xffff;
    }
  }
  if ((*(char *)(param_1 + 8) != '\0') || (*(long *)(param_1 + 0x10) != 0)) {
    uVar7 = *(ushort *)(param_2 + 0xba);
    if ((int)(uint)uVar7 < *(int *)(param_1 + 0x28)) {
      piVar1 = (int *)(param_1 + 0x18);
      puVar2 = (uint *)(param_1 + 0x38);
      do {
        while (uVar6 = *puVar2,
              *(short *)(*(long *)(param_1 + 0x30) + (ulong)uVar7 * 2) = (short)uVar6,
              *puVar2 != uVar6) {
          ClearExclusiveLocal();
        }
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar9) {
          *puVar2 = (uint)uVar7;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = *piVar1 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    *(undefined2 *)(param_2 + 0xba) = 0xffff;
  }
  return 1;
}

