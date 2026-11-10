
void FUN_0021726c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04bcceb0 + 0x10);
  if ((char)param_1[10] != '\0') {
    nn::os::DestroySystemEvent((SystemEventType *)(param_1 + 5));
  }
  nn::account::AsyncContext::~AsyncContext((AsyncContext *)(param_1 + 1));
  return;
}

