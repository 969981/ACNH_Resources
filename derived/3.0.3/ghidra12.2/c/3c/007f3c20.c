
void FUN_007f3c20(undefined4 *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  
  if ((DAT_04c8c100 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04c8c100);
    if (iVar1 != 0) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar2 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar2 * 4) == param_2) goto LAB_007f3c7c;
      uVar2 = uVar2 + 1;
    } while (DAT_04c8c0f0 != uVar2);
  }
  uVar2 = 0;
LAB_007f3c7c:
  *param_1 = (int)uVar2;
  return;
}

