
undefined8 FUN_021f1740(undefined4 *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (((DAT_0523c4c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0523c4c0), iVar1 != 0)) {
    FUN_016cb6ac(&DAT_0523c4b0);
    __cxa_guard_release(&DAT_0523c4c0);
  }
  if (0 < (int)DAT_0523c4b0) {
    uVar2 = 0;
    do {
      if (*(int *)(DAT_0523c4b8 + uVar2 * 4) == param_2) {
        *param_1 = (int)uVar2;
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while (DAT_0523c4b0 != uVar2);
  }
  return 0;
}

