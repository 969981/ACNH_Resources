
void FUN_03f55a10(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ushort uVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  uint uVar11;
  short sVar12;
  ushort uVar13;
  ulong uVar14;
  short sVar15;
  uint uVar16;
  int iVar17;
  
  uVar11 = param_2 >> 4 & 3;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  if ((param_3 & 1) == 0) {
    *(short *)(param_1 + 0xb4) = (short)uVar11;
    uVar11 = 0;
    *(undefined4 *)(param_1 + 0x23c) = 1;
    sVar12 = *(short *)(param_1 + 0x22a);
  }
  else {
    sVar12 = *(short *)(param_1 + 0x3a);
  }
  *(short *)(param_1 + 0x3a) = sVar12 + 1;
  *(undefined2 *)(param_1 + 0x24) = 0;
  uVar16 = (int)*(short *)(param_1 + 0xba) * (int)sVar12;
  *(short *)(param_1 + 0x18) = *(short *)(param_1 + 0xba);
  uVar7 = uVar16 >> 0xf;
  *(short *)(param_1 + 0x1c) = (short)uVar7;
  *(short *)(param_1 + 0x1e) = (short)uVar16 * 2;
  uVar11 = (uVar11 | uVar7 & 0xffff) + (uint)*(ushort *)(param_1 + 0x1b8);
  *(short *)(param_1 + 0x14) = (short)uVar11;
  *(short *)(param_1 + 0x1a) = (short)uVar11;
  if ((uVar11 & 0xffff) == 0) {
    *(undefined2 *)(param_1 + 0x16) = 0;
  }
  else {
    uVar5 = 0;
    do {
      uVar13 = uVar5;
      uVar16 = uVar11;
      uVar11 = uVar16 << 1;
      uVar5 = uVar13 + 1;
    } while ((uVar16 >> 0xe & 1) == (uVar16 & 0x8000) >> 0xf);
    *(short *)(param_1 + 0x1a) = (short)uVar16;
    *(short *)(param_1 + 0x14) = (short)uVar16;
    *(ushort *)(param_1 + 0x16) = 7 - uVar13;
    *(ushort *)(param_1 + 0x24) = uVar13 & 0xf0;
  }
  FUN_03f577f4(param_1);
  *(undefined2 *)(param_1 + 0x24) = 0xcc;
  uVar11 = (int)*(short *)(param_1 + 0xc0) * (int)*(short *)(param_1 + 0x14);
  sVar12 = (short)(uVar11 >> 0xf);
  iVar4 = (uint)*(ushort *)(param_1 + 0x1c0) + (uint)*(ushort *)(param_1 + 0x16);
  *(short *)(param_1 + 0x20) = sVar12;
  *(short *)(param_1 + 0x22) = (short)iVar4;
  if ((uVar11 >> 0xf & 0xffff) == 0) {
    iVar17 = 0;
LAB_03f55b7c:
    *(short *)(param_1 + 0x18) = sVar12;
    sVar15 = *(short *)(&DAT_041ea9d8 + (ulong)(iVar17 + 0x22U & 0x3ff) * 2);
    *(short *)(param_1 + 0x1a) = sVar15;
    uVar16 = (int)sVar12 * (int)sVar15;
    sVar12 = (short)(uVar16 >> 0xf);
    *(short *)(param_1 + 0x1c) = sVar12;
    *(short *)(param_1 + 0x1e) = (short)uVar16 * 2;
LAB_03f55ba8:
    *(short *)(param_1 + 0x14) = sVar12;
  }
  else {
    uVar16 = (uVar11 & 0x7fffffff) >> 0xf;
    iVar9 = 0;
    do {
      iVar17 = iVar9;
      sVar12 = (short)uVar16;
      uVar7 = uVar16 & 0x8000;
      uVar8 = uVar16 >> 0xe;
      uVar16 = uVar16 << 1;
      iVar9 = iVar17 + 1;
    } while ((uVar8 & 1) == uVar7 >> 0xf);
    iVar17 = iVar4 - iVar17;
    if ((iVar17 - 0xfU >> 0xf & 1) != 0) goto LAB_03f55b7c;
    if ((short)(iVar17 - 0xfU) != 0) {
      bVar10 = -1 < sVar12;
      sVar12 = -0x7fff;
      if (bVar10) {
        sVar12 = 0x7fff;
      }
      goto LAB_03f55ba8;
    }
  }
  *(short *)(param_1 + 0xa6) = sVar12;
  *(short *)(param_1 + 0x86) = sVar12;
  uVar11 = ((int)(uVar11 * 2) >> 0xf & 0xfffffffeU) * (int)*(short *)(param_1 + 0xbe) >> 0x10;
  if (uVar11 == 0) {
    iVar17 = 0;
    sVar15 = 0;
  }
  else {
    iVar9 = 0;
    do {
      iVar17 = iVar9;
      sVar15 = (short)uVar11;
      uVar16 = uVar11 & 0x8000;
      uVar7 = uVar11 >> 0xe;
      uVar11 = uVar11 << 1;
      iVar9 = iVar17 + 1;
    } while ((uVar7 & 1) == uVar16 >> 0xf);
    iVar17 = ((uint)*(ushort *)(param_1 + 0x1be) + iVar4) - iVar17;
    *(undefined2 *)(param_1 + 0x26) = 0xf;
    sVar6 = (short)(iVar17 - 0xfU);
    *(short *)(param_1 + 0x16) = sVar6;
    if ((iVar17 - 0xfU >> 0xf & 1) == 0) {
      if (sVar6 != 0) {
        *(undefined2 *)(param_1 + 0x16) = 0;
        bVar10 = -1 < sVar15;
        sVar15 = -0x7fff;
        if (bVar10) {
          sVar15 = 0x7fff;
        }
      }
      goto LAB_03f55c60;
    }
  }
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(short *)(param_1 + 0x26) = (short)(iVar17 + 0x22U);
  sVar15 = (short)((uint)((int)sVar15 *
                         (int)*(short *)(&DAT_041ea9d8 + (ulong)(iVar17 + 0x22U & 0x3ff) * 2)) >>
                  0xf);
LAB_03f55c60:
  *(short *)(param_1 + 0xa4) = sVar15;
  *(short *)(param_1 + 0x84) = sVar15;
  *(undefined2 *)(param_1 + 0x24) = 0x2f;
  lVar1 = param_1 + 0x240;
  *(short *)(param_1 + 0x1c) =
       (short)((uint)((int)sVar15 * (int)*(short *)(param_1 + 0x124)) >> 0xf);
  *(short *)(lVar1 + (long)*(int *)(param_1 + 0x250) * 2) =
       (short)((uint)((int)sVar12 * (int)*(short *)(param_1 + 0x126)) >> 0xf);
  lVar2 = param_1 + 0x28;
  *(undefined2 *)(param_1 + 0x14) = 0;
  uVar5 = *(ushort *)(param_1 + 0x24);
  uVar13 = *(ushort *)(param_1 + 0x1c);
  lVar3 = (long)*(int *)(param_1 + 0x250) + 1;
  *(int *)(param_1 + 0x250) = (int)lVar3;
  sVar12 = *(short *)(lVar2 + (ulong)(uVar5 | 0x40) * 2);
  sVar15 = *(short *)(lVar2 + (ulong)uVar5 * 2);
  *(ushort *)(param_1 + 0x24) = uVar5 - 1;
  *(short *)(param_1 + 0x1c) = (short)((uint)((int)sVar12 * (int)sVar15) >> 0xf);
  *(ushort *)(lVar1 + lVar3 * 2) = uVar13 | *(ushort *)(param_1 + 0x16);
  *(undefined2 *)(param_1 + 0x16) = 0;
  uVar5 = *(ushort *)(param_1 + 0x1c);
  lVar3 = (long)*(int *)(param_1 + 0x250) + 1;
  uVar14 = (ulong)*(ushort *)(param_1 + 0x24) * 2;
  *(int *)(param_1 + 0x250) = (int)lVar3;
  sVar12 = *(short *)(lVar2 + (uVar14 | 0x80));
  *(short *)(param_1 + 0x18) = sVar12;
  sVar15 = *(short *)(lVar2 + uVar14);
  *(short *)(param_1 + 0x1a) = sVar15;
  uVar11 = (int)sVar12 * (int)sVar15;
  *(uint *)(param_1 + 0x1c) = (uVar11 & 0x7fffffff) >> 0xf | uVar11 * 0x20000;
  *(ushort *)(lVar1 + lVar3 * 2) = uVar5 | *(ushort *)(param_1 + 0x14);
  *(undefined2 *)(param_1 + 0x14) = 0;
  lVar2 = (long)*(int *)(param_1 + 0x250) + 1;
  uVar5 = *(ushort *)(param_1 + 0x1c) | *(ushort *)(param_1 + 0x16);
  *(int *)(param_1 + 0x250) = (int)lVar2;
  *(ushort *)(param_1 + 0x16) = uVar5;
  *(ushort *)(lVar1 + lVar2 * 2) = uVar5;
  *(int *)(param_1 + 0x250) = *(int *)(param_1 + 0x250) + 1;
  return;
}

