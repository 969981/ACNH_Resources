
bool FUN_03b51b10(long *param_1,long param_2)

{
  uint *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  bool bVar9;
  ulong uVar10;
  undefined8 uVar11;
  int *piVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  MutexType *pMVar17;
  
  puVar8 = PTR_DAT_04bd1e70;
  bVar9 = *(char *)(*param_1 + 1) != '\0';
  if (param_2 != 0 && bVar9) {
    uVar15 = *(undefined8 *)(*param_1 + 0x1a8);
    uVar11 = *(undefined8 *)(param_2 + 0xb0);
    lVar14 = *(long *)(*(long *)PTR_DAT_04bd1e70 + 0x188);
    piVar12 = (int *)(lVar14 + 0x40);
    if (*piVar12 != 0) {
      puVar1 = (uint *)(lVar14 + 0x38);
      do {
        while( true ) {
          uVar5 = *puVar1;
          if (*puVar1 == uVar5) break;
          ClearExclusiveLocal();
        }
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar7) {
          *puVar1 = (uint)*(ushort *)(*(long *)(lVar14 + 0x30) + (ulong)uVar5 * 2);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      piVar2 = (int *)(lVar14 + 0x10);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = *piVar2 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      puVar3 = (undefined8 *)(*(long *)(lVar14 + 0x18) + ((ulong)uVar5 & 0xffff) * 0x40);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar7) {
          *piVar12 = *piVar12 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      *puVar3 = &PTR_LAB_04b77378;
      puVar3[1] = uVar11;
      lVar14 = *(long *)(*(long *)puVar8 + 400);
      pMVar17 = *(MutexType **)(lVar14 + 0x40278);
      nn::os::LockMutex(pMVar17);
      piVar12 = *(int **)(lVar14 + 0x40258);
      if (*piVar12 < piVar12[1]) {
        *(undefined8 **)(*(long *)(piVar12 + 2) + (long)*piVar12 * 8) = puVar3;
        *piVar12 = *piVar12 + 1;
      }
      nn::os::UnlockMutex(pMVar17);
    }
    uVar10 = FUN_03b6b2f0(uVar15,param_2);
    if ((uVar10 & 1) == 0) {
      lVar16 = *(long *)(*param_1 + 0x1a8);
      nn::os::LockMutex((MutexType *)(lVar16 + 0xb0));
      plVar4 = (long *)(*(int *)(lVar16 + 0xe4) + param_2);
      plVar13 = (long *)(lVar16 + 0xd0);
      lVar14 = *plVar13;
      *plVar13 = (long)plVar4;
      *plVar4 = lVar14;
      plVar4[1] = (long)plVar13;
      if (lVar14 != 0) {
        *(long **)(lVar14 + 8) = plVar4;
      }
      *(int *)(lVar16 + 0xe0) = *(int *)(lVar16 + 0xe0) + 1;
      nn::os::UnlockMutex((MutexType *)(lVar16 + 0xb0));
    }
  }
  return param_2 != 0 && bVar9;
}

