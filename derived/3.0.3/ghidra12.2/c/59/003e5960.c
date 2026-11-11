
void FUN_003e5960(long param_1)

{
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  *(long *)(param_1 + 0x10) = param_1 + 0x10;
  *(long *)(param_1 + 0x18) = param_1 + 0x10;
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}

