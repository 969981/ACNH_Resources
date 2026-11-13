
/* WARNING: Removing unreachable block (ram,0x012ee098) */
/* WARNING: Removing unreachable block (ram,0x012edd94) */
/* WARNING: Removing unreachable block (ram,0x012ede9c) */
/* WARNING: Removing unreachable block (ram,0x012ee200) */
/* WARNING: Removing unreachable block (ram,0x012ee36c) */

bool FUN_012edd18(undefined8 param_1,short *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  ushort uVar11;
  ushort uVar12;
  ushort *puVar13;
  uint *puVar14;
  uint uVar15;
  long lVar16;
  
  if (param_2 == (short *)0x0) {
    return false;
  }
  sVar5 = param_2[2];
  if (param_2[4] <= param_2[2]) {
    sVar5 = param_2[4];
  }
  sVar6 = param_2[3];
  if (param_2[5] <= param_2[3]) {
    sVar6 = param_2[5];
  }
  uVar7 = (int)*param_2 - (int)sVar5;
  uVar8 = (int)param_2[1] - (int)sVar6;
  iVar9 = uVar8 * 3;
  puVar13 = (ushort *)(param_2 + (ulong)(iVar9 + uVar7) * 7 + 6);
  if (2 < uVar8 || 2 < uVar7) {
    puVar13 = &DAT_051868dc;
  }
  uVar12 = *(ushort *)(DAT_0519d040 + 0x408);
  uVar15 = (uint)*puVar13 - (uint)uVar12;
  uVar4 = *(uint *)(DAT_0519d040 + 1000);
  if (uVar4 <= uVar15) {
    return false;
  }
  lVar16 = *(long *)(DAT_0519d040 + 0x3f0);
  puVar14 = *(uint **)(lVar16 + (long)(int)uVar15 * 8);
  if (puVar14 == (uint *)0x0) {
    return false;
  }
  uVar15 = *puVar14;
  if (uVar15 == 0 || puVar14 == (uint *)(ulong)uVar15) {
LAB_012eddd0:
    uVar11 = 0;
  }
  else {
    puVar10 = (uint *)((long)puVar14 - (long)(ulong)uVar15);
    uVar11 = 0;
    if (*puVar10 != 0) {
      uVar15 = puVar10[1];
      if ((uVar15 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar15 != 0) {
            uVar2 = (uint)((ulong)((long)puVar14 - lVar1) / (ulong)uVar15);
          }
          if (*puVar10 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05160328) &&
             (uVar11 = *(ushort *)(DAT_05160330 + (long)(int)uVar2 * 2), uVar11 < 5))
          goto LAB_012eddd4;
        }
      }
      goto LAB_012eddd0;
    }
  }
LAB_012eddd4:
  if (uVar11 != 3) {
    return false;
  }
  uVar15 = *puVar14;
  if (uVar15 == 0 || puVar14 == (uint *)(ulong)uVar15) {
    return false;
  }
  puVar10 = (uint *)((long)puVar14 - (long)(ulong)uVar15);
  if (*puVar10 == 0) {
    return false;
  }
  uVar15 = puVar10[1];
  if (uVar15 == 0) {
    return false;
  }
  if ((ulong)(ushort)puVar10[2] == 0) {
    return false;
  }
  lVar1 = 0xc;
  if (*(char *)((long)puVar10 + 10) != '\0') {
    lVar1 = 0x1c;
  }
  lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
  if (lVar1 == 0) {
    return false;
  }
  uVar2 = 0;
  if ((ulong)uVar15 != 0) {
    uVar2 = (uint)((ulong)((long)puVar14 - lVar1) / (ulong)uVar15);
  }
  if (*puVar10 <= uVar2) {
    uVar2 = 0xffffffff;
  }
  if (DAT_051602f8 <= uVar2) {
    return false;
  }
  if (*(short *)(DAT_05160300 + (long)(int)uVar2 * 2) != 2) {
    return false;
  }
  uVar15 = ~(int)sVar6 + (int)param_2[1];
  puVar13 = (ushort *)(param_2 + (ulong)(uVar15 * 3 + uVar7) * 7 + 6);
  if (2 < uVar15 || 2 < uVar7) {
    puVar13 = &DAT_051868dc;
  }
  uVar15 = (uint)*puVar13 - (uint)uVar12;
  if ((uVar15 < uVar4) &&
     (puVar14 = *(uint **)(lVar16 + (long)(int)uVar15 * 8), puVar14 != (uint *)0x0)) {
    uVar15 = *puVar14;
    uVar11 = 0;
    if ((uVar15 != 0) && (puVar14 != (uint *)(ulong)uVar15)) {
      puVar10 = (uint *)((long)puVar14 - (long)(ulong)uVar15);
      uVar11 = 0;
      if (*puVar10 != 0) {
        uVar15 = puVar10[1];
        if ((uVar15 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar15 != 0) {
              uVar2 = (uint)((ulong)((long)puVar14 - lVar1) / (ulong)uVar15);
            }
            if (*puVar10 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05160328) &&
               (uVar11 = *(ushort *)(DAT_05160330 + (long)(int)uVar2 * 2), uVar11 < 5))
            goto LAB_012edf44;
          }
        }
        uVar11 = 0;
      }
    }
