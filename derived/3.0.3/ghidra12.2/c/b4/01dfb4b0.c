
void FUN_01dfb4b0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  void *pvVar10;
  undefined4 *puVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined *local_70;
  char *pcStack_68;
  
  puVar3 = PTR_DAT_04bb2110;
  local_70._0_4_ = 3;
  FUN_00818af8(*(undefined8 *)PTR_DAT_04bb2110,&local_70,0x2000000,0);
  local_70 = (undefined *)CONCAT44(local_70._4_4_,3);
  plVar7 = (long *)FUN_00818c64(*(undefined8 *)puVar3,&local_70);
  puVar5 = PTR_DAT_04bb2698;
  puVar3 = PTR_DAT_04bb2020;
  local_70 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "WherearenImageHeap";
  plVar17 = plVar7;
  if (plVar7 == (long *)0x0) {
    lVar16 = *(long *)PTR_DAT_04bb2698;
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar18 = (undefined8 *)(lVar16 + 8);
    if (lVar8 != 0) {
      puVar18 = (undefined8 *)(lVar8 + 0xa8);
    }
    plVar17 = (long *)*puVar18;
    if (plVar17 != (long *)0x0) goto LAB_01dfb564;
    plVar9 = (long *)0x0;
  }
  else {
LAB_01dfb564:
    plVar9 = (long *)(**(code **)(*plVar17 + 0x30))(plVar17,&LAB_01580910,8);
    if (plVar9 != (long *)0x0) {
      FUN_038ca450(plVar9,&local_70,plVar17,plVar9,&LAB_01580910,1,0);
      puVar1 = PTR_DAT_04bd0d80;
      *(undefined4 *)((long)plVar9 + 0xd4) = 0x19400;
      plVar9[0x1f] = 0;
      plVar9[0x1b] = 0;
      plVar9[0x1c] = 0;
      plVar9[0x1d] = 0;
      plVar9[0x1e] = 0;
      *plVar9 = (long)(puVar1 + 0x10);
      FUN_038ccc00(plVar9,0x10,1,plVar17);
    }
  }
  *(long **)(param_1 + 0x68) = plVar9;
  FUN_01d771d4(plVar7);
  puVar18 = *(undefined8 **)PTR_DAT_04bc10a8;
  plVar17 = (long *)*puVar18;
  if (plVar17 != (long *)0x0) {
    if ((int)plVar17[0x20] == 0) {
      (**(code **)(*plVar17 + 0x20))(plVar17);
      *puVar18 = 0;
    }
    else {
      if ((*(uint *)(plVar17 + 0x1a) & 1) == 0) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = plVar17 + 0x12;
        nn::os::LockMutex((MutexType *)(plVar17 + 0x16));
      }
      if ((long *)plVar17[0x1f] != plVar17 + 0x1e) {
        lVar16 = (long)*(int *)((long)plVar17 + 0x104);
        lVar8 = plVar17[0x1f] - lVar16;
        do {
          lVar8 = *(long *)(lVar8 + lVar16 + 8) - lVar16;
        } while (lVar8 != (long)(plVar17 + 0x1e) - lVar16);
      }
      if (plVar7 != (long *)0x0) {
        nn::os::UnlockMutex((MutexType *)(plVar7 + 4));
      }
    }
  }
  local_70 = puVar3 + 0x10;
  pcStack_68 = "NetWherearenInspectMgr";
  plVar17 = (long *)FUN_038c6d48(0,&local_70,*(undefined8 *)(*(long *)PTR_DAT_04bb47c8 + 8),8,1,0);
  lVar8 = *(long *)puVar5;
  *(long **)(param_1 + 0x80) = plVar17;
  if (lVar8 == 0) {
    pvVar10 = malloc(0x129a80);
joined_r0x01dfb74c:
    if (pvVar10 != (void *)0x0) {
      plVar7 = (long *)((long)pvVar10 + 0xfd8);
      *(void **)(param_1 + 0x150) = pvVar10;
      for (lVar8 = 0x12a; plVar7[-0x1fb] = (long)plVar7, lVar8 != 0; lVar8 = lVar8 + -2) {
        *plVar7 = (long)(plVar7 + 0x1fb);
        plVar7 = plVar7 + 0x3f6;
      }
      *(undefined8 *)((long)pvVar10 + 0x128148) = 0;
      *(void **)(param_1 + 0x158) = pvVar10;
      if ((long)pvVar10 + 0x129120 != 0) {
        *(undefined8 *)(param_1 + 0x140) = 0x12c00000000;
        *(long *)(param_1 + 0x148) = (long)pvVar10 + 0x129120;
      }
    }
    *(undefined8 *)(param_1 + 0x164) = 0xffffffffffffffff;
    lVar8 = *(long *)puVar5;
    if (lVar8 == 0) goto LAB_01dfb838;
    if (plVar17 != (long *)0x0) {
      plVar7 = plVar17;
LAB_01dfb800:
      pvVar10 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x108,8);
      goto joined_r0x01dfb814;
    }
