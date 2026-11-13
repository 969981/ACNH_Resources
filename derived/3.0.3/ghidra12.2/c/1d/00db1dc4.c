
void FUN_00db1dc4(long param_1)

{
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x178));
  *(undefined1 *)(param_1 + 0x1b0) = 1;
  return;
}

