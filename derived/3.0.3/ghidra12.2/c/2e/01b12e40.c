
ulong FUN_01b12e40(long param_1,undefined4 param_2)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  char cVar11;
  int *piVar12;
  
  puVar5 = PTR_DAT_04bbfeb8;
  puVar4 = PTR_DAT_04bbfeb0;
  switch(param_2) {
  case 0:
    break;
  case 1:
    puVar8 = *(uint **)(param_1 + 0x10);
    if (puVar8 == (uint *)0x0) {
      uVar7 = 0xbc;
    }
    else {
      uVar7 = *puVar8;
      if (uVar7 != 0 && puVar8 != (uint *)(ulong)uVar7) {
        puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
        if (((*puVar10 != 0) && (uVar7 = puVar10[1], uVar7 != 0)) &&
           ((ulong)(ushort)puVar10[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar7 != 0) {
              uVar2 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar7);
            }
            if (*puVar10 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
               uVar7 = (uint)uVar3, uVar3 < 0xbd)) goto LAB_01b13608;
          }
        }
      }
      uVar7 = 0;
    }
LAB_01b13608:
    if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
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
      iVar9 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        iVar9 = 0x1c;
      }
      puVar8 = (uint *)((ulong)(puVar8[1] * uVar7 + (uint)(ushort)puVar8[2] * 8 + iVar9) +
                       (long)puVar8);
    }
    else {
      if (*(uint *)(DAT_0532a778 + 0x1c0) <= uVar7) {
        return 0;
      }
      if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar7) {
        uVar7 = 0;
      }
      puVar8 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar7 * 8);
    }
    if (puVar8 == (uint *)0x0) {
      return 0;
    }
    if (*puVar8 == 0) {
      return 0;
    }
    cVar11 = *PTR_DAT_04bbfeb0;
    do {
      if (cVar11 == '\0') {
        cVar11 = '\x01';
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
        uVar7 = *(uint *)(puVar5 + 0x5c);
        uVar6 = (ulong)uVar7;
        if (-1 < (int)uVar7) goto LAB_01b14708;
        if (uVar7 != 0xffffffff) {
          return 0;
        }
      }
      puVar10 = (uint *)(ulong)*puVar8;
      if (*puVar8 == 0) {
        return 0;
      }
      if (puVar8 == puVar10) {
        return 0;
      }
      lVar1 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar10)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar8 + (lVar1 - (long)puVar10);
      if (lVar1 == 0) {
        return 0;
      }
      uVar6 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar10));
      *(undefined4 *)(puVar5 + 0x5c) = 0xfffffffe;
      if (uVar6 == 0) {
        return 0;
      }
      piVar12 = (int *)(lVar1 + 4);
      while (piVar12[-1] != 0x49129b27) {
        piVar12 = piVar12 + 2;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) {
          return 0;
        }
      }
      iVar9 = 0;
      if (*piVar12 != -1) {
        iVar9 = *piVar12;
      }
      *(int *)(puVar5 + 0x5c) = iVar9;
      if (*puVar8 == 0) {
        return 0;
      }
    } while( true );
  case 2:
    puVar8 = *(uint **)(param_1 + 0x10);
    if (puVar8 == (uint *)0x0) {
      uVar7 = 0xbc;
    }
    else {
      uVar7 = *puVar8;
      if (uVar7 != 0 && puVar8 != (uint *)(ulong)uVar7) {
        puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
        if (((*puVar10 != 0) && (uVar7 = puVar10[1], uVar7 != 0)) &&
           ((ulong)(ushort)puVar10[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar7 != 0) {
              uVar2 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar7);
            }
            if (*puVar10 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
               uVar7 = (uint)uVar3, uVar3 < 0xbd)) goto LAB_01b13744;
          }
        }
      }
      uVar7 = 0;
    }
