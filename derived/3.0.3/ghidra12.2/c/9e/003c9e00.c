
void FUN_003c9e00(long param_1)

{
  *(undefined1 *)(param_1 + 0x30) = 1;
  nn::os::SendMessageQueue((MessageQueueType *)(param_1 + 0x58),0);
  return;
}

