
void FUN_011e38a8(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  
  puVar4 = PTR_DAT_04bb27c0;
  if (**(char **)(PTR_DAT_04bc3a88 + 8) != '\0') {
    return;
  }
  if (DAT_050dfb28 == 0) {
    return;
  }
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                     ((ulong)(DAT_050dfb28 >> 0x11) & 0x7ff8));
  if (((plVar9 == (long *)0x0) || ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar9 + 0x46) != DAT_050dfb28)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar4;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    if (iVar5 < 0x11) {
      uVar10 = 1;
      goto joined_r0x011e398c;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x011e398c;
    }
  }
  uVar10 = 0;
joined_r0x011e398c:
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0x2a];
    if (((*PTR_DAT_04bbbb10 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbbb10), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bbbb08 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbbb10);
    }
    uVar7 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bbbb08);
    uVar1 = 0;
    if ((int)lVar8 == 1) {
      uVar1 = uVar10;
    }
    if (((uVar7 & 1) != 0) && (uVar1 != 0)) {
      iVar5 = (int)plVar9[0x3c2d];
      iVar3 = (int)plVar9[0x3c2c];
      if (iVar5 < iVar3) {
        *(int *)(plVar9 + 0x3c2d) = iVar5 + 1;
        iVar5 = *(int *)((long)plVar9 + 0x1e164) + iVar5;
        iVar2 = 0;
        if (iVar3 <= iVar5) {
          iVar2 = iVar3;
        }
        plVar9 = (long *)(plVar9[0x3c2b] + (long)(iVar5 - iVar2) * 0x10);
        *plVar9 = (long)(PTR_DAT_04bb2010 + 0x10);
        plVar9[1] = 0;
        *(undefined4 *)(plVar9 + 1) = *(undefined4 *)(param_1 + 8);
        *(undefined4 *)((long)plVar9 + 0xc) = *(undefined4 *)(param_1 + 0xc);
      }
    }
  }
  return;
}