LAB_01b13744:
    if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
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
      iVar9 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        iVar9 = 0x1c;
      }
      puVar8 = (uint *)((ulong)(puVar8[1] * uVar7 + (uint)(ushort)puVar8[2] * 8 + iVar9) +
                       (long)puVar8);
    }
    else {
      if (*(uint *)(DAT_0532a778 + 0x1c0) <= uVar7) {
        return 0;
      }
      if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar7) {
        uVar7 = 0;
      }
      puVar8 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar7 * 8);
    }
    if (puVar8 == (uint *)0x0) {
      return 0;
    }
    if (*puVar8 == 0) {
      return 0;
    }
    cVar11 = *PTR_DAT_04bbfeb0;
    do {
      if (cVar11 == '\0') {
        cVar11 = '\x01';
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
        uVar7 = *(uint *)(puVar5 + 0x50);
        uVar6 = (ulong)uVar7;
        if (-1 < (int)uVar7) goto LAB_01b14708;
        if (uVar7 != 0xffffffff) {
          return 0;
        }
      }
      puVar10 = (uint *)(ulong)*puVar8;
      if (*puVar8 == 0) {
        return 0;
      }
      if (puVar8 == puVar10) {
        return 0;
      }
      lVar1 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar10)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar8 + (lVar1 - (long)puVar10);
      if (lVar1 == 0) {
        return 0;
      }
      uVar6 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar10));
      *(undefined4 *)(puVar5 + 0x50) = 0xfffffffe;
      if (uVar6 == 0) {
        return 0;
      }
      piVar12 = (int *)(lVar1 + 4);
      while (piVar12[-1] != -0x251d896c) {
        piVar12 = piVar12 + 2;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) {
          return 0;
        }
      }
      iVar9 = 0;
      if (*piVar12 != -1) {
        iVar9 = *piVar12;
      }
      *(int *)(puVar5 + 0x50) = iVar9;
      if (*puVar8 == 0) {
        return 0;
      }
    } while( true );
  case 3:
    puVar8 = *(uint **)(param_1 + 0x10);
    if (puVar8 == (uint *)0x0) {
      uVar7 = 0xbc;
    }
    else {
      uVar7 = *puVar8;
      if (uVar7 != 0 && puVar8 != (uint *)(ulong)uVar7) {
        puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
        if (((*puVar10 != 0) && (uVar7 = puVar10[1], uVar7 != 0)) &&
           ((ulong)(ushort)puVar10[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar7 != 0) {
              uVar2 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar7);
            }
            if (*puVar10 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
               uVar7 = (uint)uVar3, uVar3 < 0xbd)) goto LAB_01b13878;
          }
        }
      }
      uVar7 = 0;
    }
LAB_01b13878:
    if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
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
      iVar9 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        iVar9 = 0x1c;
      }
      puVar8 = (uint *)((ulong)(puVar8[1] * uVar7 + (uint)(ushort)puVar8[2] * 8 + iVar9) +
                       (long)puVar8);
    }
    else {
      if (*(uint *)(DAT_0532a778 + 0x1c0) <= uVar7) {
        return 0;
      }
      if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar7) {
        uVar7 = 0;
      }
      puVar8 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar7 * 8);
    }
    if (puVar8 == (uint *)0x0) {
      return 0;
    }
    if (*puVar8 == 0) {
      return 0;
    }
    cVar11 = *PTR_DAT_04bbfeb0;
    do {
      if (cVar11 == '\0') {
        cVar11 = '\x01';
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
        uVar7 = *(uint *)(puVar5 + 0x54);
        uVar6 = (ulong)uVar7;
        if (-1 < (int)uVar7) goto LAB_01b14708;
        if (uVar7 != 0xffffffff) {
          return 0;
        }
      }
      puVar10 = (uint *)(ulong)*puVar8;
      if (*puVar8 == 0) {
        return 0;
      }
      if (puVar8 == puVar10) {
        return 0;
      }
      lVar1 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar10)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar8 + (lVar1 - (long)puVar10);
      if (lVar1 == 0) {
        return 0;
      }
      uVar6 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar10));
      *(undefined4 *)(puVar5 + 0x54) = 0xfffffffe;
      if (uVar6 == 0) {
        return 0;
      }
      piVar12 = (int *)(lVar1 + 4);
      while (piVar12[-1] != 0x1bcd4858) {
        piVar12 = piVar12 + 2;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) {
          return 0;
        }
      }
      iVar9 = 0;
      if (*piVar12 != -1) {
        iVar9 = *piVar12;
      }
      *(int *)(puVar5 + 0x54) = iVar9;
      if (*puVar8 == 0) {
        return 0;
      }
    } while( true );
  case 4:
    puVar8 = *(uint **)(param_1 + 0x10);
    if (puVar8 == (uint *)0x0) {
      uVar7 = 0xbc;
    }
    else {
      uVar7 = *puVar8;
      if (uVar7 != 0 && puVar8 != (uint *)(ulong)uVar7) {
        puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
        if (((*puVar10 != 0) && (uVar7 = puVar10[1], uVar7 != 0)) &&
           ((ulong)(ushort)puVar10[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar7 != 0) {
              uVar2 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar7);
            }
            if (*puVar10 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
               uVar7 = (uint)uVar3, uVar3 < 0xbd)) goto LAB_01b139b4;
          }
        }
      }
      uVar7 = 0;
    }
