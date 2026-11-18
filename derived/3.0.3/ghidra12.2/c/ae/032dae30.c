
/* WARNING: Removing unreachable block (ram,0x032db910) */
/* WARNING: Removing unreachable block (ram,0x032db79c) */
/* WARNING: Removing unreachable block (ram,0x032db6f8) */
/* WARNING: Removing unreachable block (ram,0x032db628) */
/* WARNING: Removing unreachable block (ram,0x032daea8) */
/* WARNING: Removing unreachable block (ram,0x032db6d4) */
/* WARNING: Removing unreachable block (ram,0x032db768) */
/* WARNING: Removing unreachable block (ram,0x032db854) */
/* WARNING: Removing unreachable block (ram,0x032db9c8) */

void FUN_032dae30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined2 uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *__s;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  void *pvVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined **ppuVar20;
  long lVar21;
  undefined4 *puVar22;
  undefined8 *puVar23;
  long *plVar24;
  undefined8 *puVar25;
  int iVar26;
  undefined4 *puVar27;
  int local_f8;
  undefined2 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c0 [22];
  undefined8 local_68;
  
  puVar25 = (undefined8 *)*param_2;
  local_c0[0] = 0;
  puVar1 = param_2 + 0x219;
  *param_1 = puVar25;
  puVar15 = param_2 + 0x85a;
  param_1[5] = param_2[2];
  param_1[6] = param_2[3];
  param_1[4] = param_2[1];
  __s = (undefined4 *)(**(code **)(*(long *)*puVar25 + 0x30))((long *)*puVar25,0x170e0,8);
  puVar27 = __s + 0x1a06;
  memset(__s,0,0x170e0);
  FUN_00353610(__s);
  puVar5 = PTR_FUN_04bc9500;
  lVar19 = 0;
  *__s = *(undefined4 *)(param_2 + 4);
  uVar3 = *(undefined4 *)((long)param_2 + 0x24);
  *(undefined **)(__s + 2) = puVar5;
  *(undefined8 **)(__s + 4) = puVar25;
  __s[1] = uVar3;
  *(undefined8 *)(__s + 0x5a2a) = param_2[0x205];
  __s[0x5a2c] = *(undefined4 *)(param_2 + 0x206);
  uVar3 = *(undefined4 *)((long)param_2 + 0x1034);
  *(undefined1 *)((long)__s + 0x170d9) = 0;
  __s[0x5a06] = uVar3;
  do {
    lVar21 = 0;
    puVar22 = puVar27;
    puVar23 = puVar15;
    do {
      *(undefined8 *)(__s + lVar19 * 0x20 + lVar21 * 2 + 6) =
           param_2[lVar19 * 0x10 + lVar21 + 0x21a];
      *(undefined1 *)((long)__s + lVar19 * 0x10 + lVar21 + 0x2818) =
           *(undefined1 *)((long)param_2 + lVar19 * 0x10 + lVar21 + 0x20d0);
      __s[lVar19 * 0x10 + lVar21 + 0xe86] =
           *(undefined4 *)((long)param_2 + lVar19 * 0x40 + lVar21 * 4 + 0x22d0);
      *(undefined8 *)(__s + lVar19 * 0x20 + lVar21 * 2 + 0x406) =
           param_2[lVar21 + lVar19 * 0x10 + 0x55a];
      uVar10 = *(uint *)((long)param_2 + lVar21 * 4 + lVar19 * 0x40 + 0x3ad0);
      __s[lVar19 * 0x10 + lVar21 + 0x1806] = uVar10;
      if (uVar10 != 0) {
        if (uVar10 == 1) {
          lVar16 = 0;
        }
        else {
          lVar16 = 0;
          puVar17 = puVar22;
          puVar18 = puVar23;
          do {
            lVar16 = lVar16 + -2;
            *puVar17 = *(undefined4 *)puVar18;
            puVar17[0x2000] = *(undefined4 *)(puVar18 + 0x1000);
            puVar17[1] = *(undefined4 *)((long)puVar18 + 4);
            puVar17[0x2001] = *(undefined4 *)((long)puVar18 + 0x8004);
            puVar17 = puVar17 + 2;
            puVar18 = puVar18 + 1;
          } while (-lVar16 != ((ulong)uVar10 & 0xfffffffe));
          lVar16 = -lVar16;
          if ((uVar10 & 1) == 0) goto LAB_032daf64;
        }
        lVar4 = lVar16 * 4 + lVar21 * 0x40 + lVar19 * 0x400;
        __s[lVar19 * 0x100 + lVar21 * 0x10 + lVar16 + 0x1a06] =
             *(undefined4 *)((long)param_2 + lVar4 + 0x42d0);
        __s[lVar19 * 0x100 + lVar21 * 0x10 + lVar16 + 0x3a06] =
             *(undefined4 *)((long)param_2 + lVar4 + 0xc2d0);
      }
LAB_032daf64:
      lVar21 = lVar21 + 1;
      puVar23 = puVar23 + 8;
      puVar22 = puVar22 + 0x10;
    } while (lVar21 != 0x10);
    lVar19 = lVar19 + 1;
    puVar15 = puVar15 + 0x80;
    puVar27 = puVar27 + 0x100;
  } while (lVar19 != 0x20);
  __s[0x5a07] = *(undefined4 *)((long)param_2 + 0x103c);
  __s[0x5a08] = *(undefined4 *)(param_2 + 0x208);
  __s[0x5a09] = *(undefined4 *)((long)param_2 + 0x1044);
  __s[0x5a0a] = *(undefined4 *)(param_2 + 0x209);
  __s[0x5a0b] = *(undefined4 *)((long)param_2 + 0x104c);
  __s[0x5a0c] = *(undefined4 *)(param_2 + 0x20a);
  __s[0x5a0d] = *(undefined4 *)((long)param_2 + 0x1054);
  __s[0x5a0e] = *(undefined4 *)(param_2 + 0x20b);
  __s[0x5a0f] = *(undefined4 *)((long)param_2 + 0x105c);
  __s[0x5a10] = *(undefined4 *)(param_2 + 0x20c);
  __s[0x5a11] = *(undefined4 *)((long)param_2 + 0x1064);
  __s[0x5a12] = *(undefined4 *)(param_2 + 0x20d);
  __s[0x5a13] = *(undefined4 *)((long)param_2 + 0x106c);
  __s[0x5a14] = *(undefined4 *)(param_2 + 0x20e);
  __s[0x5a15] = *(undefined4 *)((long)param_2 + 0x1074);
  __s[0x5a16] = *(undefined4 *)(param_2 + 0x20f);
  __s[0x5a17] = *(undefined4 *)((long)param_2 + 0x107c);
  __s[0x5a18] = *(undefined4 *)(param_2 + 0x210);
  __s[0x5a19] = *(undefined4 *)((long)param_2 + 0x1084);
  __s[0x5a1a] = *(undefined4 *)(param_2 + 0x211);
  __s[0x5a1b] = *(undefined4 *)((long)param_2 + 0x108c);
  __s[0x5a1c] = *(undefined4 *)(param_2 + 0x212);
  __s[0x5a1d] = *(undefined4 *)((long)param_2 + 0x1094);
  __s[0x5a1e] = *(undefined4 *)(param_2 + 0x213);
  __s[0x5a1f] = *(undefined4 *)((long)param_2 + 0x109c);
  __s[0x5a20] = *(undefined4 *)(param_2 + 0x214);
  __s[0x5a21] = *(undefined4 *)((long)param_2 + 0x10a4);
  __s[0x5a22] = *(undefined4 *)(param_2 + 0x215);
  __s[0x5a23] = *(undefined4 *)((long)param_2 + 0x10ac);
  __s[0x5a24] = *(undefined4 *)(param_2 + 0x216);
  __s[0x5a25] = *(undefined4 *)((long)param_2 + 0x10b4);
  puVar5 = PTR_DAT_04bb2718;
  __s[0x5a26] = *(undefined4 *)(param_2 + 0x217);
  puVar7 = PTR_DAT_04bc92f0;
  if (*(long *)(*(long *)puVar5 + 0x400) == 0) {
    local_f0 = 0;
    local_e8 = 0;
    iVar26 = 0;
    iVar9 = 0;
    uVar10 = 0;
    uVar8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_f8 = 0;
    local_f4 = 0;
    local_d0 = 0;
  }
  else {
    (**(code **)(**(long **)PTR_DAT_04bc92f0 + 0x20))();
    iVar9 = FUN_032c5240();
    if (iVar9 - 0xcU < 3) {
      ppuVar20 = (undefined **)(&PTR_PTR_04b1be08)[(int)(iVar9 - 0xcU)];
    }
    else {
      ppuVar20 = &PTR_s_System_00_04b1bde8;
    }
    local_68 = 0;
    lVar19 = *(long *)(*(long *)puVar5 + 0x400);
    FUN_0071b954(local_c0,"%s.bfcpx",*ppuVar20);
    plVar24 = *(long **)(lVar19 + 0x28);
    if (((*PTR_DAT_04bb2868 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar9 != 0)) {
      *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2868);
    }
    puVar6 = PTR_DAT_04bb2860;
    uVar11 = (**(code **)*plVar24)(plVar24,PTR_DAT_04bb2860);
    if ((uVar11 & 1) == 0) {
      plVar24 = (long *)0x0;
    }
    lVar19 = (**(code **)(*plVar24 + 0x30))(plVar24,local_c0,&local_68);
    uVar8 = FUN_0038d284(__s,&LAB_032dbb90,0,lVar19);
    (**(code **)(**(long **)puVar7 + 0x20))();
    FUN_032c5240();
    piVar2 = (int *)(lVar19 + 0x14 + (ulong)*(uint *)(lVar19 + 0x14));
    if (*piVar2 == 1) {
      local_f8 = (int)(float)piVar2[1];
      local_d0 = CONCAT44(piVar2[2],(uint)*(ushort *)(piVar2 + 5));
    }
    else {
      local_d0 = 0;
      local_f8 = 0;
    }
    (**(code **)(**(long **)puVar7 + 0x20))();
    iVar9 = FUN_032c5240();
    if (iVar9 - 0xcU < 3) {
      ppuVar20 = (undefined **)(&PTR_PTR_04b1be08)[(int)(iVar9 - 0xcU)];
    }
    else {
      ppuVar20 = &PTR_s_System_00_04b1bde8;
    }
    local_68 = 0;
    lVar19 = *(long *)(*(long *)puVar5 + 0x400);
    FUN_0071b954(local_c0,"%s.bfcpx",ppuVar20[1]);
    plVar24 = *(long **)(lVar19 + 0x28);
    if (((*PTR_DAT_04bb2868 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar9 != 0)) {
      *(undefined **)puVar6 = PTR_DAT_04bb2870 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2868);
    }
    puVar6 = PTR_DAT_04bb2860;
    uVar11 = (**(code **)*plVar24)(plVar24,PTR_DAT_04bb2860);
    if ((uVar11 & 1) == 0) {
      plVar24 = (long *)0x0;
    }
    lVar19 = (**(code **)(*plVar24 + 0x30))(plVar24,local_c0,&local_68);
    uVar10 = FUN_0038d284(__s,&LAB_032dbb90,0,lVar19);
    (**(code **)(**(long **)puVar7 + 0x20))();
    FUN_032c5240();
    piVar2 = (int *)(lVar19 + 0x14 + (ulong)*(uint *)(lVar19 + 0x14));
    if (*piVar2 == 1) {
      local_d8 = CONCAT44(uVar10,piVar2[2]);
      local_e0 = (ulong)CONCAT24((short)piVar2[5],(int)(float)piVar2[1]);
    }
    else {
      local_d8 = (ulong)uVar10 << 0x20;
      local_e0 = 0;
    }
    (**(code **)(**(long **)puVar7 + 0x20))();
    iVar9 = FUN_032c5240();
    if (iVar9 - 0xcU < 3) {
      ppuVar20 = (undefined **)(&PTR_PTR_04b1be08)[(int)(iVar9 - 0xcU)];
    }
    else {
      ppuVar20 = &PTR_s_System_00_04b1bde8;
    }
    local_68 = 0;
    lVar19 = *(long *)(*(long *)puVar5 + 0x400);
    FUN_0071b954(local_c0,"%s.bfcpx",ppuVar20[2]);
    plVar24 = *(long **)(lVar19 + 0x28);
    if (((*PTR_DAT_04bb2868 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar9 != 0)) {
      *(undefined **)puVar6 = PTR_DAT_04bb2870 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2868);
    }
    puVar6 = PTR_DAT_04bb2860;
    uVar11 = (**(code **)*plVar24)(plVar24,PTR_DAT_04bb2860);
    if ((uVar11 & 1) == 0) {
      plVar24 = (long *)0x0;
    }
    lVar19 = (**(code **)(*plVar24 + 0x30))(plVar24,local_c0,&local_68);
    uVar10 = FUN_0038d284(__s,&LAB_032dbb90,0,lVar19);
    (**(code **)(**(long **)puVar7 + 0x20))();
    FUN_032c5240();
    piVar2 = (int *)(lVar19 + 0x14 + (ulong)*(uint *)(lVar19 + 0x14));
    if (*piVar2 == 1) {
      local_e8 = CONCAT44(uVar10,piVar2[2]);
      local_f0 = (ulong)CONCAT24((short)piVar2[5],(int)(float)piVar2[1]);
    }
    else {
      local_e8 = (ulong)uVar10 << 0x20;
      local_f0 = 0;
    }
    (**(code **)(**(long **)puVar7 + 0x20))();
    iVar9 = FUN_032c5240();
    if (iVar9 - 0xcU < 3) {
      ppuVar20 = (undefined **)(&PTR_PTR_04b1be08)[(int)(iVar9 - 0xcU)];
    }
    else {
      ppuVar20 = &PTR_s_System_00_04b1bde8;
    }
    local_68 = 0;
    lVar19 = *(long *)(*(long *)puVar5 + 0x400);
    FUN_0071b954(local_c0,"%s.bfcpx",ppuVar20[3]);
    plVar24 = *(long **)(lVar19 + 0x28);
    if (((*PTR_DAT_04bb2868 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar9 != 0)) {
      *(undefined **)puVar6 = PTR_DAT_04bb2870 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2868);
    }
    uVar11 = (**(code **)*plVar24)(plVar24,PTR_DAT_04bb2860);
    if ((uVar11 & 1) == 0) {
      plVar24 = (long *)0x0;
    }
    lVar19 = (**(code **)(*plVar24 + 0x30))(plVar24,local_c0,&local_68);
    local_f4 = FUN_0038d284(__s,&LAB_032dbb90,0,lVar19);
    (**(code **)(**(long **)puVar7 + 0x20))();
    FUN_032c5240();
    piVar2 = (int *)(lVar19 + 0x14 + (ulong)*(uint *)(lVar19 + 0x14));
    if (*piVar2 == 1) {
      iVar9 = piVar2[2];
      uVar10 = (uint)*(ushort *)(piVar2 + 5);
      iVar26 = (int)(float)piVar2[1];
    }
    else {
      iVar26 = 0;
      iVar9 = 0;
      uVar10 = 0;
    }
  }
  local_c0[0] = 0;
  uVar12 = (**(code **)(*(long *)*puVar25 + 0x30))((long *)*puVar25,0x1ec8,8);
  FUN_00353970();
  plVar24 = (long *)param_1[3];
  param_1[3] = uVar12;
  if (plVar24 != (long *)0x0) {
    (**(code **)(*plVar24 + 8))();
    uVar12 = param_1[3];
  }
  FUN_00353c00(uVar12,param_1[4],__s,0,0,0);
  FUN_00354f4c(param_1[3],param_1[5],0);
  puVar5 = PTR_DAT_04bb2698;
  if (*(long *)PTR_DAT_04bb2698 == 0) {
    free(__s);
  }
  else {
    plVar24 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__s);
    if (plVar24 != (long *)0x0) {
      (**(code **)(*plVar24 + 0x38))(plVar24,__s);
    }
  }
  local_c0[0] = 0;
  plVar24 = (long *)*param_1;
  (**(code **)(*(long *)*plVar24 + 0x78))();
  local_c0[0] = 0;
  lVar19 = *(long *)puVar5;
  if (lVar19 == 0) {
    pvVar14 = malloc(0x20);
  }
  else {
    plVar13 = (long *)*plVar24;
    if (plVar13 == (long *)0x0) {
      lVar21 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar13 = (long *)(lVar19 + 8);
      if (lVar21 != 0) {
        plVar13 = (long *)(lVar21 + 0xa8);
      }
      plVar13 = (long *)*plVar13;
      if (plVar13 == (long *)0x0) goto LAB_032db754;
    }
    pvVar14 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,0x20,8);
  }
  if (pvVar14 != (void *)0x0) {
    param_1[1] = 0x400000000;
    param_1[2] = pvVar14;
  }
