
undefined8 FUN_020ea498(byte *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  
  pbVar11 = param_1 + (ulong)param_2 * 0x15;
  if (0x6c < param_2) {
    pbVar11 = param_1;
  }
  if ((pbVar11[7] & 0x30) == 0x20) {
    pbVar11 = param_1 + (ulong)param_2 * 0x15;
    if (0x6c < param_2) {
      pbVar11 = param_1;
    }
    if (((pbVar11[7] >> 1 & 1) != 0) || ((param_3 & 1) == 0)) goto LAB_020ea534;
    pbVar11 = param_1 + 0x8f8 + (ulong)param_2 * 0x28;
    if (0x6c < param_2) {
      pbVar11 = param_1 + 0x8f8;
    }
    if (pbVar11[0x1d] == 0) goto LAB_020ea534;
    if (0x6c < param_2) {
      uVar8 = 0;
      goto LAB_020ea5d0;
    }
    uVar8 = 0;
    pbVar11 = param_1 + ((ulong)(param_2 >> 3) & 0x1ffffffc);
    uVar9 = *(uint *)(pbVar11 + 0x1a70) | 1 << (ulong)(param_2 & 0x1f);
  }
  else {
LAB_020ea534:
    pbVar11 = param_1 + 0x8f8 + (ulong)param_2 * 0x28;
    if (0x6c < param_2) {
      pbVar11 = param_1 + 0x8f8;
    }
    pbVar2 = param_1 + (ulong)param_2 * 0x15;
    if (0x6c < param_2) {
      pbVar2 = param_1;
    }
    if ((*(long *)(pbVar11 + 8) != *(long *)pbVar2 ||
        *(long *)(pbVar11 + 0x10) != *(long *)(pbVar2 + 8)) ||
        *(long *)(pbVar11 + 0x15) != *(long *)(pbVar2 + 0xd)) {
      lVar10 = *(long *)pbVar2;
      lVar3 = *(long *)(pbVar2 + 8);
      *(undefined8 *)(pbVar11 + 0x15) = *(undefined8 *)(pbVar2 + 0xd);
      *(long *)(pbVar11 + 8) = lVar10;
      *(long *)(pbVar11 + 0x10) = lVar3;
      if ((param_3 & 1) == 0) {
        pbVar11[0x1d] = 1;
      }
    }
    uVar8 = 1;
    if (0x6c < param_2) goto LAB_020ea5d0;
    pbVar11 = param_1 + ((ulong)(param_2 >> 3) & 0x1ffffffc);
    uVar9 = *(uint *)(pbVar11 + 0x1a70) & (1 << (ulong)(param_2 & 0x1f) ^ 0xffffffffU);
  }
  *(uint *)(pbVar11 + 0x1a70) = uVar9;
LAB_020ea5d0:
  puVar7 = PTR_DAT_04bbaed0;
  if (param_2 < 10) {
    puVar12 = (undefined1 *)(*(long *)PTR_DAT_04bbaed0 + (ulong)param_2 * 6);
    pbVar11 = param_1 + (ulong)param_2 * 0x15;
    if (0x6c < param_2) {
      pbVar11 = param_1;
    }
    puVar12[3] = pbVar11[3];
    bVar6 = (pbVar11[7] >> 2 & 3) << 2;
    bVar1 = puVar12[5] & 0xf0;
    puVar12[5] = bVar1 | puVar12[5] & 3 | bVar6;
    uVar9 = (uint)*pbVar11 | (pbVar11[1] & 0xf) << 8;
    if ((pbVar11[1] & 8) != 0) {
      uVar9 = uVar9 | 0xfffff000;
    }
    bVar4 = (byte)((uint)(int)(float)(int)uVar9 >> 8);
    *puVar12 = (char)(int)(float)(int)uVar9;
    puVar12[1] = puVar12[1] & 0xf0 | bVar4 & 0xf;
    uVar5 = (uint)(pbVar11[1] >> 4) | (uint)pbVar11[2] << 4;
    uVar9 = uVar5 | 0xfffff000;
    if (-1 < (char)pbVar11[2]) {
      uVar9 = uVar5;
    }
    puVar12[2] = (char)((uint)(int)(float)(int)uVar9 >> 4);
    puVar12[1] = bVar4 & 0xf | (byte)((int)(float)(int)uVar9 << 4);
    bVar4 = pbVar11[5];
    puVar12[4] = pbVar11[4];
    puVar12[5] = bVar1 | bVar6 | bVar4 & 3;
  }
  if (param_2 - 0x51 < 0x11) {
    lVar10 = *(long *)puVar7 + (ulong)(param_2 - 0x51) * 6;
    pbVar11 = param_1 + (ulong)param_2 * 0x15;
    if (0x6c < param_2) {
      pbVar11 = param_1;
    }
    *(byte *)(lVar10 + 0x73) = pbVar11[3];
    bVar6 = (pbVar11[7] >> 2 & 3) << 2;
    bVar1 = *(byte *)(lVar10 + 0x75) & 0xf0;
    *(byte *)(lVar10 + 0x75) = bVar1 | *(byte *)(lVar10 + 0x75) & 3 | bVar6;
    uVar9 = (uint)*pbVar11 | (pbVar11[1] & 0xf) << 8;
    if ((pbVar11[1] & 8) != 0) {
      uVar9 = uVar9 | 0xfffff000;
    }
    bVar4 = (byte)((uint)(int)(float)(int)uVar9 >> 8);
    *(char *)(lVar10 + 0x70) = (char)(int)(float)(int)uVar9;
    *(byte *)(lVar10 + 0x71) = *(byte *)(lVar10 + 0x71) & 0xf0 | bVar4 & 0xf;
    uVar5 = (uint)(pbVar11[1] >> 4) | (uint)pbVar11[2] << 4;
    uVar9 = uVar5 | 0xfffff000;
    if (-1 < (char)pbVar11[2]) {
      uVar9 = uVar5;
    }
    *(char *)(lVar10 + 0x72) = (char)((uint)(int)(float)(int)uVar9 >> 4);
    *(byte *)(lVar10 + 0x71) = bVar4 & 0xf | (byte)((int)(float)(int)uVar9 << 4);
    bVar4 = pbVar11[5];
    *(byte *)(lVar10 + 0x74) = pbVar11[4];
    *(byte *)(lVar10 + 0x75) = bVar1 | bVar6 | bVar4 & 3;
  }
  if (param_2 - 0x62 < 10) {
    lVar10 = *(long *)PTR_DAT_04bbcee0 + (ulong)(param_2 - 0x62) * 0x38;
    pbVar11 = param_1 + (ulong)param_2 * 0x15;
    if (0x6c < param_2) {
      pbVar11 = param_1;
    }
    *(byte *)(lVar10 + 0xc5) = pbVar11[3];
    bVar6 = (pbVar11[7] >> 2 & 3) << 2;
    bVar1 = *(byte *)(lVar10 + 199) & 0xf0;
    *(byte *)(lVar10 + 199) = bVar1 | *(byte *)(lVar10 + 199) & 3 | bVar6;
    uVar9 = (uint)*pbVar11 | (pbVar11[1] & 0xf) << 8;
    if ((pbVar11[1] & 8) != 0) {
      uVar9 = uVar9 | 0xfffff000;
    }
    bVar4 = (byte)((uint)(int)(float)(int)uVar9 >> 8);
    *(char *)(lVar10 + 0xc2) = (char)(int)(float)(int)uVar9;
    *(byte *)(lVar10 + 0xc3) = *(byte *)(lVar10 + 0xc3) & 0xf0 | bVar4 & 0xf;
    uVar5 = (uint)(pbVar11[1] >> 4) | (uint)pbVar11[2] << 4;
    uVar9 = uVar5 | 0xfffff000;
    if (-1 < (char)pbVar11[2]) {
      uVar9 = uVar5;
    }
    *(char *)(lVar10 + 0xc4) = (char)((uint)(int)(float)(int)uVar9 >> 4);
    *(byte *)(lVar10 + 0xc3) = bVar4 & 0xf | (byte)((int)(float)(int)uVar9 << 4);
    bVar4 = pbVar11[5];
    *(byte *)(lVar10 + 0xc6) = pbVar11[4];
    *(byte *)(lVar10 + 199) = bVar1 | bVar6 | bVar4 & 3;
  }
  return uVar8;
}

