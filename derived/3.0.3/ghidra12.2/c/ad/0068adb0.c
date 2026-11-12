
undefined1  [16]
FUN_0068adb0(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 *param_5,
            undefined1 (*param_6) [16])

{
  bool bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  char cVar6;
  ushort uVar7;
  ushort *puVar8;
  uint uVar9;
  uint *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  char *pcVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  ushort *puVar20;
  int iVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  uVar5 = *(uint *)(param_1 + 2);
  if (uVar5 == 0xffffffff) {
    *param_2 = *param_1;
    return *param_6;
  }
  auVar23._0_8_ = *(ushort **)*param_6;
  uVar18 = (ulong)*(uint *)(*param_6 + 8);
  uVar3 = (ulong)*(uint *)(*param_6 + 0xc);
  if (uVar5 != 0xffff) {
    lVar15 = *(long *)(param_1[1] + 0x38);
    uVar9 = uVar5;
    do {
      puVar2 = (undefined8 *)(lVar15 + (long)(int)uVar9 * 0x20);
      plVar4 = (long *)puVar2[1];
      lVar12 = *(long *)(*(long *)*puVar2 + 0x30) + (ulong)*(ushort *)((long)puVar2 + 0x14) * 0x28;
      cVar6 = *(char *)(lVar12 + 8);
      if ((cVar6 == '\0' && uVar9 == uVar5 || cVar6 == '\x04') ||
         (cVar6 == '\x01' && uVar9 == uVar5)) {
        lVar12 = *(long *)(lVar12 + 0x10);
        if (lVar12 == 0) {
          return ZEXT816(0);
        }
        lVar13 = *(long *)(lVar12 + 8);
        uVar19 = (ulong)*(ushort *)(lVar13 + 0xc);
        puVar10 = (uint *)((int *)(lVar13 + 8) + uVar19 * 4);
        uVar16 = (uint)uVar18;
        uVar17 = *puVar10;
        if (*(int *)(lVar13 + 8) < (int)*puVar10) {
          do {
            if ((uint)((int)uVar17 >> 3) < uVar16) {
              uVar11 = (ulong)(*(byte *)((long)auVar23._0_8_ +
                                        (long)(int)(uVar16 + ~((int)uVar17 >> 3))) >>
                              ((ulong)uVar17 & 7)) & 1;
            }
            else {
              uVar11 = 0;
            }
            uVar19 = (ulong)*(ushort *)(lVar13 + 8 + uVar19 * 0x10 + uVar11 * 2 + 4);
            puVar10 = (uint *)(lVar13 + 8 + uVar19 * 0x10);
            bVar1 = (int)uVar17 < (int)*puVar10;
            uVar17 = *puVar10;
          } while (bVar1);
        }
        if (uVar16 != **(ushort **)(puVar10 + 2)) {
LAB_0068b090:
          *param_2 = lVar12;
          if (param_5 != (undefined8 *)0x0) {
            *param_5 = *(undefined8 *)(lVar15 + (long)(int)uVar9 * 0x20);
          }
          auVar24._8_8_ = uVar18 | uVar3 << 0x20;
          auVar24._0_8_ = auVar23._0_8_;
          return auVar24;
        }
        if (0 < (int)uVar16) {
          puVar8 = *(ushort **)(puVar10 + 2) + 1;
          iVar21 = uVar16 + 1;
          puVar20 = auVar23._0_8_;
          do {
            cVar6 = (char)*puVar20;
            if (cVar6 == '\0' || cVar6 != (char)*puVar8) {
              if (cVar6 != (char)*puVar8) goto LAB_0068b090;
              break;
            }
            iVar21 = iVar21 + -1;
            puVar20 = (ushort *)((long)puVar20 + 1);
            puVar8 = (ushort *)((long)puVar8 + 1);
          } while (1 < iVar21);
        }
        uVar19 = (long)puVar10 + (-0x18 - lVar13);
        if ((((uVar19 ^ 0xffffffffffffffff) & 0xffffffff0) == 0) ||
           (pcVar14 = *(char **)(lVar12 + (long)(int)(uVar19 >> 4) * 8 + 0x10), *pcVar14 != '\0'))
        goto LAB_0068b090;
        puVar8 = *(ushort **)(pcVar14 + 0x10);
        auVar23._0_8_ = puVar8 + 1;
        uVar7 = *puVar8;
        uVar18 = (ulong)uVar7;
        if (plVar4 != (long *)0x0) {
          lVar12 = *plVar4;
          uVar19 = (ulong)*(ushort *)(lVar12 + 0xc);
          puVar10 = (uint *)((int *)(lVar12 + 8) + uVar19 * 4);
          uVar17 = (uint)uVar7;
          uVar9 = *puVar10;
          if (*(int *)(lVar12 + 8) < (int)*puVar10) {
            do {
              if ((uint)((int)uVar9 >> 3) < uVar17) {
                uVar11 = (ulong)(*(byte *)((long)auVar23._0_8_ + uVar18 + (long)~((int)uVar9 >> 3))
                                >> ((ulong)uVar9 & 7)) & 1;
              }
              else {
                uVar11 = 0;
              }
              uVar19 = (ulong)*(ushort *)(lVar12 + 8 + uVar19 * 0x10 + uVar11 * 2 + 4);
              puVar10 = (uint *)(lVar12 + 8 + uVar19 * 0x10);
              bVar1 = (int)uVar9 < (int)*puVar10;
              uVar9 = *puVar10;
            } while (bVar1);
          }
          if (uVar17 == **(ushort **)(puVar10 + 2)) {
            if (uVar17 != 0) {
              puVar8 = *(ushort **)(puVar10 + 2) + 1;
              iVar21 = uVar17 + 1;
              puVar20 = auVar23._0_8_;
              do {
                cVar6 = (char)*puVar20;
                if (cVar6 == '\0' || cVar6 != (char)*puVar8) {
                  if (cVar6 != (char)*puVar8) goto LAB_0068ae5c;
                  break;
                }
                iVar21 = iVar21 + -1;
                puVar20 = (ushort *)((long)puVar20 + 1);
                puVar8 = (ushort *)((long)puVar8 + 1);
              } while (1 < iVar21);
            }
            if ((((long)puVar10 + (-0x18 - lVar12) ^ 0xffffffffffffffffU) & 0xffffffff0) != 0) {
              *param_4 = (long)plVar4;
              auVar23._8_8_ = uVar18 | uVar3 << 0x20;
              return auVar23;
            }
          }
        }
      }
LAB_0068ae5c:
      uVar9 = (uint)*(ushort *)((long)puVar2 + 0x16);
    } while (uVar9 != 0xffff);
  }
  lVar15 = *(long *)(param_1[1] + 0x70);
  *param_3 = lVar15;
  puVar8 = (ushort *)0x0;
  if (lVar15 != 0) {
    puVar8 = auVar23._0_8_;
  }
  uVar19 = 0;
  if (lVar15 != 0) {
    uVar19 = uVar18 | uVar3 << 0x20;
  }
  auVar22._8_8_ = uVar19;
  auVar22._0_8_ = puVar8;
  return auVar22;
}