LAB_01dfb7d4:
    lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar8 + 8);
    if (lVar16 != 0) {
      plVar7 = (long *)(lVar16 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_01dfb800;
    lVar8 = *(long *)puVar5;
    if (lVar8 != 0) goto LAB_01dfb854;
LAB_01dfb8b8:
    pvVar10 = malloc(0x108);
joined_r0x01dfb8c0:
    if (pvVar10 != (void *)0x0) {
      *(undefined8 *)(param_1 + 0x180) = 0x2100000000;
      *(void **)(param_1 + 0x188) = pvVar10;
    }
    lVar8 = *(long *)puVar5;
    if (lVar8 == 0) goto LAB_01dfb934;
    if (plVar17 != (long *)0x0) {
      plVar7 = plVar17;
LAB_01dfb900:
      pvVar10 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x960,8);
      goto joined_r0x01dfb914;
    }
LAB_01dfb8d4:
    lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar8 + 8);
    if (lVar16 != 0) {
      plVar7 = (long *)(lVar16 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_01dfb900;
    lVar8 = *(long *)puVar5;
    if (lVar8 != 0) goto LAB_01dfb950;
LAB_01dfb9ac:
    pvVar10 = malloc(0x960);
joined_r0x01dfb9b4:
    if (pvVar10 != (void *)0x0) {
      *(undefined8 *)(param_1 + 0x1a0) = 0x12c00000000;
      *(void **)(param_1 + 0x1a8) = pvVar10;
    }
    lVar8 = *(long *)puVar5;
    if (lVar8 == 0) goto LAB_01dfba0c;
    plVar7 = plVar17;
    if (plVar17 != (long *)0x0) {
LAB_01dfb9f0:
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x20be0,8);
      goto joined_r0x01dfba04;
    }
LAB_01dfb9c4:
    lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar8 + 8);
    if (lVar16 != 0) {
      plVar7 = (long *)(lVar16 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_01dfb9f0;
    lVar8 = *(long *)puVar5;
    *(undefined4 *)(param_1 + 0x1d0) = 0xffffffff;
    if (lVar8 != 0) goto LAB_01dfbb84;
LAB_01dfbbcc:
    plVar7 = malloc(0x9ec0);
joined_r0x01dfbbd4:
    if (plVar7 != (long *)0x0) {
      *(long **)(param_1 + 0x1e8) = plVar7;
      *plVar7 = (long)(plVar7 + 0x1fb);
      plVar7[0x1fb] = (long)(plVar7 + 0x3f6);
      plVar7[0x3f6] = (long)(plVar7 + 0x5f1);
      plVar7[0x5f1] = (long)(plVar7 + 0x7ec);
      plVar7[0x7ec] = (long)(plVar7 + 0x9e7);
      plVar7[0x9e7] = (long)(plVar7 + 0xbe2);
      plVar7[0xbe2] = (long)(plVar7 + 0xddd);
      plVar7[0xddd] = (long)(plVar7 + 0xfd8);
      plVar7[0xfd8] = (long)(plVar7 + 0x11d3);
      plVar7[0x11d3] = 0;
      *(long **)(param_1 + 0x1f0) = plVar7;
      if (plVar7 + 0x13ce != (long *)0x0) {
        *(undefined8 *)(param_1 + 0x1d8) = 0xa00000000;
        *(long **)(param_1 + 0x1e0) = plVar7 + 0x13ce;
      }
    }
    lVar8 = *(long *)puVar5;
    if (lVar8 == 0) goto LAB_01dfbce4;
    plVar7 = plVar17;
    if (plVar17 != (long *)0x0) {
LAB_01dfbca8:
      pvVar10 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x50,8);
      goto joined_r0x01dfbcc0;
    }
LAB_01dfbc7c:
    lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar8 + 8);
    if (lVar16 != 0) {
      plVar7 = (long *)(lVar16 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_01dfbca8;
    lVar8 = *(long *)puVar5;
    *(undefined4 *)(param_1 + 0x1f8) = 0xffffffff;
    if (lVar8 != 0) goto LAB_01dfbd04;
LAB_01dfbd4c:
    pvVar10 = malloc(0x120);
    lVar8 = 0;
  }
  else {
    plVar7 = plVar17;
    if (plVar17 != (long *)0x0) {
LAB_01dfb728:
      pvVar10 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x129a80,8);
      goto joined_r0x01dfb74c;
    }
    lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar8 + 8);
    if (lVar16 != 0) {
      plVar7 = (long *)(lVar16 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_01dfb728;
    *(undefined8 *)(param_1 + 0x164) = 0xffffffffffffffff;
    lVar8 = *(long *)puVar5;
    if (lVar8 != 0) goto LAB_01dfb7d4;
LAB_01dfb838:
    pvVar10 = malloc(0x108);
joined_r0x01dfb814:
    if (pvVar10 != (void *)0x0) {
      *(undefined8 *)(param_1 + 0x170) = 0x2100000000;
      *(void **)(param_1 + 0x178) = pvVar10;
    }
    lVar8 = *(long *)puVar5;
    if (lVar8 == 0) goto LAB_01dfb8b8;
    if (plVar17 != (long *)0x0) {
      plVar7 = plVar17;
LAB_01dfb880:
      pvVar10 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x108,8);
      goto joined_r0x01dfb8c0;
    }
LAB_01dfb854:
    lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar8 + 8);
    if (lVar16 != 0) {
      plVar7 = (long *)(lVar16 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_01dfb880;
    lVar8 = *(long *)puVar5;
    if (lVar8 != 0) goto LAB_01dfb8d4;
LAB_01dfb934:
    pvVar10 = malloc(0x960);
joined_r0x01dfb914:
    if (pvVar10 != (void *)0x0) {
      *(undefined8 *)(param_1 + 400) = 0x12c00000000;
      *(void **)(param_1 + 0x198) = pvVar10;
    }
    lVar8 = *(long *)puVar5;
    if (lVar8 == 0) goto LAB_01dfb9ac;
    if (plVar17 != (long *)0x0) {
      plVar7 = plVar17;
LAB_01dfb97c:
      pvVar10 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x960,8);
      goto joined_r0x01dfb9b4;
    }
LAB_01dfb950:
    lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar8 + 8);
    if (lVar16 != 0) {
      plVar7 = (long *)(lVar16 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_01dfb97c;
    lVar8 = *(long *)puVar5;
    if (lVar8 != 0) goto LAB_01dfb9c4;
LAB_01dfba0c:
    plVar7 = malloc(0x20be0);
joined_r0x01dfba04:
    if (plVar7 != (long *)0x0) {
      *(long **)(param_1 + 0x1c0) = plVar7;
      *plVar7 = (long)(plVar7 + 0x1fb);
      plVar7[0x1fb] = (long)(plVar7 + 0x3f6);
      plVar7[0x3f6] = (long)(plVar7 + 0x5f1);
      plVar7[0x5f1] = (long)(plVar7 + 0x7ec);
      plVar7[0x337e] = (long)(plVar7 + 0x3579);
      plVar7[0x3f60] = 0;
      plVar7[0x7ec] = (long)(plVar7 + 0x9e7);
      plVar7[0x9e7] = (long)(plVar7 + 0xbe2);
      plVar7[0xbe2] = (long)(plVar7 + 0xddd);
      plVar7[0xddd] = (long)(plVar7 + 0xfd8);
      plVar7[0xfd8] = (long)(plVar7 + 0x11d3);
      plVar7[0x21ab] = (long)(plVar7 + 0x23a6);
      plVar7[0x11d3] = (long)(plVar7 + 0x13ce);
      plVar7[0x13ce] = (long)(plVar7 + 0x15c9);
      plVar7[0x15c9] = (long)(plVar7 + 0x17c4);
      plVar7[0x17c4] = (long)(plVar7 + 0x19bf);
      plVar7[0x19bf] = (long)(plVar7 + 0x1bba);
      plVar7[0x1bba] = (long)(plVar7 + 0x1db5);
      plVar7[0x2d8d] = (long)(plVar7 + 0x2f88);
      plVar7[0x1db5] = (long)(plVar7 + 0x1fb0);
      plVar7[0x2f88] = (long)(plVar7 + 0x3183);
      plVar7[0x1fb0] = (long)(plVar7 + 0x21ab);
      plVar7[0x3183] = (long)(plVar7 + 0x337e);
      plVar7[0x23a6] = (long)(plVar7 + 0x25a1);
      plVar7[0x3579] = (long)(plVar7 + 0x3774);
      plVar7[0x3774] = (long)(plVar7 + 0x396f);
      plVar7[0x25a1] = (long)(plVar7 + 0x279c);
      plVar7[0x396f] = (long)(plVar7 + 0x3b6a);
      plVar7[0x279c] = (long)(plVar7 + 0x2997);
      plVar7[0x3b6a] = (long)(plVar7 + 0x3d65);
      plVar7[0x2997] = (long)(plVar7 + 0x2b92);
      plVar7[0x3d65] = (long)(plVar7 + 0x3f60);
      plVar7[0x2b92] = (long)(plVar7 + 0x2d8d);
      *(long **)(param_1 + 0x1c8) = plVar7;
      if (plVar7 + 0x415b != (long *)0x0) {
        *(undefined8 *)(param_1 + 0x1b0) = 0x2100000000;
        *(long **)(param_1 + 0x1b8) = plVar7 + 0x415b;
      }
    }
    lVar8 = *(long *)puVar5;
    *(undefined4 *)(param_1 + 0x1d0) = 0xffffffff;
    if (lVar8 == 0) goto LAB_01dfbbcc;
    plVar7 = plVar17;
    if (plVar17 != (long *)0x0) {
LAB_01dfbbb0:
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x9ec0,8);
      goto joined_r0x01dfbbd4;
    }
LAB_01dfbb84:
    lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar8 + 8);
    if (lVar16 != 0) {
      plVar7 = (long *)(lVar16 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_01dfbbb0;
    lVar8 = *(long *)puVar5;
    if (lVar8 != 0) goto LAB_01dfbc7c;
LAB_01dfbce4:
    pvVar10 = malloc(0x50);
joined_r0x01dfbcc0:
    if (pvVar10 != (void *)0x0) {
      *(undefined4 *)(param_1 + 0x200) = 10;
      *(void **)(param_1 + 0x208) = pvVar10;
    }
    lVar8 = *(long *)puVar5;
    *(undefined4 *)(param_1 + 0x1f8) = 0xffffffff;
    if (lVar8 == 0) goto LAB_01dfbd4c;
    plVar7 = plVar17;
    if (plVar17 == (long *)0x0) {
LAB_01dfbd04:
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar8 + 8);
      if (lVar16 != 0) {
        plVar7 = (long *)(lVar16 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
    }
    pvVar10 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x120,8);
    lVar8 = *(long *)puVar5;
  }
  *(undefined1 *)((long)pvVar10 + 0x1c) = 0;
  *(undefined4 *)((long)pvVar10 + 0x18) = 0xb;
  *(undefined8 *)((long)pvVar10 + 0x20) = 0xffffffff;
  *(undefined8 *)((long)pvVar10 + 0x28) = 0xffffffff00000000;
  *(void **)((long)pvVar10 + 0x10) = (void *)((long)pvVar10 + 0xe8);
  *(undefined1 *)((long)pvVar10 + 0x4c) = 0;
  *(undefined4 *)((long)pvVar10 + 0x30) = 0xffffffff;
  *(undefined4 *)((long)pvVar10 + 0x48) = 0x40;
  puVar6 = PTR_DAT_04bb5128;
  puVar1 = PTR_DAT_04bb5128 + 0x10;
  *(undefined1 *)((long)pvVar10 + 0x8b) = 0;
  *(long *)((long)pvVar10 + 8) = (long)puVar1;
  puVar2 = PTR_DAT_04bb2bc0;
  *(undefined4 *)((long)pvVar10 + 0xa0) = 0x40;
  puVar1 = puVar2 + 0x10;
  *(undefined1 *)((long)pvVar10 + 0xe3) = 0;
  *(undefined8 *)((long)pvVar10 + 0xf6) = 0;
  *(undefined8 *)((long)pvVar10 + 0xe8) = 0;
  *(undefined8 *)((long)pvVar10 + 0xf0) = 0;
  *(undefined **)((long)pvVar10 + 0x38) = puVar1;
  *(undefined1 **)((long)pvVar10 + 0x40) = (undefined1 *)((long)pvVar10 + 0x4c);
  *(undefined1 *)((long)pvVar10 + 0xa4) = 0;
  *(undefined **)((long)pvVar10 + 0x90) = puVar1;
  *(undefined1 **)((long)pvVar10 + 0x98) = (undefined1 *)((long)pvVar10 + 0xa4);
  uVar13 = (long)pvVar10 + 0xfeU;
  if ((long)pvVar10 + 0xfeU <= (long)pvVar10 + 0xeaU) {
    uVar13 = (long)pvVar10 + 0xeaU;
  }
  memset((void *)((long)pvVar10 + 0xe8),0,
         ((uVar13 - ((long)pvVar10 + 8)) - 0xe1 & 0xfffffffffffffffe) + 2);
  *(undefined8 *)((long)pvVar10 + 0x100) = 0;
  *(undefined1 *)((long)pvVar10 + 0x108) = 0;
  puVar1 = PTR_DAT_04bb3170;
  *(undefined2 *)((long)pvVar10 + 0x10a) = *(undefined2 *)PTR_DAT_04bb3170;
  *(void **)(param_1 + 0x210) = pvVar10;
  if (lVar8 == 0) {
    plVar7 = malloc(0x9ec0);
joined_r0x01dfbe74:
    if (plVar7 != (long *)0x0) {
      *(long **)(param_1 + 0x230) = plVar7;
      *plVar7 = (long)(plVar7 + 0x1fb);
      plVar7[0x1fb] = (long)(plVar7 + 0x3f6);
      plVar7[0x3f6] = (long)(plVar7 + 0x5f1);
      plVar7[0x5f1] = (long)(plVar7 + 0x7ec);
      plVar7[0x7ec] = (long)(plVar7 + 0x9e7);
      plVar7[0x9e7] = (long)(plVar7 + 0xbe2);
      plVar7[0xbe2] = (long)(plVar7 + 0xddd);
      plVar7[0xddd] = (long)(plVar7 + 0xfd8);
      plVar7[0xfd8] = (long)(plVar7 + 0x11d3);
      plVar7[0x11d3] = 0;
      *(long **)(param_1 + 0x238) = plVar7;
      if (plVar7 + 0x13ce != (long *)0x0) {
        *(long **)(param_1 + 0x228) = plVar7 + 0x13ce;
        *(undefined8 *)(param_1 + 0x220) = 0xa00000000;
      }
    }
    lVar8 = *(long *)puVar5;
    if (lVar8 == 0) goto LAB_01dfbf7c;
    if (plVar17 == (long *)0x0) {
LAB_01dfbf28:
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar8 + 8);
      if (lVar16 != 0) {
        plVar7 = (long *)(lVar16 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 != (long *)0x0) goto LAB_01dfbf54;
      goto LAB_01dfbf88;
    }
    plVar7 = plVar17;
LAB_01dfbf54:
    pvVar10 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x50,8);
    if (pvVar10 == (void *)0x0) goto LAB_01dfbf88;
LAB_01dfbf6c:
    uVar12 = 10;
    *(void **)(param_1 + 0x250) = pvVar10;
    *(undefined4 *)(param_1 + 0x248) = 10;
LAB_01dfbf94:
    uVar15 = (ulong)uVar12;
    uVar13 = uVar15 & 3;
    if (uVar15 - 1 < 3) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      do {
        lVar8 = uVar14 * 8;
        uVar14 = uVar14 + 4;
        *(undefined8 *)(*(long *)(param_1 + 0x250) + lVar8) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x250) + lVar8 + 8) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x250) + lVar8 + 0x10) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x250) + lVar8 + 0x18) = 0;
      } while ((uVar15 & 0xfffffffc) != uVar14);
    }
    if ((uVar12 & 3) != 0) {
      lVar8 = uVar14 << 3;
      do {
        uVar13 = uVar13 - 1;
        *(undefined8 *)(*(long *)(param_1 + 0x250) + lVar8) = 0;
        lVar8 = lVar8 + 8;
      } while (uVar13 != 0);
    }
  }
  else {
    plVar7 = plVar17;
    if (plVar17 != (long *)0x0) {
LAB_01dfbe50:
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x9ec0,8);
      goto joined_r0x01dfbe74;
    }
    lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar8 + 8);
    if (lVar16 != 0) {
      plVar7 = (long *)(lVar16 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_01dfbe50;
    lVar8 = *(long *)puVar5;
    if (lVar8 != 0) goto LAB_01dfbf28;
LAB_01dfbf7c:
    pvVar10 = malloc(0x50);
    if (pvVar10 != (void *)0x0) goto LAB_01dfbf6c;
LAB_01dfbf88:
    uVar12 = *(uint *)(param_1 + 0x248);
    if (0 < (int)uVar12) goto LAB_01dfbf94;
  }
  lVar8 = *(long *)puVar5;
  *(undefined4 *)(param_1 + 0x240) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x610) = 0xffffffff;
  if (lVar8 == 0) {
    pvVar10 = malloc(0x120);
    lVar8 = 0;
  }
  else {
    plVar7 = plVar17;
    if (plVar17 == (long *)0x0) {
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar8 + 8);
      if (lVar16 != 0) {
        plVar7 = (long *)(lVar16 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
    }
    pvVar10 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x120,8);
    lVar8 = *(long *)puVar5;
  }
  *(undefined1 *)((long)pvVar10 + 0x1c) = 0;
  *(long *)((long)pvVar10 + 8) = (long)(puVar6 + 0x10);
  *(undefined8 *)((long)pvVar10 + 0x20) = 0xffffffff;
  *(undefined8 *)((long)pvVar10 + 0x28) = 0xffffffff00000000;
  puVar2 = puVar2 + 0x10;
  *(undefined1 *)((long)pvVar10 + 0x4c) = 0;
  *(undefined **)((long)pvVar10 + 0x38) = puVar2;
  *(undefined1 **)((long)pvVar10 + 0x40) = (undefined1 *)((long)pvVar10 + 0x4c);
  *(undefined4 *)((long)pvVar10 + 0x18) = 0xb;
  *(undefined4 *)((long)pvVar10 + 0x48) = 0x40;
  *(undefined4 *)((long)pvVar10 + 0xa0) = 0x40;
  *(void **)((long)pvVar10 + 0x10) = (void *)((long)pvVar10 + 0xe8);
  *(undefined4 *)((long)pvVar10 + 0x30) = 0xffffffff;
  *(undefined1 *)((long)pvVar10 + 0xa4) = 0;
  *(undefined1 *)((long)pvVar10 + 0x8b) = 0;
  *(undefined1 *)((long)pvVar10 + 0xe3) = 0;
  *(undefined8 *)((long)pvVar10 + 0xf6) = 0;
  *(undefined **)((long)pvVar10 + 0x90) = puVar2;
  *(undefined1 **)((long)pvVar10 + 0x98) = (undefined1 *)((long)pvVar10 + 0xa4);
  uVar13 = (long)pvVar10 + 0xfeU;
  if ((long)pvVar10 + 0xfeU <= (long)pvVar10 + 0xeaU) {
    uVar13 = (long)pvVar10 + 0xeaU;
  }
  *(undefined8 *)((long)pvVar10 + 0xe8) = 0;
  *(undefined8 *)((long)pvVar10 + 0xf0) = 0;
  memset((void *)((long)pvVar10 + 0xe8),0,
         ((uVar13 - ((long)pvVar10 + 8)) - 0xe1 & 0xfffffffffffffffe) + 2);
  uVar4 = *(undefined2 *)puVar1;
  *(undefined8 *)((long)pvVar10 + 0x100) = 0;
  *(undefined1 *)((long)pvVar10 + 0x108) = 0;
  *(undefined2 *)((long)pvVar10 + 0x10a) = uVar4;
  *(void **)(param_1 + 600) = pvVar10;
  if (lVar8 == 0) {
    pvVar10 = malloc(0x20);
  }
  else {
    plVar7 = plVar17;
    if (plVar17 == (long *)0x0) {
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar8 + 8);
      if (lVar16 != 0) {
        plVar7 = (long *)(lVar16 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
    }
    pvVar10 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x20,8);
  }
  FUN_006e7b94(pvVar10,0x400,200,plVar17);
  puVar3 = puVar3 + 0x10;
  *(void **)(param_1 + 0x270) = pvVar10;
  uVar12 = *(int *)(param_1 + 0x1b4) + *(int *)(param_1 + 0x1dc) + *(int *)(param_1 + 0x224) + 0x42;
  pcStack_68 = "WherearenMetaHeap";
  local_70 = puVar3;
  if (uVar12 == 0) {
LAB_01dfc280:
    plVar9 = (long *)0x0;
  }
  else {
    plVar7 = plVar17;
    if (plVar17 == (long *)0x0) {
      lVar16 = *(long *)puVar5;
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar18 = (undefined8 *)(lVar16 + 8);
      if (lVar8 != 0) {
        puVar18 = (undefined8 *)(lVar8 + 0xa8);
      }
      plVar7 = (long *)*puVar18;
      if (plVar7 == (long *)0x0) goto LAB_01dfc280;
    }
    lVar8 = (ulong)uVar12 * 0x558 + 0x108;
    plVar9 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,lVar8,8);
    if (plVar9 != (long *)0x0) {
      FUN_038ca450(plVar9,&local_70,plVar7,plVar9,lVar8,1,0);
      *(undefined4 *)((long)plVar9 + 0xd4) = 0x558;
      puVar1 = PTR_DAT_04bd0d80;
      plVar9[0x1b] = 0;
      plVar9[0x1c] = 0;
      plVar9[0x1d] = 0;
      plVar9[0x1e] = 0;
      plVar9[0x1f] = 0;
      *plVar9 = (long)(puVar1 + 0x10);
      FUN_038ccc00(plVar9,8,1,plVar7);
    }
  }
  *(long **)(param_1 + 0x70) = plVar9;
  uVar12 = *(int *)(param_1 + 0x1b4) + *(int *)(param_1 + 0x144) +
           *(int *)(param_1 + 0x1dc) + *(int *)(param_1 + 0x224);
  pcStack_68 = "WherearenCharaMakeHeap";
  if (uVar12 == 0) {
    plVar7 = (long *)0x0;
    local_70 = puVar3;
LAB_01dfc374:
    lVar8 = *(long *)puVar5;
    *(long **)(param_1 + 0x78) = plVar7;
    if (lVar8 == 0) goto LAB_01dfc3d8;
    plVar7 = plVar17;
    if (plVar17 == (long *)0x0) {
LAB_01dfc398:
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar8 + 8);
      if (lVar16 != 0) {
        plVar7 = (long *)(lVar16 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
    }
    puVar11 = (undefined4 *)(**(code **)(*plVar7 + 0x30))(plVar7,0x38,8);
  }
  else {
    plVar9 = plVar17;
    local_70 = puVar3;
    if (plVar17 != (long *)0x0) {
LAB_01dfc2ec:
      uVar13 = (ulong)uVar12 << 10 | 0x108;
      plVar7 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,uVar13,8);
      if (plVar7 != (long *)0x0) {
        FUN_038ca450(plVar7,&local_70,plVar9,plVar7,uVar13,1,0);
        puVar3 = PTR_DAT_04bd0d80;
        *(undefined4 *)((long)plVar7 + 0xd4) = 0x400;
        plVar7[0x1f] = 0;
        plVar7[0x1b] = 0;
        plVar7[0x1c] = 0;
        plVar7[0x1d] = 0;
        plVar7[0x1e] = 0;
        *plVar7 = (long)(puVar3 + 0x10);
        FUN_038ccc00(plVar7,8,1,plVar9);
      }
      goto LAB_01dfc374;
    }
    lVar16 = *(long *)puVar5;
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar18 = (undefined8 *)(lVar16 + 8);
    if (lVar8 != 0) {
      puVar18 = (undefined8 *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*puVar18;
    if (plVar9 != (long *)0x0) goto LAB_01dfc2ec;
    lVar8 = *(long *)puVar5;
    *(undefined8 *)(param_1 + 0x78) = 0;
    if (lVar8 != 0) goto LAB_01dfc398;
LAB_01dfc3d8:
    puVar11 = malloc(0x38);
  }
  *puVar11 = 0;
  puVar11[5] = 0;
  *(undefined8 *)(puVar11 + 3) = 0;
  *(undefined8 *)(puVar11 + 1) = 0;
  lVar8 = *(long *)puVar5;
  *(undefined1 *)(puVar11 + 6) = 2;
  *(undefined8 *)(puVar11 + 7) = 0;
  *(undefined8 *)(puVar11 + 9) = 0;
  *(undefined8 *)(puVar11 + 0xb) = 0;
  puVar11[0xd] = 0;
  *(undefined4 **)(param_1 + 0x6c8) = puVar11;
  if (lVar8 == 0) {
    pvVar10 = malloc(0xc80);
  }
  else {
    if (plVar17 == (long *)0x0) {
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar18 = (undefined8 *)(lVar8 + 8);
      if (lVar16 != 0) {
        puVar18 = (undefined8 *)(lVar16 + 0xa8);
      }
      plVar17 = (long *)*puVar18;
      if (plVar17 == (long *)0x0) goto LAB_01dfc4d0;
    }
    pvVar10 = (void *)(**(code **)(*plVar17 + 0x30))(plVar17,0xc80,8);
  }
  if (pvVar10 != (void *)0x0) {
    lVar8 = 0;
    *(void **)(param_1 + 0x290) = pvVar10;
    while( true ) {
      puVar18 = (undefined8 *)((long)pvVar10 + lVar8);
      puVar18[2] = puVar18 + 3;
      puVar18[1] = puVar18 + 2;
      *puVar18 = puVar18 + 1;
      if (lVar8 == 0x620) break;
      lVar8 = lVar8 + 0x20;
      puVar18[3] = puVar18 + 4;
    }
    *(undefined8 *)((long)pvVar10 + 0x638) = 0;
    *(void **)(param_1 + 0x298) = pvVar10;
    if ((long)pvVar10 + 0x640 != 0) {
      *(long *)(param_1 + 0x288) = (long)pvVar10 + 0x640;
      *(undefined8 *)(param_1 + 0x280) = 0xc800000000;
    }
  }
LAB_01dfc4d0:
  (**(code **)(**(long **)(param_1 + 0x80) + 0x28))();
  *(bool *)(param_1 + 0x109) = *(int *)(*(long *)PTR_DAT_04bb21d0 + 0x78) != 0;
  *(undefined1 *)(param_1 + 0x108) = 1;
  return;
}