LAB_01b139b4:
    if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
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
      iVar9 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        iVar9 = 0x1c;
      }
      puVar8 = (uint *)((ulong)(puVar8[1] * uVar7 + (uint)(ushort)puVar8[2] * 8 + iVar9) +
                       (long)puVar8);
    }
    else {
      if (*(uint *)(DAT_0532a778 + 0x1c0) <= uVar7) {
        return 0;
      }
      if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar7) {
        uVar7 = 0;
      }
      puVar8 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar7 * 8);
    }
    if (puVar8 == (uint *)0x0) {
      return 0;
    }
    if (*puVar8 == 0) {
      return 0;
    }
    cVar11 = *PTR_DAT_04bbfeb0;
    do {
      if (cVar11 == '\0') {
        cVar11 = '\x01';
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
        uVar6 = (ulong)uVar7;
        if (-1 < (int)uVar7) goto LAB_01b14708;
        if (uVar7 != 0xffffffff) {
          return 0;
        }
      }
      puVar10 = (uint *)(ulong)*puVar8;
      if (*puVar8 == 0) {
        return 0;
      }
      if (puVar8 == puVar10) {
        return 0;
      }
      lVar1 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar10)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar8 + (lVar1 - (long)puVar10);
      if (lVar1 == 0) {
        return 0;
      }
      uVar6 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar10));
      *(undefined4 *)(puVar5 + 0x2c) = 0xfffffffe;
      if (uVar6 == 0) {
        return 0;
      }
      piVar12 = (int *)(lVar1 + 4);
      while (piVar12[-1] != -0x6f43f7ab) {
        piVar12 = piVar12 + 2;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) {
          return 0;
        }
      }
      iVar9 = 0;
      if (*piVar12 != -1) {
        iVar9 = *piVar12;
      }
      *(int *)(puVar5 + 0x2c) = iVar9;
      if (*puVar8 == 0) {
        return 0;
      }
    } while( true );
  case 5:
    puVar8 = *(uint **)(param_1 + 0x10);
    if (puVar8 == (uint *)0x0) {
      uVar7 = 0xbc;
    }
    else {
      uVar7 = *puVar8;
      if (uVar7 != 0 && puVar8 != (uint *)(ulong)uVar7) {
        puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
        if (((*puVar10 != 0) && (uVar7 = puVar10[1], uVar7 != 0)) &&
           ((ulong)(ushort)puVar10[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar7 != 0) {
              uVar2 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar7);
            }
            if (*puVar10 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
               uVar7 = (uint)uVar3, uVar3 < 0xbd)) goto LAB_01b13ae8;
          }
        }
      }
      uVar7 = 0;
    }
