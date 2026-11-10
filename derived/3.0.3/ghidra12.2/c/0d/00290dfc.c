
undefined8 FUN_00290dfc(MessageQueueType *param_1,ulong param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    nn::os::SendMessageQueue(param_1,param_2);
    return 1;
  }
  uVar1 = nn::os::TrySendMessageQueue(param_1,param_2);
  return uVar1;
}

