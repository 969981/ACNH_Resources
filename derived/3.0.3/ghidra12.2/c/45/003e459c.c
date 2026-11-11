
void FUN_003e459c(long param_1)

{
  if (((*(int *)(param_1 + 8) == 0) || (*(int *)(param_1 + 8) != 2)) ||
     (FUN_003e4470(param_1 + 0x2d0), *(int *)(param_1 + 8) == 0)) {
    return;
  }
  nn::os::TrySendMessageQueue((MessageQueueType *)(param_1 + 0x218),1);
  return;
}

