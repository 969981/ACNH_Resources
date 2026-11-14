
bool FUN_01585be0(long param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  
  if (*(char *)(param_1 + 0x3a0) == '\0' && *(char *)(param_1 + 0x3a1) == '\0') {
    return false;
  }
  puVar4 = (uint *)(param_1 + 0xf8);
  if ((*puVar4 >> 1 & 1) != 0) {
    return false;
  }
  do {
    uVar1 = *puVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar3) {
      *puVar4 = uVar1 | 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return (uVar1 & 1) == 0;
}

