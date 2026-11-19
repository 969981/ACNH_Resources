
void FUN_0388dbe0(int *param_1,int *param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  
  *param_2 = 0;
  iVar9 = *param_1;
  if ((iVar9 != 0) && (0 < param_2[1])) {
    puVar12 = *(undefined8 **)(param_1 + 2);
    iVar11 = 0;
    puVar13 = puVar12;
    do {
      if (iVar11 < param_2[1]) {
        *(undefined8 *)(*(long *)(param_2 + 2) + (long)iVar11 * 8) = *puVar12;
        iVar11 = *param_2 + 1;
        *param_2 = iVar11;
        puVar13 = *(undefined8 **)(param_1 + 2);
        iVar9 = *param_1;
      }
      puVar2 = PTR_DAT_04bcb7d8;
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar13 + iVar9);
    if (1 < iVar11) {
      uVar19 = iVar11 - 1;
      lVar10 = *(long *)(param_2 + 2);
      uVar20 = 0;
      do {
        if ((int)uVar19 <= (int)uVar20) {
          return;
        }
        lVar15 = *(long *)puVar2;
        uVar14 = (ulong)uVar20;
        uVar16 = (ulong)uVar19;
        uVar17 = uVar14;
        uVar19 = uVar20;
        do {
          uVar18 = uVar17 + 1;
          lVar6 = *(long *)(*(long *)(lVar15 + 0x90) + 0xc0);
          lVar21 = *(long *)(lVar10 + uVar18 * 8);
          uVar1 = *(uint *)(lVar6 + 0x540);
          uVar3 = (ulong)uVar1;
          lVar22 = *(long *)(lVar10 + uVar17 * 8);
          if ((int)uVar1 < 1) {
LAB_0388dcb0:
            *(long *)(lVar10 + uVar18 * 8) = lVar22;
            uVar19 = (uint)uVar17;
            *(long *)(lVar10 + uVar17 * 8) = lVar21;
            lVar15 = *(long *)puVar2;
          }
          else {
            lVar4 = 0x7fffffffffffffff;
            lVar5 = 0x7fffffffffffffff;
            plVar7 = *(long **)(lVar6 + 0x548);
            do {
              plVar8 = (long *)*plVar7;
              if (((*(long *)(lVar22 + 0x10) == *plVar8) &&
                  (*(char *)(lVar22 + 0x18) == (char)plVar8[1])) &&
                 (*(char *)(lVar22 + 0x19) == *(char *)((long)plVar8 + 9))) {
                lVar5 = plVar8[2];
              }
              if (((*(long *)(lVar21 + 0x10) == *plVar8) &&
                  (*(char *)(lVar21 + 0x18) == (char)plVar8[1])) &&
                 (*(char *)(lVar21 + 0x19) == *(char *)((long)plVar8 + 9))) {
                lVar4 = plVar8[2];
              }
              uVar3 = uVar3 - 1;
              plVar7 = plVar7 + 1;
            } while (uVar3 != 0);
            if (lVar4 <= lVar5) goto LAB_0388dcb0;
          }
          uVar17 = uVar18;
        } while (uVar18 != uVar16);
        if ((int)uVar19 <= (int)uVar20) {
          return;
        }
        uVar17 = (ulong)uVar19;
        uVar20 = uVar19;
        do {
          uVar18 = uVar17 - 1;
          lVar6 = *(long *)(*(long *)(lVar15 + 0x90) + 0xc0);
          uVar1 = *(uint *)(lVar6 + 0x540);
          uVar16 = (ulong)uVar1;
          if (0 < (int)uVar1) {
            lVar4 = *(long *)(lVar10 + uVar18 * 8);
            lVar21 = 0x7fffffffffffffff;
            lVar5 = *(long *)(lVar10 + uVar17 * 8);
            lVar22 = 0x7fffffffffffffff;
            plVar7 = *(long **)(lVar6 + 0x548);
            do {
              plVar8 = (long *)*plVar7;
              if (((*(long *)(lVar5 + 0x10) == *plVar8) &&
                  (*(char *)(lVar5 + 0x18) == (char)plVar8[1])) &&
                 (*(char *)(lVar5 + 0x19) == *(char *)((long)plVar8 + 9))) {
                lVar22 = plVar8[2];
              }
              if (((*(long *)(lVar4 + 0x10) == *plVar8) &&
                  (*(char *)(lVar4 + 0x18) == (char)plVar8[1])) &&
                 (*(char *)(lVar4 + 0x19) == *(char *)((long)plVar8 + 9))) {
                lVar21 = plVar8[2];
              }
              uVar16 = uVar16 - 1;
              plVar7 = plVar7 + 1;
            } while (uVar16 != 0);
            if (lVar22 < lVar21) {
              *(long *)(lVar10 + uVar18 * 8) = lVar5;
              uVar20 = (uint)uVar17;
              *(long *)(lVar10 + uVar17 * 8) = lVar4;
              lVar15 = *(long *)puVar2;
            }
          }
          uVar17 = uVar18;
        } while ((long)uVar14 < (long)uVar18);
      } while (uVar20 != uVar19);
    }
  }
  return;
}

