
void FUN_003cba68(undefined1 *param_1)

{
  if (param_1[0x68] != '\0') {
    nn::os::FinalizeMessageQueue((MessageQueueType *)(param_1 + 0x18));
    param_1[0x68] = 0;
  }
  if (param_1[0xc0] != '\0') {
    nn::os::FinalizeMessageQueue((MessageQueueType *)(param_1 + 0x70));
    param_1[0xc0] = 0;
  }
  *param_1 = 0;
  return;
}

