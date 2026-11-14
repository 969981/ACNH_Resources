
undefined8 FUN_01ae59b0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  undefined *puVar7;
  undefined *puVar8;
  int *piVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  char cVar16;
  
  lVar3 = DAT_0532a778;
  puVar8 = PTR_DAT_04bbfeb8;
  puVar7 = PTR_DAT_04bbfeb0;
  puVar10 = *(uint **)(param_1 + 0x10);
  if (puVar10 == (uint *)0x0) {
    return 0;
  }
  uVar13 = *puVar10;
  if (uVar13 != 0 && puVar10 != (uint *)(ulong)uVar13) {
    puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar13);
    if (((*puVar11 != 0) && (uVar13 = puVar11[1], uVar13 != 0)) && ((ulong)(ushort)puVar11[2] != 0))
    {
      lVar1 = 0xc;
      if (*(char *)((long)puVar11 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar11 + lVar1 + (ulong)(ushort)puVar11[2] * 8;
      if (lVar1 != 0) {
        uVar4 = 0;
        if ((ulong)uVar13 != 0) {
          uVar4 = (uint)((ulong)((long)puVar10 - lVar1) / (ulong)uVar13);
        }
        if (*puVar11 <= uVar4) {
          uVar4 = 0xffffffff;
        }
        uVar12 = *(uint *)PTR_DAT_04bc00c8;
        if ((uVar12 <= uVar4) ||
           (uVar6 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2),
           uVar13 = (uint)uVar6, 0xbc < uVar6)) {
          uVar13 = 0;
        }
        goto LAB_01ae5a58;
      }
    }
  }
  uVar13 = 0;
  uVar12 = *(uint *)PTR_DAT_04bc00c8;
