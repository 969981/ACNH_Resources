
void FUN_038e3450(long param_1,ulong param_2)

{
  if (*(int *)(param_1 + 0xcc) - 3U < 2) {
    return;
  }
  if (*(int *)(param_1 + 0xcc) == 1) {
    *(undefined4 *)(param_1 + 0xcc) = 2;
  }
  if ((param_2 & 1) == 0) {
    nn::os::SendMessageQueue((MessageQueueType *)(param_1 + 0x30),*(ulong *)(param_1 + 0xc0));
    return;
  }
  nn::os::JamMessageQueue((MessageQueueType *)(param_1 + 0x30),*(ulong *)(param_1 + 0xc0));
  return;
}

