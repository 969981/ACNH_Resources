
void FUN_0047dcc0(SemaphoreType *param_1,int param_2,int param_3)

{
  if ((param_3 < 1) || (param_3 < param_2)) {
    CallSupervisor(0x26);
    return;
  }
  nn::os::InitializeSemaphore(param_1,param_2,param_3);
  return;
}

