
int FUN_00119480(long param_1,long param_2,uint param_3)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  
  uVar15 = (uint)CONCAT11(*(undefined1 *)(param_2 + 0x2a),*(undefined1 *)(param_2 + 0x2b));
  uVar3 = param_3 & 0xffff;
  if (uVar15 <= uVar3) {
    return 0xa217;
  }
  uVar7 = (uint)CONCAT11(*(undefined1 *)(param_2 + 0x26),*(undefined1 *)(param_2 + 0x27));
  if (uVar7 == 0) {
    return 0;
  }
  if (uVar15 < uVar7) {
    return 0xa217;
  }
  if ((1 < uVar7) &&
     (uVar14 = (*(uint *)(param_2 + 8) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 8) & 0xff00ff) << 8
     , (uVar14 >> 0x10 | uVar14 << 0x10) == 0x80020000)) {
    uVar17 = (ulong)param_3;
    uVar4 = (ulong)CONCAT11(*(undefined1 *)(param_2 + 0x2e),*(undefined1 *)(param_2 + 0x2f));
    uVar14 = 0;
    lVar1 = param_2 + ((ulong)*(byte *)(param_2 + 0x20) << 0x18 |
                       (ulong)*(byte *)(param_2 + 0x21) << 0x10 |
                       (ulong)*(byte *)(param_2 + 0x22) << 8 | (ulong)*(byte *)(param_2 + 0x23));
    do {
      uVar16 = 0;
      if (((int)uVar17 + 1U & 0xffff) < uVar15) {
        uVar16 = (int)uVar17 + 1;
      }
      uVar17 = (ulong)uVar16;
      if ((*(byte *)(lVar1 + uVar4 * (uVar17 & 0xffff)) & 3) != 0) goto LAB_0011954c;
      uVar14 = uVar14 + 1;
    } while ((uVar14 & 0xffff) < uVar15);
    uVar16 = 0;
LAB_0011954c:
    uVar16 = uVar16 & 0xffff;
    if (uVar15 <= uVar16) {
      return 0xa217;
    }
    lVar9 = uVar4 * uVar16;
    bVar2 = *(byte *)(lVar1 + lVar9) & 3;
    *(byte *)(param_1 + 0x6079e) = bVar2;
    bVar6 = *(byte *)(lVar1 + lVar9) >> 6 & 1;
    *(byte *)(param_1 + 0x607a3) = bVar6;
    if (bVar2 == 3) {
      return 0xa217;
    }
    if (bVar6 != 0) {
      lVar1 = param_2 + ((ulong)*(byte *)(param_2 + 0x20) << 0x18 |
                         (ulong)*(byte *)(param_2 + 0x21) << 0x10 |
                         (ulong)*(byte *)(param_2 + 0x22) << 8 | (ulong)*(byte *)(param_2 + 0x23));
      lVar9 = (ulong)CONCAT11(*(undefined1 *)(param_2 + 0x2e),*(undefined1 *)(param_2 + 0x2f)) *
              (ulong)uVar16;
      *(byte *)(lVar1 + lVar9) = *(byte *)(lVar1 + lVar9) & 0xbf;
    }
  }
  puVar12 = (undefined2 *)
            (param_2 +
            ((ulong)*(byte *)(param_2 + 0x3c) << 0x18 | (ulong)*(byte *)(param_2 + 0x3d) << 0x10 |
             (ulong)*(byte *)(param_2 + 0x3e) << 8 | (ulong)*(byte *)(param_2 + 0x3f)));
  puVar10 = puVar12 + 1;
  if (CONCAT11(*(undefined1 *)puVar12,*(undefined1 *)((long)puVar12 + 1)) == uVar3) {
    uVar14 = 0xffff;
  }
  else {
    uVar15 = 1;
    do {
      puVar12 = puVar10;
      uVar14 = uVar15 & 0xffff;
      if (uVar7 <= uVar14) {
        iVar8 = 0;
        goto LAB_00119700;
      }
      puVar10 = puVar12 + 1;
      uVar15 = uVar14 + 1;
    } while (CONCAT11(*(undefined1 *)puVar12,*(undefined1 *)((long)puVar12 + 1)) != uVar3);
    uVar14 = uVar14 ^ 0xffff;
  }
  *(ushort *)(param_2 + 0x36) = (ushort)(param_3 >> 8) & 0xff | (ushort)((param_3 & 0xff00ff) << 8);
  *(ushort *)(param_2 + 0x34) =
       (ushort)(uVar7 - 1 >> 8) & 0xff | (ushort)((uVar7 - 1 & 0xff00ff) << 8);
  uVar14 = uVar14 + uVar7;
  if ((uVar14 & 0xffff) != 0) {
    uVar15 = uVar14 & 3;
    uVar16 = uVar15;
    if (2 < (uVar14 - 1 & 0xffff)) {
      uVar14 = uVar14 - uVar15;
      puVar11 = puVar10;
      puVar13 = puVar12;
      do {
        *puVar13 = *puVar11;
        puVar13[1] = puVar11[1];
        puVar13[2] = puVar11[2];
        puVar10 = puVar11 + 4;
        puVar12 = puVar13 + 4;
        uVar14 = uVar14 - 4;
        puVar13[3] = puVar11[3];
        puVar11 = puVar10;
        puVar13 = puVar12;
      } while ((uVar14 & 0xffff) != 0);
    }
    while (uVar16 != 0) {
      uVar15 = uVar15 - 1;
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
      uVar16 = uVar15 & 0xffff;
    }
  }
  iVar8 = 1;
