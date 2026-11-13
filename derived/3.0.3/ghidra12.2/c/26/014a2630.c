
void FUN_014a2630(long param_1)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  uint uVar7;
  
  *(uint *)(param_1 + 0x260) = *(uint *)(param_1 + 0x260) | 1;
  puVar1 = (uint *)(*(long *)(param_1 + 0x48) + 0x248);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 | 0x8000;
      cVar2 = ExclusiveMonitorsStatus();
    }
    iVar4 = DAT_055cdb30;
  } while (cVar2 != '\0');
  if (DAT_055cdb30 == 0x2b2a6204) {
    uVar7 = 1;
    *(undefined4 *)(param_1 + 0x17dc0) = 1;
  }
  else {
    uVar7 = (uint)(DAT_055cdb30 == 0x55b5d9de);
    *(uint *)(param_1 + 0x17dc0) = (uint)(DAT_055cdb30 == 0x55b5d9de);
    if (iVar4 == 0x43080996) {
      *(undefined1 *)(param_1 + 0x18008) = 1;
    }
  }
  if (uVar7 < *(uint *)(param_1 + 0x16f50)) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x16f58) + (long)(int)uVar7 * 8);
  }
  else {
    lVar6 = 0;
  }
  pbVar5 = (byte *)(**(code **)(*(long *)(lVar6 + 0x6c0) + 0xf0))(lVar6 + 0x6c0);
  *(uint *)(param_1 + 0x16e1c) = (uint)*pbVar5;
  return;
}

