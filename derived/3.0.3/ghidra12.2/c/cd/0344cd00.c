
bool FUN_0344cd00(ushort *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  ulong uVar5;
  
  if (99 < param_2) goto LAB_0344ce88;
  uVar4 = *(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80);
  if (*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = **(ushort **)PTR_DAT_04bc3a48 & 1;
  }
  bVar1 = *PTR_DAT_04bb3128;
  if (uVar4 < 2 && ((*(long *)(*(long *)PTR_DAT_04bb27d0 + 0x28) == 0 || uVar4 != 1) && uVar3 == 0))
  {
    if ((param_3 & 1) == 0) {
      if (((bVar1 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar2 != 0)) {
        FUN_00706e58(PTR_DAT_04bb3120);
        __cxa_guard_release(PTR_DAT_04bb3128);
      }
      if (0 < (int)*(uint *)PTR_DAT_04bb3120) {
        uVar5 = 0;
        do {
          if (*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar5 * 4) == 0) goto LAB_0344ce94;
          uVar5 = uVar5 + 1;
        } while (*(uint *)PTR_DAT_04bb3120 != uVar5);
      }
    }
    else {
      if (((bVar1 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar2 != 0)) {
        FUN_00706e58(PTR_DAT_04bb3120);
        __cxa_guard_release(PTR_DAT_04bb3128);
      }
      if (0 < (int)*(uint *)PTR_DAT_04bb3120) {
        uVar5 = 0;
        do {
          if (*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar5 * 4) == 1) goto LAB_0344ce94;
          uVar5 = uVar5 + 1;
        } while (*(uint *)PTR_DAT_04bb3120 != uVar5);
      }
    }
  }
  else if ((param_3 & 1) == 0) {
    if (((bVar1 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar2 != 0)) {
      FUN_00706e58(PTR_DAT_04bb3120);
      __cxa_guard_release(PTR_DAT_04bb3128);
    }
    if (0 < (int)*(uint *)PTR_DAT_04bb3120) {
      uVar5 = 0;
      do {
        if (*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar5 * 4) == 4) goto LAB_0344ce58;
        uVar5 = uVar5 + 1;
      } while (*(uint *)PTR_DAT_04bb3120 != uVar5);
    }
  }
  else {
    if (((bVar1 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar2 != 0)) {
      FUN_00706e58(PTR_DAT_04bb3120);
      __cxa_guard_release(PTR_DAT_04bb3128);
    }
    if (0 < (int)*(uint *)PTR_DAT_04bb3120) {
      uVar5 = 0;
      do {
        if (*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar5 * 4) == 5) goto LAB_0344ce94;
        uVar5 = uVar5 + 1;
      } while (*(uint *)PTR_DAT_04bb3120 != uVar5);
    }
  }
  uVar5 = 0;
LAB_0344ce58:
  uVar4 = (uint)uVar5;
  bVar1 = *PTR_DAT_04bb3128;
  goto joined_r0x0344ce98;
LAB_0344ce94:
  uVar4 = (uint)uVar5;
  bVar1 = *PTR_DAT_04bb3128;
joined_r0x0344ce98:
  if (((bVar1 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar2 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (*(uint *)PTR_DAT_04bb3120 <= uVar4) {
    uVar4 = 0;
  }
  *param_1 = (ushort)param_2 & 0x7f |
             (ushort)(*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + (long)(int)uVar4 * 4) << 0xb);
LAB_0344ce88:
  return param_2 < 100;
}

