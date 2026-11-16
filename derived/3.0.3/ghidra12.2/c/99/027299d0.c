
void FUN_027299d0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined *puVar10;
  undefined8 *__s;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  int iVar21;
  long *plVar22;
  long *plVar23;
  
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &DAT_04a882a8;
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar12 = *(long *)(param_2 + 0x18);
    *(undefined8 **)(param_2 + 0x18) = param_1;
    if (lVar12 != 0) {
      param_1[4] = lVar12;
    }
  }
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  plVar11 = param_1 + 0x9f63;
  param_1[10] = 0;
  param_1[0xb] = 0;
  plVar20 = param_1 + 0x9df7;
  plVar19 = param_1 + 0x9c8b;
  plVar18 = param_1 + 0x9b1f;
  plVar1 = param_1 + 0x99b3;
  plVar2 = param_1 + 0x9847;
  plVar3 = param_1 + 0x96db;
  *param_1 = &PTR_LAB_04a8b988;
  plVar4 = param_1 + 0x956f;
  plVar5 = param_1 + 0x9403;
  param_1[8] = 0;
  param_1[9] = param_1[2] + 8;
  plVar6 = param_1 + 0x9297;
  plVar7 = param_1 + 0x912b;
  plVar8 = param_1 + 0x8fbf;
  plVar9 = param_1 + 0x8e4c;
  if (param_1[3] != 0) {
    param_1[0xb] = param_1[3];
  }
  puVar14 = param_1 + 0xe;
  *puVar14 = &PTR_LAB_04a8ba20;
  param_1[7] = &DAT_04a8b9b8;
  lVar12 = param_1[2] + 0x1b0;
  param_1[0xf] = 0;
  param_1[0x10] = lVar12;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  plVar23 = param_1 + 0x1c;
  puVar10 = PTR_DAT_04bc35d8 + 0x10;
  param_1[3] = puVar14;
  plVar15 = param_1 + 0x15;
  *plVar15 = (long)puVar10;
  param_1[0x16] = 0;
  param_1[0x17] = lVar12;
  plVar16 = param_1 + 0x18;
  *plVar16 = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x11] = plVar15;
  param_1[0x12] = param_1 + 7;
  memset(plVar23,0,0x47180);
  lVar17 = 100;
  puVar10 = PTR_DAT_04bb4c30 + 0x10;
  plVar22 = plVar23;
  do {
    FUN_007e9590(plVar22,0,0);
    *plVar22 = (long)puVar10;
    lVar17 = lVar17 + -1;
    plVar22 = plVar22 + 0x16c;
  } while (lVar17 != 0);
  iVar21 = 0;
  *plVar15 = (long)&PTR_LAB_04a8a0d0;
  lVar17 = 100;
  do {
    lVar13 = *plVar16;
    plVar22 = plVar23 + (long)iVar21 * 0x16c;
    *plVar16 = (long)plVar22;
    if (lVar13 != 0) {
      plVar22[4] = lVar13;
    }
    plVar22[2] = lVar12 + plVar22[2];
    FUN_026400e0(plVar22,lVar12);
    iVar21 = iVar21 + 1;
    lVar17 = lVar17 + -1;
    lVar12 = lVar12 + 0x2a8;
  } while (lVar17 != 0);
  lVar17 = param_1[0x10];
  lVar13 = param_1[0x11];
  *(undefined1 *)(param_1 + 0x8e52) = 0;
  plVar23 = param_1 + 0x8e4f;
  *plVar23 = 0;
  param_1[0x8e50] = 0;
  param_1[0x8e51] = 0;
  lVar12 = lVar17 + 68000;
  param_1[0x11] = plVar9;
  param_1[0x8e4d] = 0;
  param_1[0x8e4e] = lVar12;
  if (lVar13 != 0) {
    param_1[0x8e50] = lVar13;
  }
  __s = param_1 + 0x8e53;
  *plVar9 = (long)(PTR_DAT_04bc35d8 + 0x10);
  memset(__s,0,0x8880);
  FUN_007e9590(__s,0,0);
  puVar10 = PTR_DAT_04bb4c30 + 0x10;
  param_1[0x8e53] = puVar10;
  FUN_007e9590(plVar8,0,0);
  *plVar8 = (long)puVar10;
  FUN_007e9590(plVar7,0,0);
  *plVar7 = (long)puVar10;
  FUN_007e9590(plVar6,0,0);
  *plVar6 = (long)puVar10;
  FUN_007e9590(plVar5,0,0);
  *plVar5 = (long)puVar10;
  FUN_007e9590(plVar4,0,0);
  *plVar4 = (long)puVar10;
  FUN_007e9590(plVar3,0,0);
  *plVar3 = (long)puVar10;
  FUN_007e9590(plVar2,0,0);
  *plVar2 = (long)puVar10;
  FUN_007e9590(plVar1,0,0);
  *plVar1 = (long)puVar10;
  FUN_007e9590(plVar18,0,0);
  *plVar18 = (long)puVar10;
  FUN_007e9590(plVar19,0,0);
  *plVar19 = (long)puVar10;
  FUN_007e9590(plVar20,0,0);
  *plVar20 = (long)puVar10;
  *plVar9 = (long)&PTR_LAB_04a8ba50;
  lVar13 = param_1[0x8e4f];
  param_1[0x8e4f] = __s;
  if (lVar13 != 0) {
    param_1[0x8e57] = lVar13;
  }
  param_1[0x8e55] = param_1[0x8e55] + lVar12;
  FUN_026400e0(__s,lVar12);
  lVar12 = param_1[0x8e4f];
  param_1[0x8e4f] = plVar8;
  if (lVar12 != 0) {
    param_1[0x8fc3] = lVar12;
  }
  param_1[0x8fc1] = param_1[0x8fc1] + lVar17 + 0x10c48;
  FUN_026400e0(plVar8);
  lVar12 = *plVar23;
  *plVar23 = (long)plVar7;
  if (lVar12 != 0) {
    param_1[0x912f] = lVar12;
  }
  param_1[0x912d] = param_1[0x912d] + lVar17 + 0x10ef0;
  FUN_026400e0();
  lVar12 = *plVar23;
  *plVar23 = (long)plVar6;
  if (lVar12 != 0) {
    param_1[0x929b] = lVar12;
  }
  param_1[0x9299] = param_1[0x9299] + lVar17 + 0x11198;
  FUN_026400e0();
  lVar12 = *plVar23;
  *plVar23 = (long)plVar5;
  if (lVar12 != 0) {
    param_1[0x9407] = lVar12;
  }
  param_1[0x9405] = param_1[0x9405] + lVar17 + 0x11440;
  FUN_026400e0();
  lVar12 = *plVar23;
  *plVar23 = (long)plVar4;
  if (lVar12 != 0) {
    param_1[0x9573] = lVar12;
  }
  param_1[0x9571] = param_1[0x9571] + lVar17 + 0x116e8;
  FUN_026400e0();
  lVar12 = *plVar23;
  *plVar23 = (long)plVar3;
  if (lVar12 != 0) {
    param_1[0x96df] = lVar12;
  }
  param_1[0x96dd] = param_1[0x96dd] + lVar17 + 0x11990;
  FUN_026400e0();
  lVar12 = *plVar23;
  *plVar23 = (long)plVar2;
  if (lVar12 != 0) {
    param_1[0x984b] = lVar12;
  }
  param_1[0x9849] = param_1[0x9849] + lVar17 + 0x11c38;
  FUN_026400e0();
  lVar12 = *plVar23;
  *plVar23 = (long)plVar1;
  if (lVar12 != 0) {
    param_1[0x99b7] = lVar12;
  }
  param_1[0x99b5] = param_1[0x99b5] + lVar17 + 0x11ee0;
  FUN_026400e0();
  lVar12 = *plVar23;
  *plVar23 = (long)plVar18;
  if (lVar12 != 0) {
    param_1[0x9b23] = lVar12;
  }
  param_1[0x9b21] = param_1[0x9b21] + lVar17 + 0x12188;
  FUN_026400e0();
  lVar12 = *plVar23;
  *plVar23 = (long)plVar19;
  if (lVar12 != 0) {
    param_1[0x9c8f] = lVar12;
  }
  param_1[0x9c8d] = param_1[0x9c8d] + lVar17 + 0x12430;
  FUN_026400e0(plVar19);
  lVar12 = *plVar23;
  *plVar23 = (long)plVar20;
  if (lVar12 != 0) {
    param_1[0x9dfb] = lVar12;
  }
  param_1[0x9df9] = param_1[0x9df9] + lVar17 + 0x126d8;
  FUN_026400e0(plVar20);
  lVar17 = param_1[0x11];
  plVar20 = param_1 + 0x9f66;
  *plVar20 = 0;
  param_1[0x9f67] = 0;
  param_1[0x9f68] = 0;
  *(undefined1 *)(param_1 + 0x9f69) = 0;
  param_1[0x11] = plVar11;
  lVar12 = param_1[0x10] + 0x12980;
  param_1[0x9f64] = 0;
  param_1[0x9f65] = lVar12;
  if (lVar17 != 0) {
    param_1[0x9f67] = lVar17;
  }
  plVar18 = param_1 + 0x9f6a;
  *plVar11 = (long)(PTR_DAT_04bc35d8 + 0x10);
  memset(plVar18,0,0x45ba0);
  lVar17 = 100;
  puVar10 = PTR_DAT_04bb4c48 + 0x10;
  plVar19 = plVar18;
  do {
    FUN_007e9bd0(plVar19,0,0);
    *plVar19 = (long)puVar10;
    lVar17 = lVar17 + -1;
    plVar19 = plVar19 + 0x165;
  } while (lVar17 != 0);
  *plVar11 = (long)&PTR_LAB_04a8a100;
  lVar17 = 100;
  iVar21 = 0;
  do {
    lVar13 = *plVar20;
    plVar11 = plVar18 + (long)iVar21 * 0x165;
    *plVar20 = (long)plVar11;
    if (lVar13 != 0) {
      plVar11[4] = lVar13;
    }
    plVar11[2] = lVar12 + plVar11[2];
    FUN_026400e0(plVar11,lVar12);
    iVar21 = iVar21 + 1;
    lVar17 = lVar17 + -1;
    lVar12 = lVar12 + 0x8a8;
  } while (lVar17 != 0);
  FUN_027223b0(param_1 + 0x12ade,puVar14,param_1[0x10] + 0x48b20);
  param_1[0x12ade] = &PTR_LAB_04a89bb0;
  param_1[0xe] = &PTR_LAB_04a8b9f0;
  param_1[0x1306c] = 0;
  param_1[0x1306d] = param_1[2] + 0x48d98;
  param_1[0x1306e] = 0;
  param_1[0x1306f] = 0;
  param_1[0x13070] = 0;
  *(undefined1 *)(param_1 + 0x13071) = 0;
  if (param_1[3] != 0) {
    param_1[0x1306f] = param_1[3];
  }
  *(undefined1 *)(param_1 + 0x13078) = 0;
  lVar12 = param_1[2] + 0x48db4;
  param_1[0x1306b] = &DAT_04a8ba80;
  param_1[0x13073] = 0;
  param_1[0x13074] = lVar12;
  param_1[3] = param_1 + 0x13072;
  param_1[0x13076] = param_1 + 0x1306b;
  param_1[0x13077] = 0;
  plVar11 = param_1 + 0x13075;
  *plVar11 = 0;
  memset(param_1 + 0x13079,0,0xd20);
  lVar17 = 0;
  do {
    puVar14 = (undefined8 *)((long)param_1 + lVar17 + 0x98440);
    lVar17 = lVar17 + 0xa8;
    *(undefined1 *)(puVar14 + -9) = 0;
    puVar14[-0xb] = 0;
    puVar14[-10] = 0;
    *(undefined1 *)(puVar14 + -2) = 0;
    puVar14[4] = 0;
    *(undefined1 *)(puVar14 + 5) = 0;
    puVar14[-1] = &DAT_04a8cdf0;
    puVar14[-0xd] = 0;
    puVar14[-0xc] = 0;
    puVar14[-0xf] = &DAT_04a8cdf0;
    puVar14[-0xe] = 0;
    puVar14[-6] = 0;
    puVar14[-5] = 0;
    puVar14[-4] = 0;
    puVar14[-3] = 0;
    puVar14[-8] = &DAT_04a8cdf0;
    puVar14[-7] = 0;
    *puVar14 = 0;
    puVar14[1] = 0;
    puVar14[2] = 0;
    puVar14[3] = 0;
  } while (lVar17 != 0xd20);
  param_1[0x13072] = &PTR_LAB_04a8cdc0;
  lVar17 = 0;
  iVar21 = 0;
  do {
    lVar13 = *plVar11;
    puVar14 = param_1 + 0x13079 + (long)iVar21 * 7;
    *plVar11 = (long)puVar14;
    if (lVar13 != 0) {
      puVar14[4] = lVar13;
    }
    puVar14[2] = lVar12 + lVar17 + puVar14[2];
    FUN_026400e0();
    lVar17 = lVar17 + 0x20;
    iVar21 = iVar21 + 1;
  } while (lVar17 != 0x780);
  lVar12 = param_1[2];
  lVar17 = param_1[3];
  plVar11 = param_1 + 0x13220;
  *plVar11 = 0;
  param_1[0x13221] = 0;
  param_1[0x13222] = 0;
  *(undefined1 *)(param_1 + 0x13223) = 0;
  param_1[3] = param_1 + 0x1321d;
  param_1[0x1321e] = 0;
  param_1[0x1321f] = lVar12 + 0x49534;
  if (lVar17 != 0) {
    param_1[0x13221] = lVar17;
  }
  memset(param_1 + 0x13224,0,0xf18);
  lVar17 = 0;
  do {
    puVar14 = (undefined8 *)((long)param_1 + lVar17 + 0x99198);
    lVar17 = lVar17 + 0xa8;
    *(undefined1 *)(puVar14 + -9) = 0;
    puVar14[-0xb] = 0;
    puVar14[-10] = 0;
    *(undefined1 *)(puVar14 + -2) = 0;
    puVar14[4] = 0;
    *(undefined1 *)(puVar14 + 5) = 0;
    puVar14[-1] = &DAT_04a8cdf0;
    puVar14[-0xd] = 0;
    puVar14[-0xc] = 0;
    puVar14[-0xf] = &DAT_04a8cdf0;
    puVar14[-0xe] = 0;
    puVar14[-6] = 0;
    puVar14[-5] = 0;
    puVar14[-4] = 0;
    puVar14[-3] = 0;
    puVar14[-8] = &DAT_04a8cdf0;
    puVar14[-7] = 0;
    *puVar14 = 0;
    puVar14[1] = 0;
    puVar14[2] = 0;
    puVar14[3] = 0;
  } while (lVar17 != 0xf18);
  lVar17 = 0;
  iVar21 = 0;
  param_1[0x1321d] = &PTR_LAB_04a8ce20;
  do {
    lVar13 = *plVar11;
    puVar14 = param_1 + 0x13224 + (long)iVar21 * 7;
    *plVar11 = (long)puVar14;
    if (lVar13 != 0) {
      puVar14[4] = lVar13;
    }
    puVar14[2] = lVar12 + 0x49534 + lVar17 + puVar14[2];
    FUN_026400e0();
    lVar17 = lVar17 + 0x20;
    iVar21 = iVar21 + 1;
  } while (lVar17 != 0x8a0);
  return;
}

