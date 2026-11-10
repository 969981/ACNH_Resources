
void FUN_002a0ddc(long param_1)

{
  int *piVar1;
  
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    if (**(int **)(param_1 + 0x60) == 1) {
      FUN_00221064();
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  piVar1 = (int *)(param_1 + 0x68);
  if (*piVar1 == 1) {
    FUN_00221064(piVar1);
  }
  FUN_00220f24(piVar1);
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}

