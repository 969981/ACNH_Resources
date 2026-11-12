
void FUN_00698e70(SystemEventType *param_1)

{
  FUN_006ae9d0();
  if (param_1[0x28] == (SystemEventType)0x0) {
    return;
  }
  nn::os::DestroySystemEvent(param_1);
  return;
}

