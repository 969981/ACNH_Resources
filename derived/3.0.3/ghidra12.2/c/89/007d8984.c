
void FUN_007d8984(byte *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  byte bVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  long *plVar16;
  uint uVar17;
  long lVar18;
  byte *pbVar19;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined1 uStack_67;
  byte local_66;
  undefined1 local_65;
  
  puVar2 = PTR_DAT_04bb27c0;
  iVar15 = (int)param_2;
  if (*(int *)(param_1 + 4) != 0 && *(int *)(param_1 + 4) != iVar15) {
    return;
  }
  lVar10 = *(long *)PTR_DAT_04bb27c0;
  if (lVar10 == 0) {
    return;
  }
  if ((((iVar15 == 0) ||
       (plVar16 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                            (param_2 >> 0x14 & 0xfff) * 8), plVar16 == (long *)0x0)) ||
      ((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0)) || ((int)plVar16[0x46] != iVar15)) {
    plVar16 = (long *)0x0;
  }
  if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar2;
    iVar5 = (**(code **)(*plVar7 + 0x60))();
    pbVar19 = PTR_DAT_04bb3ff0;
    if (iVar5 < 0x11) {
      uVar17 = 1;
    }
    else {
      if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_007d8a58;
      uVar17 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_007d8a58:
    uVar17 = 0;
    pbVar19 = PTR_DAT_04bb3ff0;
  }
  if (plVar16 == (long *)0x0) {
    PTR_DAT_04bb3ff0 = pbVar19;
    return;
  }
  lVar10 = plVar16[0x2a];
  PTR_DAT_04bb3ff0 = pbVar19;
  if (((*pbVar19 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar19), iVar5 != 0)) {
    *(undefined **)PTR_DAT_04bb3fe8 = PTR_DAT_04bb3fd0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3ff0);
  }
  puVar3 = PTR_DAT_04bb3fe8;
  uVar8 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bb3fe8);
  puVar4 = PTR_DAT_04bbe600;
  puVar9 = (undefined8 *)PTR_DAT_04bb27d0;
  uVar6 = 0;
  if ((int)lVar10 == 1) {
    uVar6 = uVar17;
  }
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (uVar6 == 0) {
    return;
  }
  if (plVar16[0x12] == 0) {
    return;
  }
  if ((*(byte *)(plVar16[0x12] + 0x178) & 1) == 0) {
    return;
  }
  if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
    plVar7 = (long *)plVar16[0x60];
    if (plVar7 == (long *)0x0) {
      if ((long *)plVar16[0x16] != plVar16 + 0x15) {
        lVar10 = (long)*(int *)((long)plVar16 + 0xbc);
        plVar7 = (long *)(plVar16[0x16] - lVar10);
        puVar1 = PTR_DAT_04bbe608 + 0x10;
        do {
          if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
            *(undefined **)PTR_DAT_04bbe5f8 = puVar1;
            __cxa_guard_release(puVar4);
          }
          if ((plVar7 != (long *)0x0) &&
             (uVar8 = (**(code **)(*plVar7 + 0x10))(plVar7,PTR_DAT_04bbe5f8), (uVar8 & 1) != 0))
          goto LAB_007d8b0c;
          plVar7 = (long *)(*(long *)((long)plVar7 + lVar10 + 8) - lVar10);
        } while (plVar7 != (long *)((long)(plVar16 + 0x15) - lVar10));
      }
    }
    else {
LAB_007d8b0c:
      bVar12 = *param_1;
      if (7 < bVar12) {
        bVar12 = 0xff;
      }
      *(byte *)((long)plVar7 + 0x2ea) = bVar12;
    }
    FUN_01947750(plVar16);
    puVar9 = (undefined8 *)PTR_DAT_04bb27d0;
    pbVar19 = PTR_DAT_04bb3ff0;
  }
  else if (((int)plVar16[0x5a] == 0) && (*(char *)((long)plVar16 + 0x32e) == '\0')) {
    FUN_01947ab0(plVar16,param_1);
    FUN_019475a0(plVar16);
  }
  puVar4 = PTR_DAT_04bb4790;
  lVar18 = *(long *)PTR_DAT_04bb4790;
  lVar10 = lVar18 + 0x60;
  if (1 < *(byte *)(*(long *)*puVar9 + 0x476)) {
    if (*(char *)(lVar18 + 0x69) == '\x01') {
      return;
    }
    lVar11 = *(long *)puVar2;
    if (lVar11 == 0) {
      return;
    }
    uVar17 = *(uint *)PTR_DAT_04bb4b88;
    if ((((uVar17 == 0) ||
         (plVar16 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                              ((ulong)(uVar17 >> 0x11) & 0x7ff8)), plVar16 == (long *)0x0)) ||
        ((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar16 + 0x46) != uVar17)) {
      plVar16 = (long *)0x0;
    }
    if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
      plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar11 = *(long *)puVar2;
      iVar5 = (**(code **)(*plVar7 + 0x60))();
      if (iVar5 < 0x11) {
        uVar17 = 1;
      }
      else {
        if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_007d8f14;
        uVar17 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_007d8f14:
      uVar17 = 0;
    }
    if (plVar16 == (long *)0x0) {
      return;
    }
    lVar11 = plVar16[0x2a];
    if (((*PTR_DAT_04bb4b78 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb4b78), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb4b70 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4b78);
    }
    uVar6 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bb4b70);
    local_70 = *(undefined **)PTR_DAT_04bb4b80;
    if ((int)lVar11 != 1) {
      return;
    }
    if ((uVar6 & uVar17) == 0) {
      return;
    }
    uVar8 = FUN_0194c0a0(plVar16,param_2 & 0xffffffff,&local_70);
    if ((uVar8 & 1) == 0) {
      return;
    }
    FUN_018ddabc(lVar10,&local_70);
    FUN_018dc350(*(undefined8 *)puVar4,lVar10);
    uVar8 = FUN_0099434c(*(undefined8 *)puVar4);
    if ((uVar8 & 1) != 0) {
      local_66 = *(byte *)(lVar18 + 0x6a);
      local_65 = *(undefined1 *)(lVar18 + 0x6b);
      if (7 < local_66) {
        local_66 = 0xff;
      }
      local_70 = PTR_DAT_04bb4b90 + 0x10;
      _local_68 = CONCAT11(6,(char)*(undefined2 *)(lVar18 + 0x68));
      FUN_018dbd54(*(undefined8 *)puVar4,&local_70);
    }
    goto LAB_007d9058;
  }
  lVar11 = *(long *)puVar2;
  if (lVar11 == 0) {
LAB_007d8de4:
    local_70 = *(undefined **)PTR_DAT_04bb4b80;
LAB_007d8df4:
    lVar11 = *(long *)puVar2;
joined_r0x007d8df8:
    if (lVar11 == 0) goto LAB_007d9058;
    if (((iVar15 == 0) ||
        (plVar16 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                             (param_2 >> 0x14 & 0xfff) * 8), plVar16 == (long *)0x0)) ||
       (((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0 || ((int)plVar16[0x46] != iVar15)))) {
      plVar16 = (long *)0x0;
    }
    if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
      plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar11 = *(long *)puVar2;
      iVar5 = (**(code **)(*plVar7 + 0x60))();
      if (iVar5 < 0x11) {
        uVar17 = 1;
      }
      else {
        if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_007d8e84;
        uVar17 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_007d8e84:
      uVar17 = 0;
    }
    if (plVar16 == (long *)0x0) goto LAB_007d9058;
    if (((*pbVar19 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3ff0), iVar5 != 0)) {
      *(undefined **)puVar3 = PTR_DAT_04bb3fd0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3ff0);
    }
    uVar6 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bb3fe8);
    if ((((uVar17 & uVar6) != 1) || (uVar17 = (int)plVar16[0x57] - 0x24c, 0x37 < uVar17)) ||
       ((1L << ((ulong)uVar17 & 0x3f) & 0x80000480000001U) == 0)) goto LAB_007d9058;
    puVar9 = &local_78;
    local_78 = CONCAT44((uint)((ulong)*(undefined8 *)PTR_DAT_04bb4b80 >> 0x20) & 0xffffff00,
                        0xffffffff);
  }
  else {
    uVar17 = *(uint *)PTR_DAT_04bb4b88;
    if ((((uVar17 == 0) ||
         (plVar16 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                              ((ulong)(uVar17 >> 0x11) & 0x7ff8)), plVar16 == (long *)0x0)) ||
        ((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar16 + 0x46) != uVar17)) {
      plVar16 = (long *)0x0;
    }
    if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
      plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar11 = *(long *)puVar2;
      iVar5 = (**(code **)(*plVar7 + 0x60))();
      if (iVar5 < 0x11) {
        uVar17 = 1;
      }
      else {
        if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_007d8d54;
        uVar17 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_007d8d54:
      uVar17 = 0;
    }
    if (plVar16 == (long *)0x0) goto LAB_007d8de4;
    lVar11 = plVar16[0x2a];
    if (((*PTR_DAT_04bb4b78 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb4b78), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb4b70 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4b78);
    }
    uVar6 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bb4b70);
    local_70 = *(undefined **)PTR_DAT_04bb4b80;
    if ((((int)lVar11 != 1) || ((uVar6 & uVar17) == 0)) || (plVar16[0x54] == 0)) goto LAB_007d8df4;
    lVar11 = *(long *)(plVar16[0x54] + 0x290);
    if (*(int *)(lVar11 + 0x10) == 0) {
LAB_007d907c:
      uVar8 = (ulong)local_70 >> 0x20;
      local_70 = (undefined *)CONCAT44((uint)uVar8 & 0xffffff00,0xffffffff);
      lVar11 = *(long *)puVar2;
      goto joined_r0x007d8df8;
    }
    if (**(int **)(lVar11 + 0x18) == iVar15) {
      lVar14 = 0;
      uVar13 = 0;
    }
    else {
      uVar8 = 0;
      do {
        uVar13 = uVar8 + 1;
        iVar5 = (int)uVar13;
        if (*(int *)(lVar11 + 0x10) == iVar5) goto LAB_007d907c;
        uVar8 = uVar13 & 0xffffffff;
      } while (*(int *)((long)*(int **)(lVar11 + 0x18) +
                       (-(uVar13 >> 0x1f & 1) & 0xfffffffc00000000 | uVar13 * 4 & 0x3fffffffc)) !=
               iVar15);
      if (iVar5 == -1) goto LAB_007d907c;
      lVar14 = (long)iVar5;
    }
    puVar9 = &local_70;
    if (*(uint *)(lVar11 + 0x20) <= (uint)uVar13) {
      lVar14 = 0;
    }
    uVar8 = (ulong)local_70 >> 0x28;
    local_70._5_3_ = (undefined3)uVar8;
    local_70._0_5_ = CONCAT14(*(undefined1 *)(*(long *)(lVar11 + 0x28) + lVar14),(uint)uVar13);
  }
  FUN_018ddabc(lVar10,puVar9);
  *(undefined1 *)(lVar18 + 0x69) = 2;
LAB_007d9058:
  *(int *)(param_1 + 4) = iVar15;
  return;
}

