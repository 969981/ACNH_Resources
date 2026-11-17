
undefined8 FUN_02cde520(undefined8 param_1,uint *param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined1 *__dest;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  undefined1 *__src;
  undefined *local_c0;
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_ac [31];
  undefined1 local_8d;
  undefined *local_88;
  undefined1 *puStack_80;
  undefined4 local_78;
  undefined1 local_74 [31];
  undefined1 local_55;
  
  puVar4 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb4e28;
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0xe0) != 0)) {
    lVar9 = 0;
    uVar12 = *param_2;
    lVar10 = (long)*(int *)(lVar8 + 0xe0) << 3;
    do {
      if (uVar12 == *(uint *)(*(long *)(*(long *)(lVar8 + 0xe8) + lVar9 * 8) + 8)) {
        iVar3 = *(int *)(*(long *)(*(long *)(lVar8 + 0xe8) + lVar9 * 8) + 0xd8);
        if (iVar3 == 0) {
          return 0;
        }
        local_8d = 0;
        local_b0 = 0x20;
        local_b8 = local_ac;
        local_ac[0] = 0;
        puVar1 = PTR_DAT_04bb2028 + 0x10;
        local_c0 = puVar1;
        if ((uVar12 == 0) || (lVar8 = *(long *)PTR_DAT_04bb27c0, lVar8 == 0)) goto LAB_02cde77c;
        plVar11 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                            ((ulong)(uVar12 >> 0x11) & 0x7ff8));
        if ((plVar11 == (long *)0x0) ||
           (((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar11 + 0x46) != uVar12)))) {
          plVar11 = (long *)0x0;
        }
        if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
          plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar8 = *(long *)puVar4;
          iVar5 = (**(code **)(*plVar6 + 0x60))();
          if (iVar5 < 0x11) {
            uVar12 = 1;
          }
          else {
            if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_02cde684;
            uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
          }
        }
        else {
LAB_02cde684:
          uVar12 = 0;
        }
        if (plVar11 == (long *)0x0) goto LAB_02cde77c;
        lVar8 = plVar11[0x2a];
        if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0)) {
          *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb37d8);
        }
        uVar7 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb37d0);
        __dest = local_b8;
        uVar2 = 0;
        if ((int)lVar8 == 1) {
          uVar2 = uVar12;
        }
        if (((uVar7 & 1) == 0) || (uVar2 == 0)) goto LAB_02cde77c;
        (**(code **)(plVar11[0x7c] + 0x18))(plVar11 + 0x7c);
        __src = (undefined1 *)plVar11[0x7d];
        if (__dest == __src) goto LAB_02cde77c;
        (**(code **)(plVar11[0x7c] + 0x18))(plVar11 + 0x7c);
        lVar8 = 0;
        goto LAB_02cde718;
      }
      lVar9 = lVar9 + 1;
      lVar10 = lVar10 + -8;
    } while (lVar10 != 0);
  }
  return 0;
  while( true ) {
    lVar9 = plVar11[0x7d] + lVar8;
    if (*(char *)(lVar9 + 1) == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_02cde754;
    }
    if (*(char *)(lVar9 + 2) == '\0') {
      lVar8 = lVar8 + 2;
      goto LAB_02cde754;
    }
    lVar8 = lVar8 + 3;
    if (lVar8 == 0x80001) break;
LAB_02cde718:
    if (*(char *)(plVar11[0x7d] + lVar8) == '\0') goto LAB_02cde754;
  }
  lVar8 = 0;
LAB_02cde754:
  iVar5 = (int)lVar8;
  if (local_b0 <= (int)lVar8) {
    iVar5 = local_b0 + -1;
  }
  memcpy(__dest,__src,(long)iVar5);
  __dest[iVar5] = 0;
LAB_02cde77c:
  local_78 = 0x20;
  puStack_80 = local_74;
  local_55 = 0;
  local_74[0] = 0;
  local_88 = puVar1;
  FUN_0377b4f0(&local_88,iVar3,1);
  FUN_0377b840(param_1,&local_88,&local_c0);
  return 1;
}

