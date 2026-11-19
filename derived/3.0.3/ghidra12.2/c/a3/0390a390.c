
void FUN_0390a390(long param_1)

{
  uint *puVar1;
  uint *puVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  
  if ((*(byte *)(param_1 + 0x1e8) & 1) != 0) {
    uVar5 = (uint)*(ushort *)(param_1 + 8);
    if (*(uint *)(*(long *)(param_1 + 0x10) + 0x30) <= (uint)*(ushort *)(param_1 + 8)) {
      uVar5 = 0;
    }
    lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) + (ulong)uVar5 * 0x150 + 8);
    if (*(ushort *)(param_1 + 10) == 0) {
      lVar6 = *(long *)(lVar6 + 0x18);
    }
    else {
      uVar5 = *(ushort *)(param_1 + 10) - 1;
      if (*(uint *)(lVar6 + 0x20) <= uVar5) {
        uVar5 = 0;
      }
      lVar6 = *(long *)(lVar6 + 0x28) + (ulong)uVar5 * 0x150;
    }
    puVar1 = (uint *)(lVar6 + 0x10);
    *(byte *)(lVar6 + 0x1c) = *(byte *)(lVar6 + 0x1c) | 8;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puVar2 = (uint *)(lVar6 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = *puVar2 | 0x7e;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      uVar5 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar5 | 0x80000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar5 & 0x7fffffff) != 0) {
      if ((int)uVar5 < 0) {
        if ((int)*puVar1 < 0) {
          lVar6 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar6 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80();
      }
    }
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = 0;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return;
}

