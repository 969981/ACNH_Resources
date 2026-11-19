
long FUN_03b58110(long param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  
  if (*(char *)(param_1 + 8) != '\0' || *(long *)(param_1 + 0x10) != 0) {
    piVar1 = (int *)(param_1 + 0x18);
    puVar2 = (uint *)(param_1 + 0x38);
    do {
      while( true ) {
        uVar3 = *puVar2;
        if (uVar3 == 0xffff) {
          return 0;
        }
        if (*puVar2 == uVar3) break;
        ClearExclusiveLocal();
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = (uint)*(ushort *)(*(long *)(param_1 + 0x30) + (ulong)uVar3 * 2);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((uVar3 ^ 0xffffffff) & 0xffff) != 0) {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar6 = *(long *)(param_1 + 0x10) + ((ulong)uVar3 & 0xffff) * 0x48;
      *(short *)(lVar6 + 0x44) = (short)uVar3;
      return lVar6;
    }
  }
  return 0;
}