LAB_012edf44:
    if (((uVar11 == 3) && (uVar15 = *puVar14, uVar15 != 0)) && (puVar14 != (uint *)(ulong)uVar15)) {
      puVar10 = (uint *)((long)puVar14 - (long)(ulong)uVar15);
      if (((*puVar10 != 0) && (uVar15 = puVar10[1], uVar15 != 0)) &&
         ((ulong)(ushort)puVar10[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar15 != 0) {
            uVar2 = (uint)((ulong)((long)puVar14 - lVar1) / (ulong)uVar15);
          }
          if (*puVar10 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_051602f8) && (*(short *)(DAT_05160300 + (long)(int)uVar2 * 2) == 2)) {
            return true;
          }
        }
      }
    }
  }
  puVar13 = (ushort *)(param_2 + (ulong)((uVar8 + 1) * 3 + uVar7) * 7 + 6);
  if (2 < uVar8 + 1 || 2 < uVar7) {
    puVar13 = &DAT_051868dc;
  }
  uVar15 = (uint)uVar12;
  if ((*puVar13 - uVar15 < uVar4) &&
     (puVar14 = *(uint **)(lVar16 + (long)(int)(*puVar13 - uVar15) * 8), puVar14 != (uint *)0x0)) {
    uVar2 = *puVar14;
    uVar12 = 0;
    if ((uVar2 != 0) && (puVar14 != (uint *)(ulong)uVar2)) {
      puVar10 = (uint *)((long)puVar14 - (long)(ulong)uVar2);
      uVar12 = 0;
      if (*puVar10 != 0) {
        uVar2 = puVar10[1];
        if ((uVar2 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar1 != 0) {
            uVar3 = 0;
            if ((ulong)uVar2 != 0) {
              uVar3 = (uint)((ulong)((long)puVar14 - lVar1) / (ulong)uVar2);
            }
            if (*puVar10 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < DAT_05160328) &&
               (uVar12 = *(ushort *)(DAT_05160330 + (long)(int)uVar3 * 2), uVar12 < 5))
            goto LAB_012ee140;
          }
        }
        uVar12 = 0;
      }
    }
LAB_012ee140:
    if (((uVar12 == 3) && (uVar2 = *puVar14, uVar2 != 0)) && (puVar14 != (uint *)(ulong)uVar2)) {
      puVar10 = (uint *)((long)puVar14 - (long)(ulong)uVar2);
      if (((*puVar10 != 0) && (uVar2 = puVar10[1], uVar2 != 0)) && ((ulong)(ushort)puVar10[2] != 0))
      {
        lVar1 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar1 != 0) {
          uVar3 = 0;
          if ((ulong)uVar2 != 0) {
            uVar3 = (uint)((ulong)((long)puVar14 - lVar1) / (ulong)uVar2);
          }
          if (*puVar10 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < DAT_051602f8) && (*(short *)(DAT_05160300 + (long)(int)uVar3 * 2) == 2)) {
            return true;
          }
        }
      }
    }
  }
  uVar2 = ~(int)sVar5 + (int)*param_2;
  puVar13 = (ushort *)(param_2 + (ulong)(iVar9 + uVar2) * 7 + 6);
  if (2 < uVar8 || 2 < uVar2) {
    puVar13 = &DAT_051868dc;
  }
  if ((*puVar13 - uVar15 < uVar4) &&
     (puVar14 = *(uint **)(lVar16 + (long)(int)(*puVar13 - uVar15) * 8), puVar14 != (uint *)0x0)) {
    uVar2 = *puVar14;
    uVar12 = 0;
    if ((uVar2 != 0) && (puVar14 != (uint *)(ulong)uVar2)) {
      puVar10 = (uint *)((long)puVar14 - (long)(ulong)uVar2);
      uVar12 = 0;
      if (*puVar10 != 0) {
        uVar2 = puVar10[1];
        if ((uVar2 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar1 != 0) {
            uVar3 = 0;
            if ((ulong)uVar2 != 0) {
              uVar3 = (uint)((ulong)((long)puVar14 - lVar1) / (ulong)uVar2);
            }
            if (*puVar10 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < DAT_05160328) &&
               (uVar12 = *(ushort *)(DAT_05160330 + (long)(int)uVar3 * 2), uVar12 < 5))
            goto LAB_012ee2a8;
          }
        }
        uVar12 = 0;
      }
    }
