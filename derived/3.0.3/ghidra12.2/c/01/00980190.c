
void FUN_00980190(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  uint *puVar5;
  char cVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  uint *puVar10;
  int *piVar11;
  ulong uVar12;
  int iVar13;
  
  uVar4 = *(uint *)(param_1 + 0x608);
  if (0 < (int)uVar4) {
    uVar7 = 0;
    do {
      uVar1 = uVar7;
      if (uVar4 <= uVar7) {
        uVar1 = 0;
      }
      uVar7 = uVar7 + 1;
      puVar8 = (undefined8 *)(*(long *)(param_1 + 0x610) + (ulong)uVar1 * 0x10);
      *puVar8 = 0;
      puVar8[1] = 0;
      uVar4 = *(uint *)(param_1 + 0x608);
    } while ((int)uVar7 < (int)uVar4);
  }
  uVar4 = *(uint *)(param_1 + 0x618);
  if (0 < (int)uVar4) {
    uVar7 = 0;
    do {
      uVar1 = uVar7;
      if (uVar4 <= uVar7) {
        uVar1 = 0;
      }
      uVar7 = uVar7 + 1;
      puVar8 = (undefined8 *)(*(long *)(param_1 + 0x620) + (ulong)uVar1 * 0x10);
      *puVar8 = 0;
      puVar8[1] = 0;
      uVar4 = *(uint *)(param_1 + 0x618);
    } while ((int)uVar7 < (int)uVar4);
  }
  uVar7 = *(uint *)(param_1 + 0x1c8);
  if ((int)uVar7 < 1) {
    uVar7 = 0;
    if (*(long *)(param_1 + 0xb8) != 0) {
      puVar5 = *(uint **)(*(long *)(param_1 + 0xb8) + 8);
      uVar7 = 0;
      if (puVar5 != (uint *)0x0) {
        uVar7 = *puVar5;
      }
    }
  }
  if ((int)*(uint *)(param_1 + 0x608) <= (int)uVar7) {
    uVar7 = *(uint *)(param_1 + 0x608);
  }
  if (0 < (int)uVar7) {
    uVar12 = 0;
    do {
      if ((int)*(uint *)(param_1 + 0x1c8) < 1) {
        if ((((*(long *)(param_1 + 0xb8) != 0) &&
             (puVar5 = *(uint **)(*(long *)(param_1 + 0xb8) + 8), puVar5 != (uint *)0x0)) &&
            ((*(uint *)(param_1 + 0xd0) <= uVar12 ||
             (*(char *)(*(long *)(param_1 + 0xd8) + uVar12) != '\0')))) &&
           (((uVar12 < *puVar5 && (puVar5[1] != 0)) && ((ushort)puVar5[2] != 0)))) {
          iVar13 = 0xc;
          if (*(char *)((long)puVar5 + 10) != '\0') {
            iVar13 = 0x1c;
          }
          puVar5 = (uint *)((ulong)(puVar5[1] * (int)uVar12 + (uint)(ushort)puVar5[2] * 8 + iVar13)
                           + (long)puVar5);
          goto joined_r0x00980400;
        }
      }
      else if (uVar12 < *(uint *)(param_1 + 0x1c8)) {
        uVar9 = uVar12 & 0xffffffff;
        if (*(uint *)(param_1 + 0x1b8) <= uVar12) {
          uVar9 = 0;
        }
        puVar5 = *(uint **)(*(long *)(param_1 + 0x1c0) + uVar9 * 8);
joined_r0x00980400:
        if (puVar5 != (uint *)0x0) {
          if (*puVar5 != 0) {
            cVar6 = DAT_04cfab80;
            do {
              if (cVar6 == '\0') {
                cVar6 = '\x01';
                DAT_04cfabb4 = 0xffffffffffffffff;
                DAT_04cfab80 = '\x01';
                DAT_04cfab84 = 0xffffffffffffffff;
                DAT_04cfab8c = 0xffffffffffffffff;
                DAT_04cfab94 = 0xffffffffffffffff;
                DAT_04cfab9c = -1;
                DAT_04cfaba4 = 0xffffffffffffffff;
                DAT_04cfabac = 0xffffffffffffffff;
              }
              else {
                if (-1 < DAT_04cfab9c) {
                  puVar8 = (undefined8 *)((ulong)DAT_04cfab9c._4_4_ + (long)puVar5);
                  goto LAB_00980268;
                }
                if (DAT_04cfab9c._4_4_ != 0xffffffff) break;
              }
              puVar10 = (uint *)(ulong)*puVar5;
              puVar8 = (undefined8 *)0x0;
              if ((*puVar5 == 0) || (puVar5 == puVar10)) goto LAB_00980268;
              lVar3 = 0xc;
              if (*(char *)((long)puVar5 + (10 - (long)puVar10)) != '\0') {
                lVar3 = 0x1c;
              }
              lVar3 = (long)puVar5 + (lVar3 - (long)puVar10);
              if (lVar3 == 0) break;
              uVar9 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar10));
              DAT_04cfab9c = CONCAT44(0xfffffffe,(undefined4)DAT_04cfab9c);
              puVar8 = (undefined8 *)0x0;
              if (uVar9 == 0) goto LAB_00980268;
              piVar11 = (int *)(lVar3 + 4);
              while (piVar11[-1] != 0x2e1e45c3) {
                piVar11 = piVar11 + 2;
                uVar9 = uVar9 - 1;
                if (uVar9 == 0) {
                  puVar8 = (undefined8 *)0x0;
                  goto LAB_00980268;
                }
              }
              iVar13 = 0;
              if (*piVar11 != -1) {
                iVar13 = *piVar11;
              }
              DAT_04cfab9c = CONCAT44(iVar13,(undefined4)DAT_04cfab9c);
            } while (*puVar5 != 0);
          }
          puVar8 = (undefined8 *)0x0;
LAB_00980268:
          puVar2 = &DAT_0407ebb1;
          if (puVar8 != (undefined8 *)0x0) {
            puVar2 = puVar8;
          }
          uVar9 = uVar12 & 0xffffffff;
          if (*(uint *)(param_1 + 0x608) <= uVar12) {
            uVar9 = 0;
          }
          FUN_00981c00(puVar2,*(long *)(param_1 + 0x610) + uVar9 * 0x10);
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar7);
    uVar4 = *(uint *)(param_1 + 0x618);
  }
  if ((int)uVar4 <= (int)uVar7) {
    uVar7 = uVar4;
  }
  if (0 < (int)uVar7) {
    uVar12 = 0;
    do {
      if ((int)*(uint *)(param_1 + 0x1c8) < 1) {
        if ((((*(long *)(param_1 + 0xb8) != 0) &&
             (puVar5 = *(uint **)(*(long *)(param_1 + 0xb8) + 8), puVar5 != (uint *)0x0)) &&
            ((*(uint *)(param_1 + 0xd0) <= uVar12 ||
             (*(char *)(*(long *)(param_1 + 0xd8) + uVar12) != '\0')))) &&
           (((uVar12 < *puVar5 && (puVar5[1] != 0)) && ((ushort)puVar5[2] != 0)))) {
          iVar13 = 0xc;
          if (*(char *)((long)puVar5 + 10) != '\0') {
            iVar13 = 0x1c;
          }
          puVar5 = (uint *)((ulong)(puVar5[1] * (int)uVar12 + (uint)(ushort)puVar5[2] * 8 + iVar13)
                           + (long)puVar5);
          goto joined_r0x009805e0;
        }
      }
      else if (uVar12 < *(uint *)(param_1 + 0x1c8)) {
        uVar9 = uVar12 & 0xffffffff;
        if (*(uint *)(param_1 + 0x1b8) <= uVar12) {
          uVar9 = 0;
        }
        puVar5 = *(uint **)(*(long *)(param_1 + 0x1c0) + uVar9 * 8);
joined_r0x009805e0:
        if (puVar5 != (uint *)0x0) {
          if (*puVar5 != 0) {
            cVar6 = DAT_04cfab80;
            do {
              if (cVar6 == '\0') {
                cVar6 = '\x01';
                DAT_04cfabb4 = 0xffffffffffffffff;
                DAT_04cfab80 = '\x01';
                DAT_04cfab84 = 0xffffffffffffffff;
                DAT_04cfab8c = 0xffffffffffffffff;
                DAT_04cfab94 = 0xffffffffffffffff;
                DAT_04cfab9c = -1;
                DAT_04cfaba4 = 0xffffffffffffffff;
                DAT_04cfabac = 0xffffffffffffffff;
              }
              else {
                if (-1 < (int)DAT_04cfaba4) {
                  puVar8 = (undefined8 *)((DAT_04cfaba4 & 0xffffffff) + (long)puVar5);
                  goto LAB_00980448;
                }
                if ((int)DAT_04cfaba4 != -1) break;
              }
              puVar10 = (uint *)(ulong)*puVar5;
              puVar8 = (undefined8 *)0x0;
              if ((*puVar5 == 0) || (puVar5 == puVar10)) goto LAB_00980448;
              lVar3 = 0xc;
              if (*(char *)((long)puVar5 + (10 - (long)puVar10)) != '\0') {
                lVar3 = 0x1c;
              }
              lVar3 = (long)puVar5 + (lVar3 - (long)puVar10);
              if (lVar3 == 0) break;
              uVar9 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar10));
              DAT_04cfaba4 = CONCAT44(DAT_04cfaba4._4_4_,0xfffffffe);
              puVar8 = (undefined8 *)0x0;
              if (uVar9 == 0) goto LAB_00980448;
              piVar11 = (int *)(lVar3 + 4);
              while (piVar11[-1] != -0x427a6bcd) {
                piVar11 = piVar11 + 2;
                uVar9 = uVar9 - 1;
                if (uVar9 == 0) {
                  puVar8 = (undefined8 *)0x0;
                  goto LAB_00980448;
                }
              }
              iVar13 = 0;
              if (*piVar11 != -1) {
                iVar13 = *piVar11;
              }
              DAT_04cfaba4 = CONCAT44(DAT_04cfaba4._4_4_,iVar13);
            } while (*puVar5 != 0);
          }
          puVar8 = (undefined8 *)0x0;
LAB_00980448:
          puVar2 = &DAT_0407ebb1;
          if (puVar8 != (undefined8 *)0x0) {
            puVar2 = puVar8;
          }
          uVar9 = uVar12 & 0xffffffff;
          if (*(uint *)(param_1 + 0x618) <= uVar12) {
            uVar9 = 0;
          }
          FUN_00981c00(puVar2,*(long *)(param_1 + 0x620) + uVar9 * 0x10);
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar7);
  }
  return;
}

