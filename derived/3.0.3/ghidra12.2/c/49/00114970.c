
undefined8 FUN_00114970(long param_1,long param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  int iVar10;
  ushort uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auStack_c0 [112];
  
  if ((*(byte *)(param_1 + 0x5f) & 0xf) == 3) {
    uVar12 = 0;
  }
  else {
    lVar13 = *(long *)(param_1 + 8);
    uVar4 = *(uint *)(param_1 + 0x38);
    bVar5 = *(byte *)(lVar13 + 0x24);
    bVar6 = *(byte *)(lVar13 + 0x25);
    bVar7 = *(byte *)(lVar13 + 0x26);
    bVar8 = *(byte *)(lVar13 + 0x27);
    *(ushort *)(param_2 + 0x70) = *(ushort *)(param_2 + 0x70) & 0xff80 | 1;
    uVar12 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_2 + 0x28) = uVar3;
    *(undefined8 *)(param_2 + 0x10) = uVar12;
    *(undefined8 *)(param_2 + 0x18) = uVar2;
    uVar12 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_2 + 0x48) = uVar3;
    *(undefined8 *)(param_2 + 0x30) = uVar12;
    *(undefined8 *)(param_2 + 0x38) = uVar2;
    uVar12 = *(undefined8 *)(param_1 + 0x48);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_2 + 0x68) = uVar3;
    *(undefined8 *)(param_2 + 0x50) = uVar12;
    *(undefined8 *)(param_2 + 0x58) = uVar2;
    uVar11 = FUN_00114b00(param_2,auStack_c0,0x70);
    if ((short)uVar11 < 1) {
      uVar12 = 0x9b11;
    }
    else {
      pbVar1 = (byte *)(lVar13 + ((ulong)bVar5 << 0x18 | (ulong)bVar6 << 0x10 | (ulong)bVar7 << 8 |
                                 (ulong)bVar8) + (ulong)uVar4);
      *(ushort *)(param_2 + 0x70) = uVar11;
      *(ushort *)(param_2 + 0x70) = uVar11 | ((ushort)(pbVar1[1] >> 7) | (ushort)*pbVar1 << 1) << 7;
      bVar5 = pbVar1[2];
      bVar6 = pbVar1[1];
      *(undefined1 *)(param_2 + 0x75) = 0;
      uVar9 = ((ushort)(bVar5 >> 6) | (ushort)bVar6 << 2) << 7;
      *(ushort *)(param_2 + 0x72) = uVar9;
      uVar4 = ((uint)(pbVar1[6] >> 4) | (uint)pbVar1[5] << 4) >> 1 & 0x7f;
      if (uVar4 != 0) {
        uVar11 = (ushort)uVar4;
      }
      *(ushort *)(param_2 + 0x72) = uVar11 | uVar9;
      bVar5 = pbVar1[2];
      uVar11 = *(ushort *)(param_1 + 6);
      uVar9 = *(ushort *)(param_1 + 4);
      *(undefined1 *)(param_2 + 0x74) = 0;
      iVar10 = ((uint)uVar11 - (uint)uVar9) * (bVar5 & 0x3f);
      uVar12 = 1;
      *(ushort *)(param_2 + 8) =
           uVar9 + ((short)((ulong)((long)iVar10 * 0x82082083) >> 0x25) - (short)(iVar10 >> 0x1f));
    }
  }
  return uVar12;
}

