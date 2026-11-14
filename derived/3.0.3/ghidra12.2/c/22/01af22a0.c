
uint FUN_01af22a0(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  uint uVar10;
  ulong uVar11;
  uint *puVar12;
  char cVar13;
  
  puVar6 = PTR_DAT_04bbfe90;
  puVar5 = PTR_DAT_04bbfe88;
  puVar12 = *(uint **)(param_1 + 0x10);
  if (puVar12 == (uint *)0x0) {
    return 0;
  }
  if (*puVar12 == 0) {
    return 0;
  }
  cVar13 = *PTR_DAT_04bbfe88;
  do {
    if (cVar13 == '\0') {
      cVar13 = '\x01';
      *puVar5 = 1;
      memset(puVar6,0xff,0x1ac);
    }
    else {
      uVar10 = *(uint *)(puVar6 + 0x120);
      uVar11 = (ulong)uVar10;
      if (-1 < (int)uVar10) {
        if ((short *)(uVar11 + (long)puVar12) == (short *)0x0) {
          return 0;
        }
        if (*(short *)(uVar11 + (long)puVar12) == -1) {
          return 0;
        }
        puVar12 = *(uint **)(param_1 + 0x10);
        if ((puVar12 == (uint *)0x0) || (*puVar12 == 0)) goto LAB_01af2474;
        break;
      }
      if (uVar10 != 0xffffffff) {
        return 0;
      }
    }
    puVar8 = (uint *)(ulong)*puVar12;
    if (*puVar12 == 0) {
      return 0;
    }
    if (puVar12 == puVar8) {
      return 0;
    }
    lVar3 = 0xc;
    if (*(char *)((long)puVar12 + (10 - (long)puVar8)) != '\0') {
      lVar3 = 0x1c;
    }
    lVar3 = (long)puVar12 + (lVar3 - (long)puVar8);
    if (lVar3 == 0) {
      return 0;
    }
    uVar11 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar8));
    *(undefined4 *)(puVar6 + 0x120) = 0xfffffffe;
    if (uVar11 == 0) {
      return 0;
    }
    piVar9 = (int *)(lVar3 + 4);
    while (piVar9[-1] != -0x34a14cc1) {
      piVar9 = piVar9 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) {
        return 0;
      }
    }
    iVar7 = 0;
    if (*piVar9 != -1) {
      iVar7 = *piVar9;
    }
    *(int *)(puVar6 + 0x120) = iVar7;
    if (*puVar12 == 0) {
      return 0;
    }
  } while( true );
LAB_01af23e0:
  if ((int)uVar11 < 0) {
    if ((int)uVar11 != -1) goto LAB_01af2474;
    puVar8 = (uint *)(ulong)*puVar12;
    uVar10 = 0xffff;
    if ((*puVar12 == 0) || (puVar12 == puVar8)) goto LAB_01af2478;
    lVar3 = 0xc;
    if (*(char *)((long)puVar12 + (10 - (long)puVar8)) != '\0') {
      lVar3 = 0x1c;
    }
    lVar3 = (long)puVar12 + (lVar3 - (long)puVar8);
    if (lVar3 == 0) goto LAB_01af2474;
    uVar11 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar8));
    *(undefined4 *)(puVar6 + 0x120) = 0xfffffffe;
    if (uVar11 == 0) goto LAB_01af2474;
    puVar8 = (uint *)(lVar3 + 4);
    while (puVar8[-1] != 0xcb5eb33f) {
      puVar8 = puVar8 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) goto LAB_01af2474;
    }
    uVar1 = 0;
    if (*puVar8 != 0xffffffff) {
      uVar1 = *puVar8;
    }
    uVar11 = (ulong)uVar1;
    uVar10 = 0xffff;
    *(uint *)(puVar6 + 0x120) = uVar1;
    if (*puVar12 == 0) goto LAB_01af2478;
    goto LAB_01af23e0;
  }
  if ((ushort *)((long)puVar12 + uVar11) == (ushort *)0x0) {
LAB_01af2474:
    uVar10 = 0xffff;
  }
  else {
    uVar10 = (uint)*(ushort *)((long)puVar12 + uVar11);
  }
LAB_01af2478:
  uVar10 = uVar10 - *(ushort *)(DAT_0532a7c8 + 0x1f8);
  if ((*(uint *)(DAT_0532a7c8 + 0x1d8) <= uVar10) ||
     (puVar12 = *(uint **)(*(long *)(DAT_0532a7c8 + 0x1e0) + (long)(int)uVar10 * 8),
     puVar12 == (uint *)0x0)) {
    return 0;
  }
  iVar7 = FUN_01ad7260(param_1);
  puVar6 = PTR_DAT_04bbff50;
  puVar5 = PTR_DAT_04bbff48;
  if (*puVar12 == 0) {
LAB_01af25f4:
    if (0 < iVar7) {
      iVar7 = 1;
    }
    return iVar7 - 1;
  }
  cVar13 = *PTR_DAT_04bbff48;
  do {
    if (cVar13 == '\0') {
      cVar13 = '\x01';
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
      uVar10 = *(uint *)(puVar6 + 0x9c);
      if (-1 < (int)uVar10) {
        if ((byte *)((ulong)uVar10 + (long)puVar12) != (byte *)0x0) {
          bVar4 = *(byte *)((ulong)uVar10 + (long)puVar12);
          uVar10 = (uint)bVar4;
          if ((int)(iVar7 - 1U) <= (int)(uint)bVar4) {
            uVar10 = iVar7 - 1U;
          }
          uVar1 = 0;
          if (-1 < (char)bVar4) {
            uVar1 = uVar10;
          }
          return uVar1;
        }
        goto LAB_01af25f4;
      }
      if (uVar10 != 0xffffffff) goto LAB_01af25f4;
    }
    puVar8 = (uint *)(ulong)*puVar12;
    if ((*puVar12 == 0) || (puVar12 == puVar8)) goto LAB_01af25f4;
    lVar3 = 0xc;
    if (*(char *)((long)puVar12 + (10 - (long)puVar8)) != '\0') {
      lVar3 = 0x1c;
    }
    lVar3 = (long)puVar12 + (lVar3 - (long)puVar8);
    if (lVar3 == 0) goto LAB_01af25f4;
    uVar11 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar8));
    *(undefined4 *)(puVar6 + 0x9c) = 0xfffffffe;
    if (uVar11 == 0) goto LAB_01af25f4;
    piVar9 = (int *)(lVar3 + 4);
    while (piVar9[-1] != -0x1fa9cafd) {
      piVar9 = piVar9 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) goto LAB_01af25f4;
    }
    iVar2 = 0;
    if (*piVar9 != -1) {
      iVar2 = *piVar9;
    }
    *(int *)(puVar6 + 0x9c) = iVar2;
    if (*puVar12 == 0) goto LAB_01af25f4;
  } while( true );
}

