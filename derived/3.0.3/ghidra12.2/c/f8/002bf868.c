
void FUN_002bf868(long param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  if (*(long **)(param_1 + 0x68) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x68) + 0x20))();
    (**(code **)**(undefined8 **)(param_1 + 0x68))();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}

