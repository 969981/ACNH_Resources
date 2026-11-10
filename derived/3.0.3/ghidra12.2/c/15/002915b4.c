
void FUN_002915b4(long param_1)

{
  if (*(int **)(param_1 + 0x58) != (int *)0x0) {
    if (**(int **)(param_1 + 0x58) == 1) {
      FUN_00221064();
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  return;
}