LAB_032db754:
  local_c0[0] = 0;
  puVar15 = (undefined8 *)(**(code **)(*(long *)*plVar24 + 0x30))((long *)*plVar24,0x20,8);
  *puVar15 = 0;
  puVar15[1] = 0;
  puVar15[2] = 0;
  puVar15[3] = 0;
  local_c0[0] = 0;
  plVar13 = (long *)(**(code **)(*(long *)*plVar24 + 0x30))((long *)*plVar24,0x38,8);
  FUN_003522e4();
  FUN_003522cc(puVar15);
  uVar12 = param_1[3];
  *(int *)(puVar15 + 1) = local_f8;
  *(undefined2 *)((long)puVar15 + 0xc) = uVar8;
  *(undefined1 *)(puVar15 + 3) = 0;
  *(undefined1 *)((long)puVar15 + 0xf) = 1;
  *puVar15 = uVar12;
  *(undefined4 *)(puVar15 + 2) = (undefined4)local_d0;
  *(undefined4 *)((long)puVar15 + 0x14) = local_d0._4_4_;
  FUN_00352370(plVar13,puVar15);
  (**(code **)(*plVar13 + 0x78))(plVar13,0x25a1);
  FUN_00352450(plVar13);
  *(undefined1 *)(plVar13 + 1) = *(undefined1 *)puVar1;
  if (*(int *)(param_1 + 1) < *(int *)((long)param_1 + 0xc)) {
    *(long **)(param_1[2] + (long)*(int *)(param_1 + 1) * 8) = plVar13;
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  }
  local_c0[0] = 0;
  plVar13 = (long *)(**(code **)(*(long *)*plVar24 + 0x30))((long *)*plVar24,0x38,8);
  FUN_003522e4();
  FUN_003522cc(puVar15);
  uVar12 = param_1[3];
  *(undefined1 *)(puVar15 + 3) = 0;
  *(undefined1 *)((long)puVar15 + 0xf) = 1;
  *(short *)((long)puVar15 + 0xc) = (short)((ulong)local_d8 >> 0x20);
  *puVar15 = uVar12;
  *(undefined4 *)(puVar15 + 1) = (undefined4)local_e0;
  *(undefined4 *)(puVar15 + 2) = local_e0._4_4_;
  *(undefined4 *)((long)puVar15 + 0x14) = (undefined4)local_d8;
  FUN_00352370(plVar13,puVar15);
  (**(code **)(*plVar13 + 0x78))(plVar13,0x25a1);
  FUN_00352450(plVar13);
  *(undefined1 *)(plVar13 + 1) = *(undefined1 *)puVar1;
  if (*(int *)(param_1 + 1) < *(int *)((long)param_1 + 0xc)) {
    *(long **)(param_1[2] + (long)*(int *)(param_1 + 1) * 8) = plVar13;
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  }
  local_c0[0] = 0;
  plVar13 = (long *)(**(code **)(*(long *)*plVar24 + 0x30))((long *)*plVar24,0x38,8);
  FUN_003522e4();
  FUN_003522cc(puVar15);
  uVar12 = param_1[3];
  *(undefined1 *)(puVar15 + 3) = 0;
  *(undefined1 *)((long)puVar15 + 0xf) = 1;
  *(short *)((long)puVar15 + 0xc) = (short)((ulong)local_e8 >> 0x20);
  *puVar15 = uVar12;
  *(undefined4 *)(puVar15 + 1) = (undefined4)local_f0;
  *(undefined4 *)(puVar15 + 2) = local_f0._4_4_;
  *(undefined4 *)((long)puVar15 + 0x14) = (undefined4)local_e8;
  FUN_00352370(plVar13,puVar15);
  (**(code **)(*plVar13 + 0x78))(plVar13,0x25a1);
  FUN_00352450(plVar13);
  *(undefined1 *)(plVar13 + 1) = *(undefined1 *)puVar1;
  if (*(int *)(param_1 + 1) < *(int *)((long)param_1 + 0xc)) {
    *(long **)(param_1[2] + (long)*(int *)(param_1 + 1) * 8) = plVar13;
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  }
  local_c0[0] = 0;
  plVar24 = (long *)(**(code **)(*(long *)*plVar24 + 0x30))((long *)*plVar24,0x38,8);
  FUN_003522e4();
  FUN_003522cc(puVar15);
  uVar12 = param_1[3];
  *(int *)(puVar15 + 1) = iVar26;
  *(undefined1 *)(puVar15 + 3) = 0;
  *(undefined1 *)((long)puVar15 + 0xf) = 1;
  *(uint *)(puVar15 + 2) = uVar10;
  *(int *)((long)puVar15 + 0x14) = iVar9;
  *(undefined2 *)((long)puVar15 + 0xc) = local_f4;
  *puVar15 = uVar12;
  FUN_00352370(plVar24,puVar15);
  (**(code **)(*plVar24 + 0x78))(plVar24,0x25a1);
  FUN_00352450(plVar24);
  *(undefined1 *)(plVar24 + 1) = *(undefined1 *)puVar1;
  if (*(int *)(param_1 + 1) < *(int *)((long)param_1 + 0xc)) {
    *(long **)(param_1[2] + (long)*(int *)(param_1 + 1) * 8) = plVar24;
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  }
  lVar19 = *(long *)puVar5;
  if (lVar19 == 0) {
    free(puVar15);
  }
  else {
    plVar24 = (long *)FUN_038cb610(lVar19,puVar15);
    if (plVar24 != (long *)0x0) {
      (**(code **)(*plVar24 + 0x38))(plVar24,puVar15);
    }
  }
  return;
}

