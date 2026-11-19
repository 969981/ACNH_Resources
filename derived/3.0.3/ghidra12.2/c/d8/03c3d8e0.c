
void FUN_03c3d8e0(long param_1)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x50) != param_1 + 0x48) {
    lVar5 = (long)*(int *)(param_1 + 0x5c);
    lVar4 = *(long *)(param_1 + 0x50) - lVar5;
    do {
      FUN_03c3d8e0(lVar4);
      lVar4 = *(long *)(lVar4 + lVar5 + 8) - lVar5;
    } while (lVar4 != (param_1 + 0x48) - (long)*(int *)(param_1 + 0x5c));
  }
  puVar1 = (uint *)(param_1 + 0xd0);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 | 2;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}

