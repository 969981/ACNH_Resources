
/* WARNING: Type propagation algorithm not settling */

void FUN_027523f0(undefined2 *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined2 uVar7;
  uint *puVar8;
  uint uVar9;
  undefined2 *puVar10;
  ulong uVar11;
  uint *puVar12;
  int *piVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  char cVar18;
  
  puVar6 = PTR_DAT_04bb63f8;
  puVar5 = PTR_DAT_04bb63f0;
  lVar14 = *(long *)PTR_DAT_04bb2208;
  uVar15 = *(uint *)(lVar14 + 0x16e0);
  if (((int)uVar15 < 1) &&
     (((*(long *)(lVar14 + 0x15d0) == 0 ||
       (puVar8 = *(uint **)(*(long *)(lVar14 + 0x15d0) + 8), puVar8 == (uint *)0x0)) ||
      (uVar15 = *puVar8, uVar15 == 0)))) {
    return;
  }
  uVar16 = 0;
  cVar18 = *PTR_DAT_04bb63f0;
LAB_02752460:
  if (0 < (int)*(uint *)(lVar14 + 0x16e0)) {
    if (*(uint *)(lVar14 + 0x16e0) <= uVar16) goto LAB_02752454;
    uVar1 = uVar16;
    if (*(uint *)(lVar14 + 0x16d0) <= uVar16) {
      uVar1 = 0;
    }
    puVar8 = *(uint **)(*(long *)(lVar14 + 0x16d8) + (ulong)uVar1 * 8);
    if (puVar8 == (uint *)0x0) goto LAB_02752454;
LAB_0275248c:
    uVar1 = *puVar8;
    while (uVar1 != 0) {
      if (cVar18 == '\0') {
        cVar18 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
      }
      else {
        uVar11 = (ulong)*(uint *)(puVar6 + 8);
        if (-1 < (int)*(uint *)(puVar6 + 8)) {
          if (((ushort *)(uVar11 + (long)puVar8) == (ushort *)0x0) ||
             (*(ushort *)(uVar11 + (long)puVar8) < 0x100)) goto LAB_02752530;
          goto LAB_02752454;
        }
        if (uVar11 != 0xffffffff) goto LAB_02752530;
      }
      lVar3 = (long)puVar8 - (ulong)*puVar8;
      if (*puVar8 == 0) {
        uVar11 = 0xffffffff;
        goto LAB_02752530;
      }
      if (lVar3 == 0) {
        uVar11 = 0xffffffff;
        goto LAB_02752530;
      }
      lVar2 = 0xc;
      if (*(char *)(lVar3 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      if (lVar2 + lVar3 == 0) {
        uVar11 = 0xffffffff;
        goto LAB_02752530;
      }
      uVar11 = (ulong)*(ushort *)(lVar3 + 8);
      *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
      if (uVar11 == 0) {
        uVar11 = 0xfffffffe;
        goto LAB_02752530;
      }
      piVar13 = (int *)(lVar2 + lVar3 + 4);
      while (piVar13[-1] != 0x54706054) {
        piVar13 = piVar13 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) {
          uVar11 = 0xfffffffe;
          goto LAB_02752530;
        }
      }
      iVar17 = 0;
      if (*piVar13 != -1) {
        iVar17 = *piVar13;
      }
      *(int *)(puVar6 + 8) = iVar17;
      uVar1 = *puVar8;
    }
LAB_02752448:
    uVar7 = 0;
    goto LAB_0275244c;
  }
  if (((((*(long *)(lVar14 + 0x15d0) != 0) &&
        (puVar8 = *(uint **)(*(long *)(lVar14 + 0x15d0) + 8), puVar8 != (uint *)0x0)) &&
       ((*(uint *)(lVar14 + 0x15e8) <= uVar16 ||
        (*(char *)(*(long *)(lVar14 + 0x15f0) + (long)(int)uVar16) != '\0')))) &&
      ((uVar16 < *puVar8 && (puVar8[1] != 0)))) && ((ushort)puVar8[2] != 0)) {
    iVar17 = 0xc;
    if (*(char *)((long)puVar8 + 10) != '\0') {
      iVar17 = 0x1c;
    }
    puVar8 = (uint *)((ulong)(puVar8[1] * uVar16 + (uint)(ushort)puVar8[2] * 8 + iVar17) +
                     (long)puVar8);
    if (puVar8 != (uint *)0x0) goto LAB_0275248c;
  }
  goto LAB_02752454;
LAB_02752530:
  if (*puVar8 == 0) goto LAB_02752448;
  if (cVar18 != '\0') {
    if ((int)uVar11 < 0) {
      if ((uVar11 == 0xffffffff) && (uVar1 = *puVar8, uVar1 != 0)) goto LAB_0275256c;
    }
    else if ((ushort *)(uVar11 + (long)puVar8) != (ushort *)0x0) {
      uVar9 = (uint)*(ushort *)(uVar11 + (long)puVar8);
      uVar1 = *puVar8;
      goto joined_r0x02752654;
    }
LAB_027526a0:
    uVar9 = 0;
    uVar1 = *puVar8;
    goto joined_r0x02752654;
  }
  cVar18 = '\x01';
  *(undefined8 *)puVar6 = 0xffffffffffffffff;
  *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
  *puVar5 = 1;
  *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
  uVar1 = *puVar8;
  if (uVar1 == 0) goto LAB_027526a0;
LAB_0275256c:
  puVar12 = (uint *)(ulong)uVar1;
  if (puVar8 == puVar12) {
LAB_0275264c:
    uVar9 = 0;
    uVar1 = *puVar8;
    goto joined_r0x02752654;
  }
  lVar3 = 0xc;
  if (*(char *)((long)puVar8 + (10 - (long)puVar12)) != '\0') {
    lVar3 = 0x1c;
  }
  lVar3 = (long)puVar8 + (lVar3 - (long)puVar12);
  if (lVar3 == 0) goto LAB_0275264c;
  uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar12));
  *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
  if (uVar11 == 0) goto LAB_027526a0;
  puVar12 = (uint *)(lVar3 + 4);
  while (puVar12[-1] != 0x54706054) {
    puVar12 = puVar12 + 2;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) goto LAB_027526a0;
  }
  uVar11 = 0;
  if (*puVar12 != 0xffffffff) {
    uVar11 = (ulong)*puVar12;
  }
  *(int *)(puVar6 + 8) = (int)uVar11;
  goto LAB_02752530;
