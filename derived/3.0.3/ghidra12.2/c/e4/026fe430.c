
undefined8 FUN_026fe430(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  void *pvVar20;
  long *plVar21;
  undefined8 uVar22;
  ulong uVar23;
  int iVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  long lVar28;
  long *plVar29;
  long *plVar30;
  undefined8 *puVar31;
  long lVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  long *plVar35;
  
  puVar7 = PTR_DAT_04bb2698;
  lVar25 = *(long *)PTR_DAT_04bb2698;
  if (lVar25 == 0) {
    plVar12 = malloc(0x40);
  }
  else {
    plVar12 = *(long **)(param_1 + 8);
    if (plVar12 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar12 = (long *)(lVar25 + 8);
      if (lVar13 != 0) {
        plVar12 = (long *)(lVar13 + 0xa8);
      }
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) {
        plVar12 = (long *)0x0;
        goto LAB_026fe4bc;
      }
    }
    plVar12 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12,0x40,8);
  }
LAB_026fe4bc:
  plVar21 = plVar12 + 1;
  *plVar21 = 0;
  *plVar12 = (long)&PTR_LAB_04a8a7e0;
  plVar12[2] = 0;
  plVar12[3] = 0;
  plVar12[4] = 0;
  plVar12[5] = 0;
  plVar12[6] = 0;
  plVar12[7] = 0;
  plVar14 = *(long **)(param_1 + 8);
  if (plVar14 == (long *)0x0) {
    return 0;
  }
  lVar25 = *(long *)puVar7;
  *plVar21 = (long)plVar14;
  if (lVar25 == 0) {
    puVar15 = malloc(0xb8a4e0);
  }
  else {
    puVar15 = (undefined8 *)(**(code **)(*plVar14 + 0x30))(plVar14,0xb8a4e0,0x10);
  }
  *(undefined8 *)((long)puVar15 + 6) = 0;
  *puVar15 = 0;
  *(undefined2 *)((long)puVar15 + 0xe) = 0xffff;
  puVar15[8] = 0;
  *(undefined8 *)((long)puVar15 + 0x46) = 0;
  *(undefined2 *)((long)puVar15 + 0x4e) = 0xffff;
  *(undefined4 *)(puVar15 + 0x20) = 0;
  FUN_028f2ec0(puVar15 + 0x22);
  puVar26 = puVar15 + 0xf005;
  memset(puVar26,0,0xb0c200);
  lVar25 = 500;
  do {
    FUN_028f4074(puVar26);
    lVar25 = lVar25 + -1;
    puVar26 = puVar26 + 0xb50;
  } while (lVar25 != 0);
  FUN_028f7b30(puVar15 + 0x170845);
  *(undefined2 *)(puVar15 + 0x17149a) = 0;
  *(undefined1 *)((long)puVar15 + 0xb8a4d6) = 0;
  *(undefined4 *)((long)puVar15 + 0xb8a4d2) = 0x101;
  *(undefined4 *)(puVar15 + 0x17149b) = 0;
  lVar25 = *(long *)puVar7;
  plVar12[2] = (long)puVar15;
  if (lVar25 == 0) {
    puVar15 = malloc(0xb8a4e0);
  }
  else {
    plVar14 = (long *)*plVar21;
    if (plVar14 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar14 = (long *)(lVar25 + 8);
      if (lVar13 != 0) {
        plVar14 = (long *)(lVar13 + 0xa8);
      }
      plVar14 = (long *)*plVar14;
      if (plVar14 == (long *)0x0) {
        puVar15 = (undefined8 *)0x0;
        goto LAB_026fe628;
      }
    }
    puVar15 = (undefined8 *)(**(code **)(*plVar14 + 0x30))(plVar14,0xb8a4e0,0x10);
  }
LAB_026fe628:
  *(undefined8 *)((long)puVar15 + 6) = 0;
  *puVar15 = 0;
  *(undefined2 *)((long)puVar15 + 0xe) = 0xffff;
  puVar15[8] = 0;
  *(undefined8 *)((long)puVar15 + 0x46) = 0;
  *(undefined2 *)((long)puVar15 + 0x4e) = 0xffff;
  *(undefined4 *)(puVar15 + 0x20) = 0;
  FUN_028f2ec0(puVar15 + 0x22);
  puVar26 = puVar15 + 0xf005;
  memset(puVar26,0,0xb0c200);
  lVar25 = 500;
  do {
    FUN_028f4074(puVar26);
    lVar25 = lVar25 + -1;
    puVar26 = puVar26 + 0xb50;
  } while (lVar25 != 0);
  FUN_028f7b30(puVar15 + 0x170845);
  *(undefined2 *)(puVar15 + 0x17149a) = 0;
  *(undefined4 *)((long)puVar15 + 0xb8a4d2) = 0x101;
  *(undefined1 *)((long)puVar15 + 0xb8a4d6) = 0;
  *(undefined4 *)(puVar15 + 0x17149b) = 0;
  lVar25 = *(long *)puVar7;
  plVar12[3] = (long)puVar15;
  if (lVar25 == 0) {
    puVar15 = malloc(0x5dac08);
  }
  else {
    plVar14 = (long *)*plVar21;
    if (plVar14 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar14 = (long *)(lVar25 + 8);
      if (lVar13 != 0) {
        plVar14 = (long *)(lVar13 + 0xa8);
      }
      plVar14 = (long *)*plVar14;
      if (plVar14 == (long *)0x0) {
        puVar15 = (undefined8 *)0x0;
        goto LAB_026fe71c;
      }
    }
    puVar15 = (undefined8 *)(**(code **)(*plVar14 + 0x30))(plVar14,0x5dac08,8);
  }
