
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_011de910(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  
  puVar2 = PTR_DAT_04bb27c0;
  if (**(char **)(PTR_DAT_04bc3a88 + 8) != '\0') {
    return 0;
  }
  if (DAT_050dfb28 == 0) {
    return 0;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return 0;
  }
  plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                     ((ulong)(DAT_050dfb28 >> 0x11) & 0x7ff8));
  if (((plVar8 == (long *)0x0) || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar8 + 0x46) != DAT_050dfb28)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 1;
      goto joined_r0x011dea00;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x011dea00;
    }
  }
  uVar9 = 0;
joined_r0x011dea00:
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    if (((*PTR_DAT_04bbbb10 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbbb10), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bbbb08 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbbb10);
    }
    uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bbbb08);
    uVar1 = 0;
    if ((int)lVar7 == 1) {
      uVar1 = uVar9;
    }
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    if (uVar1 == 0) {
      return 0;
    }
    if (0 < (int)plVar8[0x49ef]) {
      iVar3 = 0;
      plVar5 = plVar8 + 0x4f;
      while ((((*(ushort *)(plVar5 + 0xd) >> 3 & 1) == 0 ||
              ((int)plVar5[3] != *(int *)(param_1 + 8))) ||
             ((*(int *)((long)plVar5 + 0x1c) != *(int *)(param_1 + 0xc) ||
              (iVar4 = FUN_0277d6c4(plVar5), iVar4 != 0xea79))))) {
        iVar3 = iVar3 + 1;
        plVar5 = plVar5 + 0xf;
        if ((int)plVar8[0x49ef] <= iVar3) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}

