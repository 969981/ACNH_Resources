
void FUN_001b3d10(long param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x68) == '\0') {
    FUN_001b8590(param_1);
    *(undefined4 *)(param_1 + 0x10) = param_2;
    *(undefined1 *)(param_1 + 0x69) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined1 *)(param_1 + 0x69) = 0;
  return;
}

