
byte * FUN_020ea330(byte *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  byte *pbVar5;
  undefined8 uVar6;
  byte bVar7;
  uint uVar8;
  byte bVar9;
  undefined8 uVar10;
  
  pbVar5 = param_1 + 0x8f8 + (ulong)param_2 * 0x28;
  if (0x6c < param_2) {
    pbVar5 = param_1 + 0x8f8;
  }
  pbVar3 = param_1 + (ulong)param_2 * 0x15;
  if (0x6c < param_2) {
    pbVar3 = param_1;
  }
  uVar10 = *(undefined8 *)(pbVar5 + 0x15);
  uVar6 = *(undefined8 *)(pbVar5 + 0x10);
  *(undefined8 *)pbVar3 = *(undefined8 *)(pbVar5 + 8);
  *(undefined8 *)(pbVar3 + 8) = uVar6;
  *(undefined8 *)(pbVar3 + 0xd) = uVar10;
  if ((0x61 < (int)param_2) && ((int)param_2 < 0x6c)) {
    lVar4 = *(long *)PTR_DAT_04bbcee0 + 0x90 + (ulong)(param_2 - 0x62) * 0x38;
    if (9 < param_2 - 0x62) {
      lVar4 = *(long *)PTR_DAT_04bbcee0 + 0x90;
    }
    pbVar5 = param_1 + (ulong)param_2 * 0x15;
    if (0x6c < param_2) {
      pbVar5 = param_1;
    }
    *(byte *)(lVar4 + 0x35) = pbVar5[3];
    bVar9 = (pbVar5[7] >> 2 & 3) << 2;
    bVar2 = *(byte *)(lVar4 + 0x37) & 0xf0;
    *(byte *)(lVar4 + 0x37) = bVar2 | *(byte *)(lVar4 + 0x37) & 3 | bVar9;
    uVar1 = (uint)*pbVar5 | (pbVar5[1] & 0xf) << 8;
    if ((pbVar5[1] & 8) != 0) {
      uVar1 = uVar1 | 0xfffff000;
    }
    bVar7 = (byte)((uint)(int)(float)(int)uVar1 >> 8);
    *(char *)(lVar4 + 0x32) = (char)(int)(float)(int)uVar1;
    *(byte *)(lVar4 + 0x33) = *(byte *)(lVar4 + 0x33) & 0xf0 | bVar7 & 0xf;
    uVar8 = (uint)(pbVar5[1] >> 4) | (uint)pbVar5[2] << 4;
    uVar1 = uVar8 | 0xfffff000;
    if (-1 < (char)pbVar5[2]) {
      uVar1 = uVar8;
    }
    *(char *)(lVar4 + 0x34) = (char)((uint)(int)(float)(int)uVar1 >> 4);
    *(byte *)(lVar4 + 0x33) = bVar7 & 0xf | (byte)((int)(float)(int)uVar1 << 4);
    bVar7 = pbVar5[5];
    *(byte *)(lVar4 + 0x36) = pbVar5[4];
    *(byte *)(lVar4 + 0x37) = bVar2 | bVar9 | bVar7 & 3;
  }
  pbVar5 = param_1 + (ulong)param_2 * 0x15;
  if (0x6c < param_2) {
    pbVar5 = param_1;
  }
  return pbVar5;
}

