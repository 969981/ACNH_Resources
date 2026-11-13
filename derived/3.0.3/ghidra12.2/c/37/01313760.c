
ushort FUN_01313760(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint *puVar9;
  ulong uVar10;
  uint *puVar11;
  char cVar12;
  int *piVar13;
  
  puVar8 = PTR_DAT_04bbbde0;
  puVar7 = PTR_DAT_04bbbdd8;
  puVar9 = *(uint **)(param_1 + 8);
  if (puVar9 == (uint *)0x0) {
    return 4;
  }
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0:
    break;
  case 1:
    if (*puVar9 != 0) {
      cVar12 = *PTR_DAT_04bbbdd8;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar8 = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
          *puVar7 = 1;
          *(undefined8 *)(puVar8 + 0xa0) = 0xffffffffffffffff;
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
          *(undefined8 *)(puVar8 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar4 = *(uint *)(puVar8 + 0x30);
          if (-1 < (int)uVar4) {
            if ((byte *)((ulong)uVar4 + (long)puVar9) == (byte *)0x0) {
              return 0;
            }
            bVar5 = *(byte *)((ulong)uVar4 + (long)puVar9);
            if (bVar5 < 0xd) {
              return (ushort)bVar5;
            }
            return 0;
          }
          if (uVar4 != 0xffffffff) {
            return 0;
          }
        }
        puVar11 = (uint *)(ulong)*puVar9;
        if (*puVar9 == 0) {
          return 0;
        }
        if (puVar9 == puVar11) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar11)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar9 + (lVar2 - (long)puVar11);
        if (lVar2 == 0) {
          return 0;
        }
        uVar10 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar11));
        *(undefined4 *)(puVar8 + 0x30) = 0xfffffffe;
        if (uVar10 == 0) {
          return 0;
        }
        piVar13 = (int *)(lVar2 + 4);
        while (piVar13[-1] != 0x5255a95f) {
          piVar13 = piVar13 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar13 != -1) {
          iVar1 = *piVar13;
        }
        *(int *)(puVar8 + 0x30) = iVar1;
      } while (*puVar9 != 0);
    }
    return 0;
  default:
    uVar4 = *puVar9;
    if (uVar4 != 0 && puVar9 != (uint *)(ulong)uVar4) {
      puVar11 = (uint *)((long)puVar9 - (long)(ulong)uVar4);
      if (((*puVar11 != 0) && (uVar4 = puVar11[1], uVar4 != 0)) && ((ulong)(ushort)puVar11[2] != 0))
      {
        lVar2 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar11 + lVar2 + (ulong)(ushort)puVar11[2] * 8;
        if (lVar2 != 0) {
          uVar3 = 0;
          if ((ulong)uVar4 != 0) {
            uVar3 = (uint)((ulong)((long)puVar9 - lVar2) / (ulong)uVar4);
          }
          if (*puVar11 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < DAT_05160318) &&
             (uVar6 = *(ushort *)(DAT_05160320 + (long)(int)uVar3 * 2), uVar6 < 0xd)) {
            return uVar6;
          }
        }
      }
    }
    return 0;
  case 3:
    if (*puVar9 != 0) {
      cVar12 = *PTR_DAT_04bbbdd8;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar8 = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
          *puVar7 = 1;
          *(undefined8 *)(puVar8 + 0xa0) = 0xffffffffffffffff;
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
          *(undefined8 *)(puVar8 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar4 = *(uint *)(puVar8 + 0x54);
          if (-1 < (int)uVar4) {
            if ((byte *)((ulong)uVar4 + (long)puVar9) == (byte *)0x0) {
              return 0;
            }
            bVar5 = *(byte *)((ulong)uVar4 + (long)puVar9);
            if (bVar5 < 0xd) {
              return (ushort)bVar5;
            }
            return 0;
          }
          if (uVar4 != 0xffffffff) {
            return 0;
          }
        }
        puVar11 = (uint *)(ulong)*puVar9;
        if (*puVar9 == 0) {
          return 0;
        }
        if (puVar9 == puVar11) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar11)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar9 + (lVar2 - (long)puVar11);
        if (lVar2 == 0) {
          return 0;
        }
        uVar10 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar11));
        *(undefined4 *)(puVar8 + 0x54) = 0xfffffffe;
        if (uVar10 == 0) {
          return 0;
        }
        piVar13 = (int *)(lVar2 + 4);
        while (piVar13[-1] != 0x7407c61) {
          piVar13 = piVar13 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar13 != -1) {
          iVar1 = *piVar13;
        }
        *(int *)(puVar8 + 0x54) = iVar1;
      } while (*puVar9 != 0);
    }
    return 0;
  }
  if (*puVar9 != 0) {
    cVar12 = *PTR_DAT_04bbbdd8;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar8 = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
        *puVar7 = 1;
        *(undefined8 *)(puVar8 + 0xa0) = 0xffffffffffffffff;
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
        *(undefined8 *)(puVar8 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x98) = 0xffffffffffffffff;
      }
      else {
        uVar4 = *(uint *)(puVar8 + 0x60);
        if (-1 < (int)uVar4) {
          if ((byte *)((ulong)uVar4 + (long)puVar9) == (byte *)0x0) {
            return 0;
          }
          bVar5 = *(byte *)((ulong)uVar4 + (long)puVar9);
          if (bVar5 < 0xd) {
            return (ushort)bVar5;
          }
          return 0;
        }
        if (uVar4 != 0xffffffff) {
          return 0;
        }
      }
      puVar11 = (uint *)(ulong)*puVar9;
      if (*puVar9 == 0) {
        return 0;
      }
      if (puVar9 == puVar11) {
        return 0;
      }
      lVar2 = 0xc;
      if (*(char *)((long)puVar9 + (10 - (long)puVar11)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar9 + (lVar2 - (long)puVar11);
      if (lVar2 == 0) {
        return 0;
      }
      uVar10 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar11));
      *(undefined4 *)(puVar8 + 0x60) = 0xfffffffe;
      if (uVar10 == 0) {
        return 0;
      }
      piVar13 = (int *)(lVar2 + 4);
      while (piVar13[-1] != 0x15f5d38f) {
        piVar13 = piVar13 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          return 0;
        }
      }
      iVar1 = 0;
      if (*piVar13 != -1) {
        iVar1 = *piVar13;
      }
      *(int *)(puVar8 + 0x60) = iVar1;
    } while (*puVar9 != 0);
  }
  return 0;
}

