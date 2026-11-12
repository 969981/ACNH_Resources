
undefined4 FUN_007e6aa0(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = *param_1;
  uVar6 = (ulong)uVar1;
  if ((*PTR_DAT_04bb3128 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04c8c100);
    uVar6 = (ulong)(uint)uVar1;
    if (iVar2 != 0) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
      uVar6 = (ulong)(uint)uVar1;
    }
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar5 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar5 * 4) == (int)(uVar6 >> 0xb)) goto LAB_007e6b0c;
      uVar5 = uVar5 + 1;
    } while (DAT_04c8c0f0 != uVar5);
  }
  uVar5 = 0;
LAB_007e6b0c:
  uVar4 = (uint)uVar5;
  if (((*PTR_DAT_04bb3128 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04c8c100), iVar2 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  if (DAT_04c8c0f0 <= uVar4) {
    uVar4 = 0;
  }
  if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar4 * 4) == 0x11) {
    uVar6 = *(ulong *)(param_1 + 8);
  }
  else {
    uVar6 = FUN_007ef180(param_1);
    uVar6 = uVar6 & 1;
  }
  if (uVar6 == 0) {
    uVar3 = 0x20;
  }
  else {
    iVar2 = FUN_007e68d0(param_1);
    uVar3 = 0x20;
    if (iVar2 != 2) {
      uVar3 = 0x40;
    }
  }
  return uVar3;
}

