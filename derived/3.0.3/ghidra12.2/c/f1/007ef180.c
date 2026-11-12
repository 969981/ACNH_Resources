
bool FUN_007ef180(ushort *param_1)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  
  uVar2 = *param_1;
  uVar8 = (ulong)uVar2;
  if ((*PTR_DAT_04bb3128 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3128);
    uVar8 = (ulong)(uint)uVar2;
    if (iVar3 != 0) {
      FUN_00706e58(PTR_DAT_04bb3120);
      __cxa_guard_release(PTR_DAT_04bb3128);
      uVar8 = (ulong)(uint)uVar2;
    }
  }
  if (0 < (int)*(uint *)PTR_DAT_04bb3120) {
    uVar5 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar5 * 4) == (int)(uVar8 >> 0xb))
      goto LAB_007ef1dc;
      uVar5 = uVar5 + 1;
    } while (*(uint *)PTR_DAT_04bb3120 != uVar5);
  }
  uVar5 = 0;
LAB_007ef1dc:
  uVar4 = (uint)uVar5;
  if (((*PTR_DAT_04bb3128 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar3 != 0))
  {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar1 = uVar4;
  if (*(uint *)PTR_DAT_04bb3120 <= uVar4) {
    uVar1 = 0;
  }
  uVar1 = *(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + (long)(int)uVar1 * 4) - 1;
  if ((0x18 < uVar1) || ((0x11a76d5U >> (ulong)(uVar1 & 0x1f) & 1) == 0)) {
    if (((*PTR_DAT_04bb3128 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar3 != 0)) {
      FUN_00706e58(PTR_DAT_04bb3120);
      __cxa_guard_release(PTR_DAT_04bb3128);
    }
    uVar1 = uVar4;
    if (*(uint *)PTR_DAT_04bb3120 <= uVar4) {
      uVar1 = 0;
    }
    if ((((*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + (long)(int)uVar1 * 4) == 0x11) &&
         (puVar7 = *(uint **)PTR_DAT_04bb3720, puVar7 != (uint *)0x0)) &&
        (*(long *)(puVar7 + 2) != 0)) &&
       (((uint)((ulong)*param_1 & 0x7f) < *puVar7 &&
        (lVar6 = *(long *)(*(long *)(puVar7 + 2) + ((ulong)*param_1 & 0x7f) * 8), lVar6 != 0)))) {
      return *(char *)(lVar6 + 10) != '\0';
    }
    if (((*PTR_DAT_04bb3128 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar3 != 0)) {
      FUN_00706e58(PTR_DAT_04bb3120);
      __cxa_guard_release(PTR_DAT_04bb3128);
    }
    uVar1 = uVar4;
    if (*(uint *)PTR_DAT_04bb3120 <= uVar4) {
      uVar1 = 0;
    }
    if ((*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + (long)(int)uVar1 * 4) != 0x16) ||
       ((*param_1 >> 7 & 0xf) - 0xe < 0xfffffff3)) {
      if (((*PTR_DAT_04bb3128 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar3 != 0)) {
        FUN_00706e58(PTR_DAT_04bb3120);
        __cxa_guard_release(PTR_DAT_04bb3128);
      }
      uVar1 = uVar4;
      if (*(uint *)PTR_DAT_04bb3120 <= uVar4) {
        uVar1 = 0;
      }
      if ((*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + (long)(int)uVar1 * 4) != 0x18) ||
         ((*param_1 & 0x780) != 0)) {
        if (((*PTR_DAT_04bb3128 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar3 != 0)) {
          FUN_00706e58(PTR_DAT_04bb3120);
          __cxa_guard_release(PTR_DAT_04bb3128);
        }
        if (*(uint *)PTR_DAT_04bb3120 <= uVar4) {
          uVar4 = 0;
        }
        if ((*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + (long)(int)uVar4 * 4) != 0x1a) ||
           ((*param_1 & 0x780) != 0x80)) {
          return false;
        }
      }
    }
  }
  return true;
}

