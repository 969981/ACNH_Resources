
void FUN_001878b0(uint param_1)

{
  if (param_1 == 0) {
    nn::os::YieldThread();
    return;
  }
  nn::os::SleepThread((ulong)param_1 * 1000000);
  return;
}

