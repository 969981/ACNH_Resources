
void FUN_0328eb70(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(byte *)(param_1 + 0x148) = *(byte *)(param_1 + 0x148) & 0xe8 | 8;
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 8))();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  if (*(long **)(param_1 + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x60) + 8))();
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  if (*(long **)(param_1 + 0x90) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x90) + 8))();
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if (*(long **)(param_1 + 0xc0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xc0) + 8))();
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  if (*(long **)(param_1 + 0xf0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xf0) + 8))();
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  *(undefined4 *)(param_1 + 0x24) = 0xf0000;
  return;
}

