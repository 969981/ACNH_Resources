
void FUN_01525810(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  byte *pbVar5;
  byte bVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  
  plVar7 = DAT_0537d558;
  if (DAT_04c487d4 != -1) {
    puVar4 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar4 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar4 + 4) & 1) != 0) {
      iVar8 = 0;
      puVar2 = (undefined8 *)(param_1 + 0x48);
      uVar11 = 0;
      do {
        uVar3 = (uint)uVar11 & 6;
        uVar1 = (uint)uVar11 + 2;
        bVar6 = *(byte *)((long)puVar2 + (uVar11 >> 3));
        iVar8 = (bVar6 >> (ulong)(uVar3 | 1) & 1) + (bVar6 >> (ulong)uVar3 & 1) + iVar8;
        uVar11 = (ulong)uVar1;
      } while (uVar1 != 100);
      iVar10 = 0;
      uVar11 = 0;
      do {
        uVar3 = (uint)uVar11 & 6;
        uVar1 = (uint)uVar11 + 2;
        bVar6 = *(byte *)(param_1 + 0x55 + (uVar11 >> 3));
        iVar10 = (bVar6 >> (ulong)(uVar3 | 1) & 1) + (bVar6 >> (ulong)uVar3 & 1) + iVar10;
        uVar11 = (ulong)uVar1;
      } while (uVar1 != 100);
      *(int *)(param_1 + 0x6c) = iVar10 + iVar8;
      if (iVar10 + iVar8 < 1) {
        return;
      }
      uVar11 = 0;
      do {
        if ((*(byte *)(param_1 + 0x62 + (uVar11 >> 3 & 0x1fffffff)) >> (ulong)((uint)uVar11 & 7) & 1
            ) == 0) {
          FUN_0154aec0(uVar11,puVar2,param_1 + 0x55);
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != 0x39);
      *(undefined2 *)(param_1 + 0x68) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *puVar2 = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      return;
    }
  }
  if (((DAT_0537d558 != (long *)0x0) && (DAT_0537d558[5] != 0)) && ((int)DAT_0537d558[0x10] == 1)) {
    return;
  }
  if (*(byte *)(*DAT_0537d558 + 0x476) < 2) {
    iVar8 = 0;
    uVar11 = 0;
    do {
      uVar3 = (uint)uVar11 & 6;
      uVar1 = (uint)uVar11 + 2;
      bVar6 = *(byte *)(param_1 + 0x14 + (uVar11 >> 3));
      iVar8 = (bVar6 >> (ulong)(uVar3 | 1) & 1) + (bVar6 >> (ulong)uVar3 & 1) + iVar8;
      uVar11 = (ulong)uVar1;
    } while (uVar1 != 100);
    iVar10 = 0;
    uVar11 = 0;
    do {
      uVar3 = (uint)uVar11 & 6;
      uVar1 = (uint)uVar11 + 2;
      bVar6 = *(byte *)(param_1 + 0x21 + (uVar11 >> 3));
      iVar10 = (bVar6 >> (ulong)(uVar3 | 1) & 1) + (bVar6 >> (ulong)uVar3 & 1) + iVar10;
      uVar11 = (ulong)uVar1;
    } while (uVar1 != 100);
  }
  else {
    iVar8 = 0;
    uVar11 = 0;
    do {
      uVar3 = (uint)uVar11 & 6;
      uVar1 = (uint)uVar11 + 2;
      bVar6 = *(byte *)(param_1 + 0x2e + (uVar11 >> 3));
      iVar8 = (bVar6 >> (ulong)(uVar3 | 1) & 1) + (bVar6 >> (ulong)uVar3 & 1) + iVar8;
      uVar11 = (ulong)uVar1;
    } while (uVar1 != 100);
    iVar10 = 0;
    uVar11 = 0;
    do {
      uVar3 = (uint)uVar11 & 6;
      uVar1 = (uint)uVar11 + 2;
      bVar6 = *(byte *)(param_1 + 0x3b + (uVar11 >> 3));
      iVar10 = (bVar6 >> (ulong)(uVar3 | 1) & 1) + (bVar6 >> (ulong)uVar3 & 1) + iVar10;
      uVar11 = (ulong)uVar1;
    } while (uVar1 != 100);
  }
  *(int *)(param_1 + 0x6c) = iVar10 + iVar8;
  if (iVar10 + iVar8 < 1) {
    return;
  }
  puVar2 = (undefined8 *)(param_1 + 0x62);
  bVar6 = *(byte *)(*plVar7 + 0x476);
  if (bVar6 < 2) {
    uVar11 = 0;
    do {
      if ((*(byte *)((long)puVar2 + (uVar11 >> 3 & 0x1fffffff)) >> (ulong)((uint)uVar11 & 7) & 1) ==
          0) {
        FUN_0154aec0(uVar11,(undefined8 *)(param_1 + 0x14),param_1 + 0x21);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != 0x39);
  }
  else {
    uVar11 = 0;
    do {
      if ((*(byte *)((long)puVar2 + (uVar11 >> 3 & 0x1fffffff)) >> (ulong)((uint)uVar11 & 7) & 1) ==
          0) {
        FUN_0154aec0(uVar11,(undefined8 *)(param_1 + 0x2e),param_1 + 0x3b);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != 0x39);
  }
  plVar7 = DAT_0537d558;
  if (1 < bVar6) {
    *(undefined2 *)(param_1 + 0x46) = 0;
    *(undefined8 *)(param_1 + 0x2e) = 0;
    *(undefined8 *)(param_1 + 0x36) = 0;
    *(undefined8 *)(param_1 + 0x3e) = 0;
    lVar9 = *plVar7;
    bVar6 = *(byte *)(lVar9 + 0x473);
    if ((long)(char)bVar6 != 0xffffffffffffffff) {
      pbVar5 = (byte *)(lVar9 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x80;
      if (7 < bVar6) {
        pbVar5 = (byte *)(lVar9 + 0x48);
      }
      if (((*pbVar5 >> 3 & 1) != 0) && (*(byte *)(lVar9 + 0x472) != bVar6)) goto LAB_01525bb4;
    }
  }
  *(undefined2 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
LAB_01525bb4:
  *puVar2 = 0;
  return;
}

