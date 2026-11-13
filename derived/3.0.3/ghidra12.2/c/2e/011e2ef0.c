
/* WARNING: Removing unreachable block (ram,0x011e306c) */
/* WARNING: Removing unreachable block (ram,0x011e3078) */
/* WARNING: Removing unreachable block (ram,0x011e3084) */
/* WARNING: Removing unreachable block (ram,0x011e3098) */

void FUN_011e2ef0(void)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  
  puVar2 = PTR_DAT_04bb27c0;
  if (**(char **)(PTR_DAT_04bc3a88 + 8) != '\0') {
    return;
  }
  if (DAT_050dfb28 == 0) {
    return;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return;
  }
  plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                     ((ulong)(DAT_050dfb28 >> 0x11) & 0x7ff8));
  if (((plVar7 == (long *)0x0) || ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar7 + 0x46) != DAT_050dfb28)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar8 = 1;
      goto joined_r0x011e2fe0;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x011e2fe0;
    }
  }
  uVar8 = 0;
joined_r0x011e2fe0:
  if (plVar7 != (long *)0x0) {
    lVar6 = plVar7[0x2a];
    if (((*PTR_DAT_04bbbb10 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbbb10), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bbbb08 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbbb10);
    }
    uVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bbbb08);
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar8;
    }
    if ((((uVar5 & 1) != 0) && (uVar1 != 0)) && (iVar3 = (int)plVar7[0x49ef], 0 < iVar3)) {
      do {
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

