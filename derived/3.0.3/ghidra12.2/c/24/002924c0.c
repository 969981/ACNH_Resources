
bool FUN_002924c0(long param_1,long *param_2)

{
  long lVar1;
  
  if (((param_2 != (long *)0x0) && ((char)param_2[1] != -2)) &&
     (*(char *)(DAT_04c60f48 + 0x15c) != '\0')) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 != param_1 + 8) {
      do {
        if (*(long *)(lVar1 + 0x20) == *param_2) {
          if (*(long *)(DAT_04c60f48 + 0x70) == 0) {
            return false;
          }
          if (*(int *)(*(long *)(DAT_04c60f48 + 0x70) + 0x90) - 6U < 3) {
            return *(int *)(lVar1 + 0x10) == 2;
          }
          return true;
        }
        lVar1 = *(long *)(lVar1 + 8);
      } while (lVar1 != param_1 + 8);
    }
  }
  return false;
}

