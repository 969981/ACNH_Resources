
undefined4 FUN_003cbf90(long param_1,ulong param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong *puVar9;
  
  puVar9 = (ulong *)(param_1 + 200);
  uVar8 = *puVar9;
  if (uVar8 == 0) {
    if ((param_2 & 1) == 0) {
      return 0;
    }
    puVar5 = (undefined8 *)FUN_003cbb70(param_1,0x18,0);
    *(undefined4 *)(puVar5 + 1) = 0xffffffff;
    puVar1 = puVar9;
    if (*(ulong **)(param_1 + 0xd0) != (ulong *)0x0) {
      puVar1 = *(ulong **)(param_1 + 0xd0);
    }
    *puVar1 = (ulong)puVar5;
    *(undefined8 **)(param_1 + 0xd0) = puVar5;
    *puVar5 = 0;
    uVar7 = *(undefined4 *)(param_1 + 0xdc);
    uVar8 = *(ulong *)(param_1 + 200);
    piVar6 = (int *)(param_1 + 0xd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = *piVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar4 = nn::os::TrySendMessageQueue((MessageQueueType *)(param_1 + 0x18),uVar8);
    if ((uVar4 & 1) != 0) goto LAB_003cc07c;
  }
  else {
    uVar7 = *(undefined4 *)(param_1 + 0xdc);
    piVar6 = (int *)(param_1 + 0xd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = *piVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar4 = nn::os::TrySendMessageQueue((MessageQueueType *)(param_1 + 0x18),uVar8);
    if ((uVar4 & 1) != 0) goto LAB_003cc07c;
    if ((param_2 & 1) == 0) {
      return 0;
    }
  }
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))();
  }
  nn::os::SendMessageQueue((MessageQueueType *)(param_1 + 0x18),uVar8);
LAB_003cc07c:
  *(undefined4 *)(*puVar9 + 0xc) = uVar7;
  *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
  *puVar9 = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  return uVar7;
}

