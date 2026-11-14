
void FUN_01d3de40(long param_1,byte *param_2)

{
  uint *puVar1;
  ushort *puVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  byte bVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  byte bVar16;
  byte bVar17;
  long lVar18;
  undefined8 *puVar19;
  byte bVar20;
  byte *pbVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  long lVar25;
  undefined4 local_28;
  undefined1 local_24;
  byte local_23;
  undefined1 local_22;
  
  puVar4 = PTR_DAT_04bb21d0;
  bVar16 = *param_2;
  lVar12 = *(long *)PTR_DAT_04bb21d0;
  lVar25 = *(long *)(lVar12 + 0xf88);
  lVar13 = lVar25 + 0x18;
  pbVar21 = (byte *)(lVar13 + (ulong)bVar16 * 0x20 + 0x10);
  if (7 < bVar16) {
    pbVar21 = PTR_DAT_04bb5018;
  }
  bVar3 = *pbVar21;
  puVar1 = (uint *)(param_1 + 0x40) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
  if (7 < bVar3) {
    puVar1 = (uint *)(param_1 + 0x40);
  }
  if ((*puVar1 & 1) != 0) {
    return;
  }
  *(uint *)(param_1 + 0x440) = *(uint *)(param_1 + 0x440) | 1 << (ulong)(bVar16 & 0x1f);
  puVar5 = PTR_DAT_04bb5038;
  puVar11 = (undefined8 *)(lVar13 + (ulong)*param_2 * 0x20);
  if (7 < *param_2) {
    puVar11 = &DAT_053565d0;
  }
  if (*(char *)(puVar11 + 1) != '\0') {
    return;
  }
  lVar13 = *(long *)(lVar12 + 0xf88);
  if (bVar3 == 0xff) {
    uVar14 = 0;
    bVar16 = *PTR_DAT_04bb32e0;
    uVar7 = 0xff;
    if (bVar16 < 8) {
      uVar7 = (uint)bVar16;
    }
    uVar8 = (ulong)uVar7;
    plVar9 = &DAT_053565d0;
    if (bVar16 < 8) {
      plVar9 = (long *)(lVar13 + uVar8 * 0x20 + 0x18);
    }
    goto LAB_01d3e07c;
  }
  bVar10 = *(byte *)(lVar13 + 0x48);
  if (*(byte *)(lVar13 + 0x28) == bVar3 && *(char *)(lVar13 + 0x20) == '\0') {
    lVar12 = 0;
LAB_01d3dfe4:
    bVar17 = *(byte *)(lVar13 + 0x68);
    bVar20 = *(byte *)(lVar13 + 0x88);
    bVar22 = *(byte *)(lVar13 + 0xa8);
    bVar23 = *(byte *)(lVar13 + 200);
    bVar24 = *(byte *)(lVar13 + 0xe8);
    bVar6 = *(byte *)(lVar13 + 0x108);
    pbVar21 = PTR_DAT_04bb5038 + lVar12;
  }
  else {
    if (bVar10 == bVar3 && *(char *)(lVar13 + 0x40) == '\0') {
      lVar12 = 1;
      bVar10 = bVar3;
      goto LAB_01d3dfe4;
    }
    bVar17 = *(byte *)(lVar13 + 0x68);
    if (bVar17 == bVar3 && *(char *)(lVar13 + 0x60) == '\0') {
      lVar12 = 2;
      goto LAB_01d3dfe4;
    }
    bVar20 = *(byte *)(lVar13 + 0x88);
    if (bVar20 == bVar3 && *(char *)(lVar13 + 0x80) == '\0') {
      lVar12 = 3;
      goto LAB_01d3dfe4;
    }
    bVar22 = *(byte *)(lVar13 + 0xa8);
    if (bVar22 == bVar3 && *(char *)(lVar13 + 0xa0) == '\0') {
      lVar12 = 4;
      goto LAB_01d3dfe4;
    }
    bVar23 = *(byte *)(lVar13 + 200);
    if ((bVar23 == bVar3) && (*(char *)(lVar13 + 0xc0) == '\0')) {
      lVar12 = 5;
      goto LAB_01d3dfe4;
    }
    bVar24 = *(byte *)(lVar13 + 0xe8);
    if ((bVar24 == bVar3) && (*(char *)(lVar13 + 0xe0) == '\0')) {
      lVar12 = 6;
      goto LAB_01d3dfe4;
    }
    bVar6 = *(byte *)(lVar13 + 0x108);
    pbVar21 = PTR_DAT_04bb32e0;
    if ((bVar6 == bVar3) && (*(char *)(lVar13 + 0x100) == '\0')) {
      lVar12 = 7;
      goto LAB_01d3dfe4;
    }
  }
  bVar16 = *pbVar21;
  uVar7 = 0xff;
  if (bVar16 < 8) {
    uVar7 = (uint)bVar16;
  }
  uVar8 = (ulong)uVar7;
  plVar9 = &DAT_053565d0;
  if (bVar16 < 8) {
    plVar9 = (long *)(lVar13 + uVar8 * 0x20 + 0x18);
  }
  uVar14 = (uint)(*(byte *)(lVar13 + 0x28) == bVar3) | (uint)(bVar10 == bVar3) << 1 |
           (uint)(bVar17 == bVar3) << 2 | (uint)(bVar20 == bVar3) << 3 |
           (uint)(bVar22 == bVar3) << 4 | (uint)(bVar23 == bVar3) << 5 |
           (uint)(bVar24 == bVar3) << 6 | (uint)(bVar6 == bVar3) << 7;
LAB_01d3e07c:
  lVar18 = *plVar9;
  *(long *)(puVar1 + 2) = lVar18;
  lVar12 = plVar9[1];
  *(char *)(puVar1 + 0x1e) = (char)uVar8;
  puVar1[0x1f] = uVar14;
  *(char *)(puVar1 + 4) = (char)lVar12;
  if ((lVar18 != 0) && (bVar16 < 8)) {
    *puVar1 = *puVar1 | 1;
    if (0 < (int)puVar1[6]) {
      lVar12 = 0;
      puVar11 = *(undefined8 **)(puVar1 + 10);
      do {
        puVar19 = *(undefined8 **)(*(long *)(puVar1 + 8) + lVar12 * 8);
        lVar12 = lVar12 + 1;
        *puVar19 = puVar11;
        *(undefined8 **)(puVar1 + 10) = puVar19;
        puVar11 = puVar19;
      } while (lVar12 < (int)puVar1[6]);
    }
    iVar15 = 0;
    puVar1[6] = 0;
    do {
      uVar7 = (uint)(byte)puVar5[iVar15];
      if (7 < uVar7) {
        uVar7 = 0xff;
      }
      if ((puVar1[0x1f] >> (ulong)(uVar7 & 0x1f) & 1) != 0) {
        pbVar21 = *(byte **)(puVar1 + 10);
        if (pbVar21 != (byte *)0x0) {
          *(undefined8 *)(puVar1 + 10) = *(undefined8 *)pbVar21;
        }
        *pbVar21 = 0xff;
        if ((int)puVar1[6] < (int)puVar1[7]) {
          *(byte **)(*(long *)(puVar1 + 8) + (long)(int)puVar1[6] * 8) = pbVar21;
          puVar1[6] = puVar1[6] + 1;
        }
        bVar16 = puVar5[iVar15];
        if (7 < bVar16) {
          bVar16 = 0xff;
        }
        *pbVar21 = bVar16;
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 != 8);
    *puVar1 = *puVar1 | 2;
  }
  if (puVar1[6] != 0) {
    lVar12 = (long)(int)puVar1[6] << 3;
    puVar11 = *(undefined8 **)(puVar1 + 8);
    do {
      bVar10 = *(byte *)*puVar11;
      uVar8 = (ulong)bVar10;
      puVar19 = (undefined8 *)(lVar13 + 0x18 + uVar8 * 0x20);
      bVar16 = bVar10;
      if (7 < uVar8) {
        bVar16 = 0xff;
      }
      puVar2 = (ushort *)(param_1 + 0x444) + ((long)(char)bVar16 & 0xffffffffU) * 2;
      if (7 < uVar8) {
        puVar2 = (ushort *)(param_1 + 0x444);
      }
      if (7 < bVar10) {
        puVar19 = &DAT_053565d0;
      }
      lVar12 = lVar12 + -8;
      bVar16 = *(byte *)(puVar19 + 1);
      *(byte *)(puVar2 + 1) = bVar3;
      *puVar2 = (ushort)bVar16;
      puVar11 = puVar11 + 1;
    } while (lVar12 != 0);
  }
  FUN_01d3e314(param_1);
  if (*(char *)(*(long *)puVar4 + 0x2078) != '\0') {
    bVar16 = *param_2;
    bVar10 = *(byte *)(lVar25 + 0x225);
    if (7 < bVar16) {
      bVar16 = 0xff;
    }
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    if (bVar16 == bVar10) {
      *(undefined1 *)(param_1 + 0x470) = 1;
    }
    else {
      local_28 = 0;
      local_22 = 0;
      local_24 = 4;
      if (-1 < *(int *)(param_1 + 8)) {
        local_23 = bVar3;
        FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,*(int *)(param_1 + 8),&local_28,
                     param_1 + 0x464,4,0);
      }
    }
  }
  return;
}

