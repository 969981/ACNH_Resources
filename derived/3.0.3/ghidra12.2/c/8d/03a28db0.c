
void FUN_03a28db0(long param_1,uint param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar8;
  long *plVar7;
  undefined4 *puVar9;
  undefined4 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 *puVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float local_64;
  
  if (*(char *)(param_1 + 0x338) != '\0') {
    lVar16 = *(long *)(param_1 + 0x10);
    if (*(uint *)(param_1 + 8) <= param_2) {
      param_2 = 0;
    }
    plVar15 = (long *)(lVar16 + (long)(int)param_2 * 0x548);
    lVar17 = plVar15[2];
    (**(code **)(*plVar15 + 0x20))(plVar15);
    (**(code **)(*plVar15 + 0x20))(plVar15);
    lVar19 = *(long *)plVar15[1];
    bVar1 = (&DAT_041b370c)[(ulong)*(byte *)(lVar19 + 8) * 4];
    uVar18 = (ulong)bVar1;
    uVar6 = (**(code **)(*plVar15 + 0x18))(plVar15);
    if (bVar1 != 0) {
      uVar12 = (ulong)*(ushort *)(lVar19 + 4);
      uVar11 = uVar18 & 3;
      puVar10 = (undefined4 *)(lVar16 + (long)(int)param_2 * 0x548 + 0x118);
      if (bVar1 < 4) {
        lVar19 = 0;
      }
      else {
        lVar19 = 0;
        puVar9 = (undefined4 *)(uVar12 + lVar17 + 8);
        do {
          lVar19 = lVar19 + -4;
          puVar9[-2] = *puVar10;
          puVar9[-1] = puVar10[1];
          *puVar9 = puVar10[2];
          puVar13 = puVar10 + 3;
          puVar10 = puVar10 + 4;
          puVar9[1] = *puVar13;
          puVar9 = puVar9 + 4;
        } while (-lVar19 != (uVar18 & 0xfc));
        lVar19 = -lVar19;
      }
      if ((bVar1 & 3) != 0) {
        puVar9 = puVar10;
        puVar13 = (undefined4 *)(lVar17 + uVar12 + lVar19 * 4);
        uVar14 = uVar11;
        do {
          puVar10 = puVar9 + 1;
          uVar14 = uVar14 - 1;
          *puVar13 = *puVar9;
          puVar9 = puVar10;
          puVar13 = puVar13 + 1;
        } while (uVar14 != 0);
      }
      uVar6 = uVar6 & 0xff;
      if (bVar1 < 4) {
        lVar19 = 0;
      }
      else {
        lVar19 = 0;
        puVar9 = (undefined4 *)(uVar12 + uVar6 * 4 + lVar17 + 8);
        do {
          lVar19 = lVar19 + -4;
          puVar9[-2] = *puVar10;
          puVar9[-1] = puVar10[1];
          *puVar9 = puVar10[2];
          puVar13 = puVar10 + 3;
          puVar10 = puVar10 + 4;
          puVar9[1] = *puVar13;
          puVar9 = puVar9 + 4;
        } while (-lVar19 != (uVar18 & 0xfc));
        lVar19 = -lVar19;
      }
      if ((bVar1 & 3) != 0) {
        puVar9 = puVar10;
        puVar13 = (undefined4 *)(lVar17 + uVar12 + lVar19 * 4 + uVar6 * 4);
        uVar14 = uVar11;
        do {
          puVar10 = puVar9 + 1;
          uVar14 = uVar14 - 1;
          *puVar13 = *puVar9;
          puVar9 = puVar10;
          puVar13 = puVar13 + 1;
        } while (uVar14 != 0);
      }
      if (bVar1 < 4) {
        lVar19 = 0;
      }
      else {
        lVar19 = 0;
        puVar9 = (undefined4 *)(uVar12 + uVar6 * 8 + lVar17 + 8);
        do {
          lVar19 = lVar19 + -4;
          puVar9[-2] = *puVar10;
          puVar9[-1] = puVar10[1];
          *puVar9 = puVar10[2];
          puVar13 = puVar10 + 3;
          puVar10 = puVar10 + 4;
          puVar9[1] = *puVar13;
          puVar9 = puVar9 + 4;
        } while (-lVar19 != (uVar18 & 0xfc));
        lVar19 = -lVar19;
      }
      if ((bVar1 & 3) != 0) {
        puVar9 = puVar10;
        puVar13 = (undefined4 *)(lVar17 + uVar12 + uVar6 * 8 + lVar19 * 4);
        uVar14 = uVar11;
        do {
          puVar10 = puVar9 + 1;
          uVar14 = uVar14 - 1;
          *puVar13 = *puVar9;
          puVar9 = puVar10;
          puVar13 = puVar13 + 1;
        } while (uVar14 != 0);
      }
      if (bVar1 < 4) {
        lVar19 = 0;
      }
      else {
        lVar19 = 0;
        puVar9 = (undefined4 *)(uVar12 + uVar6 * 0xc + lVar17 + 8);
        do {
          lVar19 = lVar19 + -4;
          puVar9[-2] = *puVar10;
          puVar9[-1] = puVar10[1];
          *puVar9 = puVar10[2];
          puVar13 = puVar10 + 3;
          puVar10 = puVar10 + 4;
          puVar9[1] = *puVar13;
          puVar9 = puVar9 + 4;
        } while (-lVar19 != (uVar18 & 0xfc));
        lVar19 = -lVar19;
      }
      if ((bVar1 & 3) != 0) {
        puVar9 = (undefined4 *)(lVar17 + uVar12 + lVar19 * 4 + uVar6 * 0xc);
        do {
          uVar11 = uVar11 - 1;
          *puVar9 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar9 = puVar9 + 1;
        } while (uVar11 != 0);
      }
    }
    lVar17 = plVar15[2];
    (**(code **)(*plVar15 + 0x20))(plVar15);
    (**(code **)(*plVar15 + 0x20))(plVar15);
    lVar19 = *(long *)plVar15[1];
    bVar1 = (&DAT_041b370c)[(ulong)*(byte *)(lVar19 + 0x14) * 4];
    uVar18 = (ulong)bVar1;
    uVar6 = (**(code **)(*plVar15 + 0x18))(plVar15);
    if (bVar1 != 0) {
      uVar12 = (ulong)*(ushort *)(lVar19 + 0x10);
      plVar7 = plVar15 + 0xf;
      uVar11 = uVar18 & 3;
      if (bVar1 < 4) {
        lVar19 = 0;
      }
      else {
        lVar19 = 0;
        puVar10 = (undefined4 *)(uVar12 + lVar17 + 8);
        do {
          lVar19 = lVar19 + -4;
          puVar10[-2] = (int)*plVar7;
          puVar10[-1] = *(undefined4 *)((long)plVar7 + 4);
          *puVar10 = (int)plVar7[1];
          puVar9 = (undefined4 *)((long)plVar7 + 0xc);
          plVar7 = plVar7 + 2;
          puVar10[1] = *puVar9;
          puVar10 = puVar10 + 4;
        } while (-lVar19 != (uVar18 & 0xfc));
        lVar19 = -lVar19;
      }
      if ((bVar1 & 3) != 0) {
        plVar8 = plVar7;
        puVar10 = (undefined4 *)(lVar17 + uVar12 + lVar19 * 4);
        uVar14 = uVar11;
        do {
          plVar7 = (long *)((long)plVar8 + 4);
          uVar14 = uVar14 - 1;
          *puVar10 = (int)*plVar8;
          plVar8 = plVar7;
          puVar10 = puVar10 + 1;
        } while (uVar14 != 0);
      }
      uVar6 = uVar6 & 0xff;
      if (bVar1 < 4) {
        lVar19 = 0;
      }
      else {
        lVar19 = 0;
        puVar10 = (undefined4 *)(uVar12 + uVar6 * 4 + lVar17 + 8);
        do {
          lVar19 = lVar19 + -4;
          puVar10[-2] = (int)*plVar7;
          puVar10[-1] = *(undefined4 *)((long)plVar7 + 4);
          *puVar10 = (int)plVar7[1];
          puVar9 = (undefined4 *)((long)plVar7 + 0xc);
          plVar7 = plVar7 + 2;
          puVar10[1] = *puVar9;
          puVar10 = puVar10 + 4;
        } while (-lVar19 != (uVar18 & 0xfc));
        lVar19 = -lVar19;
      }
      if ((bVar1 & 3) != 0) {
        plVar8 = plVar7;
        puVar10 = (undefined4 *)(lVar17 + uVar12 + lVar19 * 4 + uVar6 * 4);
        uVar14 = uVar11;
        do {
          plVar7 = (long *)((long)plVar8 + 4);
          uVar14 = uVar14 - 1;
          *puVar10 = (int)*plVar8;
          plVar8 = plVar7;
          puVar10 = puVar10 + 1;
        } while (uVar14 != 0);
      }
      if (bVar1 < 4) {
        lVar19 = 0;
      }
      else {
        lVar19 = 0;
        puVar10 = (undefined4 *)(uVar12 + uVar6 * 8 + lVar17 + 8);
        do {
          lVar19 = lVar19 + -4;
          puVar10[-2] = (int)*plVar7;
          puVar10[-1] = *(undefined4 *)((long)plVar7 + 4);
          *puVar10 = (int)plVar7[1];
          puVar9 = (undefined4 *)((long)plVar7 + 0xc);
          plVar7 = plVar7 + 2;
          puVar10[1] = *puVar9;
          puVar10 = puVar10 + 4;
        } while (-lVar19 != (uVar18 & 0xfc));
        lVar19 = -lVar19;
      }
      if ((bVar1 & 3) != 0) {
        puVar10 = (undefined4 *)(lVar17 + uVar12 + uVar6 * 8 + lVar19 * 4);
        do {
          uVar11 = uVar11 - 1;
          *puVar10 = (int)*plVar7;
          plVar7 = (long *)((long)plVar7 + 4);
          puVar10 = puVar10 + 1;
        } while (uVar11 != 0);
      }
    }
    lVar17 = plVar15[2];
    (**(code **)(*plVar15 + 0x20))(plVar15);
    (**(code **)(*plVar15 + 0x20))(plVar15);
    lVar19 = *(long *)plVar15[1];
    bVar1 = (&DAT_041b370c)[(ulong)*(byte *)(lVar19 + 0x20) * 4];
    uVar18 = (ulong)bVar1;
    uVar6 = (**(code **)(*plVar15 + 0x18))(plVar15);
    if (bVar1 != 0) {
      uVar12 = (ulong)*(ushort *)(lVar19 + 0x1c);
      uVar11 = uVar18 & 3;
      puVar10 = (undefined4 *)(lVar16 + (long)(int)param_2 * 0x548 + 0xa8);
      if (bVar1 < 4) {
        lVar19 = 0;
      }
      else {
        lVar19 = 0;
        puVar9 = (undefined4 *)(uVar12 + lVar17 + 8);
        do {
          lVar19 = lVar19 + -4;
          puVar9[-2] = *puVar10;
          puVar9[-1] = puVar10[1];
          *puVar9 = puVar10[2];
          puVar13 = puVar10 + 3;
          puVar10 = puVar10 + 4;
          puVar9[1] = *puVar13;
          puVar9 = puVar9 + 4;
        } while (-lVar19 != (uVar18 & 0xfc));
        lVar19 = -lVar19;
      }
      if ((bVar1 & 3) != 0) {
        puVar9 = puVar10;
        puVar13 = (undefined4 *)(lVar17 + uVar12 + lVar19 * 4);
        uVar14 = uVar11;
        do {
          puVar10 = puVar9 + 1;
          uVar14 = uVar14 - 1;
          *puVar13 = *puVar9;
          puVar9 = puVar10;
          puVar13 = puVar13 + 1;
        } while (uVar14 != 0);
      }
      uVar6 = uVar6 & 0xff;
      if (bVar1 < 4) {
        lVar19 = 0;
      }
      else {
        lVar19 = 0;
        puVar9 = (undefined4 *)(uVar12 + uVar6 * 4 + lVar17 + 8);
        do {
          lVar19 = lVar19 + -4;
          puVar9[-2] = *puVar10;
          puVar9[-1] = puVar10[1];
          *puVar9 = puVar10[2];
          puVar13 = puVar10 + 3;
          puVar10 = puVar10 + 4;
          puVar9[1] = *puVar13;
          puVar9 = puVar9 + 4;
        } while (-lVar19 != (uVar18 & 0xfc));
        lVar19 = -lVar19;
      }
      if ((bVar1 & 3) != 0) {
        puVar9 = puVar10;
        puVar13 = (undefined4 *)(lVar17 + uVar12 + lVar19 * 4 + uVar6 * 4);
        uVar14 = uVar11;
        do {
          puVar10 = puVar9 + 1;
          uVar14 = uVar14 - 1;
          *puVar13 = *puVar9;
          puVar9 = puVar10;
          puVar13 = puVar13 + 1;
        } while (uVar14 != 0);
      }
      if (bVar1 < 4) {
        lVar19 = 0;
      }
      else {
        lVar19 = 0;
        puVar9 = (undefined4 *)(uVar12 + uVar6 * 8 + lVar17 + 8);
        do {
          lVar19 = lVar19 + -4;
          puVar9[-2] = *puVar10;
          puVar9[-1] = puVar10[1];
          *puVar9 = puVar10[2];
          puVar13 = puVar10 + 3;
          puVar10 = puVar10 + 4;
          puVar9[1] = *puVar13;
          puVar9 = puVar9 + 4;
        } while (-lVar19 != (uVar18 & 0xfc));
        lVar19 = -lVar19;
      }
      if ((bVar1 & 3) != 0) {
        puVar9 = (undefined4 *)(lVar17 + uVar12 + uVar6 * 8 + lVar19 * 4);
        do {
          uVar11 = uVar11 - 1;
          *puVar9 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar9 = puVar9 + 1;
        } while (uVar11 != 0);
      }
    }
    lVar17 = plVar15[2];
    (**(code **)(*plVar15 + 0x20))(plVar15);
    (**(code **)(*plVar15 + 0x20))(plVar15);
    lVar19 = *(long *)plVar15[1];
    bVar1 = (&DAT_041b370c)[(ulong)*(byte *)(lVar19 + 0x2c) * 4];
    uVar18 = (ulong)bVar1;
    uVar6 = (**(code **)(*plVar15 + 0x18))(plVar15);
    if (bVar1 != 0) {
      uVar12 = (ulong)*(ushort *)(lVar19 + 0x28);
      uVar11 = uVar18 & 3;
      puVar10 = (undefined4 *)(lVar16 + (long)(int)param_2 * 0x548 + 0xd8);
      if (bVar1 < 4) {
        lVar19 = 0;
      }
      else {
        lVar19 = 0;
        puVar9 = (undefined4 *)(uVar12 + lVar17 + 8);
        do {
          lVar19 = lVar19 + -4;
          puVar9[-2] = *puVar10;
          puVar9[-1] = puVar10[1];
          *puVar9 = puVar10[2];
          puVar13 = puVar10 + 3;
          puVar10 = puVar10 + 4;
          puVar9[1] = *puVar13;
          puVar9 = puVar9 + 4;
        } while (-lVar19 != (uVar18 & 0xfc));
        lVar19 = -lVar19;
      }
      if ((bVar1 & 3) != 0) {
        puVar9 = puVar10;
        puVar13 = (undefined4 *)(lVar17 + uVar12 + lVar19 * 4);
        uVar14 = uVar11;
        do {
          puVar10 = puVar9 + 1;
          uVar14 = uVar14 - 1;
          *puVar13 = *puVar9;
          puVar9 = puVar10;
          puVar13 = puVar13 + 1;
        } while (uVar14 != 0);
      }
      uVar6 = uVar6 & 0xff;
      if (bVar1 < 4) {
        lVar19 = 0;
      }
      else {
        lVar19 = 0;
        puVar9 = (undefined4 *)(uVar12 + uVar6 * 4 + lVar17 + 8);
        do {
          lVar19 = lVar19 + -4;
          puVar9[-2] = *puVar10;
          puVar9[-1] = puVar10[1];
          *puVar9 = puVar10[2];
          puVar13 = puVar10 + 3;
          puVar10 = puVar10 + 4;
          puVar9[1] = *puVar13;
          puVar9 = puVar9 + 4;
        } while (-lVar19 != (uVar18 & 0xfc));
        lVar19 = -lVar19;
      }
      if ((bVar1 & 3) != 0) {
        puVar9 = puVar10;
        puVar13 = (undefined4 *)(lVar17 + uVar12 + lVar19 * 4 + uVar6 * 4);
        uVar14 = uVar11;
        do {
          puVar10 = puVar9 + 1;
          uVar14 = uVar14 - 1;
          *puVar13 = *puVar9;
          puVar9 = puVar10;
          puVar13 = puVar13 + 1;
        } while (uVar14 != 0);
      }
      if (bVar1 < 4) {
        lVar19 = 0;
      }
      else {
        lVar19 = 0;
        puVar9 = (undefined4 *)(uVar12 + uVar6 * 8 + lVar17 + 8);
        do {
          lVar19 = lVar19 + -4;
          puVar9[-2] = *puVar10;
          puVar9[-1] = puVar10[1];
          *puVar9 = puVar10[2];
          puVar13 = puVar10 + 3;
          puVar10 = puVar10 + 4;
          puVar9[1] = *puVar13;
          puVar9 = puVar9 + 4;
        } while (-lVar19 != (uVar18 & 0xfc));
        lVar19 = -lVar19;
      }
      if ((bVar1 & 3) != 0) {
        puVar9 = puVar10;
        puVar13 = (undefined4 *)(lVar17 + uVar12 + uVar6 * 8 + lVar19 * 4);
        uVar14 = uVar11;
        do {
          puVar10 = puVar9 + 1;
          uVar14 = uVar14 - 1;
          *puVar13 = *puVar9;
          puVar9 = puVar10;
          puVar13 = puVar13 + 1;
        } while (uVar14 != 0);
      }
      if (bVar1 < 4) {
        lVar19 = 0;
      }
      else {
        lVar19 = 0;
        puVar9 = (undefined4 *)(uVar12 + uVar6 * 0xc + lVar17 + 8);
        do {
          lVar19 = lVar19 + -4;
          puVar9[-2] = *puVar10;
          puVar9[-1] = puVar10[1];
          *puVar9 = puVar10[2];
          puVar13 = puVar10 + 3;
          puVar10 = puVar10 + 4;
          puVar9[1] = *puVar13;
          puVar9 = puVar9 + 4;
        } while (-lVar19 != (uVar18 & 0xfc));
        lVar19 = -lVar19;
      }
      if ((bVar1 & 3) != 0) {
        puVar9 = (undefined4 *)(lVar17 + uVar12 + lVar19 * 4 + uVar6 * 0xc);
        do {
          uVar11 = uVar11 - 1;
          *puVar9 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar9 = puVar9 + 1;
        } while (uVar11 != 0);
      }
    }
    lVar19 = plVar15[2];
    lVar17 = lVar16 + (long)(int)param_2 * 0x548;
    fVar22 = *(float *)(lVar17 + 0x26c);
    (**(code **)(*plVar15 + 0x20))(plVar15);
    (**(code **)(*plVar15 + 0x20))(plVar15);
    lVar20 = *(long *)plVar15[1];
    bVar1 = (&DAT_041b370c)[(ulong)*(byte *)(lVar20 + 0x38) * 4];
    local_64 = fVar22;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    if ((ulong)bVar1 != 0) {
      memcpy((void *)(lVar19 + (ulong)*(ushort *)(lVar20 + 0x34)),&local_64,(ulong)bVar1 << 2);
    }
    fVar21 = *(float *)(lVar17 + 0x26c);
    lVar17 = plVar15[2];
    fVar22 = *(float *)(lVar16 + (long)(int)param_2 * 0x548 + 0x270);
    (**(code **)(*plVar15 + 0x20))(plVar15);
    (**(code **)(*plVar15 + 0x20))(plVar15);
    lVar19 = *(long *)plVar15[1];
    bVar1 = (&DAT_041b370c)[(ulong)*(byte *)(lVar19 + 0x44) * 4];
    local_64 = fVar22 - fVar21;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    if ((ulong)bVar1 != 0) {
      memcpy((void *)(lVar17 + (ulong)*(ushort *)(lVar19 + 0x40)),&local_64,(ulong)bVar1 << 2);
    }
    lVar17 = plVar15[2];
    fVar22 = *(float *)(lVar16 + (long)(int)param_2 * 0x548 + 0x278);
    (**(code **)(*plVar15 + 0x20))(plVar15);
    (**(code **)(*plVar15 + 0x20))(plVar15);
    lVar19 = *(long *)plVar15[1];
    bVar1 = (&DAT_041b370c)[(ulong)*(byte *)(lVar19 + 0x50) * 4];
    local_64 = fVar22;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    if ((ulong)bVar1 != 0) {
      memcpy((void *)(lVar17 + (ulong)*(ushort *)(lVar19 + 0x4c)),&local_64,(ulong)bVar1 << 2);
    }
    fVar22 = *(float *)(param_1 + 0x358);
    lVar17 = plVar15[2];
    (**(code **)(*plVar15 + 0x20))(plVar15);
    (**(code **)(*plVar15 + 0x20))(plVar15);
    lVar19 = *(long *)plVar15[1];
    bVar1 = (&DAT_041b370c)[(ulong)*(byte *)(lVar19 + 0x5c) * 4];
    local_64 = fVar22;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    if ((ulong)bVar1 != 0) {
      memcpy((void *)(lVar17 + (ulong)*(ushort *)(lVar19 + 0x58)),&local_64,(ulong)bVar1 << 2);
    }
    fVar22 = *(float *)(param_1 + 0x360);
    lVar17 = plVar15[2];
    (**(code **)(*plVar15 + 0x20))(plVar15);
    (**(code **)(*plVar15 + 0x20))(plVar15);
    lVar19 = *(long *)plVar15[1];
    bVar1 = (&DAT_041b370c)[(ulong)*(byte *)(lVar19 + 0x68) * 4];
    local_64 = -fVar22;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    if ((ulong)bVar1 != 0) {
      memcpy((void *)(lVar17 + (ulong)*(ushort *)(lVar19 + 100)),&local_64,(ulong)bVar1 << 2);
    }
    lVar17 = plVar15[2];
    fVar22 = *(float *)(lVar16 + (long)(int)param_2 * 0x548 + 0x158);
    (**(code **)(*plVar15 + 0x20))(plVar15);
    (**(code **)(*plVar15 + 0x20))(plVar15);
    lVar19 = *(long *)plVar15[1];
    bVar1 = (&DAT_041b370c)[(ulong)*(byte *)(lVar19 + 0x74) * 4];
    local_64 = fVar22;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    if ((ulong)bVar1 != 0) {
      memcpy((void *)(lVar17 + (ulong)*(ushort *)(lVar19 + 0x70)),&local_64,(ulong)bVar1 << 2);
    }
    lVar17 = plVar15[2];
    fVar22 = *(float *)(lVar16 + (long)(int)param_2 * 0x548 + 0x15c);
    (**(code **)(*plVar15 + 0x20))(plVar15);
    (**(code **)(*plVar15 + 0x20))(plVar15);
    lVar19 = *(long *)plVar15[1];
    bVar1 = (&DAT_041b370c)[(ulong)*(byte *)(lVar19 + 0x80) * 4];
    local_64 = fVar22;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    if ((ulong)bVar1 != 0) {
      memcpy((void *)(lVar17 + (ulong)*(ushort *)(lVar19 + 0x7c)),&local_64,(ulong)bVar1 << 2);
    }
    lVar17 = plVar15[2];
    fVar22 = *(float *)(lVar16 + (long)(int)param_2 * 0x548 + 0x160);
    (**(code **)(*plVar15 + 0x20))(plVar15);
    (**(code **)(*plVar15 + 0x20))(plVar15);
    lVar19 = *(long *)plVar15[1];
    bVar1 = (&DAT_041b370c)[(ulong)*(byte *)(lVar19 + 0x8c) * 4];
    local_64 = fVar22;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    if ((ulong)bVar1 != 0) {
      memcpy((void *)(lVar17 + (ulong)*(ushort *)(lVar19 + 0x88)),&local_64,(ulong)bVar1 << 2);
    }
    lVar17 = plVar15[2];
    fVar22 = *(float *)(lVar16 + (long)(int)param_2 * 0x548 + 0x164);
    (**(code **)(*plVar15 + 0x20))(plVar15);
    (**(code **)(*plVar15 + 0x20))(plVar15);
    lVar19 = *(long *)plVar15[1];
    bVar1 = (&DAT_041b370c)[(ulong)*(byte *)(lVar19 + 0x98) * 4];
    local_64 = fVar22;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    if ((ulong)bVar1 != 0) {
      memcpy((void *)(lVar17 + (ulong)*(ushort *)(lVar19 + 0x94)),&local_64,(ulong)bVar1 << 2);
    }
    lVar17 = plVar15[2];
    fVar22 = *(float *)(lVar16 + (long)(int)param_2 * 0x548 + 0x168);
    (**(code **)(*plVar15 + 0x20))(plVar15);
    (**(code **)(*plVar15 + 0x20))(plVar15);
    lVar19 = *(long *)plVar15[1];
    bVar1 = (&DAT_041b370c)[(ulong)*(byte *)(lVar19 + 0xbc) * 4];
    local_64 = fVar22;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    if ((ulong)bVar1 != 0) {
      memcpy((void *)(lVar17 + (ulong)*(ushort *)(lVar19 + 0xb8)),&local_64,(ulong)bVar1 << 2);
    }
    lVar17 = plVar15[2];
    fVar22 = *(float *)(lVar16 + (long)(int)param_2 * 0x548 + 0x16c);
    (**(code **)(*plVar15 + 0x20))(plVar15);
    (**(code **)(*plVar15 + 0x20))(plVar15);
    lVar19 = *(long *)plVar15[1];
    bVar1 = (&DAT_041b370c)[(ulong)*(byte *)(lVar19 + 0xa4) * 4];
    local_64 = fVar22;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    if ((ulong)bVar1 != 0) {
      memcpy((void *)(lVar17 + (ulong)*(ushort *)(lVar19 + 0xa0)),&local_64,(ulong)bVar1 << 2);
    }
    lVar17 = plVar15[2];
    fVar22 = *(float *)(lVar16 + (long)(int)param_2 * 0x548 + 0x170);
    (**(code **)(*plVar15 + 0x20))(plVar15);
    (**(code **)(*plVar15 + 0x20))(plVar15);
    lVar16 = *(long *)plVar15[1];
    bVar1 = (&DAT_041b370c)[(ulong)*(byte *)(lVar16 + 0xb0) * 4];
    local_64 = fVar22;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    if ((ulong)bVar1 != 0) {
      memcpy((void *)(lVar17 + (ulong)*(ushort *)(lVar16 + 0xac)),&local_64,(ulong)bVar1 << 2);
    }
    bVar1 = *(byte *)((long)plVar15 + 0x39);
    uVar2 = *(ushort *)((long)plVar15 + 0x3a);
    lVar16 = plVar15[6];
    iVar3 = (**(code **)(*plVar15 + 0x20))(plVar15);
    iVar4 = (**(code **)(*plVar15 + 0x20))(plVar15);
    lVar17 = plVar15[4];
    if (lVar17 != 0) {
      lVar19 = plVar15[6];
      lVar20 = plVar15[3];
      uVar5 = (**(code **)PTR_DAT_04bcf030)(lVar17);
      if ((uVar5 >> 2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x03a29d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_04c61fd8)(lVar17,(int)lVar20 +
                               (uint)uVar2 * (uint)bVar1 * (((int)lVar16 + iVar3) - 1U & -iVar4),
                        (int)lVar19);
        return;
      }
    }
  }
  return;
}

