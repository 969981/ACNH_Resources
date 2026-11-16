
void FUN_0250a000(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  lVar11 = 0x13d4;
  lVar10 = 0;
  lVar12 = 8;
  lVar15 = 0xb35c;
  lVar20 = 0x9f88;
  lVar16 = 0xa480;
  lVar17 = 0xa470;
  lVar18 = 0x9f90;
  lVar19 = 0x9fa0;
  lVar13 = 0xa450;
  do {
    puVar1 = (undefined4 *)((long)param_1 + lVar10);
    puVar2 = (undefined4 *)((long)param_1 + lVar20);
    *puVar2 = *puVar1;
    uVar5 = puVar1[2];
    *(undefined1 *)((undefined4 *)((long)param_1 + lVar18) + 1) = *(undefined1 *)(puVar1 + 3);
    *(undefined4 *)((long)param_1 + lVar18) = uVar5;
    puVar2[4] = puVar1[4];
    puVar2[5] = puVar1[5];
    FUN_0250b4c0((long)param_1 + lVar19,puVar1 + 6);
    uVar8 = *(undefined8 *)(puVar1 + 0x132);
    puVar3 = (undefined8 *)((long)param_1 + lVar13);
    uVar9 = *(undefined8 *)(puVar1 + 0x134);
    *(undefined2 *)(puVar3 + 2) = *(undefined2 *)(puVar1 + 0x136);
    *puVar3 = uVar8;
    puVar3[1] = uVar9;
    puVar2[0x137] = puVar1[0x137];
    puVar2[0x138] = puVar1[0x138];
    puVar2[0x139] = puVar1[0x139];
    uVar8 = *(undefined8 *)(puVar1 + 0x13a);
    *(undefined4 *)((undefined8 *)((long)param_1 + lVar17) + 1) = puVar1[0x13c];
    *(undefined8 *)((long)param_1 + lVar17) = uVar8;
    FUN_0250b690((long)param_1 + lVar16,puVar1 + 0x13e);
    puVar3 = (undefined8 *)((long)param_1 + lVar15);
    puVar4 = (undefined8 *)((long)param_1 + lVar11);
    puVar2[0x4f4] = puVar1[0x4f4];
    lVar12 = lVar12 + -1;
    lVar11 = lVar11 + 0x13f0;
    lVar15 = lVar15 + 0x13f0;
    uVar8 = *puVar4;
    uVar9 = puVar4[2];
    lVar20 = lVar20 + 0x13f0;
    lVar10 = lVar10 + 0x13f0;
    lVar16 = lVar16 + 0x13f0;
    lVar17 = lVar17 + 0x13f0;
    lVar18 = lVar18 + 0x13f0;
    lVar19 = lVar19 + 0x13f0;
    lVar13 = lVar13 + 0x13f0;
    puVar3[1] = puVar4[1];
    puVar3[2] = uVar9;
    *puVar3 = uVar8;
  } while (lVar12 != 0);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[5] = 0xffffffff;
  FUN_0257a320(param_1 + 6);
  param_1[0x13c] = 0;
  *(undefined8 *)(param_1 + 0x132) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0;
  *(undefined2 *)(param_1 + 0x136) = 0;
  FUN_0250d580(param_1 + 0x13e);
  *(undefined8 *)(param_1 + 0x4f6) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x137) = 0;
  param_1[0x4f4] = 3;
  param_1[0x4f8] = 0;
  param_1[5] = 0xffffffff;
  param_1[0x4fc] = 1;
  param_1[0x4fe] = 0;
  param_1[0x501] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x4f5) = 0;
  *(undefined1 *)((long)param_1 + 0x13d6) = 1;
  FUN_0257a320(param_1 + 0x502);
  param_1[0x638] = 0;
  *(undefined8 *)(param_1 + 0x62e) = 0;
  *(undefined8 *)(param_1 + 0x630) = 0;
  *(undefined2 *)(param_1 + 0x632) = 0;
  FUN_0250d580(param_1 + 0x63a);
  param_1[0x9f0] = 3;
  *(undefined8 *)(param_1 + 0x9f2) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x633) = 0;
  param_1[0x9f4] = 0;
  param_1[0x501] = 0xffffffff;
  param_1[0x9fa] = 0;
  param_1[0x9fd] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x9f1) = 0;
  *(undefined1 *)((long)param_1 + 0x27c6) = 1;
  param_1[0x9f8] = 2;
  FUN_0257a320(param_1 + 0x9fe);
  param_1[0xb34] = 0;
  *(undefined8 *)(param_1 + 0xb2a) = 0;
  *(undefined8 *)(param_1 + 0xb2c) = 0;
  *(undefined2 *)(param_1 + 0xb2e) = 0;
  FUN_0250d580(param_1 + 0xb36);
  param_1[0xeec] = 3;
  *(undefined8 *)(param_1 + 0xb2f) = 0;
  *(undefined8 *)(param_1 + 0xeee) = 0xffffffff;
  param_1[0xef0] = 0;
  param_1[0x9fd] = 0xffffffff;
  *(undefined2 *)(param_1 + 0xeed) = 0;
  *(undefined1 *)((long)param_1 + 0x3bb6) = 1;
  param_1[0xef4] = 3;
  param_1[0xef6] = 0;
  param_1[0xef9] = 0xffffffff;
  FUN_0257a320(param_1 + 0xefa);
  param_1[0x1030] = 0;
  *(undefined8 *)(param_1 + 0x1026) = 0;
  *(undefined8 *)(param_1 + 0x1028) = 0;
  *(undefined2 *)(param_1 + 0x102a) = 0;
  FUN_0250d580(param_1 + 0x1032);
  *(undefined8 *)(param_1 + 0x102b) = 0;
  param_1[0x13e8] = 3;
  param_1[0xef9] = 0xffffffff;
  param_1[0x13f0] = 4;
  *(undefined2 *)(param_1 + 0x13e9) = 0;
  *(undefined1 *)((long)param_1 + 0x4fa6) = 1;
  *(undefined8 *)(param_1 + 0x13ea) = 0xffffffff;
  param_1[0x13ec] = 0;
  param_1[0x13f2] = 0;
  param_1[0x13f5] = 0xffffffff;
  FUN_0257a320(param_1 + 0x13f6);
  param_1[0x152c] = 0;
  *(undefined2 *)(param_1 + 0x1526) = 0;
  *(undefined8 *)(param_1 + 0x1522) = 0;
  *(undefined8 *)(param_1 + 0x1524) = 0;
  FUN_0250d580(param_1 + 0x152e);
  *(undefined8 *)(param_1 + 0x1527) = 0;
  param_1[0x18e4] = 3;
  param_1[0x13f5] = 0xffffffff;
  param_1[0x18ec] = 5;
  *(undefined2 *)(param_1 + 0x18e5) = 0;
  *(undefined1 *)((long)param_1 + 0x6396) = 1;
  *(undefined8 *)(param_1 + 0x18e6) = 0xffffffff;
  param_1[0x18e8] = 0;
  param_1[0x18ee] = 0;
  param_1[0x18f1] = 0xffffffff;
  FUN_0257a320(param_1 + 0x18f2);
  param_1[0x1a28] = 0;
  *(undefined2 *)(param_1 + 0x1a22) = 0;
  *(undefined8 *)(param_1 + 0x1a1e) = 0;
  *(undefined8 *)(param_1 + 0x1a20) = 0;
  FUN_0250d580(param_1 + 0x1a2a);
  *(undefined8 *)(param_1 + 0x1a23) = 0;
  param_1[0x1de0] = 3;
  param_1[0x18f1] = 0xffffffff;
  param_1[0x1de8] = 6;
  *(undefined2 *)(param_1 + 0x1de1) = 0;
  *(undefined1 *)((long)param_1 + 0x7786) = 1;
  *(undefined8 *)(param_1 + 0x1de2) = 0xffffffff;
  param_1[0x1de4] = 0;
  param_1[0x1dea] = 0;
  param_1[0x1ded] = 0xffffffff;
  FUN_0257a320(param_1 + 0x1dee);
  param_1[0x1f24] = 0;
  *(undefined2 *)(param_1 + 0x1f1e) = 0;
  *(undefined8 *)(param_1 + 0x1f1a) = 0;
  *(undefined8 *)(param_1 + 0x1f1c) = 0;
  FUN_0250d580(param_1 + 0x1f26);
  *(undefined8 *)(param_1 + 0x1f1f) = 0;
  param_1[0x22dc] = 3;
  param_1[0x1ded] = 0xffffffff;
  param_1[0x22e4] = 7;
  *(undefined2 *)(param_1 + 0x22dd) = 0;
  *(undefined1 *)((long)param_1 + 0x8b76) = 1;
  *(undefined8 *)(param_1 + 0x22de) = 0xffffffff;
  param_1[0x22e0] = 0;
  param_1[0x22e6] = 0;
  param_1[0x22e9] = 0xffffffff;
  FUN_0257a320(param_1 + 0x22ea);
  param_1[0x2420] = 0;
  *(undefined8 *)(param_1 + 0x2416) = 0;
  *(undefined8 *)(param_1 + 0x2418) = 0;
  *(undefined2 *)(param_1 + 0x241a) = 0;
  FUN_0250d580(param_1 + 0x2422);
  *(undefined8 *)(param_1 + 0x241b) = 0;
  param_1[0x27d8] = 3;
  *(undefined2 *)(param_1 + 0x27d9) = 0;
  *(undefined1 *)((long)param_1 + 0x9f66) = 1;
  *(undefined8 *)(param_1 + 0x27da) = 0xffffffff;
  param_1[0x27dc] = 0;
  puVar6 = PTR_DAT_04bb4718;
  param_1[0x22e9] = 0xffffffff;
  param_1[0x27e0] = 0;
  lVar11 = *(long *)puVar6;
  if (lVar11 == 0) {
    if ((DAT_054f08c8 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_054f08c8);
      puVar14 = &DAT_054f08c0;
      if (iVar7 != 0) {
        DAT_054f08c0 = 0;
        __cxa_guard_release(&DAT_054f08c8);
      }
    }
    else {
      puVar14 = &DAT_054f08c0;
    }
  }
  else {
    puVar14 = (uint *)(lVar11 + 0x1fc);
  }
  *puVar14 = *puVar14 & 0xfffffffe;
  lVar11 = *(long *)puVar6;
  if (lVar11 == 0) {
    if ((DAT_054f08c8 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_054f08c8);
      puVar14 = &DAT_054f08c0;
      if (iVar7 != 0) {
        DAT_054f08c0 = 0;
        __cxa_guard_release(&DAT_054f08c8);
      }
    }
    else {
      puVar14 = &DAT_054f08c0;
    }
  }
  else {
    puVar14 = (uint *)(lVar11 + 0x1fc);
  }
  *puVar14 = *puVar14 & 0xfffffffd;
  return;
}

