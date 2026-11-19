
void FUN_03b510b0(long param_1)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  MutexType *pMVar12;
  long local_38;
  
  FUN_03b68c90(*(undefined8 *)(param_1 + 0x1a0));
  lVar11 = *(long *)(param_1 + 0x178);
  uVar5 = *(uint *)(lVar11 + 0x20);
  uVar6 = *(uint *)(lVar11 + 0x10);
  if (uVar5 != uVar6) {
    lVar10 = *(long *)(DAT_05aebb88 + 0x188);
    piVar1 = (int *)(lVar10 + 0x40);
    if (*piVar1 == 0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (uint *)(lVar10 + 0x38);
      do {
        while( true ) {
          uVar4 = *puVar2;
          if (*puVar2 == uVar4) break;
          ClearExclusiveLocal();
        }
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar8) {
          *puVar2 = (uint)*(ushort *)(*(long *)(lVar10 + 0x30) + (ulong)uVar4 * 2);
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      piVar3 = (int *)(lVar10 + 0x10);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar8) {
          *piVar3 = *piVar3 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      puVar9 = (undefined8 *)(*(long *)(lVar10 + 0x18) + ((ulong)uVar4 & 0xffff) * 0x40);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = *piVar1 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      *(uint *)(puVar9 + 1) = uVar6 & (uVar5 ^ 0xffffffff);
      *(uint *)((long)puVar9 + 0xc) = uVar5 & (uVar6 ^ 0xffffffff);
      *puVar9 = &PTR_LAB_04b774d8;
    }
    local_38 = DAT_05aebb88;
    FUN_03b519f0(&local_38,puVar9);
    *(undefined4 *)(lVar11 + 0x20) = *(undefined4 *)(lVar11 + 0x10);
  }
  lVar11 = *(long *)(DAT_05aebb88 + 400);
  pMVar12 = *(MutexType **)(lVar11 + 0x40270);
  nn::os::LockMutex(pMVar12);
  *(undefined4 *)(*(long *)(lVar11 + 0x40250) + 0x4010) = 0;
  FUN_03b5e290(lVar11,lVar11 + 0x401b0,(long *)(lVar11 + 0x40250));
  nn::os::UnlockMutex(pMVar12);
  if (*(ulong **)(param_1 + 0x1b8) == (ulong *)0x0) {
    return;
  }
  **(ulong **)(param_1 + 0x1b8) = *(ulong *)(param_1 + 8) / 3;
  lVar11 = *(long *)(param_1 + 0x1b8);
  nn::os::LockMutex((MutexType *)(lVar11 + 0x10));
  if (*(int *)(lVar11 + 0xb0) != 0) {
    lVar10 = (long)*(int *)(lVar11 + 0xb0) << 3;
    puVar9 = *(undefined8 **)(lVar11 + 0xb8);
    do {
      (**(code **)(*(long *)*puVar9 + 0x10))();
      lVar10 = lVar10 + -8;
      puVar9 = puVar9 + 1;
    } while (lVar10 != 0);
  }
  nn::os::UnlockMutex((MutexType *)(lVar11 + 0x10));
  return;
}

