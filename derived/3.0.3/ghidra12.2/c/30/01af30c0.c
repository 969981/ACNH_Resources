
short FUN_01af30c0(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int *piVar8;
  uint *puVar9;
  ulong uVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  ushort uVar14;
  char cVar15;
  
  lVar2 = DAT_0532a778;
  puVar7 = PTR_DAT_04bbfeb8;
  puVar6 = PTR_DAT_04bbfeb0;
  puVar9 = *(uint **)(param_1 + 0x10);
  if (puVar9 == (uint *)0x0) {
    uVar13 = 0xbc;
  }
  else {
    uVar13 = *puVar9;
    if (uVar13 != 0 && puVar9 != (uint *)(ulong)uVar13) {
      puVar12 = (uint *)((long)puVar9 - (long)(ulong)uVar13);
      if (((*puVar12 != 0) && (uVar13 = puVar12[1], uVar13 != 0)) &&
         ((ulong)(ushort)puVar12[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar12 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar12 + lVar1 + (ulong)(ushort)puVar12[2] * 8;
        if (lVar1 != 0) {
          uVar3 = 0;
          if ((ulong)uVar13 != 0) {
            uVar3 = (uint)((ulong)((long)puVar9 - lVar1) / (ulong)uVar13);
          }
          if (*puVar12 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
             (uVar14 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
             uVar13 = (uint)uVar14, uVar14 < 0xbd)) goto LAB_01af3158;
        }
      }
    }
    uVar13 = 0;
  }
LAB_01af3158:
  uVar3 = *(uint *)(DAT_0532a778 + 0x1c0);
  if ((int)uVar3 < 1) {
    if (*(long *)(DAT_0532a778 + 0xb0) == 0) {
      return 0;
    }
    puVar9 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8);
    if (puVar9 == (uint *)0x0) {
      return 0;
    }
    if ((uVar13 < *(uint *)(DAT_0532a778 + 200)) &&
       (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar13) == '\0')) {
      return 0;
    }
    if (*puVar9 <= uVar13) {
      return 0;
    }
    if (puVar9[1] == 0) {
      return 0;
    }
    if ((ushort)puVar9[2] == 0) {
      return 0;
    }
    iVar11 = 0xc;
    if (*(char *)((long)puVar9 + 10) != '\0') {
      iVar11 = 0x1c;
    }
    puVar9 = (uint *)((ulong)(puVar9[1] * uVar13 + (uint)(ushort)puVar9[2] * 8 + iVar11) +
                     (long)puVar9);
  }
  else {
    if (uVar3 <= uVar13) {
      return 0;
    }
    if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar13) {
      uVar13 = 0;
    }
    puVar9 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar13 * 8);
  }
  if (puVar9 == (uint *)0x0) {
    return 0;
  }
  if (*puVar9 == 0) {
    return 0;
  }
  cVar15 = *PTR_DAT_04bbfeb0;
  do {
    if (cVar15 == '\0') {
      cVar15 = '\x01';
      *(undefined8 *)puVar7 = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
      *puVar6 = 1;
      *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
      *(undefined4 *)(puVar7 + 0x78) = 0xffffffff;
      *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
    }
    else {
      uVar13 = *(uint *)(puVar7 + 0x1c);
      uVar10 = (ulong)uVar13;
      if (-1 < (int)uVar13) {
        if ((short *)(uVar10 + (long)puVar9) == (short *)0x0) {
          return 0;
        }
        if (*(short *)(uVar10 + (long)puVar9) == 0) {
          return 0;
        }
        puVar9 = *(uint **)(param_1 + 0x10);
        if (puVar9 == (uint *)0x0) {
          uVar13 = 0xbc;
        }
        else {
          uVar4 = *puVar9;
          uVar13 = 0;
          if ((uVar4 != 0) && (puVar9 != (uint *)(ulong)uVar4)) {
            puVar12 = (uint *)((long)puVar9 - (long)(ulong)uVar4);
            uVar13 = 0;
            if (*puVar12 != 0) {
              uVar13 = puVar12[1];
              if ((uVar13 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
                lVar1 = 0xc;
                if (*(char *)((long)puVar12 + 10) != '\0') {
                  lVar1 = 0x1c;
                }
                lVar1 = (long)puVar12 + lVar1 + (ulong)(ushort)puVar12[2] * 8;
                if (lVar1 != 0) {
                  uVar4 = 0;
                  if ((ulong)uVar13 != 0) {
                    uVar4 = (uint)((ulong)((long)puVar9 - lVar1) / (ulong)uVar13);
                  }
                  if (*puVar12 <= uVar4) {
                    uVar4 = 0xffffffff;
                  }
                  if ((uVar4 < *(uint *)PTR_DAT_04bc00c8) &&
                     (uVar13 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2),
                     uVar13 < 0xbd)) goto LAB_01af33b4;
                }
              }
              uVar13 = 0;
            }
          }
        }
LAB_01af33b4:
        bVar5 = *(byte *)(param_1 + 0xc);
        if ((int)uVar3 < 1) {
          if ((((*(long *)(lVar2 + 0xb0) == 0) ||
               (puVar9 = *(uint **)(*(long *)(lVar2 + 0xb0) + 8), puVar9 == (uint *)0x0)) ||
              ((uVar13 < *(uint *)(lVar2 + 200) &&
               (*(char *)(*(long *)(lVar2 + 0xd0) + (long)(int)uVar13) == '\0')))) ||
             (((*puVar9 <= uVar13 || (puVar9[1] == 0)) || ((ushort)puVar9[2] == 0))))
          goto LAB_01af3500;
          iVar11 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            iVar11 = 0x1c;
          }
          puVar9 = (uint *)((ulong)(puVar9[1] * uVar13 + (uint)(ushort)puVar9[2] * 8 + iVar11) +
                           (long)puVar9);
        }
        else {
          if (uVar3 <= uVar13) goto LAB_01af3500;
          if (*(uint *)(lVar2 + 0x1b0) <= uVar13) {
            uVar13 = 0;
          }
          puVar9 = *(uint **)(*(long *)(lVar2 + 0x1b8) + (ulong)uVar13 * 8);
        }
        if ((puVar9 == (uint *)0x0) || (*puVar9 == 0)) goto LAB_01af3500;
        break;
      }
      if (uVar13 != 0xffffffff) {
        return 0;
      }
    }
    puVar12 = (uint *)(ulong)*puVar9;
    if (*puVar9 == 0) {
      return 0;
    }
    if (puVar9 == puVar12) {
      return 0;
    }
    lVar1 = 0xc;
    if (*(char *)((long)puVar9 + (10 - (long)puVar12)) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar9 + (lVar1 - (long)puVar12);
    if (lVar1 == 0) {
      return 0;
    }
    uVar10 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar12));
    *(undefined4 *)(puVar7 + 0x1c) = 0xfffffffe;
    if (uVar10 == 0) {
      return 0;
    }
    piVar8 = (int *)(lVar1 + 4);
    while (piVar8[-1] != 0xce69142) {
      piVar8 = piVar8 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) {
        return 0;
      }
    }
    iVar11 = 0;
    if (*piVar8 != -1) {
      iVar11 = *piVar8;
    }
    *(int *)(puVar7 + 0x1c) = iVar11;
    if (*puVar9 == 0) {
      return 0;
    }
  } while( true );
