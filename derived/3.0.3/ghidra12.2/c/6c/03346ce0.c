
undefined8 FUN_03346ce0(long param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  MutexType *pMVar3;
  void *pvVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  int iVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined8 local_98;
  undefined *local_90;
  char *local_88;
  
  uVar23 = 0x3f800000;
  lVar20 = *(long *)PTR_DAT_04bc1118;
  (**(code **)(**(long **)(*(long *)(param_1 + 0x2f8) + 0xf0) + 0x58))(0x3f800000);
  puVar6 = PTR_DAT_04bc8e68;
  lVar19 = *(long *)(*(long *)(param_1 + 0x2f8) + 0xf0);
  local_88 = PTR_DAT_04bb2120;
  if (*(char **)(PTR_PTR_04bb2238 + 8) != (char *)0x0) {
    local_88 = *(char **)(PTR_PTR_04bb2238 + 8);
  }
  if (*local_88 != '\0') {
    local_90 = PTR_DAT_04bc8e68 + 0x10;
    lVar19 = FUN_032cb8e0(&local_98,&local_90,lVar19);
    if (lVar19 == 0) {
      lVar19 = 0;
    }
    else {
      lVar19 = *(long *)(lVar19 + 0xe8);
    }
  }
  local_98 = *(undefined8 *)(lVar19 + 0x18);
  puVar1 = puVar6 + 0x10;
  local_88 = "T_Header_00";
  local_90 = puVar1;
  uVar10 = FUN_0328b6d0(&local_98,&local_90,0);
  *(undefined8 *)(param_1 + 0x300) = uVar10;
  FUN_03349510(uVar10,param_1 + 0x2548);
  local_98 = *(undefined8 *)(lVar19 + 0x18);
  local_88 = "W_Header_00";
  local_90 = puVar1;
  uVar10 = FUN_0334b110(&local_98,&local_90);
  *(undefined8 *)(param_1 + 0x318) = uVar10;
  local_98 = *(undefined8 *)(lVar19 + 0x18);
  local_88 = "T_Main_00";
  local_90 = puVar1;
  uVar10 = FUN_0328b6d0(&local_98,&local_90,0);
  *(undefined8 *)(param_1 + 0x308) = uVar10;
  FUN_03349510(uVar10,param_1 + 0x2558);
  local_98 = *(undefined8 *)(lVar19 + 0x18);
  local_88 = "W_Main_00";
  local_90 = puVar1;
  uVar10 = FUN_0334b110(&local_98,&local_90);
  *(undefined8 *)(param_1 + 800) = uVar10;
  local_98 = *(undefined8 *)(lVar19 + 0x18);
  local_88 = "T_Footer_00";
  local_90 = puVar1;
  uVar10 = FUN_0328b6d0(&local_98,&local_90,0);
  *(undefined8 *)(param_1 + 0x310) = uVar10;
  FUN_03349510(uVar10,param_1 + 0x2568);
  local_98 = *(undefined8 *)(lVar19 + 0x18);
  local_88 = "W_Footer_00";
  local_90 = puVar1;
  uVar10 = FUN_0334b110(&local_98,&local_90);
  *(undefined8 *)(param_1 + 0x328) = uVar10;
  local_98 = *(undefined8 *)(lVar19 + 0x18);
  local_88 = "W_Header_00";
  local_90 = puVar1;
  plVar11 = (long *)FUN_032d3050(&local_98,local_98,&local_90);
  puVar7 = PTR_DAT_04bc8f38;
  puVar1 = PTR_DAT_04bc8f30;
  if (((*PTR_DAT_04bc8f38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar9 != 0))
  {
    *(undefined8 *)puVar1 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  if (plVar11 == (long *)0x0) {
LAB_03346f04:
    plVar11 = (long *)0x0;
  }
  else {
    puVar12 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11);
    if (puVar12 != (undefined8 *)puVar1) {
      do {
        puVar12 = (undefined8 *)*puVar12;
      } while (puVar12 != (undefined8 *)puVar1 && puVar12 != (undefined8 *)0x0);
      if (puVar12 == (undefined8 *)0x0) goto LAB_03346f04;
    }
  }
  local_98 = *(undefined8 *)(lVar19 + 0x18);
  local_90 = puVar6 + 0x10;
  local_88 = "W_Main_00";
  plVar13 = (long *)FUN_032d3050(&local_98,local_98,&local_90);
  if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar9 != 0)) {
    *(undefined8 *)puVar1 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  if (plVar13 == (long *)0x0) {
LAB_03346f74:
    plVar13 = (long *)0x0;
  }
  else {
    puVar12 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13);
    if (puVar12 != (undefined8 *)puVar1) {
      do {
        puVar12 = (undefined8 *)*puVar12;
      } while (puVar12 != (undefined8 *)puVar1 && puVar12 != (undefined8 *)0x0);
      if (puVar12 == (undefined8 *)0x0) goto LAB_03346f74;
    }
  }
  local_98 = *(undefined8 *)(lVar19 + 0x18);
  local_90 = puVar6 + 0x10;
  local_88 = "W_Footer_00";
  plVar14 = (long *)FUN_032d3050(&local_98,local_98,&local_90);
  if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar9 != 0)) {
    *(undefined8 *)puVar1 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  puVar6 = PTR_DAT_04bc1118;
  lVar19 = param_1 + 0x2538;
  if (plVar14 != (long *)0x0) {
    puVar12 = (undefined8 *)(**(code **)(*plVar14 + 0x10))(plVar14);
    if (puVar12 == (undefined8 *)puVar1) goto LAB_03346fec;
    do {
      puVar12 = (undefined8 *)*puVar12;
    } while (puVar12 != (undefined8 *)puVar1 && puVar12 != (undefined8 *)0x0);
    if (puVar12 != (undefined8 *)0x0) goto LAB_03346fec;
  }
  plVar14 = (long *)0x0;
LAB_03346fec:
  if (plVar11 != (long *)0x0) {
    *(byte *)(plVar11 + 0xb) = *(byte *)(plVar11 + 0xb) & 0xfe | *(byte *)(param_1 + 0x2578);
  }
  plVar2 = (long *)(param_1 + 0x300);
  FUN_03349510(plVar11,lVar19);
  if (plVar13 != (long *)0x0) {
    *(byte *)(plVar13 + 0xb) = *(byte *)(plVar13 + 0xb) & 0xfe | *(byte *)(param_1 + 0x2578);
  }
  FUN_03349510(plVar13,lVar19);
  if (plVar14 != (long *)0x0) {
    *(byte *)(plVar14 + 0xb) = *(byte *)(plVar14 + 0xb) & 0xfe | *(byte *)(param_1 + 0x2578);
  }
  FUN_03349510(plVar14,lVar19);
  if ((*(long *)(*plVar2 + 0x18) != 0) && (lVar19 = FUN_032cbf00(), lVar19 != 0)) {
    *(undefined1 *)(lVar19 + 0xd4) = 0;
  }
  if ((*(long *)(*(long *)(param_1 + 0x308) + 0x18) != 0) && (lVar19 = FUN_032cbf00(), lVar19 != 0))
  {
    *(undefined1 *)(lVar19 + 0xd4) = 0;
  }
  if ((*(long *)(*(long *)(param_1 + 0x310) + 0x18) != 0) && (lVar19 = FUN_032cbf00(), lVar19 != 0))
  {
    *(undefined1 *)(lVar19 + 0xd4) = 0;
  }
  lVar19 = *(long *)(param_1 + 0x4e0);
  *(undefined4 *)(param_1 + 0x20a4) = 0;
  *(undefined8 *)(param_1 + 0x209c) = 0;
  if (lVar19 != 0) {
    pvVar4 = (void *)(param_1 + 0x17f8);
    FUN_03363ed0(lVar19,*(undefined8 *)(lVar20 + 0xf08));
    uVar10 = FUN_0038a89c(*(undefined8 *)(param_1 + 0x300));
    lVar16 = *(long *)(param_1 + 0x300);
    lVar18 = param_1 + 0x1fd8;
    uVar21 = *(undefined4 *)(lVar16 + 0xf8);
    uVar22 = *(undefined4 *)(lVar16 + 0xfc);
    uVar24 = *(undefined4 *)(lVar16 + 0x100);
    uVar25 = *(undefined4 *)(lVar16 + 0x104);
    uVar27 = *(undefined4 *)(lVar16 + 0x50);
    *(undefined8 *)(param_1 + 0x2000) = uVar10;
    FUN_00350090(uVar21,uVar22,lVar18);
    *(undefined4 *)(param_1 + 0x201c) = uVar24;
    *(undefined4 *)(param_1 + 0x2018) = uVar25;
    *(undefined4 *)(param_1 + 0x2040) = uVar27;
    *(long *)(param_1 + 0x2048) = param_1;
    memset(pvVar4,0,0x7d8);
    *(undefined4 *)(param_1 + 0x1fd4) = 1;
    uVar21 = *(undefined4 *)(lVar19 + 0xc);
    lVar16 = *(long *)(lVar20 + 0x20);
    *(undefined4 *)(lVar16 + 0x6e8) = uVar21;
    *(undefined4 *)(lVar16 + 0x6ec) = uVar21;
    if ((*(long *)(lVar16 + 0x6e0) != 0) &&
       (plVar11 = *(long **)(*(long *)(lVar16 + 0x6e0) + 8), plVar11 != (long *)0x0)) {
      (**(code **)(*plVar11 + 0x188))(plVar11);
      FUN_03322410(plVar11);
      if ((*(long *)(lVar16 + 0x6e0) != 0) &&
         (lVar16 = *(long *)(*(long *)(lVar16 + 0x6e0) + 8), lVar16 != 0)) {
        *(undefined4 *)(lVar16 + 0x15ec) =
             *(undefined4 *)(*(long *)(*(long *)puVar6 + 0x20) + 0x6e8);
      }
    }
    *(undefined4 *)(param_1 + 0x20f4) = 0;
    FUN_033618d0(pvVar4,0xffffffff);
    FUN_03347760(param_1);
    FUN_03363ed0(lVar19,*(undefined8 *)(lVar20 + 0xf18));
    uVar10 = FUN_0038a89c(*(undefined8 *)(param_1 + 0x308));
    lVar16 = *(long *)(param_1 + 0x308);
    uVar21 = *(undefined4 *)(lVar16 + 0xf8);
    uVar22 = *(undefined4 *)(lVar16 + 0xfc);
    uVar24 = *(undefined4 *)(lVar16 + 0x100);
    uVar25 = *(undefined4 *)(lVar16 + 0x104);
    uVar27 = *(undefined4 *)(lVar16 + 0x50);
    *(undefined8 *)(param_1 + 0x2000) = uVar10;
    FUN_00350090(uVar21,uVar22,lVar18);
    *(undefined4 *)(param_1 + 0x201c) = uVar24;
    *(undefined4 *)(param_1 + 0x2018) = uVar25;
    *(undefined4 *)(param_1 + 0x2040) = uVar27;
    *(long *)(param_1 + 0x2048) = param_1;
    memset(pvVar4,0,0x7d8);
    *(undefined4 *)(param_1 + 0x1fd4) = 6;
    uVar21 = *(undefined4 *)(lVar19 + 0xc);
    lVar16 = *(long *)(lVar20 + 0x20);
    *(undefined4 *)(lVar16 + 0x6e8) = uVar21;
    *(undefined4 *)(lVar16 + 0x6ec) = uVar21;
    if ((*(long *)(lVar16 + 0x6e0) != 0) &&
       (plVar11 = *(long **)(*(long *)(lVar16 + 0x6e0) + 8), plVar11 != (long *)0x0)) {
      (**(code **)(*plVar11 + 0x188))(plVar11);
      FUN_03322410(plVar11);
      if ((*(long *)(lVar16 + 0x6e0) != 0) &&
         (lVar16 = *(long *)(*(long *)(lVar16 + 0x6e0) + 8), lVar16 != 0)) {
        *(undefined4 *)(lVar16 + 0x15ec) =
             *(undefined4 *)(*(long *)(*(long *)puVar6 + 0x20) + 0x6e8);
      }
    }
    *(undefined4 *)(param_1 + 0x20f4) = 1;
    FUN_033618d0(pvVar4,0xffffffff);
    FUN_03347760(param_1);
    if (*(int *)(param_2 + 0x20) == 1) {
      *(undefined4 *)(param_1 + 0x2594) = *(undefined4 *)(lVar19 + 0xc);
    }
    *(undefined4 *)(param_1 + 0x2530) = *(undefined4 *)(param_1 + 0x1fd0);
    FUN_03363ed0(lVar19,*(undefined8 *)(lVar20 + 0xf28));
    uVar10 = FUN_0038a89c(*(undefined8 *)(param_1 + 0x310));
    lVar16 = *(long *)(param_1 + 0x310);
    uVar21 = *(undefined4 *)(lVar16 + 0xf8);
    uVar22 = *(undefined4 *)(lVar16 + 0xfc);
    uVar24 = *(undefined4 *)(lVar16 + 0x100);
    uVar25 = *(undefined4 *)(lVar16 + 0x104);
    uVar27 = *(undefined4 *)(lVar16 + 0x50);
    *(undefined8 *)(param_1 + 0x2000) = uVar10;
    FUN_00350090(uVar21,uVar22,lVar18);
    *(undefined4 *)(param_1 + 0x201c) = uVar24;
    *(undefined4 *)(param_1 + 0x2018) = uVar25;
    *(undefined4 *)(param_1 + 0x2040) = uVar27;
    *(long *)(param_1 + 0x2048) = param_1;
    memset(pvVar4,0,0x7d8);
    *(undefined4 *)(param_1 + 0x1fd4) = 1;
    uVar21 = *(undefined4 *)(lVar19 + 0xc);
    lVar18 = *(long *)(lVar20 + 0x20);
    *(undefined4 *)(lVar18 + 0x6e8) = uVar21;
    *(undefined4 *)(lVar18 + 0x6ec) = uVar21;
    if ((*(long *)(lVar18 + 0x6e0) != 0) &&
       (plVar11 = *(long **)(*(long *)(lVar18 + 0x6e0) + 8), plVar11 != (long *)0x0)) {
      (**(code **)(*plVar11 + 0x188))(plVar11);
      FUN_03322410(plVar11);
      if ((*(long *)(lVar18 + 0x6e0) != 0) &&
         (lVar18 = *(long *)(*(long *)(lVar18 + 0x6e0) + 8), lVar18 != 0)) {
        *(undefined4 *)(lVar18 + 0x15ec) =
             *(undefined4 *)(*(long *)(*(long *)puVar6 + 0x20) + 0x6e8);
      }
    }
    *(undefined4 *)(param_1 + 0x20f4) = 2;
    FUN_033618d0(pvVar4,0xffffffff);
    FUN_03347760(param_1);
    *(undefined4 *)(param_1 + 0x20f4) = 1;
    FUN_03363ed0(lVar19,*(undefined8 *)(lVar20 + 0xf18));
  }
  if ((*(int *)(param_2 + 0x20) == 1) && (*(long *)(param_1 + 0x4e0) != 0)) {
    uVar21 = *(undefined4 *)(*(long *)(param_1 + 0x4e0) + 0xc);
  }
  else {
    uVar21 = 0;
  }
  lVar19 = *(long *)(lVar20 + 0x20);
  *(undefined4 *)(lVar19 + 0x6e8) = uVar21;
  *(undefined4 *)(lVar19 + 0x6ec) = uVar21;
  if ((*(long *)(lVar19 + 0x6e0) != 0) &&
     (plVar11 = *(long **)(*(long *)(lVar19 + 0x6e0) + 8), plVar11 != (long *)0x0)) {
    (**(code **)(*plVar11 + 0x188))(plVar11);
    FUN_03322410(plVar11);
    if ((*(long *)(lVar19 + 0x6e0) != 0) &&
       (lVar19 = *(long *)(*(long *)(lVar19 + 0x6e0) + 8), lVar19 != 0)) {
      *(undefined4 *)(lVar19 + 0x15ec) = *(undefined4 *)(*(long *)(*(long *)puVar6 + 0x20) + 0x6e8);
    }
  }
  uVar5 = *(uint *)(param_1 + 0x20f4);
  pvVar4 = (void *)(param_1 + 0x17f8);
  plVar11 = plVar2 + uVar5;
  if (2 < uVar5) {
    uVar5 = 0;
    plVar11 = plVar2;
  }
  uVar10 = FUN_0038a89c(*plVar11);
  lVar19 = *plVar11;
  uVar22 = (&DAT_0418db90)[uVar5];
  uVar27 = *(undefined4 *)(lVar19 + 0x100);
  uVar24 = *(undefined4 *)(lVar19 + 0xf8);
  uVar25 = *(undefined4 *)(lVar19 + 0xfc);
  uVar26 = *(undefined4 *)(lVar19 + 0x104);
  uVar28 = *(undefined4 *)(lVar19 + 0x50);
  *(undefined8 *)(param_1 + 0x2000) = uVar10;
  FUN_00350090(uVar24,uVar25,param_1 + 0x1fd8);
  *(undefined4 *)(param_1 + 0x201c) = uVar27;
  *(undefined4 *)(param_1 + 0x2018) = uVar26;
  *(undefined4 *)(param_1 + 0x2040) = uVar28;
  *(long *)(param_1 + 0x2048) = param_1;
  memset(pvVar4,0,0x7d8);
  *(undefined4 *)(param_1 + 0x1fd4) = uVar22;
  plVar11 = plVar2 + *(uint *)(param_1 + 0x20f4);
  if (2 < *(uint *)(param_1 + 0x20f4)) {
    plVar11 = plVar2;
  }
  *(float *)(param_1 + 0x20b8) = *(float *)(*plVar11 + 0xfc) + *(float *)(*plVar11 + 0x100);
  *(undefined1 *)(lVar20 + 0x484) = 1;
  FUN_033618d0(pvVar4,0xffffffff);
  FUN_03361cd0(pvVar4,&local_90,&local_98,uVar21);
  if (*(int *)(param_1 + 0x2060) != (int)local_90) {
    *(undefined1 *)(param_1 + 0x17f0) = 1;
  }
  if (*(int *)(param_1 + 0x2064) != (int)local_98) {
    *(undefined1 *)(param_1 + 0x17f0) = 1;
  }
  *(int *)(param_1 + 0x2060) = (int)local_90;
  *(int *)(param_1 + 0x2064) = (int)local_98;
  if (*(int *)(param_1 + 0x20f4) == 1) {
    *(int *)(param_1 + 0x2594) = (int)local_98;
  }
  *(undefined4 *)(param_1 + 0x2058) = 0;
  *(undefined4 *)(param_1 + 0x20a0) = 0;
  iVar9 = *(int *)(param_2 + 0x3ac);
  if (iVar9 < 0x1f5) {
    if (((iVar9 < 0) || (iVar15 = *(int *)(param_2 + 0x3b0), iVar15 <= iVar9)) || (500 < iVar15)) {
      iVar15 = iVar9;
    }
  }
  else {
    iVar15 = iVar9 + -1;
  }
  *(int *)(param_1 + 0x20d0) = iVar15;
  if (0 < *(int *)(lVar20 + 0xbdc)) {
    *(undefined4 *)(param_1 + 0x2068) = 0xffffffff;
    *(undefined1 *)(lVar20 + 0x484) = 1;
    iVar15 = *(int *)(param_1 + 0x20d0);
  }
  *(undefined1 *)(param_1 + 0x2050) = 0;
  *(undefined4 *)(param_1 + 0x205c) = 3;
  if (iVar15 < 1) {
    *(undefined4 *)(param_1 + 0x20d0) = 500;
  }
  FUN_032d1220(*(undefined8 *)(param_1 + 0x2f8));
  puVar1 = PTR_DAT_04bc9410;
  if (*(long *)(param_1 + 0x3c0) == 0) {
    plVar11 = *(long **)PTR_DAT_04bc9410;
    puVar12 = (undefined8 *)(param_1 + 0x3c0);
    pMVar3 = (MutexType *)(plVar11 + 5);
    nn::os::LockMutex(pMVar3);
    puVar8 = (undefined8 *)*plVar11;
    if ((undefined8 *)*plVar11 == (undefined8 *)0x0) {
      *plVar11 = (long)puVar12;
    }
    else {
      do {
        puVar17 = puVar8;
        puVar8 = (undefined8 *)puVar17[2];
      } while ((undefined8 *)puVar17[2] != (undefined8 *)0x0);
      puVar17[2] = puVar12;
      *(undefined8 **)(param_1 + 0x3c8) = puVar17;
      plVar11 = (long *)*puVar17;
    }
    *puVar12 = plVar11;
    nn::os::UnlockMutex(pMVar3);
  }
  if ((*(char *)(param_1 + 0x17f1) != '\0') && (*(long *)(param_1 + 0x418) == 0)) {
    plVar11 = *(long **)puVar1;
    puVar12 = (undefined8 *)(param_1 + 0x418);
    pMVar3 = (MutexType *)(plVar11 + 5);
    nn::os::LockMutex(pMVar3);
    puVar8 = (undefined8 *)*plVar11;
    if ((undefined8 *)*plVar11 == (undefined8 *)0x0) {
      *plVar11 = (long)puVar12;
    }
    else {
      do {
        puVar17 = puVar8;
        puVar8 = (undefined8 *)puVar17[2];
      } while ((undefined8 *)puVar17[2] != (undefined8 *)0x0);
      puVar17[2] = puVar12;
      *(undefined8 **)(param_1 + 0x420) = puVar17;
      plVar11 = (long *)*puVar17;
    }
    *puVar12 = plVar11;
    nn::os::UnlockMutex(pMVar3);
  }
  lVar19 = *(long *)(*(long *)puVar6 + 0x20);
  iVar9 = *(int *)(lVar19 + 0x1568);
  if (*(int *)(lVar19 + 0x1050) == 1) {
    uVar23 = 0x40000000;
    if (iVar9 != 1) {
      uVar23 = 0x40400000;
    }
  }
  else if (((iVar9 == 1) || (*(char *)(lVar19 + 0x106a) != '\0')) ||
          (iVar9 == 0 && *(char *)(lVar19 + 0x16408) != '\0')) {
    uVar23 = 0;
  }
  if (*(char *)(param_1 + 0x17f1) != '\0') {
    FUN_032c8150(uVar23,param_1 + 0x418,0,0);
  }
  if (((*(long *)(param_1 + 0x30) != 0) && (-1 < *(int *)(param_1 + 0x40))) &&
     (plVar11 = *(long **)(*(long *)(param_1 + 0x30) + 0x80), plVar11 != (long *)0x0)) {
    (**(code **)(*plVar11 + 0x20))();
  }
  *(long *)(param_1 + 0x38) = param_1 + 0xf0;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  return 1;
}

