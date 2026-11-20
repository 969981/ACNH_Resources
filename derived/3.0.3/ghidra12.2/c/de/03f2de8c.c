
undefined8 FUN_03f2de8c(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0 && *(int *)(param_1 + 0x20) == 1) {
    FUN_03f459a0(param_1 + 0x18);
  }
  DataMemoryBarrier(2,3);
  if (*(long *)(param_1 + 0x10) != 0) {
    nn::os::WaitLightEvent((LightEventType *)(*(long *)(param_1 + 0x10) + 0x140));
  }
  return 1;
}

