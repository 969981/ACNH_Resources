
void FUN_03ad38a0(undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined4 local_54;
  
  lVar11 = *(long *)PTR_DAT_04bbd580;
  plVar10 = (long *)(lVar11 + 0x80);
  lVar13 = **(long **)(lVar11 + 0x88);
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar13 + 8) * 4];
  uVar12 = (ulong)bVar2;
  uVar3 = (**(code **)(*plVar10 + 0x18))(plVar10);
  if (bVar2 != 0) {
    uVar7 = (ulong)*(ushort *)(lVar13 + 4);
    uVar4 = uVar12 & 3;
    if (bVar2 < 4) {
      lVar13 = 0;
      puVar6 = (undefined8 *)PTR_DAT_04bb2f80;
    }
    else {
      lVar13 = 0;
      puVar8 = (undefined4 *)(uVar7 + param_2 + 8);
      puVar6 = &DAT_0419b4e4;
      do {
        lVar13 = lVar13 + -4;
        *(undefined8 *)(puVar8 + -2) = *puVar6;
        *puVar8 = *(undefined4 *)(puVar6 + 1);
        puVar1 = (undefined4 *)((long)puVar6 + 0xc);
        puVar6 = puVar6 + 2;
        puVar8[1] = *puVar1;
        puVar8 = puVar8 + 4;
      } while (-lVar13 != (uVar12 & 0xfc));
      lVar13 = -lVar13;
    }
    if ((bVar2 & 3) != 0) {
      puVar5 = puVar6;
      puVar8 = (undefined4 *)(param_2 + uVar7 + lVar13 * 4);
      uVar9 = uVar4;
      do {
        puVar6 = (undefined8 *)((long)puVar5 + 4);
        uVar9 = uVar9 - 1;
        *puVar8 = *(undefined4 *)puVar5;
        puVar5 = puVar6;
        puVar8 = puVar8 + 1;
      } while (uVar9 != 0);
    }
    uVar3 = uVar3 & 0xff;
    if (bVar2 < 4) {
      lVar13 = 0;
    }
    else {
      lVar13 = 0;
      puVar8 = (undefined4 *)(uVar7 + uVar3 * 4 + param_2 + 8);
      do {
        lVar13 = lVar13 + -4;
        puVar8[-2] = *(undefined4 *)puVar6;
        puVar8[-1] = *(undefined4 *)((long)puVar6 + 4);
        *puVar8 = *(undefined4 *)(puVar6 + 1);
        puVar1 = (undefined4 *)((long)puVar6 + 0xc);
        puVar6 = puVar6 + 2;
        puVar8[1] = *puVar1;
        puVar8 = puVar8 + 4;
      } while (-lVar13 != (uVar12 & 0xfc));
      lVar13 = -lVar13;
    }
    if ((bVar2 & 3) != 0) {
      puVar5 = puVar6;
      puVar8 = (undefined4 *)(param_2 + uVar7 + lVar13 * 4 + uVar3 * 4);
      uVar9 = uVar4;
      do {
        puVar6 = (undefined8 *)((long)puVar5 + 4);
        uVar9 = uVar9 - 1;
        *puVar8 = *(undefined4 *)puVar5;
        puVar5 = puVar6;
        puVar8 = puVar8 + 1;
      } while (uVar9 != 0);
    }
    if (bVar2 < 4) {
      lVar13 = 0;
    }
    else {
      lVar13 = 0;
      puVar8 = (undefined4 *)(uVar7 + uVar3 * 8 + param_2 + 8);
      do {
        lVar13 = lVar13 + -4;
        puVar8[-2] = *(undefined4 *)puVar6;
        puVar8[-1] = *(undefined4 *)((long)puVar6 + 4);
        *puVar8 = *(undefined4 *)(puVar6 + 1);
        puVar1 = (undefined4 *)((long)puVar6 + 0xc);
        puVar6 = puVar6 + 2;
        puVar8[1] = *puVar1;
        puVar8 = puVar8 + 4;
      } while (-lVar13 != (uVar12 & 0xfc));
      lVar13 = -lVar13;
    }
    if ((bVar2 & 3) != 0) {
      puVar8 = (undefined4 *)(param_2 + uVar7 + uVar3 * 8 + lVar13 * 4);
      do {
        uVar4 = uVar4 - 1;
        *puVar8 = *(undefined4 *)puVar6;
        puVar6 = (undefined8 *)((long)puVar6 + 4);
        puVar8 = puVar8 + 1;
      } while (uVar4 != 0);
    }
  }
  lVar13 = **(long **)(lVar11 + 0x88);
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar13 + 0x14) * 4];
  local_54 = param_3;
  (**(code **)(*(long *)(lVar11 + 0x80) + 0x18))(plVar10);
  if ((ulong)bVar2 != 0) {
    memcpy((void *)(param_2 + (ulong)*(ushort *)(lVar13 + 0x10)),&local_54,(ulong)bVar2 << 2);
  }
  local_54 = 0;
  lVar13 = **(long **)(lVar11 + 0x88);
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar13 + 0x20) * 4];
  (**(code **)(*(long *)(lVar11 + 0x80) + 0x18))(plVar10);
  if ((ulong)bVar2 != 0) {
    memcpy((void *)(param_2 + (ulong)*(ushort *)(lVar13 + 0x1c)),&local_54,(ulong)bVar2 << 2);
  }
  local_54 = 0x3f800000;
  lVar13 = **(long **)(lVar11 + 0x88);
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar13 + 0x5c) * 4];
  (**(code **)(*(long *)(lVar11 + 0x80) + 0x18))(plVar10);
  if ((ulong)bVar2 != 0) {
    memcpy((void *)(param_2 + (ulong)*(ushort *)(lVar13 + 0x58)),&local_54,(ulong)bVar2 << 2);
  }
  lVar13 = **(long **)(lVar11 + 0x88);
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar13 + 0x2c) * 4];
  local_54 = param_4;
  (**(code **)(*(long *)(lVar11 + 0x80) + 0x18))(plVar10);
  if ((ulong)bVar2 != 0) {
    memcpy((void *)(param_2 + (ulong)*(ushort *)(lVar13 + 0x28)),&local_54,(ulong)bVar2 << 2);
  }
  lVar13 = **(long **)(lVar11 + 0x88);
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar13 + 0x44) * 4];
  (**(code **)(*(long *)(lVar11 + 0x80) + 0x18))(plVar10);
  if (bVar2 != 0) {
    uVar12 = (ulong)*(ushort *)(lVar13 + 0x40);
    uVar3 = (ulong)bVar2 & 3;
    if (bVar2 < 4) {
      lVar13 = 0;
      puVar6 = (undefined8 *)PTR_DAT_04bbd570;
    }
    else {
      lVar13 = 0;
      puVar8 = (undefined4 *)(uVar12 + param_2 + 8);
      puVar6 = &DAT_0419b5a8;
      do {
        lVar13 = lVar13 + -4;
        *(undefined8 *)(puVar8 + -2) = *puVar6;
        *puVar8 = *(undefined4 *)(puVar6 + 1);
        puVar1 = (undefined4 *)((long)puVar6 + 0xc);
        puVar6 = puVar6 + 2;
        puVar8[1] = *puVar1;
        puVar8 = puVar8 + 4;
      } while (-lVar13 != ((ulong)bVar2 & 0xfc));
      lVar13 = -lVar13;
    }
    if ((bVar2 & 3) != 0) {
      puVar8 = (undefined4 *)(param_2 + uVar12 + lVar13 * 4);
      do {
        uVar3 = uVar3 - 1;
        *puVar8 = *(undefined4 *)puVar6;
        puVar6 = (undefined8 *)((long)puVar6 + 4);
        puVar8 = puVar8 + 1;
      } while (uVar3 != 0);
    }
  }
  lVar13 = **(long **)(lVar11 + 0x88);
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar13 + 0x50) * 4];
  (**(code **)(*(long *)(lVar11 + 0x80) + 0x18))(plVar10);
  if (bVar2 != 0) {
    uVar12 = (ulong)*(ushort *)(lVar13 + 0x4c);
    uVar3 = (ulong)bVar2 & 3;
    if (bVar2 < 4) {
      lVar13 = 0;
      puVar6 = (undefined8 *)PTR_DAT_04bbd570;
    }
    else {
      lVar13 = 0;
      puVar8 = (undefined4 *)(uVar12 + param_2 + 8);
      puVar6 = &DAT_0419b5a8;
      do {
        lVar13 = lVar13 + -4;
        *(undefined8 *)(puVar8 + -2) = *puVar6;
        *puVar8 = *(undefined4 *)(puVar6 + 1);
        puVar1 = (undefined4 *)((long)puVar6 + 0xc);
        puVar6 = puVar6 + 2;
        puVar8[1] = *puVar1;
        puVar8 = puVar8 + 4;
      } while (-lVar13 != ((ulong)bVar2 & 0xfc));
      lVar13 = -lVar13;
    }
    if ((bVar2 & 3) != 0) {
      puVar8 = (undefined4 *)(param_2 + uVar12 + lVar13 * 4);
      do {
        uVar3 = uVar3 - 1;
        *puVar8 = *(undefined4 *)puVar6;
        puVar6 = (undefined8 *)((long)puVar6 + 4);
        puVar8 = puVar8 + 1;
      } while (uVar3 != 0);
    }
  }
  lVar13 = **(long **)(lVar11 + 0x88);
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar13 + 0x74) * 4];
  (**(code **)(*(long *)(lVar11 + 0x80) + 0x18))(plVar10);
  if (bVar2 != 0) {
    uVar12 = (ulong)*(ushort *)(lVar13 + 0x70);
    uVar3 = (ulong)bVar2 & 3;
    if (bVar2 < 4) {
      lVar13 = 0;
      puVar6 = (undefined8 *)PTR_DAT_04bbd570;
    }
    else {
      lVar13 = 0;
      puVar8 = (undefined4 *)(uVar12 + param_2 + 8);
      puVar6 = &DAT_0419b5a8;
      do {
        lVar13 = lVar13 + -4;
        *(undefined8 *)(puVar8 + -2) = *puVar6;
        *puVar8 = *(undefined4 *)(puVar6 + 1);
        puVar1 = (undefined4 *)((long)puVar6 + 0xc);
        puVar6 = puVar6 + 2;
        puVar8[1] = *puVar1;
        puVar8 = puVar8 + 4;
      } while (-lVar13 != ((ulong)bVar2 & 0xfc));
      lVar13 = -lVar13;
    }
    if ((bVar2 & 3) != 0) {
      puVar8 = (undefined4 *)(param_2 + uVar12 + lVar13 * 4);
      do {
        uVar3 = uVar3 - 1;
        *puVar8 = *(undefined4 *)puVar6;
        puVar6 = (undefined8 *)((long)puVar6 + 4);
        puVar8 = puVar8 + 1;
      } while (uVar3 != 0);
    }
  }
  lVar13 = **(long **)(lVar11 + 0x88);
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar13 + 0x80) * 4];
  (**(code **)(*(long *)(lVar11 + 0x80) + 0x18))(plVar10);
  if (bVar2 != 0) {
    uVar12 = (ulong)*(ushort *)(lVar13 + 0x7c);
    uVar3 = (ulong)bVar2 & 3;
    if (bVar2 < 4) {
      lVar13 = 0;
      puVar6 = (undefined8 *)PTR_DAT_04bbd570;
    }
    else {
      lVar13 = 0;
      puVar8 = (undefined4 *)(uVar12 + param_2 + 8);
      puVar6 = &DAT_0419b5a8;
      do {
        lVar13 = lVar13 + -4;
        *(undefined8 *)(puVar8 + -2) = *puVar6;
        *puVar8 = *(undefined4 *)(puVar6 + 1);
        puVar1 = (undefined4 *)((long)puVar6 + 0xc);
        puVar6 = puVar6 + 2;
        puVar8[1] = *puVar1;
        puVar8 = puVar8 + 4;
      } while (-lVar13 != ((ulong)bVar2 & 0xfc));
      lVar13 = -lVar13;
    }
    if ((bVar2 & 3) != 0) {
      puVar8 = (undefined4 *)(param_2 + uVar12 + lVar13 * 4);
      do {
        uVar3 = uVar3 - 1;
        *puVar8 = *(undefined4 *)puVar6;
        puVar6 = (undefined8 *)((long)puVar6 + 4);
        puVar8 = puVar8 + 1;
      } while (uVar3 != 0);
    }
  }
  lVar13 = **(long **)(lVar11 + 0x88);
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar13 + 0x8c) * 4];
  (**(code **)(*(long *)(lVar11 + 0x80) + 0x18))(plVar10);
  if (bVar2 != 0) {
    uVar12 = (ulong)*(ushort *)(lVar13 + 0x88);
    uVar3 = (ulong)bVar2 & 3;
    if (bVar2 < 4) {
      lVar13 = 0;
      puVar6 = (undefined8 *)PTR_DAT_04bbd570;
    }
    else {
      lVar13 = 0;
      puVar8 = (undefined4 *)(uVar12 + param_2 + 8);
      puVar6 = &DAT_0419b5a8;
      do {
        lVar13 = lVar13 + -4;
        *(undefined8 *)(puVar8 + -2) = *puVar6;
        *puVar8 = *(undefined4 *)(puVar6 + 1);
        puVar1 = (undefined4 *)((long)puVar6 + 0xc);
        puVar6 = puVar6 + 2;
        puVar8[1] = *puVar1;
        puVar8 = puVar8 + 4;
      } while (-lVar13 != ((ulong)bVar2 & 0xfc));
      lVar13 = -lVar13;
    }
    if ((bVar2 & 3) != 0) {
      puVar8 = (undefined4 *)(param_2 + uVar12 + lVar13 * 4);
      do {
        uVar3 = uVar3 - 1;
        *puVar8 = *(undefined4 *)puVar6;
        puVar6 = (undefined8 *)((long)puVar6 + 4);
        puVar8 = puVar8 + 1;
      } while (uVar3 != 0);
    }
  }
  lVar13 = **(long **)(lVar11 + 0x88);
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar13 + 0x98) * 4];
  (**(code **)(*(long *)(lVar11 + 0x80) + 0x18))(plVar10);
  if (bVar2 != 0) {
    uVar12 = (ulong)*(ushort *)(lVar13 + 0x94);
    uVar3 = (ulong)bVar2 & 3;
    if (bVar2 < 4) {
      lVar11 = 0;
      puVar6 = (undefined8 *)PTR_DAT_04bbd570;
    }
    else {
      lVar11 = 0;
      puVar8 = (undefined4 *)(uVar12 + param_2 + 8);
      puVar6 = &DAT_0419b5a8;
      do {
        lVar11 = lVar11 + -4;
        *(undefined8 *)(puVar8 + -2) = *puVar6;
        *puVar8 = *(undefined4 *)(puVar6 + 1);
        puVar1 = (undefined4 *)((long)puVar6 + 0xc);
        puVar6 = puVar6 + 2;
        puVar8[1] = *puVar1;
        puVar8 = puVar8 + 4;
      } while (-lVar11 != ((ulong)bVar2 & 0xfc));
      lVar11 = -lVar11;
    }
    if ((bVar2 & 3) != 0) {
      puVar8 = (undefined4 *)(param_2 + uVar12 + lVar11 * 4);
      do {
        uVar3 = uVar3 - 1;
        *puVar8 = *(undefined4 *)puVar6;
        puVar6 = (undefined8 *)((long)puVar6 + 4);
        puVar8 = puVar8 + 1;
      } while (uVar3 != 0);
    }
  }
  return;
}