LAB_01b13ae8:
    if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
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
      iVar9 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        iVar9 = 0x1c;
      }
      puVar8 = (uint *)((ulong)(puVar8[1] * uVar7 + (uint)(ushort)puVar8[2] * 8 + iVar9) +
                       (long)puVar8);
    }
    else {
      if (*(uint *)(DAT_0532a778 + 0x1c0) <= uVar7) {
        return 0;
      }
      if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar7) {
        uVar7 = 0;
      }
      puVar8 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar7 * 8);
    }
    if (puVar8 == (uint *)0x0) {
      return 0;
    }
    if (*puVar8 == 0) {
      return 0;
    }
    cVar11 = *PTR_DAT_04bbfeb0;
    do {
      if (cVar11 == '\0') {
        cVar11 = '\x01';
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
        uVar7 = *(uint *)(puVar5 + 0x40);
        uVar6 = (ulong)uVar7;
        if (-1 < (int)uVar7) goto LAB_01b14708;
        if (uVar7 != 0xffffffff) {
          return 0;
        }
      }
      puVar10 = (uint *)(ulong)*puVar8;
      if (*puVar8 == 0) {
        return 0;
      }
      if (puVar8 == puVar10) {
        return 0;
      }
      lVar1 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar10)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar8 + (lVar1 - (long)puVar10);
      if (lVar1 == 0) {
        return 0;
      }
      uVar6 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar10));
      *(undefined4 *)(puVar5 + 0x40) = 0xfffffffe;
      if (uVar6 == 0) {
        return 0;
      }
      piVar12 = (int *)(lVar1 + 4);
      while (piVar12[-1] != 0x5d389fbf) {
        piVar12 = piVar12 + 2;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) {
          return 0;
        }
      }
      iVar9 = 0;
      if (*piVar12 != -1) {
        iVar9 = *piVar12;
      }
      *(int *)(puVar5 + 0x40) = iVar9;
      if (*puVar8 == 0) {
        return 0;
      }
    } while( true );
  case 6:
    puVar8 = *(uint **)(param_1 + 0x10);
    if (puVar8 == (uint *)0x0) {
      uVar7 = 0xbc;
    }
    else {
      uVar7 = *puVar8;
      if (uVar7 != 0 && puVar8 != (uint *)(ulong)uVar7) {
        puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
        if (((*puVar10 != 0) && (uVar7 = puVar10[1], uVar7 != 0)) &&
           ((ulong)(ushort)puVar10[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar7 != 0) {
              uVar2 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar7);
            }
            if (*puVar10 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
               uVar7 = (uint)uVar3, uVar3 < 0xbd)) goto LAB_01b13c24;
          }
        }
      }
      uVar7 = 0;
    }
LAB_01b13c24:
    if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
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
      iVar9 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        iVar9 = 0x1c;
      }
      puVar8 = (uint *)((ulong)(puVar8[1] * uVar7 + (uint)(ushort)puVar8[2] * 8 + iVar9) +
                       (long)puVar8);
    }
    else {
      if (*(uint *)(DAT_0532a778 + 0x1c0) <= uVar7) {
        return 0;
      }
      if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar7) {
        uVar7 = 0;
      }
      puVar8 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar7 * 8);
    }
    if (puVar8 == (uint *)0x0) {
      return 0;
    }
    if (*puVar8 == 0) {
      return 0;
    }
    cVar11 = *PTR_DAT_04bbfeb0;
    do {
      if (cVar11 == '\0') {
        cVar11 = '\x01';
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
        uVar7 = *(uint *)(puVar5 + 0x24);
        uVar6 = (ulong)uVar7;
        if (-1 < (int)uVar7) goto LAB_01b14708;
        if (uVar7 != 0xffffffff) {
          return 0;
        }
      }
      puVar10 = (uint *)(ulong)*puVar8;
      if (*puVar8 == 0) {
        return 0;
      }
      if (puVar8 == puVar10) {
        return 0;
      }
      lVar1 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar10)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar8 + (lVar1 - (long)puVar10);
      if (lVar1 == 0) {
        return 0;
      }
      uVar6 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar10));
      *(undefined4 *)(puVar5 + 0x24) = 0xfffffffe;
      if (uVar6 == 0) {
        return 0;
      }
      piVar12 = (int *)(lVar1 + 4);
      while (piVar12[-1] != 0x472724ed) {
        piVar12 = piVar12 + 2;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) {
          return 0;
        }
      }
      iVar9 = 0;
      if (*piVar12 != -1) {
        iVar9 = *piVar12;
      }
      *(int *)(puVar5 + 0x24) = iVar9;
      if (*puVar8 == 0) {
        return 0;
      }
    } while( true );
  case 7:
    puVar8 = *(uint **)(param_1 + 0x10);
    if (puVar8 == (uint *)0x0) {
      uVar7 = 0xbc;
    }
    else {
      uVar7 = *puVar8;
      if (uVar7 != 0 && puVar8 != (uint *)(ulong)uVar7) {
        puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
        if (((*puVar10 != 0) && (uVar7 = puVar10[1], uVar7 != 0)) &&
           ((ulong)(ushort)puVar10[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar7 != 0) {
              uVar2 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar7);
            }
            if (*puVar10 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
               uVar7 = (uint)uVar3, uVar3 < 0xbd)) goto LAB_01b13d58;
          }
        }
      }
      uVar7 = 0;
    }
