
void FUN_00675f60(long param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  uint uVar6;
  ushort *puVar7;
  undefined1 *puVar8;
  ushort *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_00675e00(*(undefined8 *)(param_1 + 0x40));
    puVar7 = *(ushort **)(param_1 + 0x40);
    uVar12 = (ulong)puVar7[7] + (ulong)puVar7[6] + (ulong)puVar7[8] + (ulong)puVar7[9];
    if ((int)uVar12 == 0) {
      puVar9 = puVar7;
    }
    else {
      uVar1 = puVar7[0xf];
      if ((int)uVar12 == 1) {
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        puVar8 = (undefined1 *)((long)puVar7 + (ulong)uVar1 + 1);
        do {
          uVar5 = puVar8[-1];
          lVar10 = lVar10 + 2;
          uVar4 = puVar8[1];
          puVar8[-1] = *puVar8;
          *puVar8 = uVar5;
          puVar8[1] = puVar8[2];
          puVar8[2] = uVar4;
          puVar8 = puVar8 + 4;
        } while (uVar12 - (uVar12 & 1) != lVar10);
      }
      if ((uVar12 & 1) != 0) {
        uVar12 = lVar10 << 1 | 1;
        uVar4 = *(undefined1 *)((long)puVar7 + lVar10 * 2 + (ulong)uVar1);
        *(undefined1 *)((long)puVar7 + lVar10 * 2 + (ulong)uVar1) =
             *(undefined1 *)((long)puVar7 + uVar12 + uVar1);
        *(undefined1 *)((long)puVar7 + uVar12 + uVar1) = uVar4;
      }
      puVar9 = *(ushort **)(param_1 + 0x40);
    }
    uVar12 = (ulong)puVar9[0xb] + (ulong)puVar9[10] + (ulong)puVar9[0xc] + (ulong)puVar9[0xd];
    if ((int)uVar12 != 0) {
      uVar1 = puVar9[0x10];
      if ((int)uVar12 == 1) {
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        puVar8 = (undefined1 *)((long)puVar7 + (ulong)uVar1 + 1);
        do {
          uVar5 = puVar8[-1];
          lVar10 = lVar10 + 2;
          uVar4 = puVar8[1];
          puVar8[-1] = *puVar8;
          *puVar8 = uVar5;
          puVar8[1] = puVar8[2];
          puVar8[2] = uVar4;
          puVar8 = puVar8 + 4;
        } while (uVar12 - (uVar12 & 1) != lVar10);
      }
      if ((uVar12 & 1) != 0) {
        uVar12 = lVar10 << 1 | 1;
        uVar4 = *(undefined1 *)((long)puVar7 + lVar10 * 2 + (ulong)uVar1);
        *(undefined1 *)((long)puVar7 + lVar10 * 2 + (ulong)uVar1) =
             *(undefined1 *)((long)puVar7 + uVar12 + uVar1);
        *(undefined1 *)((long)puVar7 + uVar12 + uVar1) = uVar4;
      }
      puVar9 = *(ushort **)(param_1 + 0x40);
    }
    lVar10 = (ulong)puVar9[8] + (ulong)puVar9[6];
    if ((int)lVar10 != 0) {
      puVar8 = (undefined1 *)((long)puVar7 + (ulong)puVar9[0x11] + 3);
      do {
        uVar4 = puVar8[-3];
        puVar8[-3] = *puVar8;
        uVar5 = puVar8[-2];
        *puVar8 = uVar4;
        puVar8[-2] = puVar8[-1];
        puVar8[-1] = uVar5;
        lVar10 = lVar10 + -1;
        puVar8 = puVar8 + 4;
      } while (lVar10 != 0);
      puVar9 = *(ushort **)(param_1 + 0x40);
    }
    uVar12 = (ulong)puVar9[7];
    if (uVar12 != 0) {
      uVar1 = puVar9[0x11];
      uVar2 = puVar9[6];
      uVar3 = puVar9[8];
      uVar6 = -(uint)puVar9[7] & 1;
      if (uVar12 * 3 == 1) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        lVar10 = (ulong)uVar6 + uVar12 * -3;
        do {
          puVar8 = (undefined1 *)
                   ((long)puVar7 + uVar13 + (ulong)uVar3 * 4 + (ulong)uVar2 * 4 + (ulong)uVar1 + 1);
          uVar13 = uVar13 + 4;
          uVar5 = puVar8[-1];
          uVar4 = puVar8[1];
          puVar8[-1] = *puVar8;
          lVar10 = lVar10 + 2;
          *puVar8 = uVar5;
          puVar8[1] = puVar8[2];
          puVar8[2] = uVar4;
        } while (lVar10 != 0);
      }
      if (uVar6 != 0) {
        lVar10 = (ulong)uVar3 * 4 + (ulong)uVar2 * 4 + (ulong)uVar1;
        uVar4 = *(undefined1 *)((long)puVar7 + uVar13 + lVar10);
        *(undefined1 *)((long)puVar7 + uVar13 + lVar10) =
             *(undefined1 *)((long)puVar7 + (uVar13 | 1) + lVar10);
        *(undefined1 *)((long)puVar7 + (uVar13 | 1) + lVar10) = uVar4;
      }
      puVar9 = *(ushort **)(param_1 + 0x40);
    }
    uVar12 = (ulong)puVar9[9];
    if (uVar12 != 0) {
      puVar8 = (undefined1 *)
               ((long)puVar7 +
               ((ulong)((uint)puVar9[7] * 6 + ((uint)puVar9[8] + (uint)puVar9[6]) * 4 + 0xf) &
               0x1ffff0) + (ulong)puVar9[0x11] + 1);
      do {
        uVar5 = puVar8[-1];
        puVar8[-1] = puVar8[2];
        uVar4 = *puVar8;
        puVar8[2] = uVar5;
        *puVar8 = puVar8[1];
        puVar8[1] = uVar4;
        uVar12 = uVar12 - 1;
        puVar8 = puVar8 + 4;
      } while (uVar12 != 0);
      puVar9 = *(ushort **)(param_1 + 0x40);
    }
    lVar10 = (ulong)puVar9[0xc] + (ulong)puVar9[10];
    if ((int)lVar10 != 0) {
      puVar8 = (undefined1 *)((long)puVar7 + (ulong)puVar9[0x12] + 3);
      do {
        uVar4 = puVar8[-3];
        puVar8[-3] = *puVar8;
        uVar5 = puVar8[-2];
        *puVar8 = uVar4;
        puVar8[-2] = puVar8[-1];
        puVar8[-1] = uVar5;
        lVar10 = lVar10 + -1;
        puVar8 = puVar8 + 4;
      } while (lVar10 != 0);
      puVar9 = *(ushort **)(param_1 + 0x40);
    }
    uVar12 = (ulong)puVar9[0xd];
    if (uVar12 != 0) {
      puVar8 = (undefined1 *)
               ((long)puVar7 +
               ((ulong)(((uint)puVar9[0xc] + (uint)puVar9[10]) * 4 + 0xf) & 0xffff0) +
               (ulong)puVar9[0x12] + 1);
      do {
        uVar5 = puVar8[-1];
        puVar8[-1] = puVar8[2];
        uVar4 = *puVar8;
        puVar8[2] = uVar5;
        *puVar8 = puVar8[1];
        puVar8[1] = uVar4;
        uVar12 = uVar12 - 1;
        puVar8 = puVar8 + 4;
      } while (uVar12 != 0);
      puVar9 = *(ushort **)(param_1 + 0x40);
    }
    lVar10 = (ulong)puVar9[0xc] + (ulong)puVar9[10];
    if ((int)lVar10 != 0) {
      puVar8 = (undefined1 *)((long)puVar7 + (ulong)puVar9[0x13] + 3);
      do {
        uVar4 = puVar8[-3];
        puVar8[-3] = *puVar8;
        uVar5 = puVar8[-2];
        *puVar8 = uVar4;
        puVar8[-2] = puVar8[-1];
        puVar8[-1] = uVar5;
        lVar10 = lVar10 + -1;
        puVar8 = puVar8 + 4;
      } while (lVar10 != 0);
      puVar9 = *(ushort **)(param_1 + 0x40);
    }
    uVar12 = (ulong)puVar9[0xd];
    if (uVar12 != 0) {
      puVar8 = (undefined1 *)
               ((long)puVar7 +
               ((ulong)(((uint)puVar9[0xc] + (uint)puVar9[10]) * 4 + 0xf) & 0xffff0) +
               (ulong)puVar9[0x13] + 1);
      do {
        uVar5 = puVar8[-1];
        puVar8[-1] = puVar8[2];
        uVar4 = *puVar8;
        puVar8[2] = uVar5;
        *puVar8 = puVar8[1];
        puVar8[1] = uVar4;
        uVar12 = uVar12 - 1;
        puVar8 = puVar8 + 4;
      } while (uVar12 != 0);
      puVar9 = *(ushort **)(param_1 + 0x40);
    }
    if (puVar9[3] != 0) {
      uVar6 = 0;
      do {
        uVar12 = (ulong)puVar9[0xb] * 3 + (ulong)puVar9[10] + (ulong)puVar9[0xc] +
                 (ulong)puVar9[0xd];
        if ((int)uVar12 != 0) {
          uVar1 = *puVar9;
          uVar2 = puVar9[0xe];
          uVar13 = uVar12 & 3;
          if (uVar12 - 1 < 3) {
            lVar10 = 0;
          }
          else {
            lVar10 = 0;
            puVar8 = (undefined1 *)((long)puVar9 + (ulong)uVar1 + (ulong)(uVar6 * uVar2) + 3);
            do {
              uVar4 = puVar8[-3];
              puVar8[-3] = puVar8[-2];
              puVar8[-2] = uVar4;
              uVar5 = puVar8[-1];
              puVar8[-1] = *puVar8;
              uVar4 = puVar8[1];
              *puVar8 = uVar5;
              puVar8[1] = puVar8[2];
              puVar8[2] = uVar4;
              uVar4 = puVar8[3];
              lVar10 = lVar10 + 4;
              puVar8[3] = puVar8[4];
              puVar8[4] = uVar4;
              puVar8 = puVar8 + 8;
            } while (uVar12 - uVar13 != lVar10);
          }
          if (uVar13 != 0) {
            lVar11 = -uVar13;
            puVar8 = (undefined1 *)
                     ((long)puVar9 + (ulong)uVar1 + lVar10 * 2 + (ulong)(uVar6 * uVar2) + 1);
            do {
              uVar4 = puVar8[-1];
              puVar8[-1] = *puVar8;
              *puVar8 = uVar4;
              lVar11 = lVar11 + 1;
              puVar8 = puVar8 + 2;
            } while (lVar11 != 0);
          }
          puVar9 = *(ushort **)(param_1 + 0x40);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < puVar9[3]);
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}

