
undefined4 FUN_00802664(uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  if ((DAT_04c8c100 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04c8c100);
    if (iVar2 != 0) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
  }
  uVar1 = *param_1;
  if (*(uint *)PTR_DAT_04bb3120 <= uVar1) {
    uVar1 = 0;
  }
  return *(undefined4 *)(*(long *)(PTR_DAT_04bb3120 + 8) + (long)(int)uVar1 * 4);
}

