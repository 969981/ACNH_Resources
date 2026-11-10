
void FUN_001443f4(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x16e8) != 0) {
    if (0 < *(int *)(param_1 + 0x16e8)) {
      lVar1 = 0;
      do {
        FUN_0014e11c(*(undefined8 *)(*(long *)(param_1 + 0x16f0) + lVar1 * 8));
        *(undefined8 *)(*(long *)(param_1 + 0x16f0) + lVar1 * 8) = 0;
        lVar1 = lVar1 + 1;
      } while (lVar1 < *(int *)(param_1 + 0x16e8));
    }
    FUN_00143300(*(undefined8 *)(param_1 + 0x16f0));
    *(undefined8 *)(param_1 + 0x16f0) = 0;
    *(undefined4 *)(param_1 + 0x16e8) = 0;
  }
  return;
}

