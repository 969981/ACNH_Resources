
void FUN_02fe4ee0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  void *pvVar10;
  long *plVar11;
  int iVar12;
  int iVar13;
  undefined *puVar14;
  long lVar15;
  char *local_148;
  undefined1 *local_140;
  undefined4 local_138;
  undefined *local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined4 local_118;
  char *local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined *local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  char *local_d8;
  undefined1 *local_d0;
  undefined4 local_c8;
  undefined *local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  char *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_70;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  lVar15 = *(long *)PTR_DAT_04bb2698;
  if (lVar15 == 0) {
    plVar9 = malloc(0x1bf58);
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar9 = (long *)(lVar15 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)0x0;
    }
    else {
      plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x1bf58,8);
    }
  }
  *plVar9 = (long)(PTR_DAT_04bc9be0 + 0x10);
  memset(plVar9 + 1,0,0x1bf30);
  lVar15 = 0x10e;
  puVar14 = PTR_DAT_04bb2bc0 + 0x10;
  lVar8 = 0;
  do {
    FUN_03463544((long)plVar9 + lVar8 + 8,0);
    lVar15 = lVar15 + -1;
    *(undefined4 *)((long)plVar9 + lVar8 + 0x160) = 0x40;
    *(undefined1 *)((long)plVar9 + lVar8 + 0x1a3) = 0;
    *(undefined1 *)((long)plVar9 + lVar8 + 0x164) = 0;
    *(undefined4 *)((long)plVar9 + lVar8 + 0x1a8) = 0;
    *(undefined **)((long)plVar9 + lVar8 + 0x150) = puVar14;
    *(long *)((long)plVar9 + lVar8 + 0x158) = (long)plVar9 + lVar8 + 0x164;
    puVar1 = PTR_DAT_04bc8e10;
    lVar8 = lVar8 + 0x1a8;
  } while (lVar15 != 0);
  *(undefined4 *)(plVar9 + 0x37e9) = 0;
  *(undefined4 *)(plVar9 + 0x37ea) = 0;
  plVar9[0x37e7] = (long)(puVar1 + 0x10);
  plVar9[0x37e8] = -1;
  param_1[5] = 0;
  param_1[6] = 0xffffffffffffffff;
  puVar6 = PTR_DAT_04bc7ad8;
  param_1[7] = PTR_DAT_04bc7ad8;
  param_1[8] = 0;
  puVar7 = PTR_DAT_04bc7ae0;
  param_1[3] = plVar9;
  param_1[4] = &PTR_LAB_04aeec18;
  local_148 = (char *)((ulong)local_148 & 0xffffffff00000000);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[9] = puVar7 + 0x10;
  puVar5 = PTR_DAT_04bc7ad0;
  uVar3 = *(undefined4 *)PTR_DAT_04bc7ad0;
  puVar14 = PTR_DAT_04bc7c18 + 0x10;
  param_1[0xc] = puVar14;
  uVar2 = *(undefined4 *)(puVar5 + 4);
  FUN_02ff5850(param_1 + 0xd,uVar3,uVar2);
  FUN_02ff5850(param_1 + 0x10,uVar3,uVar2);
  puVar1 = PTR_DAT_04bb3170;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((long)param_1 + 0x9a) = 0;
  uVar4 = *(undefined2 *)puVar1;
  param_1[0x14] = 0x20;
  param_1[0x15] = puVar6;
  *(undefined2 *)((long)param_1 + 0x9c) = uVar4;
  FUN_02fee194(param_1 + 0x16,0,0x20,0,puVar6);
  *(undefined4 *)(param_1 + 0x1a) = 0;
  local_148 = (char *)((ulong)local_148 & 0xffffffff00000000);
  param_1[0x1e] = puVar14;
  param_1[0x1b] = puVar7 + 0x10;
  param_1[10] = param_1 + 0xc;
  param_1[0xb] = param_1 + 0x16;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  uVar3 = *(undefined4 *)puVar5;
  uVar2 = *(undefined4 *)(puVar5 + 4);
  FUN_02ff5850(param_1 + 0x1f,uVar3,uVar2);
  FUN_02ff5850(param_1 + 0x22,uVar3,uVar2);
  uVar4 = *(undefined2 *)puVar1;
  *(undefined2 *)(param_1 + 0x25) = 0;
  *(undefined1 *)((long)param_1 + 0x12a) = 0;
  param_1[0x26] = 0;
  *(undefined2 *)((long)param_1 + 300) = uVar4;
  param_1[0x27] = PTR_DAT_04bc7ad8;
  FUN_02fee194(param_1 + 0x28,0,0,0);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x1c] = param_1 + 0x1e;
  param_1[0x1d] = param_1 + 0x28;
  lVar15 = *(long *)PTR_DAT_04bb2698;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  if (lVar15 == 0) {
    pvVar10 = malloc(0x20);
joined_r0x02fe7ccc:
    if (pvVar10 != (void *)0x0) {
      param_1[0x2d] = 0x400000000;
      param_1[0x2e] = pvVar10;
    }
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar9 = (long *)(lVar15 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) {
      pvVar10 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,0x20,8);
      goto joined_r0x02fe7ccc;
    }
  }
  iVar12 = *(int *)(param_1 + 0x2d);
  iVar13 = *(int *)((long)param_1 + 0x16c);
  if (iVar12 < iVar13) {
    *(undefined8 **)(param_1[0x2e] + (long)iVar12 * 8) = param_1 + 9;
    iVar13 = *(int *)((long)param_1 + 0x16c);
    iVar12 = *(int *)(param_1 + 0x2d) + 1;
    *(int *)(param_1 + 0x2d) = iVar12;
  }
  if (iVar12 < iVar13) {
    *(undefined8 **)(param_1[0x2e] + (long)iVar12 * 8) = param_1 + 0x1b;
    *(int *)(param_1 + 0x2d) = *(int *)(param_1 + 0x2d) + 1;
  }
  memset(param_1 + 0x30,0,0x270);
  puVar7 = PTR_DAT_04bc7ae8;
  *(undefined4 *)((long)param_1 + 0x19c) = 0;
  param_1[0x2f] = &PTR_LAB_04aeedc8;
  local_148 = (char *)((ulong)local_148 & 0xffffffff00000000);
  param_1[0x36] = 0;
  param_1[0x31] = 0xffffffffffffffff;
  param_1[0x32] = puVar7;
  puVar14 = PTR_DAT_04bc7ae0 + 0x10;
  param_1[0x34] = puVar14;
  param_1[0x35] = 0;
  puVar6 = PTR_DAT_04bc7ad0;
  uVar3 = *(undefined4 *)PTR_DAT_04bc7ad0;
  uVar2 = *(undefined4 *)(PTR_DAT_04bc7ad0 + 4);
  puVar1 = PTR_DAT_04bc7c18 + 0x10;
  param_1[0x37] = puVar1;
  FUN_02ff5850(param_1 + 0x38,uVar3,uVar2);
  FUN_02ff5850(param_1 + 0x3b,uVar3,uVar2);
  *(undefined2 *)(param_1 + 0x3e) = 0;
  puVar5 = PTR_DAT_04bb3170;
  *(undefined1 *)((long)param_1 + 0x1f2) = 0;
  uVar4 = *(undefined2 *)puVar5;
  param_1[0x3f] = 0x20;
  param_1[0x40] = puVar7;
  *(undefined2 *)((long)param_1 + 500) = uVar4;
  FUN_02fee194(param_1 + 0x41,0,0x20,0,puVar7);
  *(undefined4 *)(param_1 + 0x45) = 0;
  local_148 = (char *)((ulong)local_148 & 0xffffffff00000000);
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x46] = puVar14;
  param_1[0x35] = param_1 + 0x37;
  param_1[0x36] = param_1 + 0x41;
  uVar3 = *(undefined4 *)puVar6;
  param_1[0x49] = puVar1;
  uVar2 = *(undefined4 *)(puVar6 + 4);
  FUN_02ff5850(param_1 + 0x4a,uVar3,uVar2);
  FUN_02ff5850(param_1 + 0x4d,uVar3,uVar2);
  uVar4 = *(undefined2 *)puVar5;
  *(undefined2 *)(param_1 + 0x50) = 0;
  *(undefined1 *)((long)param_1 + 0x282) = 0;
  param_1[0x51] = 0;
  param_1[0x52] = puVar7;
  *(undefined2 *)((long)param_1 + 0x284) = uVar4;
  FUN_02fee194(param_1 + 0x53,0,0,0,puVar7);
  param_1[0x47] = param_1 + 0x49;
  *(undefined4 *)(param_1 + 0x57) = 0;
  param_1[0x48] = param_1 + 0x53;
  local_148._0_4_ = 4;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x58] = puVar14;
  uVar3 = *(undefined4 *)(puVar6 + 0x20);
  param_1[0x5b] = puVar1;
  uVar2 = *(undefined4 *)(puVar6 + 0x24);
  FUN_02ff5850(param_1 + 0x5c,uVar3,uVar2);
  FUN_02ff5850(param_1 + 0x5f,uVar3,uVar2);
  *(undefined2 *)(param_1 + 0x62) = 0;
  puVar5 = PTR_DAT_04bb3170;
  *(undefined1 *)((long)param_1 + 0x312) = 0;
  param_1[99] = 0x2a00000025;
  param_1[100] = puVar7;
  *(undefined2 *)((long)param_1 + 0x314) = *(undefined2 *)puVar5;
  FUN_02fee194(param_1 + 0x65,4,0x25,0x2a,puVar7);
  *(undefined4 *)(param_1 + 0x69) = 4;
  param_1[0x59] = param_1 + 0x5b;
  param_1[0x5a] = param_1 + 0x65;
  local_148 = (char *)CONCAT44(local_148._4_4_,4);
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6a] = puVar14;
  uVar3 = *(undefined4 *)(puVar6 + 0x20);
  param_1[0x6d] = puVar1;
  uVar2 = *(undefined4 *)(puVar6 + 0x24);
  FUN_02ff5850(param_1 + 0x6e,uVar3,uVar2);
  FUN_02ff5850(param_1 + 0x71,uVar3,uVar2);
  *(undefined2 *)(param_1 + 0x74) = 0;
  puVar14 = PTR_DAT_04bb3170;
  *(undefined1 *)((long)param_1 + 0x3a2) = 0;
  param_1[0x75] = 0x2a00000005;
  param_1[0x76] = puVar7;
  *(undefined2 *)((long)param_1 + 0x3a4) = *(undefined2 *)puVar14;
  FUN_02fee194(param_1 + 0x77,4,5,0x2a,puVar7);
  *(undefined4 *)(param_1 + 0x7b) = 4;
  param_1[0x6b] = param_1 + 0x6d;
  param_1[0x6c] = param_1 + 0x77;
  param_1[0x7d] = 0;
  lVar15 = *(long *)PTR_DAT_04bb2698;
  param_1[0x7c] = 0;
  if (lVar15 == 0) {
    pvVar10 = malloc(0x20);
joined_r0x02fe7ce0:
    if (pvVar10 != (void *)0x0) {
      param_1[0x7d] = pvVar10;
      param_1[0x7c] = 0x400000000;
    }
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar9 = (long *)(lVar15 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) {
      pvVar10 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,0x20,8);
      goto joined_r0x02fe7ce0;
    }
  }
  iVar12 = *(int *)(param_1 + 0x7c);
  iVar13 = *(int *)((long)param_1 + 0x3e4);
  if (iVar12 < iVar13) {
    *(undefined8 **)(param_1[0x7d] + (long)iVar12 * 8) = param_1 + 0x34;
    iVar13 = *(int *)((long)param_1 + 0x3e4);
    iVar12 = *(int *)(param_1 + 0x7c) + 1;
    *(int *)(param_1 + 0x7c) = iVar12;
    if (iVar13 <= iVar12) goto LAB_02fe5570;
LAB_02fe7aec:
    *(undefined8 **)(param_1[0x7d] + (long)iVar12 * 8) = param_1 + 0x46;
    iVar13 = *(int *)((long)param_1 + 0x3e4);
    iVar12 = *(int *)(param_1 + 0x7c) + 1;
    *(int *)(param_1 + 0x7c) = iVar12;
    if (iVar13 <= iVar12) goto LAB_02fe5578;
LAB_02fe7b10:
    *(undefined8 **)(param_1[0x7d] + (long)iVar12 * 8) = param_1 + 0x6a;
    iVar12 = *(int *)(param_1 + 0x7c) + 1;
    *(int *)(param_1 + 0x7c) = iVar12;
    if (iVar12 < *(int *)((long)param_1 + 0x3e4)) goto LAB_02fe5580;
  }
  else {
    if (iVar12 < iVar13) goto LAB_02fe7aec;
LAB_02fe5570:
    if (iVar12 < iVar13) goto LAB_02fe7b10;
LAB_02fe5578:
    if (iVar12 < iVar13) {
LAB_02fe5580:
      *(undefined8 **)(param_1[0x7d] + (long)iVar12 * 8) = param_1 + 0x58;
      *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
    }
  }
  param_1[0x2f] = &PTR_LAB_04aeecf0;
  memset(param_1 + 0x7e,0,0x278);
  FUN_02fe9ebc(param_1 + 0x7e);
  param_1[0x7e] = &PTR_LAB_04aeeea0;
  memset(param_1 + 0xcd,0,0x278);
  FUN_02fe9ebc(param_1 + 0xcd);
  param_1[0xcd] = &PTR_LAB_04aef050;
  memset(param_1 + 0x11c,0,0x278);
  FUN_02fe9ebc(param_1 + 0x11c);
  param_1[0x11c] = &PTR_LAB_04aef128;
  memset(param_1 + 0x16b,0,0x278);
  FUN_02fe841c(param_1 + 0x16b);
  param_1[0x16b] = &PTR_LAB_04aef200;
  FUN_02fe7d94(param_1 + 0x1ba);
  FUN_02fe8004(param_1 + 0x1e5);
  FUN_02fe841c(param_1 + 0x234);
  memset(param_1 + 0x283,0,0x158);
  FUN_02fe7d94(param_1 + 0x283);
  param_1[0x283] = &PTR_LAB_04aef560;
  memset(param_1 + 0x2ae,0,0x278);
  FUN_02fe8004(param_1 + 0x2ae);
  param_1[0x2fe] = 0;
  param_1[0x2ae] = &PTR_LAB_04aef638;
  param_1[0x2ff] = 0xffffffffffffffff;
  puVar7 = PTR_DAT_04bc7b10;
  param_1[0x2fd] = &PTR_LAB_04aef710;
  param_1[0x301] = 0;
  local_148._0_4_ = 1;
  param_1[0x303] = 0;
  param_1[0x304] = 0;
  param_1[0x300] = puVar7;
  puVar14 = PTR_DAT_04bc7ae0 + 0x10;
  param_1[0x302] = puVar14;
  uVar3 = *(undefined4 *)(puVar6 + 8);
  uVar2 = *(undefined4 *)(puVar6 + 0xc);
  puVar1 = PTR_DAT_04bc7c18 + 0x10;
  param_1[0x305] = puVar1;
  FUN_02ff5850(param_1 + 0x306,uVar3,uVar2);
  FUN_02ff5850(param_1 + 0x309,uVar3,uVar2);
  *(undefined2 *)(param_1 + 0x30c) = 0;
  *(undefined1 *)((long)param_1 + 0x1862) = 0;
  puVar5 = PTR_DAT_04bb3170;
  param_1[0x30d] = 0x20;
  param_1[0x30e] = puVar7;
  *(undefined2 *)((long)param_1 + 0x1864) = *(undefined2 *)puVar5;
  FUN_02fee194(param_1 + 0x30f,1,0x20,0,puVar7);
  *(undefined4 *)(param_1 + 0x313) = 1;
  param_1[0x303] = param_1 + 0x305;
  param_1[0x304] = param_1 + 0x30f;
  local_148._0_4_ = 1;
  param_1[0x315] = 0;
  param_1[0x316] = 0;
  param_1[0x314] = puVar14;
  uVar3 = *(undefined4 *)(puVar6 + 8);
  param_1[0x317] = puVar1;
  uVar2 = *(undefined4 *)(puVar6 + 0xc);
  FUN_02ff5850(param_1 + 0x318,uVar3,uVar2);
  FUN_02ff5850(param_1 + 0x31b,uVar3,uVar2);
  *(undefined2 *)(param_1 + 0x31e) = 0;
  *(undefined1 *)((long)param_1 + 0x18f2) = 0;
  puVar5 = PTR_DAT_04bb3170;
  param_1[799] = 0;
  *(undefined2 *)((long)param_1 + 0x18f4) = *(undefined2 *)puVar5;
  param_1[800] = PTR_DAT_04bc7b10;
  FUN_02fee194(param_1 + 0x321,1,0,0);
  *(undefined4 *)(param_1 + 0x325) = 1;
  param_1[0x315] = param_1 + 0x317;
  param_1[0x316] = param_1 + 0x321;
  local_148._0_4_ = 0xc;
  param_1[0x327] = 0;
  param_1[0x328] = 0;
  param_1[0x326] = puVar14;
  uVar3 = *(undefined4 *)(puVar6 + 0x60);
  param_1[0x329] = puVar1;
  uVar2 = *(undefined4 *)(puVar6 + 100);
  FUN_02ff5850(param_1 + 0x32a,uVar3,uVar2);
  FUN_02ff5850(param_1 + 0x32d,uVar3,uVar2);
  *(undefined2 *)(param_1 + 0x330) = 0;
  *(undefined1 *)((long)param_1 + 0x1982) = 0;
  puVar5 = PTR_DAT_04bb3170;
  param_1[0x331] = 0x2a00000021;
  *(undefined2 *)((long)param_1 + 0x1984) = *(undefined2 *)puVar5;
  puVar7 = PTR_DAT_04bc7b10;
  param_1[0x332] = PTR_DAT_04bc7b10;
  FUN_02fee194(param_1 + 0x333,0xc,0x21,0x2a);
  *(undefined4 *)(param_1 + 0x337) = 0xc;
  param_1[0x327] = param_1 + 0x329;
  param_1[0x328] = param_1 + 0x333;
  local_148 = (char *)CONCAT44(local_148._4_4_,0xc);
  param_1[0x339] = 0;
  param_1[0x33a] = 0;
  param_1[0x338] = puVar14;
  uVar3 = *(undefined4 *)(puVar6 + 0x60);
  param_1[0x33b] = puVar1;
  uVar2 = *(undefined4 *)(puVar6 + 100);
  FUN_02ff5850(param_1 + 0x33c,uVar3,uVar2);
  FUN_02ff5850(param_1 + 0x33f,uVar3,uVar2);
  *(undefined2 *)(param_1 + 0x342) = 0;
  *(undefined1 *)((long)param_1 + 0x1a12) = 0;
  uVar4 = *(undefined2 *)puVar5;
  param_1[0x343] = 0x2a00000001;
  param_1[0x344] = puVar7;
  *(undefined2 *)((long)param_1 + 0x1a14) = uVar4;
  FUN_02fee194(param_1 + 0x345,0xc,1,0x2a,puVar7);
  *(undefined4 *)(param_1 + 0x349) = 0xc;
  param_1[0x339] = param_1 + 0x33b;
  param_1[0x33a] = param_1 + 0x345;
  param_1[0x34b] = 0;
  lVar15 = *(long *)PTR_DAT_04bb2698;
  param_1[0x34a] = 0;
  if (lVar15 == 0) {
    pvVar10 = malloc(0x20);
joined_r0x02fe7cf4:
    if (pvVar10 != (void *)0x0) {
      param_1[0x34b] = pvVar10;
      param_1[0x34a] = 0x400000000;
    }
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar9 = (long *)(lVar15 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) {
      pvVar10 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,0x20,8);
      goto joined_r0x02fe7cf4;
    }
  }
  iVar12 = *(int *)(param_1 + 0x34a);
  iVar13 = *(int *)((long)param_1 + 0x1a54);
  if (iVar12 < iVar13) {
    *(undefined8 **)(param_1[0x34b] + (long)iVar12 * 8) = param_1 + 0x302;
    iVar13 = *(int *)((long)param_1 + 0x1a54);
    iVar12 = *(int *)(param_1 + 0x34a) + 1;
    *(int *)(param_1 + 0x34a) = iVar12;
    if (iVar13 <= iVar12) goto LAB_02fe5a50;
LAB_02fe7b64:
    *(undefined8 **)(param_1[0x34b] + (long)iVar12 * 8) = param_1 + 0x314;
    iVar13 = *(int *)((long)param_1 + 0x1a54);
    iVar12 = *(int *)(param_1 + 0x34a) + 1;
    *(int *)(param_1 + 0x34a) = iVar12;
    if (iVar13 <= iVar12) goto LAB_02fe5a58;
LAB_02fe7b8c:
    *(undefined8 **)(param_1[0x34b] + (long)iVar12 * 8) = param_1 + 0x338;
    iVar12 = *(int *)(param_1 + 0x34a) + 1;
    *(int *)(param_1 + 0x34a) = iVar12;
    if (iVar12 < *(int *)((long)param_1 + 0x1a54)) goto LAB_02fe5a60;
  }
  else {
    if (iVar12 < iVar13) goto LAB_02fe7b64;
LAB_02fe5a50:
    if (iVar12 < iVar13) goto LAB_02fe7b8c;
LAB_02fe5a58:
    if (iVar12 < iVar13) {
LAB_02fe5a60:
      *(undefined8 **)(param_1[0x34b] + (long)iVar12 * 8) = param_1 + 0x326;
      *(int *)(param_1 + 0x34a) = *(int *)(param_1 + 0x34a) + 1;
    }
  }
  param_1[0x34d] = 0;
  param_1[0x34e] = 0xffffffffffffffff;
  puVar7 = PTR_DAT_04bc7b18;
  param_1[0x34f] = PTR_DAT_04bc7b18;
  puVar14 = PTR_DAT_04bc7b20;
  param_1[0x350] = 0;
  param_1[0x352] = 0;
  param_1[0x353] = 0;
  param_1[0x34c] = puVar14 + 0x10;
  local_148._0_4_ = 5;
  puVar14 = PTR_DAT_04bc7ae0 + 0x10;
  param_1[0x351] = puVar14;
  puVar6 = PTR_DAT_04bc7ad0;
  uVar3 = *(undefined4 *)(PTR_DAT_04bc7ad0 + 0x28);
  uVar2 = *(undefined4 *)(PTR_DAT_04bc7ad0 + 0x2c);
  puVar1 = PTR_DAT_04bc7c18 + 0x10;
  param_1[0x354] = puVar1;
  FUN_02ff5850(param_1 + 0x355,uVar3,uVar2);
  FUN_02ff5850(param_1 + 0x358,uVar3,uVar2);
  *(undefined2 *)(param_1 + 0x35b) = 0;
  *(undefined1 *)((long)param_1 + 0x1ada) = 0;
  puVar5 = PTR_DAT_04bb3170;
  param_1[0x35c] = 0;
  param_1[0x35d] = puVar7;
  *(undefined2 *)((long)param_1 + 0x1adc) = *(undefined2 *)puVar5;
  FUN_02fee194(param_1 + 0x35e,5,0,0,puVar7);
  *(undefined4 *)(param_1 + 0x362) = 5;
  param_1[0x352] = param_1 + 0x354;
  param_1[0x353] = param_1 + 0x35e;
  local_148._0_4_ = 7;
  param_1[0x364] = 0;
  param_1[0x365] = 0;
  param_1[0x363] = puVar14;
  uVar3 = *(undefined4 *)(puVar6 + 0x38);
  param_1[0x366] = puVar1;
  uVar2 = *(undefined4 *)(puVar6 + 0x3c);
  FUN_02ff5850(param_1 + 0x367,uVar3,uVar2);
  FUN_02ff5850(param_1 + 0x36a,uVar3,uVar2);
  *(undefined2 *)(param_1 + 0x36d) = 0;
  *(undefined1 *)((long)param_1 + 0x1b6a) = 0;
  puVar5 = PTR_DAT_04bb3170;
  param_1[0x36e] = 0x2c;
  param_1[0x36f] = puVar7;
  *(undefined2 *)((long)param_1 + 0x1b6c) = *(undefined2 *)puVar5;
  FUN_02fee194(param_1 + 0x370,7,0x2c,0,puVar7);
  *(undefined4 *)(param_1 + 0x374) = 7;
  param_1[0x364] = param_1 + 0x366;
  param_1[0x365] = param_1 + 0x370;
  local_148 = (char *)CONCAT44(local_148._4_4_,6);
  param_1[0x376] = 0;
  param_1[0x377] = 0;
  param_1[0x375] = puVar14;
  uVar3 = *(undefined4 *)(puVar6 + 0x30);
  param_1[0x378] = puVar1;
  uVar2 = *(undefined4 *)(puVar6 + 0x34);
  FUN_02ff5850(param_1 + 0x379,uVar3,uVar2);
  FUN_02ff5850(param_1 + 0x37c,uVar3,uVar2);
  *(undefined2 *)(param_1 + 0x37f) = 0;
  *(undefined1 *)((long)param_1 + 0x1bfa) = 0;
  puVar14 = PTR_DAT_04bb3170;
  param_1[0x380] = 0x2b00000000;
  param_1[0x381] = puVar7;
  *(undefined2 *)((long)param_1 + 0x1bfc) = *(undefined2 *)puVar14;
  FUN_02fee194(param_1 + 0x382,6,0,0x2b,puVar7);
  *(undefined4 *)(param_1 + 0x386) = 6;
  param_1[0x376] = param_1 + 0x378;
  param_1[0x377] = param_1 + 0x382;
  param_1[0x388] = 0;
  lVar15 = *(long *)PTR_DAT_04bb2698;
  param_1[0x387] = 0;
  plVar9 = (long *)PTR_DAT_04bb3350;
  if (lVar15 == 0) {
    pvVar10 = malloc(0x20);
    plVar9 = (long *)PTR_DAT_04bb3350;
joined_r0x02fe7d10:
    if (pvVar10 != (void *)0x0) {
      param_1[0x388] = pvVar10;
      param_1[0x387] = 0x400000000;
    }
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar11 = (long *)(lVar15 + 8);
    if (lVar8 != 0) {
      plVar11 = (long *)(lVar8 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 != (long *)0x0) {
      pvVar10 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,0x20,8);
      goto joined_r0x02fe7d10;
    }
  }
  iVar12 = *(int *)(param_1 + 0x387);
  iVar13 = *(int *)((long)param_1 + 0x1c3c);
  if (iVar12 < iVar13) {
    *(undefined8 **)(param_1[0x388] + (long)iVar12 * 8) = param_1 + 0x351;
    iVar13 = *(int *)((long)param_1 + 0x1c3c);
    iVar12 = *(int *)(param_1 + 0x387) + 1;
    *(int *)(param_1 + 0x387) = iVar12;
    if (iVar13 <= iVar12) goto LAB_02fe5d54;
LAB_02fe7be4:
    *(undefined8 **)(param_1[0x388] + (long)iVar12 * 8) = param_1 + 0x363;
    iVar12 = *(int *)(param_1 + 0x387) + 1;
    *(int *)(param_1 + 0x387) = iVar12;
    if (iVar12 < *(int *)((long)param_1 + 0x1c3c)) {
LAB_02fe5d5c:
      *(undefined8 **)(param_1[0x388] + (long)iVar12 * 8) = param_1 + 0x375;
      *(int *)(param_1 + 0x387) = *(int *)(param_1 + 0x387) + 1;
    }
  }
  else {
    if (iVar12 < iVar13) goto LAB_02fe7be4;
LAB_02fe5d54:
    if (iVar12 < iVar13) goto LAB_02fe5d5c;
  }
  param_1[0x38a] = 0;
  param_1[0x38b] = 0xffffffffffffffff;
  puVar1 = PTR_DAT_04bc7b28;
  param_1[0x389] = &PTR_LAB_04aef7e8;
  param_1[0x38d] = 0;
  local_148 = (char *)CONCAT44(local_148._4_4_,8);
  param_1[0x38f] = 0;
  param_1[0x390] = 0;
  param_1[0x38c] = puVar1;
  param_1[0x38e] = PTR_DAT_04bc7ae0 + 0x10;
  uVar3 = *(undefined4 *)(PTR_DAT_04bc7ad0 + 0x40);
  uVar2 = *(undefined4 *)(PTR_DAT_04bc7ad0 + 0x44);
  param_1[0x391] = PTR_DAT_04bc7c18 + 0x10;
  FUN_02ff5850(param_1 + 0x392,uVar3,uVar2);
  FUN_02ff5850(param_1 + 0x395,uVar3,uVar2);
  *(undefined2 *)(param_1 + 0x398) = 0;
  *(undefined1 *)((long)param_1 + 0x1cc2) = 0;
  puVar14 = PTR_DAT_04bb3170;
  param_1[0x399] = 0;
  param_1[0x39a] = puVar1;
  *(undefined2 *)((long)param_1 + 0x1cc4) = *(undefined2 *)puVar14;
  FUN_02fee194(param_1 + 0x39b,8,0,0,puVar1);
  *(undefined4 *)(param_1 + 0x39f) = 8;
  param_1[0x38f] = param_1 + 0x391;
  param_1[0x390] = param_1 + 0x39b;
  param_1[0x3a1] = 0;
  lVar15 = *(long *)PTR_DAT_04bb2698;
  param_1[0x3a0] = 0;
  if (lVar15 == 0) {
    pvVar10 = malloc(8);
joined_r0x02fe7d20:
    if (pvVar10 != (void *)0x0) {
      param_1[0x3a1] = pvVar10;
      param_1[0x3a0] = 0x100000000;
    }
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    plVar9 = (long *)(lVar15 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) {
      pvVar10 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,8,8);
      goto joined_r0x02fe7d20;
    }
  }
  if (*(int *)(param_1 + 0x3a0) < *(int *)((long)param_1 + 0x1d04)) {
    *(undefined8 **)(param_1[0x3a1] + (long)*(int *)(param_1 + 0x3a0) * 8) = param_1 + 0x38e;
    *(int *)(param_1 + 0x3a0) = *(int *)(param_1 + 0x3a0) + 1;
  }
  param_1[0x3a3] = 0;
  param_1[0x3a4] = 0xffffffffffffffff;
  puVar7 = PTR_DAT_04bc7b30;
  param_1[0x3a6] = 0;
  param_1[0x3a5] = puVar7;
  puVar14 = PTR_DAT_04bc7b38;
  param_1[0x3a8] = 0;
  param_1[0x3a9] = 0;
  param_1[0x3a2] = puVar14 + 0x10;
  local_148._0_4_ = 9;
  puVar14 = PTR_DAT_04bc7ae0 + 0x10;
  param_1[0x3a7] = puVar14;
  uVar3 = *(undefined4 *)(puVar6 + 0x48);
  uVar2 = *(undefined4 *)(puVar6 + 0x4c);
  puVar1 = PTR_DAT_04bc7c18 + 0x10;
  param_1[0x3aa] = puVar1;
  FUN_02ff5850(param_1 + 0x3ab,uVar3,uVar2);
  FUN_02ff5850(param_1 + 0x3ae,uVar3,uVar2);
  *(undefined2 *)(param_1 + 0x3b1) = 0;
  *(undefined1 *)((long)param_1 + 0x1d8a) = 0;
  puVar5 = PTR_DAT_04bb3170;
  param_1[0x3b2] = 0xe;
  param_1[0x3b3] = puVar7;
  *(undefined2 *)((long)param_1 + 0x1d8c) = *(undefined2 *)puVar5;
  FUN_02fee194(param_1 + 0x3b4,9,0xe,0,puVar7);
  *(undefined4 *)(param_1 + 0x3b8) = 9;
  param_1[0x3a8] = param_1 + 0x3aa;
  param_1[0x3a9] = param_1 + 0x3b4;
  local_148._0_4_ = 10;
  param_1[0x3ba] = 0;
  param_1[0x3bb] = 0;
  param_1[0x3b9] = puVar14;
  uVar3 = *(undefined4 *)(puVar6 + 0x50);
  param_1[0x3bc] = puVar1;
  uVar2 = *(undefined4 *)(puVar6 + 0x54);
  FUN_02ff5850(param_1 + 0x3bd,uVar3,uVar2);
  FUN_02ff5850(param_1 + 0x3c0,uVar3,uVar2);
  *(undefined2 *)(param_1 + 0x3c3) = 0;
  *(undefined1 *)((long)param_1 + 0x1e1a) = 0;
  puVar5 = PTR_DAT_04bb3170;
  param_1[0x3c4] = 0x2400000000;
  param_1[0x3c5] = puVar7;
  *(undefined2 *)((long)param_1 + 0x1e1c) = *(undefined2 *)puVar5;
  FUN_02fee194(param_1 + 0x3c6,10,0,0x24,puVar7);
  *(undefined4 *)(param_1 + 0x3ca) = 10;
  param_1[0x3ba] = param_1 + 0x3bc;
  param_1[0x3bb] = param_1 + 0x3c6;
  local_148 = (char *)CONCAT44(local_148._4_4_,0xb);
  param_1[0x3cc] = 0;
  param_1[0x3cd] = 0;
  param_1[0x3cb] = puVar14;
  uVar3 = *(undefined4 *)(puVar6 + 0x58);
  param_1[0x3ce] = puVar1;
  uVar2 = *(undefined4 *)(puVar6 + 0x5c);
  FUN_02ff5850(param_1 + 0x3cf,uVar3,uVar2);
  FUN_02ff5850(param_1 + 0x3d2,uVar3,uVar2);
  *(undefined2 *)(param_1 + 0x3d5) = 0;
  *(undefined1 *)((long)param_1 + 0x1eaa) = 0;
  puVar14 = PTR_DAT_04bb3170;
  param_1[0x3d6] = 0x3700000000;
  param_1[0x3d7] = puVar7;
  *(undefined2 *)((long)param_1 + 0x1eac) = *(undefined2 *)puVar14;
  FUN_02fee194(param_1 + 0x3d8,0xb,0,0x37,puVar7);
  *(undefined4 *)(param_1 + 0x3dc) = 0xb;
  param_1[0x3cc] = param_1 + 0x3ce;
  param_1[0x3cd] = param_1 + 0x3d8;
  param_1[0x3de] = 0;
  lVar15 = *(long *)PTR_DAT_04bb2698;
  param_1[0x3dd] = 0;
  plVar9 = (long *)PTR_DAT_04bb3350;
  if (lVar15 == 0) {
    pvVar10 = malloc(0x18);
    plVar9 = (long *)PTR_DAT_04bb3350;
joined_r0x02fe7d3c:
    if (pvVar10 != (void *)0x0) {
      param_1[0x3de] = pvVar10;
      param_1[0x3dd] = 0x300000000;
    }
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar11 = (long *)(lVar15 + 8);
    if (lVar8 != 0) {
      plVar11 = (long *)(lVar8 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 != (long *)0x0) {
      pvVar10 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,0x18,8);
      goto joined_r0x02fe7d3c;
    }
  }
  iVar12 = *(int *)(param_1 + 0x3dd);
  iVar13 = *(int *)((long)param_1 + 0x1eec);
  if (iVar12 < iVar13) {
    *(undefined8 **)(param_1[0x3de] + (long)iVar12 * 8) = param_1 + 0x3a7;
    iVar13 = *(int *)((long)param_1 + 0x1eec);
    iVar12 = *(int *)(param_1 + 0x3dd) + 1;
    *(int *)(param_1 + 0x3dd) = iVar12;
    if (iVar13 <= iVar12) goto LAB_02fe61d0;
LAB_02fe7c3c:
    *(undefined8 **)(param_1[0x3de] + (long)iVar12 * 8) = param_1 + 0x3b9;
    iVar12 = *(int *)(param_1 + 0x3dd) + 1;
    *(int *)(param_1 + 0x3dd) = iVar12;
    if (iVar12 < *(int *)((long)param_1 + 0x1eec)) {
LAB_02fe61d8:
      *(undefined8 **)(param_1[0x3de] + (long)iVar12 * 8) = param_1 + 0x3cb;
      *(int *)(param_1 + 0x3dd) = *(int *)(param_1 + 0x3dd) + 1;
    }
  }
  else {
    if (iVar12 < iVar13) goto LAB_02fe7c3c;
LAB_02fe61d0:
    if (iVar12 < iVar13) goto LAB_02fe61d8;
  }
  param_1[0x3e0] = 0;
  param_1[0x3df] = &PTR_LAB_04aef8c0;
  param_1[0x3e1] = 0xffffffffffffffff;
  param_1[0x3e2] = 0;
  param_1[0x3e3] = 0;
  local_148 = (char *)CONCAT44(local_148._4_4_,0x11);
  param_1[0x3e5] = 0;
  param_1[0x3e6] = 0;
  param_1[0x3e4] = PTR_DAT_04bc7ae0 + 0x10;
  uVar3 = *(undefined4 *)(PTR_DAT_04bc7ad0 + 0x88);
  uVar2 = *(undefined4 *)(PTR_DAT_04bc7ad0 + 0x8c);
  param_1[999] = PTR_DAT_04bc7c18 + 0x10;
  FUN_02ff5850(param_1 + 1000,uVar3,uVar2);
  FUN_02ff5850(param_1 + 0x3eb,uVar3,uVar2);
  *(undefined2 *)(param_1 + 0x3ee) = 0;
  *(undefined1 *)((long)param_1 + 0x1f72) = 0;
  puVar14 = PTR_DAT_04bb3170;
  param_1[0x3ef] = 0xb;
  param_1[0x3f0] = 0;
  *(undefined2 *)((long)param_1 + 0x1f74) = *(undefined2 *)puVar14;
  FUN_02fee194(param_1 + 0x3f1,0x11,0xb,0,0);
  *(undefined4 *)(param_1 + 0x3f5) = 0x11;
  param_1[0x3e5] = param_1 + 999;
  param_1[0x3e6] = param_1 + 0x3f1;
  param_1[0x3f7] = 0;
  lVar15 = *(long *)PTR_DAT_04bb2698;
  param_1[0x3f6] = 0;
  if (lVar15 == 0) {
    pvVar10 = malloc(8);
joined_r0x02fe7d4c:
    if (pvVar10 != (void *)0x0) {
      param_1[0x3f7] = pvVar10;
      param_1[0x3f6] = 0x100000000;
    }
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    plVar11 = (long *)(lVar15 + 8);
    if (lVar8 != 0) {
      plVar11 = (long *)(lVar8 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 != (long *)0x0) {
      pvVar10 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,8,8);
      goto joined_r0x02fe7d4c;
    }
  }
  if (*(int *)(param_1 + 0x3f6) < *(int *)((long)param_1 + 0x1fb4)) {
    *(undefined8 **)(param_1[0x3f7] + (long)*(int *)(param_1 + 0x3f6) * 8) = param_1 + 0x3e4;
    *(int *)(param_1 + 0x3f6) = *(int *)(param_1 + 0x3f6) + 1;
  }
  param_1[0x3f9] = 0;
  param_1[0x3f8] = &PTR_LAB_04aef998;
  param_1[0x3fa] = 0xffffffffffffffff;
  param_1[0x3fb] = 0;
  param_1[0x3fc] = 0;
  local_148 = (char *)CONCAT44(local_148._4_4_,0xd);
  param_1[0x3fe] = 0;
  param_1[0x3ff] = 0;
  param_1[0x3fd] = PTR_DAT_04bc7ae0 + 0x10;
  uVar3 = *(undefined4 *)(PTR_DAT_04bc7ad0 + 0x68);
  uVar2 = *(undefined4 *)(PTR_DAT_04bc7ad0 + 0x6c);
  param_1[0x400] = PTR_DAT_04bc7c18 + 0x10;
  FUN_02ff5850(param_1 + 0x401,uVar3,uVar2);
  FUN_02ff5850(param_1 + 0x404,uVar3,uVar2);
  *(undefined2 *)(param_1 + 0x407) = 0;
  *(undefined1 *)((long)param_1 + 0x203a) = 0;
  puVar14 = PTR_DAT_04bb3170;
  param_1[0x408] = 0;
  param_1[0x409] = 0;
  *(undefined2 *)((long)param_1 + 0x203c) = *(undefined2 *)puVar14;
  FUN_02fee194(param_1 + 0x40a,0xd,0,0,0);
  *(undefined4 *)(param_1 + 0x40e) = 0xd;
  param_1[0x3fe] = param_1 + 0x400;
  param_1[0x3ff] = param_1 + 0x40a;
  param_1[0x410] = 0;
  lVar15 = *(long *)PTR_DAT_04bb2698;
  param_1[0x40f] = 0;
  if (lVar15 == 0) {
    pvVar10 = malloc(8);
joined_r0x02fe7d5c:
    if (pvVar10 != (void *)0x0) {
      param_1[0x410] = pvVar10;
      param_1[0x40f] = 0x100000000;
    }
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*plVar9 + 0x68));
    plVar9 = (long *)(lVar15 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) {
      pvVar10 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,8,8);
      goto joined_r0x02fe7d5c;
    }
  }
  if (*(int *)(param_1 + 0x40f) < *(int *)((long)param_1 + 0x207c)) {
    *(undefined8 **)(param_1[0x410] + (long)*(int *)(param_1 + 0x40f) * 8) = param_1 + 0x3fd;
    *(int *)(param_1 + 0x40f) = *(int *)(param_1 + 0x40f) + 1;
  }
  param_1[0x412] = 0;
  param_1[0x413] = 0xffffffffffffffff;
  param_1[0x414] = 0;
  param_1[0x415] = 0;
  puVar14 = PTR_DAT_04bc7b40 + 0x10;
  local_148._0_4_ = 0xf;
  param_1[0x417] = 0;
  param_1[0x418] = 0;
  param_1[0x411] = puVar14;
  puVar14 = PTR_DAT_04bc7ae0 + 0x10;
  param_1[0x416] = puVar14;
  uVar3 = *(undefined4 *)(puVar6 + 0x78);
  uVar2 = *(undefined4 *)(puVar6 + 0x7c);
  puVar1 = PTR_DAT_04bc7c18 + 0x10;
  param_1[0x419] = puVar1;
  FUN_02ff5850(param_1 + 0x41a,uVar3,uVar2);
  FUN_02ff5850(param_1 + 0x41d,uVar3,uVar2);
  *(undefined2 *)(param_1 + 0x420) = 0;
  *(undefined1 *)((long)param_1 + 0x2102) = 0;
  puVar5 = PTR_DAT_04bb3170;
  param_1[0x421] = 0xc;
  param_1[0x422] = 0;
  *(undefined2 *)((long)param_1 + 0x2104) = *(undefined2 *)puVar5;
  FUN_02fee194(param_1 + 0x423,0xf,0xc,0,0);
  *(undefined4 *)(param_1 + 0x427) = 0xf;
  param_1[0x417] = param_1 + 0x419;
  param_1[0x418] = param_1 + 0x423;
  local_148._0_4_ = 0xf;
  param_1[0x429] = 0;
  param_1[0x42a] = 0;
  param_1[0x428] = puVar14;
  uVar3 = *(undefined4 *)(puVar6 + 0x78);
  param_1[0x42b] = puVar1;
  uVar2 = *(undefined4 *)(puVar6 + 0x7c);
  FUN_02ff5850(param_1 + 0x42c,uVar3,uVar2);
  FUN_02ff5850(param_1 + 0x42f,uVar3,uVar2);
  *(undefined2 *)(param_1 + 0x432) = 0;
  *(undefined1 *)((long)param_1 + 0x2192) = 0;
  puVar5 = PTR_DAT_04bb3170;
  param_1[0x433] = 0x200000000c;
  param_1[0x434] = 0;
  *(undefined2 *)((long)param_1 + 0x2194) = *(undefined2 *)puVar5;
  FUN_02fee194(param_1 + 0x435,0xf,0xc,0x20,0);
  *(undefined4 *)(param_1 + 0x439) = 0xf;
  param_1[0x429] = param_1 + 0x42b;
  param_1[0x42a] = param_1 + 0x435;
  local_148 = (char *)CONCAT44(local_148._4_4_,0x10);
  param_1[0x43b] = 0;
  param_1[0x43c] = 0;
  param_1[0x43a] = puVar14;
  uVar3 = *(undefined4 *)(puVar6 + 0x80);
  param_1[0x43d] = puVar1;
  uVar2 = *(undefined4 *)(puVar6 + 0x84);
  FUN_02ff5850(param_1 + 0x43e,uVar3,uVar2);
  FUN_02ff5850(param_1 + 0x441,uVar3,uVar2);
  *(undefined2 *)(param_1 + 0x444) = 0;
  *(undefined1 *)((long)param_1 + 0x2222) = 0;
  puVar14 = PTR_DAT_04bb3170;
  param_1[0x445] = 0x100000037;
  param_1[0x446] = 0;
  *(undefined2 *)((long)param_1 + 0x2224) = *(undefined2 *)puVar14;
  FUN_02fee194(param_1 + 0x447,0x10,0x37,1,0);
  *(undefined4 *)(param_1 + 1099) = 0x10;
  param_1[0x43b] = param_1 + 0x43d;
  param_1[0x43c] = param_1 + 0x447;
  param_1[0x44d] = 0;
  lVar15 = *(long *)PTR_DAT_04bb2698;
  param_1[0x44c] = 0;
  if (lVar15 == 0) {
    pvVar10 = malloc(0x18);
joined_r0x02fe7d70:
    if (pvVar10 != (void *)0x0) {
      param_1[0x44d] = pvVar10;
      param_1[0x44c] = 0x300000000;
    }
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar9 = (long *)(lVar15 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) {
      pvVar10 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,0x18,8);
      goto joined_r0x02fe7d70;
    }
  }
  iVar12 = *(int *)(param_1 + 0x44c);
  iVar13 = *(int *)((long)param_1 + 0x2264);
  if (iVar12 < iVar13) {
    *(undefined8 **)(param_1[0x44d] + (long)iVar12 * 8) = param_1 + 0x416;
    iVar13 = *(int *)((long)param_1 + 0x2264);
    iVar12 = *(int *)(param_1 + 0x44c) + 1;
    *(int *)(param_1 + 0x44c) = iVar12;
    if (iVar13 <= iVar12) goto LAB_02fe67b4;
LAB_02fe7c94:
    *(undefined8 **)(param_1[0x44d] + (long)iVar12 * 8) = param_1 + 0x428;
    iVar12 = *(int *)(param_1 + 0x44c) + 1;
    *(int *)(param_1 + 0x44c) = iVar12;
    if (iVar12 < *(int *)((long)param_1 + 0x2264)) {
LAB_02fe67bc:
      *(undefined8 **)(param_1[0x44d] + (long)iVar12 * 8) = param_1 + 0x43a;
      *(int *)(param_1 + 0x44c) = *(int *)(param_1 + 0x44c) + 1;
    }
  }
  else {
    if (iVar12 < iVar13) goto LAB_02fe7c94;
LAB_02fe67b4:
    if (iVar12 < iVar13) goto LAB_02fe67bc;
  }
  param_1[0x44f] = 0;
  param_1[0x450] = 0xffffffffffffffff;
  param_1[0x451] = 0;
  param_1[0x452] = 0;
  puVar14 = PTR_DAT_04bc7b48 + 0x10;
  local_148._0_4_ = 0xe;
  param_1[0x454] = 0;
  param_1[0x455] = 0;
  param_1[0x44e] = puVar14;
  puVar14 = PTR_DAT_04bc7ae0 + 0x10;
  param_1[0x453] = puVar14;
  uVar3 = *(undefined4 *)(puVar6 + 0x70);
  uVar2 = *(undefined4 *)(puVar6 + 0x74);
  puVar1 = PTR_DAT_04bc7c18 + 0x10;
  param_1[0x456] = puVar1;
  FUN_02ff5850(param_1 + 0x457,uVar3,uVar2);
  FUN_02ff5850(param_1 + 0x45a,uVar3,uVar2);
  *(undefined2 *)(param_1 + 0x45d) = 0;
  *(undefined1 *)((long)param_1 + 0x22ea) = 0;
  puVar5 = PTR_DAT_04bb3170;
  param_1[0x45e] = 0xc;
  param_1[0x45f] = 0;
  *(undefined2 *)((long)param_1 + 0x22ec) = *(undefined2 *)puVar5;
  FUN_02fee194(param_1 + 0x460,0xe,0xc,0,0);
  *(undefined4 *)(param_1 + 0x464) = 0xe;
  param_1[0x454] = param_1 + 0x456;
  param_1[0x455] = param_1 + 0x460;
  local_148 = (char *)CONCAT44(local_148._4_4_,0xe);
  param_1[0x466] = 0;
  param_1[0x467] = 0;
  param_1[0x465] = puVar14;
  uVar3 = *(undefined4 *)(puVar6 + 0x70);
  param_1[0x468] = puVar1;
  uVar2 = *(undefined4 *)(puVar6 + 0x74);
  FUN_02ff5850(param_1 + 0x469,uVar3,uVar2);
  FUN_02ff5850(param_1 + 0x46c,uVar3,uVar2);
  *(undefined2 *)(param_1 + 0x46f) = 0;
  *(undefined1 *)((long)param_1 + 0x237a) = 0;
  puVar14 = PTR_DAT_04bb3170;
  param_1[0x470] = 0x200000000c;
  param_1[0x471] = 0;
  *(undefined2 *)((long)param_1 + 0x237c) = *(undefined2 *)puVar14;
  FUN_02fee194(param_1 + 0x472,0xe,0xc,0x20,0);
  *(undefined4 *)(param_1 + 0x476) = 0xe;
  param_1[0x466] = param_1 + 0x468;
  param_1[0x467] = param_1 + 0x472;
  param_1[0x478] = 0;
  lVar15 = *(long *)PTR_DAT_04bb2698;
  param_1[0x477] = 0;
  if (lVar15 == 0) {
    pvVar10 = malloc(0x10);
    puVar14 = PTR_DAT_04bc8e10;
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar14 = PTR_DAT_04bc8e10;
    plVar9 = (long *)(lVar15 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) goto LAB_02fe69e8;
    pvVar10 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,0x10,8);
  }
  if (pvVar10 != (void *)0x0) {
    param_1[0x478] = pvVar10;
    param_1[0x477] = 0x200000000;
  }
