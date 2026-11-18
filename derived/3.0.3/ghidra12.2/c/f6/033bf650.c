
undefined8 FUN_033bf650(long param_1,long param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  void *__dest;
  long *plVar9;
  void *__src;
  uint uVar10;
  
  puVar3 = PTR_DAT_04bb27c0;
  uVar10 = *(uint *)(param_1 + 0x6c);
  if (*(int *)(param_1 + 0x70) != 3 || uVar10 == 0) {
    return 0;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return 0;
  }
  plVar9 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + ((ulong)(uVar10 >> 0x11) & 0x7ff8));
  if (((plVar9 == (long *)0x0) || ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar9 + 0x46) != uVar10)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar10 = 1;
      goto joined_r0x033bf808;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x033bf808;
    }
  }
  uVar10 = 0;
joined_r0x033bf808:
  if (plVar9 == (long *)0x0) {
    return 0;
  }
  lVar7 = plVar9[0x2a];
  if (((*PTR_DAT_04bc99b8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc99b8), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bc99b0 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc99b8);
  }
  uVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bc99b0);
  uVar2 = 0;
  if ((int)lVar7 == 1) {
    uVar2 = uVar10;
  }
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  if (uVar2 == 0) {
    return 0;
  }
  if ((int)param_3 < 0) {
    return 0;
  }
  if ((int)plVar9[0x4f] <= (int)param_3) {
    return 0;
  }
  lVar7 = *(long *)(plVar9[0x50] + (ulong)param_3 * 8);
  __dest = *(void **)(param_2 + 8);
  plVar9 = (long *)(lVar7 + 8);
  (**(code **)(*plVar9 + 0x18))(plVar9);
  __src = *(void **)(lVar7 + 0x10);
  if (__dest != __src) {
    (**(code **)(*(long *)(lVar7 + 8) + 0x18))(plVar9);
    lVar8 = 0;
    do {
      if (*(char *)(*(long *)(lVar7 + 0x10) + lVar8) == '\0') goto LAB_033bf830;
      lVar1 = *(long *)(lVar7 + 0x10) + lVar8;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_033bf830;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_033bf830;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_033bf830:
    iVar4 = (int)lVar8;
    if (*(int *)(param_2 + 0x10) <= (int)lVar8) {
      iVar4 = *(int *)(param_2 + 0x10) + -1;
    }
    memcpy(__dest,__src,(long)iVar4);
    *(undefined1 *)((long)__dest + (long)iVar4) = 0;
  }
  return 1;
}

