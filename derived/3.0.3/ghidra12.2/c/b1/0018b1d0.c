
void FUN_0018b1d0(long param_1,ushort *param_2,long param_3)

{
  ushort uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  uint uVar6;
  code *pcVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  ushort *puVar13;
  ushort *puVar14;
  ushort uVar15;
  long lVar16;
  ushort local_24 [2];
  
  local_24[0] = 0;
  puVar14 = local_24;
  if (param_2 != (ushort *)0x0) {
    puVar14 = param_2;
  }
  uVar9 = param_3 + 1;
  if (param_3 == -1) {
    uVar9 = 0xffffffffffffffff;
  }
  uVar1 = *puVar14;
  if (uVar1 == 0) {
    uVar10 = 1;
  }
  else {
    uVar10 = 1;
    puVar13 = puVar14;
    uVar15 = uVar1;
    do {
      puVar13 = puVar13 + 1;
      lVar16 = 2;
      if (0x7ff < uVar15) {
        lVar16 = 3;
      }
      if (uVar15 < 0x80) {
        lVar16 = 1;
      }
      uVar10 = lVar16 + uVar10;
      uVar15 = *puVar13;
    } while (uVar15 != 0);
  }
  if (uVar10 <= uVar9) {
    uVar9 = uVar10;
  }
  if (uVar9 < 2) {
    uVar9 = 1;
  }
  pbVar5 = *(byte **)(param_1 + 0x18);
  if (*(ulong *)(param_1 + 0x20) < uVar9) {
    if ((pbVar5 != (byte *)0x0) && (pbVar5 != (byte *)(param_1 + 8))) {
      pcVar7 = *(code **)(pbVar5 + -0x14);
      if (pcVar7 == (code *)0x0) {
        free(pbVar5 + -0x14);
      }
      else {
        (*pcVar7)();
      }
    }
    if (DAT_04c57ea0 == (code *)0x0) {
      puVar4 = malloc((uVar9 + 0xb & 0xfffffffffffffff8) + 0x10);
    }
    else {
      puVar4 = (undefined8 *)(*DAT_04c57ea0)();
    }
    puVar3 = PTR_DAT_04bcba28;
    *(int *)(puVar4 + 2) = (int)uVar9;
    pbVar5 = (byte *)((long)puVar4 + 0x14);
    uVar8 = *(undefined8 *)puVar3;
    *(byte **)(param_1 + 0x18) = pbVar5;
    *(ulong *)(param_1 + 0x20) = uVar9;
    *puVar4 = uVar8;
    uVar1 = *puVar14;
  }
  uVar6 = (uint)uVar1;
  uVar9 = uVar9 - 1;
  if ((uVar9 == 0) || (uVar1 == 0)) {
LAB_0018b390:
    *pbVar5 = 0;
    return;
  }
  pbVar12 = pbVar5;
  do {
    puVar14 = puVar14 + 1;
    bVar2 = (byte)uVar6;
    if (uVar6 < 0x80) {
      lVar16 = -1;
      pbVar11 = pbVar12 + 1;
      *pbVar12 = bVar2;
      uVar6 = (uint)*puVar14;
      if (*puVar14 == 0) break;
    }
    else {
      if (uVar6 < 0x800) {
        if (uVar9 < 2) goto LAB_0018b390;
        *pbVar12 = (byte)(uVar6 >> 6) | 0xc0;
        pbVar12[1] = bVar2 & 0x3f | 0x80;
        pbVar11 = pbVar12 + 2;
        lVar16 = -2;
        uVar1 = *puVar14;
      }
      else {
        if (uVar9 < 3) goto LAB_0018b390;
        *pbVar12 = (byte)(uVar6 >> 0xc) | 0xe0;
        pbVar12[1] = (byte)(uVar6 >> 6) & 0x3f | 0x80;
        pbVar12[2] = bVar2 & 0x3f | 0x80;
        pbVar11 = pbVar12 + 3;
        lVar16 = -3;
        uVar1 = *puVar14;
      }
      uVar6 = (uint)uVar1;
      if (uVar6 == 0) break;
    }
    uVar9 = lVar16 + uVar9;
    pbVar12 = pbVar11;
  } while (uVar9 != 0);
  *pbVar11 = 0;
  return;
}

