
void FUN_003ca3a4(long param_1)

{
  if (*(char *)(param_1 + 0x3dc) != '\0') {
    nn::os::JamMessageQueue((MessageQueueType *)(param_1 + 0x1f8),0x20000000);
    if (*(char *)(param_1 + 0x420) != '\0') {
      FUN_03b38a74();
      FUN_003b5ad4();
    }
    thunk_FUN_003cb0a4(param_1 + 8);
    FUN_003cb18c(param_1 + 8);
    *(undefined4 *)(param_1 + 0x3d8) = 0;
    *(undefined1 *)(param_1 + 0x3dc) = 0;
  }
  return;
}

