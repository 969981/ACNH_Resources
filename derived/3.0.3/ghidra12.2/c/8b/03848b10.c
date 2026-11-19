
void FUN_03848b10(undefined4 *param_1)

{
  int iVar1;
  ulong uVar2;
  
  if ((DAT_05ad1da8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_05ad1da8);
    if (iVar1 != 0) {
      FUN_037d8910(&DAT_05ad1d98);
      __cxa_guard_release(&DAT_05ad1da8);
    }
  }
  if (0 < (int)DAT_05ad1d98) {
    uVar2 = 0;
    do {
      if (*(int *)(DAT_05ad1da0 + uVar2 * 4) == 0x47) goto LAB_03848b6c;
      uVar2 = uVar2 + 1;
    } while (DAT_05ad1d98 != uVar2);
  }
  uVar2 = 0;
LAB_03848b6c:
  *param_1 = (int)uVar2;
  return;
}

