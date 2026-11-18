
void FUN_03360ed0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  byte bVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  byte bVar17;
  long lVar18;
  undefined *local_78;
  undefined *local_70;
  ulong local_68;
  
  if ((*(long *)(param_1 + 0xdf8) != 0) && (uVar13 = *(uint *)(param_1 + 0x1768), 0 < (int)uVar13))
  {
    piVar3 = (int *)(param_1 + 0xe00);
    uVar14 = 0;
    piVar12 = piVar3;
    do {
      piVar5 = piVar12;
      if (299 < uVar14) {
        piVar5 = piVar3;
      }
      if (*(int *)(param_1 + 0x5d8) < *piVar5) goto LAB_03360f28;
      uVar14 = uVar14 + 1;
      piVar12 = piVar12 + 1;
    } while (uVar13 != uVar14);
    uVar14 = (ulong)uVar13;
LAB_03360f28:
    uVar13 = (uint)uVar14;
    if (0 < (int)uVar13) {
      piVar12 = piVar3 + (uVar13 - 1);
      if (300 < uVar13) {
        piVar12 = piVar3;
      }
      uVar13 = *(int *)(param_1 + 0x5d8) - *piVar12;
      plVar8 = (long *)(param_1 + 0x300) + uVar13;
      if (0x12 < uVar13) {
        plVar8 = (long *)(param_1 + 0x300);
      }
      lVar9 = *plVar8;
      if (lVar9 != 0) {
        bVar10 = 0;
        lVar15 = 0x300;
        do {
          if (*(long *)(*(long *)(param_1 + lVar15) + 0x428) ==
              *(long *)(*(long *)(*(long *)(param_1 + 0x3a8) + 0x18) + 0x18)) {
            lVar16 = *(long *)(*(long *)(param_1 + lVar15) + 0x420);
            bVar17 = 0;
            if (lVar16 != 0) {
              bVar17 = *(byte *)(lVar16 + 0x148) & 1;
            }
            bVar10 = bVar17 | bVar10;
          }
          lVar15 = lVar15 + 8;
        } while (lVar15 != 0x398);
        if (bVar10 != 0) {
          if ((*(char *)(*(long *)PTR_DAT_04bc1118 + 0x499) == '\0') &&
             (*(long *)(param_1 + 0xdf8) != 0)) {
            lVar16 = 0;
            lVar15 = param_1 + 0x300;
            piVar3 = (int *)(param_1 + 0xe00);
            puVar1 = PTR_DAT_04bc8e68 + 0x10;
            puVar2 = PTR_s_Decide_Erase_04bc9780 + 0x281;
            do {
              if (*(long *)(lVar15 + lVar16 * 8) == lVar9) {
                *(undefined1 *)(param_1 + 0x177f) = 1;
                uVar13 = *(uint *)(param_1 + 0x1768);
                piVar12 = piVar3;
                if (0 < (int)uVar13) {
                  uVar14 = 0;
                  do {
                    piVar5 = piVar12;
                    if (299 < uVar14) {
                      piVar5 = piVar3;
                    }
                    if (*(int *)(param_1 + 0x5d8) < *piVar5) goto LAB_0335cb58;
                    uVar14 = uVar14 + 1;
                    piVar12 = piVar12 + 1;
                  } while (uVar13 != uVar14);
                  uVar14 = (ulong)uVar13;
LAB_0335cb58:
                  uVar13 = (int)uVar14 - 1;
                  piVar12 = piVar3 + uVar13;
                  if (299 < uVar13) {
                    piVar12 = piVar3;
                  }
                }
                if (*(char *)(*(long *)(param_1 + 0xdf8) + 0x25d) != '\0') {
                  FUN_032efbb0(*(undefined8 *)PTR_DAT_04bc96d0,*(long *)PTR_DAT_04bc96a8 + 0x10,0,
                               *piVar12 + (int)lVar16);
                }
                local_68 = *(ulong *)(*(long *)(*(long *)(lVar15 + lVar16 * 8) + 0x20) + 0x18);
                local_70 = &DAT_040c1e5f;
                local_78 = puVar1;
                lVar6 = FUN_0328b6d0(&local_68,&local_78,0);
                local_78 = *(undefined **)(lVar6 + 0xd8);
                local_70 = (undefined *)((ulong)local_70 & 0xffffffffffffff00);
                lVar18 = *(long *)PTR_DAT_04bb4fb0;
                uVar7 = FUN_03368ef0(*(undefined8 *)PTR_DAT_04bc9358,0);
                lVar6 = *(long *)(lVar18 + 8);
                if (lVar6 != 0) {
                  lVar4 = 0;
                  if (*(char *)(lVar6 + 0x38) != '\0') {
                    lVar4 = lVar6 + 8;
                  }
                  FUN_03366350(lVar18,lVar4,puVar2,1,uVar7,0);
                }
                FUN_032e4b30(*(undefined8 *)(param_1 + 8),2,&local_78);
                FUN_032e4b30(*(undefined8 *)(param_1 + 8),0x17,0);
                lVar6 = 0;
                bVar10 = 0;
                do {
                  if (*(long *)(*(long *)(lVar15 + lVar6) + 0x428) ==
                      *(long *)(*(long *)(*(long *)(param_1 + 0x3a8) + 0x18) + 0x18)) {
                    lVar18 = *(long *)(*(long *)(lVar15 + lVar6) + 0x420);
                    bVar17 = 0;
                    if (lVar18 != 0) {
                      local_68 = local_68 & 0xffffffff00000000;
                      bVar17 = *(byte *)(lVar18 + 0x148) & 1;
                    }
                    bVar10 = bVar17 | bVar10;
                  }
                  lVar6 = lVar6 + 8;
                } while (lVar6 != 0x98);
                *(byte *)(param_1 + 0x1781) = bVar10;
                if (bVar10 != 0) {
                  lVar18 = *(long *)(*(long *)(param_1 + 0x3a8) + 0x18);
                  lVar6 = *(long *)(lVar18 + 0x18);
                  *(undefined8 *)(lVar18 + 0x18) = 0;
                  if ((lVar6 != 0) && (plVar8 = *(long **)(lVar18 + 0x138), plVar8 != (long *)0x0))
                  {
                    (**(code **)(*plVar8 + 0x20))(plVar8,lVar6,0);
                  }
                }
              }
              lVar16 = lVar16 + 1;
            } while (lVar16 != 0x13);
            if (*(long *)(param_1 + 0x398) == lVar9) {
              uVar13 = *(uint *)(param_1 + 0x1768);
              if (1 < (int)uVar13) {
                uVar14 = 0;
                piVar12 = piVar3;
                do {
                  piVar5 = piVar12;
                  if (299 < uVar14) {
                    piVar5 = piVar3;
                  }
                  if (*(int *)(param_1 + 0x5d8) < *piVar5) goto LAB_0335cd28;
                  uVar14 = uVar14 + 1;
                  piVar12 = piVar12 + 1;
                } while (uVar13 != uVar14);
                uVar14 = (ulong)uVar13;
LAB_0335cd28:
                uVar13 = uVar13 - 1;
                if (1 < (int)uVar14) {
                  uVar13 = (int)uVar14 - 2;
                }
                piVar12 = piVar3 + uVar13;
                if (299 < uVar13) {
                  piVar12 = piVar3;
                }
                *(int *)(param_1 + 0x5d8) = *piVar12;
                FUN_033600f0(param_1,1);
              }
            }
            if (*(long *)(param_1 + 0x3a0) == lVar9) {
              uVar13 = *(uint *)(param_1 + 0x1768);
              if (1 < (int)uVar13) {
                uVar14 = 0;
                piVar12 = piVar3;
                do {
                  piVar5 = piVar12;
                  if (299 < uVar14) {
                    piVar5 = piVar3;
                  }
                  if (*(int *)(param_1 + 0x5d8) < *piVar5) goto LAB_0335cda8;
                  uVar14 = uVar14 + 1;
                  piVar12 = piVar12 + 1;
                } while (uVar13 != uVar14);
                uVar14 = (ulong)uVar13;
LAB_0335cda8:
                uVar11 = (uint)uVar14;
                if ((int)uVar13 <= (int)uVar11) {
                  uVar11 = 0;
                }
                piVar12 = piVar3 + uVar11;
                if (299 < uVar11) {
                  piVar12 = piVar3;
                }
                *(int *)(param_1 + 0x5d8) = *piVar12;
                FUN_033600f0(param_1,1);
              }
            }
          }
          return;
        }
      }
    }
  }
  return;
}

