
void FUN_003bf4f0(long param_1)

{
  if (*(long *)(param_1 + 400) != 0) {
    FUN_003c0c30();
    FUN_003c0ba0(*(undefined8 *)(param_1 + 400));
    *(undefined8 *)(param_1 + 400) = 0;
    *(undefined2 *)(param_1 + 0xc0) = 0;
  }
  return;
}