LAB_026fe71c:
  *(undefined1 *)(puVar15 + 6) = 0;
  *puVar15 = &PTR_LAB_04a8a870;
  puVar15[1] = 0;
  puVar15[5] = 0;
  puVar15[7] = &DAT_04a897e8;
  puVar15[0xf] = 0;
  puVar15[0x10] = 0x100;
  puVar15[0xe] = &DAT_04a8ed90;
  puVar15[0x11] = 0;
  puVar15[0x12] = 0;
  puVar15[0x12] = puVar15 + 7;
  puVar15[0x13] = 0;
  puVar15[0x15] = &PTR_LAB_04a8a8d0;
  puVar15[0xc] = 0;
  *(undefined1 *)(puVar15 + 0xd) = 0;
  *(undefined1 *)(puVar15 + 0x14) = 0;
  *(undefined1 *)(puVar15 + 0x1b) = 0;
  *(undefined1 *)(puVar15 + 0x22) = 0;
  *(undefined1 *)(puVar15 + 0x29) = 0;
  puVar15[2] = 0;
  puVar15[3] = 0;
  puVar15[3] = puVar15 + 0x15;
  puVar15[4] = 0;
  puVar15[0x1c] = &PTR_LAB_04a8a930;
  puVar15[0x18] = puVar15 + 0x1c;
  puVar15[0x1f] = puVar15 + 0x23;
  puVar15[8] = 0;
  puVar15[9] = 0;
  puVar15[10] = 0;
  puVar15[0xb] = 0;
  puVar15[0x16] = 0;
  puVar15[0x17] = 0x110;
  puVar15[0x19] = puVar15 + 0xe;
  puVar15[0x1a] = 0;
  puVar15[0x1d] = 0;
  puVar15[0x1e] = 0x110;
  puVar15[0x20] = 0;
  puVar15[0x21] = 0;
  puVar15[0x24] = 0;
  puVar15[0x25] = 0x110;
  puVar15[0x27] = 0;
  puVar15[0x28] = 0;
  memset(puVar15 + 0x2b,0,0x378);
  *(undefined1 *)(puVar15 + 0x37) = 0;
  puVar15[0x2a] = &DAT_04a8f390;
  puVar15[0x31] = &DAT_04a8f390;
  puVar15[0x32] = 0;
  puVar15[0x54] = &DAT_04a8f390;
  puVar15[0x5b] = &DAT_04a8f390;
  puVar15[0x62] = &DAT_04a8f390;
  puVar15[0x69] = &DAT_04a8f390;
  puVar15[0x70] = &DAT_04a8f390;
  puVar15[0x77] = &DAT_04a8f390;
  puVar15[0x7e] = &DAT_04a8f390;
  puVar15[0x85] = &DAT_04a8f390;
  puVar15[0x8c] = &DAT_04a8f390;
  puVar15[0x93] = &DAT_04a8f390;
  *(undefined1 *)(puVar15 + 0x3e) = 0;
  *(undefined1 *)(puVar15 + 0x45) = 0;
  *(undefined1 *)(puVar15 + 0x4c) = 0;
  *(undefined1 *)(puVar15 + 0x53) = 0;
  puVar15[0x52] = 0;
  puVar15[0x51] = 0;
  puVar15[0x50] = 0;
  puVar15[0x4f] = 0;
  *(undefined1 *)(puVar15 + 0x5a) = 0;
  puVar15[0x59] = 0;
  puVar15[0x58] = 0;
  puVar15[0x57] = 0;
  puVar15[0x56] = 0;
  puVar15[0x55] = 0;
  puVar15[0x5c] = 0;
  puVar15[0x5d] = 0;
  puVar15[0x5e] = 0;
  puVar15[0x5f] = 0;
  puVar15[0x60] = 0;
  *(undefined1 *)(puVar15 + 0x61) = 0;
  puVar15[99] = 0;
  puVar15[100] = 0;
  puVar15[0x65] = 0;
  puVar15[0x66] = 0;
  puVar15[0x67] = 0;
  *(undefined1 *)(puVar15 + 0x68) = 0;
  puVar15[0x6a] = 0;
  puVar15[0x6b] = 0;
  puVar15[0x6c] = 0;
  puVar15[0x6d] = 0;
  puVar15[0x6e] = 0;
  *(undefined1 *)(puVar15 + 0x6f) = 0;
  *(undefined1 *)(puVar15 + 0x76) = 0;
  puVar15[0x75] = 0;
  puVar15[0x74] = 0;
  puVar15[0x73] = 0;
  puVar15[0x72] = 0;
  puVar15[0x71] = 0;
  *(undefined1 *)(puVar15 + 0x7d) = 0;
  puVar15[0x7c] = 0;
  puVar15[0x7b] = 0;
  puVar15[0x7a] = 0;
  puVar15[0x79] = 0;
  puVar15[0x78] = 0;
  *(undefined1 *)(puVar15 + 0x84) = 0;
  puVar15[0x83] = 0;
  puVar15[0x82] = 0;
  puVar15[0x81] = 0;
  puVar15[0x80] = 0;
  puVar15[0x7f] = 0;
  *(undefined1 *)(puVar15 + 0x8b) = 0;
  puVar15[0x8a] = 0;
  puVar15[0x89] = 0;
  puVar15[0x88] = 0;
  puVar15[0x87] = 0;
  puVar15[0x86] = 0;
  *(undefined1 *)(puVar15 + 0x92) = 0;
  puVar15[0x91] = 0;
  puVar15[0x90] = 0;
  puVar15[0x8f] = 0;
  puVar15[0x8e] = 0;
  puVar15[0x8d] = 0;
  *(undefined1 *)(puVar15 + 0x99) = 0;
  puVar15[0x98] = 0;
  puVar15[0x97] = 0;
  puVar15[0x96] = 0;
  puVar15[0x95] = 0;
  puVar15[0x94] = 0;
  puVar15[0x26] = puVar15 + 0x2a;
  puVar15[0x2c] = 0x110;
  puVar15[0x38] = &DAT_04a8f390;
  puVar15[0x39] = 0;
  puVar15[0x3f] = &DAT_04a8f390;
  puVar15[0x40] = 0;
  puVar15[0x46] = &DAT_04a8f390;
  puVar15[0x47] = 0;
  puVar15[0x4d] = &DAT_04a8f390;
  puVar15[0x4e] = 0;
  puVar15[0x23] = &PTR_LAB_04a8a960;
  puVar15[0x33] = 0;
  puVar15[0x34] = 0;
  puVar15[0x35] = 0;
  puVar15[0x36] = 0;
  puVar15[0x3a] = 0;
  puVar15[0x3b] = 0;
  puVar15[0x3c] = 0;
  puVar15[0x3d] = 0;
  puVar15[0x41] = 0;
  puVar15[0x42] = 0;
  puVar15[0x43] = 0;
  puVar15[0x44] = 0;
  puVar15[0x4a] = 0;
  puVar15[0x4b] = 0;
  puVar15[0x48] = 0;
  puVar15[0x49] = 0;
  FUN_026400e0(puVar15 + 0x2a,0x110);
  lVar25 = puVar15[0x26];
  puVar15[0x26] = puVar15 + 0x31;
  if (lVar25 != 0) {
    puVar15[0x35] = lVar25;
  }
  puVar15[0x33] = puVar15[0x33] + 0x112;
  FUN_026400e0(puVar15 + 0x31,0x112);
  lVar25 = puVar15[0x26];
  puVar15[0x26] = puVar15 + 0x38;
  if (lVar25 != 0) {
    puVar15[0x3c] = lVar25;
  }
  puVar15[0x3a] = puVar15[0x3a] + 0x114;
  FUN_026400e0(puVar15 + 0x38,0x114);
  lVar25 = puVar15[0x26];
  puVar15[0x26] = puVar15 + 0x3f;
  if (lVar25 != 0) {
    puVar15[0x43] = lVar25;
  }
  puVar15[0x41] = puVar15[0x41] + 0x116;
  FUN_026400e0(puVar15 + 0x3f,0x116);
  lVar25 = puVar15[0x26];
  puVar15[0x26] = puVar15 + 0x46;
  if (lVar25 != 0) {
    puVar15[0x4a] = lVar25;
  }
  puVar15[0x48] = puVar15[0x48] + 0x118;
  FUN_026400e0(puVar15 + 0x46,0x118);
  lVar25 = puVar15[0x26];
  puVar15[0x26] = puVar15 + 0x4d;
  if (lVar25 != 0) {
    puVar15[0x51] = lVar25;
  }
  puVar15[0x4f] = puVar15[0x4f] + 0x11a;
  FUN_026400e0(puVar15 + 0x4d,0x11a);
  lVar25 = puVar15[0x26];
  puVar15[0x26] = puVar15 + 0x54;
  if (lVar25 != 0) {
    puVar15[0x58] = lVar25;
  }
  puVar15[0x56] = puVar15[0x56] + 0x11c;
  FUN_026400e0(puVar15 + 0x54,0x11c);
  lVar25 = puVar15[0x26];
  puVar15[0x26] = puVar15 + 0x5b;
  if (lVar25 != 0) {
    puVar15[0x5f] = lVar25;
  }
  puVar15[0x5d] = puVar15[0x5d] + 0x11e;
  FUN_026400e0(puVar15 + 0x5b,0x11e);
  lVar25 = puVar15[0x26];
  puVar15[0x26] = puVar15 + 0x62;
  if (lVar25 != 0) {
    puVar15[0x66] = lVar25;
  }
  puVar15[100] = puVar15[100] + 0x120;
  FUN_026400e0(puVar15 + 0x62,0x120);
  lVar25 = puVar15[0x26];
  puVar15[0x26] = puVar15 + 0x69;
  if (lVar25 != 0) {
    puVar15[0x6d] = lVar25;
  }
  puVar15[0x6b] = puVar15[0x6b] + 0x122;
  FUN_026400e0(puVar15 + 0x69,0x122);
  lVar25 = puVar15[0x26];
  puVar15[0x26] = puVar15 + 0x70;
  if (lVar25 != 0) {
    puVar15[0x74] = lVar25;
  }
  puVar15[0x72] = puVar15[0x72] + 0x124;
  FUN_026400e0(puVar15 + 0x70,0x124);
  lVar25 = puVar15[0x26];
  puVar15[0x26] = puVar15 + 0x77;
  if (lVar25 != 0) {
    puVar15[0x7b] = lVar25;
  }
  puVar15[0x79] = puVar15[0x79] + 0x126;
  FUN_026400e0(puVar15 + 0x77,0x126);
  lVar25 = puVar15[0x26];
  puVar15[0x26] = puVar15 + 0x7e;
  if (lVar25 != 0) {
    puVar15[0x82] = lVar25;
  }
  puVar15[0x80] = puVar15[0x80] + 0x128;
  FUN_026400e0(puVar15 + 0x7e,0x128);
  lVar25 = puVar15[0x26];
  puVar15[0x26] = puVar15 + 0x85;
  if (lVar25 != 0) {
    puVar15[0x89] = lVar25;
  }
  puVar15[0x87] = puVar15[0x87] + 0x12a;
  FUN_026400e0(puVar15 + 0x85,0x12a);
  lVar25 = puVar15[0x26];
  puVar15[0x26] = puVar15 + 0x8c;
  if (lVar25 != 0) {
    puVar15[0x90] = lVar25;
  }
  puVar15[0x8e] = puVar15[0x8e] + 300;
  FUN_026400e0(puVar15 + 0x8c,300);
  lVar25 = puVar15[0x26];
  puVar15[0x26] = puVar15 + 0x93;
  if (lVar25 != 0) {
    puVar15[0x97] = lVar25;
  }
  puVar26 = puVar15 + 0xbb29b;
  puVar19 = puVar15 + 0xbaa7c;
  puVar2 = puVar15 + 0xba796;
  puVar31 = puVar15 + 0x9974;
  plVar14 = puVar15 + 0x9808;
  plVar30 = puVar15 + 0x969c;
  plVar3 = puVar15 + 0x9530;
  puVar18 = puVar15 + 0x93b6;
  puVar27 = puVar15 + 0x8928;
  puVar34 = puVar15 + 0x7c01;
  puVar17 = puVar15 + 0x7984;
  puVar4 = puVar15 + 0x7707;
  puVar5 = puVar15 + 0x748a;
  puVar6 = puVar15 + 0x720d;
  puVar15[0x95] = puVar15[0x95] + 0x12e;
  FUN_026400e0(puVar15 + 0x93,0x12e);
  lVar13 = puVar15[0x18];
  puVar15[0x9b] = 0;
  puVar15[0x9e] = 0;
  puVar15[0x1c] = &PTR_LAB_04a8a900;
  lVar25 = puVar15[0x17] + 0x20;
  puVar15[0x9f] = 0;
  *(undefined1 *)(puVar15 + 0xa0) = 0;
  puVar15[0x18] = puVar15 + 0x9a;
  puVar15[0x9c] = lVar25;
  if (lVar13 != 0) {
    puVar15[0x9e] = lVar13;
  }
  puVar15[0xa2] = 0;
  puVar15[0x9a] = &PTR_LAB_04a8a9c0;
  puVar15[0xa3] = lVar25;
  puVar15[0xa4] = 0;
  puVar15[0xa5] = 0;
  puVar15[0xa6] = 0;
  *(undefined1 *)(puVar15 + 0xa7) = 0;
  puVar15[0x9d] = puVar15 + 0xa1;
  puVar15[0xa1] = &DAT_04a882f0;
  memset(puVar15 + 0xa8,0,0x36080);
  lVar32 = 0x26;
  lVar13 = 0x10d8;
  puVar7 = PTR_DAT_04bb4c48 + 0x10;
  lVar28 = 0;
  do {
    *(undefined ***)((long)puVar15 + lVar28 + 0x540) = &PTR_LAB_04a8aa50;
    lVar8 = (long)puVar15 + lVar28 + 0x578;
    *(undefined1 *)((long)puVar15 + lVar28 + 0x570) = 0;
    *(undefined8 *)((long)puVar15 + lVar28 + 0x588) = 8;
    *(undefined8 *)((long)puVar15 + lVar28 + 0x568) = 0;
    *(undefined8 *)((long)puVar15 + lVar28 + 0x560) = 0;
    *(undefined8 *)((long)puVar15 + lVar28 + 0x550) = 0;
    *(undefined8 *)((long)puVar15 + lVar28 + 0x548) = 0;
    *(undefined8 *)((long)puVar15 + lVar28 + 0x580) = 0;
    *(undefined8 *)((long)puVar15 + lVar28 + 0x590) = 0;
    *(undefined8 *)((long)puVar15 + lVar28 + 0x598) = 0;
    *(undefined8 *)((long)puVar15 + lVar28 + 0x5a0) = 0;
    *(undefined1 *)((long)puVar15 + lVar28 + 0x5a8) = 0;
    *(long *)((long)puVar15 + lVar28 + 0x558) = lVar8;
    *(undefined ***)((long)puVar15 + lVar28 + 0x578) = &PTR_LAB_04a8aab0;
    FUN_007e9bd0((long)puVar15 + lVar28 + 0x5b0,lVar8,0x28);
    *(undefined **)((long)puVar15 + lVar28 + 0x5b0) = puVar7;
    FUN_007e9bd0((long)puVar15 + lVar13,lVar8,*(long *)((long)puVar15 + lVar28 + 0x588) + 0x8c8);
    *(undefined **)((long)puVar15 + lVar28 + 0x10d8) = puVar7;
    *(undefined ***)((long)puVar15 + lVar28 + 0x578) = &PTR_LAB_04a8aa80;
    lVar32 = lVar32 + -1;
    lVar13 = lVar13 + 0x16c0;
    *(undefined ***)((long)puVar15 + lVar28 + 0x540) = &PTR_LAB_04a8aa20;
    lVar28 = lVar28 + 0x16c0;
  } while (lVar32 != 0);
  iVar24 = 0;
  lVar13 = 0x26;
  puVar15[0xa1] = &PTR_LAB_04a8a9f0;
  do {
    lVar32 = puVar15[0xa4];
    puVar16 = puVar15 + 0xa8 + (long)iVar24 * 0x2d8;
    puVar15[0xa4] = puVar16;
    if (lVar32 != 0) {
      puVar16[4] = lVar32;
    }
    puVar16[2] = lVar25 + puVar16[2];
    FUN_026400e0(puVar16,lVar25);
    iVar24 = iVar24 + 1;
    lVar13 = lVar13 + -1;
    lVar25 = lVar25 + 0x1178;
  } while (lVar13 != 0);
  puVar15[0x9a] = &PTR_LAB_04a8a990;
  lVar25 = puVar15[0x17];
  puVar15[0x6cb9] = 0;
  puVar15[0x6cba] = lVar25 + 0x29808;
  puVar15[0x6cbb] = 0;
  puVar15[0x6cbc] = 0;
  puVar15[0x6cbd] = 0;
  *(undefined1 *)(puVar15 + 0x6cbe) = 0;
  if (puVar15[0x18] != 0) {
    puVar15[0x6cbc] = puVar15[0x18];
  }
  puVar15[0x6cb8] = &DAT_04a8aae0;
  puVar15[0x6cc0] = 0;
  puVar15[0x6cc1] = lVar25 + 0x29c10;
  puVar16 = puVar15 + 0x6cbf;
  *puVar16 = &PTR_LAB_04a8ab40;
  puVar15[0x6cdf] = 0;
  puVar15[0x6ce0] = 0;
  puVar15[0x6cc6] = &PTR_LAB_04a8aba0;
  puVar33 = puVar15 + 0x6ccd;
  *puVar33 = &PTR_LAB_04a8ac00;
  lVar13 = lVar25 + 0x29c14;
  puVar15[0x6cc7] = 0;
  puVar15[0x6cc8] = lVar13;
  puVar15[0x6cc2] = puVar15 + 0x6cc6;
  puVar15[0x6cc3] = puVar15 + 0x6cb8;
  puVar15[0x6cce] = 0;
  puVar15[0x6ccf] = lVar13;
  *(undefined1 *)(puVar15 + 0x6ce1) = 0;
  puVar15[0x6cc4] = 0;
  *(undefined1 *)(puVar15 + 0x6cc5) = 0;
  puVar15[0x18] = puVar16;
  *(undefined1 *)(puVar15 + 0x6ccc) = 0;
  *(undefined1 *)(puVar15 + 0x6cd3) = 0;
  puVar15[0x6cc9] = puVar33;
  puVar15[0x6cd9] = 0;
  *(undefined1 *)(puVar15 + 0x6cda) = 0;
  puVar15[0x6cde] = 0;
  *(undefined1 *)(puVar15 + 0x6ce8) = 0;
  puVar15[0x6ce5] = 0;
  puVar15[0x6cd5] = 0;
  puVar15[0x6cd6] = lVar13;
  puVar15[0x6cca] = 0;
  puVar15[0x6ccb] = 0;
  puVar15[0x6cd4] = &DAT_04a90588;
  puVar15[0x6cdf] = puVar15 + 0x6cd4;
  puVar15[0x6ce4] = lVar25 + 0x29c18;
  puVar15[0x6cdc] = 0;
  puVar15[0x6cdd] = lVar25 + 0x29c16;
  puVar15[0x6cdb] = &DAT_04a8f390;
  puVar15[0x6cd0] = puVar15 + 0x6ce2;
  puVar15[0x6cd1] = 0;
  puVar15[0x6cd2] = 0;
  puVar15[0x6cd7] = 0;
  puVar15[0x6cd8] = 0;
  puVar15[0x6ce6] = 0;
  puVar15[0x6ce7] = 0;
  puVar7 = PTR_DAT_04bc30c8 + 0x10;
  puVar15[0x6ce6] = puVar15 + 0x6cdb;
  puVar15[0x6ce2] = puVar7;
  puVar15[0x6ce3] = 0;
  FUN_02726a4c(puVar15 + 0x6ce9,puVar33,lVar25 + 0x29c1c);
  *(undefined1 *)(puVar15 + 0x6f8f) = 0;
  puVar15[0x6ce9] = &PTR_LAB_04a8ac30;
  *puVar33 = &PTR_LAB_04a8abd0;
  puVar15[0x6f8c] = 0;
  puVar15[0x6f8d] = 0;
  puVar15[0x6f8e] = 0;
  puVar15[0x6f8a] = 0;
  puVar15[0x6f8b] = puVar15[0x6cc8] + 0x48bc;
  lVar25 = puVar15[0x6cc9];
  puVar15[0x6cc9] = puVar15 + 0x6f89;
  if (lVar25 != 0) {
    puVar15[0x6f8d] = lVar25;
  }
  *(undefined1 *)(puVar15 + 0x6f96) = 0;
  puVar15[0x6f89] = &DAT_04a8adf8;
  puVar15[0x6cc6] = &PTR_LAB_04a8ab70;
  lVar25 = puVar15[0x6cc2];
  puVar15[0x6f93] = 0;
  puVar15[0x6f94] = 0;
  puVar15[0x6f95] = 0;
  puVar15[0x6cc2] = puVar15 + 0x6f90;
  puVar15[0x6f91] = 0;
  puVar15[0x6f92] = puVar15[0x6cc1] + 0x4910;
  if (lVar25 != 0) {
    puVar15[0x6f94] = lVar25;
  }
  puVar15[0x6f90] = &PTR_LAB_04a8ae58;
  FUN_02727848(puVar15 + 0x6f97);
  puVar15[0x6f90] = &PTR_LAB_04a8ae28;
  *puVar16 = &PTR_LAB_04a8ab10;
  puVar15[0x6f97] = &PTR_LAB_04a8ae88;
  lVar25 = puVar15[0x18];
  puVar15[0x7212] = 0;
  puVar15[0x7210] = 0;
  puVar15[0x7211] = 0;
  *(undefined1 *)(puVar15 + 0x7213) = 0;
  puVar15[0x18] = puVar6;
  puVar15[0x720e] = 0;
  puVar15[0x720f] = puVar15[0x17] + 0x325b8;
  if (lVar25 != 0) {
    puVar15[0x7211] = lVar25;
  }
  *puVar6 = &PTR_LAB_04a8af78;
  FUN_02727848(puVar15 + 0x7214,puVar6);
  puVar15[0x7214] = &PTR_LAB_04a8ae88;
  *puVar6 = &PTR_LAB_04a8af48;
  puVar15[0x748d] = 0;
  puVar15[0x748e] = 0;
  puVar15[0x748f] = 0;
  *(undefined1 *)(puVar15 + 0x7490) = 0;
  lVar25 = puVar15[0x18];
  puVar15[0x18] = puVar5;
  puVar15[0x748b] = 0;
  puVar15[0x748c] = puVar15[0x17] + 0x36644;
  if (lVar25 != 0) {
    puVar15[0x748e] = lVar25;
  }
  *puVar5 = &PTR_LAB_04a8afd8;
  FUN_02727848(puVar15 + 0x7491,puVar5);
  puVar15[0x7491] = &PTR_LAB_04a8ae88;
  *puVar5 = &PTR_LAB_04a8afa8;
  puVar15[0x770a] = 0;
  puVar15[0x770b] = 0;
  puVar15[0x770c] = 0;
  *(undefined1 *)(puVar15 + 0x770d) = 0;
  lVar25 = puVar15[0x18];
  puVar15[0x18] = puVar4;
  puVar15[0x7708] = 0;
  puVar15[0x7709] = puVar15[0x17] + 0x3a6d0;
  if (lVar25 != 0) {
    puVar15[0x770b] = lVar25;
  }
  *puVar4 = &PTR_LAB_04a8b038;
  FUN_02727848(puVar15 + 0x770e,puVar4);
  puVar15[0x770e] = &PTR_LAB_04a8ae88;
  *puVar4 = &PTR_LAB_04a8b008;
  puVar15[0x7987] = 0;
  puVar15[0x7988] = 0;
  puVar15[0x7989] = 0;
  *(undefined1 *)(puVar15 + 0x798a) = 0;
  lVar25 = puVar15[0x18];
  puVar15[0x18] = puVar17;
  puVar15[0x7985] = 0;
  puVar15[0x7986] = puVar15[0x17] + 0x3e75c;
  if (lVar25 != 0) {
    puVar15[0x7988] = lVar25;
  }
  *puVar17 = &PTR_LAB_04a8b098;
  FUN_02727848(puVar15 + 0x798b,puVar17);
  puVar15[0x798b] = &PTR_LAB_04a8ae88;
  *puVar17 = &PTR_LAB_04a8b068;
  puVar15[0x7c04] = 0;
  puVar15[0x7c05] = 0;
  puVar15[0x7c06] = 0;
  *(undefined1 *)(puVar15 + 0x7c07) = 0;
  lVar25 = puVar15[0x18];
  puVar15[0x18] = puVar34;
  puVar15[0x7c02] = 0;
  puVar15[0x7c03] = puVar15[0x17] + 0x427e8;
  if (lVar25 != 0) {
    puVar15[0x7c05] = lVar25;
  }
  *puVar34 = &PTR_LAB_04a8b0f8;
  FUN_02727848(puVar15 + 0x7c08,puVar34);
  *puVar34 = &PTR_LAB_04a8b0c8;
  lVar25 = puVar15[0x17];
  puVar15[0x7c08] = &PTR_LAB_04a8ae88;
  puVar15[0x7e82] = 0;
  puVar15[0x7e7f] = 0;
  puVar15[0x7e80] = lVar25 + 0x46874;
  puVar15[0x7e83] = 0;
  *(undefined1 *)(puVar15 + 0x7e84) = 0;
  if (puVar15[0x18] != 0) {
    puVar15[0x7e82] = puVar15[0x18];
  }
  puVar15[0x7e86] = 0;
  puVar15[0x7e87] = lVar25 + 0x46874;
  puVar15[0x7e88] = 0;
  puVar15[0x7e89] = 0;
  lVar13 = lVar25 + 0x76874;
  puVar15[0x7e8a] = 0;
  *(undefined1 *)(puVar15 + 0x7e8b) = 0;
  puVar15[0x7e8d] = 0;
  puVar15[0x7e8e] = lVar25 + 0x5e874;
  puVar15[0x7e85] = &DAT_04a8b158;
  puVar15[0x7e81] = puVar15 + 0x7e85;
  puVar15[0x7e7e] = &PTR_LAB_04a8b128;
  puVar15[0x7e90] = puVar15 + 0x7e7e;
  puVar15[0x7e9f] = 0;
  *(undefined1 *)(puVar15 + 0x7ea0) = 0;
  puVar15[0x7e91] = 0;
  *(undefined1 *)(puVar15 + 0x7e92) = 0;
  puVar15[0x7e98] = 0;
  *(undefined1 *)(puVar15 + 0x7e99) = 0;
  *(undefined1 *)(puVar15 + 0x7ea7) = 0;
  plVar35 = puVar15 + 0x7ea4;
  *plVar35 = 0;
  puVar15[0x7e94] = 0;
  puVar15[0x7e95] = lVar25 + 0x5e874;
  puVar15[0x7e93] = &DAT_04a8b158;
  puVar15[0x7e8f] = puVar15 + 0x7e93;
  puVar15[0x7e8c] = &PTR_LAB_04a8b128;
  puVar34 = puVar15 + 0x7e9a;
  *puVar34 = &PTR_LAB_04a8b1c8;
  puVar15[0x18] = puVar34;
  puVar15[0x7e96] = 0;
  puVar15[0x7e97] = 0;
  puVar15[0x7e9b] = 0;
  puVar15[0x7e9c] = lVar13;
  puVar15[0x7ea2] = 0;
  puVar15[0x7ea3] = lVar13;
  puVar15[0x7ea5] = 0;
  puVar15[0x7ea6] = 0;
  puVar15[0x7e9d] = puVar15 + 0x7ea1;
  puVar15[0x7e9e] = puVar15 + 0x7e8c;
  memset(puVar15 + 0x7ea8,0,0x5400);
  puVar9 = PTR_DAT_04bb4c38;
  puVar7 = PTR_DAT_04bb4c38 + 0x10;
  lVar25 = -0x5400;
  do {
    lVar32 = lVar25 + 0xa8;
    *(undefined8 *)((long)puVar15 + lVar25 + 0x44968) = 0;
    *(undefined8 *)((long)puVar15 + lVar25 + 0x44960) = 0;
    *(undefined8 *)((long)puVar15 + lVar25 + 0x44958) = 0;
    *(undefined1 *)((long)puVar15 + lVar25 + 0x44970) = 0;
    *(undefined8 *)((long)puVar15 + lVar25 + 0x44950) = 0;
    *(undefined1 *)((long)puVar15 + lVar25 + 0x449a8) = 0;
    *(undefined8 *)((long)puVar15 + lVar25 + 0x44948) = 0;
    *(undefined **)((long)puVar15 + lVar25 + 0x44940) = puVar7;
    *(undefined8 *)((long)puVar15 + lVar25 + 0x44980) = 0;
    *(undefined8 *)((long)puVar15 + lVar25 + 0x44988) = 0;
    *(undefined8 *)((long)puVar15 + lVar25 + 0x44990) = 0;
    *(undefined8 *)((long)puVar15 + lVar25 + 0x44998) = 0;
    *(undefined8 *)((long)puVar15 + lVar25 + 0x449a0) = 0;
    *(undefined **)((long)puVar15 + lVar25 + 0x44978) = puVar7;
    *(undefined8 *)((long)puVar15 + lVar25 + 0x449b8) = 0;
    *(undefined8 *)((long)puVar15 + lVar25 + 0x449c0) = 0;
    *(undefined8 *)((long)puVar15 + lVar25 + 0x449c8) = 0;
    *(undefined8 *)((long)puVar15 + lVar25 + 0x449d0) = 0;
    *(undefined8 *)((long)puVar15 + lVar25 + 0x449d8) = 0;
    *(undefined1 *)((long)puVar15 + lVar25 + 0x449e0) = 0;
    *(undefined **)((long)puVar15 + lVar25 + 0x449b0) = puVar7;
    lVar25 = lVar32;
  } while (lVar32 != 0);
  iVar24 = 0;
  puVar15[0x7ea1] = &PTR_LAB_04a8b1f8;
  do {
    lVar25 = *plVar35;
    puVar17 = puVar15 + 0x7ea8 + (long)iVar24 * 7;
    *plVar35 = (long)puVar17;
    if (lVar25 != 0) {
      puVar17[4] = lVar25;
    }
    puVar17[2] = lVar13 + puVar17[2];
    FUN_026400e0(puVar17,lVar13);
    iVar24 = iVar24 + 1;
    lVar13 = lVar13 + 4;
  } while (iVar24 != 0x180);
  *puVar34 = &PTR_LAB_04a8b198;
  lVar13 = puVar15[0x18];
  puVar15[0x892d] = 0;
  *(undefined1 *)(puVar15 + 0x892e) = 0;
  puVar15[0x18] = puVar27;
  lVar25 = puVar15[0x17] + 0x76e74;
  puVar15[0x892c] = 0;
  puVar15[0x8929] = 0;
  puVar15[0x892a] = lVar25;
  if (lVar13 != 0) {
    puVar15[0x892c] = lVar13;
  }
  *puVar27 = &PTR_LAB_04a8b1c8;
  puVar15[0x8930] = 0;
  puVar15[0x8931] = lVar25;
  puVar15[0x8933] = 0;
  puVar15[0x8934] = 0;
  *(undefined1 *)(puVar15 + 0x8935) = 0;
  plVar35 = puVar15 + 0x8932;
  *plVar35 = 0;
  puVar15[0x892b] = puVar15 + 0x892f;
  memset(puVar15 + 0x8936,0,0x5400);
  puVar9 = puVar9 + 0x10;
  lVar13 = -0x5400;
  do {
    lVar32 = lVar13 + 0xa8;
    *(undefined8 *)((long)puVar15 + lVar13 + 0x49dd8) = 0;
    *(undefined8 *)((long)puVar15 + lVar13 + 0x49dd0) = 0;
    *(undefined8 *)((long)puVar15 + lVar13 + 0x49dc8) = 0;
    *(undefined1 *)((long)puVar15 + lVar13 + 0x49de0) = 0;
    *(undefined8 *)((long)puVar15 + lVar13 + 0x49dc0) = 0;
    *(undefined1 *)((long)puVar15 + lVar13 + 0x49e18) = 0;
    *(undefined8 *)((long)puVar15 + lVar13 + 0x49db8) = 0;
    *(undefined **)((long)puVar15 + lVar13 + 0x49db0) = puVar9;
    *(undefined8 *)((long)puVar15 + lVar13 + 0x49df0) = 0;
    *(undefined8 *)((long)puVar15 + lVar13 + 0x49df8) = 0;
    *(undefined8 *)((long)puVar15 + lVar13 + 0x49e00) = 0;
    *(undefined8 *)((long)puVar15 + lVar13 + 0x49e08) = 0;
    *(undefined8 *)((long)puVar15 + lVar13 + 0x49e10) = 0;
    *(undefined **)((long)puVar15 + lVar13 + 0x49de8) = puVar9;
    *(undefined8 *)((long)puVar15 + lVar13 + 0x49e28) = 0;
    *(undefined8 *)((long)puVar15 + lVar13 + 0x49e30) = 0;
    *(undefined8 *)((long)puVar15 + lVar13 + 0x49e38) = 0;
    *(undefined8 *)((long)puVar15 + lVar13 + 0x49e40) = 0;
    *(undefined8 *)((long)puVar15 + lVar13 + 0x49e48) = 0;
    *(undefined1 *)((long)puVar15 + lVar13 + 0x49e50) = 0;
    *(undefined **)((long)puVar15 + lVar13 + 0x49e20) = puVar9;
    lVar13 = lVar32;
  } while (lVar32 != 0);
  puVar15[0x892f] = &PTR_LAB_04a8b1f8;
  iVar24 = 0;
  do {
    lVar13 = *plVar35;
    puVar34 = puVar15 + 0x8936 + (long)iVar24 * 7;
    *plVar35 = (long)puVar34;
    if (lVar13 != 0) {
      puVar34[4] = lVar13;
    }
    puVar34[2] = lVar25 + puVar34[2];
    FUN_026400e0(puVar34,lVar25);
    iVar24 = iVar24 + 1;
    lVar25 = lVar25 + 4;
  } while (iVar24 != 0x180);
  *puVar27 = &PTR_LAB_04a8b198;
  lVar13 = puVar15[0x17];
  lVar32 = puVar15[0x18];
  puVar15[0x93bb] = 0;
  *(undefined1 *)(puVar15 + 0x93bc) = 0;
  puVar15[0x18] = puVar18;
  lVar25 = lVar13 + 0x77478;
  puVar15[0x93ba] = 0;
  puVar15[0x93b7] = 0;
  puVar15[0x93b8] = lVar25;
  if (lVar32 != 0) {
    puVar15[0x93ba] = lVar32;
  }
  plVar29 = puVar15 + 0x93c0;
  *plVar29 = 0;
  *puVar18 = &PTR_LAB_04a8b258;
  puVar15[0x93be] = 0;
  puVar15[0x93bf] = lVar25;
  puVar27 = puVar15 + 0x93c4;
  puVar15[0x93c1] = 0;
  puVar15[0x93c2] = 0;
  puVar7 = PTR_DAT_04bc35d8 + 0x10;
  *(undefined1 *)(puVar15 + 0x93c3) = 0;
  plVar35 = puVar15 + 0x93bd;
  *plVar35 = (long)puVar7;
  puVar15[0x93b9] = plVar35;
  memset(puVar27,0,0x2d80);
  FUN_007e9590(puVar27,0,0);
  puVar7 = PTR_DAT_04bb4c30 + 0x10;
  puVar15[0x93c4] = puVar7;
  FUN_007e9590(plVar3,0,0);
  *plVar3 = (long)puVar7;
  FUN_007e9590(plVar30,0,0);
  *plVar30 = (long)puVar7;
  FUN_007e9590(plVar14,0,0);
  *plVar35 = (long)&PTR_LAB_04a8b288;
  lVar32 = *plVar29;
  *plVar14 = (long)puVar7;
  *plVar29 = (long)puVar27;
  if (lVar32 != 0) {
    puVar15[0x93c8] = lVar32;
  }
  puVar15[0x93c6] = puVar15[0x93c6] + lVar25;
  FUN_026400e0(puVar27,lVar25);
  lVar25 = puVar15[0x93c0];
  puVar15[0x93c0] = plVar3;
  if (lVar25 != 0) {
    puVar15[0x9534] = lVar25;
  }
  puVar15[0x9532] = puVar15[0x9532] + lVar13 + 0x77720;
  FUN_026400e0();
  lVar25 = *plVar29;
  *plVar29 = (long)plVar30;
  if (lVar25 != 0) {
    puVar15[0x96a0] = lVar25;
  }
  puVar15[0x969e] = puVar15[0x969e] + lVar13 + 0x779c8;
  FUN_026400e0(plVar30);
  lVar25 = *plVar29;
  *plVar29 = (long)plVar14;
  if (lVar25 != 0) {
    puVar15[0x980c] = lVar25;
  }
  puVar15[0x980a] = puVar15[0x980a] + lVar13 + 0x77c70;
  FUN_026400e0(plVar14);
  puVar15[0x9979] = 0;
  *puVar18 = &PTR_LAB_04a8b228;
  puVar15[0x15] = &PTR_LAB_04a8a8a0;
  lVar13 = puVar15[3];
  *(undefined1 *)(puVar15 + 0x997a) = 0;
  puVar15[0x9978] = 0;
  puVar15[3] = puVar31;
  lVar25 = puVar15[2] + 0x78028;
  puVar15[0x9975] = 0;
  puVar15[0x9976] = lVar25;
  if (lVar13 != 0) {
    puVar15[0x9978] = lVar13;
  }
  puVar7 = PTR_DAT_04bc35d8;
  puVar18 = puVar15 + 0x9982;
  *(undefined1 *)(puVar15 + 0x9981) = 0;
  puVar15[0x997c] = 0;
  puVar15[0x997d] = lVar25;
  plVar30 = puVar15 + 0x997e;
  *plVar30 = 0;
  puVar15[0x997f] = 0;
  puVar15[0x9980] = 0;
  plVar14 = puVar15 + 0x997b;
  *plVar14 = (long)(puVar7 + 0x10);
  *puVar31 = &PTR_LAB_04a8b2e8;
  puVar15[0x9977] = plVar14;
  memset(puVar18,0,0x5870a0);
  lVar13 = 500;
  puVar27 = puVar18;
  do {
    FUN_0272845c(puVar27,0,0);
    *puVar27 = &PTR_LAB_04a8b348;
    lVar13 = lVar13 + -1;
    puVar27 = puVar27 + 0x5a9;
  } while (lVar13 != 0);
  *plVar14 = (long)&PTR_LAB_04a8b318;
  iVar24 = 0;
  do {
    lVar13 = *plVar30;
    puVar27 = puVar18 + (long)iVar24 * 0x5a9;
    *plVar30 = (long)puVar27;
    if (lVar13 != 0) {
      puVar27[4] = lVar13;
    }
    puVar27[2] = lVar25 + puVar27[2];
    FUN_026400e0(puVar27,lVar25);
    iVar24 = iVar24 + 1;
    lVar25 = lVar25 + 0x5a80;
  } while (iVar24 != 500);
  *puVar31 = &PTR_LAB_04a8b2b8;
  lVar25 = puVar15[2];
  lVar13 = puVar15[3];
  puVar15[0xba79b] = 0;
  *(undefined1 *)(puVar15 + 0xba79c) = 0;
  puVar15[3] = puVar2;
  puVar15[0xba79a] = 0;
  puVar15[0xba797] = 0;
  puVar15[0xba798] = lVar25 + 0xb84228;
  if (lVar13 != 0) {
    puVar15[0xba79a] = lVar13;
  }
  *puVar2 = &PTR_LAB_04a8b468;
  puVar15[0xba79e] = 0;
  puVar15[0xba79f] = lVar25 + 0xb84228;
  puVar15[0xba7a0] = 0;
  puVar15[0xba7a1] = 0;
  puVar15[0xba7a2] = 0;
  puVar7 = PTR_DAT_04bc3170;
  puVar15[0xba7a8] = 0;
  puVar15[0xba7a9] = 0;
  *(undefined1 *)(puVar15 + 0xba7aa) = 0;
  puVar7 = puVar7 + 0x10;
  *(undefined1 *)(puVar15 + 0xba7b1) = 0;
  puVar15[0xba7a5] = 0;
  puVar15[0xba7a6] = lVar25 + 0xb84230;
  *(undefined1 *)(puVar15 + 0xba7a3) = 0;
  puVar15[0xba7a7] = 0;
  puVar15[0xba7ae] = 0;
  *(undefined1 *)(puVar15 + 0xba7b8) = 0;
  puVar15[0xba79d] = puVar7;
  puVar15[0xba7a8] = puVar15 + 0xba79d;
  puVar15[0xba7b7] = 0;
  puVar15[0xba7a4] = puVar7;
  *(undefined1 *)(puVar15 + 0xba7bf) = 0;
  puVar15[0xba7bc] = 0;
  *(undefined1 *)(puVar15 + 0xba7c6) = 0;
  puVar15[0xba7c5] = 0;
  *(undefined1 *)(puVar15 + 0xba7cd) = 0;
  puVar15[0xba7ca] = 0;
  *(undefined1 *)(puVar15 + 0xba7d4) = 0;
  puVar15[0xba7d3] = 0;
  *(undefined1 *)(puVar15 + 0xba7db) = 0;
  puVar15[0xba7da] = 0;
  puVar15[0xba7d9] = 0;
  puVar15[0xba7d8] = 0;
  puVar15[0xba7ac] = 0;
  puVar15[0xba7ad] = lVar25 + 0xb84238;
  puVar15[0xba7ab] = puVar7;
  puVar15[0xba7af] = 0;
  puVar15[0xba7b0] = 0;
  puVar15[0xba7af] = puVar15 + 0xba7a4;
  puVar15[0xba7b3] = 0;
  puVar15[0xba7b4] = lVar25 + 0xb84240;
  puVar15[0xba7ba] = 0;
  puVar15[0xba7bb] = lVar25 + 0xb84240;
  puVar15[0xba7b9] = &DAT_04a8f3f0;
  puVar15[0xba7b5] = puVar15 + 0xba7b9;
  puVar15[0xba7b6] = puVar15 + 0xba7ab;
  puVar15[0xba7ce] = &PTR_LAB_04a8f3c0;
  puVar15[0xba7b2] = &PTR_LAB_04a8f3c0;
  puVar15[0xba7c0] = &PTR_LAB_04a8f3c0;
  puVar15[0xba7d2] = puVar15 + 0xba7c0;
  puVar15[0xba7c1] = 0;
  puVar15[0xba7c2] = lVar25 + 0xb84994;
  puVar15[0xba7c8] = 0;
  puVar15[0xba7c9] = lVar25 + 0xb84994;
  puVar15[0xba7c7] = &DAT_04a8f3f0;
  puVar15[0xba7cf] = 0;
  puVar15[0xba7d0] = lVar25 + 0xb850e8;
  puVar15[0xba7d6] = 0;
  puVar15[0xba7d7] = lVar25 + 0xb850e8;
  puVar15[0xba7d5] = &DAT_04a8f3f0;
  puVar15[0xba7d1] = puVar15 + 0xba7d5;
  puVar15[0xba7c3] = puVar15 + 0xba7c7;
  puVar15[0xba7c4] = puVar15 + 0xba7b2;
  puVar15[0xba799] = puVar15 + 0xba7ce;
  puVar15[0xba7bd] = 0;
  puVar15[0xba7be] = 0;
  puVar15[0xba7cb] = 0;
  puVar15[0xba7cc] = 0;
  FUN_0271f6d8(puVar15 + 0xba7dc,puVar2,lVar25 + 0xb8583c);
  puVar15[0xba7dc] = &PTR_LAB_04a8e8d0;
  puVar15[0xba8aa] = 0;
  puVar15[0xba8ab] = 0;
  puVar15[0xba8ac] = 0;
  *(undefined1 *)(puVar15 + 0xba8ad) = 0;
  puVar15[0xba8a8] = 0;
  puVar15[0xba8a9] = puVar15[0xba798] + 0x2b70;
  if (puVar15[0xba799] != 0) {
    puVar15[0xba8ab] = puVar15[0xba799];
  }
  *(undefined1 *)(puVar15 + 0xba8bb) = 0;
  puVar31 = puVar15 + 0xba8ae;
  *puVar31 = &PTR_LAB_04a8b4f8;
  puVar15[0xba8a7] = &DAT_04a8b498;
  puVar15[0xba8b9] = 0;
  puVar15[0xba8ba] = 0;
  lVar25 = puVar15[0xba798] + 0x3b70;
  puVar15[0xba8b3] = 0;
  *(undefined1 *)(puVar15 + 0xba8b4) = 0;
  puVar15[0xba799] = puVar31;
  puVar15[0xba8af] = 0;
  puVar15[0xba8b0] = lVar25;
  puVar15[0xba8b6] = 0;
  puVar15[0xba8b7] = lVar25;
  plVar14 = puVar15 + 0xba8b8;
  *plVar14 = 0;
  puVar15[0xba8b1] = puVar15 + 0xba8b5;
  puVar15[0xba8b2] = puVar15 + 0xba8a7;
  memset(puVar15 + 0xba8bc,0,0xe00);
  puVar9 = PTR_DAT_04bc30e8;
  puVar7 = PTR_DAT_04bc30e8 + 0x10;
  lVar13 = 0;
  do {
    *(undefined **)((long)puVar15 + lVar13 + 0x5d4618) = puVar7;
    lVar32 = lVar13 + 0x70;
    *(code *)((long)puVar15 + (long)(FUN_005d4610 + lVar13)) = (code)0x0;
    *(undefined8 *)((long)puVar15 + lVar13 + 0x5d4600) = 0;
    *(undefined8 *)((long)puVar15 + lVar13 + 0x5d4608) = 0;
    *(undefined8 *)((long)puVar15 + lVar13 + 0x5d4640) = 0;
    *(undefined1 *)((long)puVar15 + lVar13 + 0x5d4648) = 0;
    *(undefined8 *)((long)puVar15 + lVar13 + 0x5d45f0) = 0;
    *(undefined8 *)((long)puVar15 + lVar13 + 0x5d45f8) = 0;
    *(undefined **)((long)puVar15 + lVar13 + 0x5d45e0) = puVar7;
    *(undefined8 *)((long)puVar15 + lVar13 + 0x5d45e8) = 0;
    *(undefined8 *)((long)puVar15 + (long)(FUN_005d4620 + lVar13)) = 0;
    *(undefined8 *)((long)puVar15 + lVar13 + 0x5d4628) = 0;
    *(undefined8 *)((long)puVar15 + lVar13 + 0x5d4630) = 0;
    *(undefined8 *)((long)puVar15 + lVar13 + 0x5d4638) = 0;
    lVar13 = lVar32;
  } while (lVar32 != 0xe00);
  lVar13 = 0;
  iVar24 = 0;
  puVar15[0xba8b5] = &PTR_LAB_04a8daf0;
  do {
    lVar32 = *plVar14;
    puVar18 = puVar15 + 0xba8bc + (long)iVar24 * 7;
    *plVar14 = (long)puVar18;
    if (lVar32 != 0) {
      puVar18[4] = lVar32;
    }
    puVar18[2] = lVar25 + lVar13 + puVar18[2];
    FUN_026400e0();
    lVar13 = lVar13 + 8;
    iVar24 = iVar24 + 1;
  } while (lVar13 != 0x200);
  *puVar31 = &PTR_LAB_04a8b4c8;
  lVar13 = puVar15[0xba799];
  puVar15[0xbaa81] = 0;
  *(undefined1 *)(puVar15 + 0xbaa82) = 0;
  puVar15[0xba799] = puVar19;
  puVar15[0xbaa80] = 0;
  lVar25 = puVar15[0xba798] + 0x3e70;
  puVar15[0xbaa7d] = 0;
  puVar15[0xbaa7e] = lVar25;
  if (lVar13 != 0) {
    puVar15[0xbaa80] = lVar13;
  }
  *puVar19 = &PTR_LAB_04a8b558;
  puVar15[0xbaa84] = 0;
  puVar15[0xbaa85] = lVar25;
  puVar15[0xbaa87] = 0;
  puVar15[0xbaa88] = 0;
  plVar14 = puVar15 + 0xbaa86;
  *plVar14 = 0;
  *(undefined1 *)(puVar15 + 0xbaa89) = 0;
  puVar15[0xbaa7f] = puVar15 + 0xbaa83;
  memset(puVar15 + 0xbaa8a,0,0xe00);
  puVar7 = puVar9 + 0x10;
  lVar13 = 0;
  do {
    *(undefined **)((long)puVar15 + (long)(&LAB_005d5488 + lVar13)) = puVar7;
    lVar32 = lVar13 + 0x70;
    *(undefined1 *)((long)puVar15 + (long)(&LAB_005d5480 + lVar13)) = 0;
    *(undefined8 *)((long)puVar15 + (long)(&LAB_005d5470 + lVar13)) = 0;
    *(undefined8 *)((long)puVar15 + (long)(&LAB_005d5478 + lVar13)) = 0;
    *(undefined8 *)((long)puVar15 + (long)(&LAB_005d54b0 + lVar13)) = 0;
    *(undefined1 *)((long)puVar15 + (long)(&LAB_005d54b8 + lVar13)) = 0;
    *(undefined8 *)((long)puVar15 + (long)(&LAB_005d5460 + lVar13)) = 0;
    *(undefined8 *)((long)puVar15 + (long)(&LAB_005d5468 + lVar13)) = 0;
    *(undefined **)((long)puVar15 + (long)(&LAB_005d5450 + lVar13)) = puVar7;
    *(undefined8 *)((long)puVar15 + (long)(&LAB_005d5458 + lVar13)) = 0;
    *(undefined8 *)((long)puVar15 + (long)(&LAB_005d5490 + lVar13)) = 0;
    *(undefined8 *)((long)puVar15 + (long)(&LAB_005d5498 + lVar13)) = 0;
    *(undefined8 *)((long)puVar15 + (long)(&LAB_005d54a0 + lVar13)) = 0;
    *(undefined8 *)((long)puVar15 + (long)(&LAB_005d54a8 + lVar13)) = 0;
    lVar13 = lVar32;
  } while (lVar32 != 0xe00);
  lVar13 = 0;
  iVar24 = 0;
  puVar15[0xbaa83] = &PTR_LAB_04a8daf0;
  do {
    lVar32 = *plVar14;
    puVar31 = puVar15 + 0xbaa8a + (long)iVar24 * 7;
    *plVar14 = (long)puVar31;
    if (lVar32 != 0) {
      puVar31[4] = lVar32;
    }
    puVar31[2] = lVar25 + lVar13 + puVar31[2];
    FUN_026400e0();
    lVar13 = lVar13 + 8;
    iVar24 = iVar24 + 1;
  } while (lVar13 != 0x200);
  lVar25 = puVar15[0xbaa7e];
  lVar13 = puVar15[0xbaa7f];
  *(undefined1 *)(puVar15 + 0xbac50) = 0;
  puVar15[0xbac4e] = 0;
  puVar15[0xbac4f] = 0;
  puVar15[0xbaa7f] = puVar15 + 0xbac4a;
  plVar14 = puVar15 + 0xbac4d;
  *plVar14 = 0;
  puVar15[0xbac4b] = 0;
  puVar15[0xbac4c] = lVar25 + 0x200;
  if (lVar13 != 0) {
    puVar15[0xbac4e] = lVar13;
  }
  memset(puVar15 + 0xbac51,0,0xe00);
  lVar13 = 0;
  do {
    *(undefined **)((long)puVar15 + (long)(&LAB_005d62c0 + lVar13)) = &DAT_04a8f030;
    lVar32 = lVar13 + 0x70;
    *(undefined1 *)((long)puVar15 + (long)(&LAB_005d62b8 + lVar13)) = 0;
    *(undefined8 *)((long)puVar15 + (long)(&LAB_005d62a8 + lVar13)) = 0;
    *(undefined8 *)((long)puVar15 + (long)(&LAB_005d62b0 + lVar13)) = 0;
    *(undefined8 *)((long)puVar15 + (long)(&LAB_005d62e8 + lVar13)) = 0;
    *(undefined1 *)((long)puVar15 + (long)(&LAB_005d62f0 + lVar13)) = 0;
    *(undefined8 *)((long)puVar15 + (long)(&LAB_005d6298 + lVar13)) = 0;
    *(undefined8 *)((long)puVar15 + (long)(&LAB_005d62a0 + lVar13)) = 0;
    *(undefined **)((long)puVar15 + (long)(&LAB_005d6288 + lVar13)) = &DAT_04a8f030;
    *(undefined8 *)((long)puVar15 + (long)(&LAB_005d6290 + lVar13)) = 0;
    *(undefined8 *)((long)puVar15 + (long)(&LAB_005d62c8 + lVar13)) = 0;
    *(undefined8 *)((long)puVar15 + (long)(&LAB_005d62d0 + lVar13)) = 0;
    *(undefined8 *)((long)puVar15 + (long)(&LAB_005d62d8 + lVar13)) = 0;
    *(undefined8 *)((long)puVar15 + (long)(&LAB_005d62e0 + lVar13)) = 0;
    lVar13 = lVar32;
  } while (lVar32 != 0xe00);
  lVar13 = 0;
  iVar24 = 0;
  puVar15[0xbac4a] = &PTR_LAB_04a8b588;
  do {
    lVar32 = *plVar14;
    puVar31 = puVar15 + 0xbac51 + (long)iVar24 * 7;
    *plVar14 = (long)puVar31;
    if (lVar32 != 0) {
      puVar31[4] = lVar32;
    }
    puVar31[2] = lVar25 + 0x200 + lVar13 + puVar31[2];
    FUN_026400e0();
    lVar13 = lVar13 + 4;
    iVar24 = iVar24 + 1;
  } while (lVar13 != 0x100);
  *(undefined1 *)(puVar15 + 0xbae17) = 0;
  puVar15[0xbae12] = 0;
  puVar15[0xbae13] = puVar15[0xbaa7e] + 0x300;
  puVar15[0xbae14] = 0;
  puVar15[0xbae15] = 0;
  puVar15[0xbae16] = 0;
  if (puVar15[0xbaa7f] != 0) {
    puVar15[0xbae15] = puVar15[0xbaa7f];
  }
  puVar7 = PTR_DAT_04bc3170;
  puVar9 = puVar9 + 0x10;
  puVar15[0xbae19] = 0;
  puVar15[0xbae1a] = puVar15[0xbaa7e] + 0x308;
  puVar15[0xbae1c] = 0;
  puVar15[0xbae1d] = 0;
  puVar15[0xbae1b] = 0;
  *puVar19 = &PTR_LAB_04a8b528;
  puVar15[0xbae11] = puVar7 + 0x10;
  *(undefined1 *)(puVar15 + 0xbae1e) = 0;
  puVar15[0xbae18] = puVar9;
  puVar15[0xbaa7f] = puVar15 + 0xbae18;
  lVar13 = puVar15[0xba799];
  puVar15[0xbae1c] = puVar15 + 0xbae11;
  lVar25 = puVar15[0xba798] + 0x4180;
  puVar15[0xbae24] = 0;
  *(undefined1 *)(puVar15 + 0xbae25) = 0;
  puVar15[0xba799] = puVar15 + 0xbae1f;
  puVar15[0xbae20] = 0;
  puVar15[0xbae21] = lVar25;
  puVar15[0xbae23] = 0;
  if (lVar13 != 0) {
    puVar15[0xbae23] = lVar13;
  }
  *(undefined1 *)(puVar15 + 0xbae2c) = 0;
  puVar15[0xbae1f] = &PTR_LAB_04a8b5e8;
  puVar15[0xbae22] = puVar15 + 0xbae26;
  puVar15[0xbae27] = 0;
  puVar15[0xbae28] = lVar25;
  plVar14 = puVar15 + 0xbae29;
  *plVar14 = 0;
  puVar15[0xbae2a] = 0;
  puVar15[0xbae2b] = 0;
  memset(puVar15 + 0xbae2e,0,0x6f8);
  lVar13 = 0;
  iVar24 = 0;
  puVar15[0xbae2d] = puVar9;
  puVar15[0xbae7a] = puVar9;
  puVar15[0xbae81] = puVar9;
  puVar15[0xbae88] = puVar9;
  puVar15[0xbae8f] = puVar9;
  puVar15[0xbae96] = puVar9;
  puVar15[0xbae57] = puVar9;
  puVar15[0xbae5e] = puVar9;
  puVar15[0xbae65] = puVar9;
  puVar15[0xbae6c] = puVar9;
  puVar15[0xbae73] = puVar9;
  puVar15[0xbae35] = 0;
  puVar15[0xbae36] = 0;
  puVar15[0xbae9d] = puVar9;
  puVar15[0xbaea4] = puVar9;
  puVar15[0xbaeab] = puVar9;
  puVar15[0xbaeb2] = puVar9;
  puVar15[0xbaeb9] = puVar9;
  puVar15[0xbae37] = 0;
  puVar15[0xbae38] = 0;
  puVar15[0xbae39] = 0;
  puVar15[0xbae3c] = 0;
  puVar15[0xbae3d] = 0;
  puVar15[0xbae3e] = 0;
  puVar15[0xbae3f] = 0;
  puVar15[0xbae40] = 0;
  puVar15[0xbae43] = 0;
  puVar15[0xbae44] = 0;
  puVar15[0xbae45] = 0;
  puVar15[0xbae46] = 0;
  puVar15[0xbae47] = 0;
  puVar15[0xbae4a] = 0;
  puVar15[0xbae4b] = 0;
  puVar15[0xbae4c] = 0;
  puVar15[0xbae4d] = 0;
  puVar15[0xbae4e] = 0;
  puVar15[0xbae51] = 0;
  puVar15[0xbae52] = 0;
  puVar15[0xbae53] = 0;
  puVar15[0xbae54] = 0;
  puVar15[0xbae55] = 0;
  puVar15[0xbae58] = 0;
  puVar15[0xbae59] = 0;
  puVar15[0xbae5a] = 0;
  puVar15[0xbae5b] = 0;
  puVar15[0xbae5c] = 0;
  puVar15[0xbae63] = 0;
  puVar15[0xbae62] = 0;
  puVar15[0xbae61] = 0;
  puVar15[0xbae60] = 0;
  puVar15[0xbae5f] = 0;
  puVar15[0xbae6a] = 0;
  puVar15[0xbae69] = 0;
  puVar15[0xbae68] = 0;
  puVar15[0xbae67] = 0;
  puVar15[0xbae66] = 0;
  puVar15[0xbae71] = 0;
  puVar15[0xbae70] = 0;
  puVar15[0xbae6f] = 0;
  puVar15[0xbae6e] = 0;
  puVar15[0xbae6d] = 0;
  puVar15[0xbae78] = 0;
  puVar15[0xbae77] = 0;
  puVar15[0xbae76] = 0;
  puVar15[0xbae75] = 0;
  puVar15[0xbae74] = 0;
  puVar15[0xbae7f] = 0;
  puVar15[0xbae7e] = 0;
  puVar15[0xbae7d] = 0;
  puVar15[0xbae7c] = 0;
  puVar15[0xbae7b] = 0;
  puVar15[0xbae86] = 0;
  puVar15[0xbae85] = 0;
  puVar15[0xbae84] = 0;
  puVar15[0xbae83] = 0;
  puVar15[0xbae82] = 0;
  puVar15[0xbae8d] = 0;
  puVar15[0xbae8c] = 0;
  puVar15[0xbae8b] = 0;
  puVar15[0xbae8a] = 0;
  puVar15[0xbae89] = 0;
  puVar15[0xbae94] = 0;
  puVar15[0xbae93] = 0;
  puVar15[0xbae92] = 0;
  puVar15[0xbae91] = 0;
  puVar15[0xbae90] = 0;
  puVar15[0xbae9b] = 0;
  puVar15[0xbae9a] = 0;
  puVar15[0xbae99] = 0;
  puVar15[0xbae98] = 0;
  puVar15[0xbae97] = 0;
  puVar15[0xbaea2] = 0;
  puVar15[0xbaea1] = 0;
  puVar15[0xbaea0] = 0;
  puVar15[0xbae9f] = 0;
  puVar15[0xbae9e] = 0;
  puVar15[0xbaea9] = 0;
  puVar15[0xbaea8] = 0;
  puVar15[0xbaea7] = 0;
  puVar15[0xbaea6] = 0;
  puVar15[0xbaea5] = 0;
  puVar15[0xbaeb0] = 0;
  puVar15[0xbaeaf] = 0;
  puVar15[0xbaeae] = 0;
  puVar15[0xbaead] = 0;
  puVar15[0xbaeac] = 0;
  puVar15[0xbaeb7] = 0;
  puVar15[0xbaeb6] = 0;
  puVar15[0xbaeb5] = 0;
  puVar15[0xbaeb4] = 0;
  puVar15[0xbaeb3] = 0;
  puVar15[0xbaebe] = 0;
  puVar15[0xbaebd] = 0;
  puVar15[0xbaebc] = 0;
  puVar15[0xbaebb] = 0;
  puVar15[0xbaeba] = 0;
  puVar15[0xbaec5] = 0;
  puVar15[0xbaec4] = 0;
  puVar15[0xbaec3] = 0;
  puVar15[0xbaec2] = 0;
  puVar15[0xbaec1] = 0;
  puVar15[0xbaec0] = puVar9;
  puVar15[0xbaecc] = 0;
  puVar15[0xbaecb] = 0;
  puVar15[0xbaeca] = 0;
  puVar15[0xbaec9] = 0;
  puVar15[0xbaec8] = 0;
  puVar15[0xbaec7] = puVar9;
  puVar15[0xbaed3] = 0;
  puVar15[0xbaed2] = 0;
  puVar15[0xbaed1] = 0;
  puVar15[0xbaed0] = 0;
  puVar15[0xbaecf] = 0;
  puVar15[0xbaece] = puVar9;
  puVar15[0xbaeda] = 0;
  puVar15[0xbaed9] = 0;
  puVar15[0xbaed8] = 0;
  puVar15[0xbaed7] = 0;
  puVar15[0xbaed6] = 0;
  puVar15[0xbaed5] = puVar9;
  puVar15[0xbaee1] = 0;
  puVar15[0xbaee0] = 0;
  puVar15[0xbaedf] = 0;
  puVar15[0xbaede] = 0;
  puVar15[0xbaedd] = 0;
  puVar15[0xbaedc] = puVar9;
  puVar15[0xbaee8] = 0;
  puVar15[0xbaee7] = 0;
  puVar15[0xbaee6] = 0;
  puVar15[0xbaee5] = 0;
  puVar15[0xbaee4] = 0;
  puVar15[0xbaeef] = 0;
  puVar15[0xbaeee] = 0;
  puVar15[0xbaeed] = 0;
  puVar15[0xbaeec] = 0;
  puVar15[0xbaeeb] = 0;
  puVar15[0xbaef6] = 0;
  puVar15[0xbaef5] = 0;
  puVar15[0xbaef4] = 0;
  puVar15[0xbaef3] = 0;
  puVar15[0xbaef2] = 0;
  puVar15[0xbaefd] = 0;
  puVar15[0xbaefc] = 0;
  puVar15[0xbaefb] = 0;
  puVar15[0xbaefa] = 0;
  puVar15[0xbaef9] = 0;
  puVar15[0xbaf04] = 0;
  puVar15[0xbaf03] = 0;
  puVar15[0xbaf02] = 0;
  puVar15[0xbaf01] = 0;
  puVar15[0xbaf00] = 0;
  puVar15[0xbaf0b] = 0;
  puVar15[0xbaf0a] = 0;
  puVar15[0xbaf09] = 0;
  puVar15[0xbaf08] = 0;
  puVar15[0xbaf07] = 0;
  puVar15[0xbae34] = puVar9;
  puVar15[0xbae3b] = puVar9;
  puVar15[0xbae42] = puVar9;
  puVar15[0xbae49] = puVar9;
  puVar15[0xbae50] = puVar9;
  *(undefined1 *)(puVar15 + 0xbae3a) = 0;
  *(undefined1 *)(puVar15 + 0xbae41) = 0;
  *(undefined1 *)(puVar15 + 0xbae48) = 0;
  *(undefined1 *)(puVar15 + 0xbae4f) = 0;
  *(undefined1 *)(puVar15 + 0xbae56) = 0;
  *(undefined1 *)(puVar15 + 0xbae5d) = 0;
  *(undefined1 *)(puVar15 + 0xbae64) = 0;
  *(undefined1 *)(puVar15 + 0xbae6b) = 0;
  *(undefined1 *)(puVar15 + 0xbae72) = 0;
  *(undefined1 *)(puVar15 + 0xbae79) = 0;
  *(undefined1 *)(puVar15 + 0xbae80) = 0;
  *(undefined1 *)(puVar15 + 0xbae87) = 0;
  *(undefined1 *)(puVar15 + 0xbae8e) = 0;
  *(undefined1 *)(puVar15 + 0xbae95) = 0;
  *(undefined1 *)(puVar15 + 0xbae9c) = 0;
  *(undefined1 *)(puVar15 + 0xbaea3) = 0;
  *(undefined1 *)(puVar15 + 0xbaeaa) = 0;
  *(undefined1 *)(puVar15 + 0xbaeb1) = 0;
  *(undefined1 *)(puVar15 + 0xbaeb8) = 0;
  *(undefined1 *)(puVar15 + 0xbaebf) = 0;
  *(undefined1 *)(puVar15 + 0xbaec6) = 0;
  *(undefined1 *)(puVar15 + 0xbaecd) = 0;
  *(undefined1 *)(puVar15 + 0xbaed4) = 0;
  *(undefined1 *)(puVar15 + 0xbaedb) = 0;
  *(undefined1 *)(puVar15 + 0xbaee2) = 0;
  *(undefined1 *)(puVar15 + 0xbaee9) = 0;
  puVar15[0xbaee3] = puVar9;
  *(undefined1 *)(puVar15 + 0xbaef0) = 0;
  puVar15[0xbaeea] = puVar9;
  *(undefined1 *)(puVar15 + 0xbaef7) = 0;
  puVar15[0xbaef1] = puVar9;
  *(undefined1 *)(puVar15 + 0xbaefe) = 0;
  puVar15[0xbaef8] = puVar9;
  *(undefined1 *)(puVar15 + 0xbaf05) = 0;
  puVar15[0xbaeff] = puVar9;
  *(undefined1 *)(puVar15 + 0xbaf0c) = 0;
  puVar15[0xbaf06] = puVar9;
  puVar15[0xbae26] = &PTR_LAB_04a8f330;
  do {
    lVar32 = *plVar14;
    plVar30 = puVar15 + 0xbae2d + (long)iVar24 * 7;
    *plVar14 = (long)plVar30;
    if (lVar32 != 0) {
      plVar30[4] = lVar32;
    }
    plVar30[2] = lVar25 + lVar13 + plVar30[2];
    FUN_026400e0();
    lVar13 = lVar13 + 8;
    iVar24 = iVar24 + 1;
  } while (lVar13 != 0x100);
  puVar15[0xbae1f] = &PTR_LAB_04a8b5b8;
  FUN_02352bec(puVar15 + 0xbaf0d,puVar2,puVar15[0xba798] + 0x4280);
  puVar15[0xbaf0d] = PTR_DAT_04bc30c0 + 0x10;
  FUN_02717b08(puVar15 + 0xbb224,puVar2,puVar15[0xba798] + 0x5410);
  lVar13 = puVar15[0xba799];
  puVar15[0xbb2a0] = 0;
  *(undefined1 *)(puVar15 + 0xbb2a1) = 0;
  puVar15[0xbb29f] = 0;
  puVar15[0xba799] = puVar26;
  lVar25 = puVar15[0xba798] + 0x5490;
  puVar15[0xbb29c] = 0;
  puVar15[0xbb29d] = lVar25;
  if (lVar13 != 0) {
    puVar15[0xbb29f] = lVar13;
  }
  *(undefined1 *)(puVar15 + 0xbb2a8) = 0;
  *puVar26 = &PTR_LAB_04a8b648;
  puVar15[0xbb29e] = puVar15 + 0xbb2a2;
  puVar15[0xbb2a3] = 0;
  puVar15[0xbb2a4] = lVar25;
  plVar14 = puVar15 + 0xbb2a5;
  *plVar14 = 0;
  puVar15[0xbb2a6] = 0;
  puVar15[0xbb2a7] = 0;
  memset(puVar15 + 0xbb2a9,0,0x15e0);
  lVar13 = -0x15e0;
  do {
    lVar32 = lVar13 + 0x70;
    *(undefined8 *)((long)puVar15 + lVar13 + 0x5dab50) = 0;
    *(undefined8 *)((long)puVar15 + lVar13 + 0x5dab48) = 0;
    *(undefined8 *)((long)puVar15 + lVar13 + 0x5dab40) = 0;
    *(undefined1 *)((long)puVar15 + lVar13 + 0x5dab58) = 0;
    *(undefined8 *)((long)puVar15 + lVar13 + 0x5dab38) = 0;
    *(undefined8 *)((long)puVar15 + lVar13 + 0x5dab30) = 0;
    *(undefined **)((long)puVar15 + lVar13 + 0x5dab28) = &DAT_04a8b6a8;
    *(undefined8 *)((long)puVar15 + lVar13 + 0x5dab68) = 0;
    *(undefined8 *)((long)puVar15 + lVar13 + 0x5dab70) = 0;
    *(undefined8 *)((long)puVar15 + lVar13 + 0x5dab78) = 0;
    *(undefined8 *)((long)puVar15 + lVar13 + 0x5dab80) = 0;
    *(undefined8 *)((long)puVar15 + lVar13 + 0x5dab88) = 0;
    *(undefined1 *)((long)puVar15 + lVar13 + 0x5dab90) = 0;
    *(undefined **)((long)puVar15 + lVar13 + 0x5dab60) = &DAT_04a8b6a8;
    lVar13 = lVar32;
  } while (lVar32 != 0);
  lVar13 = 0;
  iVar24 = 0;
  puVar15[0xbb2a2] = &PTR_LAB_04a8b678;
  do {
    lVar32 = *plVar14;
    puVar19 = puVar15 + 0xbb2a9 + (long)iVar24 * 7;
    *plVar14 = (long)puVar19;
    if (lVar32 != 0) {
      puVar19[4] = lVar32;
    }
    puVar19[2] = lVar25 + lVar13 + puVar19[2];
    FUN_026400e0();
    lVar13 = lVar13 + 0x10;
    iVar24 = iVar24 + 1;
  } while (lVar13 != 0x640);
  *(undefined1 *)(puVar15 + 0xbb56b) = 0;
  *puVar26 = &PTR_LAB_04a8b618;
  lVar25 = puVar15[0xba799];
  puVar15[0xba799] = puVar15 + 0xbb565;
  puVar15[0xbb566] = 0;
  puVar15[0xbb567] = puVar15[0xba798] + 0x5ad0;
  puVar15[0xbb568] = 0;
  puVar15[0xbb569] = 0;
  puVar15[0xbb56a] = 0;
  if (lVar25 != 0) {
    puVar15[0xbb569] = lVar25;
  }
  puVar15[0xbb571] = 0;
  puVar15[0xbb565] = &DAT_04a8b6d8;
  puVar15[0xbb570] = 0;
  *(undefined1 *)(puVar15 + 0xbb572) = 0;
  *puVar2 = &PTR_LAB_04a8b438;
  lVar25 = puVar15[3];
  puVar15[3] = puVar15 + 0xbb56c;
  lVar13 = puVar15[2] + 0xb8a4d0;
  puVar15[0xbb56d] = 0;
  puVar15[0xbb56e] = lVar13;
  puVar7 = PTR_DAT_04bb2698;
  if (lVar25 != 0) {
    puVar15[0xbb570] = lVar25;
  }
  puVar15[0xbb573] = &DAT_04a8c890;
  puVar15[0xbb574] = 0;
  puVar15[0xbb575] = lVar13;
  puVar15[0xbb57b] = 0;
  puVar15[0xbb57c] = puVar15[2] + 0xb8a4d8;
  puVar15[0xbb57a] = &DAT_04a8f0c0;
  puVar15[0xbb56c] = &PTR_LAB_04a8b708;
  *(undefined1 *)(puVar15 + 0xbb580) = 0;
  puVar15[0xbb57e] = 0;
  puVar15[0xbb57f] = 0;
  puVar15[0xbb56f] = puVar15 + 0xbb57a;
  puVar15[0xbb57e] = puVar15 + 0xbb573;
  *puVar15 = &PTR_LAB_04a8a840;
  lVar25 = *(long *)puVar7;
  puVar15[0xbb578] = 0;
  *(undefined1 *)(puVar15 + 0xbb579) = 0;
  puVar15[0xbb57d] = 0;
  puVar15[0xbb576] = 0;
  puVar15[0xbb577] = 0;
  plVar12[4] = (long)puVar15;
  if (lVar25 == 0) {
    pvVar20 = malloc(0x28);
    plVar12[5] = (long)pvVar20;
  }
  else {
    plVar14 = (long *)*plVar21;
    if (plVar14 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar14 = (long *)(lVar25 + 8);
      if (lVar13 != 0) {
        plVar14 = (long *)(lVar13 + 0xa8);
      }
      plVar14 = (long *)*plVar14;
      if (plVar14 == (long *)0x0) {
        plVar12[5] = 0;
        goto LAB_0270093c;
      }
    }
    pvVar20 = (void *)(**(code **)(*plVar14 + 0x30))(plVar14,0x28,8);
    plVar12[5] = (long)pvVar20;
  }
  if (pvVar20 == (void *)0x0) {
LAB_0270093c:
    FUN_027260ac(plVar12);
    return 0;
  }
  lVar25 = *(long *)puVar7;
  if (lVar25 == 0) {
    plVar14 = malloc(0x28);
  }
  else {
    plVar14 = (long *)*plVar21;
    if (plVar14 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar14 = (long *)(lVar25 + 8);
      if (lVar13 != 0) {
        plVar14 = (long *)(lVar13 + 0xa8);
      }
      plVar14 = (long *)*plVar14;
    }
    plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x28,8);
  }
  puVar9 = PTR_DAT_04bc3820;
  plVar14[1] = 0x200000000;
  plVar14[2] = (long)(plVar14 + 3);
  *plVar14 = (long)(puVar9 + 0x10);
  plVar12[6] = (long)plVar14;
  lVar25 = *(long *)puVar7;
  if (lVar25 == 0) {
    puVar15 = malloc(0x1050);
  }
  else {
    plVar21 = (long *)*plVar21;
    if (plVar21 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar21 = (long *)(lVar25 + 8);
      if (lVar13 != 0) {
        plVar21 = (long *)(lVar13 + 0xa8);
      }
      plVar21 = (long *)*plVar21;
      puVar15 = (undefined8 *)0x0;
      if (plVar21 == (long *)0x0) goto LAB_02700738;
    }
    puVar15 = (undefined8 *)(**(code **)(*plVar21 + 0x30))(plVar21,0x1050,8);
  }
