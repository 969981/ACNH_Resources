
void FUN_03efa9f0(long param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  
  lVar15 = *(long *)(param_1 + 0x40);
  if (lVar15 != param_1 + 0x38) {
    uVar16 = 0;
    do {
      plVar13 = *(long **)(lVar15 + -8);
      if ((char)plVar13[1] != '\0') {
        iVar17 = *(int *)(param_1 + 0x18);
        uVar18 = 1 << (ulong)(uVar16 & 0x1f);
        uVar3 = (ushort)uVar18;
        if (iVar17 != 0) {
          lVar5 = *(long *)(param_1 + 0x20);
          uVar7 = 0;
          do {
            uVar9 = -(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3;
            *(ushort *)(lVar5 + uVar9) = *(ushort *)(lVar5 + uVar9) & ~uVar3;
            uVar9 = uVar7 + 1;
            uVar7 = uVar9 & 0xffffffff;
          } while (iVar17 != (int)uVar9);
          uVar8 = *(uint *)(param_1 + 0x18);
          if (uVar8 != 0) {
            lVar5 = *(long *)(param_1 + 0x20);
            uVar6 = 0;
            do {
              lVar10 = lVar5 + ((long)((ulong)uVar6 << 0x20) >> 0x1d);
              *(ushort *)(lVar10 + 2) = *(ushort *)(lVar10 + 2) & ~uVar3;
              uVar6 = uVar6 + 1;
            } while (uVar8 != uVar6);
          }
        }
        (**(code **)(*plVar13 + 0x18))(plVar13,param_1);
        (**(code **)(*plVar13 + 0x20))(plVar13,param_1);
        uVar8 = *(uint *)(param_1 + 0x18);
        if (uVar8 != 0) {
          lVar10 = *(long *)(param_1 + 0x20);
          uVar7 = 0;
          uVar18 = uVar18 & 0xffff;
          lVar5 = lVar10;
          uVar6 = uVar8;
          do {
            if ((*(ushort *)(lVar10 + (-(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3)) & uVar18
                ) != 0) {
              lVar12 = lVar10 + (long)(int)uVar7 * 8;
              while (uVar11 = *(uint *)(lVar12 + 4), uVar11 != 0xffffffff) {
                uVar1 = uVar11;
                if (uVar6 <= uVar11) {
                  uVar1 = 0;
                }
                uVar9 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
                *(ushort *)(lVar5 + uVar9) = *(ushort *)(lVar5 + uVar9) | uVar3;
                uVar6 = *(uint *)(param_1 + 0x18);
                lVar5 = *(long *)(param_1 + 0x20);
                if (uVar6 <= uVar11) {
                  uVar11 = 0;
                }
                lVar12 = lVar5 + (long)(int)uVar11 * 8;
              }
            }
            uVar9 = uVar7 + 1;
            uVar7 = uVar9 & 0xffffffff;
          } while (uVar8 != (uint)uVar9);
          if (uVar6 != 0) {
            uVar8 = 0;
            lVar10 = lVar5;
            uVar11 = uVar6;
            do {
              if ((*(ushort *)(lVar5 + ((long)((ulong)uVar8 << 0x20) >> 0x1d) + 2) & uVar18) != 0) {
                for (uVar1 = *(uint *)(lVar5 + 4 + (long)(int)uVar8 * 8); uVar1 != 0xffffffff;
                    uVar1 = *(uint *)(lVar10 + (long)(int)uVar1 * 8 + 4)) {
                  uVar2 = uVar1;
                  if (uVar11 <= uVar1) {
                    uVar2 = 0;
                  }
                  lVar10 = lVar10 + (long)(int)uVar2 * 8;
                  *(ushort *)(lVar10 + 2) = *(ushort *)(lVar10 + 2) | uVar3;
                  uVar11 = *(uint *)(param_1 + 0x18);
                  lVar10 = *(long *)(param_1 + 0x20);
                  if (uVar11 <= uVar1) {
                    uVar1 = 0;
                  }
                }
              }
              uVar8 = uVar8 + 1;
            } while (uVar6 != uVar8);
          }
        }
        *(undefined1 *)(plVar13 + 1) = 0;
      }
      lVar15 = *(long *)(lVar15 + 8);
      uVar16 = uVar16 + 1;
    } while (lVar15 + -8 != param_1 + 0x30);
  }
  lVar15 = *(long *)(*(long *)(param_1 + 8) + 8);
  uVar16 = *(uint *)(lVar15 + 8);
  if (0 < (int)uVar16) {
    iVar17 = 0;
    uVar18 = 0;
    do {
      uVar8 = uVar18;
      if (*(uint *)(param_1 + 0x18) <= uVar18) {
        uVar8 = 0;
      }
      if (*(short *)(*(long *)(param_1 + 0x20) + (ulong)uVar8 * 8 + 2) != 0) {
        uVar8 = uVar18;
        if (*(uint *)(lVar15 + 8) <= uVar18) {
          uVar8 = 0;
        }
        if ((((uVar18 ^ 0xffffffff) & 0xffff) != 0) &&
           (*(short *)(*(long *)(lVar15 + 0x10) + (ulong)uVar8 * 2) != -1)) {
          uVar14 = *(undefined8 *)(*(long *)(param_1 + 8) + 8);
          uVar4 = FUN_03ef9b40(*(long *)(param_1 + 8),iVar17 >> 0x10);
          FUN_03ef8c00(uVar14,uVar4,iVar17 >> 0x10,1,1);
        }
      }
      uVar18 = uVar18 + 1;
      iVar17 = iVar17 + 0x10000;
    } while (uVar16 != uVar18);
  }
  return;
}

