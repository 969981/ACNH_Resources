
void FUN_003c881c(long param_1)

{
  nn::os::WaitEvent((EventType *)(param_1 + 0x18));
  nn::os::WaitEvent((EventType *)(param_1 + 0x130));
  FUN_003d032c(param_1 + 0x1d8);
  FUN_003d2e24(param_1 + 0x118);
  FUN_003d2e24(param_1);
  return;
}

