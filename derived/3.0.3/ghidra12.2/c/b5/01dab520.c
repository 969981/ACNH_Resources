
void FUN_01dab520(undefined1 *param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  uint *puVar3;
  byte *pbVar4;
  long lVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  uint uVar15;
  long lVar16;
  long *plVar17;
  int iVar18;
  ulong uVar19;
  undefined4 *puVar20;
  long lVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  long lVar24;
  undefined1 local_54 [4];
  
  puVar11 = PTR_DAT_04bb27d0;
  iVar6 = *(int *)(*(long *)(*(long *)PTR_DAT_04bb27d0 + 0x10) + 0xaa0);
  if (*(long *)PTR_DAT_04bb6270 != 0) {
    FUN_00a715d0(*(long *)PTR_DAT_04bb6270,1);
  }
  lVar16 = *(long *)PTR_DAT_04bb4778;
  if (lVar16 != 0) {
    memset((void *)(lVar16 + 0x2a58),0,0x4800);
    *(undefined2 *)(lVar16 + 0x87e0) = 0;
    *(undefined4 *)(lVar16 + 0x9150) = 0;
  }
  FUN_022c0370();
  puVar13 = PTR_DAT_04bc2f38;
  uVar15 = 0;
  *PTR_DAT_04bc2da0 = 0xff;
  do {
    uVar19 = (ulong)uVar15;
    uVar15 = uVar15 + 1;
    lVar16 = (long)(uVar19 << 0x20) >> 0x1a;
    *(undefined8 *)(puVar13 + lVar16 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(puVar13 + lVar16 + 0x20) = 0;
    *(undefined4 *)(puVar13 + lVar16 + 0x30) = 0;
    *(undefined8 *)(puVar13 + lVar16 + 0x34) = 0xffff000000000000;
    puVar13[lVar16 + 0x3e] = 0;
    *(undefined2 *)(puVar13 + lVar16 + 0x3c) = 0;
    puVar14 = PTR_DAT_04bb5018;
    puVar12 = PTR_DAT_04bb4760;
  } while (uVar15 != 0x14);
  DAT_04c47fa4 = 0xe;
  DAT_0514f75a = 0;
  DAT_0514f758 = 0xeff;
  iVar18 = 0;
  lVar16 = *(long *)PTR_DAT_04bb4760;
  bVar7 = *PTR_DAT_04bb5018;
  do {
    lVar21 = lVar16 + (long)iVar18 * 0x15;
    iVar18 = iVar18 + 1;
    *(byte *)(lVar21 + 6) = bVar7 >> 6 | bVar7 << 2;
    *(byte *)(lVar21 + 8) = *(byte *)(lVar21 + 8) & 0xc0;
    *(byte *)(lVar21 + 5) = *(byte *)(lVar21 + 5) & 3 | bVar7 << 2;
    *(byte *)(lVar21 + 7) = *(byte *)(lVar21 + 7) & 0xc | bVar7 >> 6;
  } while (iVar18 != 0x6d);
  lVar21 = 0;
  plVar17 = (long *)(lVar16 + 0x900);
  do {
    plVar2 = (long *)(lVar16 + lVar21);
    if ((*plVar17 != *plVar2 || plVar17[1] != plVar2[1]) ||
        *(long *)((long)plVar17 + 0xd) != *(long *)((long)plVar2 + 0xd)) {
      lVar24 = *plVar2;
      lVar5 = plVar2[1];
      *(undefined8 *)((long)plVar17 + 0xd) = *(undefined8 *)((long)plVar2 + 0xd);
      *plVar17 = lVar24;
      plVar17[1] = lVar5;
    }
    lVar21 = lVar21 + 0x15;
    plVar17 = plVar17 + 5;
  } while (lVar21 != 0x8dc);
  iVar18 = 0;
  do {
    lVar21 = (long)iVar18;
    iVar18 = iVar18 + 1;
    *(byte *)(lVar16 + 0x1a00 + lVar21) = *(byte *)(lVar16 + 0x1a00 + lVar21) & 0xfe;
  } while (iVar18 != 0x6d);
  *(undefined8 *)(lVar16 + 0x1a78) = 0;
  puVar13 = PTR_DAT_04bb4768;
  uVar19 = 0;
  *(undefined8 *)(lVar16 + 0x1a70) = 0;
  lVar16 = *(long *)puVar13;
  do {
    uVar9 = uVar19 << 1;
    uVar10 = uVar19 >> 0x1f;
    uVar15 = (int)uVar19 + 1;
    uVar19 = (ulong)uVar15;
    *(undefined2 *)(lVar16 + 0x30 + (-uVar10 & 0xfffffffe00000000 | uVar9)) = 0;
  } while (uVar15 != 0x6d);
  lVar16 = 0;
  iVar18 = 0;
  puVar20 = *(undefined4 **)PTR_DAT_04bb5010;
  *puVar20 = 0;
  *(undefined8 *)(puVar20 + 2) = 0xffffffff;
  *(undefined *)(puVar20 + 1) = *puVar14;
  lVar21 = *(long *)puVar12;
  lVar24 = *(long *)PTR_DAT_04bbaed0;
  do {
    FUN_020e9d20(lVar21 + (long)iVar18 * 0x15,lVar24 + lVar16);
    FUN_020ea498(lVar21,iVar18,1,0);
    lVar16 = lVar16 + 6;
    iVar18 = iVar18 + 1;
  } while (lVar16 != 0x3c);
  if (*(long *)PTR_DAT_04bbc218 != 0) {
    FUN_01391530();
  }
  if (iVar6 == 3) {
    FUN_007ebec8(*(undefined8 *)PTR_DAT_04bb4878);
    puVar11 = PTR_DAT_04bb4770;
    FUN_014b04a0(*(undefined8 *)PTR_DAT_04bb4770);
    FUN_014b0df0(*(undefined8 *)puVar11);
    FUN_02a8bc90(*(long *)PTR_DAT_04bb5008 + 0x26718);
    return;
  }
  plVar17 = *(long **)puVar11;
  lVar16 = *plVar17;
  bVar7 = *(byte *)(lVar16 + 0x473);
  if ((long)(char)bVar7 != 0xffffffffffffffff) {
    pbVar4 = (byte *)(lVar16 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x80;
    if (7 < bVar7) {
      pbVar4 = (byte *)(lVar16 + 0x48);
    }
    if (((*pbVar4 >> 3 & 1) != 0) && (*(byte *)(lVar16 + 0x472) != bVar7)) goto LAB_01dab87c;
  }
  local_54[0] = *param_1;
  FUN_021b3934(&DAT_053fe348,local_54);
  plVar17 = *(long **)puVar11;
LAB_01dab87c:
  puVar11 = PTR_DAT_04bc1220;
  uVar19 = 0;
  lVar16 = 0x48;
  puVar1 = (undefined1 *)(*(long *)PTR_DAT_04bb3968 + 0xfa8);
  bVar7 = *PTR_DAT_04bc1220;
  puVar22 = puVar1;
  do {
    lVar21 = *plVar17;
    bVar8 = *(byte *)(lVar21 + 0x473);
    if ((long)(char)bVar8 == 0xffffffffffffffff) {
      puVar23 = puVar22;
      if (bVar7 != uVar19) goto LAB_01dab8b4;
LAB_01dab934:
      *puVar23 = 1;
      *(undefined8 *)(puVar22 + 0x24) = 0;
      *(undefined8 *)(puVar22 + 0x1c) = 0;
      *(undefined8 *)(puVar22 + 0x14) = 0;
      *(undefined8 *)(puVar22 + 0xc) = 0;
      *(undefined8 *)(puVar22 + 4) = 0;
    }
    else {
      puVar3 = (uint *)(lVar21 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x20;
      if (7 < bVar8) {
        puVar3 = (uint *)(lVar21 + 0x48);
      }
      pbVar4 = puVar11;
      if ((*puVar3 & 8) != 0) {
        pbVar4 = (byte *)(lVar21 + 0x473);
      }
      if (uVar19 == *pbVar4) {
        puVar23 = puVar1 + uVar19 * 0x2c;
        goto LAB_01dab934;
      }
      if ((*puVar3 >> 3 & 1) == 0) {
        puVar23 = puVar1 + uVar19 * 0x2c;
      }
      else {
        puVar23 = puVar1 + uVar19 * 0x2c;
        if ((*(byte *)(lVar21 + lVar16) >> 3 & 1) != 0) goto LAB_01dab934;
      }
LAB_01dab8b4:
      *puVar23 = 0;
    }
    uVar19 = uVar19 + 1;
    puVar22 = puVar22 + 0x2c;
    lVar16 = lVar16 + 0x80;
    if (uVar19 == 8) {
      DAT_05454054 = 0;
      lVar16 = *(long *)PTR_DAT_04bb30a0;
      *(undefined4 *)(lVar16 + 0x653f4) = 2;
      *(undefined8 *)(lVar16 + 0x653ec) = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      return;
    }
  } while( true );
}

