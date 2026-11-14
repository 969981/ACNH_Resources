
long FUN_01afd600(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  uint uVar7;
  uint *puVar8;
  ushort uVar9;
  ushort uVar10;
  int iVar11;
  uint *puVar12;
  char cVar13;
  uint *puVar14;
  ulong uVar15;
  int *piVar16;
  
  puVar5 = PTR_DAT_04bbfeb8;
  puVar4 = PTR_DAT_04bbfeb0;
  puVar8 = *(uint **)(param_1 + 0x10);
  if (puVar8 == (uint *)0x0) {
    uVar7 = 0xbc;
  }
  else {
    uVar7 = *puVar8;
    if (uVar7 != 0 && puVar8 != (uint *)(ulong)uVar7) {
      puVar12 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
      uVar7 = 0;
      if (*puVar12 == 0) goto LAB_01afd6a0;
      uVar7 = puVar12[1];
      if ((uVar7 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
        lVar6 = 0xc;
        if (*(char *)((long)puVar12 + 10) != '\0') {
          lVar6 = 0x1c;
        }
        lVar6 = (long)puVar12 + lVar6 + (ulong)(ushort)puVar12[2] * 8;
        if (lVar6 != 0) {
          uVar3 = 0;
          if ((ulong)uVar7 != 0) {
            uVar3 = (uint)((ulong)((long)puVar8 - lVar6) / (ulong)uVar7);
          }
          if (*puVar12 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
             (uVar7 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
             uVar7 < 0xbd)) goto LAB_01afd6a0;
        }
      }
    }
    uVar7 = 0;
  }
LAB_01afd6a0:
  uVar3 = *(uint *)(DAT_0532a778 + 0x1c0);
  if ((int)uVar3 < 1) {
    if ((((*(long *)(DAT_0532a778 + 0xb0) == 0) ||
         (puVar12 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8), puVar12 == (uint *)0x0)) ||
        ((uVar7 < *(uint *)(DAT_0532a778 + 200) &&
         (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar7) == '\0')))) ||
       (((*puVar12 <= uVar7 || (puVar12[1] == 0)) || ((ushort)puVar12[2] == 0)))) goto LAB_01afd7e0;
    iVar11 = 0xc;
    if (*(char *)((long)puVar12 + 10) != '\0') {
      iVar11 = 0x1c;
    }
    puVar12 = (uint *)((ulong)(puVar12[1] * uVar7 + (uint)(ushort)puVar12[2] * 8 + iVar11) +
                      (long)puVar12);
    if (puVar12 != (uint *)0x0) goto LAB_01afd6e8;
    uVar9 = 0;
  }
  else {
    if (uVar7 < uVar3) {
      if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar7) {
        uVar7 = 0;
      }
      puVar12 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar7 * 8);
      uVar9 = 0;
      if (puVar12 == (uint *)0x0) goto LAB_01afd7e4;
LAB_01afd6e8:
      uVar7 = *puVar12;
      if (uVar7 != 0 && puVar12 != (uint *)(ulong)uVar7) {
        puVar14 = (uint *)((long)puVar12 - (long)(ulong)uVar7);
        if (((*puVar14 != 0) && (uVar7 = puVar14[1], uVar7 != 0)) &&
           ((ulong)(ushort)puVar14[2] != 0)) {
          lVar6 = 0xc;
          if (*(char *)((long)puVar14 + 10) != '\0') {
            lVar6 = 0x1c;
          }
          lVar6 = (long)puVar14 + lVar6 + (ulong)(ushort)puVar14[2] * 8;
          if (lVar6 != 0) {
            uVar2 = 0;
            if ((ulong)uVar7 != 0) {
              uVar2 = (uint)((ulong)((long)puVar12 - lVar6) / (ulong)uVar7);
            }
            if (*puVar14 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc0288) &&
               (uVar9 = *(ushort *)(*(long *)(PTR_DAT_04bc0288 + 8) + (long)(int)uVar2 * 2),
               uVar9 < 6)) goto LAB_01afd7e4;
          }
        }
      }
    }
LAB_01afd7e0:
    uVar9 = 0;
  }
