
void FUN_020ea9b0(long param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  uint uVar8;
  byte bVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  byte *pbVar14;
  
  lVar10 = 0;
  uVar13 = 0;
  uVar11 = 0;
  lVar12 = *(long *)PTR_DAT_04bbaed0;
  do {
    lVar4 = param_1 + 0x8f8 + uVar11 * 0x28;
    if (0x6c < (uint)uVar13) {
      lVar4 = param_1 + 0x8f8;
    }
    pbVar14 = (byte *)(param_1 + (long)(int)uVar11 * 0x15);
    uVar5 = *(undefined8 *)(lVar4 + 8);
    uVar6 = *(undefined8 *)(lVar4 + 0x10);
    *(undefined8 *)(pbVar14 + 0xd) = *(undefined8 *)(lVar4 + 0x15);
    *(undefined8 *)pbVar14 = uVar5;
    *(undefined8 *)(pbVar14 + 8) = uVar6;
    puVar1 = (undefined1 *)(lVar12 + 2 + lVar10);
    lVar10 = lVar10 + 6;
    puVar1[1] = (char)((ulong)uVar5 >> 0x18);
    bVar9 = (pbVar14[7] >> 2 & 3) << 2;
    bVar3 = puVar1[3] & 0xf0;
    puVar1[3] = bVar3 | puVar1[3] & 3 | bVar9;
    uVar2 = (uint)*pbVar14 | (pbVar14[1] & 0xf) << 8;
    if ((pbVar14[1] & 8) != 0) {
      uVar2 = uVar2 | 0xfffff000;
    }
    bVar7 = (byte)((uint)(int)(float)(int)uVar2 >> 8);
    puVar1[-2] = (char)(int)(float)(int)uVar2;
    puVar1[-1] = puVar1[-1] & 0xf0 | bVar7 & 0xf;
    uVar8 = (uint)(pbVar14[1] >> 4) | (uint)pbVar14[2] << 4;
    uVar2 = uVar8 | 0xfffff000;
    if (-1 < (char)pbVar14[2]) {
      uVar2 = uVar8;
    }
    puVar1[-1] = bVar7 & 0xf | (byte)((int)(float)(int)uVar2 << 4);
    *puVar1 = (char)((uint)(int)(float)(int)uVar2 >> 4);
    bVar7 = pbVar14[5];
    uVar13 = uVar11 + 1;
    uVar11 = uVar13 & 0xffffffff;
    puVar1[2] = pbVar14[4];
    puVar1[3] = bVar3 | bVar9 | bVar7 & 3;
  } while (lVar10 != 0x3c);
  return;
}

