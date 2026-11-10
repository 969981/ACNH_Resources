
void FUN_0030644c(long param_1)

{
  if (*(int *)(param_1 + 0x74) == 1) {
    FUN_00197980(param_1 + 0x60);
  }
  FUN_001984a0(param_1 + 0x60);
  if ((*(int **)(param_1 + 0x58) != (int *)0x0) && (**(int **)(param_1 + 0x58) == 1)) {
    FUN_00221064();
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  return;
}

