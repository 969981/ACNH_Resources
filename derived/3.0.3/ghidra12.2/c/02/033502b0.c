
undefined8 FUN_033502b0(long param_1,long param_2)

{
  undefined *puVar1;
  void *__s;
  MutexType *pMVar2;
  char *pcVar3;
  undefined1 *puVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  char *pcVar15;
  undefined8 *puVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  undefined *puVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined *local_2e0;
  undefined1 *puStack_2d8;
  undefined *local_2d0;
  undefined1 *local_2c8;
  int local_2c0;
  undefined1 auStack_2bc [7];
  undefined1 local_2b5;
  undefined8 local_2b0;
  undefined1 *local_2a8;
  undefined8 ****local_2a0;
  undefined8 ****ppppuStack_298;
  undefined8 ***local_290;
  undefined8 **local_288;
  undefined8 *local_280;
  undefined8 local_278;
  undefined1 auStack_270 [32];
  undefined8 local_250;
  char *pcStack_248;
  undefined *local_240;
  undefined8 *puStack_238;
  undefined4 local_230;
  undefined1 local_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined *local_210;
  undefined1 *puStack_208;
  undefined4 local_200;
  undefined1 local_1fc [63];
  undefined1 local_1bd;
  undefined *local_1b8;
  undefined1 *puStack_1b0;
  undefined4 local_1a8;
  undefined1 local_1a4 [63];
  undefined1 local_165;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [4];
  undefined4 local_11c;
  undefined *local_118;
  undefined1 *local_110;
  undefined4 local_108;
  undefined1 local_104 [7];
  undefined1 local_fd;
  undefined *local_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  undefined1 local_e4 [7];
  undefined1 local_dd;
  undefined *local_d8;
  undefined1 *local_d0;
  undefined4 local_c8;
  undefined1 local_c4 [7];
  undefined1 local_bd;
  undefined *local_b8;
  undefined1 *local_b0;
  undefined4 local_a8;
  undefined1 local_a4 [7];
  undefined1 local_9d;
  undefined2 local_74 [2];
  
  puVar21 = PTR_DAT_04bc8e68;
  plVar13 = (long *)PTR_DAT_04bc1118;
  puVar1 = PTR_DAT_04bb2120;
  lVar19 = *(long *)PTR_DAT_04bc1118;
  lVar18 = *(long *)(*(long *)(param_1 + 0x300) + 0xf0);
  pcVar15 = PTR_DAT_04bb2120;
  if (*(char **)(PTR_PTR_04bb2238 + 8) != (char *)0x0) {
    pcVar15 = *(char **)(PTR_PTR_04bb2238 + 8);
  }
  if (*pcVar15 != '\0') {
    local_250 = PTR_DAT_04bc8e68 + 0x10;
    pcStack_248 = pcVar15;
    lVar18 = FUN_032cb8e0(&local_2b0,&local_250,lVar18);
    if (lVar18 == 0) {
      lVar18 = 0;
    }
    else {
      lVar18 = *(long *)(lVar18 + 0xe8);
    }
  }
  puVar8 = (undefined *)(**(code **)(**(long **)(param_1 + 0x25c8) + 0x10))();
  local_2b0 = *(undefined8 *)(lVar18 + 0x18);
  pcStack_248 = puVar1;
  if (puVar8 != (undefined *)0x0) {
    pcStack_248 = puVar8;
  }
  puVar1 = puVar21 + 0x10;
  local_250 = puVar1;
  lVar9 = FUN_0328b6d0(&local_2b0,&local_250,0);
  *(long *)(param_1 + 0x308) = lVar9;
  if ((*(long *)(lVar9 + 0x18) != 0) && (lVar9 = FUN_032cbf00(), lVar9 != 0)) {
    *(undefined1 *)(lVar9 + 0xd4) = 0;
  }
  local_2b0 = *(undefined8 *)(lVar18 + 0x18);
  pcStack_248 = "N_Text_00";
  local_250 = puVar1;
  plVar10 = (long *)FUN_032d3050(&local_2b0,local_2b0,&local_250);
  if (((*PTR_DAT_04bc8f38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar7 != 0))
  {
    *(undefined8 *)PTR_DAT_04bc8f30 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  if (plVar10 != (long *)0x0) {
    puVar11 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10);
    if (puVar11 == (undefined8 *)PTR_DAT_04bc8f30) goto LAB_0335040c;
    do {
      puVar11 = (undefined8 *)*puVar11;
    } while (puVar11 != (undefined8 *)PTR_DAT_04bc8f30 && puVar11 != (undefined8 *)0x0);
    if (puVar11 != (undefined8 *)0x0) goto LAB_0335040c;
  }
  plVar10 = (long *)0x0;
LAB_0335040c:
  *(long **)(param_1 + 0x340) = plVar10;
  *(undefined8 *)(param_1 + 0x1330) = 0;
  __s = (void *)(param_1 + 0xa98);
  *(undefined4 *)(param_1 + 0x1338) = 0;
  uVar24 = *(undefined4 *)(*(long *)(param_1 + 0x308) + 0x50);
  uVar12 = FUN_0038a89c();
  lVar18 = *(long *)(param_1 + 0x308);
  uVar22 = *(undefined4 *)(lVar18 + 0xf8);
  uVar23 = *(undefined4 *)(lVar18 + 0xfc);
  uVar25 = *(undefined4 *)(lVar18 + 0x100);
  uVar26 = *(undefined4 *)(lVar18 + 0x104);
  *(undefined8 *)(param_1 + 0x12a0) = uVar12;
  FUN_00350090(uVar22,uVar23,param_1 + 0x1278);
  *(undefined4 *)(param_1 + 0x12bc) = uVar25;
  *(undefined4 *)(param_1 + 0x12b8) = uVar26;
  *(undefined4 *)(param_1 + 0x12e0) = uVar24;
  *(long *)(param_1 + 0x12e8) = param_1;
  memset(__s,0,0x7d8);
  uVar22 = 0;
  *(undefined4 *)(param_1 + 0x1274) = 1;
  *(float *)(param_1 + 0x134c) =
       *(float *)(*(long *)(param_1 + 0x308) + 0xfc) +
       *(float *)(*(long *)(param_1 + 0x308) + 0x100);
  *(undefined1 *)(lVar19 + 0x484) = 1;
  if (*(int *)(param_2 + 0x20) == 1) {
    uVar22 = *(undefined4 *)(lVar19 + 0xbdc);
  }
  iVar7 = *(int *)(param_2 + 0x3ac);
  iVar17 = 500;
  if ((iVar7 < 0x1f5) &&
     (((iVar7 < 0 || (iVar17 = *(int *)(param_2 + 0x3b0), iVar17 <= iVar7)) || (500 < iVar17)))) {
    iVar17 = iVar7;
  }
  *(int *)(param_1 + 0x1360) = iVar17;
  if (0 < *(int *)(lVar19 + 0xbdc)) {
    *(undefined4 *)(param_1 + 0x1308) = 0xffffffff;
    *(undefined1 *)(lVar19 + 0x484) = 1;
    iVar17 = *(int *)(param_1 + 0x1360);
  }
  *(undefined1 *)(param_1 + 0x12f0) = 0;
  *(undefined4 *)(param_1 + 0x12fc) = 3;
  if (iVar17 < 1) {
    *(undefined4 *)(param_1 + 0x1360) = 500;
  }
  FUN_033618d0(__s,0xffffffff);
  FUN_03361cd0(__s,&local_250,&local_2b0,uVar22);
  if (*(int *)(param_1 + 0x1300) != (int)local_250) {
    *(undefined1 *)(param_1 + 0xa90) = 1;
  }
  if (*(int *)(param_1 + 0x1304) != (int)local_2b0) {
    *(undefined1 *)(param_1 + 0xa90) = 1;
  }
  *(int *)(param_1 + 0x1300) = (int)local_250;
  *(int *)(param_1 + 0x1304) = (int)local_2b0;
  *(undefined4 *)(param_1 + 0x12f8) = 0;
  *(undefined4 *)(param_1 + 0x1334) = 0;
  FUN_03350d30(param_1);
  FUN_032d1220(*(undefined8 *)(param_1 + 0x300));
  puVar1 = PTR_DAT_04bc9410;
  if (*(long *)(param_1 + 0x370) == 0) {
    plVar10 = *(long **)PTR_DAT_04bc9410;
    puVar11 = (undefined8 *)(param_1 + 0x370);
    pMVar2 = (MutexType *)(plVar10 + 5);
    nn::os::LockMutex(pMVar2);
    puVar16 = (undefined8 *)*plVar10;
    if ((undefined8 *)*plVar10 == (undefined8 *)0x0) {
      *plVar10 = (long)puVar11;
    }
    else {
      do {
        puVar14 = puVar16;
        puVar16 = (undefined8 *)puVar14[2];
      } while ((undefined8 *)puVar14[2] != (undefined8 *)0x0);
      puVar14[2] = puVar11;
      *(undefined8 **)(param_1 + 0x378) = puVar14;
      plVar10 = (long *)*puVar14;
    }
    *puVar11 = plVar10;
    nn::os::UnlockMutex(pMVar2);
  }
  pcVar15 = *(char **)(param_1 + 5000);
  if ((*pcVar15 != '\0') && (plVar10 = *(long **)(param_1 + 0x3d0), *plVar10 == 0)) {
    plVar20 = *(long **)puVar1;
    pMVar2 = (MutexType *)(plVar20 + 5);
    nn::os::LockMutex(pMVar2);
    puVar11 = (undefined8 *)*plVar20;
    if ((undefined8 *)*plVar20 == (undefined8 *)0x0) {
      *plVar20 = (long)plVar10;
    }
    else {
      do {
        puVar16 = puVar11;
        puVar11 = (undefined8 *)puVar16[2];
      } while ((undefined8 *)puVar16[2] != (undefined8 *)0x0);
      puVar16[2] = plVar10;
      plVar10[1] = (long)puVar16;
      plVar20 = (long *)*puVar16;
    }
    *plVar10 = (long)plVar20;
    nn::os::UnlockMutex(pMVar2);
    pcVar15 = *(char **)(param_1 + 5000);
  }
  uVar6 = *(uint *)(param_1 + 0x1380);
  pcVar3 = pcVar15;
  if (1 < uVar6) {
    pcVar3 = pcVar15 + 1;
  }
  if ((*pcVar3 != '\0') &&
     (plVar10 = (long *)(*(long *)(param_1 + 0x3d0) + (ulong)(1 < *(uint *)(param_1 + 0x3c8)) * 0x58
                        ), *plVar10 == 0)) {
    plVar20 = *(long **)puVar1;
    pMVar2 = (MutexType *)(plVar20 + 5);
    nn::os::LockMutex(pMVar2);
    puVar11 = (undefined8 *)*plVar20;
    if ((undefined8 *)*plVar20 == (undefined8 *)0x0) {
      *plVar20 = (long)plVar10;
    }
    else {
      do {
        puVar16 = puVar11;
        puVar11 = (undefined8 *)puVar16[2];
      } while ((undefined8 *)puVar16[2] != (undefined8 *)0x0);
      puVar16[2] = plVar10;
      plVar10[1] = (long)puVar16;
      plVar20 = (long *)*puVar16;
    }
    *plVar10 = (long)plVar20;
    nn::os::UnlockMutex(pMVar2);
    uVar6 = *(uint *)(param_1 + 0x1380);
    pcVar15 = *(char **)(param_1 + 5000);
  }
  if (pcVar15[(ulong)(2 < uVar6) * 2] != '\0') {
    lVar18 = 0xb0;
    if (*(uint *)(param_1 + 0x3c8) < 3) {
      lVar18 = 0;
    }
    plVar10 = (long *)(*(long *)(param_1 + 0x3d0) + lVar18);
    if (*plVar10 == 0) {
      plVar20 = *(long **)puVar1;
      pMVar2 = (MutexType *)(plVar20 + 5);
      nn::os::LockMutex(pMVar2);
      puVar11 = (undefined8 *)*plVar20;
      if ((undefined8 *)*plVar20 == (undefined8 *)0x0) {
        *plVar20 = (long)plVar10;
      }
      else {
        do {
          puVar16 = puVar11;
          puVar11 = (undefined8 *)puVar16[2];
        } while ((undefined8 *)puVar16[2] != (undefined8 *)0x0);
        puVar16[2] = plVar10;
        plVar10[1] = (long)puVar16;
        plVar20 = (long *)*puVar16;
      }
      *plVar10 = (long)plVar20;
      nn::os::UnlockMutex(pMVar2);
      uVar6 = *(uint *)(param_1 + 0x1380);
      pcVar15 = *(char **)(param_1 + 5000);
    }
  }
  lVar18 = 3;
  if (uVar6 < 4) {
    lVar18 = 0;
  }
  if (pcVar15[lVar18] != '\0') {
    lVar18 = 0x108;
    if (*(uint *)(param_1 + 0x3c8) < 4) {
      lVar18 = 0;
    }
    plVar10 = (long *)(*(long *)(param_1 + 0x3d0) + lVar18);
    if (*plVar10 == 0) {
      plVar20 = *(long **)puVar1;
      pMVar2 = (MutexType *)(plVar20 + 5);
      nn::os::LockMutex(pMVar2);
      puVar11 = (undefined8 *)*plVar20;
      if ((undefined8 *)*plVar20 == (undefined8 *)0x0) {
        *plVar20 = (long)plVar10;
      }
      else {
        do {
          puVar16 = puVar11;
          puVar11 = (undefined8 *)puVar16[2];
        } while ((undefined8 *)puVar16[2] != (undefined8 *)0x0);
        puVar16[2] = plVar10;
        plVar10[1] = (long)puVar16;
        plVar20 = (long *)*puVar16;
      }
      *plVar10 = (long)plVar20;
      nn::os::UnlockMutex(pMVar2);
    }
  }
  uVar6 = *(uint *)(param_1 + 0x1390);
  if (((uVar6 < 0x2a) && ((1L << ((ulong)uVar6 & 0x3f) & 0x20c00000000U) != 0)) &&
     (*(long *)(param_1 + 0x3d8) == 0)) {
    plVar10 = *(long **)puVar1;
    pMVar2 = (MutexType *)(plVar10 + 5);
    nn::os::LockMutex(pMVar2);
    puVar11 = (undefined8 *)*plVar10;
    if ((undefined8 *)*plVar10 == (undefined8 *)0x0) {
      *plVar10 = param_1 + 0x3d8;
    }
    else {
      do {
        puVar16 = puVar11;
        puVar11 = (undefined8 *)puVar16[2];
      } while ((undefined8 *)puVar16[2] != (undefined8 *)0x0);
      puVar16[2] = param_1 + 0x3d8;
      *(undefined8 **)(param_1 + 0x3e0) = puVar16;
      plVar10 = (long *)*puVar16;
    }
    *(long **)(param_1 + 0x3d8) = plVar10;
    nn::os::UnlockMutex(pMVar2);
    uVar6 = *(uint *)(param_1 + 0x1390);
  }
  if ((uVar6 & 0xfffffffe) == 0x22) {
    local_230 = 0x20;
    local_250 = (undefined *)CONCAT17((char)((ulong)local_250 >> 0x38),0x1010000);
    puStack_238 = &local_160;
    local_22c = 0;
    local_218 = 0xffffffff;
    local_200 = 0x40;
    local_1bd = 0;
    local_1fc[0] = 0;
    local_228 = 0xffffffff;
    uStack_220 = 0xffffffff00000000;
    puStack_208 = local_1fc;
    local_210 = PTR_DAT_04bb2bc0 + 0x10;
    local_1a8 = 0x40;
    local_165 = 0;
    local_1a4[0] = 0;
    puStack_1b0 = local_1a4;
    local_240 = PTR_DAT_04bb4e10 + 0x10;
    local_130 = 0;
    uStack_128 = 0;
    local_140 = 0;
    uStack_138 = 0;
    local_150 = 0;
    uStack_148 = 0;
    puVar4 = auStack_120;
    if (auStack_120 <= (undefined1 *)((long)&local_160 + 2U)) {
      puVar4 = (undefined1 *)((long)&local_160 + 2U);
    }
    local_160 = 0;
    uStack_158 = 0;
    local_1b8 = local_210;
    memset(puStack_238,0,(size_t)(puVar4 + (-0xe0 - (long)&local_240)));
    puVar1 = PTR_DAT_04bb3768;
    local_11c = 0;
    local_fd = 0;
    local_110 = local_104;
    local_104[0] = 0;
    local_f0 = local_e4;
    local_e4[0] = 0;
    local_108 = 8;
    local_e8 = 8;
    local_118 = PTR_DAT_04bb3768 + 0x10;
    local_dd = 0;
    local_c8 = 8;
    local_bd = 0;
    local_a8 = 8;
    local_9d = 0;
    local_a4[0] = 0;
    local_d0 = local_c4;
    local_c4[0] = 0;
    local_b0 = local_a4;
    local_f8 = local_118;
    local_d8 = local_118;
    local_b8 = local_118;
    FUN_0377ce20(&local_250);
    local_74[0] = FUN_0376baa0(&local_118);
    local_290 = &local_288;
    local_288 = &local_280;
    local_2a0 = &local_290;
    local_280 = &local_278;
    local_2b0 = 0;
    local_2a8 = (undefined1 *)0x0;
    local_278 = 0;
    if (auStack_270 != (undefined1 *)0x0) {
      local_2b0 = 0x400000000;
      local_2a8 = auStack_270;
    }
    ppppuStack_298 = local_2a0;
    FUN_03770770(local_74,&local_2b0);
    if ((int)local_2b0 - 5U < 0xfffffffe) {
      uVar6 = FUN_03772db0();
      local_2c0 = 8;
      local_2b5 = 0;
      bVar5 = (int)local_2b0 == 2;
      local_2d0 = PTR_DAT_04bb6a30 + 0x10;
      local_2c8 = auStack_2bc;
      (**(code **)(local_118 + 0x18))(&local_118);
      puVar4 = local_110;
      if (auStack_2bc != local_110) {
        (**(code **)(local_118 + 0x18))(&local_118);
        lVar18 = 0;
        do {
          if (local_110[lVar18] == '\0') goto LAB_03350a80;
          if (local_110[lVar18 + 1] == '\0') {
            lVar18 = lVar18 + 1;
            goto LAB_03350a80;
          }
          if (local_110[lVar18 + 2] == '\0') {
            lVar18 = lVar18 + 2;
            goto LAB_03350a80;
          }
          lVar18 = lVar18 + 3;
        } while (lVar18 != 0x80001);
        lVar18 = 0;
LAB_03350a80:
        iVar7 = (int)lVar18;
        if (local_2c0 <= (int)lVar18) {
          iVar7 = local_2c0 + -1;
        }
        memcpy(auStack_2bc,puVar4,(long)iVar7);
        auStack_2bc[iVar7] = 0;
      }
      local_2d0 = puVar1 + 0x10;
      uVar12 = *(undefined8 *)(param_1 + 0x25d0);
      local_2c8[(long)local_2c0 + -1] = 0;
      puVar21 = PTR_DAT_04bb2020;
      local_2e0 = PTR_DAT_04bb2020 + 0x10;
      puStack_2d8 = local_2c8;
      FUN_03412d40(uVar12,&local_2e0,PTR_DAT_04bb37e0,0x11);
      *(undefined2 *)(param_1 + 0x2698) = 0x101;
      if ((uVar6 & 1) != 0 || bVar5) {
        local_2b5 = 0;
        local_2c0 = 8;
        local_2d0 = PTR_DAT_04bb6a30 + 0x10;
        local_2c8 = auStack_2bc;
        (**(code **)(local_f8 + 0x18))(&local_f8);
        puVar4 = local_f0;
        if (auStack_2bc != local_f0) {
          (**(code **)(local_f8 + 0x18))(&local_f8);
          lVar18 = 0;
          do {
            if (local_f0[lVar18] == '\0') goto LAB_03350b90;
            if (local_f0[lVar18 + 1] == '\0') {
              lVar18 = lVar18 + 1;
              goto LAB_03350b90;
            }
            if (local_f0[lVar18 + 2] == '\0') {
              lVar18 = lVar18 + 2;
              goto LAB_03350b90;
            }
            lVar18 = lVar18 + 3;
          } while (lVar18 != 0x80001);
          lVar18 = 0;
LAB_03350b90:
          iVar7 = (int)lVar18;
          if (local_2c0 <= (int)lVar18) {
            iVar7 = local_2c0 + -1;
          }
          memcpy(auStack_2bc,puVar4,(long)iVar7);
          auStack_2bc[iVar7] = 0;
        }
        local_2d0 = puVar1 + 0x10;
        uVar12 = *(undefined8 *)(param_1 + 0x26a0);
        local_2e0 = puVar21 + 0x10;
        local_2c8[(long)local_2c0 + -1] = 0;
        puStack_2d8 = local_2c8;
        FUN_03412d40(uVar12,&local_2e0,PTR_DAT_04bb37e0,0x11);
        *(undefined2 *)(param_1 + 0x2768) = 0x101;
      }
    }
    puVar21 = PTR_DAT_04bc8e68;
    plVar13 = (long *)PTR_DAT_04bc1118;
  }
  lVar18 = *(long *)(*plVar13 + 0x20);
  iVar7 = *(int *)(lVar18 + 0x1568);
  if (*(int *)(lVar18 + 0x1050) == 1) {
    uVar12 = 0x40000000;
    if (iVar7 != 1) {
      uVar12 = 0x40400000;
    }
  }
  else {
    uVar12 = 0;
    if (((iVar7 != 1) && (*(char *)(lVar18 + 0x106a) == '\0')) &&
       (iVar7 != 0 || *(char *)(lVar18 + 0x16408) == '\0')) {
      uVar12 = 0x3f800000;
    }
  }
  if (**(char **)(param_1 + 5000) != '\0') {
    local_250 = puVar21 + 0x10;
    pcStack_248 = "TextAreaPos";
    FUN_032c8270(uVar12,*(undefined8 *)(param_1 + 0x3d0),&local_250,0);
  }
  if (((*(long *)(param_1 + 0x28) != 0) && (-1 < *(int *)(param_1 + 0x38))) &&
     (plVar13 = *(long **)(*(long *)(param_1 + 0x28) + 0x80), plVar13 != (long *)0x0)) {
    (**(code **)(*plVar13 + 0x20))();
  }
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(long *)(param_1 + 0x30) = param_1 + 0xe8;
  return 1;
}

