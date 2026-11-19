
long * FUN_03b54d30(long param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  uint *puVar2;
  long *plVar3;
  int *piVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  ushort uVar8;
  undefined2 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long local_48;
  
  if (*(char *)(param_1 + 0x28) != '\0' || *(long *)(param_1 + 0x30) != 0) {
    piVar1 = (int *)(param_1 + 0x38);
    puVar2 = (uint *)(param_1 + 0x58);
    do {
      while( true ) {
        uVar10 = *puVar2;
        if (uVar10 == 0xffff) {
          return (long *)0x0;
        }
        if (*puVar2 == uVar10) break;
        ClearExclusiveLocal();
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar6) {
        *puVar2 = (uint)*(ushort *)(*(long *)(param_1 + 0x50) + (ulong)uVar10 * 2);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (((uVar10 ^ 0xffffffff) & 0xffff) != 0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar14 = (long *)(*(long *)(param_1 + 0x30) + ((ulong)uVar10 & 0xffff) * 0xe8);
      *(short *)(plVar14 + 0x1c) = (short)uVar10;
      if (*(char *)((long)plVar14 + 0x7c) == '\0') {
        plVar3 = plVar14 + 0x10;
        *(undefined4 *)(plVar14 + 0xe) = param_2;
        *(undefined4 *)((long)plVar14 + 0x74) = param_3;
        *(undefined4 *)(plVar14 + 0xf) = 0;
        plVar7 = (long *)plVar14[0x11];
        while (plVar7 != plVar3) {
          plVar12 = (long *)plVar7[1];
          *plVar7 = 0;
          plVar7[1] = 0;
          plVar7 = plVar12;
        }
        plVar14[0x10] = (long)plVar3;
        plVar14[0x11] = (long)plVar3;
        *(undefined4 *)(plVar14 + 0x12) = 0;
        uVar8 = (**(code **)(*plVar14 + 0x48))(plVar14);
        *(undefined4 *)(plVar14 + 2) = 0;
        *(undefined4 *)(plVar14 + 4) = 0;
        nn::os::LockMutex((MutexType *)(plVar14 + 10));
        FUN_03b55fd0(plVar14 + 7);
        *(undefined2 *)((long)plVar14 + 0x32) = 0;
        nn::os::UnlockMutex((MutexType *)(plVar14 + 10));
        *(ushort *)(plVar14 + 6) = uVar8 | 0x8000;
        uVar9 = (**(code **)(*plVar14 + 0x48))(plVar14);
        lVar13 = *(long *)(DAT_05aebb88 + 0x188);
        piVar1 = (int *)(lVar13 + 0x40);
        if (*piVar1 == 0) {
          puVar11 = (undefined8 *)0x0;
        }
        else {
          puVar2 = (uint *)(lVar13 + 0x38);
          do {
            while( true ) {
              uVar10 = *puVar2;
              if (*puVar2 == uVar10) break;
              ClearExclusiveLocal();
            }
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = (uint)*(ushort *)(*(long *)(lVar13 + 0x30) + (ulong)uVar10 * 2);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          piVar4 = (int *)(lVar13 + 0x10);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar6) {
              *piVar4 = *piVar4 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          puVar11 = (undefined8 *)(*(long *)(lVar13 + 0x18) + ((ulong)uVar10 & 0xffff) * 0x40);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = *piVar1 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          *(undefined2 *)(puVar11 + 1) = uVar9;
          *(undefined4 *)((long)puVar11 + 0xc) = param_2;
          *(undefined4 *)(puVar11 + 2) = param_3;
          *puVar11 = &PTR_LAB_04b77480;
        }
        local_48 = DAT_05aebb88;
        FUN_03b519f0(&local_48,puVar11);
        *(undefined1 *)((long)plVar14 + 0x7c) = 1;
      }
      uVar10 = (**(code **)(*plVar14 + 0x48))(plVar14);
      param_1 = param_1 + (ulong)(uVar10 >> 5 & 0x7ff) * 4;
      *(uint *)(param_1 + 0x10) = 1 << (ulong)(uVar10 & 0x1f) | *(uint *)(param_1 + 0x10);
      return plVar14;
    }
  }
  return (long *)0x0;
}

