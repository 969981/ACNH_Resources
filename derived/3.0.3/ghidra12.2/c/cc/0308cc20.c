
bool FUN_0308cc20(ushort *param_1)

{
  undefined *puVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort local_4 [2];
  
  if (*param_1 == *(ushort *)PTR_DAT_04bb3170) {
    return false;
  }
  if ((*PTR_DAT_04bb3128 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3128);
    if (iVar3 != 0) {
      FUN_00706e58(PTR_DAT_04bb3120);
      __cxa_guard_release(PTR_DAT_04bb3128);
    }
  }
  if (0 < (int)*(uint *)PTR_DAT_04bb3120) {
    uVar5 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar5 * 4) == 0) goto LAB_0308cc98;
      uVar5 = uVar5 + 1;
    } while (*(uint *)PTR_DAT_04bb3120 != uVar5);
  }
  uVar5 = 0;
LAB_0308cc98:
  uVar2 = *param_1;
  if ((*PTR_DAT_04bb3128 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3128);
    if (iVar3 != 0) {
      FUN_00706e58(PTR_DAT_04bb3120);
      __cxa_guard_release(PTR_DAT_04bb3128);
    }
  }
  uVar4 = (uint)uVar5;
  if (*(uint *)PTR_DAT_04bb3120 <= uVar4) {
    uVar4 = 0;
  }
  uVar4 = *(uint *)(*(long *)(PTR_DAT_04bb3120 + 8) + (long)(int)uVar4 * 4);
  puVar1 = PTR_DAT_04bb3170;
  if (*(long *)PTR_DAT_04bb5ce0 != 0) {
    puVar1 = (undefined *)(*(long *)PTR_DAT_04bb5ce0 + 0xe9c);
  }
  FUN_007ef010(local_4,puVar1);
  return (uVar2 & 0x7f | (uVar4 & 0x1f) << 0xb) == (uint)local_4[0];
}

