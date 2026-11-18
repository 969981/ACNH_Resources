
/* WARNING: Type propagation algorithm not settling */

bool FUN_033c1aa4(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  
  puVar2 = PTR_DAT_04bb27c0;
  uVar9 = *(uint *)(param_1 + 0x6c);
  if (*(int *)(param_1 + 0x70) != 3 || uVar9 == 0) {
    return false;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return false;
  }
  plVar8 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) + ((ulong)(uVar9 >> 0x11) & 0x7ff8));
  if (((plVar8 == (long *)0x0) || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 1;
      goto joined_r0x033c1b7c;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x033c1b7c;
    }
  }
  uVar9 = 0;
joined_r0x033c1b7c:
  if (plVar8 != (long *)0x0) {
    lVar6 = plVar8[0x2a];
    if (((*PTR_DAT_04bc99b8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc99b8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bc99b0 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc99b8);
    }
    uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bc99b0);
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar9;
    }
    if ((uVar5 & 1) == 0) {
      return false;
    }
    if (uVar1 == 0) {
      return false;
    }
    if ((int)param_2 < 0) {
      return false;
    }
    if ((int)plVar8[0x4f] <= (int)param_2) {
      return false;
    }
    if ((int)param_3 < 0) {
      return false;
    }
    if ((int)plVar8[0x4f] <= (int)param_3) {
      return false;
    }
    lVar6 = *(long *)(plVar8[0x50] + (ulong)param_2 * 8);
    uVar9 = *(uint *)(lVar6 + 0x4c);
    if (uVar9 == 0xffffffff) {
      return false;
    }
    lVar7 = *(long *)(plVar8[0x50] + (ulong)param_3 * 8);
    if (*(int *)(lVar7 + 0x4c) == -1) {
      return false;
    }
    if ((*(int *)(lVar6 + 0x44) == 0) && (*(int *)(lVar7 + 0x44) == 1)) {
      plVar4 = plVar8 + 0xd3 + (ulong)uVar9 * 0x1b;
      if (0x25 < uVar9) {
        plVar4 = plVar8 + 0xd3;
      }
      if (*(short *)((long)plVar4 + 0x94) == -2) {
        return *(short *)((long)plVar4 + 0x8c) == -2;
      }
    }
  }
  return false;
}