LAB_02700738:
  *puVar15 = &PTR_LAB_04a8b738;
  puVar15[4] = puVar15 + 4;
  puVar15[5] = puVar15 + 4;
  *(undefined1 *)(puVar15 + 3) = 0;
  puVar15[1] = 0;
  puVar15[2] = 0;
  *(undefined4 *)(puVar15 + 6) = 0;
  puVar15[7] = puVar15 + 10;
  for (lVar25 = 0; *(long *)((long)puVar15 + lVar25 + 0x50) = (long)puVar15 + lVar25 + 0x70,
      lVar25 != 0xfc0; lVar25 = lVar25 + 0x40) {
    *(long *)((long)puVar15 + lVar25 + 0x70) = (long)puVar15 + lVar25 + 0x90;
  }
  puVar15[0x206] = 0;
  puVar15[8] = puVar15 + 10;
  *(undefined4 *)(puVar15 + 9) = 0x80;
  lVar25 = plVar12[3];
  plVar12[7] = (long)puVar15;
  puVar15[1] = plVar12[2];
  puVar15[2] = lVar25;
  if (plVar12[7] != 0) {
    lVar25 = plVar12[6];
    if (*(int *)(lVar25 + 8) < *(int *)(lVar25 + 0xc)) {
      *(long *)(*(long *)(lVar25 + 0x10) + (long)*(int *)(lVar25 + 8) * 8) = plVar12[7];
      *(int *)(lVar25 + 8) = *(int *)(lVar25 + 8) + 1;
    }
  }
  *(long *)plVar12[5] = param_1 + 0x3d0;
  *(long *)(plVar12[5] + 8) = param_1 + 0x3f0;
  *(long *)(plVar12[5] + 0x10) = param_1 + 0x410;
  *(long *)(plVar12[5] + 0x18) = param_1 + 0x430;
  *(long *)(plVar12[5] + 0x20) = plVar12[6];
  FUN_02640070(plVar12[4],0,plVar12[2],0,1);
  FUN_02640130(plVar12[4],plVar12[5]);
  *(long **)(*(long *)(param_1 + 0x10) + 0x188) = plVar12;
  uVar22 = (**(code **)(*plVar12 + 0x40))(plVar12);
  if (*(int *)(param_1 + 0x128) < *(int *)(param_1 + 300)) {
    *(undefined8 *)(*(long *)(param_1 + 0x130) + (long)*(int *)(param_1 + 0x128) * 8) = uVar22;
    *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
  }
  lVar25 = *(long *)puVar7;
  if (lVar25 == 0) {
    puVar15 = malloc(0x300);
  }
  else {
    plVar12 = *(long **)(param_1 + 8);
    if (plVar12 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar12 = (long *)(lVar25 + 8);
      if (lVar13 != 0) {
        plVar12 = (long *)(lVar13 + 0xa8);
      }
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) {
        puVar15 = (undefined8 *)0x0;
        goto LAB_027008c4;
      }
    }
    puVar15 = (undefined8 *)(**(code **)(*plVar12 + 0x30))(plVar12,0x300,4);
  }
LAB_027008c4:
  *(undefined8 *)((long)puVar15 + 6) = 0;
  *puVar15 = 0;
  *(undefined2 *)((long)puVar15 + 0xe) = 0xffff;
  puVar15[8] = 0;
  *(undefined8 *)((long)puVar15 + 0x46) = 0;
  *(undefined2 *)((long)puVar15 + 0x4e) = 0xffff;
  memset(puVar15 + 0x20,0,0x200);
  uVar23 = 0;
  do {
    uVar10 = uVar23 << 2;
    uVar11 = uVar23 >> 0x1f;
    uVar1 = (int)uVar23 + 1;
    uVar23 = (ulong)uVar1;
    *(undefined4 *)((long)(puVar15 + 0x20) + (-uVar11 & 0xfffffffc00000000 | uVar10)) = 0;
  } while (uVar1 != 0x80);
  *(undefined8 **)(param_1 + 0x88) = puVar15;
  return 1;
}

