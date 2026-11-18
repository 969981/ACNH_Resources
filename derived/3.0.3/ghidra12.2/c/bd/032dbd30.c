
/* WARNING: Removing unreachable block (ram,0x032dc760) */
/* WARNING: Removing unreachable block (ram,0x032dc158) */
/* WARNING: Removing unreachable block (ram,0x032dbe78) */
/* WARNING: Removing unreachable block (ram,0x032dbdd4) */
/* WARNING: Removing unreachable block (ram,0x032dbdac) */
/* WARNING: Removing unreachable block (ram,0x032dbe0c) */
/* WARNING: Removing unreachable block (ram,0x032dbed8) */
/* WARNING: Removing unreachable block (ram,0x032dc3e8) */
/* WARNING: Removing unreachable block (ram,0x032dc7e0) */

void FUN_032dbd30(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  int iVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  void *pvVar18;
  undefined8 uVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  ulong uVar24;
  undefined *puVar25;
  ulong *puVar26;
  long *plVar27;
  undefined *puStack_14350;
  char *pcStack_14348;
  undefined4 uStack_1433c;
  undefined8 uStack_14338;
  undefined8 uStack_14330;
  undefined8 uStack_14328;
  undefined8 uStack_14320;
  undefined8 uStack_14318;
  undefined4 auStack_14310 [1024];
  undefined8 uStack_13310;
  undefined4 uStack_13308;
  undefined4 uStack_13304;
  undefined4 uStack_13300;
  uint uStack_132fc;
  undefined8 uStack_132f8;
  undefined8 uStack_132f0;
  undefined8 uStack_132e8;
  undefined8 uStack_132e0;
  undefined8 uStack_132d8;
  undefined8 uStack_132d0;
  undefined8 uStack_132c8;
  undefined8 uStack_132c0;
  undefined8 uStack_132b8;
  undefined8 uStack_132b0;
  undefined8 uStack_132a8;
  undefined8 uStack_132a0;
  undefined8 uStack_13298;
  undefined8 uStack_13290;
  undefined8 uStack_13288;
  undefined4 uStack_13280;
  undefined *puStack_13278;
  undefined1 uStack_13270;
  undefined8 auStack_13268 [576];
  undefined4 auStack_12068 [512];
  undefined8 auStack_11868 [512];
  undefined8 auStack_10868 [8449];
  
  lVar22 = param_2[2];
  *(long *)(param_1 + 0x100) = lVar22;
  lVar21 = param_2[3];
  *(long *)(param_1 + 0x108) = lVar21;
  if (lVar22 == 0) {
    *(undefined **)(param_1 + 0x100) = PTR_FUN_04bc8dd8;
    if (lVar21 != 0) goto LAB_032dbd74;
LAB_032dbe2c:
    *(undefined **)(param_1 + 0x108) = PTR_LAB_04bc8de8;
    lVar21 = param_2[1];
  }
  else {
    if (lVar21 == 0) goto LAB_032dbe2c;
LAB_032dbd74:
    lVar21 = param_2[1];
  }
  if (lVar21 == 0) {
    lVar21 = *(long *)(*(long *)PTR_DAT_04bbd7c0 + 0x48);
  }
  *(long *)(param_1 + 0x48) = lVar21;
  puVar25 = PTR_DAT_04bb2020;
  puStack_14350 = PTR_DAT_04bb2020 + 0x10;
  pcStack_14348 = "FontHeap";
  uStack_14338 = (ulong *)0x0;
  uStack_14330 = (char *)0x0;
  if (*(long *)*param_2 != 0) {
    uStack_14338 = (ulong *)FUN_038c6d48(0,&puStack_14350,*(long *)*param_2,8,1,1);
    uStack_1433c = 0;
  }
  uVar24 = (ulong)uStack_14338;
  uStack_14338 = (ulong *)((ulong)uStack_14338 & 0xffffffff00000000);
  puVar26 = (ulong *)(param_1 + 8);
  *puVar26 = uVar24;
  *(char **)(param_1 + 0x10) = uStack_14330;
  plVar27 = (long *)PTR_DAT_04bb3350;
  uVar24 = *puVar26;
  if (uVar24 == 0) {
    lVar21 = 1;
  }
  else {
    lVar22 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar21 = *(long *)(lVar22 + 0xa8);
    *(ulong *)(lVar22 + 0xa8) = uVar24;
  }
  plVar20 = (long *)PTR_DAT_04bb2698;
  uStack_14338 = (ulong *)((ulong)uStack_14338 & 0xffffffff00000000);
  uVar23 = param_2[5];
  uVar12 = param_2[4];
  uVar10 = *(undefined4 *)(param_2 + 6);
  lVar22 = *(long *)PTR_DAT_04bb2698;
  if (lVar22 == 0) {
    puVar17 = malloc(0x668);
    puVar1 = PTR_DAT_04bc95f0;
joined_r0x032dc464:
    PTR_DAT_04bc95f0 = puVar1;
    if (puVar17 != (undefined8 *)0x0) {
      *puVar17 = 6;
      puVar17[4] = 0;
      puVar17[5] = 0x20;
      puVar25 = puVar25 + 0x10;
      puVar1 = puVar1 + 0x10;
      puVar17[1] = puVar1;
      puVar2 = PTR_DAT_04bc8e60;
      puVar13 = PTR_DAT_04bb2120;
      *(undefined2 *)(puVar17 + 0xc) = 0x101;
      *(undefined1 *)((long)puVar17 + 0x62) = 0;
      puVar2 = puVar2 + 0x10;
      puVar17[2] = puVar25;
      puVar17[3] = puVar13;
      puVar17[6] = puVar2;
      puVar17[7] = 0;
      puVar3 = PTR_DAT_04bc8e68 + 0x10;
      uStack_14330 = (char *)&DAT_0407ebb1;
      uStack_14338 = (ulong *)puVar3;
      FUN_032e24f4(puVar17 + 0xd,&uStack_14338);
      puVar4 = PTR_DAT_04bc9600;
      puVar17[0x1c] = puVar2;
      puVar17[0x1d] = 0;
      puVar17[0x22] = 0;
      puVar17[0x23] = puVar1;
      puVar4 = puVar4 + 0x10;
      puVar17[0x24] = puVar25;
      puVar17[0x25] = puVar13;
      *(undefined2 *)(puVar17 + 0x2e) = 0x101;
      *(undefined1 *)((long)puVar17 + 0x172) = 0;
      puVar17[0xd] = puVar4;
      puVar17[0x26] = 0;
      puVar17[0x27] = 0x20;
      puVar17[0x28] = puVar2;
      puVar17[0x29] = 0;
      uStack_14330 = (char *)&DAT_0407ebb1;
      uStack_14338 = (ulong *)puVar3;
      FUN_032e24f4(puVar17 + 0x2f,&uStack_14338);
      puVar17[0x2f] = puVar4;
      puVar17[0x3e] = puVar2;
      puVar17[0x3f] = 0;
      puVar17[0x44] = 0;
      puVar17[0x45] = puVar1;
      puVar17[0x46] = puVar25;
      puVar13 = PTR_DAT_04bb2120;
      puVar17[0x48] = 0;
      puVar17[0x49] = 0x20;
      puVar17[0x4a] = puVar2;
      puVar17[0x4b] = 0;
      puVar17[0x47] = puVar13;
      *(undefined2 *)(puVar17 + 0x50) = 0x101;
      *(undefined1 *)((long)puVar17 + 0x282) = 0;
      uStack_14330 = (char *)&DAT_0407ebb1;
      uStack_14338 = (ulong *)puVar3;
      FUN_032e24f4(puVar17 + 0x51,&uStack_14338);
      puVar17[0x51] = puVar4;
      puVar17[0x60] = puVar2;
      puVar17[0x61] = 0;
      puVar17[0x66] = 0;
      puVar17[0x67] = puVar1;
      puVar17[0x68] = puVar25;
      puVar17[0x69] = puVar13;
      puVar17[0x6a] = 0;
      puVar17[0x6b] = 0x20;
      puVar17[0x6c] = puVar2;
      puVar17[0x6d] = 0;
      *(undefined2 *)(puVar17 + 0x72) = 0x101;
      *(undefined1 *)((long)puVar17 + 0x392) = 0;
      uStack_14330 = (char *)&DAT_0407ebb1;
      uStack_14338 = (ulong *)puVar3;
      FUN_032e24f4(puVar17 + 0x73,&uStack_14338);
      puVar17[0x73] = puVar4;
      puVar17[0x82] = puVar2;
      puVar17[0x83] = 0;
      puVar17[0x88] = 0;
      puVar17[0x89] = puVar1;
      puVar17[0x8a] = puVar25;
      puVar17[0x8b] = puVar13;
      puVar17[0x8c] = 0;
      puVar17[0x8d] = 0x20;
      puVar17[0x8e] = puVar2;
      puVar17[0x8f] = 0;
      *(undefined2 *)(puVar17 + 0x94) = 0x101;
      *(undefined1 *)((long)puVar17 + 0x4a2) = 0;
      uStack_14330 = (char *)&DAT_0407ebb1;
      uStack_14338 = (ulong *)puVar3;
      FUN_032e24f4(puVar17 + 0x95,&uStack_14338);
      puVar17[0x95] = puVar4;
      puVar17[0xa4] = puVar2;
      puVar17[0xa5] = 0;
      puVar17[0xaa] = 0;
      puVar17[0xab] = puVar1;
      puVar17[0xac] = puVar25;
      plVar20 = (long *)PTR_DAT_04bb2698;
      puVar17[0xad] = puVar13;
      puVar17[0xae] = 0;
      puVar17[0xaf] = 0x20;
      puVar17[0xb0] = puVar2;
      puVar17[0xb1] = 0;
      *(undefined2 *)(puVar17 + 0xb6) = 0x101;
      puVar25 = PTR_DAT_04bb2020;
      *(undefined1 *)((long)puVar17 + 0x5b2) = 0;
      uStack_14330 = (char *)&DAT_0407ebb1;
      uStack_14338 = (ulong *)puVar3;
      FUN_032e24f4(puVar17 + 0xb7,&uStack_14338);
      puVar17[0xb7] = puVar4;
      plVar27 = (long *)PTR_DAT_04bb3350;
      puVar17[0xc6] = puVar2;
      puVar17[199] = 0;
      puVar17[0xcc] = 0;
      *(undefined4 *)(param_1 + 0x18) = 6;
      *(undefined8 **)(param_1 + 0x20) = puVar17 + 1;
    }
  }
  else {
    plVar15 = (long *)*puVar26;
    if (plVar15 != (long *)0x0) {
LAB_032dbf0c:
      puVar17 = (undefined8 *)(**(code **)(*plVar15 + 0x30))(plVar15,0x668,8);
      puVar1 = PTR_DAT_04bc95f0;
      goto joined_r0x032dc464;
    }
    lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
    plVar15 = (long *)(lVar22 + 8);
    if (lVar16 != 0) {
      plVar15 = (long *)(lVar16 + 0xa8);
    }
    plVar15 = (long *)*plVar15;
    if (plVar15 != (long *)0x0) goto LAB_032dbf0c;
  }
  uStack_14338 = (ulong *)((ulong)uStack_14338 & 0xffffffff00000000);
  lVar22 = *plVar20;
  if (lVar22 == 0) {
    pvVar18 = malloc(0x30);
  }
  else {
    plVar15 = (long *)*puVar26;
    if (plVar15 == (long *)0x0) {
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
      plVar15 = (long *)(lVar22 + 8);
      if (lVar16 != 0) {
        plVar15 = (long *)(lVar16 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
      if (plVar15 == (long *)0x0) goto LAB_032dc1b0;
    }
    pvVar18 = (void *)(**(code **)(*plVar15 + 0x30))(plVar15,0x30,8);
  }
  if (pvVar18 != (void *)0x0) {
    *(void **)(param_1 + 0x30) = pvVar18;
    *(undefined4 *)(param_1 + 0x28) = 6;
  }
LAB_032dc1b0:
  lVar22 = *(long *)PTR_DAT_04bb29d0 / 10;
  while (iVar14 = nn::pl::GetSharedFontLoadState(0), iVar14 == 0) {
    nn::os::ConvertToTimeSpan(lVar22);
    nn::os::SleepThread();
  }
  uVar19 = nn::pl::GetSharedFontAddress(0);
  **(undefined8 **)(param_1 + 0x30) = uVar19;
  uVar19 = nn::pl::GetSharedFontSize(0);
  *(undefined8 *)(param_1 + 0x1e8) = uVar19;
  while (iVar14 = nn::pl::GetSharedFontLoadState(1), iVar14 == 0) {
    nn::os::ConvertToTimeSpan(lVar22);
    nn::os::SleepThread();
  }
  uVar19 = nn::pl::GetSharedFontAddress(1);
  *(undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)(1 < *(uint *)(param_1 + 0x28)) * 8) = uVar19;
  uVar19 = nn::pl::GetSharedFontSize(1);
  *(undefined8 *)(param_1 + 0x1f0) = uVar19;
  while (iVar14 = nn::pl::GetSharedFontLoadState(2), iVar14 == 0) {
    nn::os::ConvertToTimeSpan(lVar22);
    nn::os::SleepThread();
  }
  uVar19 = nn::pl::GetSharedFontAddress(2);
  *(undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)(2 < *(uint *)(param_1 + 0x28)) * 0x10) =
       uVar19;
  uVar19 = nn::pl::GetSharedFontSize(2);
  *(undefined8 *)(param_1 + 0x1f8) = uVar19;
  while (iVar14 = nn::pl::GetSharedFontLoadState(3), iVar14 == 0) {
    nn::os::ConvertToTimeSpan(lVar22);
    nn::os::SleepThread();
  }
  uVar19 = nn::pl::GetSharedFontAddress(3);
  lVar16 = 0x18;
  if (*(uint *)(param_1 + 0x28) < 4) {
    lVar16 = 0;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x30) + lVar16) = uVar19;
  uVar19 = nn::pl::GetSharedFontSize(3);
  *(undefined8 *)(param_1 + 0x200) = uVar19;
  while (iVar14 = nn::pl::GetSharedFontLoadState(4), iVar14 == 0) {
    nn::os::ConvertToTimeSpan(lVar22);
    nn::os::SleepThread();
  }
  uVar19 = nn::pl::GetSharedFontAddress(4);
  *(undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)(4 < *(uint *)(param_1 + 0x28)) * 0x20) =
       uVar19;
  uVar19 = nn::pl::GetSharedFontSize(4);
  *(undefined8 *)(param_1 + 0x208) = uVar19;
  iVar14 = nn::pl::GetSharedFontLoadState(5);
  while (iVar14 == 0) {
    nn::os::ConvertToTimeSpan(lVar22);
    nn::os::SleepThread();
    iVar14 = nn::pl::GetSharedFontLoadState(5);
  }
  uVar19 = nn::pl::GetSharedFontAddress(5);
  lVar22 = 0x28;
  if (*(uint *)(param_1 + 0x28) < 6) {
    lVar22 = 0;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x30) + lVar22) = uVar19;
  uVar19 = nn::pl::GetSharedFontSize(5);
  *(undefined8 *)(param_1 + 0x210) = uVar19;
  puVar17 = (undefined8 *)(**(code **)(**(long **)PTR_DAT_04bc92f0 + 0x20))();
  nn::pl::GetSharedFont(param_1 + 0x228,&uStack_14338,6,*puVar17);
  uStack_14338 = (ulong *)((ulong)uStack_14338 & 0xffffffff00000000);
  puVar17 = (undefined8 *)(**(code **)(*(long *)*puVar26 + 0x30))((long *)*puVar26,0x38,8);
  *puVar17 = 0;
  puVar17[1] = 0;
  puVar17[6] = 0;
  puVar17[2] = 0;
  puVar17[3] = 0;
  puVar17[4] = 0;
  puVar17[5] = 0;
  pvVar18 = *(void **)(param_1 + 0x1d8);
  *(undefined8 **)(param_1 + 0x1d8) = puVar17;
  if (pvVar18 != (void *)0x0) {
    *(undefined8 *)((long)pvVar18 + 0x20) = 0;
    if (*(long **)((long)pvVar18 + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar18 + 0x18) + 8))();
    }
    if (*plVar20 == 0) {
      free(pvVar18);
    }
    else {
      plVar20 = (long *)FUN_038cb610(*plVar20,pvVar18);
      if (plVar20 != (long *)0x0) {
        (**(code **)(*plVar20 + 0x38))(plVar20,pvVar18);
      }
    }
  }
  uStack_13300 = 0;
  uStack_14318 = 0x40000000400;
  uStack_13310 = 0xc800;
  uStack_13308 = 0x400;
  uStack_13304 = 1;
  uStack_14328 = 0;
  uStack_14320 = 0;
  uStack_13270 = 1;
  uStack_14338 = (ulong *)0x0;
  uStack_14330 = (char *)0x0;
  puStack_13278 = (undefined *)0x0;
  memset(auStack_13268,0,0x1200);
  lVar22 = -0x1000;
  lVar16 = 0x22d0;
  do {
    *(undefined4 *)((long)auStack_14310 + lVar16 + -0x28) = 2;
    lVar5 = lVar22 + 0x80;
    *(undefined8 *)((long)auStack_10868 + lVar22) = 0;
    *(undefined4 *)((long)auStack_14310 + lVar16 + -0x24) = 2;
    *(undefined8 *)((long)auStack_10868 + lVar22 + 8) = 0;
    *(undefined4 *)((long)auStack_14310 + lVar16 + -0x20) = 2;
    *(undefined8 *)((long)auStack_10868 + lVar22 + 0x10) = 0;
    *(undefined4 *)((long)auStack_14310 + lVar16 + -0x1c) = 2;
    *(undefined8 *)((long)auStack_10868 + lVar22 + 0x18) = 0;
    *(undefined4 *)((long)auStack_14310 + lVar16 + -0x18) = 2;
    *(undefined8 *)((long)auStack_10868 + lVar22 + 0x20) = 0;
    *(undefined4 *)((long)auStack_14310 + lVar16 + -0x14) = 2;
    *(undefined8 *)((long)auStack_10868 + lVar22 + 0x28) = 0;
    *(undefined4 *)((long)auStack_14310 + lVar16 + -0x10) = 2;
    *(undefined8 *)((long)auStack_10868 + lVar22 + 0x30) = 0;
    *(undefined4 *)((long)auStack_14310 + lVar16 + -0xc) = 2;
    *(undefined8 *)((long)auStack_10868 + lVar22 + 0x38) = 0;
    *(undefined4 *)((long)auStack_14310 + lVar16 + -8) = 2;
    *(undefined8 *)((long)auStack_10868 + lVar22 + 0x40) = 0;
    *(undefined4 *)((long)auStack_14310 + lVar16 + -4) = 2;
    *(undefined8 *)((long)auStack_10868 + lVar22 + 0x48) = 0;
    *(undefined4 *)((long)auStack_14310 + lVar16) = 2;
    *(undefined8 *)((long)auStack_10868 + lVar22 + 0x50) = 0;
    *(undefined4 *)((long)auStack_14310 + lVar16 + 4) = 2;
    *(undefined8 *)((long)auStack_10868 + lVar22 + 0x58) = 0;
    *(undefined4 *)((long)auStack_14310 + lVar16 + 8) = 2;
    *(undefined8 *)((long)auStack_10868 + lVar22 + 0x60) = 0;
    *(undefined4 *)((long)auStack_14310 + lVar16 + 0xc) = 2;
    *(undefined8 *)((long)auStack_10868 + lVar22 + 0x68) = 0;
    *(undefined4 *)((long)auStack_14310 + lVar16 + 0x10) = 2;
    *(undefined8 *)((long)auStack_10868 + lVar22 + 0x70) = 0;
    *(undefined4 *)((long)auStack_14310 + lVar16 + 0x14) = 2;
    *(undefined8 *)((long)auStack_10868 + lVar22 + 0x78) = 0;
    lVar22 = lVar5;
    lVar16 = lVar16 + 0x40;
  } while (lVar5 != 0);
  uStack_13280 = 0;
  uStack_13288 = 0;
  uStack_13290 = 0;
  uStack_13298 = 0;
  uStack_132a0 = 0;
  uStack_132a8 = 0;
  uStack_132b0 = 0;
  uStack_132b8 = 0;
  uStack_132c0 = 0;
  uStack_132c8 = 0;
  uStack_132d0 = 0;
  uStack_132d8 = 0;
  uStack_132e0 = 0;
  uStack_132e8 = 0;
  uStack_132f0 = 0;
  uStack_132f8 = 0;
  memset(auStack_10868,0,0x10800);
  uStack_14330 = *(char **)(param_1 + 0x48);
  uStack_14328 = *(undefined8 *)(param_1 + 0x100);
  uStack_14320 = *(undefined8 *)(param_1 + 0x108);
  puStack_13278 = &DAT_041848ac;
  uStack_13270 = 1;
  uStack_13304 = 1;
  uStack_13300 = 5;
  uStack_132fc = *(uint *)(param_1 + 0x228);
  if (0 < (int)uStack_132fc) {
    uVar11 = *(uint *)(param_1 + 0x28);
    lVar22 = *(long *)(param_1 + 0x30);
    uVar24 = 0;
    puVar17 = (undefined8 *)(param_1 + 0x1e8);
    do {
      uVar7 = uVar24;
      if (uVar11 <= uVar24) {
        uVar7 = 0;
      }
      uVar6 = uVar24 + 1;
      puVar8 = puVar17;
      if (7 < uVar24) {
        puVar8 = (undefined8 *)(param_1 + 0x1e8);
      }
      uVar19 = *puVar8;
      puVar17 = puVar17 + 1;
      auStack_13268[uVar24] = *(undefined8 *)(lVar22 + uVar7 * 8);
      auStack_12068[uVar24] = 0;
      auStack_11868[uVar24] = uVar19;
      uVar24 = uVar6;
    } while (uStack_132fc != uVar6);
  }
  uStack_14338 = puVar26;
  uStack_14318 = uVar12;
  uStack_13310 = uVar23;
  uStack_13308 = uVar10;
  FUN_032dae30(*(undefined8 *)(param_1 + 0x1d8),&uStack_14338);
  puVar1 = PTR_DAT_04bb2698;
  puVar9 = (undefined1 *)0x0;
  if (*(long *)(param_1 + 0x1d8) != 0) {
    puVar9 = &LAB_032dd1e8;
  }
  if ((puVar9 != (undefined1 *)0x0) &&
     (lVar22 = *(long *)(*(long *)(param_1 + 0x1d8) + 0x18), lVar22 != 0)) {
    FUN_00355af4(lVar22,7);
  }
  if (*(long *)(param_1 + 0xe0) == 0) {
    *(undefined1 **)(param_1 + 0xd0) = &LAB_032dc900;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined ***)(param_1 + 0xc0) = &PTR_LAB_04b1beb0;
    *(long *)(param_1 + 200) = param_1;
  }
  else {
    nn::os::LockMutex((MutexType *)(*(long *)(param_1 + 0xe0) + 0x20));
    *(undefined1 **)(param_1 + 0xd0) = &LAB_032dc900;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined ***)(param_1 + 0xc0) = &PTR_LAB_04b1beb0;
    *(long *)(param_1 + 200) = param_1;
    if (*(long *)(param_1 + 0xe0) != 0) {
      nn::os::UnlockMutex((MutexType *)(*(long *)(param_1 + 0xe0) + 0x20));
    }
  }
  puVar2 = PTR_DAT_04bc8dd0;
  *(char **)(param_1 + 0xb8) = "sysFontManager::calc()";
  FUN_038bbab4(*(long *)puVar2 + 0xaf8,param_1 + 0x68);
  uStack_14338 = (ulong *)((ulong)uStack_14338 & 0xffffffff00000000);
  puVar17 = (undefined8 *)(**(code **)(*(long *)*puVar26 + 0x30))((long *)*puVar26,0x20,8);
  if (puVar17 != (undefined8 *)0x0) {
    puVar17[2] = &LAB_032dc948;
    puVar17[3] = 0;
    *puVar17 = &PTR_LAB_04b1bf00;
    puVar17[1] = param_1;
  }
  pvVar18 = *(void **)(param_1 + 0x50);
  *(undefined8 **)(param_1 + 0x50) = puVar17;
  if (pvVar18 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar18);
    }
    else {
      plVar20 = (long *)FUN_038cb610(*(long *)puVar1,pvVar18);
      if (plVar20 != (long *)0x0) {
        (**(code **)(*plVar20 + 0x38))(plVar20,pvVar18);
      }
    }
  }
  uStack_14338 = (ulong *)((ulong)uStack_14338 & 0xffffffff00000000);
  plVar20 = (long *)(**(code **)(*(long *)*puVar26 + 0x30))((long *)*puVar26,0x110,8);
  if (plVar20 != (long *)0x0) {
    lVar22 = *(long *)(param_1 + 0x50);
    uStack_14338 = (ulong *)(puVar25 + 0x10);
    uStack_14330 = "UpdateTextureCache";
    FUN_038e1f88(plVar20,&uStack_14338,0,0xe,0,0x7fffffff,0x10000,0x20);
    puVar25 = PTR_DAT_04bd0e60;
    plVar20[0x21] = lVar22;
    *plVar20 = (long)(puVar25 + 0x10);
  }
  plVar15 = *(long **)(param_1 + 0x58);
  *(long **)(param_1 + 0x58) = plVar20;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 8))();
  }
  *(undefined1 *)(param_1 + 0x60) = 1;
  uStack_14338 = (ulong *)((ulong)uStack_14338 & 0xffffffffffffff00);
  *(undefined1 *)(param_1 + 0x61) = 0;
  if (lVar21 != 1) {
    lVar22 = nn::os::GetTlsValue(*(undefined4 *)(*plVar27 + 0x68));
    *(long *)(lVar22 + 0xa8) = lVar21;
  }
  if ((long *)*puVar26 != (long *)0x0) {
    (**(code **)(*(long *)*puVar26 + 0x28))();
  }
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
  }
  (**(code **)(**(long **)(param_1 + 0x58) + 0x30))();
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x230),false,0);
  return;
}

