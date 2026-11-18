
void FUN_0328e100(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 8))();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 1;
  return;
}

