
void FUN_003d3d3c(long param_1)

{
  nn::os::WaitEvent((EventType *)(param_1 + 0x18));
  nn::os::WaitEvent((EventType *)(param_1 + 0xb8));
  FUN_003d032c(param_1 + 0x128);
  FUN_003d2e24(param_1 + 0xa0);
  FUN_003d2e24(param_1);
  return;
}

