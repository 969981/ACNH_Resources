
/* WARNING: Type propagation algorithm not settling */

long FUN_018bb8e4(void)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  
  puVar1 = PTR_DAT_04bb27c0;
  lVar5 = *(long *)PTR_DAT_04bb27c0;
  if (lVar5 == 0) {
    return 0;
  }
  uVar7 = *(uint *)PTR_DAT_04bb4b88;
  if ((((uVar7 == 0) ||
       (plVar6 = *(long **)(*(long *)(*(long *)(lVar5 + 0x1c0) + 8) +
                           ((ulong)(uVar7 >> 0x11) & 0x7ff8)), plVar6 == (long *)0x0)) ||
      ((*(uint *)(plVar6 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar6 + 0x46) != uVar7)) {
    plVar6 = (long *)0x0;
  }
  if (*(int *)(lVar5 + 0x288) == 1 || *(int *)(lVar5 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar5 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar4 + 0x60))();
    if (iVar2 < 0x11) {
      uVar7 = 1;
      goto joined_r0x018bb9a0;
    }
    if (*(uint *)(lVar5 + 0x5e8) < 5) {
      uVar7 = 0x1aU >> (ulong)(*(uint *)(lVar5 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x018bb9a0;
    }
  }
  uVar7 = 0;
joined_r0x018bb9a0:
  if (plVar6 != (long *)0x0) {
    if (((*PTR_DAT_04bb4b78 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb4b78), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb4b70 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4b78);
    }
    uVar3 = (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bb4b70);
    if ((uVar7 & uVar3) == 1) {
      lVar5 = 0;
      if (plVar6[0x54] != 0) {
        lVar5 = plVar6[0x54] + 0x3d8;
      }
      return lVar5;
    }
  }
  return 0;
}

