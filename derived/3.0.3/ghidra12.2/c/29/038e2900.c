
void FUN_038e2900(long param_1)

{
  if ((*(uint *)(param_1 + 0xcc) | 4) == 4) {
    return;
  }
  nn::os::WaitThread(*(ThreadType **)(param_1 + 0xe8));
  *(undefined4 *)(param_1 + 0xcc) = 4;
  return;
}

