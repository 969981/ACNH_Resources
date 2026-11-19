
undefined8 FUN_03b51440(long param_1,ushort param_2,long *param_3)

{
  MutexType *pMVar1;
  long *plVar2;
  int *piVar3;
  uint *puVar4;
  int *piVar5;
  undefined4 uVar6;
  char cVar7;
  bool bVar8;
  undefined2 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  undefined8 local_48;
  
  lVar14 = DAT_05aebb88;
  pMVar1 = (MutexType *)(DAT_05aebb88 + 0x1c0);
  nn::os::LockMutex(pMVar1);
  uVar10 = *(uint *)(lVar14 + 0x1e0);
  if (0 < (int)uVar10) {
    lVar14 = *(long *)(lVar14 + 0x1e8);
    uVar13 = 0;
    do {
      if (*(long *)(lVar14 + uVar13 * 8) == 0) {
        uVar12 = (uint)uVar13;
        if (uVar10 <= uVar12) {
          uVar13 = 0;
        }
        *(long **)(lVar14 + uVar13 * 8) = param_3;
        *(uint *)((long)param_3 + 0xc) = uVar12;
        nn::os::UnlockMutex(pMVar1);
        if (*(char *)(param_1 + 0x1f0) != '\0') {
          lVar14 = *(long *)(param_1 + 0x178);
          plVar2 = (long *)(lVar14 + 0x60);
          plVar15 = plVar2;
          if (*(ushort *)(lVar14 + 0x1f0) != param_2) {
            if (*(char *)(lVar14 + 0x28) == '\0') {
              plVar15 = (long *)0x0;
            }
            else {
              plVar15 = (long *)0x0;
              if ((((param_2 != 0xffff) && (*(long *)(lVar14 + 0x30) != 0)) &&
                  ((int)(uint)param_2 < *(int *)(lVar14 + 0x48))) &&
                 (plVar15 = (long *)(*(long *)(lVar14 + 0x30) + (ulong)(uint)param_2 * 0xe8),
                 *(ushort *)(plVar15 + 0x1c) != param_2)) {
                plVar15 = (long *)0x0;
              }
            }
          }
          uVar10 = (**(code **)(*plVar2 + 0x48))(plVar2);
          if (((*(uint *)((long)plVar15 + (ulong)(uVar10 >> 5 & 0x7ff) * 4 + 0x10) >>
                (ulong)(uVar10 & 0x1f) & 1) != 0) && ((int)plVar15[0x12] == 0)) {
            uVar9 = (**(code **)(*plVar2 + 0x48))(plVar2);
            local_48 = CONCAT62(local_48._2_6_,uVar9);
            local_48 = CONCAT44(0x3f800000,(undefined4)local_48);
            FUN_03b56150(plVar15 + 5,&local_48,0);
          }
        }
        (**(code **)(*param_3 + 0x40))(param_3);
        uVar6 = *(undefined4 *)((long)param_3 + 0xc);
        lVar14 = *(long *)(DAT_05aebb88 + 0x188);
        piVar3 = (int *)(lVar14 + 0x40);
        if (*piVar3 == 0) {
          puVar11 = (undefined8 *)0x0;
        }
        else {
          puVar4 = (uint *)(lVar14 + 0x38);
          do {
            while( true ) {
              uVar10 = *puVar4;
              if (*puVar4 == uVar10) break;
              ClearExclusiveLocal();
            }
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar4,0x10);
            if (bVar8) {
              *puVar4 = (uint)*(ushort *)(*(long *)(lVar14 + 0x30) + (ulong)uVar10 * 2);
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          piVar5 = (int *)(lVar14 + 0x10);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
            if (bVar8) {
              *piVar5 = *piVar5 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          puVar11 = (undefined8 *)(*(long *)(lVar14 + 0x18) + ((ulong)uVar10 & 0xffff) * 0x40);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar8) {
              *piVar3 = *piVar3 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          *(ushort *)(puVar11 + 1) = param_2;
          *(undefined4 *)((long)puVar11 + 0xc) = uVar6;
          *puVar11 = &PTR_LAB_04b775e0;
        }
        local_48 = DAT_05aebb88;
        FUN_03b519f0(&local_48,puVar11);
        return 1;
      }
      uVar13 = uVar13 + 1;
    } while (uVar10 != uVar13);
  }
  nn::os::UnlockMutex(pMVar1);
  return 0;
}