LAB_012ee2a8:
    if (((uVar12 == 3) && (uVar2 = *puVar14, uVar2 != 0)) && (puVar14 != (uint *)(ulong)uVar2)) {
      puVar10 = (uint *)((long)puVar14 - (long)(ulong)uVar2);
      if (((*puVar10 != 0) && (uVar2 = puVar10[1], uVar2 != 0)) && ((ulong)(ushort)puVar10[2] != 0))
      {
        lVar1 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar1 != 0) {
          uVar3 = 0;
          if ((ulong)uVar2 != 0) {
            uVar3 = (uint)((ulong)((long)puVar14 - lVar1) / (ulong)uVar2);
          }
          if (*puVar10 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < DAT_051602f8) && (*(short *)(DAT_05160300 + (long)(int)uVar3 * 2) == 2)) {
            return true;
          }
        }
      }
    }
  }
  puVar13 = (ushort *)(param_2 + (ulong)(iVar9 + uVar7 + 1) * 7 + 6);
  if (2 < uVar8 || 2 < uVar7 + 1) {
    puVar13 = &DAT_051868dc;
  }
  if ((uVar4 <= *puVar13 - uVar15) ||
     (puVar14 = *(uint **)(lVar16 + (long)(int)(*puVar13 - uVar15) * 8), puVar14 == (uint *)0x0)) {
    return false;
  }
  uVar7 = *puVar14;
  uVar12 = 0;
  if ((uVar7 != 0) && (puVar14 != (uint *)(ulong)uVar7)) {
    puVar10 = (uint *)((long)puVar14 - (long)(ulong)uVar7);
    uVar12 = 0;
    if (*puVar10 != 0) {
      uVar7 = puVar10[1];
      if ((uVar7 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
        lVar16 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar16 = 0x1c;
        }
        lVar16 = (long)puVar10 + lVar16 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar16 != 0) {
          uVar8 = 0;
          if ((ulong)uVar7 != 0) {
            uVar8 = (uint)((ulong)((long)puVar14 - lVar16) / (ulong)uVar7);
          }
          if (*puVar10 <= uVar8) {
            uVar8 = 0xffffffff;
          }
          if ((uVar8 < DAT_05160328) &&
             (uVar12 = *(ushort *)(DAT_05160330 + (long)(int)uVar8 * 2), uVar12 < 5))
          goto LAB_012ee414;
        }
      }
      uVar12 = 0;
    }
  }
LAB_012ee414:
  if (uVar12 != 3) {
    return false;
  }
  uVar7 = *puVar14;
  uVar12 = 0;
  if ((uVar7 != 0) && (puVar14 != (uint *)(ulong)uVar7)) {
    puVar10 = (uint *)((long)puVar14 - (long)(ulong)uVar7);
    uVar12 = 0;
    if (*puVar10 != 0) {
      uVar7 = puVar10[1];
      if ((uVar7 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
        lVar16 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar16 = 0x1c;
        }
        lVar16 = (long)puVar10 + lVar16 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar16 != 0) {
          uVar8 = 0;
          if ((ulong)uVar7 != 0) {
            uVar8 = (uint)((ulong)((long)puVar14 - lVar16) / (ulong)uVar7);
          }
          if (*puVar10 <= uVar8) {
            uVar8 = 0xffffffff;
          }
          if ((uVar8 < DAT_051602f8) &&
             (uVar12 = *(ushort *)(DAT_05160300 + (long)(int)uVar8 * 2), uVar12 < 3))
          goto LAB_012ee4c8;
        }
      }
      uVar12 = 0;
    }
  }
LAB_012ee4c8:
  return uVar12 == 2;
}

