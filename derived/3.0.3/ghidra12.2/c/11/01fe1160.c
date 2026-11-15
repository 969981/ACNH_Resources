
bool FUN_01fe1160(long *param_1,uint *param_2)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  void *__dest;
  long *plVar12;
  uint uVar13;
  void *__src;
  
  puVar3 = PTR_DAT_04bb27c0;
  uVar13 = *param_2;
  if (uVar13 == 0) {
    return false;
  }
  iVar5 = *(int *)(*(long *)PTR_DAT_04bb4e28 + 0xe0);
  if (iVar5 != 0) {
    lVar10 = *(long *)(*(long *)PTR_DAT_04bb4e28 + 0xe8);
    lVar9 = 0;
    lVar11 = (long)iVar5 << 3;
    do {
      if (uVar13 == *(uint *)(*(long *)(lVar10 + lVar9 * 8) + 8)) {
        iVar5 = *(int *)(*(long *)(lVar10 + lVar9 * 8) + 0xd8);
        goto LAB_01fe11d4;
      }
      lVar9 = lVar9 + 1;
      lVar11 = lVar11 + -8;
    } while (lVar11 != 0);
  }
  iVar5 = 0;
LAB_01fe11d4:
  if (iVar5 != *(int *)param_1[1]) {
    return false;
  }
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    bVar4 = false;
  }
  else {
    plVar12 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                        ((ulong)(uVar13 >> 0x11) & 0x7ff8));
    if (((plVar12 == (long *)0x0) || ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) ||
       (*(uint *)(plVar12 + 0x46) != uVar13)) {
      plVar12 = (long *)0x0;
    }
    if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
      plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar9 = *(long *)puVar3;
      iVar5 = (**(code **)(*plVar6 + 0x60))();
      if (iVar5 < 0x11) {
        uVar13 = 1;
        uVar8 = 1;
      }
      else {
        uVar8 = *(uint *)(lVar9 + 0x5e8);
        if (4 < uVar8) goto LAB_01fe12a8;
        uVar13 = 0x1aU >> (ulong)(uVar8 & 0x1f) & 1;
        uVar8 = (uint)(0x101000100 >> (((ulong)uVar8 & 7) << 3)) & 1;
      }
    }
    else {
LAB_01fe12a8:
      uVar13 = 0;
      uVar8 = 0;
    }
    if (plVar12 == (long *)0x0) {
      bVar4 = false;
      goto LAB_01fe1398;
    }
    lVar9 = plVar12[0x2a];
    bVar4 = (int)lVar9 == 1;
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar7 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb37d0);
    if ((uVar7 & 1) != 0) {
      uVar13 = uVar13 ^ 1;
      if ((int)lVar9 != 1) {
        uVar13 = 1;
      }
      if (uVar13 != 0) {
        return false;
      }
      lVar9 = *param_1;
      __dest = *(void **)(lVar9 + 8);
      (**(code **)(plVar12[0x7c] + 0x18))(plVar12 + 0x7c);
      __src = (void *)plVar12[0x7d];
      if (__dest != __src) {
        (**(code **)(plVar12[0x7c] + 0x18))(plVar12 + 0x7c);
        lVar11 = 0;
        do {
          if (*(char *)(plVar12[0x7d] + lVar11) == '\0') goto LAB_01fe13c0;
          lVar10 = plVar12[0x7d] + lVar11;
          if (*(char *)(lVar10 + 1) == '\0') {
            lVar11 = lVar11 + 1;
            goto LAB_01fe13c0;
          }
          if (*(char *)(lVar10 + 2) == '\0') {
            lVar11 = lVar11 + 2;
            goto LAB_01fe13c0;
          }
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
        lVar11 = 0;
LAB_01fe13c0:
        iVar2 = *(int *)(lVar9 + 0x10);
        iVar5 = (int)lVar11;
        if (iVar2 <= (int)lVar11) {
          iVar5 = iVar2 + -1;
        }
        memcpy(__dest,__src,(long)iVar5);
        *(undefined1 *)((long)__dest + (long)iVar5) = 0;
      }
      return true;
    }
  }
  uVar8 = 0;
LAB_01fe1398:
  bVar1 = false;
  if (uVar8 != 0) {
    bVar1 = bVar4;
  }
  return bVar1;
}

