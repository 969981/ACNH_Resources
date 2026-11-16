
void FUN_02723430(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  int iVar17;
  long *plVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  long lVar25;
  long *plVar26;
  
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &DAT_04a882a8;
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar13 = *(long *)(param_2 + 0x18);
    *(undefined8 **)(param_2 + 0x18) = param_1;
    if (lVar13 != 0) {
      param_1[4] = lVar13;
    }
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  puVar1 = param_1 + 0x1269a;
  plVar15 = param_1 + 10;
  *plVar15 = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  plVar2 = param_1 + 0x12654;
  plVar26 = param_1 + 0x124ef;
  plVar3 = param_1 + 0x1238a;
  plVar4 = param_1 + 0x12225;
  plVar5 = param_1 + 0x11f5b;
  plVar6 = param_1 + 0x120c0;
  plVar7 = param_1 + 0x11df6;
  *param_1 = &PTR_LAB_04a8a0a0;
  lVar13 = param_1[2];
  lVar25 = param_1[3];
  plVar8 = param_1 + 0x11c91;
  plVar9 = param_1 + 0x11b25;
  param_1[8] = 0;
  param_1[9] = lVar13;
  plVar11 = param_1 + 0x8e3e;
  param_1[3] = param_1 + 7;
  if (lVar25 != 0) {
    param_1[0xb] = lVar25;
  }
  plVar19 = param_1 + 0xe;
  param_1[7] = PTR_DAT_04bc35d8 + 0x10;
  memset(plVar19,0,0x47180);
  lVar25 = 100;
  puVar10 = PTR_DAT_04bb4c30 + 0x10;
  plVar18 = plVar19;
  do {
    FUN_007e9590(plVar18,0,0);
    *plVar18 = (long)puVar10;
    lVar25 = lVar25 + -1;
    plVar18 = plVar18 + 0x16c;
  } while (lVar25 != 0);
  iVar17 = 0;
  lVar25 = 100;
  param_1[7] = &PTR_LAB_04a8a0d0;
  do {
    lVar14 = *plVar15;
    plVar18 = plVar19 + (long)iVar17 * 0x16c;
    *plVar15 = (long)plVar18;
    if (lVar14 != 0) {
      plVar18[4] = lVar14;
    }
    plVar18[2] = lVar13 + plVar18[2];
    FUN_026400e0(plVar18,lVar13);
    iVar17 = iVar17 + 1;
    lVar25 = lVar25 + -1;
    lVar13 = lVar13 + 0x2a8;
  } while (lVar25 != 0);
  lVar25 = param_1[3];
  plVar15 = param_1 + 0x8e41;
  *plVar15 = 0;
  param_1[0x8e42] = 0;
  param_1[0x8e43] = 0;
  *(undefined1 *)(param_1 + 0x8e44) = 0;
  param_1[3] = plVar11;
  lVar13 = param_1[2] + 68000;
  param_1[0x8e3f] = 0;
  param_1[0x8e40] = lVar13;
  if (lVar25 != 0) {
    param_1[0x8e42] = lVar25;
  }
  plVar18 = param_1 + 0x8e45;
  *plVar11 = (long)(PTR_DAT_04bc35d8 + 0x10);
  memset(plVar18,0,0x45ba0);
  lVar25 = 100;
  puVar10 = PTR_DAT_04bb4c48 + 0x10;
  plVar19 = plVar18;
  do {
    FUN_007e9bd0(plVar19,0,0);
    *plVar19 = (long)puVar10;
    lVar25 = lVar25 + -1;
    plVar19 = plVar19 + 0x165;
  } while (lVar25 != 0);
  iVar17 = 0;
  *plVar11 = (long)&PTR_LAB_04a8a100;
  lVar25 = 100;
  do {
    lVar14 = *plVar15;
    plVar11 = plVar18 + (long)iVar17 * 0x165;
    *plVar15 = (long)plVar11;
    if (lVar14 != 0) {
      plVar11[4] = lVar14;
    }
    plVar11[2] = lVar13 + plVar11[2];
    FUN_026400e0(plVar11,lVar13);
    iVar17 = iVar17 + 1;
    lVar25 = lVar25 + -1;
    lVar13 = lVar13 + 0x8a8;
  } while (lVar25 != 0);
  FUN_007e9590(param_1 + 0x119b9,param_1,param_1[2] + 0x46b40);
  plVar11 = param_1 + 0x11b28;
  *plVar11 = 0;
  puVar10 = PTR_DAT_04bb4c30;
  param_1[0x11b29] = 0;
  param_1[0x11b2a] = 0;
  *(undefined1 *)(param_1 + 0x11b2b) = 0;
  param_1[0x119b9] = puVar10 + 0x10;
  lVar25 = param_1[2];
  lVar14 = param_1[3];
  param_1[3] = plVar9;
  lVar13 = lVar25 + 0x46de8;
  param_1[0x11b26] = 0;
  param_1[0x11b27] = lVar13;
  if (lVar14 != 0) {
    param_1[0x11b29] = lVar14;
  }
  puVar12 = param_1 + 0x11b2c;
  *plVar9 = (long)(PTR_DAT_04bc35d8 + 0x10);
  memset(puVar12,0,0x5940);
  FUN_007e9bd0(puVar12,0,0);
  puVar10 = PTR_DAT_04bb4c48 + 0x10;
  param_1[0x11b2c] = puVar10;
  FUN_007e9bd0(plVar8,0,0);
  *plVar8 = (long)puVar10;
  FUN_007e9bd0(plVar7,0,0);
  *plVar7 = (long)puVar10;
  FUN_007e9bd0(plVar5,0,0);
  *plVar5 = (long)puVar10;
  FUN_007e9bd0(plVar6,0,0);
  *plVar6 = (long)puVar10;
  FUN_007e9bd0(plVar4,0,0);
  *plVar4 = (long)puVar10;
  FUN_007e9bd0(plVar3,0,0);
  *plVar3 = (long)puVar10;
  FUN_007e9bd0(plVar26,0,0);
  *plVar26 = (long)puVar10;
  *plVar9 = (long)&PTR_LAB_04a8a130;
  lVar14 = param_1[0x11b28];
  param_1[0x11b28] = puVar12;
  if (lVar14 != 0) {
    param_1[0x11b30] = lVar14;
  }
  param_1[0x11b2e] = param_1[0x11b2e] + lVar13;
  FUN_026400e0(puVar12,lVar13);
  lVar13 = param_1[0x11b28];
  param_1[0x11b28] = plVar8;
  if (lVar13 != 0) {
    param_1[0x11c95] = lVar13;
  }
  param_1[0x11c93] = param_1[0x11c93] + lVar25 + 0x47690;
  FUN_026400e0();
  lVar13 = *plVar11;
  *plVar11 = (long)plVar7;
  if (lVar13 != 0) {
    param_1[0x11dfa] = lVar13;
  }
  param_1[0x11df8] = param_1[0x11df8] + lVar25 + 0x47f38;
  FUN_026400e0();
  lVar13 = *plVar11;
  *plVar11 = (long)plVar5;
  if (lVar13 != 0) {
    param_1[0x11f5f] = lVar13;
  }
  param_1[0x11f5d] = param_1[0x11f5d] + lVar25 + 0x487e0;
  FUN_026400e0();
  lVar13 = *plVar11;
  *plVar11 = (long)plVar6;
  if (lVar13 != 0) {
    param_1[0x120c4] = lVar13;
  }
  param_1[0x120c2] = param_1[0x120c2] + lVar25 + 0x49088;
  FUN_026400e0();
  lVar13 = *plVar11;
  *plVar11 = (long)plVar4;
  if (lVar13 != 0) {
    param_1[0x12229] = lVar13;
  }
  param_1[0x12227] = param_1[0x12227] + lVar25 + 0x49930;
  FUN_026400e0();
  lVar13 = *plVar11;
  *plVar11 = (long)plVar3;
  if (lVar13 != 0) {
    param_1[0x1238e] = lVar13;
  }
  param_1[0x1238c] = param_1[0x1238c] + lVar25 + 0x4a1d8;
  FUN_026400e0();
  lVar13 = *plVar11;
  *plVar11 = (long)plVar26;
  if (lVar13 != 0) {
    param_1[0x124f3] = lVar13;
  }
  param_1[0x124f1] = param_1[0x124f1] + lVar25 + 0x4aa80;
  FUN_026400e0(plVar26);
  plVar26 = param_1 + 0x12657;
  *plVar26 = 0;
  puVar10 = PTR_DAT_04bc35c8;
  param_1[0x12658] = 0;
  param_1[0x12659] = 0;
  *(undefined1 *)(param_1 + 0x1265a) = 0;
  *plVar2 = (long)(puVar10 + 0x10);
  param_1[0x12655] = 0;
  lVar25 = param_1[2];
  lVar14 = param_1[3];
  param_1[3] = plVar2;
  lVar13 = lVar25 + 0x4b328;
  param_1[0x12656] = lVar13;
  if (lVar14 != 0) {
    param_1[0x12658] = lVar14;
  }
  memset(param_1 + 0x1265c,0,0x538);
  param_1[0x12662] = &DAT_04a8fbd0;
  *(undefined1 *)(param_1 + 0x1266f) = 0;
  param_1[0x1266d] = 0;
  param_1[0x1266e] = 0;
  param_1[0x1266d] = param_1 + 0x12662;
  param_1[0x12677] = &DAT_04a8fbd0;
  param_1[0x12680] = 8;
  param_1[0x1267e] = &DAT_04a8fbd0;
  param_1[0x12682] = 0;
  param_1[0x12683] = 0;
  *(undefined1 *)(param_1 + 0x12684) = 0;
  param_1[0x12682] = param_1 + 0x12677;
  puVar20 = param_1 + 0x12685;
  *puVar20 = &PTR_LAB_04a8a190;
  param_1[0x12675] = 0;
  *(undefined1 *)(param_1 + 0x12676) = 0;
  *(undefined1 *)(param_1 + 0x12699) = 0;
  param_1[0x12697] = 0;
  param_1[0x12698] = 0;
  *(undefined1 *)(param_1 + 0x126ae) = 0;
  param_1[0x12669] = &DAT_04a8fbd0;
  param_1[0x126ad] = 0;
  param_1[0x126ac] = 0;
  param_1[0x1265e] = param_1 + 0x12669;
  *(undefined1 *)(param_1 + 0x126c3) = 0;
  param_1[0x126c2] = 0;
  param_1[0x12693] = &DAT_04a8fbd0;
  param_1[0x126c1] = 0;
  param_1[0x1268a] = 0;
  *(undefined1 *)(param_1 + 0x1268b) = 0;
  *(undefined1 *)(param_1 + 0x126a0) = 0;
  param_1[0x1269f] = 0;
  param_1[0x1269e] = 0;
  param_1[0x1269d] = 0;
  *(undefined1 *)(param_1 + 0x126d8) = 0;
  param_1[0x126d7] = 0;
  param_1[0x126d6] = 0;
  param_1[0x126aa] = 8;
  param_1[0x126a8] = &DAT_04a8fbd0;
  puVar12 = param_1 + 0x1265b;
  *puVar12 = &PTR_LAB_04a8a190;
  puVar16 = param_1 + 0x12670;
  *puVar16 = &PTR_LAB_04a8a190;
  *puVar1 = &PTR_LAB_04a8a190;
  *(undefined1 *)(param_1 + 0x126b5) = 0;
  param_1[0x126b4] = 0;
  param_1[0x126b3] = 0;
  param_1[0x126b2] = 0;
  param_1[0x126bf] = 8;
  param_1[0x126b2] = param_1 + 0x126bd;
  param_1[0x126bd] = &DAT_04a8fbd0;
  *(undefined1 *)(param_1 + 0x126ca) = 0;
  param_1[0x126c9] = 0;
  param_1[0x126c8] = 0;
  param_1[0x126c7] = 0;
  param_1[0x126d4] = 8;
  param_1[0x126d2] = &DAT_04a8fbd0;
  *(undefined1 *)(param_1 + 0x126df) = 0;
  puVar22 = param_1 + 0x126c4;
  *puVar22 = &PTR_LAB_04a8a190;
  param_1[0x126de] = 0;
  param_1[0x126dd] = 0;
  param_1[0x126dc] = 0;
  puVar24 = param_1 + 0x126ee;
  *puVar24 = &PTR_LAB_04a8a190;
  param_1[0x1266b] = 8;
  param_1[0x1266c] = 0;
  param_1[0x1267c] = 0;
  *(undefined1 *)(param_1 + 0x1267d) = 0;
  param_1[0x12681] = 0;
  param_1[0x12691] = 0;
  *(undefined1 *)(param_1 + 0x12692) = 0;
  param_1[0x12695] = 8;
  param_1[0x12696] = 0;
  param_1[0x1269c] = 0;
  param_1[0x1269b] = 0;
  *(undefined1 *)(param_1 + 0x126a7) = 0;
  param_1[0x126a6] = 0;
  param_1[0x126a5] = 0;
  param_1[0x126a4] = 0;
  param_1[0x126a3] = 0;
  param_1[0x126a2] = 0;
  param_1[0x126ab] = 0;
  param_1[0x126b1] = 0;
  param_1[0x126b0] = 0;
  *(undefined1 *)(param_1 + 0x126bc) = 0;
  param_1[0x126bb] = 0;
  param_1[0x126ba] = 0;
  param_1[0x126b9] = 0;
  param_1[0x126b8] = 0;
  param_1[0x126b7] = 0;
  param_1[0x126c0] = 0;
  param_1[0x126c6] = 0;
  param_1[0x126c5] = 0;
  *(undefined1 *)(param_1 + 0x126d1) = 0;
  param_1[0x126d0] = 0;
  param_1[0x126cf] = 0;
  param_1[0x126ce] = 0;
  param_1[0x126cd] = 0;
  param_1[0x126cc] = 0;
  param_1[0x126d5] = 0;
  param_1[0x126db] = 0;
  param_1[0x126da] = 0;
  *(undefined1 *)(param_1 + 0x126e6) = 0;
  param_1[0x126e5] = 0;
  param_1[0x126e4] = 0;
  param_1[0x126e3] = 0;
  param_1[0x126e2] = 0;
  param_1[0x126e1] = 0;
  param_1[0x126e0] = &DAT_04a8fbd0;
  param_1[0x126e9] = 8;
  *(undefined1 *)(param_1 + 0x126ed) = 0;
  param_1[0x126ec] = 0;
  param_1[0x126eb] = 0;
  param_1[0x126ea] = 0;
  param_1[0x126eb] = param_1 + 0x126e0;
  param_1[0x126e7] = &DAT_04a8fbd0;
  *(undefined1 *)(param_1 + 0x126f4) = 0;
  param_1[0x126f3] = 0;
  param_1[0x126f2] = 0;
  param_1[0x126f1] = 0;
  param_1[0x126f0] = 0;
  param_1[0x126ef] = 0;
  *(undefined1 *)(param_1 + 0x126fb) = 0;
  param_1[0x126fa] = 0;
  param_1[0x126f9] = 0;
  param_1[0x126f8] = 0;
  param_1[0x126f7] = 0;
  param_1[0x126f6] = 0;
  param_1[0x126fe] = 8;
  *(undefined1 *)(param_1 + 0x12702) = 0;
  param_1[0x12701] = 0;
  param_1[0x12700] = 0;
  param_1[0x126ff] = 0;
  param_1[0x126fc] = &DAT_04a8fbd0;
  param_1[0x12673] = 0;
  param_1[0x12674] = 0;
  param_1[0x12673] = param_1 + 0x1267e;
  param_1[0x1268c] = &DAT_04a8fbd0;
  param_1[0x12697] = param_1 + 0x1268c;
  param_1[0x126a1] = &DAT_04a8fbd0;
  param_1[0x126ac] = param_1 + 0x126a1;
  param_1[0x126b6] = &DAT_04a8fbd0;
  param_1[0x126c1] = param_1 + 0x126b6;
  param_1[0x126cb] = &DAT_04a8fbd0;
  param_1[0x126d6] = param_1 + 0x126cb;
  param_1[0x126dc] = param_1 + 0x126e7;
  param_1[0x12688] = 0;
  param_1[0x12689] = 0;
  param_1[0x12688] = param_1 + 0x12693;
  param_1[0x1269d] = param_1 + 0x126a8;
  param_1[0x126c7] = param_1 + 0x126d2;
  puVar21 = param_1 + 0x126af;
  *puVar21 = &PTR_LAB_04a8a190;
  puVar23 = param_1 + 0x126d9;
  *puVar23 = &PTR_LAB_04a8a190;
  *plVar2 = (long)&PTR_LAB_04a8a160;
  lVar14 = param_1[0x12657];
  param_1[0x126f1] = param_1 + 0x126fc;
  param_1[0x12657] = puVar12;
  param_1[0x126f5] = &DAT_04a8fbd0;
  param_1[0x12700] = param_1 + 0x126f5;
  param_1[0x12671] = 0;
  param_1[0x12672] = 0;
  param_1[0x12678] = 0;
  param_1[0x12679] = 0;
  param_1[0x1267a] = 0;
  param_1[0x1267b] = 0;
  param_1[0x12686] = 0;
  param_1[0x12687] = 0;
  param_1[0x1268d] = 0;
  param_1[0x1268e] = 0;
  param_1[0x1268f] = 0;
  param_1[0x12690] = 0;
  if (lVar14 != 0) {
    param_1[0x1265f] = lVar14;
  }
  param_1[0x1265d] = param_1[0x1265d] + lVar13;
  FUN_026400e0(puVar12,lVar13);
  lVar13 = param_1[0x12657];
  param_1[0x12657] = puVar16;
  if (lVar13 != 0) {
    param_1[0x12674] = lVar13;
  }
  param_1[0x12672] = param_1[0x12672] + lVar25 + 0x4b338;
  FUN_026400e0(puVar16);
  lVar13 = param_1[0x12657];
  param_1[0x12657] = puVar20;
  if (lVar13 != 0) {
    param_1[0x12689] = lVar13;
  }
  param_1[0x12687] = param_1[0x12687] + lVar25 + 0x4b348;
  FUN_026400e0(puVar20);
  lVar13 = *plVar26;
  *plVar26 = (long)puVar1;
  if (lVar13 != 0) {
    param_1[0x1269e] = lVar13;
  }
  param_1[0x1269c] = param_1[0x1269c] + lVar25 + 0x4b358;
  FUN_026400e0(puVar1);
  lVar13 = *plVar26;
  *plVar26 = (long)puVar21;
  if (lVar13 != 0) {
    param_1[0x126b3] = lVar13;
  }
  param_1[0x126b1] = param_1[0x126b1] + lVar25 + 0x4b368;
  FUN_026400e0(puVar21);
  lVar13 = *plVar26;
  *plVar26 = (long)puVar22;
  if (lVar13 != 0) {
    param_1[0x126c8] = lVar13;
  }
  param_1[0x126c6] = param_1[0x126c6] + lVar25 + 0x4b378;
  FUN_026400e0(puVar22);
  lVar13 = *plVar26;
  *plVar26 = (long)puVar23;
  if (lVar13 != 0) {
    param_1[0x126dd] = lVar13;
  }
  param_1[0x126db] = param_1[0x126db] + lVar25 + 0x4b388;
  FUN_026400e0(puVar23);
  lVar13 = *plVar26;
  *plVar26 = (long)puVar24;
  if (lVar13 != 0) {
    param_1[0x126f2] = lVar13;
  }
  param_1[0x126f0] = param_1[0x126f0] + lVar25 + 0x4b398;
  FUN_026400e0(puVar24);
  return;
}

