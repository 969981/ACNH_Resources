
void FUN_002cc338(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x60);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x14) == 1) {
      FUN_00197980();
      lVar1 = *(long *)(param_1 + 0x60);
    }
    FUN_001984a0(lVar1);
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  if (*(int **)(param_1 + 0x58) != (int *)0x0) {
    if (**(int **)(param_1 + 0x58) == 1) {
      FUN_00221064();
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}

