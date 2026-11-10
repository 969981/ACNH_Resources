
void FUN_001fd0dc(long param_1,undefined8 param_2)

{
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x28) + 8))();
  }
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}

