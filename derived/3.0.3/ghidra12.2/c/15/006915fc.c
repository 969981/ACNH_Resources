
void FUN_006915fc(EventType *param_1)

{
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x34));
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x28));
  nn::os::FinalizeEvent(param_1);
  return;
}

