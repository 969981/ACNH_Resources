
bool FUN_01affd70(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  char cVar11;
  
  puVar5 = PTR_DAT_04bbfe90;
  puVar4 = PTR_DAT_04bbfe88;
  puVar10 = *(uint **)(param_1 + 0x10);
  if (puVar10 == (uint *)0x0) {
    return false;
  }
  if (*puVar10 == 0) {
    return false;
  }
  cVar11 = *PTR_DAT_04bbfe88;
  do {
    if (cVar11 == '\0') {
      cVar11 = '\x01';
      *puVar4 = 1;
      memset(puVar5,0xff,0x1ac);
    }
    else {
      uVar8 = *(uint *)(puVar5 + 0x120);
      uVar9 = (ulong)uVar8;
      if (-1 < (int)uVar8) {
        if ((short *)(uVar9 + (long)puVar10) == (short *)0x0) {
          return false;
        }
        if (*(short *)(uVar9 + (long)puVar10) == -1) {
          return false;
        }
        puVar10 = *(uint **)(param_1 + 0x10);
        if ((puVar10 == (uint *)0x0) || (*puVar10 == 0)) goto LAB_01afff44;
        break;
      }
      if (uVar8 != 0xffffffff) {
        return false;
      }
    }
    puVar6 = (uint *)(ulong)*puVar10;
    if (*puVar10 == 0) {
      return false;
    }
    if (puVar10 == puVar6) {
      return false;
    }
    lVar3 = 0xc;
    if (*(char *)((long)puVar10 + (10 - (long)puVar6)) != '\0') {
      lVar3 = 0x1c;
    }
    lVar3 = (long)puVar10 + (lVar3 - (long)puVar6);
    if (lVar3 == 0) {
      return false;
    }
    uVar9 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar6));
    *(undefined4 *)(puVar5 + 0x120) = 0xfffffffe;
    if (uVar9 == 0) {
      return false;
    }
    piVar7 = (int *)(lVar3 + 4);
    while (piVar7[-1] != -0x34a14cc1) {
      piVar7 = piVar7 + 2;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) {
        return false;
      }
    }
    iVar2 = 0;
    if (*piVar7 != -1) {
      iVar2 = *piVar7;
    }
    *(int *)(puVar5 + 0x120) = iVar2;
    if (*puVar10 == 0) {
      return false;
    }
  } while( true );
LAB_01affeb0:
  if (-1 < (int)uVar9) {
    if ((ushort *)((long)puVar10 + uVar9) == (ushort *)0x0) {
LAB_01afff44:
      uVar8 = 0xffff;
    }
    else {
      uVar8 = (uint)*(ushort *)((long)puVar10 + uVar9);
    }
LAB_01afff48:
    puVar5 = PTR_DAT_04bbff50;
    puVar4 = PTR_DAT_04bbff48;
    uVar8 = uVar8 - *(ushort *)(DAT_0532a7c8 + 0x1f8);
    if (((*(uint *)(DAT_0532a7c8 + 0x1d8) <= uVar8) ||
        (puVar10 = *(uint **)(*(long *)(DAT_0532a7c8 + 0x1e0) + (long)(int)uVar8 * 8),
        puVar10 == (uint *)0x0)) || (*puVar10 == 0)) {
      return false;
    }
    cVar11 = *PTR_DAT_04bbff48;
    while( true ) {
      if (cVar11 == '\0') {
        cVar11 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0xe0) = 0xffffffffffffffff;
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
        *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x98) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0xa0) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0xa8) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0xb0) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0xb8) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0xc0) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 200) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0xd0) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0xd8) = 0xffffffffffffffff;
      }
      else {
        uVar8 = *(uint *)(puVar5 + 0x54);
        if (-1 < (int)uVar8) {
          if ((char *)((ulong)uVar8 + (long)puVar10) == (char *)0x0) {
            return false;
          }
          return *(char *)((ulong)uVar8 + (long)puVar10) != '\0';
        }
        if (uVar8 != 0xffffffff) {
          return false;
        }
      }
      puVar6 = (uint *)(ulong)*puVar10;
      if (*puVar10 == 0) {
        return false;
      }
      if (puVar10 == puVar6) break;
      lVar3 = 0xc;
      if (*(char *)((long)puVar10 + (10 - (long)puVar6)) != '\0') {
        lVar3 = 0x1c;
      }
      lVar3 = (long)puVar10 + (lVar3 - (long)puVar6);
      if (lVar3 == 0) {
        return false;
      }
      uVar9 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar6));
      *(undefined4 *)(puVar5 + 0x54) = 0xfffffffe;
      if (uVar9 == 0) {
        return false;
      }
      piVar7 = (int *)(lVar3 + 4);
      while (piVar7[-1] != -0x2b0bc4f5) {
        piVar7 = piVar7 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) {
          return false;
        }
      }
      iVar2 = 0;
      if (*piVar7 != -1) {
        iVar2 = *piVar7;
      }
      *(int *)(puVar5 + 0x54) = iVar2;
      if (*puVar10 == 0) {
        return false;
      }
    }
    return false;
  }
  if ((int)uVar9 != -1) goto LAB_01afff44;
  puVar6 = (uint *)(ulong)*puVar10;
  uVar8 = 0xffff;
  if ((*puVar10 == 0) || (puVar10 == puVar6)) goto LAB_01afff48;
  lVar3 = 0xc;
  if (*(char *)((long)puVar10 + (10 - (long)puVar6)) != '\0') {
    lVar3 = 0x1c;
  }
  lVar3 = (long)puVar10 + (lVar3 - (long)puVar6);
  if (lVar3 == 0) goto LAB_01afff44;
  uVar9 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar6));
  *(undefined4 *)(puVar5 + 0x120) = 0xfffffffe;
  if (uVar9 == 0) goto LAB_01afff44;
  puVar6 = (uint *)(lVar3 + 4);
  while (puVar6[-1] != 0xcb5eb33f) {
    puVar6 = puVar6 + 2;
    uVar9 = uVar9 - 1;
    if (uVar9 == 0) goto LAB_01afff44;
  }
  uVar1 = 0;
  if (*puVar6 != 0xffffffff) {
    uVar1 = *puVar6;
  }
  uVar9 = (ulong)uVar1;
  uVar8 = 0xffff;
  *(uint *)(puVar5 + 0x120) = uVar1;
  if (*puVar10 == 0) goto LAB_01afff48;
  goto LAB_01affeb0;
}

