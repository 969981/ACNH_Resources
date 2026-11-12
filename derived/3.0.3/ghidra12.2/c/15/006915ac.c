
void FUN_006915ac(long param_1)

{
  nn::os::InitializeEvent(param_1,0,0);
  nn::os::InitializeLightEvent(param_1 + 0x28,0,0);
  nn::os::InitializeLightEvent(param_1 + 0x34,0,0);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}

