
/* WARNING: Type propagation algorithm not settling */

bool FUN_011e3a80(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  uint uVar13;
  
  puVar3 = PTR_DAT_04bb27c0;
  if (**(char **)(PTR_DAT_04bc3a88 + 8) != '\0') {
    return false;
  }
  if (DAT_050dfb28 == 0) {
    return false;
  }
  lVar10 = *(long *)PTR_DAT_04bb27c0;
  if (lVar10 == 0) {
    return false;
  }
  plVar12 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                      ((ulong)(DAT_050dfb28 >> 0x11) & 0x7ff8));
  if (((plVar12 == (long *)0x0) || ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar12 + 0x46) != DAT_050dfb28)) {
    plVar12 = (long *)0x0;
  }
  if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar3;
    iVar7 = (**(code **)(*plVar8 + 0x60))();
    if (iVar7 < 0x11) {
      uVar13 = 1;
      goto joined_r0x011e3b68;
    }
    if (*(uint *)(lVar10 + 0x5e8) < 5) {
      uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x011e3b68;
    }
  }
  uVar13 = 0;
joined_r0x011e3b68:
  if (plVar12 != (long *)0x0) {
    lVar10 = plVar12[0x2a];
    if (((*PTR_DAT_04bbbb10 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bbbb10), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bbbb08 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbbb10);
    }
    uVar9 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bbbb08);
    uVar1 = 0;
    if ((int)lVar10 == 1) {
      uVar1 = uVar13;
    }
    if ((uVar9 & 1) == 0) {
      return false;
    }
    if (uVar1 == 0) {
      return false;
    }
    iVar7 = (int)plVar12[0x3c2d];
    if (iVar7 != 0) {
      iVar11 = *(int *)((long)plVar12 + 0x1e164);
      while( true ) {
        iVar7 = iVar7 + -1;
        iVar2 = 0;
        if ((int)plVar12[0x3c2c] <= iVar11) {
          iVar2 = (int)plVar12[0x3c2c];
        }
        lVar10 = plVar12[0x3c2b] + (long)(iVar11 - iVar2) * 0x10;
        bVar5 = *(int *)(lVar10 + 8) == *(int *)(param_1 + 8);
        bVar6 = *(int *)(lVar10 + 0xc) == *(int *)(param_1 + 0xc);
        bVar4 = bVar5 && bVar6;
        if (bVar5 && bVar6) break;
        iVar11 = iVar11 + 1;
        if (iVar7 == 0) {
          return bVar4;
        }
      }
      return bVar4;
    }
  }
  return false;
}