LAB_01afd7e4:
  switch(uVar9) {
  case 1:
    if (puVar8 == (uint *)0x0) {
      uVar7 = 0xbc;
    }
    else {
      uVar2 = *puVar8;
      uVar7 = 0;
      if ((uVar2 != 0) && (puVar8 != (uint *)(ulong)uVar2)) {
        puVar12 = (uint *)((long)puVar8 - (long)(ulong)uVar2);
        uVar7 = 0;
        if (*puVar12 != 0) {
          uVar7 = puVar12[1];
          if ((uVar7 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
            lVar6 = 0xc;
            if (*(char *)((long)puVar12 + 10) != '\0') {
              lVar6 = 0x1c;
            }
            lVar6 = (long)puVar12 + lVar6 + (ulong)(ushort)puVar12[2] * 8;
            if (lVar6 != 0) {
              uVar2 = 0;
              if ((ulong)uVar7 != 0) {
                uVar2 = (uint)((ulong)((long)puVar8 - lVar6) / (ulong)uVar7);
              }
              if (*puVar12 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                 (uVar7 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
                 uVar7 < 0xbd)) goto LAB_01afdab0;
            }
          }
          uVar7 = 0;
        }
      }
    }
LAB_01afdab0:
    if ((int)uVar3 < 1) {
      if (*(long *)(DAT_0532a778 + 0xb0) == 0) {
        return 0;
      }
      puVar8 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8);
      if (puVar8 == (uint *)0x0) {
        return 0;
      }
      if ((uVar7 < *(uint *)(DAT_0532a778 + 200)) &&
         (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar7) == '\0')) {
        return 0;
      }
      if (*puVar8 <= uVar7) {
        return 0;
      }
      if (puVar8[1] == 0) {
        return 0;
      }
      if ((ushort)puVar8[2] == 0) {
        return 0;
      }
      iVar11 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        iVar11 = 0x1c;
      }
      puVar8 = (uint *)((ulong)(puVar8[1] * uVar7 + (uint)(ushort)puVar8[2] * 8 + iVar11) +
                       (long)puVar8);
    }
    else {
      if (uVar3 <= uVar7) {
        return 0;
      }
      if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar7) {
        uVar7 = 0;
      }
      puVar8 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar7 * 8);
    }
    if ((puVar8 != (uint *)0x0) && (*puVar8 != 0)) {
      cVar13 = *PTR_DAT_04bbfeb0;
      do {
        if (cVar13 == '\0') {
          cVar13 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
          *(undefined4 *)(puVar5 + 0x78) = 0xffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
        }
        else {
          uVar7 = *(uint *)(puVar5 + 0x2c);
          if (-1 < (int)uVar7) {
            if ((char *)((ulong)uVar7 + (long)puVar8) == (char *)0x0) {
              return 0;
            }
            if (*(char *)((ulong)uVar7 + (long)puVar8) == '\0') {
              return 0;
            }
            goto LAB_01afdc2c;
          }
          if (uVar7 != 0xffffffff) {
            return 0;
          }
        }
        lVar6 = (long)puVar8 - (ulong)*puVar8;
        if (*puVar8 == 0) {
          return 0;
        }
        if (lVar6 == 0) {
          return 0;
        }
        lVar1 = 0xc;
        if (*(char *)(lVar6 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        if (lVar1 + lVar6 == 0) {
          return 0;
        }
        uVar15 = (ulong)*(ushort *)(lVar6 + 8);
        *(undefined4 *)(puVar5 + 0x2c) = 0xfffffffe;
        if (uVar15 == 0) {
          return 0;
        }
        piVar16 = (int *)(lVar1 + lVar6 + 4);
        while (piVar16[-1] != -0x6f43f7ab) {
          piVar16 = piVar16 + 2;
          uVar15 = uVar15 - 1;
          if (uVar15 == 0) {
            return 0;
          }
        }
        iVar11 = 0;
        if (*piVar16 != -1) {
          iVar11 = *piVar16;
        }
        *(int *)(puVar5 + 0x2c) = iVar11;
        if (*puVar8 == 0) {
          return 0;
        }
      } while( true );
    }
    break;
  case 2:
    lVar6 = FUN_01ae4d10();
    if (lVar6 != 0) {
      return lVar6;
    }
    break;
  case 3:
    if (puVar8 == (uint *)0x0) {
      uVar10 = 0xbc;
      uVar9 = 0x61;
    }
    else {
      uVar7 = *puVar8;
      uVar9 = 0;
      if ((uVar7 != 0) && (puVar8 != (uint *)(ulong)uVar7)) {
        puVar12 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
        uVar9 = 0;
        if (*puVar12 != 0) {
          uVar7 = puVar12[1];
          if ((uVar7 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
            lVar6 = 0xc;
            if (*(char *)((long)puVar12 + 10) != '\0') {
              lVar6 = 0x1c;
            }
            lVar6 = (long)puVar12 + lVar6 + (ulong)(ushort)puVar12[2] * 8;
            if (lVar6 != 0) {
              uVar3 = 0;
              if ((ulong)uVar7 != 0) {
                uVar3 = (uint)((ulong)((long)puVar8 - lVar6) / (ulong)uVar7);
              }
              if (*puVar12 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
                 (uVar9 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
                 uVar9 < 0xbd)) goto LAB_01afd948;
            }
          }
          uVar9 = 0;
        }
      }
LAB_01afd948:
      if (uVar9 == 0xa8) goto LAB_01afdc2c;
      uVar9 = 0x61;
      uVar7 = *puVar8;
joined_r0x01afda24:
      uVar10 = 0;
      if (uVar7 != 0) {
        uVar10 = 0;
        if (puVar8 != (uint *)(ulong)uVar7) {
          puVar12 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
          uVar10 = 0;
          if (*puVar12 != 0) {
            uVar7 = puVar12[1];
            if ((uVar7 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
              lVar6 = 0xc;
              if (*(char *)((long)puVar12 + 10) != '\0') {
                lVar6 = 0x1c;
              }
              lVar6 = (long)puVar12 + lVar6 + (ulong)(ushort)puVar12[2] * 8;
              if (lVar6 != 0) {
                uVar3 = 0;
                if ((ulong)uVar7 != 0) {
                  uVar3 = (uint)((ulong)((long)puVar8 - lVar6) / (ulong)uVar7);
                }
                if (*puVar12 <= uVar3) {
                  uVar3 = 0xffffffff;
                }
                if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
                   (uVar10 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
                   uVar10 < 0xbd)) goto LAB_01afdc18;
              }
            }
            uVar10 = 0;
          }
        }
      }
    }
    goto LAB_01afdc18;
  case 4:
    if (puVar8 == (uint *)0x0) {
      uVar9 = 0xbc;
    }
    else {
      uVar7 = *puVar8;
      uVar9 = 0;
      if ((uVar7 != 0) && (puVar8 != (uint *)(ulong)uVar7)) {
        puVar12 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
        uVar9 = 0;
        if (*puVar12 != 0) {
          uVar7 = puVar12[1];
          if ((uVar7 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
            lVar6 = 0xc;
            if (*(char *)((long)puVar12 + 10) != '\0') {
              lVar6 = 0x1c;
            }
            lVar6 = (long)puVar12 + lVar6 + (ulong)(ushort)puVar12[2] * 8;
            if (lVar6 != 0) {
              uVar3 = 0;
              if ((ulong)uVar7 != 0) {
                uVar3 = (uint)((ulong)((long)puVar8 - lVar6) / (ulong)uVar7);
              }
              if (*puVar12 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
                 (uVar9 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
                 uVar9 < 0xbd)) goto LAB_01afdbf0;
            }
          }
          uVar9 = 0;
        }
      }
    }
LAB_01afdbf0:
    if (uVar9 == 0x78) {
      return param_1 + 0xe;
    }
    break;
  case 5:
    uVar9 = 0x9d;
    if (puVar8 != (uint *)0x0) {
      uVar7 = *puVar8;
      goto joined_r0x01afda24;
    }
    uVar10 = 0xbc;
LAB_01afdc18:
    if (uVar10 == uVar9) {
LAB_01afdc2c:
      return param_1 + 0xc;
    }
  }
  return 0;
}

