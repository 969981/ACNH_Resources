
void FUN_026558a0(ushort *param_1,undefined8 param_2,ushort param_3,undefined8 param_4)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 auStack_4 [2];
  undefined1 auStack_2 [2];
  
  if ((DAT_04c8c100 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04c8c100);
    if (iVar1 != 0) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar4 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar4 * 4) == 4) goto LAB_026558fc;
      uVar4 = uVar4 + 1;
    } while (DAT_04c8c0f0 != uVar4);
  }
  uVar4 = 0;
LAB_026558fc:
  *param_1 = 0;
  puVar2 = &DAT_04c8c0f0;
  if ((DAT_04c8c100 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04c8c100);
    puVar2 = (uint *)PTR_DAT_04bb3120;
    if (iVar1 != 0) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
      puVar2 = (uint *)PTR_DAT_04bb3120;
    }
  }
  uVar3 = (uint)uVar4;
  if (*puVar2 <= uVar3) {
    uVar3 = 0;
  }
  *param_1 = param_3 & 0x7f |
             (ushort)(*(int *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 4) << 0xb);
  FUN_007ef010(auStack_2,param_4);
  FUN_007ef010(auStack_4,param_1);
  FUN_02652f70(auStack_2,auStack_4);
  return;
}

