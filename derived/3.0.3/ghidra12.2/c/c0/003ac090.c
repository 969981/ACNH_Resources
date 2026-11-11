
void FUN_003ac090(long param_1,long *param_2,long param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  
  lVar16 = *param_2;
  uVar3 = *(ushort *)(param_3 + 0x32);
  if (uVar3 != 0) {
    lVar8 = *(long *)(param_3 + 8);
    uVar17 = 0;
    param_4 = (ulong)(int)param_4;
    do {
      uVar4 = *(ushort *)(*(long *)(param_1 + 0x88) + param_4 * 2);
      uVar10 = (ulong)uVar4;
      if (uVar10 != 0xffff) {
        lVar12 = *(long *)(*param_2 + 0x50);
        lVar9 = lVar12 + uVar10 * 0x20;
        if (-1 < *(int *)(lVar9 + 0x14)) {
          lVar12 = (ulong)(uVar4 >> 5) * 4;
          *(uint *)(param_2[2] + lVar12) =
               *(uint *)(param_2[2] + lVar12) | 1 << (ulong)(uVar4 & 0x1f);
          *(byte *)((long)param_2 + 0x2c) = *(byte *)((long)param_2 + 0x2c) | 1;
          lVar12 = *(long *)(*param_2 + 0x50);
        }
        uVar4 = *(ushort *)(lVar9 + 0x18);
        if (-1 < *(int *)(lVar12 + (ulong)uVar4 * 0x20 + 0x14)) {
          uVar14 = (ulong)(uVar4 >> 3) & 0x1ffc;
          *(uint *)(param_2[2] + uVar14) =
               *(uint *)(param_2[2] + uVar14) | 1 << (ulong)(uVar4 & 0x1f);
          *(byte *)((long)param_2 + 0x2c) = *(byte *)((long)param_2 + 0x2c) | 1;
        }
        uVar4 = *(ushort *)(lVar8 + 8);
        uVar14 = (ulong)uVar4;
        lVar9 = param_2[9] + (ulong)*(ushort *)(lVar9 + 0x12);
        uVar1 = (uint)*(ushort *)(lVar8 + 10) + (uint)uVar4 + (uint)*(ushort *)(lVar8 + 0xc);
        uVar11 = (uint)uVar4;
        lVar12 = *(long *)(lVar16 + 0x60) +
                 (ulong)*(ushort *)(*(long *)(lVar16 + 0x50) + uVar10 * 0x20 + 0x12);
        if (uVar4 <= uVar1 && uVar1 != uVar11) {
          lVar13 = (ulong)*(ushort *)(lVar8 + 10) + (ulong)*(ushort *)(lVar8 + 0xc) + uVar14;
          uVar1 = (int)lVar13 - uVar11;
          uVar5 = (ulong)uVar1 & 3;
          uVar10 = uVar14;
          if ((uVar1 & 3) != 0) {
            lVar15 = (ulong)uVar11 * 0x30 + 0x14;
            uVar10 = uVar14 + uVar5;
            do {
              uVar5 = uVar5 - 1;
              uVar6 = (ulong)*(uint *)(*(long *)(param_3 + 0x18) + lVar15);
              lVar15 = lVar15 + 0x30;
              *(undefined4 *)(lVar9 + uVar6) = *(undefined4 *)(lVar12 + uVar6);
            } while (uVar5 != 0);
          }
          if (2 < ~uVar14 + lVar13) {
            lVar13 = lVar13 - uVar10;
            lVar15 = uVar10 * 0x30;
            do {
              lVar13 = lVar13 + -4;
              uVar10 = (ulong)*(uint *)(*(long *)(param_3 + 0x18) + lVar15 + 0x14);
              *(undefined4 *)(lVar9 + uVar10) = *(undefined4 *)(lVar12 + uVar10);
              uVar10 = (ulong)*(uint *)(*(long *)(param_3 + 0x18) + lVar15 + 0x44);
              *(undefined4 *)(lVar9 + uVar10) = *(undefined4 *)(lVar12 + uVar10);
              uVar10 = (ulong)*(uint *)(*(long *)(param_3 + 0x18) + lVar15 + 0x74);
              *(undefined4 *)(lVar9 + uVar10) = *(undefined4 *)(lVar12 + uVar10);
              lVar2 = *(long *)(param_3 + 0x18) + lVar15;
              lVar15 = lVar15 + 0xc0;
              uVar10 = (ulong)*(uint *)(lVar2 + 0xa4);
              *(undefined4 *)(lVar9 + uVar10) = *(undefined4 *)(lVar12 + uVar10);
            } while (lVar13 != 0);
          }
        }
        if ((ulong)*(ushort *)(lVar8 + 0x10) != 0) {
          uVar10 = (ulong)*(ushort *)(lVar8 + 0xe);
          uVar14 = *(ushort *)(lVar8 + 0x10) + uVar10;
          lVar13 = uVar10 << 3;
          do {
            uVar10 = uVar10 + 1;
            uVar5 = (ulong)*(uint *)(*(long *)(param_3 + 0x20) + lVar13);
            lVar13 = lVar13 + 8;
            *(undefined4 *)(lVar9 + uVar5) = *(undefined4 *)(lVar12 + uVar5);
          } while (uVar10 < uVar14);
        }
      }
      uVar17 = uVar17 + 1;
      lVar8 = lVar8 + 0x18;
      param_4 = param_4 + 1;
    } while (uVar17 != uVar3);
  }
  uVar17 = (uint)*(ushort *)(param_3 + 0x34);
  if (*(ushort *)(param_3 + 0x34) != 0) {
    uVar10 = -(param_4 >> 0x1f & 1) & 0xfffffffe00000000 | (param_4 & 0xffffffff) << 1;
    do {
      uVar3 = *(ushort *)(*(long *)(param_1 + 0x88) + uVar10);
      if (uVar3 != 0xffff) {
        lVar9 = (ulong)uVar3 * 8;
        lVar8 = param_2[0xb];
        lVar12 = *(long *)(*(long *)(lVar16 + 0x28) + lVar9);
        lVar13 = *(long *)(param_2[10] + lVar9);
        uVar7 = *(undefined8 *)(*(long *)(lVar16 + 0x90) + lVar9);
        *(long *)(param_2[10] + lVar9) = lVar12;
        *(undefined8 *)(param_2[0xb] + lVar9) = uVar7;
        if (((code *)param_2[0xf] != (code *)0x0) &&
           ((lVar13 != lVar12 ||
            (lVar9 = (ulong)uVar3 * 8, *(long *)(lVar8 + lVar9) != *(long *)(param_2[0xb] + lVar9)))
           )) {
          (*(code *)param_2[0xf])(param_2);
        }
      }
      uVar17 = uVar17 - 1;
      uVar10 = uVar10 + 2;
    } while (uVar17 != 0);
  }
  return;
}

