
uint FUN_007ef760(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = *param_1;
  uVar5 = (ulong)uVar1;
  if ((*PTR_DAT_04bb3128 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04c8c100);
    uVar5 = (ulong)(uint)uVar1;
    if (iVar2 != 0) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
      uVar5 = (ulong)(uint)uVar1;
    }
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar4 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar4 * 4) == (int)(uVar5 >> 0xb)) goto LAB_007ef7bc;
      uVar4 = uVar4 + 1;
    } while (DAT_04c8c0f0 != uVar4);
  }
  uVar4 = 0;
LAB_007ef7bc:
  uVar3 = (uint)uVar4;
  if (((*PTR_DAT_04bb3128 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04c8c100), iVar2 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  if (DAT_04c8c0f0 <= uVar3) {
    uVar3 = 0;
  }
  uVar3 = *(uint *)(DAT_04c8c0f8 + (long)(int)uVar3 * 4);
  return (uint)(uVar3 < 0x1b) & 0x4020077U >> (ulong)(uVar3 & 0x1f);
}

