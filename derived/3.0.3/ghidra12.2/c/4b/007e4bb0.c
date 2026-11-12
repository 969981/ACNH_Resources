
ulong FUN_007e4bb0(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
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
    uVar4 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar4 * 4) == (int)(uVar6 >> 0xb)) goto LAB_007e4c0c;
      uVar4 = uVar4 + 1;
    } while (DAT_04c8c0f0 != uVar4);
  }
  uVar4 = 0;
LAB_007e4c0c:
  uVar3 = (uint)uVar4;
  puVar5 = &DAT_04c8c0f0;
  if ((*PTR_DAT_04bb3128 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04c8c100);
    puVar5 = (uint *)PTR_DAT_04bb3120;
    if (iVar2 != 0) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
      puVar5 = &DAT_04c8c0f0;
    }
  }
  if (*puVar5 <= uVar3) {
    uVar3 = 0;
  }
  if (*(int *)(*(long *)(puVar5 + 2) + (long)(int)uVar3 * 4) == 0x11) {
    return (ulong)(*(long *)(param_1 + 8) != 0);
  }
  uVar6 = FUN_007ef180();
  return uVar6;
}

