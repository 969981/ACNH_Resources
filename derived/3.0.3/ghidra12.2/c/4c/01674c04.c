
void FUN_01674c04(long param_1)

{
  if (*(long **)(param_1 + 0x290) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x290) + 8))();
  }
  *(undefined8 *)(param_1 + 0x290) = 0;
  return;
}

