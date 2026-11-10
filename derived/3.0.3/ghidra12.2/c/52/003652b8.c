
void FUN_003652b8(long param_1)

{
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  return;
}

