
void FUN_007eef5c(ushort *param_1,uint *param_2,ushort param_3,ushort param_4)

{
  uint uVar1;
  int iVar2;
  
  *param_1 = 0;
  uVar1 = *param_2;
  if ((*PTR_DAT_04bb3128 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04c8c100);
    if (iVar2 != 0) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
  }
  if (DAT_04c8c0f0 <= uVar1) {
    uVar1 = 0;
  }
  *param_1 = (param_3 & 0xf) << 7 | (ushort)(*(int *)(DAT_04c8c0f8 + (long)(int)uVar1 * 4) << 0xb) |
             param_4 & 0x7f;
  return;
}

