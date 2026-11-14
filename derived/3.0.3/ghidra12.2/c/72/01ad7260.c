
int FUN_01ad7260(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint *puVar7;
  int *piVar8;
  uint uVar9;
  ulong uVar10;
  uint *puVar11;
  char cVar12;
  
  puVar6 = PTR_DAT_04bbfe90;
  puVar5 = PTR_DAT_04bbfe88;
  puVar11 = *(uint **)(param_1 + 0x10);
  if (puVar11 == (uint *)0x0) {
    return 0;
  }
  if (*puVar11 == 0) {
    return 0;
  }
  cVar12 = *PTR_DAT_04bbfe88;
  do {
    if (cVar12 == '\0') {
      cVar12 = '\x01';
      *puVar5 = 1;
      memset(puVar6,0xff,0x1ac);
    }
    else {
      uVar9 = *(uint *)(puVar6 + 0x120);
      uVar10 = (ulong)uVar9;
      if (-1 < (int)uVar9) {
        if ((short *)(uVar10 + (long)puVar11) == (short *)0x0) {
          return 0;
        }
        if (*(short *)(uVar10 + (long)puVar11) == -1) {
          return 0;
        }
        puVar11 = *(uint **)(param_1 + 0x10);
        if ((puVar11 == (uint *)0x0) || (*puVar11 == 0)) goto LAB_01ad7434;
        break;
      }
      if (uVar9 != 0xffffffff) {
        return 0;
      }
    }
    puVar7 = (uint *)(ulong)*puVar11;
    if (*puVar11 == 0) {
      return 0;
    }
    if (puVar11 == puVar7) {
      return 0;
    }
    lVar2 = 0xc;
    if (*(char *)((long)puVar11 + (10 - (long)puVar7)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar11 + (lVar2 - (long)puVar7);
    if (lVar2 == 0) {
      return 0;
    }
    uVar10 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar7));
    *(undefined4 *)(puVar6 + 0x120) = 0xfffffffe;
    if (uVar10 == 0) {
      return 0;
    }
    piVar8 = (int *)(lVar2 + 4);
    while (piVar8[-1] != -0x34a14cc1) {
      piVar8 = piVar8 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) {
        return 0;
      }
    }
    iVar3 = 0;
    if (*piVar8 != -1) {
      iVar3 = *piVar8;
    }
    *(int *)(puVar6 + 0x120) = iVar3;
    if (*puVar11 == 0) {
      return 0;
    }
  } while( true );
LAB_01ad73a0:
  if (-1 < (int)uVar10) {
    if ((ushort *)((long)puVar11 + uVar10) == (ushort *)0x0) {
LAB_01ad7434:
      uVar9 = 0xffff;
    }
    else {
      uVar9 = (uint)*(ushort *)((long)puVar11 + uVar10);
    }
LAB_01ad7438:
    puVar6 = PTR_DAT_04bbff50;
    puVar5 = PTR_DAT_04bbff48;
    uVar9 = uVar9 - *(ushort *)(DAT_0532a7c8 + 0x1f8);
    if ((*(uint *)(DAT_0532a7c8 + 0x1d8) <= uVar9) ||
       (puVar11 = *(uint **)(*(long *)(DAT_0532a7c8 + 0x1e0) + (long)(int)uVar9 * 8),
       puVar11 == (uint *)0x0)) {
      return 0;
    }
    if (*puVar11 == 0) {
      return 1;
    }
    cVar12 = *PTR_DAT_04bbff48;
    while( true ) {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined8 *)(puVar6 + 0xe0) = 0xffffffffffffffff;
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
        *(undefined8 *)(puVar6 + 0xa0) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0xa8) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0xb0) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0xb8) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0xc0) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 200) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0xd0) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0xd8) = 0xffffffffffffffff;
      }
      else {
        uVar9 = *(uint *)(puVar6 + 0x98);
        if (-1 < (int)uVar9) {
          if ((char *)((ulong)uVar9 + (long)puVar11) == (char *)0x0) {
            return 1;
          }
          iVar4 = (int)*(char *)((ulong)uVar9 + (long)puVar11);
          iVar3 = 0;
          if (iVar4 < 8) {
            iVar3 = iVar4 + 1;
          }
          return iVar3;
        }
        if (uVar9 != 0xffffffff) {
          return 1;
        }
      }
      puVar7 = (uint *)(ulong)*puVar11;
      if (*puVar11 == 0) {
        return 1;
      }
      if (puVar11 == puVar7) break;
      lVar2 = 0xc;
      if (*(char *)((long)puVar11 + (10 - (long)puVar7)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar11 + (lVar2 - (long)puVar7);
      if (lVar2 == 0) {
        return 1;
      }
      uVar10 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar7));
      *(undefined4 *)(puVar6 + 0x98) = 0xfffffffe;
      if (uVar10 == 0) {
        return 1;
      }
      piVar8 = (int *)(lVar2 + 4);
      while (piVar8[-1] != -0x4fcfb4f3) {
        piVar8 = piVar8 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          return 1;
        }
      }
      iVar3 = 0;
      if (*piVar8 != -1) {
        iVar3 = *piVar8;
      }
      *(int *)(puVar6 + 0x98) = iVar3;
      if (*puVar11 == 0) {
        return 1;
      }
    }
    return 1;
  }
  if ((int)uVar10 != -1) goto LAB_01ad7434;
  puVar7 = (uint *)(ulong)*puVar11;
  uVar9 = 0xffff;
  if ((*puVar11 == 0) || (puVar11 == puVar7)) goto LAB_01ad7438;
  lVar2 = 0xc;
  if (*(char *)((long)puVar11 + (10 - (long)puVar7)) != '\0') {
    lVar2 = 0x1c;
  }
  lVar2 = (long)puVar11 + (lVar2 - (long)puVar7);
  if (lVar2 == 0) goto LAB_01ad7434;
  uVar10 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar7));
  *(undefined4 *)(puVar6 + 0x120) = 0xfffffffe;
  if (uVar10 == 0) goto LAB_01ad7434;
  puVar7 = (uint *)(lVar2 + 4);
  while (puVar7[-1] != 0xcb5eb33f) {
    puVar7 = puVar7 + 2;
    uVar10 = uVar10 - 1;
    if (uVar10 == 0) goto LAB_01ad7434;
  }
  uVar1 = 0;
  if (*puVar7 != 0xffffffff) {
    uVar1 = *puVar7;
  }
  uVar10 = (ulong)uVar1;
  uVar9 = 0xffff;
  *(uint *)(puVar6 + 0x120) = uVar1;
  if (*puVar11 == 0) goto LAB_01ad7438;
  goto LAB_01ad73a0;
}

