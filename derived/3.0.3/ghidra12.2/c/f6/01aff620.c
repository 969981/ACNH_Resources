
ulong FUN_01aff620(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  uint *puVar7;
  int *piVar8;
  uint uVar9;
  uint *puVar10;
  char cVar11;
  
  uVar6 = FUN_01afcfa0();
  puVar5 = PTR_DAT_04bbfe90;
  puVar4 = PTR_DAT_04bbfe88;
  if ((int)uVar6 == 0) {
    return uVar6;
  }
  puVar10 = *(uint **)(param_1 + 0x10);
  if (puVar10 == (uint *)0x0) {
    return 0;
  }
  if (*puVar10 == 0) {
    return 0;
  }
  cVar11 = *PTR_DAT_04bbfe88;
  do {
    if (cVar11 == '\0') {
      cVar11 = '\x01';
      *puVar4 = 1;
      memset(puVar5,0xff,0x1ac);
    }
    else {
      uVar9 = *(uint *)(puVar5 + 0x120);
      uVar6 = (ulong)uVar9;
      if (-1 < (int)uVar9) {
        if ((short *)(uVar6 + (long)puVar10) == (short *)0x0) {
          return 0;
        }
        if (*(short *)(uVar6 + (long)puVar10) == -1) {
          return 0;
        }
        puVar10 = *(uint **)(param_1 + 0x10);
        if ((puVar10 == (uint *)0x0) || (*puVar10 == 0)) goto LAB_01aff7f0;
        break;
      }
      if (uVar9 != 0xffffffff) {
        return 0;
      }
    }
    puVar7 = (uint *)(ulong)*puVar10;
    if (*puVar10 == 0) {
      return 0;
    }
    if (puVar10 == puVar7) {
      return 0;
    }
    lVar3 = 0xc;
    if (*(char *)((long)puVar10 + (10 - (long)puVar7)) != '\0') {
      lVar3 = 0x1c;
    }
    lVar3 = (long)puVar10 + (lVar3 - (long)puVar7);
    if (lVar3 == 0) {
      return 0;
    }
    uVar6 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar7));
    *(undefined4 *)(puVar5 + 0x120) = 0xfffffffe;
    if (uVar6 == 0) {
      return 0;
    }
    piVar8 = (int *)(lVar3 + 4);
    while (piVar8[-1] != -0x34a14cc1) {
      piVar8 = piVar8 + 2;
      uVar6 = uVar6 - 1;
      if (uVar6 == 0) {
        return 0;
      }
    }
    iVar2 = 0;
    if (*piVar8 != -1) {
      iVar2 = *piVar8;
    }
    *(int *)(puVar5 + 0x120) = iVar2;
    if (*puVar10 == 0) {
      return 0;
    }
  } while( true );
LAB_01aff75c:
  if (-1 < (int)uVar6) {
    if ((ushort *)((long)puVar10 + uVar6) == (ushort *)0x0) {
LAB_01aff7f0:
      uVar9 = 0xffff;
    }
    else {
      uVar9 = (uint)*(ushort *)((long)puVar10 + uVar6);
    }
LAB_01aff7f4:
    puVar5 = PTR_DAT_04bbff50;
    puVar4 = PTR_DAT_04bbff48;
    uVar9 = uVar9 - *(ushort *)(DAT_0532a7c8 + 0x1f8);
    if (((*(uint *)(DAT_0532a7c8 + 0x1d8) <= uVar9) ||
        (puVar10 = *(uint **)(*(long *)(DAT_0532a7c8 + 0x1e0) + (long)(int)uVar9 * 8),
        puVar10 == (uint *)0x0)) || (*puVar10 == 0)) {
      return 0;
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
        uVar9 = *(uint *)(puVar5 + 0xa8);
        if (-1 < (int)uVar9) {
          if ((char *)((ulong)uVar9 + (long)puVar10) == (char *)0x0) {
            return 0;
          }
          return (ulong)(*(char *)((ulong)uVar9 + (long)puVar10) != '\0');
        }
        if (uVar9 != 0xffffffff) {
          return 0;
        }
      }
      puVar7 = (uint *)(ulong)*puVar10;
      if (*puVar10 == 0) {
        return 0;
      }
      if (puVar10 == puVar7) break;
      lVar3 = 0xc;
      if (*(char *)((long)puVar10 + (10 - (long)puVar7)) != '\0') {
        lVar3 = 0x1c;
      }
      lVar3 = (long)puVar10 + (lVar3 - (long)puVar7);
      if (lVar3 == 0) {
        return 0;
      }
      uVar6 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar7));
      *(undefined4 *)(puVar5 + 0xa8) = 0xfffffffe;
      if (uVar6 == 0) {
        return 0;
      }
      piVar8 = (int *)(lVar3 + 4);
      while (piVar8[-1] != 0x62c23ed0) {
        piVar8 = piVar8 + 2;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) {
          return 0;
        }
      }
      iVar2 = 0;
      if (*piVar8 != -1) {
        iVar2 = *piVar8;
      }
      *(int *)(puVar5 + 0xa8) = iVar2;
      if (*puVar10 == 0) {
        return 0;
      }
    }
    return 0;
  }
  if ((int)uVar6 != -1) goto LAB_01aff7f0;
  puVar7 = (uint *)(ulong)*puVar10;
  uVar9 = 0xffff;
  if ((*puVar10 == 0) || (puVar10 == puVar7)) goto LAB_01aff7f4;
  lVar3 = 0xc;
  if (*(char *)((long)puVar10 + (10 - (long)puVar7)) != '\0') {
    lVar3 = 0x1c;
  }
  lVar3 = (long)puVar10 + (lVar3 - (long)puVar7);
  if (lVar3 == 0) goto LAB_01aff7f0;
  uVar6 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar7));
  *(undefined4 *)(puVar5 + 0x120) = 0xfffffffe;
  if (uVar6 == 0) goto LAB_01aff7f0;
  puVar7 = (uint *)(lVar3 + 4);
  while (puVar7[-1] != 0xcb5eb33f) {
    puVar7 = puVar7 + 2;
    uVar6 = uVar6 - 1;
    if (uVar6 == 0) goto LAB_01aff7f0;
  }
  uVar1 = 0;
  if (*puVar7 != 0xffffffff) {
    uVar1 = *puVar7;
  }
  uVar6 = (ulong)uVar1;
  uVar9 = 0xffff;
  *(uint *)(puVar5 + 0x120) = uVar1;
  if (*puVar10 == 0) goto LAB_01aff7f4;
  goto LAB_01aff75c;
}