LAB_00119700:
  puVar12 = (undefined2 *)
            (param_2 +
            ((ulong)*(byte *)(param_2 + 0x40) << 0x18 | (ulong)*(byte *)(param_2 + 0x41) << 0x10 |
             (ulong)*(byte *)(param_2 + 0x42) << 8 | (ulong)*(byte *)(param_2 + 0x43)));
  puVar10 = puVar12 + 1;
  if (CONCAT11(*(undefined1 *)puVar12,*(undefined1 *)((long)puVar12 + 1)) == uVar3) {
    uVar7 = uVar7 + 0xffff;
  }
  else {
    uVar15 = 1;
    do {
      puVar12 = puVar10;
      uVar14 = uVar15 & 0xffff;
      if (uVar7 <= uVar14) goto LAB_0011984c;
      puVar10 = puVar12 + 1;
      uVar15 = uVar14 + 1;
    } while (CONCAT11(*(undefined1 *)puVar12,*(undefined1 *)((long)puVar12 + 1)) != uVar3);
    uVar7 = (uVar14 ^ 0xffff) + uVar7;
  }
  if ((uVar7 & 0xffff) != 0) {
    uVar3 = uVar7 & 3;
    uVar15 = uVar3;
    if (2 < (uVar7 - 1 & 0xffff)) {
      uVar7 = uVar7 - uVar3;
      puVar11 = puVar10;
      puVar13 = puVar12;
      do {
        *puVar13 = *puVar11;
        puVar13[1] = puVar11[1];
        puVar13[2] = puVar11[2];
        puVar10 = puVar11 + 4;
        puVar12 = puVar13 + 4;
        uVar7 = uVar7 - 4;
        puVar13[3] = puVar11[3];
        puVar11 = puVar10;
        puVar13 = puVar12;
      } while ((uVar7 & 0xffff) != 0);
    }
    while (uVar15 != 0) {
      uVar3 = uVar3 - 1;
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
      uVar15 = uVar3 & 0xffff;
    }
  }
  iVar8 = iVar8 + 1;
  *(undefined1 *)
   (param_2 + ((ulong)*(byte *)(param_2 + 0x20) << 0x18 | (ulong)*(byte *)(param_2 + 0x21) << 0x10 |
               (ulong)*(byte *)(param_2 + 0x22) << 8 | (ulong)*(byte *)(param_2 + 0x23)) +
   (ulong)CONCAT11(*(undefined1 *)(param_2 + 0x2e),*(undefined1 *)(param_2 + 0x2f)) *
   ((ulong)param_3 & 0xffff)) = 0;
  *(undefined2 *)(param_2 + 0x26) = *(undefined2 *)(param_2 + 0x34);
LAB_0011984c:
  iVar5 = -0x5de9;
  if (iVar8 != 1) {
    iVar5 = iVar8;
  }
  return iVar5;
}

