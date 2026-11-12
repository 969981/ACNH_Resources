
void FUN_00691594(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  nn::os::SignalEvent((EventType *)(param_1 + 0x20));
  return;
}

