
undefined8 FUN_01585c50(long param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  
  if (*(char *)(param_1 + 0x3a0) == '\0' && *(char *)(param_1 + 0x3a1) == '\0') {
    return 0;
  }
  puVar4 = (uint *)(param_1 + 0xf8);
  if ((*puVar4 >> 1 & 1) == 0) {
    do {
      uVar3 = *puVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar2) {
        *puVar4 = uVar3 | 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((uVar3 & 1) == 0) {
      uVar3 = 0xc;
      if (*(char *)(param_1 + 0x3a1) != '\0') {
        uVar3 = 0x10;
      }
      if (param_2 <= uVar3) {
        uVar3 = param_2;
      }
      *(uint *)(param_1 + 0x160) = uVar3;
      return 1;
    }
  }
  return 0;
}

