
undefined4 FUN_02798cb0(undefined8 param_1,uint *param_2,int param_3)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  uint uVar10;
  uint *puVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  
  puVar6 = PTR_DAT_04bb6448;
  puVar5 = PTR_DAT_04bb6440;
  if (param_2 == (uint *)0x0) {
    return 0;
  }
  uVar3 = *param_2;
  if (uVar3 == 0) {
    return 0;
  }
  cVar9 = *PTR_DAT_04bb6440;
  while (uVar12 = (ulong)uVar3, cVar9 == '\0') {
    cVar9 = '\x01';
    *(undefined8 *)puVar6 = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
    *puVar5 = 1;
    *(undefined4 *)(puVar6 + 0x50) = 0xffffffff;
    *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
    uVar12 = (ulong)*param_2;
    if (uVar12 == 0) goto LAB_02798db4;
LAB_02798d3c:
    lVar13 = (long)param_2 - uVar12;
    if (lVar13 == 0) goto LAB_02798db4;
    lVar2 = 0xc;
    if (*(char *)(lVar13 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar13 == 0) goto LAB_02798db4;
    uVar12 = (ulong)*(ushort *)(lVar13 + 8);
    *(undefined4 *)(puVar6 + 0x1c) = 0xfffffffe;
    if (uVar12 == 0) goto LAB_02798db4;
    piVar14 = (int *)(lVar2 + lVar13 + 4);
    while (piVar14[-1] != 0x3b89953c) {
      piVar14 = piVar14 + 2;
      uVar12 = uVar12 - 1;
      if (uVar12 == 0) goto LAB_02798db4;
    }
    iVar4 = 0;
    if (*piVar14 != -1) {
      iVar4 = *piVar14;
    }
    *(int *)(puVar6 + 0x1c) = iVar4;
    uVar3 = *param_2;
    if (uVar3 == 0) {
      return 0;
    }
  }
  uVar3 = *(uint *)(puVar6 + 0x1c);
  if ((int)uVar3 < 0) {
    if ((uVar3 == 0xffffffff) && (uVar12 != 0)) goto LAB_02798d3c;
  }
  else if (((int *)((ulong)uVar3 + (long)param_2) != (int *)0x0) &&
          (iVar4 = *(int *)((ulong)uVar3 + (long)param_2), iVar4 != 0 && iVar4 <= param_3)) {
    return 5;
  }
LAB_02798db4:
  uVar3 = *param_2;
  if (uVar3 == 0) {
    return 0;
  }
  uVar10 = *(uint *)(puVar6 + 0x18);
  uVar7 = 5;
  while ((int)uVar10 < 0) {
    if ((uVar10 != 0xffffffff) || (lVar13 = (long)param_2 - (ulong)uVar3, lVar13 == 0))
    goto LAB_02798e80;
    lVar2 = 0xc;
    if (*(char *)(lVar13 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar13 == 0) goto LAB_02798e80;
    uVar12 = (ulong)*(ushort *)(lVar13 + 8);
    *(undefined4 *)(puVar6 + 0x18) = 0xfffffffe;
    if (uVar12 == 0) goto LAB_02798e80;
    puVar11 = (uint *)(lVar2 + lVar13 + 4);
    while (puVar11[-1] != 0x6e9bc8c) {
      puVar11 = puVar11 + 2;
      uVar12 = uVar12 - 1;
      if (uVar12 == 0) goto LAB_02798e80;
    }
    uVar10 = 0;
    if (*puVar11 != 0xffffffff) {
      uVar10 = *puVar11;
    }
    *(uint *)(puVar6 + 0x18) = uVar10;
    uVar3 = *param_2;
    if (uVar3 == 0) {
      return 0;
    }
  }
  uVar7 = 5;
  if ((int *)((long)param_2 + (ulong)uVar10) != (int *)0x0) {
    iVar4 = *(int *)((long)param_2 + (ulong)uVar10);
    uVar8 = 4;
    if (param_3 < iVar4) {
      uVar8 = 5;
    }
    bVar1 = 4;
    if (iVar4 != 0) {
      bVar1 = iVar4 <= param_3;
    }
    uVar7 = 5;
    if (iVar4 != 0) {
      uVar7 = uVar8;
    }
    if ((bVar1 | 4) != 4) {
      return uVar7;
    }
  }
LAB_02798e80:
  uVar3 = *param_2;
  if (uVar3 == 0) {
    return 0;
  }
  uVar10 = *(uint *)(puVar6 + 0x14);
  while ((int)uVar10 < 0) {
    if ((uVar10 != 0xffffffff) || (lVar13 = (long)param_2 - (ulong)uVar3, lVar13 == 0))
    goto LAB_02798f50;
    lVar2 = 0xc;
    if (*(char *)(lVar13 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar13 == 0) goto LAB_02798f50;
    uVar12 = (ulong)*(ushort *)(lVar13 + 8);
    *(undefined4 *)(puVar6 + 0x14) = 0xfffffffe;
    if (uVar12 == 0) goto LAB_02798f50;
    puVar11 = (uint *)(lVar2 + lVar13 + 4);
    while (puVar11[-1] != 0xb4c9609c) {
      puVar11 = puVar11 + 2;
      uVar12 = uVar12 - 1;
      if (uVar12 == 0) goto LAB_02798f50;
    }
    uVar10 = 0;
    if (*puVar11 != 0xffffffff) {
      uVar10 = *puVar11;
    }
    *(uint *)(puVar6 + 0x14) = uVar10;
    uVar3 = *param_2;
    if (uVar3 == 0) {
      return 0;
    }
  }
  if ((int *)((long)param_2 + (ulong)uVar10) != (int *)0x0) {
    iVar4 = *(int *)((long)param_2 + (ulong)uVar10);
    uVar8 = 3;
    if (param_3 < iVar4) {
      uVar8 = uVar7;
    }
    bVar1 = 4;
    if (iVar4 != 0) {
      uVar7 = uVar8;
      bVar1 = iVar4 <= param_3;
    }
    if ((bVar1 | 4) != 4) {
      return uVar7;
    }
  }
LAB_02798f50:
  uVar3 = *param_2;
  if (uVar3 == 0) {
    return 0;
  }
  uVar10 = *(uint *)(puVar6 + 0x10);
  while ((int)uVar10 < 0) {
    if ((uVar10 != 0xffffffff) || (lVar13 = (long)param_2 - (ulong)uVar3, lVar13 == 0))
    goto LAB_02799020;
    lVar2 = 0xc;
    if (*(char *)(lVar13 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar13 == 0) goto LAB_02799020;
    uVar12 = (ulong)*(ushort *)(lVar13 + 8);
    *(undefined4 *)(puVar6 + 0x10) = 0xfffffffe;
    if (uVar12 == 0) goto LAB_02799020;
    puVar11 = (uint *)(lVar2 + lVar13 + 4);
    while (puVar11[-1] != 0x89a9492c) {
      puVar11 = puVar11 + 2;
      uVar12 = uVar12 - 1;
      if (uVar12 == 0) goto LAB_02799020;
    }
    uVar10 = 0;
    if (*puVar11 != 0xffffffff) {
      uVar10 = *puVar11;
    }
    *(uint *)(puVar6 + 0x10) = uVar10;
    uVar3 = *param_2;
    if (uVar3 == 0) {
      return 0;
    }
  }
  if ((int *)((long)param_2 + (ulong)uVar10) != (int *)0x0) {
    iVar4 = *(int *)((long)param_2 + (ulong)uVar10);
    uVar8 = 2;
    if (param_3 < iVar4) {
      uVar8 = uVar7;
    }
    bVar1 = 4;
    if (iVar4 != 0) {
      uVar7 = uVar8;
      bVar1 = iVar4 <= param_3;
    }
    if ((bVar1 | 4) != 4) {
      return uVar7;
    }
  }
LAB_02799020:
  uVar3 = *param_2;
  if (uVar3 == 0) {
    return 0;
  }
  uVar10 = *(uint *)(puVar6 + 0xc);
  while( true ) {
    if (-1 < (int)uVar10) {
      if ((int *)((long)param_2 + (ulong)uVar10) == (int *)0x0) {
        return 0;
      }
      iVar4 = *(int *)((long)param_2 + (ulong)uVar10);
      uVar8 = uVar7;
      if (iVar4 <= param_3) {
        uVar8 = 1;
      }
      bVar1 = 4;
      if (iVar4 != 0) {
        uVar7 = uVar8;
        bVar1 = iVar4 <= param_3;
      }
      if ((bVar1 | 4) == 4) {
        return 0;
      }
      return uVar7;
    }
    if (uVar10 != 0xffffffff) {
      return 0;
    }
    lVar13 = (long)param_2 - (ulong)uVar3;
    if (lVar13 == 0) break;
    lVar2 = 0xc;
    if (*(char *)(lVar13 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar13 == 0) {
      return 0;
    }
    uVar12 = (ulong)*(ushort *)(lVar13 + 8);
    *(undefined4 *)(puVar6 + 0xc) = 0xfffffffe;
    if (uVar12 == 0) {
      return 0;
    }
    puVar11 = (uint *)(lVar2 + lVar13 + 4);
    while (puVar11[-1] != 0xce0933fc) {
      puVar11 = puVar11 + 2;
      uVar12 = uVar12 - 1;
      if (uVar12 == 0) {
        return 0;
      }
    }
    uVar10 = 0;
    if (*puVar11 != 0xffffffff) {
      uVar10 = *puVar11;
    }
    *(uint *)(puVar6 + 0xc) = uVar10;
    uVar3 = *param_2;
    if (uVar3 == 0) {
      return 0;
    }
  }
  return 0;
}

