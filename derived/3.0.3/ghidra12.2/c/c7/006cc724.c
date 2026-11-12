
void FUN_006cc724(long param_1)

{
  if (*(long **)(param_1 + 0x198) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x198) + 8))();
  }
  *(undefined8 *)(param_1 + 0x198) = 0;
  FUN_03f2d448(param_1 + 0x158);
  FUN_03f2a9b0(param_1 + 0x48);
  FUN_038e1a84(param_1 + 0xb8);
  FUN_03f2d448(param_1 + 0x10);
  return;
}

