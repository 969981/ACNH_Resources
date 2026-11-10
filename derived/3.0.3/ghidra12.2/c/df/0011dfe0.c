
uint FUN_0011dfe0(long param_1,long param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  byte *pbVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  byte bVar18;
  
  lVar9 = *(long *)(param_2 + 8);
  uVar14 = param_3 - 3;
  if ((uVar14 & 0xff) < 4) {
    uVar11 = -((ulong)(uVar14 >> 7) & 1) & 0xfffffffffffff800 | ((ulong)uVar14 & 0xff) << 3;
    lVar17 = *(long *)(&DAT_04058500 + uVar11);
    lVar16 = *(long *)(&DAT_04057680 + uVar11);
    lVar15 = *(long *)(&DAT_040577e0 + uVar11);
    lVar12 = *(long *)(&DAT_04057d80 + uVar11);
  }
  else {
    lVar12 = 0x3f;
    lVar15 = 0x3e;
    lVar16 = 0x3d;
    lVar17 = 0x3c;
  }
  uVar6 = *(ushort *)
           (lVar9 + ((ulong)*(byte *)(lVar9 + lVar17) << 0x18 |
                     (ulong)*(byte *)(lVar9 + lVar16) << 0x10 |
                     (ulong)*(byte *)(lVar9 + lVar15) << 8 | (ulong)*(byte *)(lVar9 + lVar12)) +
           ((ulong)*(uint *)(param_2 + 0x38) & 0xffff) * 2);
  uVar3 = *(undefined1 *)(lVar9 + 0x32);
  uVar4 = *(undefined1 *)(lVar9 + 0x33);
  bVar18 = *(byte *)(param_2 + 0x5e) & 0xf;
  uVar14 = (uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8;
  uVar11 = (ulong)uVar14;
  if ((*(byte *)(param_2 + 0x5e) & 0xf) == 0) {
    if (CONCAT11(*(undefined1 *)(lVar9 + 0x2a),*(undefined1 *)(lVar9 + 0x2b)) <= uVar14) {
      return 0xd8f0;
    }
  }
  else {
    uVar1 = (uint)CONCAT11(*(undefined1 *)(lVar9 + 0x2a),*(undefined1 *)(lVar9 + 0x2b));
    if (uVar1 == 0) {
      return 0xd8f0;
    }
    do {
      uVar14 = 0;
      bVar18 = bVar18 - 1;
      do {
        uVar2 = 0;
        if (((int)uVar11 + 1U & 0xffff) < uVar1) {
          uVar2 = (int)uVar11 + 1;
        }
        uVar11 = (ulong)uVar2;
        if ((*(byte *)(lVar9 + ((ulong)*(byte *)(lVar9 + 0x20) << 0x18 |
                                (ulong)*(byte *)(lVar9 + 0x21) << 0x10 |
                                (ulong)*(byte *)(lVar9 + 0x22) << 8 | (ulong)*(byte *)(lVar9 + 0x23)
                               ) +
                      (ulong)CONCAT11(*(undefined1 *)(lVar9 + 0x2e),*(undefined1 *)(lVar9 + 0x2f)) *
                      (uVar11 & 0xffff)) & 3) != 0) goto LAB_0011e100;
        uVar14 = uVar14 + 1;
      } while ((uVar14 & 0xffff) < uVar1);
      uVar11 = 0;
LAB_0011e100:
    } while (bVar18 != 0);
    uVar14 = (uint)uVar11 & 0xffff;
    if (uVar1 <= uVar14) {
      return 0xd8f0;
    }
  }
  pbVar10 = (byte *)(lVar9 + ((ulong)*(byte *)(lVar9 + 0x20) << 0x18 |
                              (ulong)*(byte *)(lVar9 + 0x21) << 0x10 |
                              (ulong)*(byte *)(lVar9 + 0x22) << 8 | (ulong)*(byte *)(lVar9 + 0x23))
                    + (ulong)CONCAT11(*(undefined1 *)(lVar9 + 0x2e),*(undefined1 *)(lVar9 + 0x2f)) *
                      (uVar11 & 0xffff));
  *(short *)(param_1 + 0x60798) = (short)uVar11;
  bVar18 = *pbVar10;
  *(char *)(param_1 + 0x6079e) = (char)(bVar18 & 3);
  *(short *)(param_1 + 0x6079a) =
       (short)(((uint)(*(ushort *)(pbVar10 + 1) >> 8) | (*(ushort *)(pbVar10 + 1) & 0xff00ff) << 8)
              >> 7);
  *(short *)(param_1 + 0x6079c) =
       (short)(((uint)(*(ushort *)(pbVar10 + 3) >> 8) | (*(ushort *)(pbVar10 + 3) & 0xff00ff) << 8)
              >> 7);
  bVar5 = pbVar10[2];
  *(byte *)(param_1 + 0x607a1) = bVar5 & 0x7f;
  *(byte *)(param_1 + 0x6079f) = bVar5 >> 1 & 0x3f;
  bVar5 = pbVar10[4];
  *(byte *)(param_1 + 0x607a2) = bVar5 & 0x7f;
  *(byte *)(param_1 + 0x607a0) = bVar5 >> 1 & 0x3f;
  *(byte *)(param_1 + 0x607a3) = *pbVar10 >> 6 & 1;
  if (1 < (bVar18 & 3) - 1) {
    return 0xd8f0;
  }
  lVar9 = *(long *)(param_2 + 8);
  uVar1 = (uint)CONCAT11(uVar3,uVar4);
  iVar13 = uVar14 - uVar1;
  if (uVar14 < uVar1) {
    iVar13 = (uint)CONCAT11(*(undefined1 *)(lVar9 + 0x2a),*(undefined1 *)(lVar9 + 0x2b)) + iVar13;
  }
  uVar14 = (*(uint *)(lVar9 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar9 + 8) & 0xff00ff) << 8;
  if ((uVar14 >> 0x10 | uVar14 << 0x10) == 0x80030000) {
    uVar14 = (uint)*(ushort *)(param_2 + 4);
  }
  else {
    uVar14 = (uint)CONCAT11(*(undefined1 *)(lVar9 + 0x2a),*(undefined1 *)(lVar9 + 0x2b));
    if (uVar14 < 2) {
      uVar14 = (uint)*(ushort *)(param_2 + 6);
    }
    else {
      iVar8 = uVar14 - 1;
      iVar7 = 0;
      if (iVar8 != 0) {
        iVar7 = (int)(((uint)*(ushort *)(param_2 + 6) - (uint)*(ushort *)(param_2 + 4)) * iVar13) /
                iVar8;
      }
      uVar14 = (uint)*(ushort *)(param_2 + 4) + iVar7;
    }
  }
  uVar1 = (int)*(short *)(param_2 + 0x68);
  if ((short)uVar14 <= *(short *)(param_2 + 0x68)) {
    uVar1 = uVar14;
  }
  uVar2 = (int)*(short *)(param_2 + 0x6a);
  if (*(short *)(param_2 + 0x6a) <= (short)uVar14) {
    uVar2 = uVar1;
  }
  return uVar2;
}

