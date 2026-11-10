
undefined8 FUN_001a5774(long param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x68) == '\0') {
    FUN_001b8590(param_1);
  }
  FUN_001e15a8(*(undefined8 *)(param_1 + 8),param_2);
  *(undefined1 *)(param_1 + 0x69) = 0;
  return 1;
}

