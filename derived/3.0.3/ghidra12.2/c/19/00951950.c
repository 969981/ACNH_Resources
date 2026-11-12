
/* WARNING: Removing unreachable block (ram,0x00952528) */

void FUN_00951950(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  size_t sVar5;
  uint uVar6;
  char cVar7;
  undefined1 auVar8 [16];
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  ulong *puVar17;
  undefined8 *puVar18;
  void *pvVar19;
  long *plVar20;
  int iVar21;
  ulong *puVar22;
  int *piVar23;
  undefined1 uVar24;
  ulong *puVar25;
  undefined1 uVar26;
  ulong uVar27;
  undefined8 *puVar28;
  int iVar29;
  ulong uVar30;
  uint *puVar31;
  ulong uVar32;
  long lVar33;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined2 local_66;
  undefined4 local_64;
  
  *(code **)(param_1 + 8) = FUN_00952cb0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(code **)(param_1 + 0x28) = FUN_00953340;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(code **)(param_1 + 0x38) = FUN_009534b0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(code **)(param_1 + 0x18) = FUN_00953160;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(code **)(param_1 + 0x58) = FUN_00953b80;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(code **)(param_1 + 0x48) = FUN_009539a0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(code **)(param_1 + 0x68) = FUN_00953d60;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(code **)(param_1 + 0x78) = FUN_00953f40;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(code **)(param_1 + 0x98) = FUN_00954120;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  *(code **)(param_1 + 0x88) = FUN_00954300;
  *(undefined8 *)(param_1 + 0x90) = 0;
  local_78 = "ColBgResMgr";
  local_80 = puVar1;
  uVar14 = FUN_038c6d48(0x1cc00,&local_80,param_2,8,1,0);
  *(undefined8 *)(param_1 + 0xdf8) = uVar14;
  local_78 = "ColBgResMgrCompressHeap";
  local_80 = puVar1;
  uVar14 = FUN_038c6d48(0x18000,&local_80,param_2,8,1,0);
  puVar1 = PTR_DAT_04bb5008;
  *(undefined8 *)(param_1 + 0xe08) = uVar14;
  plVar20 = (long *)PTR_DAT_04bb2698;
  iVar21 = *(int *)(*(long *)puVar1 + 0x5b8);
  if (iVar21 < 1) {
    lVar33 = *(long *)(*(long *)puVar1 + 0x4a8);
    if ((lVar33 != 0) && (piVar23 = *(int **)(lVar33 + 8), piVar23 != (int *)0x0)) {
      iVar21 = *piVar23;
      goto LAB_00951a78;
    }
    uVar13 = 0xd;
LAB_00951aa4:
    uVar32 = (ulong)uVar13;
    lVar33 = *(long *)PTR_DAT_04bb2698;
    uVar30 = (uVar32 + (ulong)uVar13 * 4) * 0x10 | 8;
    if (lVar33 == 0) {
      puVar17 = malloc(uVar30);
    }
    else {
      plVar15 = *(long **)(param_1 + 0xdf8);
      if (plVar15 == (long *)0x0) {
        lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar15 = (long *)(lVar33 + 8);
        if (lVar16 != 0) {
          plVar15 = (long *)(lVar16 + 0xa8);
        }
        plVar15 = (long *)*plVar15;
        if (plVar15 == (long *)0x0) goto LAB_00951b88;
      }
      puVar17 = (ulong *)(**(code **)(*plVar15 + 0x30))(plVar15,uVar30,8);
    }
    if (puVar17 != (ulong *)0x0) {
      puVar25 = puVar17 + 1;
      *puVar17 = uVar32;
      puVar2 = PTR_DAT_04bdf0c8 + 0x10;
      puVar4 = PTR_DAT_04bdf1d8 + 0x10;
      puVar17 = puVar25;
      do {
        *puVar17 = 0;
        *(undefined1 *)(puVar17 + 1) = 0;
        puVar17[2] = (ulong)puVar2;
        *(undefined1 *)(puVar17 + 3) = 1;
        *(undefined4 *)((long)puVar17 + 0x1c) = 0;
        puVar17[8] = 0;
        *(undefined4 *)(puVar17 + 9) = 0xffffffff;
        puVar17[4] = 0;
        puVar17[5] = (ulong)puVar4;
        puVar17[6] = 0;
        puVar17[7] = 0;
        puVar17 = puVar17 + 10;
      } while (puVar17 != puVar25 + uVar32 * 10);
      *(uint *)(param_1 + 0x4e8) = uVar13;
      *(ulong **)(param_1 + 0x4f0) = puVar25;
    }
  }
  else {
LAB_00951a78:
    uVar13 = iVar21 + 0xd;
    if (0 < (int)uVar13) goto LAB_00951aa4;
  }
LAB_00951b88:
  uVar13 = *(uint *)(*(long *)puVar1 + 0x9b8);
  if ((0 < (int)uVar13) ||
     (((lVar33 = *(long *)(*(long *)puVar1 + 0x8a8), lVar33 != 0 &&
       (puVar31 = *(uint **)(lVar33 + 8), puVar31 != (uint *)0x0)) &&
      (uVar13 = *puVar31, 0 < (int)uVar13)))) {
    uVar32 = (ulong)uVar13;
    lVar33 = *plVar20;
    uVar30 = (uVar32 + (ulong)uVar13 * 4) * 0x10 | 8;
    if (lVar33 == 0) {
      puVar17 = malloc(uVar30);
    }
    else {
      plVar15 = *(long **)(param_1 + 0xdf8);
      if (plVar15 == (long *)0x0) {
        lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar15 = (long *)(lVar33 + 8);
        if (lVar16 != 0) {
          plVar15 = (long *)(lVar16 + 0xa8);
        }
        plVar15 = (long *)*plVar15;
        if (plVar15 == (long *)0x0) goto LAB_00951c98;
      }
      puVar17 = (ulong *)(**(code **)(*plVar15 + 0x30))(plVar15,uVar30,8);
    }
    if (puVar17 != (ulong *)0x0) {
      puVar25 = puVar17 + 1;
      *puVar17 = uVar32;
      puVar2 = PTR_DAT_04bdf0c8 + 0x10;
      puVar4 = PTR_DAT_04bdf1d8 + 0x10;
      puVar17 = puVar25;
      do {
        *puVar17 = 0;
        *(undefined1 *)(puVar17 + 1) = 0;
        puVar17[2] = (ulong)puVar2;
        *(undefined1 *)(puVar17 + 3) = 1;
        *(undefined4 *)((long)puVar17 + 0x1c) = 0;
        puVar17[8] = 0;
        *(undefined4 *)(puVar17 + 9) = 0xffffffff;
        puVar17[4] = 0;
        puVar17[5] = (ulong)puVar4;
        puVar17[6] = 0;
        puVar17[7] = 0;
        puVar17 = puVar17 + 10;
      } while (puVar17 != puVar25 + uVar32 * 10);
      *(uint *)(param_1 + 0x4f8) = uVar13;
      *(ulong **)(param_1 + 0x500) = puVar25;
    }
  }
LAB_00951c98:
  lVar33 = *plVar20;
  if (lVar33 == 0) {
    puVar18 = malloc(0x4148);
    if (puVar18 == (undefined8 *)0x0) goto LAB_00951da4;
LAB_00951cec:
    puVar3 = PTR_DAT_04bdf1d8;
    puVar4 = PTR_DAT_04bdf0c8;
    *puVar18 = 0x48;
    puVar2 = PTR_DAT_04bb2d88 + 0x10;
    puVar28 = puVar18 + 1;
    do {
      *puVar28 = 0;
      *(undefined1 *)(puVar28 + 1) = 0;
      *(undefined1 *)((long)puVar28 + 100) = 0;
      puVar28[2] = puVar4 + 0x10;
      *(undefined1 *)(puVar28 + 3) = 1;
      *(undefined4 *)((long)puVar28 + 0x1c) = 0;
      puVar28[8] = 0;
      *(undefined4 *)(puVar28 + 9) = 0xffffffff;
      *(undefined4 *)(puVar28 + 0xc) = 0x80;
      *(undefined1 *)((long)puVar28 + 0xe3) = 0;
      puVar28[4] = 0;
      puVar28[5] = puVar3 + 0x10;
      puVar28[6] = 0;
      puVar28[7] = 0;
      puVar28[10] = puVar2;
      puVar28[0xb] = (undefined1 *)((long)puVar28 + 100);
      puVar28 = puVar28 + 0x1d;
    } while (puVar28 != puVar18 + 0x829);
    *(undefined4 *)(param_1 + 0x508) = 0x48;
    *(undefined8 **)(param_1 + 0x510) = puVar18 + 1;
    lVar33 = *plVar20;
    if (lVar33 == 0) goto LAB_00951d88;
LAB_00951dac:
    plVar15 = *(long **)(param_1 + 0xdf8);
    if (plVar15 != (long *)0x0) {
LAB_00951de0:
      puVar18 = (undefined8 *)(**(code **)(*plVar15 + 0x30))(plVar15,0x4148,8);
      if (puVar18 == (undefined8 *)0x0) goto LAB_00951e8c;
      goto LAB_00951df8;
    }
    lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar15 = (long *)(lVar33 + 8);
    if (lVar16 != 0) {
      plVar15 = (long *)(lVar16 + 0xa8);
    }
    plVar15 = (long *)*plVar15;
    if (plVar15 != (long *)0x0) goto LAB_00951de0;
  }
  else {
    plVar15 = *(long **)(param_1 + 0xdf8);
    if (plVar15 == (long *)0x0) {
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar15 = (long *)(lVar33 + 8);
      if (lVar16 != 0) {
        plVar15 = (long *)(lVar16 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
      if (plVar15 == (long *)0x0) goto LAB_00951da4;
    }
    puVar18 = (undefined8 *)(**(code **)(*plVar15 + 0x30))(plVar15,0x4148,8);
    if (puVar18 != (undefined8 *)0x0) goto LAB_00951cec;
LAB_00951da4:
    lVar33 = *plVar20;
    if (lVar33 != 0) goto LAB_00951dac;
LAB_00951d88:
    puVar18 = malloc(0x4148);
    if (puVar18 != (undefined8 *)0x0) {
LAB_00951df8:
      puVar3 = PTR_DAT_04bdf1d8;
      puVar4 = PTR_DAT_04bdf0c8;
      *puVar18 = 0x48;
      puVar2 = PTR_DAT_04bb2d88 + 0x10;
      puVar28 = puVar18 + 1;
      do {
        *puVar28 = 0;
        *(undefined1 *)(puVar28 + 1) = 0;
        *(undefined1 *)((long)puVar28 + 100) = 0;
        puVar28[2] = puVar4 + 0x10;
        *(undefined1 *)(puVar28 + 3) = 1;
        *(undefined4 *)((long)puVar28 + 0x1c) = 0;
        puVar28[8] = 0;
        *(undefined4 *)(puVar28 + 9) = 0xffffffff;
        *(undefined4 *)(puVar28 + 0xc) = 0x80;
        *(undefined1 *)((long)puVar28 + 0xe3) = 0;
        puVar28[4] = 0;
        puVar28[5] = puVar3 + 0x10;
        puVar28[6] = 0;
        puVar28[7] = 0;
        puVar28[10] = puVar2;
        puVar28[0xb] = (undefined1 *)((long)puVar28 + 100);
        puVar28 = puVar28 + 0x1d;
      } while (puVar28 != puVar18 + 0x829);
      *(undefined4 *)(param_1 + 0x518) = 0x48;
      *(undefined8 **)(param_1 + 0x520) = puVar18 + 1;
    }
  }
LAB_00951e8c:
  puVar2 = PTR_DAT_04bb2110;
  lVar33 = *(long *)PTR_DAT_04bb2110;
  iVar21 = *(int *)(lVar33 + 8);
  if (iVar21 == 0) {
    plVar15 = (long *)0x0;
  }
  else {
    plVar15 = (long *)**(undefined8 **)(lVar33 + 0x10);
  }
  uVar13 = *(uint *)(param_1 + 0x508);
  if (0 < (int)uVar13) {
    uVar11 = 0;
    do {
      lVar33 = *(long *)(param_1 + 0x510);
      uVar10 = uVar11;
      if (uVar13 <= uVar11) {
        uVar10 = 0;
      }
      nn::os::LockMutex((MutexType *)(plVar15 + 0x4d));
      (**(code **)(*plVar15 + 0x38))(plVar15,lVar33 + (ulong)uVar10 * 0xe8);
      nn::os::UnlockMutex((MutexType *)(plVar15 + 0x4d));
      uVar13 = uVar11;
      if (*(uint *)(param_1 + 0x508) <= uVar11) {
        uVar13 = 0;
      }
      uVar11 = uVar11 + 1;
      **(undefined1 **)(*(long *)(param_1 + 0x510) + (ulong)uVar13 * 0xe8 + 0x58) = 0;
      uVar13 = *(uint *)(param_1 + 0x508);
    } while ((int)uVar11 < (int)uVar13);
    lVar33 = *(long *)puVar2;
    iVar21 = *(int *)(lVar33 + 8);
  }
  if (iVar21 == 0) {
    plVar15 = (long *)0x0;
  }
  else {
    plVar15 = (long *)**(undefined8 **)(lVar33 + 0x10);
  }
  uVar13 = *(uint *)(param_1 + 0x518);
  if (0 < (int)uVar13) {
    uVar11 = 0;
    do {
      lVar33 = *(long *)(param_1 + 0x520);
      uVar10 = uVar11;
      if (uVar13 <= uVar11) {
        uVar10 = 0;
      }
      nn::os::LockMutex((MutexType *)(plVar15 + 0x4d));
      (**(code **)(*plVar15 + 0x38))(plVar15,lVar33 + (ulong)uVar10 * 0xe8);
      nn::os::UnlockMutex((MutexType *)(plVar15 + 0x4d));
      uVar13 = uVar11;
      if (*(uint *)(param_1 + 0x518) <= uVar11) {
        uVar13 = 0;
      }
      uVar11 = uVar11 + 1;
      **(undefined1 **)(*(long *)(param_1 + 0x520) + (ulong)uVar13 * 0xe8 + 0x58) = 0;
      uVar13 = *(uint *)(param_1 + 0x518);
    } while ((int)uVar11 < (int)uVar13);
  }
  uVar13 = *(uint *)(*(long *)puVar1 + 0x11b8);
  if ((0 < (int)uVar13) ||
     (((lVar33 = *(long *)(*(long *)puVar1 + 0x10a8), lVar33 != 0 &&
       (puVar31 = *(uint **)(lVar33 + 8), puVar31 != (uint *)0x0)) &&
      (uVar13 = *puVar31, 0 < (int)uVar13)))) {
    uVar32 = (ulong)uVar13;
    lVar33 = *plVar20;
    uVar30 = (uVar32 + (ulong)uVar13 * 4) * 0x10 | 8;
    if (lVar33 == 0) {
      puVar17 = malloc(uVar30);
    }
    else {
      plVar15 = *(long **)(param_1 + 0xdf8);
      if (plVar15 == (long *)0x0) {
        lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar15 = (long *)(lVar33 + 8);
        if (lVar16 != 0) {
          plVar15 = (long *)(lVar16 + 0xa8);
        }
        plVar15 = (long *)*plVar15;
        if (plVar15 == (long *)0x0) goto LAB_009520cc;
      }
      puVar17 = (ulong *)(**(code **)(*plVar15 + 0x30))(plVar15,uVar30,8);
    }
    if (puVar17 != (ulong *)0x0) {
      puVar25 = puVar17 + 1;
      *puVar17 = uVar32;
      puVar2 = PTR_DAT_04bdf0c8 + 0x10;
      puVar4 = PTR_DAT_04bdf1d8 + 0x10;
      puVar17 = puVar25;
      do {
        *puVar17 = 0;
        *(undefined1 *)(puVar17 + 1) = 0;
        puVar17[2] = (ulong)puVar2;
        *(undefined1 *)(puVar17 + 3) = 1;
        *(undefined4 *)((long)puVar17 + 0x1c) = 0;
        puVar17[8] = 0;
        *(undefined4 *)(puVar17 + 9) = 0xffffffff;
        puVar17[4] = 0;
        puVar17[5] = (ulong)puVar4;
        puVar17[6] = 0;
        puVar17[7] = 0;
        puVar17 = puVar17 + 10;
      } while (puVar17 != puVar25 + uVar32 * 10);
      *(uint *)(param_1 + 0xd68) = uVar13;
      *(ulong **)(param_1 + 0xd70) = puVar25;
    }
  }
LAB_009520cc:
  uVar13 = *(uint *)(*(long *)puVar1 + 0x13b8);
  if ((0 < (int)uVar13) ||
     (((lVar33 = *(long *)(*(long *)puVar1 + 0x12a8), lVar33 != 0 &&
       (puVar31 = *(uint **)(lVar33 + 8), puVar31 != (uint *)0x0)) &&
      (uVar13 = *puVar31, 0 < (int)uVar13)))) {
    uVar32 = (ulong)uVar13;
    lVar33 = *plVar20;
    uVar30 = (uVar32 + (ulong)uVar13 * 4) * 0x10 | 8;
    if (lVar33 == 0) {
      puVar17 = malloc(uVar30);
    }
    else {
      plVar15 = *(long **)(param_1 + 0xdf8);
      if (plVar15 == (long *)0x0) {
        lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar15 = (long *)(lVar33 + 8);
        if (lVar16 != 0) {
          plVar15 = (long *)(lVar16 + 0xa8);
        }
        plVar15 = (long *)*plVar15;
        if (plVar15 == (long *)0x0) goto LAB_009521d8;
      }
      puVar17 = (ulong *)(**(code **)(*plVar15 + 0x30))(plVar15,uVar30,8);
    }
    if (puVar17 != (ulong *)0x0) {
      puVar25 = puVar17 + 1;
      *puVar17 = uVar32;
      puVar2 = PTR_DAT_04bdf0c8 + 0x10;
      puVar4 = PTR_DAT_04bdf1d8 + 0x10;
      puVar17 = puVar25;
      do {
        *puVar17 = 0;
        *(undefined1 *)(puVar17 + 1) = 0;
        puVar17[2] = (ulong)puVar2;
        *(undefined1 *)(puVar17 + 3) = 1;
        *(undefined4 *)((long)puVar17 + 0x1c) = 0;
        puVar17[8] = 0;
        *(undefined4 *)(puVar17 + 9) = 0xffffffff;
        puVar17[4] = 0;
        puVar17[5] = (ulong)puVar4;
        puVar17[6] = 0;
        puVar17[7] = 0;
        puVar17 = puVar17 + 10;
      } while (puVar17 != puVar25 + uVar32 * 10);
      *(uint *)(param_1 + 0xd78) = uVar13;
      *(ulong **)(param_1 + 0xd80) = puVar25;
    }
  }
LAB_009521d8:
  puVar2 = PTR_DAT_04bb5c90;
  uVar13 = *(uint *)(*(long *)PTR_DAT_04bb5c90 + 0x260);
  if ((0 < (int)uVar13) ||
     (((lVar33 = *(long *)(*(long *)PTR_DAT_04bb5c90 + 0x150), lVar33 != 0 &&
       (puVar31 = *(uint **)(lVar33 + 8), puVar31 != (uint *)0x0)) &&
      (uVar13 = *puVar31, 0 < (int)uVar13)))) {
    uVar32 = (ulong)uVar13;
    lVar33 = *plVar20;
    uVar30 = (uVar32 + (ulong)uVar13 * 4) * 0x10 | 8;
    if (lVar33 == 0) {
      puVar17 = malloc(uVar30);
    }
    else {
      plVar15 = *(long **)(param_1 + 0xdf8);
      if (plVar15 == (long *)0x0) {
        lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar15 = (long *)(lVar33 + 8);
        if (lVar16 != 0) {
          plVar15 = (long *)(lVar16 + 0xa8);
        }
        plVar15 = (long *)*plVar15;
        if (plVar15 == (long *)0x0) goto LAB_009522ec;
      }
      puVar17 = (ulong *)(**(code **)(*plVar15 + 0x30))(plVar15,uVar30,8);
    }
    if (puVar17 != (ulong *)0x0) {
      puVar25 = puVar17 + 1;
      *puVar17 = uVar32;
      puVar4 = PTR_DAT_04bdf0c8 + 0x10;
      puVar3 = PTR_DAT_04bdf1d8 + 0x10;
      puVar17 = puVar25;
      do {
        *puVar17 = 0;
        *(undefined1 *)(puVar17 + 1) = 0;
        puVar17[2] = (ulong)puVar4;
        *(undefined1 *)(puVar17 + 3) = 1;
        *(undefined4 *)((long)puVar17 + 0x1c) = 0;
        puVar17[8] = 0;
        *(undefined4 *)(puVar17 + 9) = 0xffffffff;
        puVar17[4] = 0;
        puVar17[5] = (ulong)puVar3;
        puVar17[6] = 0;
        puVar17[7] = 0;
        puVar17 = puVar17 + 10;
      } while (puVar17 != puVar25 + uVar32 * 10);
      *(uint *)(param_1 + 0xd88) = uVar13;
      *(ulong **)(param_1 + 0xd90) = puVar25;
    }
  }
LAB_009522ec:
  uVar13 = *(uint *)(*(long *)puVar2 + 0x660);
  if ((0 < (int)uVar13) ||
     (((lVar33 = *(long *)(*(long *)puVar2 + 0x550), lVar33 != 0 &&
       (puVar31 = *(uint **)(lVar33 + 8), puVar31 != (uint *)0x0)) &&
      (uVar13 = *puVar31, 0 < (int)uVar13)))) {
    uVar32 = (ulong)uVar13;
    lVar33 = *plVar20;
    uVar30 = (uVar32 + (ulong)uVar13 * 4) * 0x10 | 8;
    if (lVar33 == 0) {
      puVar17 = malloc(uVar30);
    }
    else {
      plVar15 = *(long **)(param_1 + 0xdf8);
      if (plVar15 == (long *)0x0) {
        lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar15 = (long *)(lVar33 + 8);
        if (lVar16 != 0) {
          plVar15 = (long *)(lVar16 + 0xa8);
        }
        plVar15 = (long *)*plVar15;
        if (plVar15 == (long *)0x0) goto LAB_009523f8;
      }
      puVar17 = (ulong *)(**(code **)(*plVar15 + 0x30))(plVar15,uVar30,8);
    }
    if (puVar17 != (ulong *)0x0) {
      puVar25 = puVar17 + 1;
      *puVar17 = uVar32;
      puVar2 = PTR_DAT_04bdf0c8 + 0x10;
      puVar4 = PTR_DAT_04bdf1d8 + 0x10;
      puVar17 = puVar25;
      do {
        *puVar17 = 0;
        *(undefined1 *)(puVar17 + 1) = 0;
        puVar17[2] = (ulong)puVar2;
        *(undefined1 *)(puVar17 + 3) = 1;
        *(undefined4 *)((long)puVar17 + 0x1c) = 0;
        puVar17[8] = 0;
        *(undefined4 *)(puVar17 + 9) = 0xffffffff;
        puVar17[4] = 0;
        puVar17[5] = (ulong)puVar4;
        puVar17[6] = 0;
        puVar17[7] = 0;
        puVar17 = puVar17 + 10;
      } while (puVar17 != puVar25 + uVar32 * 10);
      *(uint *)(param_1 + 0xd98) = uVar13;
      *(ulong **)(param_1 + 0xda0) = puVar25;
    }
  }
LAB_009523f8:
  uVar13 = *(uint *)(*(long *)puVar1 + 0x17b8);
  if ((0 < (int)uVar13) ||
     (((lVar33 = *(long *)(*(long *)puVar1 + 0x16a8), lVar33 != 0 &&
       (puVar31 = *(uint **)(lVar33 + 8), puVar31 != (uint *)0x0)) &&
      (uVar13 = *puVar31, 0 < (int)uVar13)))) {
    uVar32 = (ulong)uVar13;
    lVar33 = *plVar20;
    uVar30 = (uVar32 + (ulong)uVar13 * 4) * 0x10 | 8;
    if (lVar33 == 0) {
      puVar17 = malloc(uVar30);
    }
    else {
      plVar15 = *(long **)(param_1 + 0xdf8);
      if (plVar15 == (long *)0x0) {
        lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar15 = (long *)(lVar33 + 8);
        if (lVar16 != 0) {
          plVar15 = (long *)(lVar16 + 0xa8);
        }
        plVar15 = (long *)*plVar15;
        if (plVar15 == (long *)0x0) goto LAB_00952508;
      }
      puVar17 = (ulong *)(**(code **)(*plVar15 + 0x30))(plVar15,uVar30,8);
    }
    if (puVar17 != (ulong *)0x0) {
      puVar25 = puVar17 + 1;
      *puVar17 = uVar32;
      puVar1 = PTR_DAT_04bdf0c8 + 0x10;
      puVar2 = PTR_DAT_04bdf1d8 + 0x10;
      puVar17 = puVar25;
      do {
        *puVar17 = 0;
        *(undefined1 *)(puVar17 + 1) = 0;
        puVar17[2] = (ulong)puVar1;
        *(undefined1 *)(puVar17 + 3) = 1;
        *(undefined4 *)((long)puVar17 + 0x1c) = 0;
        puVar17[8] = 0;
        *(undefined4 *)(puVar17 + 9) = 0xffffffff;
        puVar17[4] = 0;
        puVar17[5] = (ulong)puVar2;
        puVar17[6] = 0;
        puVar17[7] = 0;
        puVar17 = puVar17 + 10;
      } while (puVar17 != puVar25 + uVar32 * 10);
      *(uint *)(param_1 + 0xda8) = uVar13;
      *(ulong **)(param_1 + 0xdb0) = puVar25;
    }
  }
LAB_00952508:
  puVar2 = PTR_DAT_04bb43c0;
  puVar1 = PTR_DAT_04bb37e0;
  local_80 = (undefined *)CONCAT44(local_80._4_4_,6);
  lVar33 = *(long *)PTR_DAT_04bc0500;
  uVar13 = *(uint *)(lVar33 + 0xc4);
  if (uVar13 != 0) {
    uVar30 = 0;
    uVar32 = 0;
    puVar4 = PTR_DAT_04bc0510 + 0x10;
    do {
      if (((*(int *)(lVar33 + 0xc0) == 0) || ((int)uVar30 < 0)) ||
         (*(int *)(lVar33 + 0xc4) <= (int)uVar30)) {
        local_68 = *(undefined2 *)puVar1;
        uVar24 = puVar1[2];
        uVar26 = puVar1[3];
        local_66 = *(undefined2 *)(puVar1 + 2);
        local_64 = *(undefined4 *)(puVar1 + 4);
      }
      else {
        local_66 = 0;
        local_64 = 0;
        local_68 = (undefined2)**(undefined4 **)(*(long *)(lVar33 + 200) + uVar30 * 8);
        FUN_0277d4ac(&local_68);
        uVar24 = (undefined1)local_66;
        uVar26 = local_66._1_1_;
      }
      lVar16 = *(long *)puVar2;
      local_78 = (char *)CONCAT44(local_64,CONCAT13(uVar26,CONCAT12(uVar24,local_68)));
      local_70 = 0;
      local_80 = puVar4;
      uVar10 = FUN_0277d6c4(&local_78);
      uVar11 = 0;
      if (*(long *)puVar2 != 0) {
        lVar16 = *(long *)(lVar16 + 0x57e58);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if (uVar10 < *(uint *)(lVar16 + 0x1d8)) {
          uVar11 = 0;
          if (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar10 * 8) == 0) goto LAB_00952568;
          lVar16 = *(long *)PTR_DAT_04bc0428;
          uVar11 = FUN_0277d6c4(&local_68);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
          if (((uVar11 < *(uint *)(lVar16 + 0x1d8)) &&
              (puVar31 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar11 * 8),
              puVar31 != (uint *)0x0)) && (uVar10 = *puVar31, uVar10 != 0)) {
            cVar7 = *PTR_DAT_04bbfe88;
            do {
              if (cVar7 == '\0') {
                cVar7 = '\x01';
                *PTR_DAT_04bbfe88 = 1;
                memset(PTR_DAT_04bbfe90,0xff,0x1ac);
                uVar10 = *puVar31;
              }
              else {
                uVar6 = *(uint *)(PTR_DAT_04bbfe90 + 0x170);
                if (-1 < (int)uVar6) {
                  uVar11 = 0;
                  if ((char *)((ulong)uVar6 + (long)puVar31) != (char *)0x0) {
                    uVar11 = (uint)(*(char *)((ulong)uVar6 + (long)puVar31) != '\0');
                  }
                  goto LAB_00952568;
                }
                if (uVar6 != 0xffffffff) break;
              }
              puVar9 = (uint *)(ulong)uVar10;
              uVar11 = 0;
              if ((puVar9 == (uint *)0x0) || (uVar11 = 0, puVar31 == puVar9)) goto LAB_00952568;
              lVar16 = 0xc;
              if (*(char *)((long)puVar31 + (10 - (long)puVar9)) != '\0') {
                lVar16 = 0x1c;
              }
              lVar16 = (long)puVar31 + (lVar16 - (long)puVar9);
              if (lVar16 == 0) break;
              uVar27 = (ulong)*(ushort *)((long)puVar31 + (8 - (long)puVar9));
              *(undefined4 *)(PTR_DAT_04bbfe90 + 0x170) = 0xfffffffe;
              if (uVar27 == 0) break;
              piVar23 = (int *)(lVar16 + 4);
              while (piVar23[-1] != -0x5b24697b) {
                uVar11 = 0;
                piVar23 = piVar23 + 2;
                uVar27 = uVar27 - 1;
                if (uVar27 == 0) goto LAB_00952568;
              }
              uVar11 = 0;
              iVar21 = 0;
              if (*piVar23 != -1) {
                iVar21 = *piVar23;
              }
              *(int *)(PTR_DAT_04bbfe90 + 0x170) = iVar21;
              uVar10 = *puVar31;
              if (uVar10 == 0) goto LAB_00952568;
            } while( true );
          }
        }
        uVar11 = 0;
      }
LAB_00952568:
      plVar20 = (long *)PTR_DAT_04bb2698;
      uVar30 = uVar30 + 1;
      uVar11 = (int)uVar32 + uVar11;
      uVar32 = (ulong)uVar11;
    } while (uVar30 != uVar13);
    if (uVar11 != 0) {
      lVar33 = *(long *)PTR_DAT_04bb2698;
      if (lVar33 == 0) {
        pvVar19 = malloc(uVar32 << 2);
joined_r0x00952888:
        if (pvVar19 != (void *)0x0) {
          *(uint *)(param_1 + 0xdb8) = uVar11;
          *(void **)(param_1 + 0xdc0) = pvVar19;
        }
      }
      else {
        plVar15 = *(long **)(param_1 + 0xdf8);
        if (plVar15 != (long *)0x0) {
LAB_009527fc:
          pvVar19 = (void *)(**(code **)(*plVar15 + 0x30))(plVar15,uVar32 << 2,8);
          goto joined_r0x00952888;
        }
        lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar15 = (long *)(lVar33 + 8);
        if (lVar16 != 0) {
          plVar15 = (long *)(lVar16 + 0xa8);
        }
        plVar15 = (long *)*plVar15;
        if (plVar15 != (long *)0x0) goto LAB_009527fc;
      }
      lVar33 = *plVar20;
      sVar5 = uVar32 * 0x28 + 8;
      if (lVar33 == 0) {
        puVar17 = malloc(sVar5);
joined_r0x00952898:
        if (puVar17 != (ulong *)0x0) {
          puVar25 = puVar17 + 1;
          *puVar17 = uVar32;
          uVar27 = uVar32 * 0x28 - 0x28;
          uVar13 = ((uint)(uVar27 / 0x28) & 0x7ffffff) + 1;
          uVar30 = (ulong)uVar13 & 3;
          puVar17 = puVar25;
          if ((uVar13 & 3) != 0) {
            do {
              puVar17[4] = 0;
              uVar30 = uVar30 - 1;
              puVar17[2] = 0;
              *(undefined4 *)(puVar17 + 3) = 0;
              *puVar17 = (ulong)&PTR_FUN_04929c28;
              puVar17[1] = 0;
              puVar17 = puVar17 + 5;
            } while (uVar30 != 0);
          }
          if (0x77 < uVar27) {
            do {
              *puVar17 = (ulong)&PTR_FUN_04929c28;
              puVar17[1] = 0;
              puVar17[2] = 0;
              *(undefined4 *)(puVar17 + 3) = 0;
              *(undefined4 *)(puVar17 + 8) = 0;
              *(undefined4 *)(puVar17 + 0xd) = 0;
              puVar17[0x13] = 0;
              *(undefined4 *)(puVar17 + 0x12) = 0;
              puVar17[4] = 0;
              puVar17[5] = (ulong)&PTR_FUN_04929c28;
              puVar17[6] = 0;
              puVar17[7] = 0;
              puVar17[9] = 0;
              puVar17[10] = (ulong)&PTR_FUN_04929c28;
              puVar17[0xb] = 0;
              puVar17[0xc] = 0;
              puVar17[0xe] = 0;
              puVar17[0xf] = (ulong)&PTR_FUN_04929c28;
              puVar17[0x10] = 0;
              puVar17[0x11] = 0;
              puVar17 = puVar17 + 0x14;
            } while (puVar17 != puVar25 + uVar32 * 5);
          }
          *(uint *)(param_1 + 0xe10) = uVar11;
          *(ulong **)(param_1 + 0xe18) = puVar25;
        }
      }
      else {
        plVar15 = *(long **)(param_1 + 0xe08);
        if (plVar15 != (long *)0x0) {
LAB_00952864:
          puVar17 = (ulong *)(**(code **)(*plVar15 + 0x30))(plVar15,sVar5,8);
          goto joined_r0x00952898;
        }
        lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar15 = (long *)(lVar33 + 8);
        if (lVar16 != 0) {
          plVar15 = (long *)(lVar16 + 0xa8);
        }
        plVar15 = (long *)*plVar15;
        if (plVar15 != (long *)0x0) goto LAB_00952864;
      }
      lVar33 = *plVar20;
      sVar5 = (ulong)uVar11 * 0x98 + 8;
      if (lVar33 == 0) {
        puVar17 = malloc(sVar5);
joined_r0x009529c4:
        if (puVar17 != (ulong *)0x0) {
          puVar22 = puVar17 + 1;
          *puVar17 = uVar32;
          puVar1 = PTR_DAT_04bb2d88;
          uVar30 = (ulong)uVar11 * 0x98 - 0x98;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar30;
          puVar25 = puVar22;
          if ((SUB164(auVar8 * ZEXT816(0xd79435e50d79435f),8) >> 7 & 1) == 0) {
            *(undefined1 *)((long)puVar17 + 0x1c) = 0;
            *(undefined4 *)(puVar17 + 3) = 0x80;
            puVar25 = puVar17 + 0x14;
            puVar17[2] = (ulong)((long)puVar17 + 0x1c);
            *(undefined1 *)((long)puVar17 + 0x9b) = 0;
            puVar17[1] = (ulong)(puVar1 + 0x10);
          }
          if (0x97 < uVar30) {
            puVar1 = puVar1 + 0x10;
            do {
              *(undefined4 *)(puVar25 + 2) = 0x80;
              *(undefined1 *)((long)puVar25 + 0x93) = 0;
              *(undefined1 *)((long)puVar25 + 0x14) = 0;
              *(undefined4 *)(puVar25 + 0x15) = 0x80;
              *(undefined1 *)((long)puVar25 + 299) = 0;
              *puVar25 = (ulong)puVar1;
              puVar25[1] = (ulong)((long)puVar25 + 0x14);
              *(undefined1 *)((long)puVar25 + 0xac) = 0;
              puVar25[0x13] = (ulong)puVar1;
              puVar25[0x14] = (ulong)((long)puVar25 + 0xac);
              puVar25 = puVar25 + 0x26;
            } while (puVar25 != puVar22 + (ulong)uVar11 * 0x13);
          }
          *(uint *)(param_1 + 0xdc8) = uVar11;
          *(ulong **)(param_1 + 0xdd0) = puVar22;
        }
      }
      else {
        plVar15 = *(long **)(param_1 + 0xdf8);
        if (plVar15 != (long *)0x0) {
LAB_009529a0:
          puVar17 = (ulong *)(**(code **)(*plVar15 + 0x30))(plVar15,sVar5,8);
          goto joined_r0x009529c4;
        }
        lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar15 = (long *)(lVar33 + 8);
        if (lVar16 != 0) {
          plVar15 = (long *)(lVar16 + 0xa8);
        }
        plVar15 = (long *)*plVar15;
        if (plVar15 != (long *)0x0) goto LAB_009529a0;
      }
      uVar13 = 0;
      do {
        uVar10 = uVar13;
        if (*(uint *)(param_1 + 0xdb8) <= uVar13) {
          uVar10 = 0;
        }
        *(undefined4 *)(*(long *)(param_1 + 0xdc0) + (ulong)uVar10 * 4) = 0xfffe;
        uVar10 = uVar13;
        if (*(uint *)(param_1 + 0xdc8) <= uVar13) {
          uVar10 = 0;
        }
        uVar13 = uVar13 + 1;
        **(undefined1 **)(*(long *)(param_1 + 0xdd0) + (ulong)uVar10 * 0x98 + 8) = 0;
      } while (uVar11 != uVar13);
    }
  }
  puVar1 = PTR_DAT_04bb46d0;
  iVar21 = *(int *)(*(long *)PTR_DAT_04bb46d0 + 0x1c8);
  if (iVar21 < 1) {
    lVar33 = *(long *)(*(long *)PTR_DAT_04bb46d0 + 0xb8);
    if (lVar33 == 0) {
      return;
    }
    piVar23 = *(int **)(lVar33 + 8);
    if (piVar23 == (int *)0x0) {
      return;
    }
    iVar21 = *piVar23;
    if (iVar21 < 1) {
      return;
    }
  }
  iVar29 = 0;
  uVar30 = 0;
  do {
    uVar12 = FUN_017bfae0(*(undefined8 *)puVar1,iVar29);
    uVar13 = FUN_017c0910(*(undefined8 *)puVar1,uVar12);
    iVar29 = iVar29 + 1;
    uVar13 = (int)uVar30 + (uVar13 & 1);
    uVar30 = (ulong)uVar13;
  } while (iVar21 != iVar29);
  if (uVar13 == 0) {
    return;
  }
  lVar33 = *plVar20;
  if (lVar33 == 0) {
    pvVar19 = malloc((ulong)(uVar13 * 2));
  }
  else {
    plVar15 = *(long **)(param_1 + 0xdf8);
    if (plVar15 == (long *)0x0) {
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar15 = (long *)(lVar33 + 8);
      if (lVar16 != 0) {
        plVar15 = (long *)(lVar16 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
      if (plVar15 == (long *)0x0) goto LAB_00952b70;
    }
    pvVar19 = (void *)(**(code **)(*plVar15 + 0x30))(plVar15,(ulong)(uVar13 * 2),8);
  }
  if (pvVar19 != (void *)0x0) {
    *(uint *)(param_1 + 0xde0) = uVar13;
    *(void **)(param_1 + 0xde8) = pvVar19;
  }
LAB_00952b70:
  lVar33 = *plVar20;
  uVar32 = uVar30 * 0x100 + (ulong)uVar13 * -0x10 | 8;
  if (lVar33 == 0) {
    puVar17 = malloc(uVar32);
  }
  else {
    plVar20 = *(long **)(param_1 + 0xe08);
    if (plVar20 == (long *)0x0) {
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar20 = (long *)(lVar33 + 8);
      if (lVar16 != 0) {
        plVar20 = (long *)(lVar16 + 0xa8);
      }
      plVar20 = (long *)*plVar20;
      if (plVar20 == (long *)0x0) {
        return;
      }
    }
    puVar17 = (ulong *)(**(code **)(*plVar20 + 0x30))(plVar20,uVar32,8);
  }
  if (puVar17 != (ulong *)0x0) {
    puVar25 = puVar17 + 1;
    *puVar17 = uVar30;
    puVar17 = puVar25;
    do {
      *puVar17 = (ulong)&PTR_FUN_04929c28;
      puVar17[1] = 0;
      puVar17[2] = 0;
      *(undefined4 *)(puVar17 + 3) = 0;
      *(undefined4 *)(puVar17 + 8) = 0;
      *(undefined4 *)(puVar17 + 0xd) = 0;
      *(undefined4 *)(puVar17 + 0x12) = 0;
      *(undefined4 *)(puVar17 + 0x17) = 0;
      puVar17[0x1d] = 0;
      *(undefined4 *)(puVar17 + 0x1c) = 0;
      puVar17[4] = 0;
      puVar17[5] = (ulong)&PTR_FUN_04929c28;
      puVar17[6] = 0;
      puVar17[7] = 0;
      puVar17[9] = 0;
      puVar17[10] = (ulong)&PTR_FUN_04929c28;
      puVar17[0xb] = 0;
      puVar17[0xc] = 0;
      puVar17[0xe] = 0;
      puVar17[0xf] = (ulong)&PTR_FUN_04929c28;
      puVar17[0x10] = 0;
      puVar17[0x11] = 0;
      puVar17[0x13] = 0;
      puVar17[0x14] = (ulong)&PTR_FUN_04929c28;
      puVar17[0x15] = 0;
      puVar17[0x16] = 0;
      puVar17[0x18] = 0;
      puVar17[0x19] = (ulong)&PTR_FUN_04929c28;
      puVar17[0x1a] = 0;
      puVar17[0x1b] = 0;
      puVar17 = puVar17 + 0x1e;
    } while (puVar17 != puVar25 + (ulong)uVar13 * 0x1e);
    *(uint *)(param_1 + 0xe20) = uVar13;
    *(ulong **)(param_1 + 0xe28) = puVar25;
  }
  return;
}

