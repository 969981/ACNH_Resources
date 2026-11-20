
void FUN_03f43b10(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar4 = PTR_DAT_04bb3350;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  if (lVar5 == param_1) {
    return;
  }
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
  if (lVar5 != param_1) {
    piVar1 = (int *)(param_1 + 0x118);
    do {
      if (*piVar1 != 2) goto LAB_03f43b94;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = 3;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x140));
    nn::os::ClearLightEvent((LightEventType *)(param_1 + 0x140));
    nn::os::JamMessageQueue((MessageQueueType *)(param_1 + 0x30),3);
  }
LAB_03f43b94:
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x140));
  return;
}

