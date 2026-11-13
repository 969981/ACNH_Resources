
void FUN_00cf7430(undefined4 *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  
  if ((DAT_04c9acf0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04c9acf0);
    if (iVar1 != 0) {
      FUN_00773950(&DAT_04c9ace0);
      __cxa_guard_release(&DAT_04c9acf0);
    }
  }
  if (0 < (int)DAT_04c9ace0) {
    uVar2 = 0;
    do {
      if (*(int *)(DAT_04c9ace8 + uVar2 * 4) == param_2) goto LAB_00cf748c;
      uVar2 = uVar2 + 1;
    } while (DAT_04c9ace0 != uVar2);
  }
  uVar2 = 0;
LAB_00cf748c:
  *param_1 = (int)uVar2;
  return;
}

