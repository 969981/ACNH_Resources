
void FUN_007ef010(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar1 = *param_2;
  uVar7 = (ulong)uVar1;
  if ((*PTR_DAT_04bb3128 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_04c8c100);
    uVar7 = (ulong)(uint)uVar1;
    if (iVar3 != 0) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
      uVar7 = (ulong)(uint)uVar1;
    }
  }
  puVar2 = PTR_DAT_04bb3128;
  if (0 < (int)DAT_04c8c0f0) {
    uVar6 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar6 * 4) == (int)(uVar7 >> 0xb)) goto LAB_007ef06c;
      uVar6 = uVar6 + 1;
    } while (DAT_04c8c0f0 != uVar6);
  }
  uVar6 = 0;
LAB_007ef06c:
  uVar1 = *param_2;
  *param_1 = 0;
  puVar4 = &DAT_04c8c0f0;
  if ((*puVar2 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_04c8c100);
    puVar4 = (uint *)PTR_DAT_04bb3120;
    if (iVar3 != 0) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
      puVar4 = (uint *)PTR_DAT_04bb3120;
    }
  }
  uVar5 = (uint)uVar6;
  if (*puVar4 <= uVar5) {
    uVar5 = 0;
  }
  *param_1 = uVar1 & 0x7ff | (ushort)(*(int *)(*(long *)(puVar4 + 2) + (long)(int)uVar5 * 4) << 0xb)
  ;
  return;
}