LAB_01b13d58:
    if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
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
      iVar9 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        iVar9 = 0x1c;
      }
      puVar8 = (uint *)((ulong)(puVar8[1] * uVar7 + (uint)(ushort)puVar8[2] * 8 + iVar9) +
                       (long)puVar8);
    }
    else {
      if (*(uint *)(DAT_0532a778 + 0x1c0) <= uVar7) {
        return 0;
      }
      if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar7) {
        uVar7 = 0;
      }
      puVar8 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar7 * 8);
    }
    if (puVar8 == (uint *)0x0) {
      return 0;
    }
    if (*puVar8 == 0) {
      return 0;
    }
    cVar11 = *PTR_DAT_04bbfeb0;
    do {
      if (cVar11 == '\0') {
        cVar11 = '\x01';
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
        uVar7 = *(uint *)(puVar5 + 0x3c);
        uVar6 = (ulong)uVar7;
        if (-1 < (int)uVar7) goto LAB_01b14708;
        if (uVar7 != 0xffffffff) {
          return 0;
        }
      }
      puVar10 = (uint *)(ulong)*puVar8;
      if (*puVar8 == 0) {
        return 0;
      }
      if (puVar8 == puVar10) {
        return 0;
      }
      lVar1 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar10)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar8 + (lVar1 - (long)puVar10);
      if (lVar1 == 0) {
        return 0;
      }
      uVar6 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar10));
      *(undefined4 *)(puVar5 + 0x3c) = 0xfffffffe;
      if (uVar6 == 0) {
        return 0;
      }
      piVar12 = (int *)(lVar1 + 4);
      while (piVar12[-1] != -0x2b968008) {
        piVar12 = piVar12 + 2;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) {
          return 0;
        }
      }
      iVar9 = 0;
      if (*piVar12 != -1) {
        iVar9 = *piVar12;
      }
      *(int *)(puVar5 + 0x3c) = iVar9;
      if (*puVar8 == 0) {
        return 0;
      }
    } while( true );
  case 8:
    puVar8 = *(uint **)(param_1 + 0x10);
    if (puVar8 == (uint *)0x0) {
      uVar7 = 0xbc;
    }
    else {
      uVar7 = *puVar8;
      if (uVar7 != 0 && puVar8 != (uint *)(ulong)uVar7) {
        puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
        if (((*puVar10 != 0) && (uVar7 = puVar10[1], uVar7 != 0)) &&
           ((ulong)(ushort)puVar10[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar7 != 0) {
              uVar2 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar7);
            }
            if (*puVar10 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
               uVar7 = (uint)uVar3, uVar3 < 0xbd)) goto LAB_01b13e94;
          }
        }
      }
      uVar7 = 0;
    }
LAB_01b13e94:
    if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
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
      iVar9 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        iVar9 = 0x1c;
      }
      puVar8 = (uint *)((ulong)(puVar8[1] * uVar7 + (uint)(ushort)puVar8[2] * 8 + iVar9) +
                       (long)puVar8);
    }
    else {
      if (*(uint *)(DAT_0532a778 + 0x1c0) <= uVar7) {
        return 0;
      }
      if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar7) {
        uVar7 = 0;
      }
      puVar8 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar7 * 8);
    }
    if (puVar8 == (uint *)0x0) {
      return 0;
    }
    if (*puVar8 == 0) {
      return 0;
    }
    cVar11 = *PTR_DAT_04bbfeb0;
    do {
      if (cVar11 == '\0') {
        cVar11 = '\x01';
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
        uVar7 = *(uint *)(puVar5 + 0x48);
        uVar6 = (ulong)uVar7;
        if (-1 < (int)uVar7) goto LAB_01b14708;
        if (uVar7 != 0xffffffff) {
          return 0;
        }
      }
      puVar10 = (uint *)(ulong)*puVar8;
      if (*puVar8 == 0) {
        return 0;
      }
      if (puVar8 == puVar10) {
        return 0;
      }
      lVar1 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar10)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar8 + (lVar1 - (long)puVar10);
      if (lVar1 == 0) {
        return 0;
      }
      uVar6 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar10));
      *(undefined4 *)(puVar5 + 0x48) = 0xfffffffe;
      if (uVar6 == 0) {
        return 0;
      }
      piVar12 = (int *)(lVar1 + 4);
      while (piVar12[-1] != 0x3d4f3f42) {
        piVar12 = piVar12 + 2;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) {
          return 0;
        }
      }
      iVar9 = 0;
      if (*piVar12 != -1) {
        iVar9 = *piVar12;
      }
      *(int *)(puVar5 + 0x48) = iVar9;
      if (*puVar8 == 0) {
        return 0;
      }
    } while( true );
  case 9:
    puVar8 = *(uint **)(param_1 + 0x10);
    if (puVar8 == (uint *)0x0) {
      uVar7 = 0xbc;
    }
    else {
      uVar7 = *puVar8;
      if (uVar7 != 0 && puVar8 != (uint *)(ulong)uVar7) {
        puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
        if (((*puVar10 != 0) && (uVar7 = puVar10[1], uVar7 != 0)) &&
           ((ulong)(ushort)puVar10[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar7 != 0) {
              uVar2 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar7);
            }
            if (*puVar10 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
               uVar7 = (uint)uVar3, uVar3 < 0xbd)) goto LAB_01b13fc8;
          }
        }
      }
      uVar7 = 0;
    }
