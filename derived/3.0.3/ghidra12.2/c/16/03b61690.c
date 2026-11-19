
void FUN_03b61690(long param_1,int *param_2,ulong param_3)

{
  long lVar1;
  ushort uVar2;
  undefined8 *puVar3;
  short *psVar4;
  long lVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  long lVar9;
  short *psVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  
  *(int **)(param_1 + 0x100) = param_2;
  puVar3 = *(undefined8 **)(param_2 + 10);
  piVar7 = param_2;
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 0x110) = puVar3;
    (**(code **)*puVar3)();
    piVar7 = *(int **)(param_1 + 0x100);
  }
  if (*piVar7 == 2) {
    *(undefined1 *)(param_1 + 0x7b) = 1;
  }
  uVar2 = *(ushort *)(param_1 + 0x78);
  if (uVar2 != 0) {
    uVar16 = 0;
    uVar6 = 1;
    uVar17 = 1;
    do {
      uVar6 = uVar6 & 7;
      uVar8 = uVar17 & 0xfffffff8;
      if (((**(int **)(param_1 + 0x100) == 2) && (lVar9 = *(long *)(param_1 + 0x108), lVar9 != 0))
         && ((int)uVar16 < (int)*(uint *)(lVar9 + 0x10))) {
        if (uVar16 < *(uint *)(lVar9 + 0x10)) {
          lVar11 = lVar9;
          if (6 < uVar16) {
            uVar12 = uVar8;
            do {
              uVar12 = uVar12 - 8;
              lVar11 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long 
                                                  *)(lVar11 + 8) + 8) + 8) + 8) + 8) + 8) + 8) + 8);
            } while (uVar12 != 0);
          }
          if ((uVar16 + 1 & 7) != 0) {
            uVar12 = uVar6;
            do {
              lVar11 = *(long *)(lVar11 + 8);
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
        }
        else {
          lVar11 = 0;
        }
        lVar5 = 0;
        if (lVar11 != 0) {
          lVar5 = lVar11 - *(int *)(lVar9 + 0x14);
        }
      }
      else {
        lVar5 = 0;
      }
      if ((int)uVar16 < (int)*(uint *)(param_1 + 0xf8)) {
        if (uVar16 < *(uint *)(param_1 + 0xf8)) {
          lVar11 = param_1 + 0xe8;
          if (6 < uVar16) {
            do {
              uVar8 = uVar8 - 8;
              lVar11 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long 
                                                  *)(lVar11 + 8) + 8) + 8) + 8) + 8) + 8) + 8) + 8);
            } while (uVar8 != 0);
          }
          if ((uVar16 + 1 & 7) != 0) {
            uVar8 = uVar6;
            do {
              lVar11 = *(long *)(lVar11 + 8);
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
        }
        else {
          lVar11 = 0;
        }
        lVar9 = 0;
        if (lVar11 != 0) {
          lVar9 = lVar11 - *(int *)(param_1 + 0xfc);
        }
      }
      else {
        lVar9 = 0;
      }
      psVar10 = *(short **)(param_2 + 6);
      uVar8 = uVar16 & 3;
      uVar12 = uVar16 & 0xfffffffc;
      psVar4 = psVar10;
      if (uVar16 != 0) {
        if (3 < uVar16) {
          uVar13 = uVar12;
          do {
            uVar13 = uVar13 - 4;
            uVar15 = (ulong)(ushort)psVar4[(ulong)(ushort)psVar4[0x1c] * 6 + 0x3c];
            uVar14 = (ulong)(ushort)psVar4[0x1c];
            psVar4 = psVar4 + uVar14 * 6 +
                              uVar15 * 6 +
                              (ulong)(ushort)psVar4[uVar14 * 6 + uVar15 * 6 + 0x5c] * 6 +
                              (ulong)(ushort)psVar4[uVar14 * 6 +
                                                    uVar15 * 6 +
                                                    (ulong)(ushort)psVar4[uVar14 * 6 +
                                                                          uVar15 * 6 + 0x5c] * 6 +
                                                    0x7c] * 6 + 0x80;
          } while (uVar13 != 0);
        }
        if ((uVar16 & 3) != 0) {
          do {
            uVar8 = uVar8 - 1;
            psVar4 = psVar4 + (ulong)(ushort)psVar4[0x1c] * 6 + 0x20;
          } while (uVar8 != 0);
        }
      }
      if (((char)param_2[2] == '\0') || (piVar7 = *(int **)(param_2 + 4), piVar7 == (int *)0x0)) {
        lVar11 = 0;
      }
      else {
        lVar11 = 0;
        if ((*piVar7 == 0x56415742) && (uVar16 < *(ushort *)(param_2 + 0xc))) {
          if (uVar16 != 0) {
            if (3 < uVar16) {
              do {
                uVar12 = uVar12 - 4;
                uVar15 = (ulong)(ushort)psVar10[(ulong)(ushort)psVar10[0x1c] * 6 + 0x3c];
                uVar14 = (ulong)(ushort)psVar10[0x1c];
                psVar10 = psVar10 + uVar14 * 6 +
                                    uVar15 * 6 +
                                    (ulong)(ushort)psVar10[uVar14 * 6 + uVar15 * 6 + 0x5c] * 6 +
                                    (ulong)(ushort)psVar10[uVar14 * 6 +
                                                           uVar15 * 6 +
                                                           (ulong)(ushort)psVar10[uVar14 * 6 +
                                                                                  uVar15 * 6 + 0x5c]
                                                           * 6 + 0x7c] * 6 + 0x80;
              } while (uVar12 != 0);
            }
            for (uVar8 = uVar16 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              psVar10 = psVar10 + (ulong)(ushort)psVar10[0x1c] * 6 + 0x20;
            }
          }
          lVar11 = (ulong)*(uint *)(psVar10 + 0x18) + (long)piVar7;
        }
      }
      *(ulong *)(lVar9 + 400) = param_3 & 0xffffffff;
      lVar1 = lVar9 + 0x40;
      if (*psVar4 != 1) {
        lVar1 = 0;
      }
      FUN_03b6c514(lVar9 + 0x90,psVar4,lVar11,param_3 & 0xffffffff,lVar1,lVar5);
      uVar16 = uVar16 + 1;
      uVar17 = uVar17 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar16 != uVar2);
  }
  return;
}

