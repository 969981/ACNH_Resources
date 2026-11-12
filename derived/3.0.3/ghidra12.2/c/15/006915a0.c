
void FUN_006915a0(long param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  nn::os::SignalEvent((EventType *)(param_1 + 0x20));
  return;
}

