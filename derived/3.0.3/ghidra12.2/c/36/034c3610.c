
/* WARNING: Removing unreachable block (ram,0x034c4850) */
/* WARNING: Removing unreachable block (ram,0x034c3fac) */
/* WARNING: Removing unreachable block (ram,0x034c3d60) */
/* WARNING: Removing unreachable block (ram,0x034c4310) */
/* WARNING: Removing unreachable block (ram,0x034c3a6c) */
/* WARNING: Removing unreachable block (ram,0x034c3820) */
/* WARNING: Removing unreachable block (ram,0x034c38d0) */
/* WARNING: Removing unreachable block (ram,0x034c4264) */
/* WARNING: Removing unreachable block (ram,0x034c44ac) */
/* WARNING: Removing unreachable block (ram,0x034c3e10) */
/* WARNING: Removing unreachable block (ram,0x034c47a4) */
/* WARNING: Removing unreachable block (ram,0x034c49ec) */
/* WARNING: Removing unreachable block (ram,0x034c4050) */
/* WARNING: Removing unreachable block (ram,0x034c3b10) */
/* WARNING: Removing unreachable block (ram,0x034c4550) */
/* WARNING: Removing unreachable block (ram,0x034c4a90) */

void FUN_034c3610(long *param_1,byte param_2)

