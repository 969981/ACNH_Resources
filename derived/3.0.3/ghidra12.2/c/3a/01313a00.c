
byte FUN_01313a00(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint *puVar7;
  ulong uVar8;
  char cVar9;
  uint *puVar10;
  int *piVar11;
  
  puVar6 = PTR_DAT_04bbbde0;
  puVar5 = PTR_DAT_04bbbdd8;
  puVar7 = *(uint **)(param_1 + 8);
  if (puVar7 == (uint *)0x0) {
    return 4;
  }
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0:
    break;
  case 1:
    if (*puVar7 != 0) {
      cVar9 = *PTR_DAT_04bbbdd8;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0xa0) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar3 = *(uint *)(puVar6 + 0x7c);
          if (-1 < (int)uVar3) {
            if ((byte *)((ulong)uVar3 + (long)puVar7) == (byte *)0x0) {
              return 0;
            }
            bVar4 = *(byte *)((ulong)uVar3 + (long)puVar7);
            if (bVar4 < 0xd) {
              return bVar4;
            }
            return 0;
          }
          if (uVar3 != 0xffffffff) {
            return 0;
          }
        }
        puVar10 = (uint *)(ulong)*puVar7;
        if (*puVar7 == 0) {
          return 0;
        }
        if (puVar7 == puVar10) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar10)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar7 + (lVar2 - (long)puVar10);
        if (lVar2 == 0) {
          return 0;
        }
        uVar8 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar10));
        *(undefined4 *)(puVar6 + 0x7c) = 0xfffffffe;
        if (uVar8 == 0) {
          return 0;
        }
        piVar11 = (int *)(lVar2 + 4);
        while (piVar11[-1] != 0x1cd5342f) {
          piVar11 = piVar11 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar11 != -1) {
          iVar1 = *piVar11;
        }
        *(int *)(puVar6 + 0x7c) = iVar1;
      } while (*puVar7 != 0);
    }
    return 0;
  case 2:
    if (*puVar7 != 0) {
      cVar9 = *PTR_DAT_04bbbdd8;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0xa0) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar3 = *(uint *)(puVar6 + 0x78);
          if (-1 < (int)uVar3) {
            if ((byte *)((ulong)uVar3 + (long)puVar7) == (byte *)0x0) {
              return 0;
            }
            bVar4 = *(byte *)((ulong)uVar3 + (long)puVar7);
            if (bVar4 < 0xd) {
              return bVar4;
            }
            return 0;
          }
          if (uVar3 != 0xffffffff) {
            return 0;
          }
        }
        puVar10 = (uint *)(ulong)*puVar7;
        if (*puVar7 == 0) {
          return 0;
        }
        if (puVar7 == puVar10) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar10)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar7 + (lVar2 - (long)puVar10);
        if (lVar2 == 0) {
          return 0;
        }
        uVar8 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar10));
        *(undefined4 *)(puVar6 + 0x78) = 0xfffffffe;
        if (uVar8 == 0) {
          return 0;
        }
        piVar11 = (int *)(lVar2 + 4);
        while (piVar11[-1] != 0xe609bc1) {
          piVar11 = piVar11 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar11 != -1) {
          iVar1 = *piVar11;
        }
        *(int *)(puVar6 + 0x78) = iVar1;
      } while (*puVar7 != 0);
    }
    return 0;
  case 3:
    if (*puVar7 != 0) {
      cVar9 = *PTR_DAT_04bbbdd8;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0xa0) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar3 = *(uint *)(puVar6 + 0x88);
          if (-1 < (int)uVar3) {
            if ((byte *)((ulong)uVar3 + (long)puVar7) == (byte *)0x0) {
              return 0;
            }
            bVar4 = *(byte *)((ulong)uVar3 + (long)puVar7);
            if (bVar4 < 0xd) {
              return bVar4;
            }
            return 0;
          }
          if (uVar3 != 0xffffffff) {
            return 0;
          }
        }
        puVar10 = (uint *)(ulong)*puVar7;
        if (*puVar7 == 0) {
          return 0;
        }
        if (puVar7 == puVar10) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar10)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar7 + (lVar2 - (long)puVar10);
        if (lVar2 == 0) {
          return 0;
        }
        uVar8 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar10));
        *(undefined4 *)(puVar6 + 0x88) = 0xfffffffe;
        if (uVar8 == 0) {
          return 0;
        }
        piVar11 = (int *)(lVar2 + 4);
        while (piVar11[-1] != 0x49c0e111) {
          piVar11 = piVar11 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar11 != -1) {
          iVar1 = *piVar11;
        }
        *(int *)(puVar6 + 0x88) = iVar1;
      } while (*puVar7 != 0);
    }
    return 0;
  default:
    if (*puVar7 != 0) {
      cVar9 = *PTR_DAT_04bbbdd8;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0xa0) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar3 = *(uint *)(puVar6 + 100);
          if (-1 < (int)uVar3) {
            if ((byte *)((ulong)uVar3 + (long)puVar7) == (byte *)0x0) {
              return 0;
            }
            bVar4 = *(byte *)((ulong)uVar3 + (long)puVar7);
            if (bVar4 < 0xd) {
              return bVar4;
            }
            return 0;
          }
          if (uVar3 != 0xffffffff) {
            return 0;
          }
        }
        puVar10 = (uint *)(ulong)*puVar7;
        if (*puVar7 == 0) {
          return 0;
        }
        if (puVar7 == puVar10) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar10)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar7 + (lVar2 - (long)puVar10);
        if (lVar2 == 0) {
          return 0;
        }
        uVar8 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar10));
        *(undefined4 *)(puVar6 + 100) = 0xfffffffe;
        if (uVar8 == 0) {
          return 0;
        }
        piVar11 = (int *)(lVar2 + 4);
        while (piVar11[-1] != -0x74432aec) {
          piVar11 = piVar11 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar11 != -1) {
          iVar1 = *piVar11;
        }
        *(int *)(puVar6 + 100) = iVar1;
      } while (*puVar7 != 0);
    }
    return 0;
  }
  if (*puVar7 != 0) {
    cVar9 = *PTR_DAT_04bbbdd8;
    do {
      if (cVar9 == '\0') {
        cVar9 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined8 *)(puVar6 + 0xa0) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x98) = 0xffffffffffffffff;
      }
      else {
        uVar3 = *(uint *)(puVar6 + 0x8c);
        if (-1 < (int)uVar3) {
          if ((byte *)((ulong)uVar3 + (long)puVar7) == (byte *)0x0) {
            return 0;
          }
          bVar4 = *(byte *)((ulong)uVar3 + (long)puVar7);
          if (bVar4 < 0xd) {
            return bVar4;
          }
          return 0;
        }
        if (uVar3 != 0xffffffff) {
          return 0;
        }
      }
      puVar10 = (uint *)(ulong)*puVar7;
      if (*puVar7 == 0) {
        return 0;
      }
      if (puVar7 == puVar10) {
        return 0;
      }
      lVar2 = 0xc;
      if (*(char *)((long)puVar7 + (10 - (long)puVar10)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar7 + (lVar2 - (long)puVar10);
      if (lVar2 == 0) {
        return 0;
      }
      uVar8 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar10));
      *(undefined4 *)(puVar6 + 0x8c) = 0xfffffffe;
      if (uVar8 == 0) {
        return 0;
      }
      piVar11 = (int *)(lVar2 + 4);
      while (piVar11[-1] != 0x5b754eff) {
        piVar11 = piVar11 + 2;
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) {
          return 0;
        }
      }
      iVar1 = 0;
      if (*piVar11 != -1) {
        iVar1 = *piVar11;
      }
      *(int *)(puVar6 + 0x8c) = iVar1;
    } while (*puVar7 != 0);
  }
  return 0;
}

