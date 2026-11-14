
bool FUN_01aeec60(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *__s;
  ushort uVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  int *piVar9;
  uint *puVar10;
  char cVar11;
  
  __s = PTR_DAT_04bbfe90;
  puVar4 = PTR_DAT_04bbfe88;
  puVar10 = *(uint **)(param_1 + 0x10);
  if (puVar10 == (uint *)0x0) {
    return false;
  }
  uVar6 = *puVar10;
  if (uVar6 == 0 || puVar10 == (uint *)(ulong)uVar6) {
LAB_01aeec94:
    uVar6 = 0;
  }
  else {
    puVar8 = (uint *)((long)puVar10 - (long)(ulong)uVar6);
    uVar6 = 0;
    if (*puVar8 != 0) {
      uVar6 = puVar8[1];
      if ((uVar6 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
        lVar2 = 0xc;
        if (*(char *)((long)puVar8 + 10) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar8 + lVar2 + (ulong)(ushort)puVar8[2] * 8;
        if (lVar2 != 0) {
          uVar3 = 0;
          if ((ulong)uVar6 != 0) {
            uVar3 = (uint)((ulong)((long)puVar10 - lVar2) / (ulong)uVar6);
          }
          if (*puVar8 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < *(uint *)PTR_DAT_04bc0048) &&
             (uVar6 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar3 * 2),
             uVar6 < 0x52)) goto LAB_01aeec98;
        }
      }
      goto LAB_01aeec94;
    }
  }
LAB_01aeec98:
  if (uVar6 - 0x1f < 2) {
    return false;
  }
  uVar6 = *puVar10;
  uVar5 = 0;
  if ((uVar6 != 0) && (puVar10 != (uint *)(ulong)uVar6)) {
    puVar8 = (uint *)((long)puVar10 - (long)(ulong)uVar6);
    uVar5 = 0;
    if (*puVar8 != 0) {
      uVar6 = puVar8[1];
      if ((uVar6 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
        lVar2 = 0xc;
        if (*(char *)((long)puVar8 + 10) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar8 + lVar2 + (ulong)(ushort)puVar8[2] * 8;
        if (lVar2 != 0) {
          uVar3 = 0;
          if ((ulong)uVar6 != 0) {
            uVar3 = (uint)((ulong)((long)puVar10 - lVar2) / (ulong)uVar6);
          }
          if (*puVar8 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < *(uint *)PTR_DAT_04bc0048) &&
             (uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar3 * 2),
             uVar5 < 0x52)) goto LAB_01aeede0;
        }
      }
      uVar5 = 0;
    }
  }
LAB_01aeede0:
  if (puVar10 == (uint *)0x0) {
    return false;
  }
  if (uVar5 == 0x21) {
    return false;
  }
  uVar6 = *puVar10;
  if ((uVar6 == 0) || (puVar10 == (uint *)(ulong)uVar6)) {
    if (uVar6 == 0) {
      return false;
    }
  }
  else {
    puVar8 = (uint *)((long)puVar10 - (long)(ulong)uVar6);
    if (((*puVar8 != 0) && (uVar6 = puVar8[1], uVar6 != 0)) && ((ulong)(ushort)puVar8[2] != 0)) {
      lVar2 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar8 + lVar2 + (ulong)(ushort)puVar8[2] * 8;
      if (lVar2 != 0) {
        uVar3 = 0;
        if ((ulong)uVar6 != 0) {
          uVar3 = (uint)((ulong)((long)puVar10 - lVar2) / (ulong)uVar6);
        }
        if (*puVar8 <= uVar3) {
          uVar3 = 0xffffffff;
        }
        if ((uVar3 < *(uint *)PTR_DAT_04bc0048) &&
           (*(short *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar3 * 2) == 0x1e)) {
          return true;
        }
      }
    }
  }
  cVar11 = *PTR_DAT_04bbfe88;
  while( true ) {
    if (cVar11 == '\0') {
      cVar11 = '\x01';
      *puVar4 = 1;
      memset(__s,0xff,0x1ac);
    }
    else {
      uVar6 = *(uint *)(__s + 0x16c);
      if (-1 < (int)uVar6) {
        if ((char *)((ulong)uVar6 + (long)puVar10) == (char *)0x0) {
          return false;
        }
        return *(char *)((ulong)uVar6 + (long)puVar10) != '\0';
      }
      if (uVar6 != 0xffffffff) {
        return false;
      }
    }
    puVar8 = (uint *)(ulong)*puVar10;
    if (*puVar10 == 0) {
      return false;
    }
    if (puVar10 == puVar8) break;
    lVar2 = 0xc;
    if (*(char *)((long)puVar10 + (10 - (long)puVar8)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar10 + (lVar2 - (long)puVar8);
    if (lVar2 == 0) {
      return false;
    }
    uVar7 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar8));
    *(undefined4 *)(__s + 0x16c) = 0xfffffffe;
    if (uVar7 == 0) {
      return false;
    }
    piVar9 = (int *)(lVar2 + 4);
    while (piVar9[-1] != 0x147e658d) {
      piVar9 = piVar9 + 2;
      uVar7 = uVar7 - 1;
      if (uVar7 == 0) {
        return false;
      }
    }
    iVar1 = 0;
    if (*piVar9 != -1) {
      iVar1 = *piVar9;
    }
    *(int *)(__s + 0x16c) = iVar1;
    if (*puVar10 == 0) {
      return false;
    }
  }
  return false;
}

