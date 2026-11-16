
void FUN_02932210(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  undefined4 uVar5;
  
  if (*(char *)(param_1 + 0x9c) == '\0') {
    iVar1 = *(int *)(param_1 + 0xb4);
    if (((*PTR_DAT_04bb3998 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04c9acf0), iVar3 != 0))
    {
      FUN_00773950(&DAT_04c9ace0);
      __cxa_guard_release(&DAT_04c9acf0);
    }
    if ((int)DAT_04c9ace0 < 1) {
      iVar3 = -1;
    }
    else {
      uVar4 = 0;
      iVar3 = -1;
      do {
        if (*(int *)(DAT_04c9ace8 + uVar4 * 4) == 0x2ec94ec5) {
          iVar3 = (int)uVar4;
          break;
        }
        uVar4 = uVar4 + 1;
      } while (DAT_04c9ace0 != uVar4);
    }
    if ((iVar1 != iVar3) && (*(char *)(param_1 + 0x9c) == '\0')) {
      *(undefined4 *)(param_1 + 0xa4) = *param_2;
      bVar2 = *(byte *)(param_1 + 0xcb);
      *(undefined4 *)(param_1 + 0xa8) = param_2[1];
      uVar5 = param_2[2];
      *(byte *)(param_1 + 0xcb) = bVar2 | 1;
      *(undefined4 *)(param_1 + 0xac) = uVar5;
      uVar5 = *param_3;
      *(byte *)(param_1 + 0xcb) = bVar2 | 3;
      *(undefined4 *)(param_1 + 0xb0) = uVar5;
      return;
    }
  }
  return;
}