joined_r0x02752654:
  if (uVar1 == 0) goto LAB_02752748;
  if (cVar18 == '\0') {
    cVar18 = '\x01';
    *(undefined8 *)puVar6 = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
    *puVar5 = 1;
    *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
    uVar1 = *puVar8;
  }
  else {
    uVar4 = *(uint *)puVar6;
    if (-1 < (int)uVar4) {
      uVar7 = 0;
      if ((undefined2 *)((ulong)uVar4 + (long)puVar8) != (undefined2 *)0x0) {
        uVar7 = *(undefined2 *)((ulong)uVar4 + (long)puVar8);
      }
      goto LAB_0275274c;
    }
    if (uVar4 != 0xffffffff) goto LAB_02752748;
  }
  puVar12 = (uint *)(ulong)uVar1;
  if ((puVar12 == (uint *)0x0) || (puVar8 == puVar12)) goto LAB_02752748;
  lVar3 = 0xc;
  if (*(char *)((long)puVar8 + (10 - (long)puVar12)) != '\0') {
    lVar3 = 0x1c;
  }
  lVar3 = (long)puVar8 + (lVar3 - (long)puVar12);
  if (lVar3 == 0) goto LAB_02752748;
  uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar12));
  *(undefined4 *)puVar6 = 0xfffffffe;
  if (uVar11 == 0) goto LAB_02752748;
  piVar13 = (int *)(lVar3 + 4);
  while (piVar13[-1] != 0x797f5754) {
    piVar13 = piVar13 + 2;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) goto LAB_02752748;
  }
  iVar17 = 0;
  if (*piVar13 != -1) {
    iVar17 = *piVar13;
  }
  *(int *)puVar6 = iVar17;
  uVar1 = *puVar8;
  goto joined_r0x02752654;
LAB_02752748:
  uVar7 = 0;
LAB_0275274c:
  if (uVar9 < 0x100) {
    puVar10 = param_1 + uVar9;
  }
  else {
LAB_0275244c:
    puVar10 = param_1;
  }
  *puVar10 = uVar7;
LAB_02752454:
  uVar16 = uVar16 + 1;
  if (uVar16 == uVar15) {
    return;
  }
  goto LAB_02752460;
}

