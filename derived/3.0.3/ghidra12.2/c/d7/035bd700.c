
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_035bd700(ushort *param_1,ushort *param_2,long param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  long lVar20;
  ulong uVar21;
  ushort *puVar22;
  ulong uVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  
  uVar19 = _DAT_05aa8c70;
  uVar18 = _DAT_05aa8c6e;
  uVar17 = _DAT_05aa8c6c;
  uVar16 = DAT_05aa8c64._6_2_;
  uVar15 = DAT_05aa8c64._4_2_;
  uVar14 = DAT_05aa8c64._2_2_;
  uVar13 = (ushort)DAT_05aa8c64;
  uVar12 = DAT_05aa8c62;
  uVar9 = DAT_05aa8c60;
  if ((param_4 & 1) == 0) {
    puVar22 = (ushort *)(param_3 + 8);
    uVar23 = 0xfffffffffffffff8;
    do {
      uVar9 = puVar22[-4];
      uVar23 = uVar23 + 8;
      uVar12 = (uVar9 & 0x1c) << 6 | uVar9 << 0xb;
      uVar13 = (uVar9 & 0xffe0) << 6 | (uVar9 >> 7 & 7) << 8;
      uVar9 = (uVar9 & 0xfc00) << 1 | (uVar9 >> 0xc & 7) << 8;
      *param_1 = uVar12;
      param_1[8] = uVar13;
      param_1[0x10] = uVar9;
      *param_2 = uVar12;
      param_2[8] = uVar13;
      param_2[0x10] = uVar9;
      uVar9 = puVar22[-3];
      uVar12 = (uVar9 & 0x1c) << 6 | uVar9 << 0xb;
      uVar13 = (uVar9 & 0xffe0) << 6 | (uVar9 >> 7 & 7) << 8;
      uVar9 = (uVar9 & 0xfc00) << 1 | (uVar9 >> 0xc & 7) << 8;
      param_1[1] = uVar12;
      param_1[9] = uVar13;
      param_1[0x11] = uVar9;
      param_2[1] = uVar12;
      param_2[9] = uVar13;
      param_2[0x11] = uVar9;
      uVar9 = puVar22[-2];
      uVar12 = (uVar9 & 0x1c) << 6 | uVar9 << 0xb;
      uVar13 = (uVar9 & 0xffe0) << 6 | (uVar9 >> 7 & 7) << 8;
      uVar9 = (uVar9 & 0xfc00) << 1 | (uVar9 >> 0xc & 7) << 8;
      param_1[2] = uVar12;
      param_1[10] = uVar13;
      param_1[0x12] = uVar9;
      param_2[2] = uVar12;
      param_2[10] = uVar13;
      param_2[0x12] = uVar9;
      uVar9 = puVar22[-1];
      uVar12 = (uVar9 & 0x1c) << 6 | uVar9 << 0xb;
      uVar13 = (uVar9 & 0xffe0) << 6 | (uVar9 >> 7 & 7) << 8;
      uVar9 = (uVar9 & 0xfc00) << 1 | (uVar9 >> 0xc & 7) << 8;
      param_1[3] = uVar12;
      param_1[0xb] = uVar13;
      param_1[0x13] = uVar9;
      param_2[3] = uVar12;
      param_2[0xb] = uVar13;
      param_2[0x13] = uVar9;
      uVar9 = *puVar22;
      uVar12 = (uVar9 & 0x1c) << 6 | uVar9 << 0xb;
      uVar13 = (uVar9 & 0xffe0) << 6 | (uVar9 >> 7 & 7) << 8;
      uVar9 = (uVar9 & 0xfc00) << 1 | (uVar9 >> 0xc & 7) << 8;
      param_1[4] = uVar12;
      param_1[0xc] = uVar13;
      param_1[0x14] = uVar9;
      param_2[4] = uVar12;
      param_2[0xc] = uVar13;
      param_2[0x14] = uVar9;
      uVar9 = puVar22[1];
      uVar12 = (uVar9 & 0x1c) << 6 | uVar9 << 0xb;
      uVar13 = (uVar9 & 0xffe0) << 6 | (uVar9 >> 7 & 7) << 8;
      uVar9 = (uVar9 & 0xfc00) << 1 | (uVar9 >> 0xc & 7) << 8;
      param_1[5] = uVar12;
      param_1[0xd] = uVar13;
      param_1[0x15] = uVar9;
      param_2[5] = uVar12;
      param_2[0xd] = uVar13;
      param_2[0x15] = uVar9;
      uVar9 = puVar22[2];
      uVar12 = (uVar9 & 0x1c) << 6 | uVar9 << 0xb;
      uVar13 = (uVar9 & 0xffe0) << 6 | (uVar9 >> 7 & 7) << 8;
      uVar9 = (uVar9 & 0xfc00) << 1 | (uVar9 >> 0xc & 7) << 8;
      param_1[6] = uVar12;
      param_1[0xe] = uVar13;
      param_1[0x16] = uVar9;
      param_2[6] = uVar12;
      param_2[0xe] = uVar13;
      param_2[0x16] = uVar9;
      uVar9 = puVar22[3];
      puVar22 = puVar22 + 8;
      uVar12 = (uVar9 & 0x1c) << 6 | uVar9 << 0xb;
      uVar13 = (uVar9 & 0xffe0) << 6 | (uVar9 >> 7 & 7) << 8;
      uVar9 = (uVar9 & 0xfc00) << 1 | (uVar9 >> 0xc & 7) << 8;
      param_1[7] = uVar12;
      param_1[0xf] = uVar13;
      param_1[0x17] = uVar9;
      param_2[0x17] = uVar9;
      param_2[7] = uVar12;
      param_2[0xf] = uVar13;
      param_1 = param_1 + 0x18;
      param_2 = param_2 + 0x18;
    } while (uVar23 >> 3 < 0xb3f);
  }
  else {
    uVar23 = 0;
    do {
      lVar20 = 0;
      do {
        uVar8 = *(ushort *)(param_3 + lVar20);
        bVar7 = *(byte *)((long)&DAT_05aa8c00 + ((ulong)uVar8 & 0x1f));
        bVar5 = *(byte *)((long)&DAT_05aa8c20 + ((ulong)(uVar8 >> 5) & 0x1f));
        bVar6 = *(byte *)((long)&DAT_05aa8c40 + ((ulong)(uVar8 >> 10) & 0x1f));
        uVar1 = ((uint)uVar16 * (uint)bVar5 >> 8) + ((uint)uVar13 * (uint)bVar7 >> 8) +
                ((uint)uVar19 * (uint)bVar6 >> 8);
        sVar24 = (short)uVar1;
        uVar2 = ((uint)uVar15 * (uint)bVar5 >> 8) + ((uint)uVar12 * (uint)bVar7 >> 8) +
                ((uint)uVar18 * (uint)bVar6 >> 8);
        uVar3 = ((uint)uVar14 * (uint)bVar5 >> 8) + ((uint)uVar9 * (uint)bVar7 >> 8) +
                ((uint)uVar17 * (uint)bVar6 >> 8);
        puVar22 = (ushort *)((long)param_1 + lVar20);
        if (0x7f7f < (uVar1 & 0xffff)) {
          sVar24 = 0x7f80;
        }
        puVar4 = (ushort *)((long)param_2 + lVar20);
        lVar20 = lVar20 + 2;
        sVar25 = (short)uVar2;
        sVar26 = (short)uVar3;
        if (0x7f7f < (uVar2 & 0xffff)) {
          sVar25 = 0x7f80;
        }
        uVar8 = sVar24 * 2 + 0x80U & 0xff00;
        if (0x7f7f < (uVar3 & 0xffff)) {
          sVar26 = 0x7f80;
        }
        *puVar22 = uVar8;
        uVar10 = sVar25 * 2 + 0x80U & 0xff00;
        uVar11 = sVar26 * 2 + 0x80U & 0xff00;
        puVar22[8] = uVar10;
        puVar22[0x10] = uVar11;
        *puVar4 = uVar8;
        puVar4[8] = uVar10;
        puVar4[0x10] = uVar11;
      } while (lVar20 != 0x10);
      uVar21 = uVar23 >> 3;
      param_1 = param_1 + 0x18;
      param_2 = param_2 + 0x18;
      uVar23 = uVar23 + 8;
      param_3 = param_3 + 0x10;
    } while (uVar21 < 0xb3f);
  }
  return;
}

