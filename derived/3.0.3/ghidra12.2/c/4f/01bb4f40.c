
void FUN_01bb4f40(undefined4 *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  
  if ((DAT_0533a3c0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0533a3c0);
    if (iVar1 != 0) {
      FUN_01bb25c8(&DAT_0533a3b0);
      __cxa_guard_release(&DAT_0533a3c0);
    }
  }
  if (0 < (int)DAT_0533a3b0) {
    uVar2 = 0;
    do {
      if (*(int *)(DAT_0533a3b8 + uVar2 * 4) == param_2) goto LAB_01bb4f9c;
      uVar2 = uVar2 + 1;
    } while (DAT_0533a3b0 != uVar2);
  }
  uVar2 = 0;
LAB_01bb4f9c:
  *param_1 = (int)uVar2;
  return;
}

