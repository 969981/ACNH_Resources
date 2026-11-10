
void FUN_00290974(long param_1)

{
  if ((*(uint *)(param_1 + 0xcc) | 4) == 4) {
    return;
  }
  nn::os::WaitThread(*(ThreadType **)(param_1 + 0xd0));
  *(undefined4 *)(param_1 + 0xcc) = 4;
  return;
}

