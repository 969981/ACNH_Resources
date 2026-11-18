
void FUN_036ec830(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined2 *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  void *pvVar14;
  long lVar15;
  int iVar16;
  undefined4 local_64;
  
  *(ushort *)(param_1 + 0xdd) = *(ushort *)(param_1 + 0xdd) | 1;
  local_64 = 2;
  plVar8 = (long *)FUN_00818af8(*(undefined8 *)PTR_DAT_04bb2110,&local_64,0x180000,0);
  FUN_01dfb4b0(*(undefined8 *)PTR_DAT_04bb7bc0);
  lVar15 = *(long *)PTR_DAT_04bb2698;
  if (lVar15 == 0) {
    puVar11 = malloc(0x5a80);
  }
  else {
    plVar10 = plVar8;
    if (plVar8 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar15 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) {
        puVar11 = (undefined2 *)0x0;
        goto LAB_036ec900;
      }
    }
    puVar11 = (undefined2 *)(**(code **)(*plVar10 + 0x30))(plVar10,0x5a80,8);
  }
LAB_036ec900:
  *puVar11 = 0;
  *(undefined4 *)(puVar11 + 4) = 0xffff0000;
  puVar11[6] = 0xffff;
  *(undefined8 *)(puVar11 + 0x12) = 0xfffe;
  *(undefined8 *)(puVar11 + 7) = 0;
  *(undefined8 *)(puVar11 + 0xb) = 0;
  puVar11[0x10] = 0;
  FUN_0277d4ac();
  *(undefined8 *)(puVar11 + 0x16) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)(puVar11 + 0x1a) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)(puVar11 + 0x42) = 0;
  *(undefined1 *)(puVar11 + 0x48) = 2;
  *(undefined4 *)(puVar11 + 0x46) = 0;
  *(undefined8 *)(puVar11 + 0x38) = 0;
  *(undefined8 *)(puVar11 + 0x3c) = 0;
  *(undefined8 *)(puVar11 + 0x3e) = 0;
  *(undefined8 *)(puVar11 + 0x4a) = 0;
  *(undefined8 *)(puVar11 + 0x4e) = 0;
  *(undefined8 *)(puVar11 + 0x52) = 0;
  *(undefined4 *)(puVar11 + 0x56) = 0;
  *(undefined1 *)((long)puVar11 + 0xb1) = 0xee;
  puVar11[0x59] = 0;
  *(undefined8 *)(puVar11 + 0x30) = 0;
  *(undefined8 *)(puVar11 + 0x34) = 0;
  *(undefined8 *)(puVar11 + 0x28) = 0;
  *(undefined8 *)(puVar11 + 0x2c) = 0;
  *(undefined8 *)(puVar11 + 0x20) = 0;
  *(undefined8 *)(puVar11 + 0x24) = 0;
  memset(puVar11 + 0x5c,0,0x830);
  *(undefined8 *)(puVar11 + 0x490) = 0;
  *(undefined1 *)(puVar11 + 0x58) = 1;
  *(undefined8 *)(puVar11 + 0x474) = 0;
  *(undefined8 *)(puVar11 + 0x478) = 0;
  *(undefined8 *)(puVar11 + 0x47c) = 0;
  *(undefined8 *)(puVar11 + 0x480) = 0;
  *(undefined8 *)(puVar11 + 0x484) = 0;
  *(undefined8 *)(puVar11 + 0x488) = 0;
  *(undefined8 *)(puVar11 + 0x48c) = 0;
  *(undefined1 *)(puVar11 + 0x49c) = 2;
  *(undefined8 *)(puVar11 + 0x496) = 0;
  *(undefined4 *)(puVar11 + 0x49a) = 0;
  *(undefined8 *)(puVar11 + 0x492) = 0;
  *(undefined8 *)(puVar11 + 0x49e) = 0;
  *(undefined8 *)(puVar11 + 0x4a2) = 0;
  *(undefined8 *)(puVar11 + 0x4a6) = 0;
  *(undefined4 *)(puVar11 + 0x4aa) = 0;
  *(undefined1 *)((long)puVar11 + 0x959) = 0xee;
  puVar11[0x4ad] = 0;
  memset(puVar11 + 0x4b0,0,0x830);
  *(undefined1 *)(puVar11 + 0x4ac) = 1;
  *(undefined4 *)(puVar11 + 0x8e3) = 0x101;
  *(undefined8 *)(puVar11 + 0x8d0) = 0;
  *(undefined8 *)(puVar11 + 0x8cc) = 0;
  *(undefined8 *)(puVar11 + 0x8d4) = 0;
  *(undefined8 *)(puVar11 + 0x8d8) = 0;
  *(undefined8 *)(puVar11 + 0x8dc) = 0;
  *(undefined4 *)((long)puVar11 + 0x11bf) = 0;
  *(undefined8 *)(puVar11 + 0x8c8) = 0;
  puVar11[0x8e2] = 0;
  *(undefined1 *)(puVar11 + 0x8e5) = 0;
  *(undefined8 *)(puVar11 + 0x8ce) = 0;
  *(undefined8 *)(puVar11 + 0x8d2) = 0;
  *(undefined8 *)(puVar11 + 0x8d6) = 0;
  *(undefined8 *)(puVar11 + 0x8da) = 0;
  *(undefined8 *)(puVar11 + 0x8dd) = 0;
  *(undefined8 *)(puVar11 + 0x8ca) = 0;
  *(undefined4 *)((long)puVar11 + 0x11d3) = 0;
  *(undefined8 *)(puVar11 + 0x8e6) = 0;
  FUN_028f50f0(puVar11 + 0x8ec);
  *param_1 = puVar11;
  lVar15 = *(long *)PTR_DAT_04bb2698;
  if (lVar15 == 0) {
    plVar10 = malloc(0x2d48);
  }
  else {
    plVar10 = plVar8;
    if (plVar8 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar15 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
    }
    plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x2d48,8);
  }
  FUN_0272845c(plVar10,0,0);
  *plVar10 = (long)(PTR_DAT_04bc3790 + 0x10);
  param_1[1] = plVar10;
  FUN_02640070(plVar10,0,*param_1,0,1);
  FUN_02640130(param_1[1],*(long *)PTR_DAT_04bb46b0 + 0x28);
  lVar15 = *(long *)PTR_DAT_04bb2698;
  if (lVar15 == 0) {
    puVar12 = malloc(0x2880);
  }
  else {
    plVar10 = plVar8;
    if (plVar8 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar15 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) {
        puVar12 = (undefined4 *)0x0;
        goto LAB_036ecb90;
      }
    }
    puVar12 = (undefined4 *)(**(code **)(*plVar10 + 0x30))(plVar10,0x2880,8);
  }
