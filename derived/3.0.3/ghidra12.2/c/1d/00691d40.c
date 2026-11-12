
void FUN_00691d40(undefined8 param_1)

{
  LightEventType *pLVar1;
  EventType *pEVar2;
  undefined *puVar3;
  long *plVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  
  pLVar1 = (LightEventType *)FUN_00691638();
  nn::os::WaitLightEvent(pLVar1);
  pEVar2 = (EventType *)FUN_00691634(param_1);
  nn::os::SignalEvent(pEVar2);
  nn::os::SdkMutexType::Lock();
  ppuVar5 = (undefined **)PTR_LOOP_04c3fbb8;
  if ((undefined **)PTR_LOOP_04c3fbb8 != &PTR_LOOP_04c3fbb0) {
    do {
      puVar6 = ppuVar5[2];
      puVar3 = (undefined *)FUN_00691650(param_1);
      if (puVar6 == puVar3) {
        plVar4 = (long *)ppuVar5[3];
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x20))(plVar4,0x16db);
        }
        break;
      }
      ppuVar5 = (undefined **)ppuVar5[1];
    } while (ppuVar5 != &PTR_LOOP_04c3fbb0);
  }
  nn::os::SdkMutexType::Unlock();
  pLVar1 = (LightEventType *)FUN_00691640(param_1);
  nn::os::WaitLightEvent(pLVar1);
  FUN_00691648(param_1,0);
  return;
}

