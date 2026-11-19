
void FUN_03b68c90(long param_1)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  undefined8 uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 local_18;
  
  puVar8 = PTR_DAT_04bd1e70;
  plVar12 = (long *)(param_1 + 0xa0);
  if (*plVar12 != 0 || *(long *)(param_1 + 0xa8) != 0) {
    lVar11 = *(long *)(*(long *)PTR_DAT_04bd1e70 + 0x188);
    piVar1 = (int *)(lVar11 + 0x40);
    if (*piVar1 == 0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (uint *)(lVar11 + 0x38);
      do {
        while( true ) {
          uVar4 = *puVar2;
          if (*puVar2 == uVar4) break;
          ClearExclusiveLocal();
        }
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar7) {
          *puVar2 = (uint)*(ushort *)(*(long *)(lVar11 + 0x30) + (ulong)uVar4 * 2);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      piVar3 = (int *)(lVar11 + 0x10);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = *piVar3 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      puVar10 = (undefined8 *)(*(long *)(lVar11 + 0x18) + ((ulong)uVar4 & 0xffff) * 0x40);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      *puVar10 = &PTR_LAB_04b771c0;
      uVar5 = *(undefined8 *)(param_1 + 0xa8);
      puVar10[1] = *plVar12;
      puVar10[2] = uVar5;
    }
    local_18 = *(undefined8 *)puVar8;
    uVar9 = FUN_03b519f0(&local_18,puVar10);
    if ((uVar9 & 1) != 0) {
      *plVar12 = 0;
      *(undefined8 *)(param_1 + 0xa8) = 0;
    }
  }
  plVar12 = (long *)(param_1 + 0xb8);
  if (*plVar12 != 0 || *(long *)(param_1 + 0xc0) != 0) {
    lVar11 = *(long *)(*(long *)puVar8 + 0x188);
    piVar1 = (int *)(lVar11 + 0x40);
    if (*piVar1 == 0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (uint *)(lVar11 + 0x38);
      do {
        while( true ) {
          uVar4 = *puVar2;
          if (*puVar2 == uVar4) break;
          ClearExclusiveLocal();
        }
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar7) {
          *puVar2 = (uint)*(ushort *)(*(long *)(lVar11 + 0x30) + (ulong)uVar4 * 2);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      piVar3 = (int *)(lVar11 + 0x10);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = *piVar3 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      puVar10 = (undefined8 *)(*(long *)(lVar11 + 0x18) + ((ulong)uVar4 & 0xffff) * 0x40);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      *puVar10 = &PTR_LAB_04b77218;
      uVar5 = *(undefined8 *)(param_1 + 0xc0);
      puVar10[1] = *plVar12;
      puVar10[2] = uVar5;
    }
    local_18 = *(undefined8 *)puVar8;
    uVar9 = FUN_03b519f0(&local_18,puVar10);
    if ((uVar9 & 1) != 0) {
      *plVar12 = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
  }
  return;
}