LAB_01af33fc:
  if (-1 < (int)uVar10) {
    if ((ushort *)((long)puVar9 + uVar10) == (ushort *)0x0) {
LAB_01af3500:
      uVar14 = 0;
    }
    else {
      uVar14 = *(ushort *)((long)puVar9 + uVar10);
    }
LAB_01af3504:
    if (bVar5 < uVar14) {
      return bVar5 + 1;
    }
    return 1;
  }
  if ((int)uVar10 != -1) goto LAB_01af3500;
  puVar12 = (uint *)(ulong)*puVar9;
  uVar14 = 0;
  if ((*puVar9 == 0) || (puVar9 == puVar12)) goto LAB_01af3504;
  lVar2 = 0xc;
  if (*(char *)((long)puVar9 + (10 - (long)puVar12)) != '\0') {
    lVar2 = 0x1c;
  }
  lVar2 = (long)puVar9 + (lVar2 - (long)puVar12);
  uVar14 = 0;
  if (lVar2 == 0) goto LAB_01af3504;
  uVar10 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar12));
  *(undefined4 *)(puVar7 + 0x1c) = 0xfffffffe;
  if (uVar10 == 0) goto LAB_01af3500;
  puVar12 = (uint *)(lVar2 + 4);
  while (puVar12[-1] != 0xce69142) {
    puVar12 = puVar12 + 2;
    uVar10 = uVar10 - 1;
    if (uVar10 == 0) goto LAB_01af3500;
  }
  uVar14 = 0;
  uVar13 = 0;
  if (*puVar12 != 0xffffffff) {
    uVar13 = *puVar12;
  }
  uVar10 = (ulong)uVar13;
  *(uint *)(puVar7 + 0x1c) = uVar13;
  if (*puVar9 == 0) goto LAB_01af3504;
  goto LAB_01af33fc;
}

