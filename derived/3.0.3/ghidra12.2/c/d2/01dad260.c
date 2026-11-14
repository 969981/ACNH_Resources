
void FUN_01dad260(ulong param_1)

{
  long *plVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  puVar9 = PTR_DAT_04bb27d0;
  iVar5 = *(int *)(*(long *)(*(long *)PTR_DAT_04bb27d0 + 0x10) + 0xaa0);
  if (*(long *)PTR_DAT_04bb6270 != 0) {
    FUN_00a715d0(*(long *)PTR_DAT_04bb6270,1);
  }
  lVar15 = *(long *)PTR_DAT_04bb4778;
  if (lVar15 != 0) {
    memset((void *)(lVar15 + 0x2a58),0,0x4800);
    *(undefined2 *)(lVar15 + 0x87e0) = 0;
    *(undefined4 *)(lVar15 + 0x9150) = 0;
  }
  FUN_022c0370();
  puVar10 = PTR_DAT_04bc2f38;
  uVar14 = 0;
  *PTR_DAT_04bc2da0 = 0xff;
  do {
    uVar19 = (ulong)uVar14;
    uVar14 = uVar14 + 1;
    lVar15 = (long)(uVar19 << 0x20) >> 0x1a;
    *(undefined8 *)(puVar10 + lVar15 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(puVar10 + lVar15 + 0x20) = 0;
    *(undefined4 *)(puVar10 + lVar15 + 0x30) = 0;
    *(undefined8 *)(puVar10 + lVar15 + 0x34) = 0xffff000000000000;
    puVar10[lVar15 + 0x3e] = 0;
    *(undefined2 *)(puVar10 + lVar15 + 0x3c) = 0;
    puVar11 = PTR_DAT_04bb5018;
  } while (uVar14 != 0x14);
  DAT_04c47fa4 = 0xe;
  DAT_0514f75a = 0;
  DAT_0514f758 = 0xeff;
  iVar18 = 0;
  lVar15 = *(long *)PTR_DAT_04bb4760;
  bVar6 = *PTR_DAT_04bb5018;
  do {
    lVar20 = lVar15 + (long)iVar18 * 0x15;
    iVar18 = iVar18 + 1;
    *(byte *)(lVar20 + 6) = bVar6 >> 6 | bVar6 << 2;
    *(byte *)(lVar20 + 8) = *(byte *)(lVar20 + 8) & 0xc0;
    *(byte *)(lVar20 + 5) = *(byte *)(lVar20 + 5) & 3 | bVar6 << 2;
    *(byte *)(lVar20 + 7) = *(byte *)(lVar20 + 7) & 0xc | bVar6 >> 6;
  } while (iVar18 != 0x6d);
  lVar20 = 0;
  plVar13 = (long *)(lVar15 + 0x900);
  do {
    plVar1 = (long *)(lVar15 + lVar20);
    if ((*plVar13 != *plVar1 || plVar13[1] != plVar1[1]) ||
        *(long *)((long)plVar13 + 0xd) != *(long *)((long)plVar1 + 0xd)) {
      lVar3 = *plVar1;
      lVar4 = plVar1[1];
      *(undefined8 *)((long)plVar13 + 0xd) = *(undefined8 *)((long)plVar1 + 0xd);
      *plVar13 = lVar3;
      plVar13[1] = lVar4;
    }
    lVar20 = lVar20 + 0x15;
    plVar13 = plVar13 + 5;
  } while (lVar20 != 0x8dc);
  iVar18 = 0;
  do {
    lVar20 = (long)iVar18;
    iVar18 = iVar18 + 1;
    *(byte *)(lVar15 + 0x1a00 + lVar20) = *(byte *)(lVar15 + 0x1a00 + lVar20) & 0xfe;
  } while (iVar18 != 0x6d);
  *(undefined8 *)(lVar15 + 0x1a78) = 0;
  puVar10 = PTR_DAT_04bb4768;
  uVar19 = 0;
  *(undefined8 *)(lVar15 + 0x1a70) = 0;
  lVar15 = *(long *)puVar10;
  do {
    uVar7 = uVar19 << 1;
    uVar8 = uVar19 >> 0x1f;
    uVar14 = (int)uVar19 + 1;
    uVar19 = (ulong)uVar14;
    *(undefined2 *)(lVar15 + 0x30 + (-uVar8 & 0xfffffffe00000000 | uVar7)) = 0;
  } while (uVar14 != 0x6d);
  puVar17 = *(undefined4 **)PTR_DAT_04bb5010;
  *puVar17 = 0;
  *(undefined *)(puVar17 + 1) = *puVar11;
  *(undefined8 *)(puVar17 + 2) = 0xffffffff;
  if (*(long *)PTR_DAT_04bbc218 != 0) {
    FUN_01391530();
  }
  if ((*(long *)puVar9 == 0) || (*(int *)(*(long *)puVar9 + 0x80) != 3)) {
    FUN_02516650(*(undefined8 *)PTR_DAT_04bb4718,PTR_DAT_04bb32e0);
  }
  if (iVar5 == 3) {
    FUN_0086cee0();
    lVar15 = *(long *)PTR_DAT_04bb38d0;
    lVar20 = *(long *)PTR_DAT_04bb26a8;
    *(undefined1 *)(lVar15 + 0x88) = 0;
    *(undefined8 *)(lVar15 + 0x8c) = 0;
    *(undefined8 *)(lVar15 + 0x94) = 0;
    *(undefined8 *)(lVar15 + 0x9c) = 0;
    *(undefined8 *)(lVar15 + 0xa4) = 0;
    *(uint *)(lVar20 + 0xb389c) = *(uint *)(lVar20 + 0xb389c) | 2;
    FUN_007ebec8(*(undefined8 *)PTR_DAT_04bb4878);
    puVar9 = PTR_DAT_04bb4770;
    FUN_014b04a0(*(undefined8 *)PTR_DAT_04bb4770);
    FUN_0205d4f0(*(undefined8 *)PTR_DAT_04bbcee0);
    FUN_014b0df0(*(undefined8 *)puVar9);
    FUN_02a8bc90(*(long *)PTR_DAT_04bb5008 + 0x26718);
    FUN_007cf4dc(*(undefined8 *)PTR_DAT_04bb4950);
    return;
  }
  lVar15 = *(long *)PTR_DAT_04bb46b0;
  if (lVar15 != 0) {
    puVar16 = *(undefined8 **)(lVar15 + 0x10);
    if ((*(byte *)(lVar15 + 0x453) & 1) == 0) {
      lVar15 = (**(code **)(*(long *)*puVar16 + 0x38))();
      if (lVar15 != 0) {
        lVar15 = lVar15 + 0x70;
LAB_01dad5ec:
        if ((*(long *)(lVar15 + 0xd0) == 0) ||
           (puVar16 = *(undefined8 **)(*(long *)(lVar15 + 0xd0) + 0x10),
           puVar16 == (undefined8 *)0x0)) {
          uVar19 = 0;
        }
        else {
          uVar19 = (**(code **)*puVar16)();
          uVar19 = uVar19 & 0xffffffff;
        }
        FUN_0219f990(&DAT_053fe348,0);
        FUN_021c9ab0(&DAT_053fe348);
        FUN_021c9dac(&DAT_053fe348,0);
        lVar20 = **(long **)puVar9;
        bVar6 = *(byte *)(lVar20 + 0x473);
        if ((long)(char)bVar6 == 0xffffffffffffffff) {
LAB_01dad678:
          FUN_021a17a0(&DAT_053fe348,1);
          if ((*(long *)(lVar15 + 0xd0) != 0) &&
             (plVar13 = *(long **)(*(long *)(lVar15 + 0xd0) + 0x20), plVar13 != (long *)0x0)) {
            local_58 = *(undefined8 *)(lVar15 + 0xb0);
            uStack_50 = *(undefined8 *)(lVar15 + 0xb8);
            local_48 = 0x1e3388;
            (**(code **)(*plVar13 + 0x20))(plVar13,&local_58);
          }
          FUN_027ddea0(*(long *)(lVar15 + 0xb8) + *(long *)(lVar15 + 0xb0),0);
          FUN_021a5380(&DAT_053fe348,1,1,1,0);
LAB_01dad6e8:
          FUN_021a5c80(&DAT_053fe348,0,1);
        }
        else {
          pbVar2 = (byte *)(lVar20 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x80;
          if (7 < bVar6) {
            pbVar2 = (byte *)(lVar20 + 0x48);
          }
          if (((*pbVar2 >> 3 & 1) == 0) || (*(byte *)(lVar20 + 0x472) == bVar6)) goto LAB_01dad678;
          FUN_021a4a8c(&DAT_053fe348);
          FUN_021a5380(&DAT_053fe348,1,1,1,1);
          if ((param_1 & 1) != 0) goto LAB_01dad6e8;
        }
        if (DAT_053fee41 != '\0') {
          DAT_053fee34 = 0;
        }
        if (DAT_053ff9e1 != '\0') {
          DAT_053ff9d4 = 0;
        }
        if (DAT_05400581 != '\0') {
          DAT_05400574 = 0;
        }
        if (DAT_05401121 != '\0') {
          DAT_05401114 = 0;
        }
        if (DAT_05401cc1 != '\0') {
          DAT_05401cb4 = 0;
        }
        if (DAT_05402861 != '\0') {
          DAT_05402854 = 0;
        }
        if (DAT_05403401 != '\0') {
          DAT_054033f4 = 0;
        }
        if (DAT_05403fa1 != '\0') {
          DAT_05403f94 = 0;
        }
        if (DAT_05404b41 != '\0') {
          DAT_05404b34 = 0;
        }
        if (DAT_054056e1 != '\0') {
          DAT_054056d4 = 0;
        }
        if ((*(long *)(lVar15 + 0xd0) != 0) &&
           (plVar13 = *(long **)(*(long *)(lVar15 + 0xd0) + 0x20), plVar13 != (long *)0x0)) {
          local_58 = *(undefined8 *)(lVar15 + 0xb0);
          uStack_50 = *(undefined8 *)(lVar15 + 0xb8);
          local_48 = 0x1e3388;
          (**(code **)(*plVar13 + 0x20))(plVar13,&local_58);
        }
        FUN_027def50(*(long *)(lVar15 + 0xb8) + *(long *)(lVar15 + 0xb0));
        if ((((uVar19 & 1) != 0) && (*(long *)(lVar15 + 0xd0) != 0)) &&
           (puVar16 = *(undefined8 **)(*(long *)(lVar15 + 0xd0) + 0x18),
           puVar16 != (undefined8 *)0x0)) {
          (**(code **)*puVar16)();
        }
      }
    }
    else if (((puVar16 != (undefined8 *)0x0) && ((long *)puVar16[0x26] != (long *)0x0)) &&
            (lVar15 = (**(code **)(*(long *)puVar16[0x26] + 0x38))(), lVar15 != 0))
    goto LAB_01dad5ec;
  }
  lVar15 = **(long **)puVar9;
  bVar6 = *(byte *)(lVar15 + 0x473);
  if ((long)(char)bVar6 != 0xffffffffffffffff) {
    pbVar2 = (byte *)(lVar15 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x80;
    if (7 < bVar6) {
      pbVar2 = (byte *)(lVar15 + 0x48);
    }
    if ((*pbVar2 >> 3 & 1) != 0) {
      bVar12 = *(byte *)(lVar15 + 0x472) == bVar6;
      goto LAB_01dad878;
    }
  }
  bVar12 = true;
LAB_01dad878:
  FUN_01e2ea60(*(long *)PTR_DAT_04bb3968 + 0xda0,bVar12);
  FUN_0086cee0();
  lVar15 = *(long *)PTR_DAT_04bb38d0;
  *(undefined1 *)(lVar15 + 0x88) = 0;
  *(undefined8 *)(lVar15 + 0x8c) = 0;
  *(undefined8 *)(lVar15 + 0x94) = 0;
  *(undefined8 *)(lVar15 + 0x9c) = 0;
  *(undefined8 *)(lVar15 + 0xa4) = 0;
  *(uint *)(*(long *)PTR_DAT_04bb26a8 + 0xb389c) =
       *(uint *)(*(long *)PTR_DAT_04bb26a8 + 0xb389c) | 2;
  return;
}

