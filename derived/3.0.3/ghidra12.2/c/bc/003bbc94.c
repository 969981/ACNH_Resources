
void FUN_003bbc94(long param_1)

{
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

