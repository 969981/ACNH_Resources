
void FUN_0021735c(long *param_1)

{
  SystemEventType local_40 [40];
  char local_18;
  
  *param_1 = (long)(PTR_DAT_04bcce98 + 0x10);
  if ((*(char *)((long)param_1 + 0xa4) != '\0') &&
     (nn::account::AsyncContext::HasDone((bool *)(param_1[0x21] + 8)),
     local_40[0] == (SystemEventType)0x0)) {
    nn::account::AsyncContext::Cancel();
    local_18 = '\0';
    nn::account::AsyncContext::GetSystemEvent((SystemEvent *)(param_1[0x21] + 8));
    nn::os::WaitSystemEvent(local_40);
    if (local_18 != '\0') {
      nn::os::DestroySystemEvent(local_40);
    }
  }
  if ((long *)param_1[0x21] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x21] + 8))();
  }
  FUN_0019ae74(param_1 + 0x16);
  FUN_0019a368(param_1);
  return;
}