LAB_01b13fc8:
    if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
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
      iVar9 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        iVar9 = 0x1c;
      }
      puVar8 = (uint *)((ulong)(puVar8[1] * uVar7 + (uint)(ushort)puVar8[2] * 8 + iVar9) +
                       (long)puVar8);
    }
    else {
      if (*(uint *)(DAT_0532a778 + 0x1c0) <= uVar7) {
        return 0;
      }
      if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar7) {
        uVar7 = 0;
      }
      puVar8 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar7 * 8);
    }
    if (puVar8 == (uint *)0x0) {
      return 0;
    }
    if (*puVar8 == 0) {
      return 0;
    }
    cVar11 = *PTR_DAT_04bbfeb0;
    do {
      if (cVar11 == '\0') {
        cVar11 = '\x01';
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
        uVar7 = *(uint *)(puVar5 + 0x4c);
        uVar6 = (ulong)uVar7;
        if (-1 < (int)uVar7) goto LAB_01b14708;
        if (uVar7 != 0xffffffff) {
          return 0;
        }
      }
      puVar10 = (uint *)(ulong)*puVar8;
      if (*puVar8 == 0) {
        return 0;
      }
      if (puVar8 == puVar10) {
        return 0;
      }
      lVar1 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar10)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar8 + (lVar1 - (long)puVar10);
      if (lVar1 == 0) {
        return 0;
      }
      uVar6 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar10));
      *(undefined4 *)(puVar5 + 0x4c) = 0xfffffffe;
      if (uVar6 == 0) {
        return 0;
      }
      piVar12 = (int *)(lVar1 + 4);
      while (piVar12[-1] != -0x4ad01ad2) {
        piVar12 = piVar12 + 2;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) {
          return 0;
        }
      }
      iVar9 = 0;
      if (*piVar12 != -1) {
        iVar9 = *piVar12;
      }
      *(int *)(puVar5 + 0x4c) = iVar9;
      if (*puVar8 == 0) {
        return 0;
      }
    } while( true );
  case 10:
    puVar8 = *(uint **)(param_1 + 0x10);
    if (puVar8 == (uint *)0x0) {
      uVar7 = 0xbc;
    }
    else {
      uVar7 = *puVar8;
      if (uVar7 != 0 && puVar8 != (uint *)(ulong)uVar7) {
        puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
        if (((*puVar10 != 0) && (uVar7 = puVar10[1], uVar7 != 0)) &&
           ((ulong)(ushort)puVar10[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar7 != 0) {
              uVar2 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar7);
            }
            if (*puVar10 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
               uVar7 = (uint)uVar3, uVar3 < 0xbd)) goto LAB_01b14104;
          }
        }
      }
      uVar7 = 0;
    }
