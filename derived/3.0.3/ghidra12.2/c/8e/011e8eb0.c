
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_011e8eb0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  long *plVar8;
  uint uVar9;
  
  puVar2 = PTR_DAT_04bb27c0;
  if (**(char **)(PTR_DAT_04bc3a88 + 8) != '\0') {
    return 0;
  }
  if (DAT_050dfb28 == 0) {
    return 0;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return 0;
  }
  plVar8 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                     ((ulong)(DAT_050dfb28 >> 0x11) & 0x7ff8));
  if (((plVar8 == (long *)0x0) || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar8 + 0x46) != DAT_050dfb28)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 1;
      goto joined_r0x011e8f98;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x011e8f98;
    }
  }
  uVar9 = 0;
joined_r0x011e8f98:
  if (plVar8 != (long *)0x0) {
    lVar6 = plVar8[0x2a];
    if (((*PTR_DAT_04bbbb10 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbbb10), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bbbb08 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbbb10);
    }
    uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bbbb08);
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar9;
    }
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    if (uVar1 == 0) {
      return 0;
    }
    iVar3 = (int)plVar8[0x49ef];
    if (0 < iVar3) {
      pcVar7 = (char *)((long)plVar8 + 0x2e6);
      while ((((*(ushort *)(pcVar7 + -6) >> 3 & 1) == 0 || (-1 < *pcVar7)) ||
             ((*(int *)(param_1 + 8) != *(int *)(pcVar7 + -0x56) ||
              (*(int *)(param_1 + 0xc) != *(int *)(pcVar7 + -0x52)))))) {
        iVar3 = iVar3 + -1;
        pcVar7 = pcVar7 + 0x78;
        if (iVar3 == 0) {
          return 0;
        }
      }
      *(ushort *)(pcVar7 + -6) = *(ushort *)(pcVar7 + -6) | 0x800;
      return 1;
    }
  }
  return 0;
}

