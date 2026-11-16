
void FUN_0299b2a0(long param_1)

{
  long lVar1;
  uint *puVar2;
  byte *pbVar3;
  int *piVar4;
  short sVar5;
  int *piVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined1 local_18fc [4];
  uint local_18f8 [2];
  byte local_18f0 [4];
  int local_18ec [4];
  int local_18dc;
  int local_18d8;
  int iStack_18d4;
  int local_18d0;
  int aiStack_18cc [1563];
  
  puVar12 = local_18fc;
  lVar15 = 0x79;
  do {
    *puVar12 = 0;
    lVar15 = lVar15 + -1;
    *(undefined8 *)(puVar12 + 4) = 0xffffffff00000000;
    puVar12[0xc] = 0;
    *(undefined4 *)(puVar12 + 0x20) = 0xffffffff;
    *(undefined8 *)(puVar12 + 0x24) = 0;
    *(undefined8 *)(puVar12 + 0x2c) = 0;
    *(undefined8 *)(puVar12 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar12 + 0x18) = 0xffffffffffffffff;
    puVar12 = puVar12 + 0x34;
  } while (lVar15 != 0);
  puVar13 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar8 = (**(code **)(*(long *)*puVar13 + 0x38))();
    lVar15 = 0;
    if (lVar8 != 0) {
      lVar15 = lVar8 + 0x70;
    }
  }
  else if (puVar13 == (undefined8 *)0x0) {
    lVar15 = 0;
  }
  else {
    lVar15 = 0;
    if ((long *)puVar13[0x26] != (long *)0x0) {
      lVar15 = (**(code **)(*(long *)puVar13[0x26] + 0x38))();
    }
  }
  uVar17 = 0;
  iVar16 = 0;
  uVar18 = 0;
  do {
    puVar12 = local_18fc + uVar18 * 0x34;
    if (0x78 < (uint)uVar17) {
      puVar12 = local_18fc;
    }
    lVar8 = lVar15 + 0x117548 + (long)(int)uVar18 * 0x38;
    if (*(long **)(lVar8 + 0x28) == (long *)0x0) {
      uVar9 = 0;
    }
    else {
      puVar13 = (undefined8 *)**(long **)(lVar8 + 0x28);
      uVar9 = 0;
      if (puVar13 != (undefined8 *)0x0) {
        uVar9 = (**(code **)*puVar13)();
      }
    }
    bVar7 = 0x78 < (uint)uVar17;
    sVar5 = *(short *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8));
    *puVar12 = 0;
    uVar10 = (uint)sVar5;
    puVar2 = local_18f8 + uVar18 * 0xd;
    if (bVar7) {
      puVar2 = local_18f8;
    }
    *puVar2 = uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU);
    puVar2 = local_18f8 + uVar18 * 0xd + 1;
    if (bVar7) {
      puVar2 = local_18f8 + 1;
    }
    *puVar2 = (int)*(char *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 2);
    pbVar3 = local_18f0 + uVar18 * 0x34;
    if (bVar7) {
      pbVar3 = local_18f0;
    }
    *pbVar3 = *(byte *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 3) & 1;
    lVar1 = *(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8);
    iVar19 = *(int *)(lVar1 + 8);
    iVar20 = *(int *)(lVar1 + 0xc);
    piVar4 = local_18ec + uVar18 * 0xd + 5;
    if (bVar7) {
      piVar4 = local_18ec + 5;
    }
    *piVar4 = *(int *)(lVar1 + 4);
    piVar4 = local_18ec + uVar18 * 0xd + 6;
    if (bVar7) {
      piVar4 = local_18ec + 6;
    }
    *piVar4 = iVar19;
    piVar4 = local_18ec + uVar18 * 0xd + 7;
    if (bVar7) {
      piVar4 = local_18ec + 7;
    }
    *piVar4 = iVar20;
    piVar4 = local_18ec + uVar18 * 0xd;
    if (bVar7) {
      piVar4 = local_18ec;
    }
    *piVar4 = (int)*(short *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x10);
    piVar4 = local_18ec + uVar18 * 0xd + 1;
    if (bVar7) {
      piVar4 = local_18ec + 1;
    }
    *piVar4 = (int)*(short *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x12);
    piVar4 = local_18ec + uVar18 * 0xd + 2;
    if (bVar7) {
      piVar4 = local_18ec + 2;
    }
    *piVar4 = (int)*(short *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x14);
    piVar4 = local_18ec + uVar18 * 0xd + 3;
    if (bVar7) {
      piVar4 = local_18ec + 3;
    }
    *piVar4 = (int)*(char *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x16);
    piVar4 = local_18ec + uVar18 * 0xd + 8;
    piVar6 = local_18ec + uVar18 * 0xd + 4;
    if (bVar7) {
      piVar4 = local_18ec + 8;
      piVar6 = local_18ec + 4;
    }
    *piVar6 = (int)*(char *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x17);
    *piVar4 = *(int *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x18);
    if ((((uVar9 & 1) != 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
       (puVar13 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 8), puVar13 != (undefined8 *)0x0)) {
      (**(code **)*puVar13)();
    }
    uVar17 = uVar18 + 1;
    iVar16 = iVar16 + 1;
  } while (((int)uVar17 != 0x3c) && (uVar18 = uVar17 & 0xffffffff, (int)uVar17 < 0x79));
  puVar13 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar8 = (**(code **)(*(long *)*puVar13 + 0x38))();
    lVar15 = 0;
    if (lVar8 != 0) {
      lVar15 = lVar8 + 0x70;
    }
  }
  else if (puVar13 == (undefined8 *)0x0) {
    lVar15 = 0;
  }
  else {
    lVar15 = 0;
    if ((long *)puVar13[0x26] != (long *)0x0) {
      lVar15 = (**(code **)(*(long *)puVar13[0x26] + 0x38))();
    }
  }
  iVar19 = 0;
  do {
    uVar10 = iVar16 + iVar19;
    if (0x78 < (int)uVar10) break;
    puVar12 = local_18fc + (ulong)uVar10 * 0x34;
    if (0x78 < uVar10) {
      puVar12 = local_18fc;
    }
    lVar8 = (long)iVar19 * 0x38 + lVar15;
    plVar14 = *(long **)(&LAB_001182a0 + lVar8 + 0x28);
    if (plVar14 == (long *)0x0) {
      uVar17 = 0;
    }
    else {
      puVar13 = (undefined8 *)*plVar14;
      uVar17 = 0;
      if (puVar13 != (undefined8 *)0x0) {
        uVar17 = (**(code **)*puVar13)();
      }
    }
    bVar7 = 0x78 < uVar10;
    sVar5 = *(short *)(*(long *)(&LAB_001182a0 + lVar8 + 0x10) +
                      *(long *)(&LAB_001182a0 + lVar8 + 8));
    *puVar12 = 0;
    uVar11 = (uint)sVar5;
    uVar18 = (ulong)uVar10;
    puVar2 = local_18f8 + uVar18 * 0xd;
    if (bVar7) {
      puVar2 = local_18f8;
    }
    *puVar2 = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
    puVar2 = local_18f8 + uVar18 * 0xd + 1;
    if (bVar7) {
      puVar2 = local_18f8 + 1;
    }
    *puVar2 = (int)*(char *)(*(long *)(&LAB_001182a0 + lVar8 + 0x10) +
                             *(long *)(&LAB_001182a0 + lVar8 + 8) + 2);
    pbVar3 = local_18f0 + uVar18 * 0x34;
    if (bVar7) {
      pbVar3 = local_18f0;
    }
    *pbVar3 = *(byte *)(*(long *)(&LAB_001182a0 + lVar8 + 0x10) +
                        *(long *)(&LAB_001182a0 + lVar8 + 8) + 3) & 1;
    lVar1 = *(long *)(&LAB_001182a0 + lVar8 + 0x10) + *(long *)(&LAB_001182a0 + lVar8 + 8);
    iVar20 = *(int *)(lVar1 + 8);
    iVar21 = *(int *)(lVar1 + 0xc);
    piVar4 = local_18ec + uVar18 * 0xd + 5;
    if (bVar7) {
      piVar4 = local_18ec + 5;
    }
    *piVar4 = *(int *)(lVar1 + 4);
    piVar4 = local_18ec + uVar18 * 0xd + 6;
    if (bVar7) {
      piVar4 = local_18ec + 6;
    }
    *piVar4 = iVar20;
    piVar4 = local_18ec + uVar18 * 0xd + 7;
    if (bVar7) {
      piVar4 = local_18ec + 7;
    }
    *piVar4 = iVar21;
    piVar4 = local_18ec + uVar18 * 0xd;
    if (bVar7) {
      piVar4 = local_18ec;
    }
    *piVar4 = (int)*(short *)(*(long *)(&LAB_001182a0 + lVar8 + 0x10) +
                              *(long *)(&LAB_001182a0 + lVar8 + 8) + 0x10);
    piVar4 = local_18ec + uVar18 * 0xd + 1;
    if (bVar7) {
      piVar4 = local_18ec + 1;
    }
    *piVar4 = (int)*(short *)(*(long *)(&LAB_001182a0 + lVar8 + 0x10) +
                              *(long *)(&LAB_001182a0 + lVar8 + 8) + 0x12);
    piVar4 = local_18ec + uVar18 * 0xd + 2;
    if (bVar7) {
      piVar4 = local_18ec + 2;
    }
    *piVar4 = (int)*(short *)(*(long *)(&LAB_001182a0 + lVar8 + 0x10) +
                              *(long *)(&LAB_001182a0 + lVar8 + 8) + 0x14);
    piVar4 = local_18ec + uVar18 * 0xd + 3;
    if (bVar7) {
      piVar4 = local_18ec + 3;
    }
    *piVar4 = (int)*(char *)(*(long *)(&LAB_001182a0 + lVar8 + 0x10) +
                             *(long *)(&LAB_001182a0 + lVar8 + 8) + 0x16);
    piVar4 = local_18ec + uVar18 * 0xd + 8;
    piVar6 = local_18ec + uVar18 * 0xd + 4;
    if (bVar7) {
      piVar4 = local_18ec + 8;
      piVar6 = local_18ec + 4;
    }
    *piVar6 = (int)*(char *)(*(long *)(&LAB_001182a0 + lVar8 + 0x10) +
                             *(long *)(&LAB_001182a0 + lVar8 + 8) + 0x17);
    *piVar4 = *(int *)(*(long *)(&LAB_001182a0 + lVar8 + 0x10) +
                       *(long *)(&LAB_001182a0 + lVar8 + 8) + 0x18);
    if ((((uVar17 & 1) != 0) && (lVar8 = *(long *)(&LAB_001182a0 + lVar8 + 0x28), lVar8 != 0)) &&
       (puVar13 = *(undefined8 **)(lVar8 + 8), puVar13 != (undefined8 *)0x0)) {
      (**(code **)*puVar13)();
    }
    iVar19 = iVar19 + 1;
  } while (iVar19 != 0x45);
  iVar16 = 0;
  do {
    if ((0 < (int)local_18f8[(long)iVar16 * 0xd]) || (local_18f0[(long)iVar16 * 0x34] != 0)) {
      if (iVar16 == 0x3b) {
        FUN_02999f48(param_1,0);
      }
      else {
        FUN_02999800(param_1,local_18fc + (long)iVar16 * 0x34);
      }
    }
    iVar16 = iVar16 + 1;
  } while (iVar16 != 0x79);
  *(undefined1 *)(param_1 + 0xf0) = 1;
  return;
}

