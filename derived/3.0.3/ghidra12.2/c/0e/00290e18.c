
ulong FUN_00290e18(MessageQueueType *param_1,int param_2)

{
  ulong uVar1;
  ulong local_8;
  
  if (param_2 == 0) {
    nn::os::ReceiveMessageQueue(&local_8,param_1);
    return local_8;
  }
  uVar1 = nn::os::TryReceiveMessageQueue(&local_8,param_1);
  if ((uVar1 & 1) == 0) {
    local_8 = 0;
  }
  return local_8;
}