LAB_036ecb90:
  *(undefined8 *)((long)puVar12 + 6) = 0;
  *puVar12 = 0xffff0000;
  *(undefined8 *)(puVar12 + 7) = 0xfffe;
  *(undefined2 *)(puVar12 + 1) = 0xffff;
  *(undefined8 *)((long)puVar12 + 0xe) = 0;
  *(undefined2 *)(puVar12 + 6) = 0;
  FUN_0277d4ac();
  *(undefined8 *)(puVar12 + 9) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)(puVar12 + 0xb) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)(puVar12 + 0x1f) = 0;
  *(undefined1 *)(puVar12 + 0x22) = 2;
  puVar12[0x21] = 0;
  *(undefined8 *)(puVar12 + 0x1a) = 0;
  *(undefined8 *)(puVar12 + 0x1c) = 0;
  *(undefined8 *)(puVar12 + 0x1d) = 0;
  *(undefined8 *)(puVar12 + 0x23) = 0;
  *(undefined8 *)(puVar12 + 0x25) = 0;
  *(undefined8 *)(puVar12 + 0x27) = 0;
  puVar12[0x29] = 0;
  *(undefined1 *)((long)puVar12 + 0xa9) = 0xee;
  *(undefined2 *)((long)puVar12 + 0xaa) = 0;
  *(undefined8 *)(puVar12 + 0x16) = 0;
  *(undefined8 *)(puVar12 + 0x18) = 0;
  *(undefined8 *)(puVar12 + 0x12) = 0;
  *(undefined8 *)(puVar12 + 0x14) = 0;
  *(undefined8 *)(puVar12 + 0xe) = 0;
  *(undefined8 *)(puVar12 + 0x10) = 0;
  memset(puVar12 + 0x2c,0,0x830);
  *(undefined8 *)(puVar12 + 0x246) = 0;
  *(undefined1 *)(puVar12 + 0x2a) = 1;
  *(undefined8 *)(puVar12 + 0x238) = 0;
  *(undefined8 *)(puVar12 + 0x23a) = 0;
  *(undefined8 *)(puVar12 + 0x23c) = 0;
  *(undefined8 *)(puVar12 + 0x23e) = 0;
  *(undefined8 *)(puVar12 + 0x240) = 0;
  *(undefined8 *)(puVar12 + 0x242) = 0;
  *(undefined8 *)(puVar12 + 0x244) = 0;
  *(undefined1 *)(puVar12 + 0x24c) = 2;
  *(undefined8 *)(puVar12 + 0x249) = 0;
  puVar12[0x24b] = 0;
  *(undefined8 *)(puVar12 + 0x247) = 0;
  *(undefined8 *)(puVar12 + 0x24d) = 0;
  *(undefined8 *)(puVar12 + 0x24f) = 0;
  *(undefined8 *)(puVar12 + 0x251) = 0;
  puVar12[0x253] = 0;
  *(undefined1 *)((long)puVar12 + 0x951) = 0xee;
  *(undefined2 *)((long)puVar12 + 0x952) = 0;
  memset(puVar12 + 0x256,0,0x830);
  *(undefined1 *)(puVar12 + 0x254) = 1;
  *(undefined8 *)(puVar12 + 0x464) = 0;
  *(undefined8 *)(puVar12 + 0x466) = 0;
  *(undefined8 *)(puVar12 + 0x468) = 0;
  *(undefined8 *)(puVar12 + 0x46a) = 0;
  *(undefined8 *)(puVar12 + 0x46c) = 0;
  puVar4 = PTR_DAT_04bc37a0;
  puVar1 = PTR_DAT_04bc37a0 + 0x10;
  *(undefined1 *)(puVar12 + 0x46e) = 0;
  *(undefined8 *)(puVar12 + 0x472) = 0;
  *(undefined8 *)(puVar12 + 0x474) = 6;
  *(undefined8 *)(puVar12 + 0x476) = 0;
  *(undefined **)(puVar12 + 0x462) = puVar1;
  *(undefined8 *)(puVar12 + 0x478) = 0;
  *(undefined8 *)(puVar12 + 0x47a) = 0;
  *(undefined1 *)(puVar12 + 0x47c) = 0;
  puVar5 = PTR_DAT_04bc37a8;
  puVar1 = PTR_DAT_04bc37a8 + 0x10;
  *(undefined8 *)(puVar12 + 0x480) = 0;
  *(undefined1 *)(puVar12 + 0x48a) = 0;
  *(undefined8 *)(puVar12 + 0x488) = 0;
  *(undefined8 *)(puVar12 + 0x486) = 0;
  *(undefined8 *)(puVar12 + 0x484) = 0;
  *(undefined **)(puVar12 + 0x470) = puVar1;
  puVar6 = puVar12 + 0x47e;
  *(undefined8 *)(puVar12 + 0x482) = 0x18;
  puVar1 = PTR_DAT_04bc3780;
  *(undefined4 **)(puVar12 + 0x486) = puVar12 + 0x470;
  *(undefined4 **)(puVar12 + 0x468) = puVar6;
  *(undefined **)(puVar12 + 0x47e) = puVar1 + 0x10;
  FUN_007e9bd0(puVar12 + 0x48c,puVar6,0x38);
  puVar3 = PTR_DAT_04bb4c48;
  puVar1 = PTR_DAT_04bb4c48 + 0x10;
  *(undefined **)(puVar12 + 0x48c) = puVar1;
  FUN_007e9bd0(puVar12 + 0x756,puVar6,*(long *)(puVar12 + 0x482) + 0x8c8);
  *(undefined **)(puVar12 + 0x756) = puVar1;
  *(undefined **)(puVar12 + 0x47e) = PTR_DAT_04bc3778 + 0x10;
  puVar1 = PTR_DAT_04bc3798;
  *(undefined **)(puVar12 + 0x462) = PTR_DAT_04bc3798 + 0x10;
  param_1[2] = puVar12;
  FUN_02640070(puVar12 + 0x462,0,puVar12,0,1);
  FUN_02640130(param_1[2] + 0x1188,*(long *)PTR_DAT_04bb46b0 + 0x28);
  lVar15 = *(long *)PTR_DAT_04bb2698;
  if (lVar15 == 0) {
    puVar12 = malloc(0x2880);
  }
  else {
    plVar10 = plVar8;
    if (plVar8 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar15 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) {
        puVar12 = (undefined4 *)0x0;
        goto LAB_036ece34;
      }
    }
    puVar12 = (undefined4 *)(**(code **)(*plVar10 + 0x30))(plVar10,0x2880,8);
  }
