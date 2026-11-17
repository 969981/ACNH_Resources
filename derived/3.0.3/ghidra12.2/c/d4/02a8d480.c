
void FUN_02a8d480(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  
  bVar1 = *param_2;
  if (bVar1 < 0xc) {
    if (((DAT_04ca5e30 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04ca5e30), iVar2 != 0)) {
      FUN_007a9614(&DAT_04ca5e20);
      __cxa_guard_release(&DAT_04ca5e30);
    }
    if (0 < (int)DAT_04ca5e20) {
      uVar3 = 0;
      do {
        if (*(uint *)(DAT_04ca5e28 + uVar3 * 4) == (uint)bVar1) goto LAB_02a8d528;
        uVar3 = uVar3 + 1;
      } while (DAT_04ca5e20 != uVar3);
    }
  }
  else {
    if (((DAT_04ca5e30 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04ca5e30), iVar2 != 0)) {
      FUN_007a9614(&DAT_04ca5e20);
      __cxa_guard_release(&DAT_04ca5e30);
    }
    if (0 < (int)DAT_04ca5e20) {
      uVar3 = 0;
      do {
        if (*(int *)(DAT_04ca5e28 + uVar3 * 4) == 0) goto LAB_02a8d528;
        uVar3 = uVar3 + 1;
      } while (DAT_04ca5e20 != uVar3);
    }
  }
  uVar3 = 0;
LAB_02a8d528:
  *param_1 = (int)uVar3;
  return;
}

