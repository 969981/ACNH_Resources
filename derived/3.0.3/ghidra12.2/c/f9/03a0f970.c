
void FUN_03a0f970(long param_1)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  
  *(undefined2 *)(param_1 + 0x2a7) = 0x505;
  *(undefined1 *)(param_1 + 0x2a9) = 7;
  puVar1 = (uint *)(param_1 + 0x2b4);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 & 0xfffffffd | 2;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(undefined1 **)(param_1 + 0x288) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 0x290) = &DAT_3f8000003f800000;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 & 0xffffffdf | 0x20;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(byte *)(param_1 + 0x2b8) = *(byte *)(param_1 + 0x2b8) | 4;
  *(ushort *)(param_1 + 0x2ae) = *(ushort *)(param_1 + 0x2ae) | 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 & 0xffffffef | 0x10;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar4 = 2;
  if (*(char *)(param_1 + 0xb9a) != '\0') {
    uVar4 = 4;
  }
  *(undefined1 *)(param_1 + 0x2ab) = uVar4;
  *(byte *)(param_1 + 0x2b8) = *(byte *)(param_1 + 0x2b8) | 4;
  *(ushort *)(param_1 + 0x2ae) = *(ushort *)(param_1 + 0x2ae) | 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 & 0xffffffef | 0x10;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(undefined2 *)(param_1 + 0x477) = 0x505;
  *(undefined1 *)(param_1 + 0x479) = 7;
  puVar1 = (uint *)(param_1 + 0x484);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 & 0xfffffffd | 2;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(undefined1 **)(param_1 + 0x458) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 0x460) = &DAT_3f8000003f800000;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 & 0xffffffdf | 0x20;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(byte *)(param_1 + 0x488) = *(byte *)(param_1 + 0x488) | 4;
  *(ushort *)(param_1 + 0x47e) = *(ushort *)(param_1 + 0x47e) | 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 & 0xffffffef | 0x10;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar4 = 2;
  if (*(char *)(param_1 + 0xb9a) != '\0') {
    uVar4 = 4;
  }
  *(undefined1 *)(param_1 + 0x47b) = uVar4;
  *(byte *)(param_1 + 0x488) = *(byte *)(param_1 + 0x488) | 4;
  *(ushort *)(param_1 + 0x47e) = *(ushort *)(param_1 + 0x47e) | 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 & 0xffffffef | 0x10;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(undefined2 *)(param_1 + 0x55f) = 0x505;
  *(undefined1 *)(param_1 + 0x561) = 7;
  puVar1 = (uint *)(param_1 + 0x56c);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 & 0xfffffffd | 2;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(undefined1 **)(param_1 + 0x540) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 0x548) = &DAT_3f8000003f800000;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 & 0xffffffdf | 0x20;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(byte *)(param_1 + 0x570) = *(byte *)(param_1 + 0x570) | 4;
  *(ushort *)(param_1 + 0x566) = *(ushort *)(param_1 + 0x566) | 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 & 0xffffffef | 0x10;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar4 = 2;
  if (*(char *)(param_1 + 0xb9a) != '\0') {
    uVar4 = 4;
  }
  *(undefined1 *)(param_1 + 0x563) = uVar4;
  *(byte *)(param_1 + 0x570) = *(byte *)(param_1 + 0x570) | 4;
  *(ushort *)(param_1 + 0x566) = *(ushort *)(param_1 + 0x566) | 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 & 0xffffffef | 0x10;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(long *)(param_1 + 0x1d0) = param_1 + 0x1e0;
  return;
}

