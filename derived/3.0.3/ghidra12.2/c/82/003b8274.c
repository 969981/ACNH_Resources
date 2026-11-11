
void FUN_003b8274(long param_1)

{
  if (*(long *)(param_1 + 0x608) == param_1) {
    *(undefined4 *)(param_1 + 0x604) = 0;
    *(long *)(param_1 + 0x608) = param_1 + 0x304;
    return;
  }
  if (*(long *)(param_1 + 0x608) == param_1 + 0x304) {
    *(undefined4 *)(param_1 + 0x300) = 0;
    *(long *)(param_1 + 0x608) = param_1;
    return;
  }
  return;
}

