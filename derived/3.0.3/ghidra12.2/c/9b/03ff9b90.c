
void FUN_03ff9b90(long param_1,byte param_2)

{
  long lVar1;
  byte *pbVar2;
  ushort *puVar3;
  uint *puVar4;
  uint uVar5;
  char cVar6;
  ulong uVar7;
  ushort uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  
  cVar6 = *(char *)(param_1 + 1);
  uVar5 = (uint)param_2;
  if (cVar6 == '\x01') {
    uVar8 = *(ushort *)(param_1 + 2);
    uVar9 = uVar8 & 0xfe00 | (uVar8 >> 1 & 0x1f) << 4;
    uVar11 = (uint)(uVar8 >> 5);
  }
  else if (cVar6 == '\x02') {
    uVar8 = *(ushort *)(param_1 + 2);
    uVar9 = uVar8 & 0xfc00 | (uVar8 >> 1 & 0x3f) << 4;
    uVar11 = (uint)(uVar8 >> 6);
  }
  else {
    if (cVar6 != '\x03') {
      uVar8 = *(ushort *)(param_1 + 2);
      uVar9 = (uint)uVar8;
      goto LAB_03ff9c08;
    }
    uVar8 = *(ushort *)(param_1 + 2);
    uVar9 = uVar8 & 0xf800 | (uVar8 >> 1 & 0x7f) << 4;
    uVar11 = (uint)(uVar8 >> 7);
  }
  uVar9 = uVar9 | uVar11 & 0xe;
LAB_03ff9c08:
  *(ushort *)(param_1 + 2) = *(short *)(param_1 + 4) + uVar8;
  uVar10 = (ulong)uVar9;
  uVar11 = (uint)*(byte *)(*(long *)(param_1 + 0x78) + uVar10);
  if (uVar11 != uVar5) {
    *(byte *)(*(long *)(param_1 + 0x78) + uVar10) = param_2;
    cVar6 = (uVar5 != 0) - (uVar11 != 0);
    lVar1 = param_1 + (ulong)(uVar9 >> 4);
    *(char *)(lVar1 + 0x98) = *(char *)(lVar1 + 0x98) + cVar6;
    lVar1 = param_1 + (ulong)(uVar9 >> 5);
    *(char *)(lVar1 + 0x1098) = *(char *)(lVar1 + 0x1098) + cVar6;
    lVar1 = param_1 + (ulong)(uVar9 >> 6);
    *(char *)(lVar1 + 0x1898) = *(char *)(lVar1 + 0x1898) + cVar6;
    uVar12 = (ulong)(param_2 >> 4);
    uVar7 = (ulong)uVar5 & 0xf;
    pbVar2 = (byte *)(*(long *)(param_1 + 0x80) + (uVar10 & 0xfffe));
    *pbVar2 = (*pbVar2 & 0xaa) + (&DAT_04101f80)[uVar12];
    pbVar2[1] = (pbVar2[1] & 0xaa) + (&DAT_04101f80)[uVar7];
    puVar3 = (ushort *)
             (*(long *)(param_1 + 0x88) + (uVar10 & 0xffe0) + ((ulong)(uVar9 << 1) & 0x1c));
    uVar5 = uVar9 >> 3 & 2;
    uVar8 = (ushort)(0x1111 << (ulong)uVar5);
    *puVar3 = (*(short *)(&DAT_04058460 + uVar12 * 2) << (ulong)uVar5) +
              (*puVar3 & (uVar8 ^ 0xffff));
    puVar3[1] = (*(short *)(&DAT_04058460 + uVar7 * 2) << (ulong)uVar5) +
                (puVar3[1] & (uVar8 ^ 0xffff));
    puVar4 = (uint *)(*(long *)(param_1 + 0x90) + (uVar10 & 0xffc0) + ((ulong)(uVar9 << 2) & 0x38));
    uVar5 = uVar9 >> 3 & 6;
    *puVar4 = (*(int *)(&DAT_041ed274 + uVar12 * 4) << (ulong)uVar5) +
              (*puVar4 & (0x1010101 << (ulong)uVar5 ^ 0xffffffffU));
    puVar4[1] = (*(int *)(&DAT_041ed274 + uVar7 * 4) << (ulong)uVar5) +
                (puVar4[1] & (0x1010101 << (ulong)uVar5 ^ 0xffffffffU));
  }
  return;
}

