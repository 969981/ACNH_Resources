
ulong FUN_03c32e00(undefined1 *param_1,ulong param_2,byte *param_3,ulong param_4,long param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  undefined1 *puVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  
  if (param_4 == 0) {
    return 0xffffffffffffffb8;
  }
  lVar10 = param_4 - 8;
  if (param_4 < 8) {
    uVar9 = (ulong)*param_3;
    switch(param_4) {
    case 7:
      uVar9 = uVar9 | (ulong)param_3[6] << 0x30;
    case 6:
      uVar9 = uVar9 + ((ulong)param_3[5] << 0x28);
    case 5:
      uVar9 = uVar9 + ((ulong)param_3[4] << 0x20);
    case 4:
      uVar9 = uVar9 + (ulong)param_3[3] * 0x1000000;
    case 3:
      uVar9 = uVar9 + (ulong)param_3[2] * 0x10000;
    case 2:
      uVar9 = uVar9 + (ulong)param_3[1] * 0x100;
    }
    if (param_3[param_4 - 1] == 0) {
      return 0xffffffffffffffec;
    }
    lVar10 = 0;
    uVar5 = (int)LZCOUNT((uint)param_3[param_4 - 1]) + (int)param_4 * -8 + 0x29;
  }
  else {
    if (param_3[param_4 - 1] == 0) {
      return 0xffffffffffffffff;
    }
    if (0xffffffffffffff88 < param_4) {
      return param_4;
    }
    uVar9 = *(ulong *)(param_3 + lVar10);
    uVar5 = (int)LZCOUNT((uint)param_3[param_4 - 1]) - 0x17;
  }
  uVar12 = (ulong)uVar5;
  puVar2 = param_1 + param_2;
  lVar1 = param_5 + 4;
  uVar5 = -(uint)*(ushort *)(param_5 + 2) & 0x3f;
  while( true ) {
    uVar11 = (uint)uVar12;
    puVar7 = param_1;
    if (lVar10 < 8) {
      pbVar13 = param_3 + lVar10;
      if (lVar10 == 0) goto LAB_03c32fa8;
      bVar6 = pbVar13 + -(uVar12 >> 3) < param_3;
      uVar8 = (uint)lVar10;
      if (!bVar6) {
        uVar8 = (uint)(uVar12 >> 3);
      }
      uVar11 = uVar11 + uVar8 * -8;
    }
    else {
      bVar6 = false;
      uVar8 = uVar11 >> 3;
      uVar11 = uVar11 & 7;
    }
    uVar12 = (ulong)uVar11;
    lVar10 = lVar10 - (ulong)uVar8;
    uVar9 = *(ulong *)(param_3 + lVar10);
    if ((puVar2 + -3 <= param_1) || (bVar6)) break;
    puVar7 = (undefined1 *)(lVar1 + ((uVar9 << (uVar12 & 0x3f)) >> uVar5) * 2);
    uVar11 = uVar11 + (byte)puVar7[1];
    *param_1 = *puVar7;
    puVar7 = (undefined1 *)(lVar1 + ((uVar9 << ((ulong)uVar11 & 0x3f)) >> uVar5) * 2);
    uVar11 = uVar11 + (byte)puVar7[1];
    param_1[1] = *puVar7;
    puVar7 = (undefined1 *)(lVar1 + ((uVar9 << ((ulong)uVar11 & 0x3f)) >> uVar5) * 2);
    uVar11 = uVar11 + (byte)puVar7[1];
    param_1[2] = *puVar7;
    puVar7 = param_1 + 4;
    puVar3 = (undefined1 *)(lVar1 + ((uVar9 << ((ulong)uVar11 & 0x3f)) >> uVar5) * 2);
    uVar11 = uVar11 + (byte)puVar3[1];
    uVar12 = (ulong)uVar11;
    param_1[3] = *puVar3;
    param_1 = puVar7;
    if (0x40 < uVar11) {
      pbVar13 = param_3 + lVar10;
LAB_03c32fa8:
      uVar11 = (uint)uVar12;
joined_r0x03c32ff4:
      if (puVar7 < puVar2) {
        lVar10 = (long)puVar2 - (long)puVar7;
        do {
          lVar10 = lVar10 + -1;
          puVar2 = (undefined1 *)(lVar1 + ((uVar9 << (uVar12 & 0x3f)) >> uVar5) * 2);
          bVar4 = puVar2[1];
          *puVar7 = *puVar2;
          uVar11 = (int)uVar12 + (uint)bVar4;
          uVar12 = (ulong)uVar11;
          puVar7 = puVar7 + 1;
        } while (lVar10 != 0);
      }
      if (uVar11 != 0x40 || pbVar13 != param_3) {
        param_2 = 0xffffffffffffffec;
      }
      return param_2;
    }
  }
  pbVar13 = param_3 + lVar10;
  goto joined_r0x03c32ff4;
}