LAB_01ae5a58:
  uVar4 = *(uint *)(DAT_0532a778 + 0x1c0);
  if ((int)uVar4 < 1) {
    if (*(long *)(DAT_0532a778 + 0xb0) == 0) {
      return 0;
    }
    puVar10 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8);
    if (puVar10 == (uint *)0x0) {
      return 0;
    }
    if ((uVar13 < *(uint *)(DAT_0532a778 + 200)) &&
       (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar13) == '\0')) {
      return 0;
    }
    if (*puVar10 <= uVar13) {
      return 0;
    }
    if (puVar10[1] == 0) {
      return 0;
    }
    if ((ushort)puVar10[2] == 0) {
      return 0;
    }
    iVar14 = 0xc;
    if (*(char *)((long)puVar10 + 10) != '\0') {
      iVar14 = 0x1c;
    }
    puVar10 = (uint *)((ulong)(puVar10[1] * uVar13 + (uint)(ushort)puVar10[2] * 8 + iVar14) +
                      (long)puVar10);
  }
  else {
    if (uVar4 <= uVar13) {
      return 0;
    }
    if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar13) {
      uVar13 = 0;
    }
    puVar10 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar13 * 8);
  }
  if ((puVar10 == (uint *)0x0) || (*puVar10 == 0)) {
    return 0;
  }
  cVar16 = *PTR_DAT_04bbfeb0;
  do {
    if (cVar16 == '\0') {
      cVar16 = '\x01';
      *(undefined8 *)puVar8 = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
      *puVar7 = 1;
      *(undefined8 *)(puVar8 + 0x70) = 0xffffffffffffffff;
      *(undefined4 *)(puVar8 + 0x78) = 0xffffffff;
      *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x60) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x68) = 0xffffffffffffffff;
    }
    else {
      uVar13 = *(uint *)(puVar8 + 0x2c);
      uVar15 = (ulong)uVar13;
      if (-1 < (int)uVar13) {
        if ((char *)(uVar15 + (long)puVar10) == (char *)0x0) {
          return 0;
        }
        if (*(char *)(uVar15 + (long)puVar10) == '\0') {
          return 0;
        }
        puVar10 = *(uint **)(param_1 + 0x10);
        if (puVar10 == (uint *)0x0) {
          uVar13 = 0xbc;
        }
        else {
          uVar5 = *puVar10;
          uVar13 = 0;
          if ((uVar5 != 0) && (puVar10 != (uint *)(ulong)uVar5)) {
            puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar5);
            uVar13 = 0;
            if (*puVar11 != 0) {
              uVar13 = puVar11[1];
              if ((uVar13 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
                lVar1 = 0xc;
                if (*(char *)((long)puVar11 + 10) != '\0') {
                  lVar1 = 0x1c;
                }
                lVar1 = (long)puVar11 + lVar1 + (ulong)(ushort)puVar11[2] * 8;
                if (lVar1 != 0) {
                  uVar5 = 0;
                  if ((ulong)uVar13 != 0) {
                    uVar5 = (uint)((ulong)((long)puVar10 - lVar1) / (ulong)uVar13);
                  }
                  if (*puVar11 <= uVar5) {
                    uVar5 = 0xffffffff;
                  }
                  if ((uVar5 < uVar12) &&
                     (uVar13 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar5 * 2),
                     uVar13 < 0xbd)) goto LAB_01ae5c9c;
                }
              }
              uVar13 = 0;
            }
          }
        }
LAB_01ae5c9c:
        if ((int)uVar4 < 1) {
          if (*(long *)(lVar3 + 0xb0) == 0) {
            return 1;
          }
          puVar10 = *(uint **)(*(long *)(lVar3 + 0xb0) + 8);
          if (puVar10 == (uint *)0x0) {
            return 1;
          }
          if ((uVar13 < *(uint *)(lVar3 + 200)) &&
             (*(char *)(*(long *)(lVar3 + 0xd0) + (long)(int)uVar13) == '\0')) {
            return 1;
          }
          if (*puVar10 <= uVar13) {
            return 1;
          }
          if (puVar10[1] == 0) {
            return 1;
          }
          if ((ushort)puVar10[2] == 0) {
            return 1;
          }
          iVar14 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            iVar14 = 0x1c;
          }
          puVar10 = (uint *)((ulong)(puVar10[1] * uVar13 + (uint)(ushort)puVar10[2] * 8 + iVar14) +
                            (long)puVar10);
        }
        else {
          if (uVar4 <= uVar13) {
            return 1;
          }
          if (*(uint *)(lVar3 + 0x1b0) <= uVar13) {
            uVar13 = 0;
          }
          puVar10 = *(uint **)(*(long *)(lVar3 + 0x1b8) + (ulong)uVar13 * 8);
        }
        if (puVar10 == (uint *)0x0) {
          return 1;
        }
        if (*puVar10 == 0) {
          return 1;
        }
        do {
          if (-1 < (int)uVar15) {
            if ((((char *)((long)puVar10 + uVar15) == (char *)0x0) ||
                (*(char *)((long)puVar10 + uVar15) == '\0')) ||
               ((*(byte *)(param_1 + 10) >> 5 & 1) == 0)) {
              return 1;
            }
            return 0;
          }
          if ((int)uVar15 != -1) {
            return 1;
          }
          puVar11 = (uint *)(ulong)*puVar10;
          if (*puVar10 == 0) {
            return 1;
          }
          if (puVar10 == puVar11) {
            return 1;
          }
          lVar3 = 0xc;
          if (*(char *)((long)puVar10 + (10 - (long)puVar11)) != '\0') {
            lVar3 = 0x1c;
          }
          lVar3 = (long)puVar10 + (lVar3 - (long)puVar11);
          if (lVar3 == 0) {
            return 1;
          }
          uVar15 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar11));
          *(undefined4 *)(puVar8 + 0x2c) = 0xfffffffe;
          if (uVar15 == 0) {
            return 1;
          }
          puVar11 = (uint *)(lVar3 + 4);
          while (puVar11[-1] != 0x90bc0855) {
            puVar11 = puVar11 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) {
              return 1;
            }
          }
          uVar13 = 0;
          if (*puVar11 != 0xffffffff) {
            uVar13 = *puVar11;
          }
          uVar15 = (ulong)uVar13;
          *(uint *)(puVar8 + 0x2c) = uVar13;
        } while (*puVar10 != 0);
        return 1;
      }
      if (uVar13 != 0xffffffff) {
        return 0;
      }
    }
    lVar1 = (long)puVar10 - (ulong)*puVar10;
    if (*puVar10 == 0) {
      return 0;
    }
    if (lVar1 == 0) {
      return 0;
    }
    lVar2 = 0xc;
    if (*(char *)(lVar1 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar1 == 0) {
      return 0;
    }
    uVar15 = (ulong)*(ushort *)(lVar1 + 8);
    *(undefined4 *)(puVar8 + 0x2c) = 0xfffffffe;
    if (uVar15 == 0) {
      return 0;
    }
    piVar9 = (int *)(lVar2 + lVar1 + 4);
    while (piVar9[-1] != -0x6f43f7ab) {
      piVar9 = piVar9 + 2;
      uVar15 = uVar15 - 1;
      if (uVar15 == 0) {
        return 0;
      }
    }
    iVar14 = 0;
    if (*piVar9 != -1) {
      iVar14 = *piVar9;
    }
    *(int *)(puVar8 + 0x2c) = iVar14;
    if (*puVar10 == 0) {
      return 0;
    }
  } while( true );
}