LAB_036ece34:
  *(undefined8 *)((long)puVar12 + 6) = 0;
  *puVar12 = 0xffff0000;
  *(undefined8 *)(puVar12 + 7) = 0xfffe;
  *(undefined2 *)(puVar12 + 1) = 0xffff;
  *(undefined8 *)((long)puVar12 + 0xe) = 0;
  *(undefined2 *)(puVar12 + 6) = 0;
  FUN_0277d4ac();
  *(undefined8 *)(puVar12 + 9) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)(puVar12 + 0xb) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)(puVar12 + 0x1f) = 0;
  *(undefined1 *)(puVar12 + 0x22) = 2;
  puVar12[0x21] = 0;
  *(undefined8 *)(puVar12 + 0x1a) = 0;
  *(undefined8 *)(puVar12 + 0x1c) = 0;
  *(undefined8 *)(puVar12 + 0x1d) = 0;
  *(undefined8 *)(puVar12 + 0x23) = 0;
  *(undefined8 *)(puVar12 + 0x25) = 0;
  *(undefined8 *)(puVar12 + 0x27) = 0;
  puVar12[0x29] = 0;
  *(undefined1 *)((long)puVar12 + 0xa9) = 0xee;
  *(undefined2 *)((long)puVar12 + 0xaa) = 0;
  *(undefined8 *)(puVar12 + 0x16) = 0;
  *(undefined8 *)(puVar12 + 0x18) = 0;
  *(undefined8 *)(puVar12 + 0x12) = 0;
  *(undefined8 *)(puVar12 + 0x14) = 0;
  *(undefined8 *)(puVar12 + 0xe) = 0;
  *(undefined8 *)(puVar12 + 0x10) = 0;
  memset(puVar12 + 0x2c,0,0x830);
  *(undefined8 *)(puVar12 + 0x246) = 0;
  *(undefined1 *)(puVar12 + 0x2a) = 1;
  *(undefined8 *)(puVar12 + 0x238) = 0;
  *(undefined8 *)(puVar12 + 0x23a) = 0;
  *(undefined8 *)(puVar12 + 0x23c) = 0;
  *(undefined8 *)(puVar12 + 0x23e) = 0;
  *(undefined8 *)(puVar12 + 0x240) = 0;
  *(undefined8 *)(puVar12 + 0x242) = 0;
  *(undefined8 *)(puVar12 + 0x244) = 0;
  *(undefined1 *)(puVar12 + 0x24c) = 2;
  *(undefined8 *)(puVar12 + 0x249) = 0;
  puVar12[0x24b] = 0;
  *(undefined8 *)(puVar12 + 0x247) = 0;
  *(undefined8 *)(puVar12 + 0x24d) = 0;
  *(undefined8 *)(puVar12 + 0x24f) = 0;
  *(undefined8 *)(puVar12 + 0x251) = 0;
  puVar12[0x253] = 0;
  *(undefined1 *)((long)puVar12 + 0x951) = 0xee;
  *(undefined2 *)((long)puVar12 + 0x952) = 0;
  memset(puVar12 + 0x256,0,0x830);
  *(undefined1 *)(puVar12 + 0x254) = 1;
  *(undefined8 *)(puVar12 + 0x474) = 6;
  *(undefined **)(puVar12 + 0x462) = puVar4 + 0x10;
  *(undefined **)(puVar12 + 0x470) = puVar5 + 0x10;
  puVar6 = puVar12 + 0x47e;
  *(undefined8 *)(puVar12 + 0x464) = 0;
  *(undefined8 *)(puVar12 + 0x466) = 0;
  *(undefined8 *)(puVar12 + 0x468) = 0;
  *(undefined8 *)(puVar12 + 0x46a) = 0;
  *(undefined8 *)(puVar12 + 0x46c) = 0;
  *(undefined1 *)(puVar12 + 0x46e) = 0;
  *(undefined8 *)(puVar12 + 0x472) = 0;
  *(undefined8 *)(puVar12 + 0x476) = 0;
  *(undefined8 *)(puVar12 + 0x478) = 0;
  *(undefined8 *)(puVar12 + 0x47a) = 0;
  *(undefined1 *)(puVar12 + 0x47c) = 0;
  *(undefined8 *)(puVar12 + 0x480) = 0;
  *(undefined8 *)(puVar12 + 0x482) = 0x18;
  *(undefined1 *)(puVar12 + 0x48a) = 0;
  *(undefined8 *)(puVar12 + 0x488) = 0;
  *(undefined8 *)(puVar12 + 0x486) = 0;
  *(undefined8 *)(puVar12 + 0x484) = 0;
  *(undefined4 **)(puVar12 + 0x468) = puVar6;
  *(undefined4 **)(puVar12 + 0x486) = puVar12 + 0x470;
  *(undefined **)(puVar12 + 0x47e) = PTR_DAT_04bc3780 + 0x10;
  FUN_007e9bd0(puVar12 + 0x48c,puVar6,0x38);
  puVar2 = puVar3 + 0x10;
  *(undefined **)(puVar12 + 0x48c) = puVar2;
  FUN_007e9bd0(puVar12 + 0x756,puVar6,*(long *)(puVar12 + 0x482) + 0x8c8);
  *(undefined **)(puVar12 + 0x756) = puVar2;
  *(undefined **)(puVar12 + 0x47e) = PTR_DAT_04bc3778 + 0x10;
  *(undefined **)(puVar12 + 0x462) = puVar1 + 0x10;
  param_1[3] = puVar12;
  FUN_02640070(puVar12 + 0x462,0,puVar12,0,1);
  FUN_02640130(param_1[3] + 0x1188,*(long *)PTR_DAT_04bb46b0 + 0x28);
  lVar15 = *(long *)PTR_DAT_04bb2698;
  if (lVar15 == 0) {
    puVar12 = malloc(0x2880);
  }
  else {
    plVar10 = plVar8;
    if (plVar8 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar15 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) {
        puVar12 = (undefined4 *)0x0;
        goto LAB_036ed0b8;
      }
    }
    puVar12 = (undefined4 *)(**(code **)(*plVar10 + 0x30))(plVar10,0x2880,8);
  }
