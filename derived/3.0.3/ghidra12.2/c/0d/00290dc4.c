
void FUN_00290dc4(MessageQueueType *param_1)

{
  long lVar1;
  
  nn::os::FinalizeMessageQueue(param_1);
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 != 0) {
    FUN_00285e00(lVar1);
    FUN_00285dc0(lVar1);
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return;
}

