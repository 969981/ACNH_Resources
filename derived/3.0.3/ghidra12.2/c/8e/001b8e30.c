
void FUN_001b8e30(long param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x68) == '\0') {
    FUN_001b8590(param_1);
    *(undefined1 *)(param_1 + 0x69) = 0;
    FUN_001e1640(*(undefined8 *)(param_1 + 8),param_2);
    return;
  }
  *(undefined1 *)(param_1 + 0x69) = 0;
  FUN_001e1640(*(undefined8 *)(param_1 + 8),param_2);
  return;
}