LAB_036ed0b8:
  *(undefined8 *)((long)puVar12 + 6) = 0;
  *puVar12 = 0xffff0000;
  *(undefined8 *)(puVar12 + 7) = 0xfffe;
  *(undefined2 *)(puVar12 + 1) = 0xffff;
  *(undefined8 *)((long)puVar12 + 0xe) = 0;
  *(undefined2 *)(puVar12 + 6) = 0;
  FUN_0277d4ac();
  *(undefined8 *)(puVar12 + 9) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)(puVar12 + 0xb) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)(puVar12 + 0x1f) = 0;
  *(undefined1 *)(puVar12 + 0x22) = 2;
  puVar12[0x21] = 0;
  *(undefined8 *)(puVar12 + 0x1a) = 0;
  *(undefined8 *)(puVar12 + 0x1c) = 0;
  *(undefined8 *)(puVar12 + 0x1d) = 0;
  *(undefined8 *)(puVar12 + 0x23) = 0;
  *(undefined8 *)(puVar12 + 0x25) = 0;
  *(undefined8 *)(puVar12 + 0x27) = 0;
  puVar12[0x29] = 0;
  *(undefined1 *)((long)puVar12 + 0xa9) = 0xee;
  *(undefined2 *)((long)puVar12 + 0xaa) = 0;
  *(undefined8 *)(puVar12 + 0x16) = 0;
  *(undefined8 *)(puVar12 + 0x18) = 0;
  *(undefined8 *)(puVar12 + 0x12) = 0;
  *(undefined8 *)(puVar12 + 0x14) = 0;
  *(undefined8 *)(puVar12 + 0xe) = 0;
  *(undefined8 *)(puVar12 + 0x10) = 0;
  memset(puVar12 + 0x2c,0,0x830);
  *(undefined8 *)(puVar12 + 0x246) = 0;
  *(undefined1 *)(puVar12 + 0x2a) = 1;
  *(undefined8 *)(puVar12 + 0x238) = 0;
  *(undefined8 *)(puVar12 + 0x23a) = 0;
  *(undefined8 *)(puVar12 + 0x23c) = 0;
  *(undefined8 *)(puVar12 + 0x23e) = 0;
  *(undefined8 *)(puVar12 + 0x240) = 0;
  *(undefined8 *)(puVar12 + 0x242) = 0;
  *(undefined8 *)(puVar12 + 0x244) = 0;
  *(undefined1 *)(puVar12 + 0x24c) = 2;
  *(undefined8 *)(puVar12 + 0x249) = 0;
  puVar12[0x24b] = 0;
  *(undefined8 *)(puVar12 + 0x247) = 0;
  *(undefined8 *)(puVar12 + 0x24d) = 0;
  *(undefined8 *)(puVar12 + 0x24f) = 0;
  *(undefined8 *)(puVar12 + 0x251) = 0;
  puVar12[0x253] = 0;
  *(undefined1 *)((long)puVar12 + 0x951) = 0xee;
  *(undefined2 *)((long)puVar12 + 0x952) = 0;
  memset(puVar12 + 0x256,0,0x830);
  *(undefined1 *)(puVar12 + 0x254) = 1;
  *(undefined8 *)(puVar12 + 0x474) = 6;
  *(undefined **)(puVar12 + 0x462) = puVar4 + 0x10;
  *(undefined **)(puVar12 + 0x470) = puVar5 + 0x10;
  puVar6 = puVar12 + 0x47e;
  *(undefined8 *)(puVar12 + 0x464) = 0;
  *(undefined8 *)(puVar12 + 0x466) = 0;
  *(undefined8 *)(puVar12 + 0x468) = 0;
  *(undefined8 *)(puVar12 + 0x46a) = 0;
  *(undefined8 *)(puVar12 + 0x46c) = 0;
  *(undefined1 *)(puVar12 + 0x46e) = 0;
  *(undefined8 *)(puVar12 + 0x472) = 0;
  *(undefined8 *)(puVar12 + 0x476) = 0;
  *(undefined8 *)(puVar12 + 0x478) = 0;
  *(undefined8 *)(puVar12 + 0x47a) = 0;
  *(undefined1 *)(puVar12 + 0x47c) = 0;
  *(undefined8 *)(puVar12 + 0x480) = 0;
  *(undefined8 *)(puVar12 + 0x482) = 0x18;
  *(undefined1 *)(puVar12 + 0x48a) = 0;
  *(undefined8 *)(puVar12 + 0x488) = 0;
  *(undefined8 *)(puVar12 + 0x486) = 0;
  *(undefined8 *)(puVar12 + 0x484) = 0;
  *(undefined4 **)(puVar12 + 0x468) = puVar6;
  *(undefined4 **)(puVar12 + 0x486) = puVar12 + 0x470;
  *(undefined **)(puVar12 + 0x47e) = PTR_DAT_04bc3780 + 0x10;
  FUN_007e9bd0(puVar12 + 0x48c,puVar6,0x38);
  puVar3 = puVar3 + 0x10;
  *(undefined **)(puVar12 + 0x48c) = puVar3;
  FUN_007e9bd0(puVar12 + 0x756,puVar6,*(long *)(puVar12 + 0x482) + 0x8c8);
  *(undefined **)(puVar12 + 0x756) = puVar3;
  *(undefined **)(puVar12 + 0x47e) = PTR_DAT_04bc3778 + 0x10;
  *(undefined **)(puVar12 + 0x462) = puVar1 + 0x10;
  param_1[4] = puVar12;
  FUN_02640070(puVar12 + 0x462,0,puVar12,0,1);
  FUN_02640130(param_1[4] + 0x1188,*(long *)PTR_DAT_04bb46b0 + 0x28);
  lVar15 = *(long *)PTR_DAT_04bb2698;
  if (lVar15 == 0) {
    puVar11 = malloc(0x408c);
  }
  else {
    plVar10 = plVar8;
    if (plVar8 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar15 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) {
        puVar11 = (undefined2 *)0x0;
        goto LAB_036ed33c;
      }
    }
    puVar11 = (undefined2 *)(**(code **)(*plVar10 + 0x30))(plVar10,0x408c,8);
  }
