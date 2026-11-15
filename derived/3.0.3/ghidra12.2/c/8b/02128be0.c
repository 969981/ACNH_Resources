
void FUN_02128be0(undefined4 *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  
  if ((DAT_053ed1b8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_053ed1b8);
    if (iVar1 != 0) {
      FUN_02129270(&DAT_053ed1a8);
      __cxa_guard_release(&DAT_053ed1b8);
    }
  }
  if (0 < (int)DAT_053ed1a8) {
    uVar2 = 0;
    do {
      if (*(int *)(DAT_053ed1b0 + uVar2 * 4) == param_2) goto LAB_02128c3c;
      uVar2 = uVar2 + 1;
    } while (DAT_053ed1a8 != uVar2);
  }
  uVar2 = 0;
LAB_02128c3c:
  *param_1 = (int)uVar2;
  return;
}

