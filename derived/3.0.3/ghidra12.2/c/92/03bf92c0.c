
void FUN_03bf92c0(long param_1)

{
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 8) + 8))();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  *(undefined1 *)(param_1 + 0x11) = 0;
  return;
}