LAB_036ed33c:
  *puVar11 = 0;
  memset(puVar11 + 2,0,0x4014);
  FUN_028f8bb0(puVar11 + 2);
  FUN_028f8bb0(puVar11 + 0xab0);
  FUN_028f8bb0(puVar11 + 0x155e);
  *(undefined8 *)(puVar11 + 0x2010) = 0;
  *(undefined8 *)(puVar11 + 0x200c) = 0xffffffffffffffff;
  *(undefined8 *)(puVar11 + 0x2014) = 0;
  *(undefined8 *)(puVar11 + 0x2018) = 0;
  *(undefined8 *)(puVar11 + 0x201c) = 0;
  *(undefined8 *)(puVar11 + 0x2020) = 0;
  *(undefined8 *)(puVar11 + 0x2024) = 0;
  *(undefined8 *)(puVar11 + 0x2028) = 0;
  *(undefined8 *)(puVar11 + 0x202c) = 0;
  *(undefined8 *)(puVar11 + 0x2030) = 0;
  *(undefined8 *)(puVar11 + 0x2034) = 0;
  *(undefined8 *)(puVar11 + 0x2038) = 0;
  *(undefined8 *)(puVar11 + 0x203b) = 0;
  *(undefined4 *)(puVar11 + 0x203f) = 0x101;
  *(undefined1 *)(puVar11 + 0x2041) = 0;
  puVar11[0x2042] = 0;
  *(undefined4 *)(puVar11 + 0x2044) = 0;
  lVar15 = *(long *)PTR_DAT_04bb2698;
  param_1[5] = puVar11;
  if (lVar15 == 0) {
    plVar10 = malloc(0x13b0);
  }
  else {
    plVar10 = plVar8;
    if (plVar8 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar15 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
    }
    plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x13b0,8);
  }
  FUN_02727848(plVar10,0,0);
  *plVar10 = (long)(PTR_DAT_04bc3788 + 0x10);
  param_1[6] = plVar10;
  FUN_02640070(plVar10,0,param_1[5],0,1);
  FUN_02640130(param_1[6],*(long *)PTR_DAT_04bb46b0 + 0x28);
  iVar16 = 0;
  puVar1 = PTR_DAT_04bc3770 + 0x10;
  puVar3 = PTR_DAT_04bc3780 + 0x10;
  puVar4 = PTR_DAT_04bb4c48 + 0x10;
  puVar5 = PTR_DAT_04bc3778 + 0x10;
  puVar2 = PTR_DAT_04bc3768 + 0x10;
  do {
    lVar15 = *(long *)PTR_DAT_04bb2698;
    if (lVar15 == 0) {
      puVar12 = malloc(0x2838);
    }
    else {
      plVar10 = plVar8;
      if (plVar8 == (long *)0x0) {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar10 = (long *)(lVar15 + 8);
        if (lVar9 != 0) {
          plVar10 = (long *)(lVar9 + 0xa8);
        }
        plVar10 = (long *)*plVar10;
        if (plVar10 == (long *)0x0) {
          puVar12 = (undefined4 *)0x0;
          goto LAB_036ed550;
        }
      }
      puVar12 = (undefined4 *)(**(code **)(*plVar10 + 0x30))(plVar10,0x2838,8);
    }
LAB_036ed550:
    *(undefined1 *)(puVar12 + 1) = 0;
    *(undefined8 *)(puVar12 + 3) = 0xfffe;
    *puVar12 = 0x5ffff;
    *(undefined4 *)((long)puVar12 + 6) = 0;
    FUN_0277d4ac();
    *(undefined8 *)(puVar12 + 5) = 0xfffe;
    FUN_0277d4ac();
    *(undefined8 *)(puVar12 + 7) = 0xfffe;
    FUN_0277d4ac();
    *(undefined1 *)(puVar12 + 0x1e) = 2;
    *(undefined8 *)(puVar12 + 0x1b) = 0;
    *(undefined8 *)(puVar12 + 0x16) = 0;
    *(undefined8 *)(puVar12 + 0x18) = 0;
    puVar12[0x1d] = 0;
    *(undefined8 *)(puVar12 + 0x19) = 0;
    *(undefined8 *)(puVar12 + 0x1f) = 0;
    *(undefined8 *)(puVar12 + 0x21) = 0;
    *(undefined8 *)(puVar12 + 0x23) = 0;
    puVar12[0x25] = 0;
    *(undefined1 *)((long)puVar12 + 0x99) = 0xee;
    *(undefined2 *)((long)puVar12 + 0x9a) = 0;
    *(undefined8 *)(puVar12 + 0x12) = 0;
    *(undefined8 *)(puVar12 + 0x14) = 0;
    *(undefined8 *)(puVar12 + 0xe) = 0;
    *(undefined8 *)(puVar12 + 0x10) = 0;
    *(undefined8 *)(puVar12 + 10) = 0;
    *(undefined8 *)(puVar12 + 0xc) = 0;
    memset(puVar12 + 0x28,0,0x830);
    *(undefined8 *)(puVar12 + 0x242) = 0;
    *(undefined1 *)(puVar12 + 0x26) = 1;
    *(undefined8 *)(puVar12 + 0x234) = 0;
    *(undefined8 *)(puVar12 + 0x236) = 0;
    *(undefined8 *)(puVar12 + 0x238) = 0;
    *(undefined8 *)(puVar12 + 0x23a) = 0;
    *(undefined8 *)(puVar12 + 0x23c) = 0;
    *(undefined8 *)(puVar12 + 0x23e) = 0;
    *(undefined8 *)(puVar12 + 0x240) = 0;
    *(undefined1 *)(puVar12 + 0x248) = 2;
    *(undefined8 *)(puVar12 + 0x245) = 0;
    puVar12[0x247] = 0;
    *(undefined8 *)(puVar12 + 0x243) = 0;
    *(undefined8 *)(puVar12 + 0x249) = 0;
    *(undefined8 *)(puVar12 + 0x24b) = 0;
    *(undefined8 *)(puVar12 + 0x24d) = 0;
    puVar12[0x24f] = 0;
    *(undefined1 *)((long)puVar12 + 0x941) = 0xee;
    *(undefined2 *)((long)puVar12 + 0x942) = 0;
    memset(puVar12 + 0x252,0,0x830);
    *(undefined1 *)(puVar12 + 0x250) = 1;
    *(undefined8 *)(puVar12 + 0x460) = 0;
    *(undefined8 *)(puVar12 + 0x462) = 0;
    *(undefined8 *)(puVar12 + 0x466) = 0;
    *(undefined8 *)(puVar12 + 0x468) = 0;
    *(undefined1 *)(puVar12 + 0x46a) = 0;
    *(undefined8 *)(puVar12 + 0x46e) = 0;
    *(undefined8 *)(puVar12 + 0x472) = 0;
    *(undefined8 *)(puVar12 + 0x474) = 0;
    *(undefined8 *)(puVar12 + 0x476) = 0;
    *(undefined **)(puVar12 + 0x45e) = puVar1;
    puVar6 = puVar12 + 0x46c;
    *(undefined8 *)(puVar12 + 0x470) = 8;
    *(undefined1 *)(puVar12 + 0x478) = 0;
    *(undefined4 **)(puVar12 + 0x464) = puVar6;
    *(undefined **)(puVar12 + 0x46c) = puVar3;
    FUN_007e9bd0(puVar12 + 0x47a,puVar6,0x28);
    *(undefined **)(puVar12 + 0x47a) = puVar4;
    FUN_007e9bd0(puVar12 + 0x744,puVar6,*(long *)(puVar12 + 0x470) + 0x8c8);
    *(undefined **)(puVar12 + 0x744) = puVar4;
    *(undefined **)(puVar12 + 0x45e) = puVar2;
    *(undefined **)(puVar12 + 0x46c) = puVar5;
    param_1[(long)iVar16 + 7] = puVar12;
    FUN_02640070(puVar12 + 0x45e,0,puVar12,0,1);
    FUN_02640130(param_1[(long)iVar16 + 7] + 0x1178,*(long *)PTR_DAT_04bb46b0 + 0x28);
    iVar16 = iVar16 + 1;
  } while (iVar16 != 10);
  iVar16 = 0;
  puVar1 = PTR_DAT_04bb4c30 + 0x10;
  do {
    lVar15 = *(long *)PTR_DAT_04bb2698;
    if (lVar15 == 0) {
      puVar13 = malloc(0xe08);
    }
    else {
      plVar10 = plVar8;
      if (plVar8 == (long *)0x0) {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar10 = (long *)(lVar15 + 8);
        if (lVar9 != 0) {
          plVar10 = (long *)(lVar9 + 0xa8);
        }
        plVar10 = (long *)*plVar10;
        if (plVar10 == (long *)0x0) {
          puVar13 = (undefined8 *)0x0;
          goto LAB_036ed7bc;
        }
      }
      puVar13 = (undefined8 *)(**(code **)(*plVar10 + 0x30))(plVar10,0xe08,8);
    }
LAB_036ed7bc:
    *(undefined1 *)(puVar13 + 10) = 2;
    *(undefined8 *)((long)puVar13 + 0x44) = 0;
    puVar13[6] = 0;
    puVar13[7] = 0;
    *(undefined4 *)((long)puVar13 + 0x4c) = 0;
    *(undefined8 *)((long)puVar13 + 0x3c) = 0;
    *(undefined8 *)((long)puVar13 + 0x54) = 0;
    *(undefined8 *)((long)puVar13 + 0x5c) = 0;
    *(undefined8 *)((long)puVar13 + 100) = 0;
    *(undefined8 *)((long)puVar13 + 0x69) = 0;
    *(undefined1 *)((long)puVar13 + 0x71) = 0xee;
    *(undefined2 *)((long)puVar13 + 0x72) = 0;
    puVar13[4] = 0;
    puVar13[5] = 0;
    puVar13[2] = 0;
    puVar13[3] = 0;
    *puVar13 = 0;
    puVar13[1] = 0;
    memset(puVar13 + 0xf,0,0x230);
    FUN_007e9590(puVar13 + 0x55,0,0);
    puVar13[0x55] = puVar1;
    param_1[(long)iVar16 + 0x11] = puVar13;
    FUN_02640070(puVar13 + 0x55,0,puVar13,0,1);
    FUN_02640130(param_1[(long)iVar16 + 0x11] + 0x2a8,*(long *)PTR_DAT_04bb46b0 + 0x28);
    iVar16 = iVar16 + 1;
  } while (iVar16 != 100);
  iVar16 = 0;
  puVar1 = PTR_DAT_04bb4c48 + 0x10;
  do {
    lVar15 = *(long *)PTR_DAT_04bb2698;
    if (lVar15 == 0) {
      puVar13 = malloc(0x13d0);
    }
    else {
      plVar10 = plVar8;
      if (plVar8 == (long *)0x0) {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar10 = (long *)(lVar15 + 8);
        if (lVar9 != 0) {
          plVar10 = (long *)(lVar9 + 0xa8);
        }
        plVar10 = (long *)*plVar10;
      }
      puVar13 = (undefined8 *)(**(code **)(*plVar10 + 0x30))(plVar10,0x13d0,8);
    }
    *(undefined1 *)(puVar13 + 10) = 2;
    puVar13[6] = 0;
    puVar13[7] = 0;
    *(undefined8 *)((long)puVar13 + 0x44) = 0;
    *(undefined4 *)((long)puVar13 + 0x4c) = 0;
    *(undefined8 *)((long)puVar13 + 0x3c) = 0;
    *(undefined8 *)((long)puVar13 + 0x54) = 0;
    *(undefined8 *)((long)puVar13 + 0x5c) = 0;
    *(undefined8 *)((long)puVar13 + 100) = 0;
    *(undefined4 *)((long)puVar13 + 0x6c) = 0;
    *(undefined1 *)((long)puVar13 + 0x71) = 0xee;
    *(undefined2 *)((long)puVar13 + 0x72) = 0;
    puVar13[4] = 0;
    puVar13[5] = 0;
    puVar13[2] = 0;
    puVar13[3] = 0;
    *puVar13 = 0;
    puVar13[1] = 0;
    memset(puVar13 + 0xf,0,0x830);
    *(undefined1 *)(puVar13 + 0xe) = 1;
    FUN_007e9bd0(puVar13 + 0x115,0,0);
    puVar13[0x115] = puVar1;
    param_1[(long)iVar16 + 0x75] = puVar13;
    FUN_02640070(puVar13 + 0x115,0,puVar13,0,1);
    FUN_02640130(param_1[(long)iVar16 + 0x75] + 0x8a8,*(long *)PTR_DAT_04bb46b0 + 0x28);
    iVar16 = iVar16 + 1;
  } while (iVar16 != 100);
  lVar15 = *(long *)PTR_DAT_04bb2698;
  if (lVar15 == 0) {
    pvVar14 = malloc(0x1fc8);
  }
  else {
    plVar10 = plVar8;
    if (plVar8 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar15 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) {
        pvVar14 = (void *)0x0;
        goto LAB_036eda34;
      }
    }
    pvVar14 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,0x1fc8,8);
  }
