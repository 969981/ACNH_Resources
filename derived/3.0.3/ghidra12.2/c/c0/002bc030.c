
void FUN_002bc030(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0xa8) != 4) {
    if (*(int *)(param_1 + 0xa8) != 1) {
      *(undefined4 *)(param_1 + 0xa8) = 0x11;
      FUN_002904f0(param_1 + 0x60);
      if (*(int *)(param_1 + 0xa8) != 1) {
        lVar1 = *(long *)PTR_DAT_04bcd020;
        do {
          FUN_00290904(lVar1 / 10000);
          if (*(int *)(param_1 + 0xa8) == 3) {
            *(undefined4 *)(param_1 + 0xa8) = 0x11;
            FUN_002904f0(param_1 + 0x60);
          }
        } while (*(int *)(param_1 + 0xa8) != 1);
      }
    }
    FUN_002a917c(param_1 + 8);
    if (*(long *)(param_1 + 0xc0) != 0) {
      FUN_002b8350();
      return;
    }
  }
  return;
}

