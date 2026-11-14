
void FUN_0150d400(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  byte *pbVar5;
  byte bVar6;
  byte bVar7;
  short sVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  
  sVar8 = *(short *)PTR_DAT_04bb6298;
  if (sVar8 != -1) {
    puVar4 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8;
    if (0xff < (uint)(int)sVar8) {
      puVar4 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar4 + 4) & 1) != 0) {
      iVar13 = 0;
      puVar1 = (undefined8 *)(param_1 + 0x48);
      uVar10 = 0;
      do {
        uVar2 = (uint)uVar10 & 6;
        uVar14 = (uint)uVar10 + 2;
        bVar6 = *(byte *)((long)puVar1 + (uVar10 >> 3));
        iVar13 = (bVar6 >> (ulong)(uVar2 | 1) & 1) + (bVar6 >> (ulong)uVar2 & 1) + iVar13;
        uVar10 = (ulong)uVar14;
      } while (uVar14 != 100);
      iVar16 = 0;
      uVar10 = 0;
      do {
        uVar2 = (uint)uVar10 & 6;
        uVar14 = (uint)uVar10 + 2;
        bVar6 = *(byte *)(param_1 + 0x55 + (uVar10 >> 3));
        iVar16 = (bVar6 >> (ulong)(uVar2 | 1) & 1) + (bVar6 >> (ulong)uVar2 & 1) + iVar16;
        uVar10 = (ulong)uVar14;
      } while (uVar14 != 100);
      iVar16 = iVar16 + iVar13;
      if (iVar16 <= *(int *)(param_1 + 0x6c)) {
        if (*(int *)(param_1 + 0x6c) < 1) {
          return;
        }
        uVar10 = 0;
        lVar15 = param_1 + 0x62;
        do {
          uVar17 = uVar10 >> 3 & 0x1fffffff;
          uVar14 = 1 << (ulong)((uint)uVar10 & 7);
          if ((uVar14 & *(byte *)(lVar15 + uVar17)) == 0) {
            FUN_0154aec0(uVar10,puVar1);
            *(byte *)(lVar15 + uVar17) = *(byte *)(lVar15 + uVar17) | (byte)uVar14;
            break;
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 != 0x39);
        iVar13 = 0;
        uVar14 = 1;
        while( true ) {
          uVar2 = uVar14 - 1;
          iVar13 = (*(byte *)(lVar15 + (ulong)(uVar2 >> 3)) >> (ulong)(uVar2 & 6) & 1) + iVar13;
          if (uVar14 == 0x39) break;
          uVar3 = uVar14 & 7;
          uVar14 = uVar14 + 2;
          iVar13 = (*(byte *)(lVar15 + (ulong)(uVar2 >> 3)) >> (ulong)uVar3 & 1) + iVar13;
        }
        if (iVar13 == 0x39) {
          *(undefined4 *)(param_1 + 0x6c) = 0;
          *(undefined2 *)(param_1 + 0x68) = 0;
          *puVar1 = 0;
          *(undefined8 *)(param_1 + 0x50) = 0;
          *(undefined8 *)(param_1 + 0x58) = 0;
          *(undefined8 *)(param_1 + 0x60) = 0;
          return;
        }
        return;
      }
      goto LAB_0150d6ac;
    }
  }
  if (((DAT_0537d558 != (long *)0x0) && (DAT_0537d558[5] != 0)) && ((int)DAT_0537d558[0x10] == 1)) {
    return;
  }
  bVar6 = *(byte *)(*DAT_0537d558 + 0x476);
  if (bVar6 < 2) {
    iVar13 = 0;
    uVar10 = 0;
    do {
      uVar2 = (uint)uVar10 & 6;
      uVar14 = (uint)uVar10 + 2;
      bVar7 = *(byte *)(param_1 + 0x14 + (uVar10 >> 3));
      iVar13 = (bVar7 >> (ulong)(uVar2 | 1) & 1) + (bVar7 >> (ulong)uVar2 & 1) + iVar13;
      uVar10 = (ulong)uVar14;
    } while (uVar14 != 100);
    iVar16 = 0;
    uVar10 = 0;
    do {
      uVar2 = (uint)uVar10 & 6;
      uVar14 = (uint)uVar10 + 2;
      bVar7 = *(byte *)(param_1 + 0x21 + (uVar10 >> 3));
      iVar16 = (bVar7 >> (ulong)(uVar2 | 1) & 1) + (bVar7 >> (ulong)uVar2 & 1) + iVar16;
      uVar10 = (ulong)uVar14;
    } while (uVar14 != 100);
  }
  else {
    iVar13 = 0;
    uVar10 = 0;
    do {
      uVar2 = (uint)uVar10 & 6;
      uVar14 = (uint)uVar10 + 2;
      bVar7 = *(byte *)(param_1 + 0x2e + (uVar10 >> 3));
      iVar13 = (bVar7 >> (ulong)(uVar2 | 1) & 1) + (bVar7 >> (ulong)uVar2 & 1) + iVar13;
      uVar10 = (ulong)uVar14;
    } while (uVar14 != 100);
    iVar16 = 0;
    uVar10 = 0;
    do {
      uVar2 = (uint)uVar10 & 6;
      uVar14 = (uint)uVar10 + 2;
      bVar7 = *(byte *)(param_1 + 0x3b + (uVar10 >> 3));
      iVar16 = (bVar7 >> (ulong)(uVar2 | 1) & 1) + (bVar7 >> (ulong)uVar2 & 1) + iVar16;
      uVar10 = (ulong)uVar14;
    } while (uVar14 != 100);
  }
  iVar16 = iVar16 + iVar13;
  if (*(int *)(param_1 + 0x6c) < iVar16) {
LAB_0150d6ac:
    *(int *)(param_1 + 0x6c) = iVar16;
    FUN_01525640(param_1);
    return;
  }
  if (*(int *)(param_1 + 0x6c) < 1) {
    return;
  }
  uVar10 = 0;
  lVar15 = param_1 + 0x62;
  do {
    uVar17 = uVar10 >> 3 & 0x1fffffff;
    uVar14 = 1 << (ulong)((uint)uVar10 & 7);
    if ((uVar14 & *(byte *)(lVar15 + uVar17)) == 0) {
      if (bVar6 < 2) {
        lVar11 = param_1 + 0x14;
        lVar12 = param_1 + 0x21;
      }
      else {
        lVar11 = param_1 + 0x2e;
        lVar12 = param_1 + 0x3b;
      }
      FUN_0154aec0(uVar10,lVar11,lVar12);
      *(byte *)(lVar15 + uVar17) = *(byte *)(lVar15 + uVar17) | (byte)uVar14;
      break;
    }
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 != 0x39);
  plVar9 = DAT_0537d558;
  iVar13 = 0;
  uVar14 = 1;
  while( true ) {
    uVar2 = uVar14 - 1;
    iVar13 = (*(byte *)(lVar15 + (ulong)(uVar2 >> 3)) >> (ulong)(uVar2 & 6) & 1) + iVar13;
    if (uVar14 == 0x39) break;
    uVar3 = uVar14 & 7;
    uVar14 = uVar14 + 2;
    iVar13 = (*(byte *)(lVar15 + (ulong)(uVar2 >> 3)) >> (ulong)uVar3 & 1) + iVar13;
  }
  if (iVar13 != 0x39) {
    return;
  }
  if (1 < bVar6) {
    *(undefined2 *)(param_1 + 0x46) = 0;
    *(undefined8 *)(param_1 + 0x3e) = 0;
    *(undefined8 *)(param_1 + 0x36) = 0;
    *(undefined8 *)(param_1 + 0x2e) = 0;
    lVar15 = *plVar9;
    bVar6 = *(byte *)(lVar15 + 0x473);
    if ((long)(char)bVar6 != 0xffffffffffffffff) {
      pbVar5 = (byte *)(lVar15 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x80;
      if (7 < bVar6) {
        pbVar5 = (byte *)(lVar15 + 0x48);
      }
      if (((*pbVar5 >> 3 & 1) != 0) && (*(byte *)(lVar15 + 0x472) != bVar6)) goto LAB_0150d7f0;
    }
  }
  *(undefined2 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
LAB_0150d7f0:
  *(undefined8 *)(param_1 + 0x62) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return;
}

