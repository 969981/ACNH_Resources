
void FUN_003cda1c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04bd04e0 + 0x10);
  if (*(char *)((long)param_1 + 0x219) != '\0') {
    *(undefined1 *)(param_1 + 0x43) = 1;
    FUN_003c98bc();
    FUN_003c9e00();
    thunk_FUN_003cb0a4(param_1 + 1);
    FUN_003cb18c(param_1 + 1);
    *(undefined1 *)((long)param_1 + 0x219) = 0;
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x3f));
  FUN_003cb0d4(param_1 + 1);
  return;
}

