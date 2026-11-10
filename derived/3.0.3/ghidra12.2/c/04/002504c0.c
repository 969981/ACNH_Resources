
void FUN_002504c0(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x168))();
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}

