
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_035bd500(uint param_1,long param_2,long param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  ushort uVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  ushort uVar13;
  ushort uVar14;
  ulong uVar15;
  ushort *puVar16;
  
  if ((param_4 & 1) == 0) {
    uVar13 = (ushort)((param_1 & 0xffe0) << 6) | (ushort)((param_1 >> 7 & 7) << 8);
    uVar9 = (ushort)((param_1 & 0x1c) << 6) | (ushort)((param_1 & 0xffff) << 0xb);
    uVar14 = (ushort)((param_1 & 0xfc00) << 1) | (ushort)((param_1 >> 0xc & 7) << 8);
  }
  else {
    bVar7 = *(byte *)((long)&DAT_05aa8c00 + ((ulong)param_1 & 0x1f));
    bVar5 = *(byte *)((long)&DAT_05aa8c20 + (ulong)(param_1 >> 5 & 0x1f));
    bVar6 = *(byte *)((long)&DAT_05aa8c40 + (ulong)(param_1 >> 10 & 0x1f));
    uVar1 = ((uint)DAT_05aa8c64._6_2_ * (uint)bVar5 >> 8) +
            ((uint)(ushort)DAT_05aa8c64 * (uint)bVar7 >> 8) +
            ((uint)_DAT_05aa8c70 * (uint)bVar6 >> 8);
    sVar10 = (short)uVar1;
    uVar2 = ((uint)DAT_05aa8c64._4_2_ * (uint)bVar5 >> 8) + ((uint)DAT_05aa8c62 * (uint)bVar7 >> 8)
            + ((uint)_DAT_05aa8c6e * (uint)bVar6 >> 8);
    sVar11 = (short)uVar2;
    uVar3 = ((uint)DAT_05aa8c64._2_2_ * (uint)bVar5 >> 8) + ((uint)DAT_05aa8c60 * (uint)bVar7 >> 8)
            + ((uint)_DAT_05aa8c6c * (uint)bVar6 >> 8);
    sVar12 = (short)uVar3;
    if (0x7f7f < (uVar1 & 0xffff)) {
      sVar10 = 0x7f80;
    }
    if (0x7f7f < (uVar2 & 0xffff)) {
      sVar11 = 0x7f80;
    }
    if (0x7f7f < (uVar3 & 0xffff)) {
      sVar12 = 0x7f80;
    }
    uVar9 = sVar10 * 2 + 0x80U & 0xff00;
    uVar13 = sVar11 * 2 + 0x80U & 0xff00;
    uVar14 = sVar12 * 2 + 0x80U & 0xff00;
  }
  uVar15 = 0;
  puVar16 = (ushort *)(param_2 + 0x18);
  do {
    puVar4 = (ushort *)(param_3 + uVar15 * 2);
    puVar16[-0xc] = uVar9;
    puVar16[-0xb] = uVar9;
    bVar8 = uVar15 < 0x10de8;
    uVar15 = uVar15 + 0x18;
    puVar16[-10] = uVar9;
    puVar16[-9] = uVar9;
    puVar16[-8] = uVar9;
    puVar16[-7] = uVar9;
    puVar16[-6] = uVar9;
    puVar16[-5] = uVar9;
    puVar16[-4] = uVar13;
    puVar16[-3] = uVar13;
    puVar16[-2] = uVar13;
    puVar16[-1] = uVar13;
    *puVar16 = uVar13;
    puVar16[1] = uVar13;
    puVar16[2] = uVar13;
    puVar16[3] = uVar13;
    puVar16[4] = uVar14;
    puVar16[5] = uVar14;
    puVar16[6] = uVar14;
    puVar16[7] = uVar14;
    puVar16[8] = uVar14;
    puVar16[9] = uVar14;
    puVar16[10] = uVar14;
    puVar16[0xb] = uVar14;
    puVar16 = puVar16 + 0x18;
    *puVar4 = uVar9;
    puVar4[1] = uVar9;
    puVar4[2] = uVar9;
    puVar4[3] = uVar9;
    puVar4[4] = uVar9;
    puVar4[5] = uVar9;
    puVar4[6] = uVar9;
    puVar4[7] = uVar9;
    puVar4[8] = uVar13;
    puVar4[9] = uVar13;
    puVar4[10] = uVar13;
    puVar4[0xb] = uVar13;
    puVar4[0xc] = uVar13;
    puVar4[0xd] = uVar13;
    puVar4[0xe] = uVar13;
    puVar4[0xf] = uVar13;
    puVar4[0x10] = uVar14;
    puVar4[0x11] = uVar14;
    puVar4[0x12] = uVar14;
    puVar4[0x13] = uVar14;
    puVar4[0x14] = uVar14;
    puVar4[0x15] = uVar14;
    puVar4[0x16] = uVar14;
    puVar4[0x17] = uVar14;
  } while (bVar8);
  return;
}

