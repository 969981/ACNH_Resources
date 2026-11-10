
void FUN_002d3720(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  
  FUN_002915e4();
  puVar1 = PTR_DAT_04bce918;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_001fb850(param_1 + 0x28,0);
  FUN_001fb850(param_1 + 0x40,0);
  param_1[0x58] = 0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  *(undefined4 *)((long)param_1 + 0x2cc) = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  FUN_00309f4c(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0xaa) = 0;
  *(undefined2 *)((long)param_1 + 0x554) = 0;
  *(undefined4 *)(param_1 + 0xab) = 0;
  param_1[0xac] = 0;
  param_1[0xc] = 0;
  uVar3 = FUN_0021f454();
  lVar4 = FUN_00285d60(0x1d8,uVar3,8);
  if (lVar4 != 0) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lVar4 + lVar7) = 0;
      lVar7 = lVar7 + 4;
    } while (lVar7 != 0x1d8);
  }
  param_1[3] = lVar4;
  param_1[7] = 0;
  param_1[0xd] = 0;
  uVar3 = FUN_0021f454();
  lVar4 = FUN_00285d60(0x1d8,uVar3,8);
  if (lVar4 != 0) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lVar4 + lVar7) = 0;
      lVar7 = lVar7 + 4;
    } while (lVar7 != 0x1d8);
  }
  param_1[4] = lVar4;
  param_1[8] = 0;
  param_1[0xe] = 0;
  uVar3 = FUN_0021f454();
  lVar4 = FUN_00285d60(0x1d8,uVar3,8);
  if (lVar4 != 0) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lVar4 + lVar7) = 0;
      lVar7 = lVar7 + 4;
    } while (lVar7 != 0x1d8);
  }
  param_1[5] = lVar4;
  param_1[9] = 0;
  param_1[0xf] = 0;
  uVar3 = FUN_0021f454();
  lVar4 = FUN_00285d60(0x1d8,uVar3,8);
  if (lVar4 != 0) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lVar4 + lVar7) = 0;
      lVar7 = lVar7 + 4;
    } while (lVar7 != 0x1d8);
  }
  param_1[6] = lVar4;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[1] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar3 = FUN_0021f454();
  lVar4 = FUN_00285d10(0x150,uVar3);
  if (lVar4 != 0) {
    FUN_003137a4(lVar4);
  }
  param_1[0x10] = lVar4;
  uVar3 = FUN_0021f454();
  lVar4 = FUN_00285d10(0x18,uVar3);
  if (lVar4 != 0) {
    *(long *)lVar4 = lVar4;
    *(long *)(lVar4 + 8) = lVar4;
    *(undefined8 *)(lVar4 + 0x10) = 0;
  }
  param_1[0x11] = lVar4;
  uVar3 = FUN_0021f454();
  lVar4 = FUN_00285d10(0x18,uVar3);
  if (lVar4 != 0) {
    *(long *)lVar4 = lVar4;
    *(long *)(lVar4 + 8) = lVar4;
    *(undefined8 *)(lVar4 + 0x10) = 0;
  }
  param_1[0x13] = lVar4;
  uVar3 = FUN_0021f454();
  lVar4 = FUN_00285d10(0x18,uVar3);
  if (lVar4 != 0) {
    *(long *)lVar4 = lVar4;
    *(long *)(lVar4 + 8) = lVar4;
    *(undefined8 *)(lVar4 + 0x10) = 0;
  }
  param_1[0x12] = lVar4;
  uVar3 = FUN_0021f454();
  lVar4 = FUN_00285d10(0x18,uVar3);
  if (lVar4 != 0) {
    *(long *)lVar4 = lVar4;
    *(long *)(lVar4 + 8) = lVar4;
    *(undefined8 *)(lVar4 + 0x10) = 0;
  }
  param_1[0x23] = lVar4;
  uVar3 = FUN_0021f454();
  puVar5 = (undefined8 *)FUN_00285d10(0x28,uVar3);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_LAB_04a426b8;
    *(undefined1 *)(puVar5 + 1) = 0;
    puVar5[3] = puVar5 + 1;
    puVar5[4] = 0x10;
  }
  param_1[0x24] = (long)puVar5;
  FUN_0018b7a0(puVar5,0x10);
  uVar3 = FUN_0021f454();
  lVar4 = FUN_00285d10(0x150,uVar3);
  if (lVar4 != 0) {
    FUN_003137a4(lVar4);
  }
  param_1[0x15] = lVar4;
  uVar3 = FUN_0021f454();
  puVar5 = (undefined8 *)FUN_00285d10(0x28,uVar3);
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar5 + 1) = 0;
    puVar5[3] = 0;
    *puVar5 = &PTR_LAB_048496f8;
    puVar5[4] = 0;
    puVar5[2] = puVar5 + 3;
  }
  param_1[0x16] = (long)puVar5;
  uVar3 = FUN_0021f454();
  plVar6 = (long *)FUN_00285d10(0x1f0,uVar3);
  puVar2 = PTR_DAT_04bce930;
  puVar1 = PTR_DAT_04bce928;
  if (plVar6 != (long *)0x0) {
    *(undefined1 *)(plVar6 + 1) = 0;
    *plVar6 = (long)(puVar2 + 0x10);
    FUN_003137a4(plVar6 + 2);
    plVar6[0x2e] = 0;
    plVar6[0x2c] = (long)(plVar6 + 0x2c);
    plVar6[0x2d] = (long)(plVar6 + 0x2c);
    plVar6[0x30] = (long)&PTR_LAB_04a426b8;
    *(undefined1 *)(plVar6 + 0x31) = 0;
    plVar6[0x33] = (long)(plVar6 + 0x31);
    plVar6[0x34] = 0x10;
    plVar6[0x36] = (long)(plVar6 + 0x36);
    plVar6[0x37] = (long)(plVar6 + 0x36);
    plVar6[0x38] = 0;
    plVar6[0x39] = (long)(plVar6 + 0x39);
    plVar6[0x3a] = (long)(plVar6 + 0x39);
    plVar6[0x3b] = 0;
    plVar6[0x3c] = (long)(puVar1 + 0x10);
    *(undefined4 *)((long)plVar6 + 0x1ec) = 3;
    *(undefined1 *)(plVar6 + 0x3d) = 0;
    *plVar6 = (long)&PTR_FUN_048497d0;
    FUN_002d4cc0(plVar6);
  }
  param_1[0x17] = (long)plVar6;
  uVar3 = FUN_0021f454();
  plVar6 = (long *)FUN_00285d10(0x1b0,uVar3);
  puVar2 = PTR_DAT_04bce940;
  if (plVar6 != (long *)0x0) {
    *(undefined1 *)(plVar6 + 1) = 0;
    *plVar6 = (long)(puVar2 + 0x10);
    FUN_003137a4(plVar6 + 2);
    plVar6[0x2e] = 0;
    plVar6[0x2c] = (long)(plVar6 + 0x2c);
    plVar6[0x2d] = (long)(plVar6 + 0x2c);
    plVar6[0x30] = (long)&PTR_LAB_04a426b8;
    *(undefined1 *)(plVar6 + 0x31) = 0;
    puVar2 = PTR_DAT_04bce948;
    plVar6[0x33] = (long)(plVar6 + 0x31);
    plVar6[0x34] = 0x10;
    *plVar6 = (long)(puVar2 + 0x10);
    FUN_002d4ed0(plVar6);
  }
  param_1[0x18] = (long)plVar6;
  uVar3 = FUN_0021f454();
  puVar5 = (undefined8 *)FUN_00285d10(200,uVar3);
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar5 + 1) = 0;
    *(undefined1 *)(puVar5 + 8) = 0;
    puVar5[10] = puVar5 + 8;
    puVar5[0xb] = 0x10;
    puVar5[4] = 0;
    *(undefined1 *)(puVar5 + 0xd) = 0;
    *(undefined1 *)(puVar5 + 0x18) = 0;
    puVar5[2] = puVar5 + 2;
    puVar5[3] = puVar5 + 2;
    puVar5[7] = &PTR_LAB_04a426b8;
    puVar5[0xc] = &PTR_LAB_04a426b8;
    puVar5[0x11] = &PTR_LAB_04a426b8;
    puVar5[0x17] = puVar1 + 0x10;
    puVar5[0xf] = puVar5 + 0xd;
    puVar5[0x10] = 0x10;
    *(undefined1 *)(puVar5 + 0x12) = 0;
    puVar5[0x14] = puVar5 + 0x12;
    puVar5[0x15] = 0x10;
    *(undefined4 *)((long)puVar5 + 0xc4) = 3;
    *puVar5 = &PTR_LAB_048498b0;
    FUN_002d4fd0(puVar5);
  }
  param_1[0x19] = (long)puVar5;
  uVar3 = FUN_0021f454();
  plVar6 = (long *)FUN_00285d10(0x118,uVar3);
  if (plVar6 != (long *)0x0) {
    *(undefined1 *)(plVar6 + 1) = 0;
    puVar2 = PTR_DAT_04bce958;
    plVar6[3] = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    plVar6[9] = 0;
    plVar6[7] = 0;
    plVar6[8] = 0;
    *(undefined1 *)(plVar6 + 0xc) = 0;
    plVar6[0xf] = 0;
    *plVar6 = (long)(puVar2 + 0x10);
    plVar6[0xb] = (long)&PTR_LAB_048496f8;
    plVar6[0xe] = 0;
    plVar6[0xd] = (long)(plVar6 + 0xe);
    FUN_00186524(plVar6 + 0x10);
    *(undefined1 *)(plVar6 + 0x12) = 0;
    *(undefined1 *)(plVar6 + 0x18) = 0;
    plVar6[0x14] = (long)(plVar6 + 0x12);
    plVar6[0x15] = 0x10;
    plVar6[0x11] = (long)&PTR_LAB_04a426b8;
    plVar6[0x17] = (long)&PTR_LAB_04a426b8;
    plVar6[0x1e] = (long)&PTR_LAB_04a426b8;
    *(undefined1 *)(plVar6 + 0x1f) = 0;
    plVar6[0x1a] = (long)(plVar6 + 0x18);
    plVar6[0x1b] = 0x10;
    plVar6[0x21] = (long)(plVar6 + 0x1f);
    plVar6[0x22] = 0x10;
    *plVar6 = (long)&PTR_FUN_04849920;
    FUN_002d5154(plVar6);
  }
  param_1[0x1a] = (long)plVar6;
  uVar3 = FUN_0021f454();
  lVar4 = FUN_00285d10(0xd8,uVar3);
  if (lVar4 != 0) {
    FUN_0031430c(lVar4);
  }
  param_1[0x1b] = lVar4;
  uVar3 = FUN_0021f454();
  lVar4 = FUN_00285d10(0x18,uVar3);
  if (lVar4 != 0) {
    *(long *)lVar4 = lVar4;
    *(long *)(lVar4 + 8) = lVar4;
    *(undefined8 *)(lVar4 + 0x10) = 0;
  }
  lVar7 = *(long *)(DAT_04c60f48 + 0x188);
  param_1[0x1c] = lVar4;
  param_1[0x1d] = lVar7;
  uVar3 = FUN_0021f454();
  lVar4 = FUN_00285d10(0x18,uVar3);
  if (lVar4 != 0) {
    *(long *)lVar4 = lVar4;
    *(long *)(lVar4 + 8) = lVar4;
    *(undefined8 *)(lVar4 + 0x10) = 0;
  }
  param_1[0x1e] = lVar4;
  uVar3 = FUN_0021f454();
  puVar5 = (undefined8 *)FUN_00285d10(0x18,uVar3);
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar5 + 1) = 0;
    *puVar5 = &PTR_FUN_04a42f10;
    *(undefined8 *)((long)puVar5 + 0xc) = 0x1400000000;
  }
  lVar4 = DAT_04c60f48;
  param_1[0x1f] = (long)puVar5;
  param_1[0x14] = *(long *)(lVar4 + 0x178);
  uVar3 = FUN_0021f454();
  lVar4 = FUN_00285d10(0x18,uVar3);
  if (lVar4 != 0) {
    *(long *)lVar4 = lVar4;
    *(long *)(lVar4 + 8) = lVar4;
    *(undefined8 *)(lVar4 + 0x10) = 0;
  }
  param_1[0x25] = lVar4;
  uVar3 = FUN_0021f454();
  lVar4 = FUN_00285d10(0x90,uVar3);
  if (lVar4 != 0) {
    FUN_001e1500(lVar4);
  }
  param_1[0x26] = lVar4;
  uVar3 = FUN_0021f454();
  lVar4 = FUN_00285d10(0x18,uVar3);
  if (lVar4 != 0) {
    *(long *)lVar4 = lVar4;
    *(long *)(lVar4 + 8) = lVar4;
    *(undefined8 *)(lVar4 + 0x10) = 0;
  }
  param_1[0x20] = lVar4;
  uVar3 = FUN_0021f454();
  plVar6 = (long *)FUN_00285d10(0x40,uVar3);
  if (plVar6 != (long *)0x0) {
    *(undefined1 *)(plVar6 + 1) = 0;
    puVar2 = PTR_DAT_04bce968;
    *(undefined1 *)(plVar6 + 7) = 0;
    plVar6[3] = (long)(plVar6 + 2);
    plVar6[4] = 0;
    plVar6[2] = (long)(plVar6 + 2);
    plVar6[6] = (long)(puVar1 + 0x10);
    *(undefined4 *)(plVar6 + 5) = 0;
    *plVar6 = (long)(puVar2 + 0x10);
    *(undefined4 *)((long)plVar6 + 0x3c) = 3;
  }
  param_1[0x21] = (long)plVar6;
  uVar3 = FUN_0021f454();
  plVar6 = (long *)FUN_00285d10(0x10,uVar3);
  if (plVar6 != (long *)0x0) {
    *(undefined1 *)(plVar6 + 1) = 0;
    *plVar6 = (long)(puVar1 + 0x10);
    *(undefined4 *)((long)plVar6 + 0xc) = 3;
  }
  param_1[0x22] = (long)plVar6;
  memset(param_1 + 0xad,0,0x20);
  return;
}

