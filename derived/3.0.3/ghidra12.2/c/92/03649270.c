
void FUN_03649270(long param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  char *pcVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  int *piVar18;
  long local_80 [8];
  
  uVar17 = (ulong)param_3;
  if ((param_3 == 0) && (piVar18 = *(int **)(param_1 + 0x98), *piVar18 == 2)) {
    FUN_03645030(piVar18,*(long *)(piVar18 + 8) +
                         (ulong)*(uint *)(*(long *)(piVar18 + 8) + 0x1e018) * 0x3138 + 0x1e01c);
    *(int *)(*(long *)(piVar18 + 8) + 0x1e018) = *(int *)(*(long *)(piVar18 + 8) + 0x1e018) + 1;
  }
  uVar1 = param_4;
  if (param_4 < 2) {
    uVar1 = 1;
  }
  memset((void *)(uVar17 + param_1 + 0xa0),0,(ulong)uVar1);
  bVar2 = *(byte *)(param_1 + 0x3a);
  if ((bVar2 >> 3 & 1) == 0) {
    if (param_4 != 0) {
      memset((void *)(*(long *)(param_1 + 0x1a0) + (uint)(param_2 << 8) + uVar17),
             (uint)*(byte *)(*(long *)(*(long *)(param_1 + 0x90) + 0x20) + 0x1f00),(ulong)param_4);
    }
  }
  else {
    puVar8 = (undefined1 *)(*(long *)(param_1 + 0x1a0) + (ulong)(param_3 + param_2 * 0x100));
    uVar16 = param_4;
    uVar1 = param_3;
    do {
      if ((uVar1 < 8) && ((*(byte *)(param_1 + 0x3a) >> 1 & 1) == 0)) {
        uVar9 = 0x1f00;
      }
      else {
        uVar9 = ((ulong)uVar1 & 7) + (ulong)*(byte *)(param_1 + 0x59);
        bVar3 = *(byte *)(param_1 + uVar9 + 0xf300);
        bVar4 = *(byte *)(param_1 + (uVar9 >> 1 & 0xfc) + 0xf319);
        *(byte *)(param_1 + (ulong)uVar1 + 0xa0) = bVar3;
        uVar9 = 0x1f00;
        if (bVar3 != 0) {
          uVar9 = (ulong)((uint)bVar3 + (uint)bVar4 * 4) & 0x1f | 0x1f00;
        }
      }
      uVar16 = uVar16 - 1;
      uVar1 = uVar1 + 1;
      *puVar8 = *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x90) + 0x20) + uVar9);
      puVar8 = puVar8 + 1;
    } while (uVar16 != 0);
  }
  if ((bVar2 >> 4 & 1) != 0) {
    uVar1 = *(uint *)(param_1 + 0xf2c4);
    uVar9 = (ulong)uVar1;
    if ((*(byte *)(param_1 + 0x39) >> 5 & 1) == 0) {
      if (*(char *)(param_1 + 0xf29c) == '\0') {
        if ((uVar1 != 0) && ((*(byte *)(param_1 + 0x3a) >> 4 & 1) != 0)) {
          lVar7 = *(long *)(param_1 + 0x1a0);
          uVar10 = uVar9 & 3;
          if (uVar1 < 4) {
            lVar12 = 0;
          }
          else {
            lVar12 = 0;
            lVar6 = param_1 + 0xf2ab;
            plVar11 = local_80 + 2;
            do {
              lVar14 = lVar6 + -0xf;
              lVar15 = lVar6 + -10;
              lVar12 = lVar12 + -4;
              *plVar11 = lVar6 + -5;
              plVar11[1] = lVar6;
              lVar6 = lVar6 + 0x14;
              plVar11[-2] = lVar14;
              plVar11[-1] = lVar15;
              plVar11 = plVar11 + 4;
            } while (-lVar12 != (uVar9 & 0xfffffffc));
            lVar12 = -lVar12;
          }
          puVar8 = (undefined1 *)(lVar7 + (ulong)(param_3 + param_2 * 0x100));
          if ((uVar1 & 3) != 0) {
            lVar7 = lVar12 * 5 + param_1 + 0xf29c;
            plVar11 = local_80 + lVar12;
            do {
              *plVar11 = lVar7;
              lVar7 = lVar7 + 5;
              uVar10 = uVar10 - 1;
              plVar11 = plVar11 + 1;
            } while (uVar10 != 0);
          }
          if (uVar1 < 2) {
            uVar1 = 1;
          }
          do {
            uVar16 = (uint)uVar17;
            if ((7 < uVar16) || ((*(byte *)(param_1 + 0x3a) >> 2 & 1) != 0)) {
              lVar7 = 0;
              pcVar13 = (char *)(param_1 + uVar17 + 0xa0);
              do {
                lVar6 = *(long *)((long)local_80 + lVar7);
                uVar5 = uVar16 - *(byte *)(lVar6 + 1);
                if (uVar5 < 8) {
                  bVar2 = *(byte *)(lVar6 + 2);
                  if ((bVar2 & 0x40) != 0) {
                    uVar5 = 7 - uVar5;
                  }
                  uVar17 = (ulong)(*(byte *)(lVar6 + 3) >> (7 - (ulong)uVar5 & 0x3f)) & 1 |
                           ((ulong)(*(byte *)(lVar6 + 4) >> (7 - (ulong)uVar5 & 0x3f)) & 1) << 1;
                  if ((int)uVar17 != 0) {
                    if ((*pcVar13 == '\0') || ((bVar2 >> 5 & 1) == 0)) {
                      *puVar8 = *(undefined1 *)
                                 (*(long *)(*(long *)(param_1 + 0x90) + 0x20) +
                                  (uVar17 | ((ulong)bVar2 & 3) << 2) + 0x1f10);
                    }
                    if ((lVar7 == 0) && (*(char *)(param_1 + 0xf2f8) == '\0')) {
                      *(bool *)(param_1 + 0xf2f8) = uVar16 < 0xff && *pcVar13 != '\0';
                      *(uint *)(param_1 + 0xf2fc) = uVar16 + 3;
                    }
                    break;
                  }
                }
                lVar7 = lVar7 + 8;
              } while ((ulong)uVar1 * 8 != lVar7);
            }
            uVar17 = (ulong)(uVar16 + 1);
            puVar8 = puVar8 + 1;
          } while (uVar16 + 1 < param_4 + param_3);
        }
      }
      else if ((uVar1 != 0) && ((*(byte *)(param_1 + 0x3a) >> 4 & 1) != 0)) {
        lVar7 = *(long *)(param_1 + 0x1a0);
        uVar10 = uVar9 & 3;
        if (uVar1 < 4) {
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar6 = param_1 + 0xf2ab;
          plVar11 = local_80 + 2;
          do {
            lVar14 = lVar6 + -0xf;
            lVar15 = lVar6 + -10;
            lVar12 = lVar12 + -4;
            *plVar11 = lVar6 + -5;
            plVar11[1] = lVar6;
            lVar6 = lVar6 + 0x14;
            plVar11[-2] = lVar14;
            plVar11[-1] = lVar15;
            plVar11 = plVar11 + 4;
          } while (-lVar12 != (uVar9 & 0xfffffffc));
          lVar12 = -lVar12;
        }
        puVar8 = (undefined1 *)(lVar7 + (ulong)(param_3 + param_2 * 0x100));
        if ((uVar1 & 3) != 0) {
          lVar7 = lVar12 * 5 + param_1 + 0xf29c;
          plVar11 = local_80 + lVar12;
          do {
            *plVar11 = lVar7;
            lVar7 = lVar7 + 5;
            uVar10 = uVar10 - 1;
            plVar11 = plVar11 + 1;
          } while (uVar10 != 0);
        }
        if (uVar1 < 2) {
          uVar1 = 1;
        }
        do {
          uVar16 = (uint)uVar17;
          if ((7 < uVar16) || ((*(byte *)(param_1 + 0x3a) >> 2 & 1) != 0)) {
            plVar11 = local_80;
            uVar9 = (ulong)uVar1;
            do {
              lVar7 = *plVar11;
              uVar5 = uVar16 - *(byte *)(lVar7 + 1);
              if (uVar5 < 8) {
                bVar2 = *(byte *)(lVar7 + 2);
                if ((bVar2 & 0x40) != 0) {
                  uVar5 = 7 - uVar5;
                }
                uVar10 = (ulong)(*(byte *)(lVar7 + 3) >> (7 - (ulong)uVar5 & 0x3f)) & 1 |
                         ((ulong)(*(byte *)(lVar7 + 4) >> (7 - (ulong)uVar5 & 0x3f)) & 1) << 1;
                if ((int)uVar10 != 0) {
                  if ((*(char *)(param_1 + uVar17 + 0xa0) == '\0') || ((bVar2 >> 5 & 1) == 0)) {
                    *puVar8 = *(undefined1 *)
                               (*(long *)(*(long *)(param_1 + 0x90) + 0x20) +
                                (uVar10 | ((ulong)bVar2 & 3) << 2) + 0x1f10);
                  }
                  break;
                }
              }
              uVar9 = uVar9 - 1;
              plVar11 = plVar11 + 1;
            } while (uVar9 != 0);
          }
          uVar17 = (ulong)(uVar16 + 1);
          puVar8 = puVar8 + 1;
        } while (uVar16 + 1 < param_4 + param_3);
      }
    }
    else if (*(char *)(param_1 + 0xf29c) == '\0') {
      if ((uVar1 != 0) && ((*(byte *)(param_1 + 0x3a) >> 4 & 1) != 0)) {
        lVar7 = *(long *)(param_1 + 0x1a0);
        uVar10 = uVar9 & 3;
        if (uVar1 < 4) {
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar6 = param_1 + 0xf2ab;
          plVar11 = local_80 + 2;
          do {
            lVar14 = lVar6 + -0xf;
            lVar15 = lVar6 + -10;
            lVar12 = lVar12 + -4;
            *plVar11 = lVar6 + -5;
            plVar11[1] = lVar6;
            lVar6 = lVar6 + 0x14;
            plVar11[-2] = lVar14;
            plVar11[-1] = lVar15;
            plVar11 = plVar11 + 4;
          } while (-lVar12 != (uVar9 & 0xfffffffc));
          lVar12 = -lVar12;
        }
        puVar8 = (undefined1 *)(lVar7 + (ulong)(param_3 + param_2 * 0x100));
        if ((uVar1 & 3) != 0) {
          lVar7 = lVar12 * 5 + param_1 + 0xf29c;
          plVar11 = local_80 + lVar12;
          do {
            *plVar11 = lVar7;
            lVar7 = lVar7 + 5;
            uVar10 = uVar10 - 1;
            plVar11 = plVar11 + 1;
          } while (uVar10 != 0);
        }
        if (uVar1 < 2) {
          uVar1 = 1;
        }
        do {
          uVar16 = (uint)uVar17;
          if ((7 < uVar16) || ((*(byte *)(param_1 + 0x3a) >> 2 & 1) != 0)) {
            lVar7 = 0;
            pcVar13 = (char *)(param_1 + uVar17 + 0xa0);
            do {
              lVar6 = *(long *)((long)local_80 + lVar7);
              uVar5 = uVar16 - *(byte *)(lVar6 + 1);
              if (uVar5 < 8) {
                bVar2 = *(byte *)(lVar6 + 2);
                if ((bVar2 & 0x40) != 0) {
                  uVar5 = 7 - uVar5;
                }
                uVar17 = (ulong)(*(byte *)(lVar6 + 3) >> (7 - (ulong)uVar5 & 0x3f)) & 1 |
                         ((ulong)(*(byte *)(lVar6 + 4) >> (7 - (ulong)uVar5 & 0x3f)) & 1) << 1;
                if ((int)uVar17 != 0) {
                  if ((*pcVar13 == '\0') || ((bVar2 >> 5 & 1) == 0)) {
                    *puVar8 = *(undefined1 *)
                               (*(long *)(*(long *)(param_1 + 0x90) + 0x20) +
                                (uVar17 | ((ulong)bVar2 & 3) << 2) + 0x1f10);
                  }
                  if ((lVar7 == 0) && (*(char *)(param_1 + 0xf2f8) == '\0')) {
                    *(bool *)(param_1 + 0xf2f8) = uVar16 < 0xff && *pcVar13 != '\0';
                    *(uint *)(param_1 + 0xf2fc) = uVar16 + 3;
                  }
                  break;
                }
              }
              lVar7 = lVar7 + 8;
            } while ((ulong)uVar1 * 8 != lVar7);
          }
          uVar17 = (ulong)(uVar16 + 1);
          puVar8 = puVar8 + 1;
        } while (uVar16 + 1 < param_4 + param_3);
      }
    }
    else if ((uVar1 != 0) && ((*(byte *)(param_1 + 0x3a) >> 4 & 1) != 0)) {
      lVar7 = *(long *)(param_1 + 0x1a0);
      uVar10 = uVar9 & 3;
      if (uVar1 < 4) {
        lVar12 = 0;
      }
      else {
        lVar12 = 0;
        lVar6 = param_1 + 0xf2ab;
        plVar11 = local_80 + 2;
        do {
          lVar14 = lVar6 + -0xf;
          lVar15 = lVar6 + -10;
          lVar12 = lVar12 + -4;
          *plVar11 = lVar6 + -5;
          plVar11[1] = lVar6;
          lVar6 = lVar6 + 0x14;
          plVar11[-2] = lVar14;
          plVar11[-1] = lVar15;
          plVar11 = plVar11 + 4;
        } while (-lVar12 != (uVar9 & 0xfffffffc));
        lVar12 = -lVar12;
      }
      puVar8 = (undefined1 *)(lVar7 + (ulong)(param_3 + param_2 * 0x100));
      if ((uVar1 & 3) != 0) {
        lVar7 = lVar12 * 5 + param_1 + 0xf29c;
        plVar11 = local_80 + lVar12;
        do {
          *plVar11 = lVar7;
          lVar7 = lVar7 + 5;
          uVar10 = uVar10 - 1;
          plVar11 = plVar11 + 1;
        } while (uVar10 != 0);
      }
      if (uVar1 < 2) {
        uVar1 = 1;
      }
      do {
        uVar16 = (uint)uVar17;
        if ((7 < uVar16) || ((*(byte *)(param_1 + 0x3a) >> 2 & 1) != 0)) {
          plVar11 = local_80;
          uVar9 = (ulong)uVar1;
          do {
            lVar7 = *plVar11;
            uVar5 = uVar16 - *(byte *)(lVar7 + 1);
            if (uVar5 < 8) {
              bVar2 = *(byte *)(lVar7 + 2);
              if ((bVar2 & 0x40) != 0) {
                uVar5 = 7 - uVar5;
              }
              uVar10 = (ulong)(*(byte *)(lVar7 + 3) >> (7 - (ulong)uVar5 & 0x3f)) & 1 |
                       ((ulong)(*(byte *)(lVar7 + 4) >> (7 - (ulong)uVar5 & 0x3f)) & 1) << 1;
              if ((int)uVar10 != 0) {
                if ((*(char *)(param_1 + uVar17 + 0xa0) == '\0') || ((bVar2 >> 5 & 1) == 0)) {
                  *puVar8 = *(undefined1 *)
                             (*(long *)(*(long *)(param_1 + 0x90) + 0x20) +
                              (uVar10 | ((ulong)bVar2 & 3) << 2) + 0x1f10);
                }
                break;
              }
            }
            uVar9 = uVar9 - 1;
            plVar11 = plVar11 + 1;
          } while (uVar9 != 0);
        }
        uVar17 = (ulong)(uVar16 + 1);
        puVar8 = puVar8 + 1;
      } while (uVar16 + 1 < param_4 + param_3);
    }
  }
  return;
}