LAB_02fe69e8:
  iVar12 = *(int *)(param_1 + 0x477);
  iVar13 = *(int *)((long)param_1 + 0x23bc);
  if (iVar12 < iVar13) {
    *(undefined8 **)(param_1[0x478] + (long)iVar12 * 8) = param_1 + 0x453;
    iVar13 = *(int *)((long)param_1 + 0x23bc);
    iVar12 = *(int *)(param_1 + 0x477) + 1;
    *(int *)(param_1 + 0x477) = iVar12;
  }
  if (iVar12 < iVar13) {
    *(undefined8 **)(param_1[0x478] + (long)iVar12 * 8) = param_1 + 0x465;
    *(int *)(param_1 + 0x477) = *(int *)(param_1 + 0x477) + 1;
  }
  local_138 = 0;
  local_120 = 0;
  puVar14 = puVar14 + 0x10;
  local_118 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_148 = "Tops_Nosleeve_00";
  local_140 = (undefined1 *)0x100000008;
  uStack_128 = 0xffffffffffffffff;
  local_e0 = 0;
  local_110 = "Tops_Nosleeve_Back_00";
  local_108 = 0x200000008;
  uStack_f0 = 0xffffffffffffffff;
  local_130 = puVar14;
  local_f8 = puVar14;
  FUN_02feb1f0(param_1 + 0x479,param_1[3],&local_148,2);
  local_110 = "Tops_Tshirt_Back_00";
  local_108 = 0x200000008;
  local_138 = 0;
  local_120 = 0;
  local_118 = 0;
  local_100 = 0;
  local_148 = "Tops_Tshirt_00";
  local_140 = (undefined1 *)0x100000008;
  local_e8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_128 = 0xffffffffffffffff;
  uStack_f0 = 0xffffffffffffffff;
  local_d8 = "Sleeve_Short_00";
  local_d0 = (undefined1 *)0x30000000b;
  uStack_b8 = 0xffffffffffffffff;
  local_a0 = "Sleeve_Short_00";
  local_98 = 0x40000000b;
  uStack_80 = 0xffffffffffffffff;
  local_130 = puVar14;
  local_f8 = puVar14;
  local_c0 = puVar14;
  local_88 = puVar14;
  FUN_02feb1f0(param_1 + 0x487,param_1[3],&local_148,4);
  uStack_128 = 0xffffffffffffffff;
  uStack_f0 = 0xffffffffffffffff;
  uStack_b8 = 0xffffffffffffffff;
  local_138 = 0;
  local_120 = 0;
  local_148 = "Tops_Shirt_00";
  local_140 = (undefined1 *)0x100000008;
  local_118 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_110 = "Tops_Shirt_Back_00";
  local_108 = 0x200000008;
  local_d8 = "Sleeve_Long_00";
  local_d0 = (undefined1 *)0x30000000a;
  local_a0 = "Sleeve_Long_00";
  local_98 = 0x40000000a;
  uStack_80 = 0xffffffffffffffff;
  local_130 = puVar14;
  local_f8 = puVar14;
  local_c0 = puVar14;
  local_88 = puVar14;
  FUN_02feb1f0(param_1 + 0x495,param_1[3],&local_148,4);
  local_138 = 0;
  local_120 = 0;
  local_118 = 0;
  local_148 = "Tops_Sweater_00";
  local_140 = (undefined1 *)0x100000008;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_128 = 0xffffffffffffffff;
  local_110 = "Tops_Sweater_Back_00";
  local_108 = 0x200000008;
  uStack_f0 = 0xffffffffffffffff;
  local_d8 = "Sleeve_Long_00";
  local_d0 = (undefined1 *)0x30000000a;
  uStack_b8 = 0xffffffffffffffff;
  local_a0 = "Sleeve_Long_00";
  local_98 = 0x40000000a;
  uStack_80 = 0xffffffffffffffff;
  local_130 = puVar14;
  local_f8 = puVar14;
  local_c0 = puVar14;
  local_88 = puVar14;
  FUN_02feb1f0(param_1 + 0x4a3,param_1[3],&local_148,4);
  local_138 = 0;
  local_120 = 0;
  local_118 = 0;
  local_148 = "Tops_Parka_00";
  local_140 = (undefined1 *)0x100000008;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_128 = 0xffffffffffffffff;
  local_110 = "Tops_Parka_Back_00";
  local_108 = 0x200000008;
  uStack_f0 = 0xffffffffffffffff;
  local_d8 = "Sleeve_Long_00";
  local_d0 = (undefined1 *)0x30000000a;
  uStack_b8 = 0xffffffffffffffff;
  local_a0 = "Sleeve_Long_00";
  local_98 = 0x40000000a;
  uStack_80 = 0xffffffffffffffff;
  local_130 = puVar14;
  local_f8 = puVar14;
  local_c0 = puVar14;
  local_88 = puVar14;
  FUN_02feb1f0(param_1 + 0x4b1,param_1[3],&local_148,4);
  local_138 = 0;
  local_120 = 0;
  local_148 = "Tops_Coat_00";
  local_140 = (undefined1 *)0x100000009;
  local_118 = 0;
  uStack_128 = 0xffffffffffffffff;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_110 = "Tops_Coat_Back_00";
  local_108 = 0x200000009;
  uStack_f0 = 0xffffffffffffffff;
  local_d8 = "Sleeve_Long_00";
  local_d0 = (undefined1 *)0x30000000a;
  uStack_b8 = 0xffffffffffffffff;
  local_a0 = "Sleeve_Long_00";
  local_98 = 0x40000000a;
  uStack_80 = 0xffffffffffffffff;
  local_130 = puVar14;
  local_f8 = puVar14;
  local_c0 = puVar14;
  local_88 = puVar14;
  FUN_02feb1f0(param_1 + 0x4bf,param_1[3],&local_148,4);
  local_138 = 0;
  local_120 = 0;
  local_118 = 0;
  local_148 = "OnePiece_NoSleeve_00";
  local_140 = (undefined1 *)0x100000009;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  uStack_128 = 0xffffffffffffffff;
  local_110 = "OnePiece_NoSleeve_Back_00";
  local_108 = 0x200000009;
  uStack_f0 = 0xffffffffffffffff;
  local_130 = puVar14;
  local_f8 = puVar14;
  FUN_02feb1f0(param_1 + 0x4cd,param_1[3],&local_148,2);
  local_138 = 0;
  local_120 = 0;
  local_110 = "OnePiece_ShortSleeve_Back_00";
  local_108 = 0x200000009;
  local_148 = "OnePiece_ShortSleeve_00";
  local_140 = (undefined1 *)0x100000009;
  local_118 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_128 = 0xffffffffffffffff;
  uStack_f0 = 0xffffffffffffffff;
  local_d8 = "Sleeve_Short_00";
  local_d0 = (undefined1 *)0x30000000b;
  uStack_b8 = 0xffffffffffffffff;
  local_a0 = "Sleeve_Short_00";
  local_98 = 0x40000000b;
  uStack_80 = 0xffffffffffffffff;
  local_130 = puVar14;
  local_f8 = puVar14;
  local_c0 = puVar14;
  local_88 = puVar14;
  FUN_02feb1f0(param_1 + 0x4db,param_1[3],&local_148,4);
  local_138 = 0;
  local_120 = 0;
  local_118 = 0;
  local_148 = "OnePiece_LongSleeve_00";
  local_140 = (undefined1 *)0x100000009;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_128 = 0xffffffffffffffff;
  local_110 = "OnePiece_LongSleeve_Back_00";
  local_108 = 0x200000009;
  uStack_f0 = 0xffffffffffffffff;
  local_d8 = "Sleeve_Long_00";
  local_d0 = (undefined1 *)0x30000000a;
  uStack_b8 = 0xffffffffffffffff;
  local_a0 = "Sleeve_Long_00";
  local_98 = 0x40000000a;
  uStack_80 = 0xffffffffffffffff;
  local_130 = puVar14;
  local_f8 = puVar14;
  local_c0 = puVar14;
  local_88 = puVar14;
  FUN_02feb1f0(param_1 + 0x4e9,param_1[3],&local_148,4);
  local_138 = 0;
  local_120 = 0;
  local_118 = 0;
  local_148 = "OnePiece_Round_00";
  local_140 = (undefined1 *)0x100000009;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  uStack_128 = 0xffffffffffffffff;
  local_110 = "OnePiece_Round_Back_00";
  local_108 = 0x200000009;
  uStack_f0 = 0xffffffffffffffff;
  local_130 = puVar14;
  local_f8 = puVar14;
  FUN_02feb1f0(param_1 + 0x4f7,param_1[3],&local_148,2);
  local_138 = 0;
  local_120 = 0;
  local_110 = "OnePiece_Balloon_Back_00";
  local_108 = 0x200000009;
  local_148 = "OnePiece_Balloon_00";
  local_140 = (undefined1 *)0x100000009;
  local_118 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_128 = 0xffffffffffffffff;
  uStack_f0 = 0xffffffffffffffff;
  local_d8 = "Sleeve_Short_00";
  local_d0 = (undefined1 *)0x30000000b;
  uStack_b8 = 0xffffffffffffffff;
  local_a0 = "Sleeve_Short_00";
  local_98 = 0x40000000b;
  uStack_80 = 0xffffffffffffffff;
  local_130 = puVar14;
  local_f8 = puVar14;
  local_c0 = puVar14;
  local_88 = puVar14;
  FUN_02feb1f0(param_1 + 0x505,param_1[3],&local_148,4);
  local_138 = 0;
  local_148 = "OnePiece_Robe_00";
  local_140 = (undefined1 *)0x100000009;
  local_110 = "OnePiece_Robe_Back_00";
  local_108 = 0x200000009;
  local_d8 = "Sleeve_Kimono_00";
  local_d0 = &DAT_300000019;
  uStack_128 = 0xffffffffffffffff;
  local_120 = 0;
  local_118 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_f0 = 0xffffffffffffffff;
  uStack_b8 = 0xffffffffffffffff;
  local_a0 = "Sleeve_Kimono_00";
  local_98 = 0x400000019;
  uStack_80 = 0xffffffffffffffff;
  local_130 = puVar14;
  local_f8 = puVar14;
  local_c0 = puVar14;
  local_88 = puVar14;
  FUN_02feb1f0(param_1 + 0x513,param_1[3],&local_148,4);
  local_138 = 0;
  local_148 = "MeshCap_00";
  local_140 = (undefined1 *)0x10000000c;
  local_120 = 0;
  local_110 = "MeshCap_Back_00";
  local_108 = 0x20000000f;
  local_118 = 0;
  uStack_128 = 0xffffffffffffffff;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  uStack_f0 = 0xffffffffffffffff;
  local_d8 = "MeshCap_Bill_00";
  local_d0 = (undefined1 *)0x50000000d;
  uStack_b8 = 0xffffffffffffffff;
  local_130 = puVar14;
  local_f8 = puVar14;
  local_c0 = puVar14;
  FUN_02feb1f0(param_1 + 0x521,param_1[3],&local_148,3);
  param_1[0x52f] = &PTR_LAB_04aefa70;
  local_138 = 0;
  local_148 = "Kankanbo_00";
  local_140 = (undefined1 *)0x100000013;
  local_110 = (char *)0x0;
  local_108 = 0x200000015;
  uStack_128 = 0xffffffffffffffff;
  local_120 = 0;
  local_118 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  uStack_f0 = 0xffffffffffffffff;
  local_d8 = (char *)0x0;
  local_d0 = (undefined1 *)0x500000017;
  uStack_b8 = 0xffffffffffffffff;
  local_130 = puVar14;
  local_f8 = puVar14;
  local_c0 = puVar14;
  FUN_02feb1f0(param_1 + 0x530,param_1[3],&local_148,3);
  local_138 = 0;
  local_148 = "Facepanel_00";
  local_140 = (undefined1 *)0x100000023;
  uStack_128 = 0xffffffffffffffff;
  local_120 = 0;
  local_118 = 0;
  local_130 = puVar14;
  FUN_02feb1f0(param_1 + 0x53e,param_1[3],&local_148,1);
  local_138 = 0;
  local_148 = "Umbrella_00";
  local_140 = (undefined1 *)0x10000001f;
  uStack_128 = 0xffffffffffffffff;
  local_120 = 0;
  local_118 = 0;
  local_130 = puVar14;
  FUN_02feb1f0(param_1 + 0x54c,param_1[3],&local_148,1);
  local_148 = "Pennant_00";
  local_110 = "Pennant_Back_00";
  local_140 = (undefined1 *)0x100000021;
  local_108 = 0x200000021;
  local_d8 = "Pennant_Handle_00";
  local_138 = 0;
  uStack_128 = 0xffffffffffffffff;
  local_120 = 0;
  local_118 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d0 = (undefined1 *)0x500000022;
  local_c8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  uStack_f0 = 0xffffffffffffffff;
  uStack_b8 = 0xffffffffffffffff;
  local_130 = puVar14;
  local_f8 = puVar14;
  local_c0 = puVar14;
  FUN_02feb1f0(param_1 + 0x55a,param_1[3],&local_148,3);
  local_140 = (undefined1 *)0x100000020;
  local_148 = "Fan_00";
  local_138 = 0;
  local_120 = 0;
  uStack_128 = 0xffffffffffffffff;
  local_118 = 0;
  local_110 = "Fan_Back_00";
  local_108 = 0x200000020;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  uStack_f0 = 0xffffffffffffffff;
  local_130 = puVar14;
  local_f8 = puVar14;
  FUN_02feb1f0(param_1 + 0x568,param_1[3],&local_148,2);
  local_148 = "PreTops_Nosleeve_00";
  local_140 = (undefined1 *)0x100000001;
  local_138 = 0;
  uStack_128 = 0xffffffffffffffff;
  local_120 = 0;
  local_118 = 0;
  local_110 = "PreTops_Nosleeve_Back_00";
  local_108 = 0x200000001;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  uStack_f0 = 0xffffffffffffffff;
  local_130 = puVar14;
  local_f8 = puVar14;
  FUN_02feb1f0(param_1 + 0x576,param_1[3],&local_148,2);
  local_148 = "PreTops_Tshirt_00";
  local_110 = "PreTops_Tshirt_Back_00";
  local_d8 = "PreSleeve_Short_00";
  local_140 = (undefined1 *)0x100000001;
  local_138 = 0;
  uStack_128 = 0xffffffffffffffff;
  local_120 = 0;
  local_118 = 0;
  local_108 = 0x200000001;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d0 = (undefined1 *)0x300000007;
  local_c8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = "PreSleeve_Short_00";
  local_98 = 0x400000007;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_f0 = 0xffffffffffffffff;
  uStack_b8 = 0xffffffffffffffff;
  uStack_80 = 0xffffffffffffffff;
  local_130 = puVar14;
  local_f8 = puVar14;
  local_c0 = puVar14;
  local_88 = puVar14;
  FUN_02feb1f0(param_1 + 0x584,param_1[3],&local_148,4);
  local_140 = (undefined1 *)0x100000001;
  local_148 = "PreTops_Shirt_00";
  local_138 = 0;
  local_120 = 0;
  uStack_128 = 0xffffffffffffffff;
  local_118 = 0;
  local_110 = "PreTops_Shirt_Back_00";
  local_108 = 0x200000001;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = "PreSleeve_Long_00";
  local_d0 = (undefined1 *)0x300000005;
  local_c8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = "PreSleeve_Long_00";
  local_98 = 0x400000005;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_f0 = 0xffffffffffffffff;
  uStack_b8 = 0xffffffffffffffff;
  uStack_80 = 0xffffffffffffffff;
  local_130 = puVar14;
  local_f8 = puVar14;
  local_c0 = puVar14;
  local_88 = puVar14;
  FUN_02feb1f0(param_1 + 0x592,param_1[3],&local_148,4);
  local_148 = "PreTops_Sweater_00";
  local_140 = (undefined1 *)0x100000001;
  local_138 = 0;
  uStack_128 = 0xffffffffffffffff;
  local_120 = 0;
  local_118 = 0;
  local_110 = "PreTops_Sweater_Back_00";
  local_108 = 0x200000001;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = "PreSleeve_Long_00";
  local_d0 = (undefined1 *)0x300000005;
  local_c8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = "PreSleeve_Long_00";
  local_98 = 0x400000005;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_f0 = 0xffffffffffffffff;
  uStack_b8 = 0xffffffffffffffff;
  uStack_80 = 0xffffffffffffffff;
  local_130 = puVar14;
  local_f8 = puVar14;
  local_c0 = puVar14;
  local_88 = puVar14;
  FUN_02feb1f0(param_1 + 0x5a0,param_1[3],&local_148,4);
  local_148 = "PreTops_Parka_00";
  local_140 = (undefined1 *)0x100000001;
  local_138 = 0;
  uStack_128 = 0xffffffffffffffff;
  local_120 = 0;
  local_118 = 0;
  local_110 = "PreTops_Parka_Back_00";
  local_108 = 0x200000001;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = "PreSleeve_Long_00";
  local_d0 = (undefined1 *)0x300000005;
  local_c8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = "PreSleeve_Long_00";
  local_98 = 0x400000005;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_f0 = 0xffffffffffffffff;
  uStack_b8 = 0xffffffffffffffff;
  uStack_80 = 0xffffffffffffffff;
  local_130 = puVar14;
  local_f8 = puVar14;
  local_c0 = puVar14;
  local_88 = puVar14;
  FUN_02feb1f0(param_1 + 0x5ae,param_1[3],&local_148,4);
  local_148 = "PreTops_Coat_00";
  local_140 = &DAT_100000003;
  local_138 = 0;
  uStack_128 = 0xffffffffffffffff;
  local_120 = 0;
  local_118 = 0;
  local_110 = "PreTops_Coat_Back_00";
  local_108 = 0x200000003;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = "PreSleeve_Long_00";
  local_d0 = (undefined1 *)0x300000005;
  local_c8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = "PreSleeve_Long_00";
  local_98 = 0x400000005;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_f0 = 0xffffffffffffffff;
  uStack_b8 = 0xffffffffffffffff;
  uStack_80 = 0xffffffffffffffff;
  local_130 = puVar14;
  local_f8 = puVar14;
  local_c0 = puVar14;
  local_88 = puVar14;
  FUN_02feb1f0(param_1 + 0x5bc,param_1[3],&local_148,4);
  local_148 = "PreOnePiece_NoSleeve_00";
  local_140 = &DAT_100000003;
  local_138 = 0;
  uStack_128 = 0xffffffffffffffff;
  local_120 = 0;
  local_118 = 0;
  local_110 = "PreOnePiece_NoSleeve_Back_00";
  local_108 = 0x200000003;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  uStack_f0 = 0xffffffffffffffff;
  local_130 = puVar14;
  local_f8 = puVar14;
  FUN_02feb1f0(param_1 + 0x5ca,param_1[3],&local_148,2);
  local_140 = &DAT_100000003;
  local_148 = "PreOnePiece_ShortSleeve_00";
  local_110 = "PreOnePiece_ShortSleeve_Back_00";
  local_138 = 0;
  local_120 = 0;
  uStack_128 = 0xffffffffffffffff;
  local_118 = 0;
  local_108 = 0x200000003;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = "PreSleeve_Short_00";
  local_d0 = (undefined1 *)0x300000007;
  local_c8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = "PreSleeve_Short_00";
  local_98 = 0x400000007;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_f0 = 0xffffffffffffffff;
  uStack_b8 = 0xffffffffffffffff;
  uStack_80 = 0xffffffffffffffff;
  local_130 = puVar14;
  local_f8 = puVar14;
  local_c0 = puVar14;
  local_88 = puVar14;
  FUN_02feb1f0(param_1 + 0x5d8,param_1[3],&local_148,4);
  local_148 = "PreOnePiece_LongSleeve_00";
  local_140 = &DAT_100000003;
  local_138 = 0;
  uStack_128 = 0xffffffffffffffff;
  local_120 = 0;
  local_118 = 0;
  local_110 = "PreOnePiece_LongSleeve_Back_00";
  local_108 = 0x200000003;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = "PreSleeve_Long_00";
  local_d0 = (undefined1 *)0x300000005;
  local_c8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = "PreSleeve_Long_00";
  local_98 = 0x400000005;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_f0 = 0xffffffffffffffff;
  uStack_b8 = 0xffffffffffffffff;
  uStack_80 = 0xffffffffffffffff;
  local_130 = puVar14;
  local_f8 = puVar14;
  local_c0 = puVar14;
  local_88 = puVar14;
  FUN_02feb1f0(param_1 + 0x5e6,param_1[3],&local_148,4);
  local_148 = "PreOnePiece_Round_00";
  local_140 = &DAT_100000003;
  local_138 = 0;
  uStack_128 = 0xffffffffffffffff;
  local_120 = 0;
  local_118 = 0;
  local_110 = "PreOnePiece_Round_Back_00";
  local_108 = 0x200000003;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  uStack_f0 = 0xffffffffffffffff;
  local_130 = puVar14;
  local_f8 = puVar14;
  FUN_02feb1f0(param_1 + 0x5f4,param_1[3],&local_148,2);
  local_148 = "PreOnePiece_Balloon_00";
  local_110 = "PreOnePiece_Balloon_Back_00";
  local_140 = &DAT_100000003;
  local_138 = 0;
  local_120 = 0;
  uStack_128 = 0xffffffffffffffff;
  local_118 = 0;
  local_108 = 0x200000003;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = "PreSleeve_Short_00";
  local_d0 = (undefined1 *)0x300000007;
  local_c8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = "PreSleeve_Short_00";
  local_98 = 0x400000007;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_f0 = 0xffffffffffffffff;
  uStack_b8 = 0xffffffffffffffff;
  uStack_80 = 0xffffffffffffffff;
  local_130 = puVar14;
  local_f8 = puVar14;
  local_c0 = puVar14;
  local_88 = puVar14;
  FUN_02feb1f0(param_1 + 0x602,param_1[3],&local_148,4);
  local_148 = "PreOnePiece_Robe_00";
  local_110 = "PreOnePiece_Robe_Back_00";
  local_140 = &DAT_100000003;
  local_138 = 0;
  uStack_128 = 0xffffffffffffffff;
  local_120 = 0;
  local_118 = 0;
  local_108 = 0x200000003;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = "PreSleeve_Kimono_00";
  local_d0 = (undefined1 *)0x300000017;
  local_c8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = "PreSleeve_Kimono_00";
  local_98 = 0x400000017;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_f0 = 0xffffffffffffffff;
  uStack_b8 = 0xffffffffffffffff;
  uStack_80 = 0xffffffffffffffff;
  local_130 = puVar14;
  local_f8 = puVar14;
  local_c0 = puVar14;
  local_88 = puVar14;
  FUN_02feb1f0(param_1 + 0x610,param_1[3],&local_148,4);
  local_110 = "PreMeshCap_Back_00";
  local_140 = (undefined1 *)0x100000009;
  local_108 = 0x20000000d;
  local_d8 = "PreMeshCap_Bill_00";
  local_148 = "PreMeshCap_00";
  local_138 = 0;
  local_120 = 0;
  uStack_128 = 0xffffffffffffffff;
  local_118 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d0 = (undefined1 *)0x50000000b;
  local_c8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  uStack_f0 = 0xffffffffffffffff;
  uStack_b8 = 0xffffffffffffffff;
  local_130 = puVar14;
  local_f8 = puVar14;
  local_c0 = puVar14;
  FUN_02feb1f0(param_1 + 0x61e,param_1[3],&local_148,3);
  param_1[0x62c] = &PTR_LAB_04aefa70;
  local_148 = "PreKankanbo_00";
  local_140 = (undefined1 *)0x100000011;
  local_138 = 0;
  local_120 = 0;
  uStack_128 = 0xffffffffffffffff;
  local_118 = 0;
  local_130 = puVar14;
  FUN_02feb1f0(param_1 + 0x62d,param_1[3],&local_148,1);
  local_140 = (undefined1 *)0x100000020;
  local_148 = "PreFacepanel_00";
  local_138 = 0;
  local_120 = 0;
  uStack_128 = 0xffffffffffffffff;
  local_118 = 0;
  local_130 = puVar14;
  FUN_02feb1f0(param_1 + 0x63b,param_1[3],&local_148,1);
  local_140 = (undefined1 *)0x100000018;
  local_148 = "PreUmbrella_00";
  local_138 = 0;
  local_120 = 0;
  uStack_128 = 0xffffffffffffffff;
  local_118 = 0;
  local_130 = puVar14;
  FUN_02feb1f0(param_1 + 0x649,param_1[3],&local_148,1);
  local_110 = "PrePennant_Back_00";
  local_d8 = "PrePennant_Handle_00";
  local_140 = (undefined1 *)0x10000001d;
  local_148 = "PrePennant_00";
  local_138 = 0;
  uStack_128 = 0xffffffffffffffff;
  local_120 = 0;
  local_118 = 0;
  local_108 = 0x20000001d;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d0 = (undefined1 *)0x50000001f;
  local_c8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  uStack_f0 = 0xffffffffffffffff;
  uStack_b8 = 0xffffffffffffffff;
  local_130 = puVar14;
  local_f8 = puVar14;
  local_c0 = puVar14;
  FUN_02feb1f0(param_1 + 0x657,param_1[3],&local_148,3);
  local_148 = "PreFan_00";
  local_140 = (undefined1 *)0x10000001a;
  local_138 = 0;
  uStack_128 = 0xffffffffffffffff;
  local_120 = 0;
  local_118 = 0;
  local_110 = "PreFan_Back_00";
  local_108 = 0x20000001a;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  uStack_f0 = 0xffffffffffffffff;
  local_130 = puVar14;
  local_f8 = puVar14;
  FUN_02feb1f0(param_1 + 0x665,param_1[3],&local_148,2);
  return;
}

