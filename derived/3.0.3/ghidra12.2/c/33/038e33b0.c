
undefined8 FUN_038e33b0(long param_1,ulong param_2,int param_3)

{
  undefined8 uVar1;
  
  if ((param_2 == 0) || (*(int *)(param_1 + 0xcc) - 3U < 2 || *(ulong *)(param_1 + 0xc0) == param_2)
     ) {
    return 0;
  }
  if (param_3 == 0) {
    nn::os::SendMessageQueue((MessageQueueType *)(param_1 + 0x30),param_2);
    return 1;
  }
  uVar1 = nn::os::TrySendMessageQueue((MessageQueueType *)(param_1 + 0x30),param_2);
  return uVar1;
}

