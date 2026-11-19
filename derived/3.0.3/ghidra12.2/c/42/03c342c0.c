
ulong FUN_03c342c0(undefined2 *param_1,ulong param_2,ulong *param_3,ulong param_4,long param_5)

{
  long lVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 *puVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  
  if (param_4 == 0) {
    return 0xffffffffffffffb8;
  }
  lVar11 = param_4 - 8;
  if (param_4 < 8) {
    uVar8 = (ulong)(byte)*param_3;
    switch(param_4) {
    case 7:
      uVar8 = uVar8 | (ulong)*(byte *)((long)param_3 + 6) << 0x30;
    case 6:
      uVar8 = uVar8 + ((ulong)*(byte *)((long)param_3 + 5) << 0x28);
    case 5:
      uVar8 = uVar8 + ((ulong)*(byte *)((long)param_3 + 4) << 0x20);
    case 4:
      uVar8 = uVar8 + (ulong)*(byte *)((long)param_3 + 3) * 0x1000000;
    case 3:
      uVar8 = uVar8 + (ulong)*(byte *)((long)param_3 + 2) * 0x10000;
    case 2:
      uVar8 = uVar8 + (ulong)*(byte *)((long)param_3 + 1) * 0x100;
    }
    uVar9 = (uint)*(byte *)((long)param_3 + (param_4 - 1));
    if (uVar9 == 0) {
      return 0xffffffffffffffec;
    }
    lVar11 = 0;
    uVar9 = (int)LZCOUNT(uVar9) + (int)param_4 * -8 + 0x29;
  }
  else {
    uVar9 = (uint)*(byte *)((long)param_3 + (param_4 - 1));
    if (uVar9 == 0) {
      return 0xffffffffffffffff;
    }
    if (0xffffffffffffff88 < param_4) {
      return param_4;
    }
    uVar8 = *(ulong *)((long)param_3 + lVar11);
    uVar9 = (int)LZCOUNT(uVar9) - 0x17;
  }
  uVar12 = (ulong)uVar9;
  puVar2 = (undefined2 *)((long)param_1 + param_2);
  lVar1 = param_5 + 4;
  uVar9 = -(uint)*(ushort *)(param_5 + 2) & 0x3f;
  do {
    uVar10 = (uint)uVar12;
    if (lVar11 < 8) {
      if (lVar11 == 0) {
        lVar11 = 0;
        puVar13 = param_3;
        goto LAB_03c344ac;
      }
      bVar6 = (ulong *)((long)param_3 + (lVar11 - (uVar12 >> 3))) < param_3;
      uVar7 = (uint)lVar11;
      if (!bVar6) {
        uVar7 = (uint)(uVar12 >> 3);
      }
      uVar10 = uVar10 + uVar7 * -8;
    }
    else {
      bVar6 = false;
      uVar7 = uVar10 >> 3;
      uVar10 = uVar10 & 7;
    }
    uVar12 = (ulong)uVar10;
    lVar11 = lVar11 - (ulong)uVar7;
    uVar8 = *(ulong *)((long)param_3 + lVar11);
    if (((undefined2 *)((long)puVar2 - 7U) <= param_1) || (bVar6)) {
      puVar13 = (ulong *)((long)param_3 + lVar11);
      goto joined_r0x03c344a0;
    }
    puVar3 = (undefined2 *)(lVar1 + ((uVar8 << (uVar12 & 0x3f)) >> uVar9) * 4);
    *param_1 = *puVar3;
    bVar5 = *(byte *)(puVar3 + 1);
    param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar3 + 3));
    puVar3 = (undefined2 *)(lVar1 + ((uVar8 << ((ulong)(uVar10 + bVar5) & 0x3f)) >> uVar9) * 4);
    *param_1 = *puVar3;
    uVar10 = uVar10 + bVar5 + (uint)*(byte *)(puVar3 + 1);
    param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar3 + 3));
    puVar3 = (undefined2 *)(lVar1 + ((uVar8 << ((ulong)uVar10 & 0x3f)) >> uVar9) * 4);
    *param_1 = *puVar3;
    uVar10 = uVar10 + *(byte *)(puVar3 + 1);
    param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar3 + 3));
    puVar3 = (undefined2 *)(lVar1 + ((uVar8 << ((ulong)uVar10 & 0x3f)) >> uVar9) * 4);
    *param_1 = *puVar3;
    uVar10 = uVar10 + *(byte *)(puVar3 + 1);
    uVar12 = (ulong)uVar10;
    param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar3 + 3));
  } while (uVar10 < 0x41);
  puVar13 = (ulong *)((long)param_3 + lVar11);
LAB_03c34558:
  for (; uVar10 = (uint)uVar12, param_1 <= puVar2 + -1;
      param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar3 + 3))) {
    puVar3 = (undefined2 *)(lVar1 + ((uVar8 << (uVar12 & 0x3f)) >> uVar9) * 4);
    *param_1 = *puVar3;
    uVar12 = (ulong)(uVar10 + *(byte *)(puVar3 + 1));
  }
  if (param_1 < puVar2) {
    puVar4 = (undefined1 *)(lVar1 + ((uVar8 << (uVar12 & 0x3f)) >> uVar9) * 4);
    *(undefined1 *)param_1 = *puVar4;
    if (puVar4[3] == '\x01') {
      uVar10 = uVar10 + (byte)puVar4[2];
    }
    else if ((uVar10 < 0x40) && (uVar10 = uVar10 + (byte)puVar4[2], 0x3f < uVar10)) {
      uVar10 = 0x40;
    }
  }
  if (uVar10 != 0x40 || puVar13 != param_3) {
    param_2 = 0xffffffffffffffec;
  }
  return param_2;
joined_r0x03c344a0:
  if (0x40 < uVar10) goto LAB_03c34558;
  if (lVar11 < 8) {
LAB_03c344ac:
    if (lVar11 == 0) goto LAB_03c34558;
    bVar6 = (ulong *)((long)puVar13 - (uVar12 >> 3)) < param_3;
    uVar7 = (uint)lVar11;
    if (!bVar6) {
      uVar7 = (uint)(uVar12 >> 3);
    }
    uVar10 = (int)uVar12 + uVar7 * -8;
  }
  else {
    bVar6 = false;
    uVar7 = (uint)uVar12 >> 3;
    uVar10 = (uint)uVar12 & 7;
  }
  uVar12 = (ulong)uVar10;
  lVar11 = lVar11 - (ulong)uVar7;
  puVar13 = (ulong *)((long)param_3 + lVar11);
  uVar8 = *puVar13;
  if ((puVar2 + -1 < param_1) || (bVar6)) goto LAB_03c34558;
  puVar3 = (undefined2 *)(lVar1 + ((uVar8 << (uVar12 & 0x3f)) >> uVar9) * 4);
  *param_1 = *puVar3;
  uVar10 = uVar10 + *(byte *)(puVar3 + 1);
  uVar12 = (ulong)uVar10;
  param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar3 + 3));
  goto joined_r0x03c344a0;
}