LAB_01b14104:
    if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
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
      iVar9 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        iVar9 = 0x1c;
      }
      puVar8 = (uint *)((ulong)(puVar8[1] * uVar7 + (uint)(ushort)puVar8[2] * 8 + iVar9) +
                       (long)puVar8);
    }
    else {
      if (*(uint *)(DAT_0532a778 + 0x1c0) <= uVar7) {
        return 0;
      }
      if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar7) {
        uVar7 = 0;
      }
      puVar8 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar7 * 8);
    }
    if (puVar8 == (uint *)0x0) {
      return 0;
    }
    if (*puVar8 == 0) {
      return 0;
    }
    cVar11 = *PTR_DAT_04bbfeb0;
    do {
      if (cVar11 == '\0') {
        cVar11 = '\x01';
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
        uVar7 = *(uint *)(puVar5 + 0x30);
        uVar6 = (ulong)uVar7;
        if (-1 < (int)uVar7) goto LAB_01b14708;
        if (uVar7 != 0xffffffff) {
          return 0;
        }
      }
      puVar10 = (uint *)(ulong)*puVar8;
      if (*puVar8 == 0) {
        return 0;
      }
      if (puVar8 == puVar10) {
        return 0;
      }
      lVar1 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar10)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar8 + (lVar1 - (long)puVar10);
      if (lVar1 == 0) {
        return 0;
      }
      uVar6 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar10));
      *(undefined4 *)(puVar5 + 0x30) = 0xfffffffe;
      if (uVar6 == 0) {
        return 0;
      }
      piVar12 = (int *)(lVar1 + 4);
      while (piVar12[-1] != 0x6012035) {
        piVar12 = piVar12 + 2;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) {
          return 0;
        }
      }
      iVar9 = 0;
      if (*piVar12 != -1) {
        iVar9 = *piVar12;
      }
      *(int *)(puVar5 + 0x30) = iVar9;
      if (*puVar8 == 0) {
        return 0;
      }
    } while( true );
  case 0xb:
    uVar6 = FUN_01b04ab0();
    return uVar6;
  default:
    goto switchD_01b12e68_default;
  }
  puVar8 = *(uint **)(param_1 + 0x10);
  if (puVar8 == (uint *)0x0) {
    uVar7 = 0xbc;
  }
  else {
    uVar7 = *puVar8;
    if (uVar7 != 0 && puVar8 != (uint *)(ulong)uVar7) {
      puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
      if (((*puVar10 != 0) && (uVar7 = puVar10[1], uVar7 != 0)) && ((ulong)(ushort)puVar10[2] != 0))
      {
        lVar1 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar7 != 0) {
            uVar2 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar7);
          }
          if (*puVar10 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
             (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
             uVar7 = (uint)uVar3, uVar3 < 0xbd)) goto LAB_01b134d4;
        }
      }
    }
    uVar7 = 0;
  }
LAB_01b134d4:
  if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
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
    iVar9 = 0xc;
    if (*(char *)((long)puVar8 + 10) != '\0') {
      iVar9 = 0x1c;
    }
    puVar8 = (uint *)((ulong)(puVar8[1] * uVar7 + (uint)(ushort)puVar8[2] * 8 + iVar9) +
                     (long)puVar8);
  }
  else {
    if (*(uint *)(DAT_0532a778 + 0x1c0) <= uVar7) {
      return 0;
    }
    if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar7) {
      uVar7 = 0;
    }
    puVar8 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar7 * 8);
  }
  if ((puVar8 != (uint *)0x0) && (*puVar8 != 0)) {
    cVar11 = *PTR_DAT_04bbfeb0;
    do {
      if (cVar11 == '\0') {
        cVar11 = '\x01';
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
        uVar7 = *(uint *)(puVar5 + 0x5c);
        uVar6 = (ulong)uVar7;
        if (-1 < (int)uVar7) {
LAB_01b14708:
          if ((char *)(uVar6 + (long)puVar8) == (char *)0x0) {
            return 0;
          }
          return (ulong)(*(char *)(uVar6 + (long)puVar8) != '\0');
        }
        if (uVar7 != 0xffffffff) {
          return 0;
        }
      }
      puVar10 = (uint *)(ulong)*puVar8;
      if ((*puVar8 == 0) || (puVar8 == puVar10)) {
        return 0;
      }
      lVar1 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar10)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar8 + (lVar1 - (long)puVar10);
      if (lVar1 == 0) {
        return 0;
      }
      uVar6 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar10));
      *(undefined4 *)(puVar5 + 0x5c) = 0xfffffffe;
      if (uVar6 == 0) {
        return 0;
      }
      piVar12 = (int *)(lVar1 + 4);
      while (piVar12[-1] != 0x49129b27) {
        piVar12 = piVar12 + 2;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) {
          return 0;
        }
      }
      iVar9 = 0;
      if (*piVar12 != -1) {
        iVar9 = *piVar12;
      }
      *(int *)(puVar5 + 0x5c) = iVar9;
      if (*puVar8 == 0) {
        return 0;
      }
    } while( true );
  }
switchD_01b12e68_default:
  return 0;
}

