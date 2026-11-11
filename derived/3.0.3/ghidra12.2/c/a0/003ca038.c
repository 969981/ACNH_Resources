
void FUN_003ca038(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04bd04c0 + 0x10);
  FUN_003caf80(param_1 + 1);
  nn::os::InitializeMessageQueue
            ((MessageQueueType *)(param_1 + 0x3f),(ulong *)(param_1 + 0x48),0x20);
  *(undefined2 *)(param_1 + 0x69) = 0;
  *(undefined8 *)((long)param_1 + 0x34c) = 0;
  param_1[0x6b] = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x69),true,0);
  *(undefined2 *)(param_1 + 0x6d) = 0;
  *(undefined8 *)((long)param_1 + 0x36c) = 0;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x6d),true,0);
  *(undefined2 *)((long)param_1 + 0x3dc) = 0;
  param_1[0x71] = (long)(param_1 + 0x71);
  param_1[0x72] = (long)(param_1 + 0x71);
  param_1[0x73] = (long)(param_1 + 0x73);
  param_1[0x74] = (long)(param_1 + 0x73);
  param_1[0x85] = (long)(param_1 + 0x85);
  param_1[0x86] = (long)(param_1 + 0x85);
  *(undefined4 *)(param_1 + 0x82) = 0;
  *(undefined1 *)((long)param_1 + 0x414) = 0;
  param_1[0x83] = 0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = (long)(param_1 + 0x88);
  param_1[0x89] = (long)(param_1 + 0x88);
  *(undefined2 *)(param_1 + 0x8a) = 0;
  *(undefined8 *)((long)param_1 + 0x454) = 0;
  param_1[0x8c] = 0;
  *(undefined4 *)(param_1 + 0x8d) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x8a),true,0);
  param_1[0x9d] = 0;
  param_1[0x9c] = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  param_1[0x97] = 0;
  param_1[0x96] = 0;
  param_1[0x95] = 0;
  param_1[0x94] = 0;
  param_1[0x93] = 0;
  param_1[0x92] = 0;
  param_1[0x91] = 0;
  param_1[0x90] = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  param_1[0x9e] = (long)(param_1 + 0x9e);
  param_1[0x9f] = (long)(param_1 + 0x9e);
  *(undefined2 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)((long)param_1 + 0x504) = 0;
  param_1[0xa2] = 0;
  *(undefined4 *)(param_1 + 0xa3) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xa0),true,0);
  *(undefined4 *)(param_1 + 0xa4) = 0;
  return;
}

