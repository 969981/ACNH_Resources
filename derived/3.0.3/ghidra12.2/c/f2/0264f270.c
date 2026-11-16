
long FUN_0264f270(ushort *param_1)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
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
      goto LAB_0264f2cc;
      uVar5 = uVar5 + 1;
    } while (*(uint *)PTR_DAT_04bb3120 != uVar5);
  }
  uVar5 = 0;
LAB_0264f2cc:
  uVar4 = (uint)uVar5;
  uVar2 = *param_1;
  if (uVar2 == *(ushort *)PTR_DAT_04bb3170) {
    return 0;
  }
  if (((*PTR_DAT_04bb3128 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar3 != 0))
  {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar1 = uVar4;
  if (*(uint *)PTR_DAT_04bb3120 <= uVar4) {
    uVar1 = 0;
  }
  if (*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + (long)(int)uVar1 * 4) == 3) {
    lVar6 = *(long *)PTR_DAT_04bb46b0;
    if (lVar6 == 0) {
      return 0;
    }
    lVar7 = *(long *)(lVar6 + 0x10);
    if ((*(byte *)(lVar6 + 0x453) & 1) != 0) {
      if (lVar7 == 0) {
        return 0;
      }
      lVar7 = *(long *)(lVar7 + 0x138);
      goto joined_r0x0264f398;
    }
  }
  else {
    if (((*PTR_DAT_04bb3128 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar3 != 0)) {
      FUN_00706e58(PTR_DAT_04bb3120);
      __cxa_guard_release(PTR_DAT_04bb3128);
    }
    if (*(uint *)PTR_DAT_04bb3120 <= uVar4) {
      uVar4 = 0;
    }
    if (*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + (long)(int)uVar4 * 4) != 7) {
      return 0;
    }
    if (*(long *)PTR_DAT_04bb46b0 == 0) {
      return 0;
    }
    lVar7 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x10);
  }
  if (lVar7 == 0) {
    return 0;
  }
  lVar7 = *(long *)(lVar7 + 8);
joined_r0x0264f398:
  if ((lVar7 == 0) || (*(long *)(lVar7 + 0x18) == 0)) {
    return 0;
  }
  uVar8 = (ulong)uVar2 & 0x7f;
  lVar7 = *(long *)(lVar7 + 0x18) + 0x932d8;
  lVar6 = lVar7 + uVar8 * 0xa8;
  if (7 < (uint)uVar8) {
    lVar6 = lVar7;
  }
  return lVar6;
}

