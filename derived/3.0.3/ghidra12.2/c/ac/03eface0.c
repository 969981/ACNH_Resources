
void FUN_03eface0(long param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  
  lVar13 = *(long *)(param_1 + 0x40);
  if (lVar13 != param_1 + 0x38) {
    uVar14 = 0;
    do {
      plVar12 = *(long **)(lVar13 + -8);
      if ((char)plVar12[1] != '\0') {
        iVar15 = *(int *)(param_1 + 0x18);
        uVar16 = 1 << (ulong)(uVar14 & 0x1f);
        uVar3 = (ushort)uVar16;
        if (iVar15 != 0) {
          lVar4 = *(long *)(param_1 + 0x20);
          uVar6 = 0;
          do {
            uVar8 = -(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar6 << 3;
            *(ushort *)(lVar4 + uVar8) = *(ushort *)(lVar4 + uVar8) & ~uVar3;
            uVar8 = uVar6 + 1;
            uVar6 = uVar8 & 0xffffffff;
          } while (iVar15 != (int)uVar8);
          uVar7 = *(uint *)(param_1 + 0x18);
          if (uVar7 != 0) {
            lVar4 = *(long *)(param_1 + 0x20);
            uVar5 = 0;
            do {
              lVar9 = lVar4 + ((long)((ulong)uVar5 << 0x20) >> 0x1d);
              *(ushort *)(lVar9 + 2) = *(ushort *)(lVar9 + 2) & ~uVar3;
              uVar5 = uVar5 + 1;
            } while (uVar7 != uVar5);
          }
        }
        (**(code **)(*plVar12 + 0x18))(plVar12,param_1);
        (**(code **)(*plVar12 + 0x20))(plVar12,param_1);
        uVar7 = *(uint *)(param_1 + 0x18);
        if (uVar7 != 0) {
          lVar9 = *(long *)(param_1 + 0x20);
          uVar6 = 0;
          uVar16 = uVar16 & 0xffff;
          lVar4 = lVar9;
          uVar5 = uVar7;
          do {
            if ((*(ushort *)(lVar9 + (-(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar6 << 3)) & uVar16)
                != 0) {
              lVar11 = lVar9 + (long)(int)uVar6 * 8;
              while (uVar10 = *(uint *)(lVar11 + 4), uVar10 != 0xffffffff) {
                uVar1 = uVar10;
                if (uVar5 <= uVar10) {
                  uVar1 = 0;
                }
                uVar8 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
                *(ushort *)(lVar4 + uVar8) = *(ushort *)(lVar4 + uVar8) | uVar3;
                uVar5 = *(uint *)(param_1 + 0x18);
                lVar4 = *(long *)(param_1 + 0x20);
                if (uVar5 <= uVar10) {
                  uVar10 = 0;
                }
                lVar11 = lVar4 + (long)(int)uVar10 * 8;
              }
            }
            uVar8 = uVar6 + 1;
            uVar6 = uVar8 & 0xffffffff;
          } while (uVar7 != (uint)uVar8);
          if (uVar5 != 0) {
            uVar7 = 0;
            lVar9 = lVar4;
            uVar10 = uVar5;
            do {
              if ((*(ushort *)(lVar4 + ((long)((ulong)uVar7 << 0x20) >> 0x1d) + 2) & uVar16) != 0) {
                for (uVar1 = *(uint *)(lVar4 + 4 + (long)(int)uVar7 * 8); uVar1 != 0xffffffff;
                    uVar1 = *(uint *)(lVar9 + (long)(int)uVar1 * 8 + 4)) {
                  uVar2 = uVar1;
                  if (uVar10 <= uVar1) {
                    uVar2 = 0;
                  }
                  lVar9 = lVar9 + (long)(int)uVar2 * 8;
                  *(ushort *)(lVar9 + 2) = *(ushort *)(lVar9 + 2) | uVar3;
                  uVar10 = *(uint *)(param_1 + 0x18);
                  lVar9 = *(long *)(param_1 + 0x20);
                  if (uVar10 <= uVar1) {
                    uVar1 = 0;
                  }
                }
              }
              uVar7 = uVar7 + 1;
            } while (uVar5 != uVar7);
          }
        }
        *(undefined1 *)(plVar12 + 1) = 0;
      }
      lVar13 = *(long *)(lVar13 + 8);
      uVar14 = uVar14 + 1;
    } while (lVar13 + -8 != param_1 + 0x30);
  }
  uVar14 = *(uint *)(*(long *)(*(long *)(param_1 + 8) + 8) + 8);
  if (0 < (int)uVar14) {
    iVar15 = 0;
    uVar16 = 0;
    do {
      uVar7 = uVar16;
      if (*(uint *)(param_1 + 0x18) <= uVar16) {
        uVar7 = 0;
      }
      if (*(short *)(*(long *)(param_1 + 0x20) + (ulong)uVar7 * 8) != 0) {
        lVar13 = *(long *)(param_1 + 8);
        uVar7 = iVar15 >> 0x10;
        FUN_03efa0c0(lVar13,uVar7);
        uVar5 = uVar7;
        if (*(uint *)(lVar13 + 0x10) <= uVar7) {
          uVar5 = 0;
        }
        FUN_03ef9234(*(undefined8 *)(lVar13 + 8),*(long *)(lVar13 + 0x18) + (long)(int)uVar5 * 0x1c,
                     uVar7);
        if (*(uint *)(lVar13 + 0x30) <= uVar7) {
          uVar7 = 0;
        }
        *(undefined1 *)(*(long *)(lVar13 + 0x38) + (long)(int)uVar7) = 2;
        *(undefined1 *)(lVar13 + 0x40) = 0;
      }
      uVar16 = uVar16 + 1;
      iVar15 = iVar15 + 0x10000;
    } while (uVar14 != uVar16);
  }
  return;
}

