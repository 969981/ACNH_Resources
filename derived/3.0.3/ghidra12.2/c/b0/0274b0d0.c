
/* WARNING: Type propagation algorithm not settling */

void FUN_0274b0d0(undefined2 *param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
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
  
  puVar5 = PTR_DAT_04bb6348;
  puVar4 = PTR_DAT_04bb6340;
  lVar14 = *(long *)PTR_DAT_04bb2208;
  uVar15 = *(uint *)(lVar14 + 0x1c0);
  if (((int)uVar15 < 1) &&
     (((*(long *)(lVar14 + 0xb0) == 0 ||
       (puVar8 = *(uint **)(*(long *)(lVar14 + 0xb0) + 8), puVar8 == (uint *)0x0)) ||
      (uVar15 = *puVar8, uVar15 == 0)))) {
    return;
  }
  uVar16 = 0;
  cVar18 = *PTR_DAT_04bb6340;
LAB_0274b148:
  if (0 < (int)*(uint *)(lVar14 + 0x1c0)) {
    if (*(uint *)(lVar14 + 0x1c0) <= uVar16) goto LAB_0274b13c;
    uVar6 = uVar16;
    if (*(uint *)(lVar14 + 0x1b0) <= uVar16) {
      uVar6 = 0;
    }
    puVar8 = *(uint **)(*(long *)(lVar14 + 0x1b8) + (ulong)uVar6 * 8);
    if (puVar8 == (uint *)0x0) goto LAB_0274b13c;
LAB_0274b174:
    uVar6 = *puVar8;
    while (uVar6 != 0) {
      if (cVar18 == '\0') {
        cVar18 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
      }
      else {
        uVar11 = (ulong)*(uint *)(puVar5 + 8);
        if (-1 < (int)*(uint *)(puVar5 + 8)) {
          if (((ushort *)(uVar11 + (long)puVar8) == (ushort *)0x0) ||
             (*(ushort *)(uVar11 + (long)puVar8) < 0x800)) goto LAB_0274b21c;
          goto LAB_0274b13c;
        }
        if (uVar11 != 0xffffffff) goto LAB_0274b21c;
      }
      lVar2 = (long)puVar8 - (ulong)*puVar8;
      if (*puVar8 == 0) {
        uVar11 = 0xffffffff;
        goto LAB_0274b21c;
      }
      if (lVar2 == 0) {
        uVar11 = 0xffffffff;
        goto LAB_0274b21c;
      }
      lVar1 = 0xc;
      if (*(char *)(lVar2 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      if (lVar1 + lVar2 == 0) {
        uVar11 = 0xffffffff;
        goto LAB_0274b21c;
      }
      uVar11 = (ulong)*(ushort *)(lVar2 + 8);
      *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
      if (uVar11 == 0) {
        uVar11 = 0xfffffffe;
        goto LAB_0274b21c;
      }
      piVar13 = (int *)(lVar1 + lVar2 + 4);
      while (piVar13[-1] != 0x54706054) {
        piVar13 = piVar13 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) {
          uVar11 = 0xfffffffe;
          goto LAB_0274b21c;
        }
      }
      iVar17 = 0;
      if (*piVar13 != -1) {
        iVar17 = *piVar13;
      }
      *(int *)(puVar5 + 8) = iVar17;
      uVar6 = *puVar8;
    }
LAB_0274b130:
    uVar7 = 0;
    goto LAB_0274b134;
  }
  if (((((*(long *)(lVar14 + 0xb0) != 0) &&
        (puVar8 = *(uint **)(*(long *)(lVar14 + 0xb0) + 8), puVar8 != (uint *)0x0)) &&
       ((*(uint *)(lVar14 + 200) <= uVar16 ||
        (*(char *)(*(long *)(lVar14 + 0xd0) + (long)(int)uVar16) != '\0')))) &&
      ((uVar16 < *puVar8 && (puVar8[1] != 0)))) && ((ushort)puVar8[2] != 0)) {
    iVar17 = 0xc;
    if (*(char *)((long)puVar8 + 10) != '\0') {
      iVar17 = 0x1c;
    }
    puVar8 = (uint *)((ulong)(puVar8[1] * uVar16 + (uint)(ushort)puVar8[2] * 8 + iVar17) +
                     (long)puVar8);
    if (puVar8 != (uint *)0x0) goto LAB_0274b174;
  }
  goto LAB_0274b13c;
LAB_0274b21c:
  if (*puVar8 == 0) goto LAB_0274b130;
  if (cVar18 != '\0') {
    if ((int)uVar11 < 0) {
      if ((uVar11 == 0xffffffff) && (uVar6 = *puVar8, uVar6 != 0)) goto LAB_0274b25c;
    }
    else if ((ushort *)(uVar11 + (long)puVar8) != (ushort *)0x0) {
      uVar9 = (uint)*(ushort *)(uVar11 + (long)puVar8);
      uVar6 = *puVar8;
      goto joined_r0x0274b344;
    }
LAB_0274b390:
    uVar9 = 0;
    uVar6 = *puVar8;
    goto joined_r0x0274b344;
  }
  cVar18 = '\x01';
  *(undefined8 *)puVar5 = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
  *puVar4 = 1;
  *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
  uVar6 = *puVar8;
  if (uVar6 == 0) goto LAB_0274b390;
LAB_0274b25c:
  puVar12 = (uint *)(ulong)uVar6;
  if (puVar8 == puVar12) {
LAB_0274b33c:
    uVar9 = 0;
    uVar6 = *puVar8;
    goto joined_r0x0274b344;
  }
  lVar2 = 0xc;
  if (*(char *)((long)puVar8 + (10 - (long)puVar12)) != '\0') {
    lVar2 = 0x1c;
  }
  lVar2 = (long)puVar8 + (lVar2 - (long)puVar12);
  if (lVar2 == 0) goto LAB_0274b33c;
  uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar12));
  *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
  if (uVar11 == 0) goto LAB_0274b390;
  puVar12 = (uint *)(lVar2 + 4);
  while (puVar12[-1] != 0x54706054) {
    puVar12 = puVar12 + 2;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) goto LAB_0274b390;
  }
  uVar11 = 0;
  if (*puVar12 != 0xffffffff) {
    uVar11 = (ulong)*puVar12;
  }
  *(int *)(puVar5 + 8) = (int)uVar11;
  goto LAB_0274b21c;
