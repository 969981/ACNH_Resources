
void FUN_03ff9d90(long param_1,byte param_2)

{
  ulong uVar1;
  long lVar2;
  byte *pbVar3;
  ushort *puVar4;
  uint *puVar5;
  uint uVar6;
  char cVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ushort uVar11;
  ulong uVar12;
  
  cVar7 = *(char *)(param_1 + 1);
  uVar6 = (uint)param_2;
  if (cVar7 == '\x01') {
    uVar11 = *(ushort *)(param_1 + 2);
    uVar10 = uVar11 & 0xfe00 | (uVar11 >> 1 & 0x1f) << 4;
    uVar9 = (uint)(uVar11 >> 5);
  }
  else if (cVar7 == '\x02') {
    uVar11 = *(ushort *)(param_1 + 2);
    uVar10 = uVar11 & 0xfc00 | (uVar11 >> 1 & 0x3f) << 4;
    uVar9 = (uint)(uVar11 >> 6);
  }
  else {
    if (cVar7 != '\x03') {
      uVar11 = *(ushort *)(param_1 + 2);
      uVar10 = (uint)uVar11;
      goto LAB_03ff9e08;
    }
    uVar11 = *(ushort *)(param_1 + 2);
    uVar10 = uVar11 & 0xf800 | (uVar11 >> 1 & 0x7f) << 4;
    uVar9 = (uint)(uVar11 >> 7);
  }
  uVar10 = uVar10 | uVar9 & 0xe;
LAB_03ff9e08:
  uVar1 = (ulong)uVar10 + 1;
  *(ushort *)(param_1 + 2) = *(short *)(param_1 + 6) + uVar11;
  uVar10 = (uint)*(byte *)(*(long *)(param_1 + 0x78) + uVar1);
  if (uVar10 != uVar6) {
    *(byte *)(*(long *)(param_1 + 0x78) + uVar1) = param_2;
    cVar7 = (uVar6 != 0) - (uVar10 != 0);
    lVar2 = param_1 + (uVar1 >> 4);
    *(char *)(lVar2 + 0x98) = *(char *)(lVar2 + 0x98) + cVar7;
    lVar2 = param_1 + (uVar1 >> 5);
    *(char *)(lVar2 + 0x1098) = *(char *)(lVar2 + 0x1098) + cVar7;
    lVar2 = param_1 + (uVar1 >> 6);
    *(char *)(lVar2 + 0x1898) = *(char *)(lVar2 + 0x1898) + cVar7;
    uVar12 = (ulong)(param_2 >> 4);
    uVar8 = (ulong)uVar6 & 0xf;
    pbVar3 = (byte *)(*(long *)(param_1 + 0x80) + (uVar1 & 0xfffe));
    *pbVar3 = (*pbVar3 & 0x55) + (&DAT_04102780)[uVar12];
    pbVar3[1] = (pbVar3[1] & 0x55) + (&DAT_04102780)[uVar8];
    uVar10 = (uint)uVar1;
    puVar4 = (ushort *)
             (*(long *)(param_1 + 0x88) + (uVar1 & 0xffe0) + ((ulong)(uVar10 << 1) & 0x1c));
    uVar6 = uVar10 >> 3 & 2 | 1;
    uVar11 = (ushort)(0x1111 << (ulong)uVar6);
    *puVar4 = (*(short *)(&DAT_04058460 + uVar12 * 2) << (ulong)uVar6) +
              (*puVar4 & (uVar11 ^ 0xffff));
    puVar4[1] = (*(short *)(&DAT_04058460 + uVar8 * 2) << (ulong)uVar6) +
                (puVar4[1] & (uVar11 ^ 0xffff));
    puVar5 = (uint *)(*(long *)(param_1 + 0x90) + (uVar1 & 0xffc0) + ((ulong)(uVar10 << 2) & 0x38));
    uVar6 = uVar10 >> 3 & 6 | 1;
    *puVar5 = (*(int *)(&DAT_041ed274 + uVar12 * 4) << (ulong)uVar6) +
              (*puVar5 & (0x1010101 << (ulong)uVar6 ^ 0xffffffffU));
    puVar5[1] = (*(int *)(&DAT_041ed274 + uVar8 * 4) << (ulong)uVar6) +
                (puVar5[1] & (0x1010101 << (ulong)uVar6 ^ 0xffffffffU));
  }
  return;
}

