
uint FUN_003cc190(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong local_28;
  
  uVar4 = nn::os::TryReceiveMessageQueue(&local_28,(MessageQueueType *)(param_1 + 0x18));
  if ((uVar4 & 1) != 0) {
    piVar1 = (int *)(param_1 + 0xd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (*(int *)(local_28 + 8) != -1) {
      (**(code **)(param_1 + 8))(local_28);
    }
    nn::os::SendMessageQueue((MessageQueueType *)(param_1 + 0x70),local_28);
  }
  return uVar4 & 1;
}

