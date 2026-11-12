
void FUN_007ef580(undefined4 *param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *param_2;
  uVar4 = (ulong)uVar1;
  if ((*PTR_DAT_04bb3128 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04c8c100);
    uVar4 = (ulong)(uint)uVar1;
    if (iVar2 != 0) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
      uVar4 = (ulong)(uint)uVar1;
    }
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar3 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar3 * 4) == (int)(uVar4 >> 0xb)) goto LAB_007ef5dc;
      uVar3 = uVar3 + 1;
    } while (DAT_04c8c0f0 != uVar3);
  }
  uVar3 = 0;
LAB_007ef5dc:
  *param_1 = (int)uVar3;
  return;
}

