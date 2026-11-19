
void FUN_0390a000(long param_1)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  int iVar8;
  
  lVar5 = *(long *)(param_1 + 0x80);
  if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0x24) & 1) != 0)) {
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar5 + 0x40);
    uVar6 = (uint)*(ushort *)(param_1 + 8);
    if (*(uint *)(*(long *)(param_1 + 0x10) + 0x30) <= (uint)*(ushort *)(param_1 + 8)) {
      uVar6 = 0;
    }
    plVar7 = (long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) + (ulong)uVar6 * 0x150 + 8);
    lVar5 = *(long *)(*plVar7 + 0x18);
    puVar1 = (uint *)(lVar5 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puVar1 = (uint *)(lVar5 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 & 0xffffff81 | 0x7e;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar5 = *plVar7;
    iVar2 = *(int *)(lVar5 + 0x20);
    if (iVar2 != 0) {
      lVar5 = *(long *)(lVar5 + 0x28);
      iVar8 = 0;
      do {
        puVar1 = (uint *)(lVar5 + (long)iVar8 * 0x150 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        puVar1 = (uint *)(lVar5 + (long)iVar8 * 0x150 + 0x14);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 & 0xffffff81 | 0x7e;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        iVar8 = iVar8 + 1;
      } while (iVar2 != iVar8);
    }
  }
  lVar5 = *(long *)(param_1 + 0xf0);
  if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0x24) & 1) != 0)) {
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(lVar5 + 0x40);
    uVar6 = (uint)*(ushort *)(param_1 + 8);
    if (*(uint *)(*(long *)(param_1 + 0x10) + 0x30) <= (uint)*(ushort *)(param_1 + 8)) {
      uVar6 = 0;
    }
    plVar7 = (long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) + (ulong)uVar6 * 0x150 + 8);
    lVar5 = *(long *)(*plVar7 + 0x18);
    puVar1 = (uint *)(lVar5 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puVar1 = (uint *)(lVar5 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 & 0xffffff81 | 0x7e;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar5 = *plVar7;
    iVar2 = *(int *)(lVar5 + 0x20);
    if (iVar2 != 0) {
      lVar5 = *(long *)(lVar5 + 0x28);
      iVar8 = 0;
      do {
        puVar1 = (uint *)(lVar5 + (long)iVar8 * 0x150 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        puVar1 = (uint *)(lVar5 + (long)iVar8 * 0x150 + 0x14);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 & 0xffffff81 | 0x7e;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        iVar8 = iVar8 + 1;
      } while (iVar2 != iVar8);
    }
  }
  lVar5 = *(long *)(param_1 + 0x160);
  if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0x24) & 1) != 0)) {
    *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(lVar5 + 0x40);
    uVar6 = (uint)*(ushort *)(param_1 + 8);
    if (*(uint *)(*(long *)(param_1 + 0x10) + 0x30) <= (uint)*(ushort *)(param_1 + 8)) {
      uVar6 = 0;
    }
    plVar7 = (long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) + (ulong)uVar6 * 0x150 + 8);
    lVar5 = *(long *)(*plVar7 + 0x18);
    puVar1 = (uint *)(lVar5 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puVar1 = (uint *)(lVar5 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 & 0xffffff81 | 0x7e;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar5 = *plVar7;
    iVar2 = *(int *)(lVar5 + 0x20);
    if (iVar2 != 0) {
      lVar5 = *(long *)(lVar5 + 0x28);
      iVar8 = 0;
      do {
        puVar1 = (uint *)(lVar5 + (long)iVar8 * 0x150 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        puVar1 = (uint *)(lVar5 + (long)iVar8 * 0x150 + 0x14);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 & 0xffffff81 | 0x7e;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        iVar8 = iVar8 + 1;
      } while (iVar2 != iVar8);
    }
  }
  lVar5 = *(long *)(param_1 + 0x1d0);
  if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0x24) & 1) != 0)) {
    *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(lVar5 + 0x40);
    uVar6 = (uint)*(ushort *)(param_1 + 8);
    if (*(uint *)(*(long *)(param_1 + 0x10) + 0x30) <= (uint)*(ushort *)(param_1 + 8)) {
      uVar6 = 0;
    }
    plVar7 = (long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) + (ulong)uVar6 * 0x150 + 8);
    lVar5 = *(long *)(*plVar7 + 0x18);
    puVar1 = (uint *)(lVar5 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puVar1 = (uint *)(lVar5 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 & 0xffffff81 | 0x7e;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar5 = *plVar7;
    iVar2 = *(int *)(lVar5 + 0x20);
    if (iVar2 != 0) {
      lVar5 = *(long *)(lVar5 + 0x28);
      iVar8 = 0;
      do {
        puVar1 = (uint *)(lVar5 + (long)iVar8 * 0x150 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        puVar1 = (uint *)(lVar5 + (long)iVar8 * 0x150 + 0x14);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 & 0xffffff81 | 0x7e;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        iVar8 = iVar8 + 1;
      } while (iVar2 != iVar8);
    }
  }
  return;
}