LAB_036eda34:
  FUN_02815cfc(pvVar14);
  puVar1 = PTR_DAT_04bb3170;
  *(undefined8 *)((long)pvVar14 + 0x1d00) = 0;
  *(undefined8 *)((long)pvVar14 + 0x1d48) = 0;
  *(undefined8 *)((long)pvVar14 + 0x1d10) = 0;
  *(undefined8 *)((long)pvVar14 + 0x1d18) = 0;
  uVar7 = *(undefined2 *)puVar1;
  *(undefined8 *)((long)pvVar14 + 0x1d20) = 0;
  *(undefined8 *)((long)pvVar14 + 0x1d28) = 0;
  *(undefined8 *)((long)pvVar14 + 0x1d30) = 0;
  *(undefined8 *)((long)pvVar14 + 0x1d38) = 0;
  *(undefined1 *)((long)pvVar14 + 0x1d08) = 0;
  *(undefined8 *)((long)pvVar14 + 0x1d40) = 0;
  *(undefined4 *)((long)pvVar14 + 0x1d5c) = 0;
  *(undefined8 *)((long)pvVar14 + 0x1d4c) = 0;
  *(undefined8 *)((long)pvVar14 + 0x1d54) = 0;
  *(undefined8 *)((long)pvVar14 + 0x1d64) = 0;
  *(undefined8 *)((long)pvVar14 + 0x1d6c) = 0;
  *(undefined8 *)((long)pvVar14 + 0x1d74) = 0;
  *(undefined8 *)((long)pvVar14 + 0x1d79) = 0;
  *(undefined2 *)((long)pvVar14 + 0x1d82) = 0;
  *(undefined2 *)((long)pvVar14 + 0x1d0a) = uVar7;
  *(undefined1 *)((long)pvVar14 + 0x1d60) = 2;
  *(undefined1 *)((long)pvVar14 + 0x1d81) = 0xee;
  memset((void *)((long)pvVar14 + 0x1d88),0,0x230);
  *(undefined8 *)((long)pvVar14 + 0x1fb8) = 0xfffe;
  FUN_0277d4ac((long)pvVar14 + 0x1fb8);
  *(undefined8 *)((long)pvVar14 + 0x1fc0) = 0xfffe;
  FUN_0277d4ac((long)pvVar14 + 0x1fc0);
  param_1[0xd9] = pvVar14;
  lVar15 = *(long *)PTR_DAT_04bb2698;
  if (lVar15 == 0) {
    pvVar14 = malloc(0x3db0);
  }
  else {
    plVar10 = plVar8;
    if (plVar8 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar15 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
    }
    pvVar14 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,0x3db0,8);
  }
  FUN_02350d60();
  param_1[0xda] = pvVar14;
  FUN_02640070(pvVar14,0,param_1[0xd9],0,1);
  FUN_02640130(param_1[0xda],*(long *)PTR_DAT_04bb46b0 + 0x28);
  lVar15 = *(long *)PTR_DAT_04bb2698;
  if (lVar15 == 0) {
    pvVar14 = calloc(1,0x754);
    param_1[0xdb] = pvVar14;
LAB_036edc28:
    plVar8 = malloc(0x70);
  }
  else {
    plVar10 = plVar8;
    if (plVar8 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar15 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 != (long *)0x0) goto LAB_036edbd4;
      lVar15 = *(long *)PTR_DAT_04bb2698;
      memset((void *)0x0,0,0x754);
      param_1[0xdb] = 0;
      if (lVar15 == 0) goto LAB_036edc28;
LAB_036edc84:
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar15 + 8);
      if (lVar9 != 0) {
        plVar8 = (long *)(lVar9 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
    }
    else {
LAB_036edbd4:
      pvVar14 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,0x754,8);
      lVar15 = *(long *)PTR_DAT_04bb2698;
      memset(pvVar14,0,0x754);
      param_1[0xdb] = pvVar14;
      if (lVar15 == 0) goto LAB_036edc28;
      if (plVar8 == (long *)0x0) goto LAB_036edc84;
    }
    plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x70,8);
  }
  *(undefined1 *)(plVar8 + 6) = 0;
  plVar8[4] = 0;
  plVar8[5] = 0;
  plVar8[0xc] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  puVar1 = PTR_DAT_04bc36f0 + 0x10;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  plVar8[7] = (long)puVar1;
  puVar1 = PTR_DAT_04bc36e8 + 0x10;
  plVar8[2] = 0;
  plVar8[3] = (long)(plVar8 + 7);
  *plVar8 = (long)puVar1;
  plVar8[1] = 0;
  param_1[0xdc] = plVar8;
  FUN_02640070(plVar8,0,param_1[0xdb],0,1);
  FUN_02640130(param_1[0xdc],*(long *)PTR_DAT_04bb46b0 + 0x28);
  return;
}

