
/* WARNING: Type propagation algorithm not settling */

bool FUN_00a90040(long param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  
  uVar4 = FUN_00a8f53c();
  puVar1 = PTR_DAT_04bb27c0;
  if ((uVar4 & 1) == 0) {
    return false;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return false;
  }
  uVar8 = *(uint *)(param_1 + 0x653e4);
  if ((((uVar8 == 0) ||
       (plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
      ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar8)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar5 + 0x60))();
    if (iVar2 < 0x11) {
      uVar8 = 1;
      goto joined_r0x00a90108;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x00a90108;
    }
  }
  uVar8 = 0;
joined_r0x00a90108:
  if (plVar7 != (long *)0x0) {
    if (((*PTR_DAT_04bb3880 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3880), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb3878 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3880);
    }
    uVar3 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb3878);
    if (((uVar8 & uVar3) == 1) && (lVar6 = (long)(int)plVar7[0x5d], (int)plVar7[0x5d] != 0)) {
      do {
        lVar6 = lVar6 + -1;
        iVar2 = *(int *)(*(long *)(plVar7[0x5e] + lVar6 * 8) + 0x30);
      } while (iVar2 < 1 && lVar6 != 0);
      return 0 < iVar2;
    }
  }
  return false;
}

