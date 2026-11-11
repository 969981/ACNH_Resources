
void FUN_003abbd0(long param_1,long *param_2,long param_3,ulong param_4)

{
  undefined4 *puVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  int iVar20;
  ushort *puVar21;
  
  lVar14 = *(long *)(param_1 + 0x48);
  uVar5 = *(ushort *)(param_3 + 0x32);
  if (uVar5 != 0) {
    uVar19 = 0;
    param_4 = (ulong)(int)param_4;
    lVar12 = *(long *)(param_3 + 8);
    lVar15 = (ulong)*(ushort *)(param_3 + 0x28) * 4;
    do {
      uVar6 = *(ushort *)(*(long *)(param_1 + 0x88) + param_4 * 2);
      if ((ulong)uVar6 != 0xffff) {
        lVar16 = *(long *)(*param_2 + 0x50);
        lVar13 = lVar16 + (ulong)uVar6 * 0x20;
        if (-1 < *(int *)(lVar13 + 0x14)) {
          lVar16 = (ulong)(uVar6 >> 5) * 4;
          *(uint *)(param_2[2] + lVar16) =
               *(uint *)(param_2[2] + lVar16) | 1 << (ulong)(uVar6 & 0x1f);
          *(byte *)((long)param_2 + 0x2c) = *(byte *)((long)param_2 + 0x2c) | 1;
          lVar16 = *(long *)(*param_2 + 0x50);
        }
        uVar6 = *(ushort *)(lVar13 + 0x18);
        if (-1 < *(int *)(lVar16 + (ulong)uVar6 * 0x20 + 0x14)) {
          uVar17 = (ulong)(uVar6 >> 3) & 0x1ffc;
          *(uint *)(param_2[2] + uVar17) =
               *(uint *)(param_2[2] + uVar17) | 1 << (ulong)(uVar6 & 0x1f);
          *(byte *)((long)param_2 + 0x2c) = *(byte *)((long)param_2 + 0x2c) | 1;
        }
        lVar13 = param_2[9] + (ulong)*(ushort *)(lVar13 + 0x12);
        uVar6 = *(ushort *)(lVar12 + 8);
        uVar17 = (ulong)uVar6;
        uVar4 = (uint)*(ushort *)(lVar12 + 10) + (uint)uVar6 + (uint)*(ushort *)(lVar12 + 0xc);
        uVar11 = (uint)uVar6;
        if (uVar6 <= uVar4 && uVar4 != uVar11) {
          lVar16 = (ulong)*(ushort *)(lVar12 + 10) + (ulong)*(ushort *)(lVar12 + 0xc) + uVar17;
          uVar4 = (int)lVar16 - uVar11;
          uVar9 = (ulong)uVar4 & 3;
          uVar8 = uVar17;
          if ((uVar4 & 3) != 0) {
            lVar18 = (ulong)uVar11 * 0x30 + 0x14;
            do {
              uVar9 = uVar9 - 1;
              lVar2 = uVar8 * 4;
              uVar8 = uVar8 + 1;
              puVar3 = (uint *)(*(long *)(param_3 + 0x18) + lVar18);
              lVar18 = lVar18 + 0x30;
              *(undefined4 *)(lVar13 + (ulong)*puVar3) = *(undefined4 *)(lVar14 + lVar15 + lVar2);
            } while (uVar9 != 0);
          }
          if (2 < ~uVar17 + lVar16) {
            lVar16 = lVar16 - uVar8;
            lVar18 = uVar8 * 0x30;
            puVar7 = (undefined4 *)(lVar15 + lVar14 + 8 + uVar8 * 4);
            do {
              lVar16 = lVar16 + -4;
              *(undefined4 *)(lVar13 + (ulong)*(uint *)(*(long *)(param_3 + 0x18) + lVar18 + 0x14))
                   = puVar7[-2];
              *(undefined4 *)(lVar13 + (ulong)*(uint *)(*(long *)(param_3 + 0x18) + lVar18 + 0x44))
                   = puVar7[-1];
              *(undefined4 *)(lVar13 + (ulong)*(uint *)(*(long *)(param_3 + 0x18) + lVar18 + 0x74))
                   = *puVar7;
              puVar1 = puVar7 + 1;
              puVar7 = puVar7 + 4;
              lVar2 = *(long *)(param_3 + 0x18) + lVar18;
              lVar18 = lVar18 + 0xc0;
              *(undefined4 *)(lVar13 + (ulong)*(uint *)(lVar2 + 0xa4)) = *puVar1;
            } while (lVar16 != 0);
          }
        }
        if ((ulong)*(ushort *)(lVar12 + 0x10) != 0) {
          uVar17 = (ulong)*(ushort *)(lVar12 + 0xe);
          uVar8 = *(ushort *)(lVar12 + 0x10) + uVar17;
          lVar16 = uVar17 << 3;
          do {
            uVar17 = uVar17 + 1;
            puVar3 = (uint *)(*(long *)(param_3 + 0x20) + lVar16);
            lVar16 = lVar16 + 8;
            *(uint *)(lVar13 + (ulong)*puVar3) = puVar3[1];
          } while (uVar17 < uVar8);
        }
      }
      uVar19 = uVar19 + 1;
      lVar12 = lVar12 + 0x18;
      param_4 = param_4 + 1;
    } while (uVar19 != uVar5);
    lVar14 = *(long *)(param_1 + 0x48);
  }
  uVar19 = (uint)*(ushort *)(param_3 + 0x34);
  if (*(ushort *)(param_3 + 0x34) != 0) {
    uVar5 = *(ushort *)(param_3 + 0x2a);
    iVar20 = 0;
    uVar17 = -(param_4 >> 0x1f & 1) & 0xfffffffe00000000 | (param_4 & 0xffffffff) << 1;
    puVar21 = (ushort *)(*(long *)(param_3 + 0x10) + 10);
    do {
      uVar6 = *(ushort *)(*(long *)(param_1 + 0x88) + uVar17);
      uVar8 = (ulong)uVar6;
      if (uVar6 != 0xffff) {
        if (puVar21[-1] == 0xffff) {
          lVar15 = uVar8 * 8;
          lVar13 = (long)*(int *)(*(long *)(param_3 + 0x20) + (ulong)*puVar21 * 8 + 4) * 8;
          lVar16 = *(long *)(*(long *)(param_1 + 0x90) + lVar13);
          lVar12 = param_2[0xb];
          uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x98) + lVar13);
          lVar13 = *(long *)(param_2[10] + lVar15);
          *(long *)(param_2[10] + lVar15) = lVar16;
          *(undefined8 *)(param_2[0xb] + lVar15) = uVar10;
          if (((code *)param_2[0xf] != (code *)0x0) &&
             ((lVar13 != lVar16 ||
              (*(long *)(lVar12 + uVar8 * 8) != *(long *)(param_2[0xb] + uVar8 * 8))))) {
            (*(code *)param_2[0xf])(param_2);
          }
        }
        else {
          uVar4 = *(uint *)(lVar14 + (ulong)uVar5 * 4 + (long)iVar20 * 4);
          if ((int)uVar4 < 0) {
            uVar9 = 0;
          }
          else {
            uVar11 = (uint)*(ushort *)(*(long *)(param_1 + 0x68) + 0x6c);
            if (uVar11 <= uVar4) {
              uVar4 = uVar11 - 1;
            }
            uVar9 = (ulong)uVar4;
          }
          uVar9 = -(uVar9 >> 0x1f) & 0xfffffff800000000 | uVar9 << 3;
          lVar13 = *(long *)(*(long *)(param_1 + 0x90) + uVar9);
          lVar15 = uVar8 * 8;
          uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x98) + uVar9);
          lVar12 = param_2[0xb];
          lVar16 = *(long *)(param_2[10] + lVar15);
          *(long *)(param_2[10] + lVar15) = lVar13;
          *(undefined8 *)(param_2[0xb] + lVar15) = uVar10;
          if (((code *)param_2[0xf] != (code *)0x0) &&
             ((lVar16 != lVar13 || (*(long *)(lVar12 + lVar15) != *(long *)(param_2[0xb] + lVar15)))
             )) {
            (*(code *)param_2[0xf])(param_2);
          }
          iVar20 = iVar20 + 1;
        }
      }
      uVar19 = uVar19 - 1;
      puVar21 = puVar21 + 8;
      uVar17 = uVar17 + 2;
    } while (uVar19 != 0);
  }
  return;
}

