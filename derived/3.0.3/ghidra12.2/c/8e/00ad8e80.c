
void FUN_00ad8e80(long *param_1)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  uint *puVar5;
  byte bVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  uint uVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  long lVar18;
  undefined *local_130;
  undefined1 *puStack_128;
  undefined4 local_120;
  undefined1 local_11c [127];
  undefined1 local_9d;
  undefined *local_98;
  undefined1 *puStack_90;
  undefined4 local_88;
  undefined1 local_84 [63];
  undefined1 local_45;
  
  puVar7 = PTR_DAT_04bb28f8;
  lVar18 = *(long *)(param_1[1] + 0x290);
  lVar15 = *(long *)(lVar18 + 0x10);
  if (lVar15 == 0) {
    plVar16 = *(long **)(lVar18 + 0x20);
    lVar15 = 0;
    if (plVar16 != (long *)0x0) {
      lVar15 = *plVar16;
    }
  }
  if (*(char *)((long)param_1 + 0x152) == '\0') {
    lVar15 = *(long *)PTR_DAT_04bb6538;
    uVar13 = *(uint *)(lVar15 + 0x270);
    local_130 = (undefined *)CONCAT44(local_130._4_4_,uVar13);
    if ((uVar13 < 0x29) && ((1L << ((ulong)uVar13 & 0x3f) & 0x1801801800cU) != 0)) {
      plVar16 = *(long **)(**(long **)(*(long *)(lVar15 + 0x210) + 0x3f8) + 0x1b0);
      if ((plVar16 != (long *)0x0) && (uVar11 = (**(code **)(*plVar16 + 0x48))(), (uVar11 & 1) == 0)
         ) {
        return;
      }
    }
    else if ((*(int *)(lVar15 + 0x1f0) != -1 || *(int *)(lVar15 + 500) != -1) ||
             1 < *(uint *)(lVar15 + 0x1b0)) {
      return;
    }
    *(undefined4 *)(param_1 + 0x16) = 1;
    return;
  }
  iVar10 = *(int *)(lVar15 + 0x48);
  if ((char)param_1[0x2a] != '\0') {
    if (iVar10 != 8) {
      return;
    }
    lVar18 = *(long *)(param_1[1] + 0x48);
    lVar15 = *(long *)PTR_DAT_04bb3968;
    if ((lVar18 == 0) || (*(int *)(lVar18 + 0x15c) != 10)) {
      *(undefined4 *)(lVar15 + 0xd20) = 0xffffffff;
      uVar17 = 0;
      if (param_1[1] != 0) {
        uVar17 = *(undefined8 *)(param_1[1] + 0x290);
      }
      *(undefined8 *)(*(long *)puVar7 + 200) = uVar17;
    }
    else {
      uVar13 = *(uint *)(lVar15 + 0xd20);
      local_130 = (undefined *)CONCAT44(local_130._4_4_,*(int *)(lVar18 + 0x230));
      piVar3 = (int *)(lVar15 + 0xa20) + uVar13;
      if (0x11 < uVar13) {
        piVar3 = (int *)(lVar15 + 0xa20);
      }
      piVar4 = (int *)PTR_DAT_04bb3238;
      if (uVar13 != 0xffffffff) {
        piVar4 = piVar3;
      }
      if (*piVar4 != *(int *)(lVar18 + 0x230)) {
        FUN_020afba4(lVar15,&local_130);
      }
    }
    local_45 = 0;
    local_88 = 0x40;
    local_120 = 0x80;
    puStack_90 = local_84;
    local_84[0] = 0;
    local_98 = PTR_DAT_04bb2bc0 + 0x10;
    local_9d = 0;
    local_11c[0] = 0;
    puStack_128 = local_11c;
    local_130 = PTR_DAT_04bb2d88 + 0x10;
    uVar11 = FUN_00ad8430(&local_98,&local_130,param_1 + 0x17);
    if ((uVar11 & 1) != 0) {
      FUN_00ad8794(param_1,&local_98,&local_130);
    }
    *(undefined1 *)(param_1 + 0x2a) = 0;
    return;
  }
  bVar8 = *(int *)(lVar15 + 0x2548) != 1;
  bVar9 = 0xfffffffd < *(int *)(lVar15 + 0x254c) - 1U;
  if ((iVar10 == 0 && (bVar8 || bVar9) || iVar10 == 7) || ((iVar10 == 8 && (bVar8 || bVar9)))) {
    uVar11 = (**(code **)(*param_1 + 0x70))(param_1);
    if ((uVar11 & 1) == 0) {
      uVar11 = (**(code **)(*param_1 + 0x68))(param_1);
      if ((uVar11 & 1) == 0) goto LAB_00ad910c;
      bVar6 = 0;
    }
    else {
      lVar15 = *(long *)PTR_DAT_04bb28f8;
      if ((*(char *)((long)param_1 + 0x151) == '\0') || (*(int *)(lVar15 + 0x50) != 8)) {
        bVar6 = 0;
        *(undefined1 *)((long)param_1 + 0x151) = 1;
        if ((*(uint *)(lVar15 + 0x50) < 10) &&
           ((1 << (ulong)(*(uint *)(lVar15 + 0x50) & 0x1f) & 0x2a8U) != 0)) {
          bVar6 = 0;
          *(undefined1 *)(lVar15 + 0x247d) = 1;
        }
      }
      else {
LAB_00ad910c:
        bVar6 = 0;
        *(undefined4 *)(param_1 + 0x16) = 1;
      }
    }
  }
  else {
    bVar6 = 1;
  }
  puVar7 = PTR_DAT_04bb27c0;
  uVar13 = *(uint *)(*(long *)PTR_DAT_04bb3968 + 0xd20);
  puVar1 = (uint *)(*(long *)PTR_DAT_04bb3968 + 0xa20);
  puVar5 = puVar1 + uVar13;
  if (0x11 < uVar13) {
    puVar5 = puVar1;
  }
  puVar1 = (uint *)PTR_DAT_04bb3238;
  if (uVar13 != 0xffffffff) {
    puVar1 = puVar5;
  }
  uVar13 = *puVar1;
  if (uVar13 == 0) {
    return;
  }
  lVar15 = *(long *)PTR_DAT_04bb27c0;
  if (lVar15 == 0) {
    return;
  }
  plVar16 = *(long **)(*(long *)(*(long *)(lVar15 + 0x1c0) + 8) + ((ulong)(uVar13 >> 0x11) & 0x7ff8)
                      );
  if (((plVar16 == (long *)0x0) || ((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar16 + 0x46) != uVar13)) {
    plVar16 = (long *)0x0;
  }
  if ((*(int *)(lVar15 + 0x288) == 1) || (*(int *)(lVar15 + 0x288) == -1)) {
    plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar15 = *(long *)puVar7;
    iVar10 = (**(code **)(*plVar12 + 0x60))();
    if (iVar10 < 0x11) {
      uVar13 = 1;
    }
    else {
      if (4 < *(uint *)(lVar15 + 0x5e8)) goto LAB_00ad91f0;
      uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar15 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_00ad91f0:
    uVar13 = 0;
  }
  if (plVar16 == (long *)0x0) {
    return;
  }
  lVar15 = plVar16[0x2a];
  if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar10 != 0)) {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  uVar11 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bb37d0);
  uVar2 = 0;
  if ((int)lVar15 == 1) {
    uVar2 = uVar13;
  }
  if ((uVar11 & 1) == 0) {
    return;
  }
  if (uVar2 == 0) {
    return;
  }
  lVar15 = plVar16[0x77];
  if (lVar15 != 0) {
    if (((*(byte *)(lVar15 + 33000) & 1) == 0) || (lVar15 = *(long *)(lVar15 + 0x80f0), lVar15 == 0)
       ) {
      puVar14 = (undefined8 *)0x0;
    }
    else {
      puVar14 = *(undefined8 **)(lVar15 + 0x18);
      if ((*(byte *)(lVar15 + 8) & 10) != 2) {
        puVar14 = (undefined8 *)0x0;
      }
    }
    if (((*PTR_DAT_04bc0c90 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc0c90), iVar10 != 0)) {
      *(undefined **)PTR_DAT_04bc0c88 = PTR_DAT_04bc0c98 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc0c90);
    }
    if ((puVar14 != (undefined8 *)0x0) &&
       (uVar11 = (**(code **)*puVar14)(puVar14,PTR_DAT_04bc0c88), (uVar11 & 1) != 0)) {
      bVar9 = false;
      if (puVar14[0x31] != 0) {
        bVar9 = *(char *)(puVar14[0x31] + 0x1b06c) != '\0';
      }
      goto LAB_00ad92f8;
    }
  }
  bVar9 = true;
LAB_00ad92f8:
  uVar13 = 2;
  if (!(bool)(bVar6 & bVar9)) {
    uVar13 = 0;
  }
  *(uint *)((long)plVar16 + 0x69c) = *(uint *)((long)plVar16 + 0x69c) & 0xfffffffd | uVar13;
  return;
}