{
  long *plVar1;
  bool bVar2;
  bool bVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  undefined8 local_1fd0;
  long *local_1fc8 [501];
  undefined8 local_1020;
  undefined8 *local_1018;
  undefined8 local_1010 [500];
  undefined4 local_6c;
  
  if ((long *)*param_1 != (long *)0x0) {
    (**(code **)(*(long *)*param_1 + 0x10))();
    *(byte *)(param_1 + 0x1ff) = param_2 & 1;
    plVar22 = (long *)*param_1;
    if (plVar22 != (long *)0x0) {
      local_1020 = 0x1f400000000;
      local_1018 = local_1010;
      local_1fd0 = 0x1f400000000;
      iVar7 = (**(code **)(*plVar22 + 0x50))(plVar22);
      if (0 < iVar7) {
        iVar12 = 0;
        do {
          plVar14 = (long *)(**(code **)(*plVar22 + 0x40))(plVar22,iVar12);
          if ((plVar14 != (long *)0x0) &&
             (((uVar15 = (**(code **)(*plVar14 + 0xd8))(), (uVar15 & 1) != 0 ||
               (uVar15 = (**(code **)(*plVar14 + 0xe0))(plVar14), (uVar15 & 1) != 0)) &&
              (uVar15 = (**(code **)(*plVar14 + 0x38))(plVar14), (uVar15 & 1) == 0)))) {
            if ((int)(uint)local_1020 < local_1020._4_4_) {
              local_1018[(int)(uint)local_1020] = plVar14;
              local_1020 = CONCAT44(local_1020._4_4_,(uint)local_1020 + 1);
            }
            if ((int)(uint)local_1fd0 < local_1fd0._4_4_) {
              local_1fc8[(long)(int)(uint)local_1fd0 + 1] = plVar14;
              local_1fd0 = CONCAT44(local_1fd0._4_4_,(uint)local_1fd0 + 1);
            }
          }
          iVar12 = iVar12 + 1;
        } while (iVar7 != iVar12);
      }
      puVar18 = local_1018;
      uVar11 = (uint)local_1020;
      uVar15 = local_1020 & 0xffffffff;
      if (1 < (int)(uint)local_1020) {
        uVar20 = (ulong)((uint)local_1020 >> 1);
        do {
          uVar8 = (uint)uVar20;
          uVar9 = uVar8 * 2;
          plVar22 = (long *)puVar18[uVar20 - 1 & 0xffffffff];
          if ((int)uVar9 <= (int)uVar11) {
            uVar21 = uVar20 & 0xffffffff;
            do {
              uVar13 = uVar9;
              if ((int)uVar9 < (int)uVar11) {
                plVar14 = (long *)(puVar18 + (int)uVar9)[-1];
                plVar1 = (long *)puVar18[(int)uVar9];
                uVar4 = (**(code **)(*plVar14 + 0x58))(plVar14);
                if (((DAT_05574040 == 0) ||
                    (local_6c = 1, ((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0)) ||
                   (lVar16 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38
                                         ))(), lVar16 == 0)) {
                  iVar7 = 0;
                }
                else {
                  if ((*(long **)(lVar16 + 0x5dab50) == (long *)0x0) ||
                     (puVar17 = (undefined8 *)**(long **)(lVar16 + 0x5dab50),
                     puVar17 == (undefined8 *)0x0)) {
                    uVar8 = 1;
                  }
                  else {
                    uVar8 = (**(code **)*puVar17)();
                    uVar8 = uVar8 ^ 1;
                  }
                  if (uVar4 < 500) {
                    iVar7 = *(int *)(*(long *)(lVar16 + 0x5dab38) + *(long *)(lVar16 + 0x5dab30) +
                                    (ulong)uVar4 * 4);
                  }
                  else {
                    iVar7 = 0;
                  }
                  if ((((uVar8 & 1) == 0) && (*(long *)(lVar16 + 0x5dab50) != 0)) &&
                     (puVar17 = *(undefined8 **)(*(long *)(lVar16 + 0x5dab50) + 8),
                     puVar17 != (undefined8 *)0x0)) {
                    (**(code **)*puVar17)();
                  }
                }
                uVar4 = (**(code **)(*plVar1 + 0x58))(plVar1);
                if (((DAT_05574040 == 0) ||
                    (local_6c = 1, ((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0)) ||
                   (lVar16 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38
                                         ))(), lVar16 == 0)) {
                  bVar2 = false;
                  if (iVar7 != 0) goto LAB_034c3a20;
LAB_034c393c:
                  uVar8 = (**(code **)(*plVar14 + 0x100))(plVar14);
                  uVar13 = (**(code **)(*plVar1 + 0x100))(plVar1);
                  bVar2 = uVar8 < uVar13;
                }
                else {
                  if ((*(long **)(lVar16 + 0x5dab50) == (long *)0x0) ||
                     (puVar17 = (undefined8 *)**(long **)(lVar16 + 0x5dab50),
                     puVar17 == (undefined8 *)0x0)) {
                    uVar8 = 1;
                  }
                  else {
                    uVar8 = (**(code **)*puVar17)();
                    uVar8 = uVar8 ^ 1;
                  }
                  if (uVar4 < 500) {
                    iVar12 = *(int *)(*(long *)(lVar16 + 0x5dab38) + *(long *)(lVar16 + 0x5dab30) +
                                     (ulong)uVar4 * 4);
                  }
                  else {
                    iVar12 = 0;
                  }
                  if ((((uVar8 & 1) == 0) && (*(long *)(lVar16 + 0x5dab50) != 0)) &&
                     (puVar17 = *(undefined8 **)(*(long *)(lVar16 + 0x5dab50) + 8),
                     puVar17 != (undefined8 *)0x0)) {
                    (**(code **)*puVar17)();
                  }
                  bVar2 = SBORROW4(iVar7,iVar12);
                  bVar3 = iVar7 == iVar12;
                  iVar7 = iVar7 - iVar12;
                  if (bVar3) goto LAB_034c393c;
LAB_034c3a20:
                  bVar2 = iVar7 < 0 == bVar2;
                }
                uVar13 = uVar9 | bVar2;
              }
              plVar14 = (long *)puVar18[(int)(uVar13 - 1)];
              uVar4 = (**(code **)(*plVar22 + 0x58))(plVar22);
              if (((DAT_05574040 == 0) ||
                  (local_6c = 1, ((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0)) ||
                 (lVar16 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))
                                     (), lVar16 == 0)) {
                iVar7 = 0;
              }
              else {
                if ((*(long **)(lVar16 + 0x5dab50) == (long *)0x0) ||
                   (puVar17 = (undefined8 *)**(long **)(lVar16 + 0x5dab50),
                   puVar17 == (undefined8 *)0x0)) {
                  uVar9 = 1;
                }
                else {
                  uVar9 = (**(code **)*puVar17)();
                  uVar9 = uVar9 ^ 1;
                }
                if (uVar4 < 500) {
                  iVar7 = *(int *)(*(long *)(lVar16 + 0x5dab38) + *(long *)(lVar16 + 0x5dab30) +
                                  (ulong)uVar4 * 4);
                }
                else {
                  iVar7 = 0;
                }
                if ((((uVar9 & 1) == 0) && (*(long *)(lVar16 + 0x5dab50) != 0)) &&
                   (puVar17 = *(undefined8 **)(*(long *)(lVar16 + 0x5dab50) + 8),
                   puVar17 != (undefined8 *)0x0)) {
                  (**(code **)*puVar17)();
                }
              }
              uVar4 = (**(code **)(*plVar14 + 0x58))(plVar14);
              uVar8 = (uint)uVar21;
              if (((DAT_05574040 == 0) ||
                  (local_6c = 1, ((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0)) ||
                 (lVar16 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))
                                     (), lVar16 == 0)) {
                bVar2 = false;
                if (iVar7 != 0) goto LAB_034c37b0;
LAB_034c3b7c:
                uVar9 = (**(code **)(*plVar22 + 0x100))(plVar22);
                uVar10 = (**(code **)(*plVar14 + 0x100))(plVar14);
                if (uVar10 <= uVar9) break;
              }
              else {
                if ((*(long **)(lVar16 + 0x5dab50) == (long *)0x0) ||
                   (puVar17 = (undefined8 *)**(long **)(lVar16 + 0x5dab50),
                   puVar17 == (undefined8 *)0x0)) {
                  uVar9 = 1;
                }
                else {
                  uVar9 = (**(code **)*puVar17)();
                  uVar9 = uVar9 ^ 1;
                }
                if (uVar4 < 500) {
                  iVar12 = *(int *)(*(long *)(lVar16 + 0x5dab38) + *(long *)(lVar16 + 0x5dab30) +
                                   (ulong)uVar4 * 4);
                }
                else {
                  iVar12 = 0;
                }
                if ((((uVar9 & 1) == 0) && (*(long *)(lVar16 + 0x5dab50) != 0)) &&
                   (puVar17 = *(undefined8 **)(*(long *)(lVar16 + 0x5dab50) + 8),
                   puVar17 != (undefined8 *)0x0)) {
                  (**(code **)*puVar17)();
                }
                bVar2 = SBORROW4(iVar7,iVar12);
                bVar3 = iVar7 == iVar12;
                iVar7 = iVar7 - iVar12;
                if (bVar3) goto LAB_034c3b7c;
LAB_034c37b0:
                if (iVar7 < 0 != bVar2) break;
              }
              uVar9 = uVar13 * 2;
              puVar18[(int)(uVar8 - 1)] = puVar18[(int)(uVar13 - 1)];
              uVar21 = (ulong)uVar13;
              uVar8 = uVar13;
            } while ((int)uVar9 <= (int)uVar11);
          }
          puVar18[(int)(uVar8 - 1)] = plVar22;
          bVar2 = 1 < (long)uVar20;
          uVar20 = uVar20 - 1;
        } while (bVar2);
        uVar20 = uVar15 - 1;
        uVar21 = uVar20 & 0xffffffff;
        plVar22 = (long *)puVar18[uVar21];
        puVar18[uVar21] = *puVar18;
        if (2 < uVar11) {
          do {
            uVar21 = uVar20;
            uVar11 = 2;
            uVar9 = 1;
            do {
              if ((int)uVar11 < (int)uVar21) {
                plVar14 = (long *)(puVar18 + (int)uVar11)[-1];
                plVar1 = (long *)puVar18[(int)uVar11];
                uVar4 = (**(code **)(*plVar14 + 0x58))(plVar14);
                if (((DAT_05574040 == 0) ||
                    (local_6c = 1, ((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0)) ||
                   (lVar16 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38
                                         ))(), lVar16 == 0)) {
                  iVar7 = 0;
                }
                else {
                  if ((*(long **)(lVar16 + 0x5dab50) == (long *)0x0) ||
                     (puVar17 = (undefined8 *)**(long **)(lVar16 + 0x5dab50),
                     puVar17 == (undefined8 *)0x0)) {
                    uVar8 = 1;
                  }
                  else {
                    uVar8 = (**(code **)*puVar17)();
                    uVar8 = uVar8 ^ 1;
                  }
                  if (uVar4 < 500) {
                    iVar7 = *(int *)(*(long *)(lVar16 + 0x5dab38) + *(long *)(lVar16 + 0x5dab30) +
                                    (ulong)uVar4 * 4);
                  }
                  else {
                    iVar7 = 0;
                  }
                  if ((((uVar8 & 1) == 0) && (*(long *)(lVar16 + 0x5dab50) != 0)) &&
                     (puVar17 = *(undefined8 **)(*(long *)(lVar16 + 0x5dab50) + 8),
                     puVar17 != (undefined8 *)0x0)) {
                    (**(code **)*puVar17)();
                  }
                }
                uVar4 = (**(code **)(*plVar1 + 0x58))(plVar1);
                if (((DAT_05574040 == 0) ||
                    (local_6c = 1, ((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0)) ||
                   (lVar16 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38
                                         ))(), lVar16 == 0)) {
                  bVar2 = false;
                  if (iVar7 != 0) goto LAB_034c4460;
LAB_034c437c:
                  uVar8 = (**(code **)(*plVar14 + 0x100))(plVar14);
                  uVar13 = (**(code **)(*plVar1 + 0x100))(plVar1);
                  bVar2 = uVar8 < uVar13;
                }
                else {
                  if ((*(long **)(lVar16 + 0x5dab50) == (long *)0x0) ||
                     (puVar17 = (undefined8 *)**(long **)(lVar16 + 0x5dab50),
                     puVar17 == (undefined8 *)0x0)) {
                    uVar8 = 1;
                  }
                  else {
                    uVar8 = (**(code **)*puVar17)();
                    uVar8 = uVar8 ^ 1;
                  }
                  if (uVar4 < 500) {
                    iVar12 = *(int *)(*(long *)(lVar16 + 0x5dab38) + *(long *)(lVar16 + 0x5dab30) +
                                     (ulong)uVar4 * 4);
                  }
                  else {
                    iVar12 = 0;
                  }
                  if ((((uVar8 & 1) == 0) && (*(long *)(lVar16 + 0x5dab50) != 0)) &&
                     (puVar17 = *(undefined8 **)(*(long *)(lVar16 + 0x5dab50) + 8),
                     puVar17 != (undefined8 *)0x0)) {
                    (**(code **)*puVar17)();
                  }
                  bVar2 = SBORROW4(iVar7,iVar12);
                  bVar3 = iVar7 == iVar12;
                  iVar7 = iVar7 - iVar12;
                  if (bVar3) goto LAB_034c437c;
LAB_034c4460:
                  bVar2 = iVar7 < 0 == bVar2;
                }
                uVar8 = uVar11 | bVar2;
              }
              else {
                uVar8 = uVar11;
              }
              plVar14 = (long *)puVar18[(int)(uVar8 - 1)];
              uVar4 = (**(code **)(*plVar22 + 0x58))(plVar22);
              if (((DAT_05574040 == 0) ||
                  (local_6c = 1, ((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0)) ||
                 (lVar16 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))
                                     (), lVar16 == 0)) {
                iVar7 = 0;
              }
              else {
                if ((*(long **)(lVar16 + 0x5dab50) == (long *)0x0) ||
                   (puVar17 = (undefined8 *)**(long **)(lVar16 + 0x5dab50),
                   puVar17 == (undefined8 *)0x0)) {
                  uVar11 = 1;
                }
                else {
                  uVar11 = (**(code **)*puVar17)();
                  uVar11 = uVar11 ^ 1;
                }
                if (uVar4 < 500) {
                  iVar7 = *(int *)(*(long *)(lVar16 + 0x5dab38) + *(long *)(lVar16 + 0x5dab30) +
                                  (ulong)uVar4 * 4);
                }
                else {
                  iVar7 = 0;
                }
                if ((((uVar11 & 1) == 0) && (*(long *)(lVar16 + 0x5dab50) != 0)) &&
                   (puVar17 = *(undefined8 **)(*(long *)(lVar16 + 0x5dab50) + 8),
                   puVar17 != (undefined8 *)0x0)) {
                  (**(code **)*puVar17)();
                }
              }
              uVar4 = (**(code **)(*plVar14 + 0x58))(plVar14);
              if (((DAT_05574040 == 0) ||
                  (local_6c = 1, ((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0)) ||
                 (lVar16 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))
                                     (), lVar16 == 0)) {
                bVar2 = false;
                if (iVar7 != 0) goto LAB_034c41f0;
LAB_034c45bc:
                uVar11 = (**(code **)(*plVar22 + 0x100))(plVar22);
                uVar13 = (**(code **)(*plVar14 + 0x100))(plVar14);
                if (uVar13 <= uVar11) break;
              }
              else {
                if ((*(long **)(lVar16 + 0x5dab50) == (long *)0x0) ||
                   (puVar17 = (undefined8 *)**(long **)(lVar16 + 0x5dab50),
                   puVar17 == (undefined8 *)0x0)) {
                  uVar11 = 1;
                }
                else {
                  uVar11 = (**(code **)*puVar17)();
                  uVar11 = uVar11 ^ 1;
                }
                if (uVar4 < 500) {
                  iVar12 = *(int *)(*(long *)(lVar16 + 0x5dab38) + *(long *)(lVar16 + 0x5dab30) +
                                   (ulong)uVar4 * 4);
                }
                else {
                  iVar12 = 0;
                }
                if ((((uVar11 & 1) == 0) && (*(long *)(lVar16 + 0x5dab50) != 0)) &&
                   (puVar17 = *(undefined8 **)(*(long *)(lVar16 + 0x5dab50) + 8),
                   puVar17 != (undefined8 *)0x0)) {
                  (**(code **)*puVar17)();
                }
                bVar2 = SBORROW4(iVar7,iVar12);
                bVar3 = iVar7 == iVar12;
                iVar7 = iVar7 - iVar12;
                if (bVar3) goto LAB_034c45bc;
LAB_034c41f0:
                if (iVar7 < 0 != bVar2) break;
              }
              uVar11 = uVar8 << 1;
              puVar18[(int)(uVar9 - 1)] = puVar18[(int)(uVar8 - 1)];
              uVar9 = uVar8;
            } while ((long)(int)uVar11 < (long)uVar15);
            puVar18[(int)(uVar9 - 1)] = plVar22;
            uVar15 = uVar21 - 1 & 0xffffffff;
            plVar22 = (long *)puVar18[uVar15];
            puVar18[uVar15] = *puVar18;
            uVar20 = uVar21 - 1;
            uVar15 = uVar21;
          } while (2 < uVar21);
        }
        *puVar18 = plVar22;
      }
      if (1 < (int)(uint)local_1fd0) {
        uVar15 = (ulong)((uint)local_1fd0 >> 1);
        do {
          uVar9 = (uint)uVar15;
          uVar11 = uVar9 * 2;
          plVar22 = local_1fc8[(uVar15 - 1 & 0xffffffff) + 1];
          if ((int)uVar11 <= (int)(uint)local_1fd0) {
            uVar20 = uVar15 & 0xffffffff;
            do {
              uVar8 = uVar11;
              if ((int)uVar11 < (int)(uint)local_1fd0) {
                plVar14 = local_1fc8[(int)uVar11];
                plVar1 = local_1fc8[(long)(int)uVar11 + 1];
                uVar4 = (**(code **)(*plVar14 + 0x58))(plVar14);
                if (((DAT_05574040 == 0) ||
                    (local_6c = 1, ((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0)) ||
                   (lVar16 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38
                                         ))(), lVar16 == 0)) {
                  iVar7 = 0;
                }
                else {
                  if ((*(long **)(lVar16 + 0x5dab50) == (long *)0x0) ||
                     (puVar18 = (undefined8 *)**(long **)(lVar16 + 0x5dab50),
                     puVar18 == (undefined8 *)0x0)) {
                    uVar9 = 1;
                  }
                  else {
                    uVar9 = (**(code **)*puVar18)();
                    uVar9 = uVar9 ^ 1;
                  }
                  if (uVar4 < 500) {
                    iVar7 = *(int *)(*(long *)(lVar16 + 0x5dab38) + *(long *)(lVar16 + 0x5dab30) +
                                    (ulong)uVar4 * 4);
                  }
                  else {
                    iVar7 = 0;
                  }
                  if ((((uVar9 & 1) == 0) && (*(long *)(lVar16 + 0x5dab50) != 0)) &&
                     (puVar18 = *(undefined8 **)(*(long *)(lVar16 + 0x5dab50) + 8),
                     puVar18 != (undefined8 *)0x0)) {
                    (**(code **)*puVar18)();
                  }
                }
                uVar4 = (**(code **)(*plVar1 + 0x58))(plVar1);
                if (((DAT_05574040 == 0) ||
                    (local_6c = 1, ((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0)) ||
                   (lVar16 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38
                                         ))(), lVar16 == 0)) {
                  bVar2 = false;
                  if (iVar7 != 0) goto LAB_034c3f60;
LAB_034c3e7c:
                  iVar7 = (**(code **)(*plVar14 + 0xa0))(plVar14);
                  iVar12 = (**(code **)(*plVar1 + 0xa0))(plVar1);
                  bVar2 = iVar12 < iVar7;
                }
                else {
                  if ((*(long **)(lVar16 + 0x5dab50) == (long *)0x0) ||
                     (puVar18 = (undefined8 *)**(long **)(lVar16 + 0x5dab50),
                     puVar18 == (undefined8 *)0x0)) {
                    uVar9 = 1;
                  }
                  else {
                    uVar9 = (**(code **)*puVar18)();
                    uVar9 = uVar9 ^ 1;
                  }
                  if (uVar4 < 500) {
                    iVar12 = *(int *)(*(long *)(lVar16 + 0x5dab38) + *(long *)(lVar16 + 0x5dab30) +
                                     (ulong)uVar4 * 4);
                  }
                  else {
                    iVar12 = 0;
                  }
                  if ((((uVar9 & 1) == 0) && (*(long *)(lVar16 + 0x5dab50) != 0)) &&
                     (puVar18 = *(undefined8 **)(*(long *)(lVar16 + 0x5dab50) + 8),
                     puVar18 != (undefined8 *)0x0)) {
                    (**(code **)*puVar18)();
                  }
                  bVar2 = SBORROW4(iVar7,iVar12);
                  bVar3 = iVar7 == iVar12;
                  iVar7 = iVar7 - iVar12;
                  if (bVar3) goto LAB_034c3e7c;
LAB_034c3f60:
                  bVar2 = iVar7 < 0 == bVar2;
                }
                uVar8 = uVar11 | bVar2;
              }
              plVar14 = local_1fc8[(long)(int)(uVar8 - 1) + 1];
              uVar4 = (**(code **)(*plVar22 + 0x58))(plVar22);
              if (((DAT_05574040 == 0) ||
                  (local_6c = 1, ((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0)) ||
                 (lVar16 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))
                                     (), lVar16 == 0)) {
                iVar7 = 0;
              }
              else {
                if ((*(long **)(lVar16 + 0x5dab50) == (long *)0x0) ||
                   (puVar18 = (undefined8 *)**(long **)(lVar16 + 0x5dab50),
                   puVar18 == (undefined8 *)0x0)) {
                  uVar11 = 1;
                }
                else {
                  uVar11 = (**(code **)*puVar18)();
                  uVar11 = uVar11 ^ 1;
                }
                if (uVar4 < 500) {
                  iVar7 = *(int *)(*(long *)(lVar16 + 0x5dab38) + *(long *)(lVar16 + 0x5dab30) +
                                  (ulong)uVar4 * 4);
                }
                else {
                  iVar7 = 0;
                }
                if ((((uVar11 & 1) == 0) && (*(long *)(lVar16 + 0x5dab50) != 0)) &&
                   (puVar18 = *(undefined8 **)(*(long *)(lVar16 + 0x5dab50) + 8),
                   puVar18 != (undefined8 *)0x0)) {
                  (**(code **)*puVar18)();
                }
              }
              uVar4 = (**(code **)(*plVar14 + 0x58))(plVar14);
              uVar9 = (uint)uVar20;
              if (((DAT_05574040 == 0) ||
                  (local_6c = 1, ((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0)) ||
                 (lVar16 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))
                                     (), lVar16 == 0)) {
                bVar2 = false;
                if (iVar7 != 0) goto LAB_034c3cf0;
LAB_034c40bc:
                iVar7 = (**(code **)(*plVar22 + 0xa0))(plVar22);
                iVar12 = (**(code **)(*plVar14 + 0xa0))(plVar14);
                if (iVar7 <= iVar12) break;
              }
              else {
                if ((*(long **)(lVar16 + 0x5dab50) == (long *)0x0) ||
                   (puVar18 = (undefined8 *)**(long **)(lVar16 + 0x5dab50),
                   puVar18 == (undefined8 *)0x0)) {
                  uVar11 = 1;
                }
                else {
                  uVar11 = (**(code **)*puVar18)();
                  uVar11 = uVar11 ^ 1;
                }
                if (uVar4 < 500) {
                  iVar12 = *(int *)(*(long *)(lVar16 + 0x5dab38) + *(long *)(lVar16 + 0x5dab30) +
                                   (ulong)uVar4 * 4);
                }
                else {
                  iVar12 = 0;
                }
                if ((((uVar11 & 1) == 0) && (*(long *)(lVar16 + 0x5dab50) != 0)) &&
                   (puVar18 = *(undefined8 **)(*(long *)(lVar16 + 0x5dab50) + 8),
                   puVar18 != (undefined8 *)0x0)) {
                  (**(code **)*puVar18)();
                }
                bVar2 = SBORROW4(iVar7,iVar12);
                bVar3 = iVar7 == iVar12;
                iVar7 = iVar7 - iVar12;
                if (bVar3) goto LAB_034c40bc;
LAB_034c3cf0:
                if (iVar7 < 0 != bVar2) break;
              }
              uVar11 = uVar8 * 2;
              local_1fc8[(long)(int)(uVar9 - 1) + 1] = local_1fc8[(long)(int)(uVar8 - 1) + 1];
              uVar20 = (ulong)uVar8;
              uVar9 = uVar8;
            } while ((int)uVar11 <= (int)(uint)local_1fd0);
          }
          local_1fc8[(long)(int)(uVar9 - 1) + 1] = plVar22;
          bVar2 = 1 < (long)uVar15;
          uVar15 = uVar15 - 1;
        } while (bVar2);
        uVar15 = (local_1fd0 & 0xffffffff) - 1;
        uVar20 = uVar15 & 0xffffffff;
        plVar22 = local_1fc8[uVar20 + 1];
        local_1fc8[uVar20 + 1] = local_1fc8[1];
        uVar20 = local_1fd0 & 0xffffffff;
        if (2 < (uint)local_1fd0) {
          do {
            uVar21 = uVar15;
            uVar11 = 2;
            uVar9 = 1;
            do {
              if ((int)uVar11 < (int)uVar21) {
                plVar14 = local_1fc8[(int)uVar11];
                plVar1 = local_1fc8[(long)(int)uVar11 + 1];
                uVar4 = (**(code **)(*plVar14 + 0x58))(plVar14);
                if (((DAT_05574040 == 0) ||
                    (local_6c = 1, ((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0)) ||
                   (lVar16 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38
                                         ))(), lVar16 == 0)) {
                  iVar7 = 0;
                }
                else {
                  if ((*(long **)(lVar16 + 0x5dab50) == (long *)0x0) ||
                     (puVar18 = (undefined8 *)**(long **)(lVar16 + 0x5dab50),
                     puVar18 == (undefined8 *)0x0)) {
                    uVar8 = 1;
                  }
                  else {
                    uVar8 = (**(code **)*puVar18)();
                    uVar8 = uVar8 ^ 1;
                  }
                  if (uVar4 < 500) {
                    iVar7 = *(int *)(*(long *)(lVar16 + 0x5dab38) + *(long *)(lVar16 + 0x5dab30) +
                                    (ulong)uVar4 * 4);
                  }
                  else {
                    iVar7 = 0;
                  }
                  if ((((uVar8 & 1) == 0) && (*(long *)(lVar16 + 0x5dab50) != 0)) &&
                     (puVar18 = *(undefined8 **)(*(long *)(lVar16 + 0x5dab50) + 8),
                     puVar18 != (undefined8 *)0x0)) {
                    (**(code **)*puVar18)();
                  }
                }
                uVar4 = (**(code **)(*plVar1 + 0x58))(plVar1);
                if (((DAT_05574040 == 0) ||
                    (local_6c = 1, ((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0)) ||
                   (lVar16 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38
                                         ))(), lVar16 == 0)) {
                  bVar2 = false;
                  if (iVar7 != 0) goto LAB_034c49a0;
LAB_034c48bc:
                  iVar7 = (**(code **)(*plVar14 + 0xa0))(plVar14);
                  iVar12 = (**(code **)(*plVar1 + 0xa0))(plVar1);
                  bVar2 = iVar12 < iVar7;
                }
                else {
                  if ((*(long **)(lVar16 + 0x5dab50) == (long *)0x0) ||
                     (puVar18 = (undefined8 *)**(long **)(lVar16 + 0x5dab50),
                     puVar18 == (undefined8 *)0x0)) {
                    uVar8 = 1;
                  }
                  else {
                    uVar8 = (**(code **)*puVar18)();
                    uVar8 = uVar8 ^ 1;
                  }
                  if (uVar4 < 500) {
                    iVar12 = *(int *)(*(long *)(lVar16 + 0x5dab38) + *(long *)(lVar16 + 0x5dab30) +
                                     (ulong)uVar4 * 4);
                  }
                  else {
                    iVar12 = 0;
                  }
                  if ((((uVar8 & 1) == 0) && (*(long *)(lVar16 + 0x5dab50) != 0)) &&
                     (puVar18 = *(undefined8 **)(*(long *)(lVar16 + 0x5dab50) + 8),
                     puVar18 != (undefined8 *)0x0)) {
                    (**(code **)*puVar18)();
                  }
                  bVar2 = SBORROW4(iVar7,iVar12);
                  bVar3 = iVar7 == iVar12;
                  iVar7 = iVar7 - iVar12;
                  if (bVar3) goto LAB_034c48bc;
LAB_034c49a0:
                  bVar2 = iVar7 < 0 == bVar2;
                }
                uVar8 = uVar11 | bVar2;
              }
              else {
                uVar8 = uVar11;
              }
              plVar14 = local_1fc8[(long)(int)(uVar8 - 1) + 1];
              uVar4 = (**(code **)(*plVar22 + 0x58))(plVar22);
              if (((DAT_05574040 == 0) ||
                  (local_6c = 1, ((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0)) ||
                 (lVar16 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))
                                     (), lVar16 == 0)) {
                iVar7 = 0;
              }
              else {
                if ((*(long **)(lVar16 + 0x5dab50) == (long *)0x0) ||
                   (puVar18 = (undefined8 *)**(long **)(lVar16 + 0x5dab50),
                   puVar18 == (undefined8 *)0x0)) {
                  uVar11 = 1;
                }
                else {
                  uVar11 = (**(code **)*puVar18)();
                  uVar11 = uVar11 ^ 1;
                }
                if (uVar4 < 500) {
                  iVar7 = *(int *)(*(long *)(lVar16 + 0x5dab38) + *(long *)(lVar16 + 0x5dab30) +
                                  (ulong)uVar4 * 4);
                }
                else {
                  iVar7 = 0;
                }
                if ((((uVar11 & 1) == 0) && (*(long *)(lVar16 + 0x5dab50) != 0)) &&
                   (puVar18 = *(undefined8 **)(*(long *)(lVar16 + 0x5dab50) + 8),
                   puVar18 != (undefined8 *)0x0)) {
                  (**(code **)*puVar18)();
                }
              }
              uVar4 = (**(code **)(*plVar14 + 0x58))(plVar14);
              if (((DAT_05574040 == 0) ||
                  (local_6c = 1, ((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0)) ||
                 (lVar16 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))
                                     (), lVar16 == 0)) {
                bVar2 = false;
                if (iVar7 != 0) goto LAB_034c4730;
LAB_034c4afc:
                iVar7 = (**(code **)(*plVar22 + 0xa0))(plVar22);
                iVar12 = (**(code **)(*plVar14 + 0xa0))(plVar14);
                if (iVar7 <= iVar12) break;
              }
              else {
                if ((*(long **)(lVar16 + 0x5dab50) == (long *)0x0) ||
                   (puVar18 = (undefined8 *)**(long **)(lVar16 + 0x5dab50),
                   puVar18 == (undefined8 *)0x0)) {
                  uVar11 = 1;
                }
                else {
                  uVar11 = (**(code **)*puVar18)();
                  uVar11 = uVar11 ^ 1;
                }
                if (uVar4 < 500) {
                  iVar12 = *(int *)(*(long *)(lVar16 + 0x5dab38) + *(long *)(lVar16 + 0x5dab30) +
                                   (ulong)uVar4 * 4);
                }
                else {
                  iVar12 = 0;
                }
                if ((((uVar11 & 1) == 0) && (*(long *)(lVar16 + 0x5dab50) != 0)) &&
                   (puVar18 = *(undefined8 **)(*(long *)(lVar16 + 0x5dab50) + 8),
                   puVar18 != (undefined8 *)0x0)) {
                  (**(code **)*puVar18)();
                }
                bVar2 = SBORROW4(iVar7,iVar12);
                bVar3 = iVar7 == iVar12;
                iVar7 = iVar7 - iVar12;
                if (bVar3) goto LAB_034c4afc;
LAB_034c4730:
                if (iVar7 < 0 != bVar2) break;
              }
              uVar11 = uVar8 << 1;
              local_1fc8[(long)(int)(uVar9 - 1) + 1] = local_1fc8[(long)(int)(uVar8 - 1) + 1];
              uVar9 = uVar8;
            } while ((long)(int)uVar11 < (long)uVar20);
            local_1fc8[(long)(int)(uVar9 - 1) + 1] = plVar22;
            uVar15 = uVar21 - 1 & 0xffffffff;
            plVar22 = local_1fc8[uVar15 + 1];
            local_1fc8[uVar15 + 1] = local_1fc8[1];
            uVar15 = uVar21 - 1;
            uVar20 = uVar21;
          } while (2 < uVar21);
        }
        local_1fc8[1] = plVar22;
      }
      *(undefined4 *)(param_1 + 1) = 0;
      if (((0 < *(int *)((long)param_1 + 0xc)) && ((uint)local_1fd0 != 0)) &&
         ((uint)local_1020 != 0)) {
        iVar7 = 0;
        iVar12 = (uint)local_1020;
LAB_034c4bf0:
        do {
          iVar19 = (int)param_1[1];
          if (iVar19 < *(int *)((long)param_1 + 0xc)) {
            if (iVar12 < 1) {
              plVar22 = (long *)0x0;
            }
            else {
              local_1020 = CONCAT44(local_1020._4_4_,iVar12 - 1U);
              plVar22 = (long *)local_1018[iVar12 - 1U];
            }
            if (0 < iVar19) {
              lVar16 = 0;
              do {
                sVar5 = (**(code **)(**(long **)(param_1[2] + lVar16 * 8) + 0x58))();
                sVar6 = (**(code **)(*plVar22 + 0x58))(plVar22);
                if (sVar5 == sVar6) {
                  if (*(long *)(param_1[2] + lVar16 * 8) != 0) {
                    goto joined_r0x034c4bec;
                  }
                  iVar19 = (int)param_1[1];
                  break;
                }
                iVar19 = (int)param_1[1];
                lVar16 = lVar16 + 1;
              } while (lVar16 < iVar19);
            }
            if (iVar19 < *(int *)((long)param_1 + 0xc)) {
              *(long **)(param_1[2] + (long)iVar19 * 8) = plVar22;
              *(int *)(param_1 + 1) = (int)param_1[1] + 1;
            }
            if (iVar7 < 2) {
              iVar7 = iVar7 + 1;
joined_r0x034c4bec:
              iVar12 = (uint)local_1020;
              if ((uint)local_1020 != 0) goto LAB_034c4bf0;
            }
          }
          do {
            iVar7 = (int)param_1[1];
            iVar12 = *(int *)((long)param_1 + 0xc);
            if ((uint)local_1fd0 == 0 || iVar12 <= iVar7) goto LAB_034c4d70;
            uVar11 = (uint)local_1fd0 - 1;
            if ((int)(uint)local_1fd0 < 1) {
              plVar22 = (long *)0x0;
            }
            else {
              local_1fd0 = (ulong)uVar11;
              plVar22 = local_1fc8[(ulong)uVar11 + 1];
            }
            if (iVar7 < 1) goto LAB_034c4d50;
            lVar16 = 0;
            while( true ) {
              sVar5 = (**(code **)(**(long **)(param_1[2] + lVar16 * 8) + 0x58))();
              sVar6 = (**(code **)(*plVar22 + 0x58))(plVar22);
              if (sVar5 == sVar6) break;
              iVar7 = (int)param_1[1];
              lVar16 = lVar16 + 1;
              if (iVar7 <= lVar16) goto LAB_034c4d50;
            }
          } while (*(long *)(param_1[2] + lVar16 * 8) != 0);
          iVar7 = (int)param_1[1];
LAB_034c4d50:
          iVar12 = *(int *)((long)param_1 + 0xc);
          if (iVar7 < iVar12) {
            *(long **)(param_1[2] + (long)iVar7 * 8) = plVar22;
            iVar12 = *(int *)((long)param_1 + 0xc);
            iVar7 = (int)param_1[1] + 1;
            *(int *)(param_1 + 1) = iVar7;
          }
LAB_034c4d70:
          if ((iVar12 <= iVar7) || ((uint)local_1fd0 == 0)) break;
          iVar7 = 0;
          iVar12 = (uint)local_1020;
          if ((uint)local_1020 == 0) break;
        } while( true );
      }
      plVar22 = (long *)*param_1;
      if (plVar22 != (long *)0x0) {
        *(undefined4 *)(param_1 + 0x1f7) = 0;
        iVar7 = (**(code **)(*plVar22 + 0x50))(plVar22);
        if (0 < iVar7) {
          iVar12 = 0;
          do {
            plVar14 = (long *)(**(code **)(*plVar22 + 0x40))(plVar22,iVar12);
            if (((plVar14 != (long *)0x0) &&
                (uVar15 = (**(code **)(*plVar14 + 0x38))(), (uVar15 & 1) != 0)) &&
               (((uVar15 = (**(code **)(*plVar14 + 0xd8))(plVar14), (uVar15 & 1) != 0 ||
                 (uVar15 = (**(code **)(*plVar14 + 0xe0))(plVar14), (uVar15 & 1) != 0)) &&
                ((int)param_1[0x1f7] < *(int *)((long)param_1 + 0xfbc))))) {
              *(long **)(param_1[0x1f8] + (long)(int)param_1[0x1f7] * 8) = plVar14;
              *(int *)(param_1 + 0x1f7) = (int)param_1[0x1f7] + 1;
            }
            iVar12 = iVar12 + 1;
          } while (iVar7 != iVar12);
        }
        uVar11 = *(uint *)(param_1 + 0x1f7);
        if (1 < (int)uVar11) {
          puVar18 = (undefined8 *)param_1[0x1f8];
          uVar15 = (ulong)(uVar11 >> 1);
          do {
            uVar9 = (uint)uVar15 * 2;
            plVar22 = (long *)puVar18[uVar15 - 1 & 0xffffffff];
            if ((int)uVar11 < (int)uVar9) {
              uVar8 = (uint)uVar15;
            }
            else {
              uVar20 = uVar15 & 0xffffffff;
              do {
                if ((int)uVar9 < (int)uVar11) {
                  plVar14 = (long *)puVar18[(int)uVar9];
                  iVar7 = (**(code **)(*(long *)(puVar18 + (int)uVar9)[-1] + 0xa0))();
                  iVar12 = (**(code **)(*plVar14 + 0xa0))(plVar14);
                  uVar13 = uVar9 | iVar12 < iVar7;
                }
                else {
                  uVar13 = uVar9;
                }
                plVar14 = (long *)puVar18[(int)(uVar13 - 1)];
                iVar7 = (**(code **)(*plVar22 + 0xa0))(plVar22);
                iVar12 = (**(code **)(*plVar14 + 0xa0))(plVar14);
                uVar8 = (uint)uVar20;
                if (iVar7 <= iVar12) break;
                uVar9 = uVar13 * 2;
                uVar20 = (ulong)uVar13;
                puVar18[(int)(uVar8 - 1)] = puVar18[(int)(uVar13 - 1)];
                uVar8 = uVar13;
              } while ((int)uVar9 <= (int)uVar11);
            }
            puVar18[(int)(uVar8 - 1)] = plVar22;
            bVar2 = 1 < (long)uVar15;
            uVar15 = uVar15 - 1;
          } while (bVar2);
          uVar15 = (ulong)uVar11 - 1;
          uVar20 = uVar15 & 0xffffffff;
          plVar22 = (long *)puVar18[uVar20];
          puVar18[uVar20] = *puVar18;
          uVar20 = (ulong)uVar11;
          if (2 < uVar11) {
            do {
              uVar21 = uVar15;
              uVar11 = 2;
              uVar9 = 1;
              do {
                uVar8 = uVar11;
                if ((int)uVar11 < (int)uVar21) {
                  plVar14 = (long *)puVar18[(int)uVar11];
                  iVar7 = (**(code **)(*(long *)(puVar18 + (int)uVar11)[-1] + 0xa0))();
                  iVar12 = (**(code **)(*plVar14 + 0xa0))(plVar14);
                  uVar8 = uVar11 | iVar12 < iVar7;
                }
                plVar14 = (long *)puVar18[(int)(uVar8 - 1)];
                iVar7 = (**(code **)(*plVar22 + 0xa0))(plVar22);
                iVar12 = (**(code **)(*plVar14 + 0xa0))(plVar14);
                if (iVar7 <= iVar12) {
                  lVar16 = (long)(int)(uVar9 - 1);
                  break;
                }
                lVar16 = (long)(int)(uVar8 - 1);
                uVar11 = uVar8 << 1;
                puVar18[(int)(uVar9 - 1)] = puVar18[lVar16];
                uVar9 = uVar8;
              } while ((long)(int)uVar11 < (long)uVar20);
              puVar18[lVar16] = plVar22;
              uVar15 = uVar21 - 1 & 0xffffffff;
              plVar22 = (long *)puVar18[uVar15];
              puVar18[uVar15] = *puVar18;
              uVar15 = uVar21 - 1;
              uVar20 = uVar21;
            } while (2 < uVar21);
          }
          *puVar18 = plVar22;
        }
      }
    }
  }
  return;
}