joined_r0x0274b344:
  if (uVar6 == 0) goto LAB_0274b438;
  if (cVar18 == '\0') {
    cVar18 = '\x01';
    *(undefined8 *)puVar5 = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
    *puVar4 = 1;
    *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
    uVar6 = *puVar8;
  }
  else {
    uVar3 = *(uint *)puVar5;
    if (-1 < (int)uVar3) {
      uVar6 = 0;
      if ((uint *)((ulong)uVar3 + (long)puVar8) != (uint *)0x0) {
        uVar6 = *(uint *)((ulong)uVar3 + (long)puVar8);
      }
      goto LAB_0274b43c;
    }
    if (uVar3 != 0xffffffff) goto LAB_0274b438;
  }
  puVar12 = (uint *)(ulong)uVar6;
  if ((puVar12 == (uint *)0x0) || (puVar8 == puVar12)) goto LAB_0274b438;
  lVar2 = 0xc;
  if (*(char *)((long)puVar8 + (10 - (long)puVar12)) != '\0') {
    lVar2 = 0x1c;
  }
  lVar2 = (long)puVar8 + (lVar2 - (long)puVar12);
  if (lVar2 == 0) goto LAB_0274b438;
  uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar12));
  *(undefined4 *)puVar5 = 0xfffffffe;
  if (uVar11 == 0) goto LAB_0274b438;
  piVar13 = (int *)(lVar2 + 4);
  while (piVar13[-1] != 0x4c24f1cf) {
    piVar13 = piVar13 + 2;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) goto LAB_0274b438;
  }
  iVar17 = 0;
  if (*piVar13 != -1) {
    iVar17 = *piVar13;
  }
  *(int *)puVar5 = iVar17;
  uVar6 = *puVar8;
  goto joined_r0x0274b344;
LAB_0274b438:
  uVar6 = 0;
LAB_0274b43c:
  if (0xfffe < uVar6) {
    uVar6 = 0xffff;
  }
  uVar7 = (undefined2)uVar6;
  if (uVar9 < 0x800) {
    puVar10 = param_1 + uVar9;
  }
  else {
LAB_0274b134:
    puVar10 = param_1;
  }
  *puVar10 = uVar7;
LAB_0274b13c:
  uVar16 = uVar16 + 1;
  if (uVar16 == uVar15) {
    return;
  }
  goto LAB_0274b148;
}

