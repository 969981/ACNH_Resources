
void FUN_00384100(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  void *pvVar4;
  size_t sVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  byte *pbVar11;
  
  pbVar11 = *(byte **)(param_2 + 200);
  lVar6 = *(long *)(*(long *)(param_2 + 0xb8) + 0x70);
  lVar8 = *(long *)(*(long *)(param_2 + 0xb8) + 0x78);
  lVar3 = FUN_003b49e4(*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18));
  uVar7 = (lVar6 + lVar3) - 1U & -lVar6;
  if ((*pbVar11 & 1) == 0) {
    lVar6 = *(long *)(pbVar11 + 0x48) + uVar7;
    *(long *)(pbVar11 + 0x48) = lVar6;
  }
  else {
    plVar10 = *(long **)(pbVar11 + 0x48);
    do {
      lVar6 = *plVar10 + uVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = lVar6;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar3 = *(long *)(pbVar11 + 0x18);
  *(long *)(*(long *)(param_1 + 0xf8) + 8) = lVar3 - lVar6;
  pbVar11 = *(byte **)(param_2 + 200);
  lVar9 = *(long *)(pbVar11 + 0x38);
  if (lVar9 != 0) {
    pvVar4 = (void *)FUN_003b49b0(*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18));
    sVar5 = FUN_003b49e4(*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18));
    memcpy((void *)(lVar9 + (lVar3 - lVar6)),pvVar4,sVar5);
    pbVar11 = *(byte **)(param_2 + 200);
  }
  lVar6 = FUN_003b49ec(*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18));
  uVar7 = (lVar8 + lVar6) - 1U & -lVar8;
  if ((*pbVar11 & 1) == 0) {
    lVar6 = *(long *)(pbVar11 + 0x48) + uVar7;
    *(long *)(pbVar11 + 0x48) = lVar6;
  }
  else {
    plVar10 = *(long **)(pbVar11 + 0x48);
    do {
      lVar6 = *plVar10 + uVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = lVar6;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar8 = *(long *)(pbVar11 + 0x18);
  *(long *)(*(long *)(param_1 + 0xf8) + 0x10) = lVar8 - lVar6;
  lVar3 = *(long *)(*(long *)(param_2 + 200) + 0x38);
  if (lVar3 == 0) {
    return;
  }
  pvVar4 = (void *)FUN_003b49a8(*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18));
  sVar5 = FUN_003b49ec(*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18));
  memcpy((void *)(lVar3 + (lVar8 - lVar6)),pvVar4,sVar5);
  return;
}

