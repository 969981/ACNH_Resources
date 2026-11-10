
void FUN_00290488(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04bcdda8 + 0x10);
  nn::os::FinalizeEvent((EventType *)(param_1 + 4));
  FUN_0028a004(param_1);
  return;
}

