
void FUN_003c9970(long param_1)

{
  *(long *)(param_1 + 0x10) = param_1 + 0x10;
  *(long *)(param_1 + 0x18) = param_1 + 0x10;
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  *(long *)(param_1 + 0x20) = param_1 + 0x20;
  *(long *)(param_1 + 0x28) = param_1 + 0x20;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x38),true,0);
  nn::os::InitializeMessageQueue
            ((MessageQueueType *)(param_1 + 0x58),(ulong *)(param_1 + 0xa0),0x20);
  FUN_003c9e9c(param_1 + 0x1a0);
  return;
}

