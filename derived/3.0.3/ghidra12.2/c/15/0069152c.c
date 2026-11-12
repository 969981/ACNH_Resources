
void FUN_0069152c(long param_1)

{
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))(param_1);
  }
  nn::os::FinalizeEvent((EventType *)(param_1 + 0x20));
  return;
}

