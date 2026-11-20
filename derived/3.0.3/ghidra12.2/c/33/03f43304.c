
void FUN_03f43304(long param_1)

{
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 8) + 0x28))();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}

