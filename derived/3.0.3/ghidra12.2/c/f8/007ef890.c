
void _INIT_1427(void)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  DAT_04cb6010 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_04cb6014);
  DAT_04cb6020 = 0x8004ef;
  DAT_04cb6028 = nn::os::GetSystemTick();
  DAT_04cb6030 = 0;
  if ((*PTR_DAT_04bb3128 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bb3128);
    if (iVar1 != 0) {
      FUN_00706e58(PTR_DAT_04bb3120);
      __cxa_guard_release(PTR_DAT_04bb3128);
    }
  }
  if (0 < (int)*(uint *)PTR_DAT_04bb3120) {
    uVar3 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar3 * 4) == 0x1f) goto LAB_007ef930;
      uVar3 = uVar3 + 1;
    } while (*(uint *)PTR_DAT_04bb3120 != uVar3);
  }
  uVar3 = 0;
LAB_007ef930:
  DAT_04cb6038 = 0;
  if ((*PTR_DAT_04bb3128 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bb3128);
    if (iVar1 != 0) {
      FUN_00706e58(PTR_DAT_04bb3120);
      __cxa_guard_release(PTR_DAT_04bb3128);
    }
  }
  uVar2 = (uint)uVar3;
  if (*(uint *)PTR_DAT_04bb3120 <= uVar2) {
    uVar2 = 0;
  }
  DAT_04cb6038 = (short)(*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + (long)(int)uVar2 * 4) << 0xb);
  return;
}

