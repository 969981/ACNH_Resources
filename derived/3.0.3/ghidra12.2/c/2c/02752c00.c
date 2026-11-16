
/* WARNING: Type propagation algorithm not settling */

void FUN_02752c00(undefined2 *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  char cVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  undefined2 uVar16;
  uint *puVar17;
  uint uVar18;
  undefined2 *puVar19;
  uint *puVar20;
  ulong uVar21;
  int *piVar22;
  
  puVar10 = PTR_DAT_04bc3a80;
  puVar9 = PTR_DAT_04bc39f8;
  puVar8 = PTR_DAT_04bb63f8;
  puVar7 = PTR_DAT_04bb63f0;
  puVar6 = PTR_DAT_04bb6298;
  lVar13 = *(long *)PTR_DAT_04bb2208;
  uVar14 = *(uint *)(lVar13 + 0x16e0);
  if (((int)uVar14 < 1) &&
     (((*(long *)(lVar13 + 0x15d0) == 0 ||
       (puVar17 = *(uint **)(*(long *)(lVar13 + 0x15d0) + 8), puVar17 == (uint *)0x0)) ||
      (uVar14 = *puVar17, uVar14 == 0)))) {
    return;
  }
  uVar15 = 0;
  cVar12 = *PTR_DAT_04bb63f0;
LAB_02752cac:
  if (0 < (int)*(uint *)(lVar13 + 0x16e0)) {
    if (*(uint *)(lVar13 + 0x16e0) <= uVar15) goto LAB_02752ca0;
    uVar1 = uVar15;
    if (*(uint *)(lVar13 + 0x16d0) <= uVar15) {
      uVar1 = 0;
    }
    puVar17 = *(uint **)(*(long *)(lVar13 + 0x16d8) + (ulong)uVar1 * 8);
    if (puVar17 == (uint *)0x0) goto LAB_02752ca0;
LAB_02752cd8:
    if (*(int *)(puVar10 + 0x38) != 0x43080996) {
      uVar5 = *(ushort *)puVar6;
      if ((long)(short)uVar5 != 0xffffffffffffffff) {
        puVar20 = (uint *)(puVar9 + ((long)(short)uVar5 & 0xffffffffU) * 8);
        if (0xff < uVar5) {
          puVar20 = (uint *)puVar9;
        }
        if ((*puVar20 >> 5 & 1) != 0) goto LAB_02752ca0;
      }
      while (*puVar17 != 0) {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar8 = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
          *puVar7 = 1;
          *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
        }
        else {
          uVar1 = *(uint *)(puVar8 + 0x10);
          if (-1 < (int)uVar1) {
            if (((char *)((ulong)uVar1 + (long)puVar17) != (char *)0x0) &&
               (*(char *)((ulong)uVar1 + (long)puVar17) != '\0')) {
              uVar1 = *puVar17;
              goto joined_r0x02752fd4;
            }
            break;
          }
          if (uVar1 != 0xffffffff) break;
        }
        lVar2 = (long)puVar17 - (ulong)*puVar17;
        if ((*puVar17 == 0) || (lVar2 == 0)) break;
        lVar3 = 0xc;
        if (*(char *)(lVar2 + 10) != '\0') {
          lVar3 = 0x1c;
        }
        if (lVar3 + lVar2 == 0) break;
        uVar21 = (ulong)*(ushort *)(lVar2 + 8);
        *(undefined4 *)(puVar8 + 0x10) = 0xfffffffe;
        if (uVar21 == 0) break;
        piVar22 = (int *)(lVar3 + lVar2 + 4);
        while (piVar22[-1] != 0x3c7fb88f) {
          piVar22 = piVar22 + 2;
          uVar21 = uVar21 - 1;
          if (uVar21 == 0) goto LAB_02752ca0;
        }
        iVar11 = 0;
        if (*piVar22 != -1) {
          iVar11 = *piVar22;
        }
        *(int *)(puVar8 + 0x10) = iVar11;
      }
      goto LAB_02752ca0;
    }
    uVar1 = *puVar17;
    while (uVar1 != 0) {
      if (cVar12 != '\0') {
        uVar1 = *(uint *)(puVar8 + 8);
        if ((int)uVar1 < 0) {
          if ((uVar1 == 0xffffffff) && (uVar1 = *puVar17, uVar1 != 0)) goto LAB_02752d48;
        }
        else if ((ushort *)((ulong)uVar1 + (long)puVar17) != (ushort *)0x0) {
          uVar18 = (uint)*(ushort *)((ulong)uVar1 + (long)puVar17);
          uVar1 = *puVar17;
          goto joined_r0x02752f98;
        }
LAB_02752d98:
        uVar18 = 0;
        uVar1 = *puVar17;
        goto joined_r0x02752f98;
      }
      cVar12 = '\x01';
      *(undefined8 *)puVar8 = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
      *puVar7 = 1;
      *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
      uVar1 = *puVar17;
      if (uVar1 == 0) goto LAB_02752d98;
LAB_02752d48:
      puVar20 = (uint *)(ulong)uVar1;
      if (puVar17 == puVar20) {
LAB_02752f90:
        uVar18 = 0;
        uVar1 = *puVar17;
        goto joined_r0x02752f98;
      }
      lVar2 = 0xc;
      if (*(char *)((long)puVar17 + (10 - (long)puVar20)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar17 + (lVar2 - (long)puVar20);
      if (lVar2 == 0) goto LAB_02752f90;
      uVar21 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar20));
      *(undefined4 *)(puVar8 + 8) = 0xfffffffe;
      if (uVar21 == 0) goto LAB_02752d98;
      piVar22 = (int *)(lVar2 + 4);
      while (piVar22[-1] != 0x54706054) {
        piVar22 = piVar22 + 2;
        uVar21 = uVar21 - 1;
        if (uVar21 == 0) goto LAB_02752d98;
      }
      iVar11 = 0;
      if (*piVar22 != -1) {
        iVar11 = *piVar22;
      }
      *(int *)(puVar8 + 8) = iVar11;
      uVar1 = *puVar17;
    }
LAB_02752c8c:
    uVar16 = 0;
    goto LAB_02752c90;
  }
  if (((((*(long *)(lVar13 + 0x15d0) != 0) &&
        (puVar17 = *(uint **)(*(long *)(lVar13 + 0x15d0) + 8), puVar17 != (uint *)0x0)) &&
       ((*(uint *)(lVar13 + 0x15e8) <= uVar15 ||
        (*(char *)(*(long *)(lVar13 + 0x15f0) + (long)(int)uVar15) != '\0')))) &&
      ((uVar15 < *puVar17 && (puVar17[1] != 0)))) && ((ushort)puVar17[2] != 0)) {
    iVar11 = 0xc;
    if (*(char *)((long)puVar17 + 10) != '\0') {
      iVar11 = 0x1c;
    }
    puVar17 = (uint *)((ulong)(puVar17[1] * uVar15 + (uint)(ushort)puVar17[2] * 8 + iVar11) +
                      (long)puVar17);
    if (puVar17 != (uint *)0x0) goto LAB_02752cd8;
  }
  goto LAB_02752ca0;
joined_r0x02752fd4:
  if (uVar1 == 0) goto LAB_02752c8c;
  if (cVar12 != '\0') {
    uVar1 = *(uint *)(puVar8 + 8);
    if ((int)uVar1 < 0) {
      if (uVar1 == 0xffffffff) goto LAB_02753000;
      goto LAB_02753078;
    }
    uVar18 = 0;
    if ((ushort *)((ulong)uVar1 + (long)puVar17) != (ushort *)0x0) {
      uVar18 = (uint)*(ushort *)((ulong)uVar1 + (long)puVar17);
    }
LAB_0275307c:
    uVar1 = *puVar17;
    goto joined_r0x02753080;
  }
  cVar12 = '\x01';
  *(undefined8 *)puVar8 = 0xffffffffffffffff;
  *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
  *puVar7 = 1;
  *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
LAB_02753000:
  puVar20 = (uint *)(ulong)*puVar17;
  uVar18 = 0;
  if (*puVar17 == 0) goto LAB_0275307c;
  if (puVar17 == puVar20) {
LAB_02753078:
    uVar18 = 0;
    goto LAB_0275307c;
  }
  lVar2 = 0xc;
  if (*(char *)((long)puVar17 + (10 - (long)puVar20)) != '\0') {
    lVar2 = 0x1c;
  }
  lVar2 = (long)puVar17 + (lVar2 - (long)puVar20);
  if (lVar2 == 0) goto LAB_02753078;
  uVar21 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar20));
  *(undefined4 *)(puVar8 + 8) = 0xfffffffe;
  uVar18 = 0;
  if (uVar21 == 0) goto LAB_0275307c;
  piVar22 = (int *)(lVar2 + 4);
  while (piVar22[-1] != 0x54706054) {
    piVar22 = piVar22 + 2;
    uVar21 = uVar21 - 1;
    if (uVar21 == 0) {
      uVar18 = 0;
      goto LAB_0275307c;
    }
  }
  iVar11 = 0;
  if (*piVar22 != -1) {
    iVar11 = *piVar22;
  }
  *(int *)(puVar8 + 8) = iVar11;
  uVar1 = *puVar17;
  goto joined_r0x02752fd4;
joined_r0x02753080:
  if (uVar1 == 0) goto LAB_02753118;
  if (cVar12 == '\0') {
    cVar12 = '\x01';
    *(undefined8 *)puVar8 = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    *puVar7 = 1;
    *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
    uVar1 = *puVar17;
  }
  else {
    uVar4 = *(uint *)puVar8;
    if (-1 < (int)uVar4) goto LAB_0275312c;
    if (uVar4 != 0xffffffff) goto LAB_02753118;
  }
  puVar20 = (uint *)(ulong)uVar1;
  if ((puVar20 == (uint *)0x0) || (puVar17 == puVar20)) goto LAB_02753118;
  lVar2 = 0xc;
  if (*(char *)((long)puVar17 + (10 - (long)puVar20)) != '\0') {
    lVar2 = 0x1c;
  }
  lVar2 = (long)puVar17 + (lVar2 - (long)puVar20);
  if (lVar2 == 0) goto LAB_02753118;
  uVar21 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar20));
  *(undefined4 *)puVar8 = 0xfffffffe;
  if (uVar21 == 0) goto LAB_02753118;
  piVar22 = (int *)(lVar2 + 4);
  while (piVar22[-1] != 0x797f5754) {
    piVar22 = piVar22 + 2;
    uVar21 = uVar21 - 1;
    if (uVar21 == 0) goto LAB_02753118;
  }
  iVar11 = 0;
  if (*piVar22 != -1) {
    iVar11 = *piVar22;
  }
  *(int *)puVar8 = iVar11;
  uVar1 = *puVar17;
  goto joined_r0x02753080;
joined_r0x02752f98:
  if (uVar1 == 0) goto LAB_02753118;
  if (cVar12 == '\0') {
    cVar12 = '\x01';
    *(undefined8 *)puVar8 = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    *puVar7 = 1;
    *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
    uVar1 = *puVar17;
  }
  else {
    uVar4 = *(uint *)puVar8;
    if (-1 < (int)uVar4) goto LAB_0275312c;
    if (uVar4 != 0xffffffff) goto LAB_02753118;
  }
  puVar20 = (uint *)(ulong)uVar1;
  if ((puVar20 == (uint *)0x0) || (puVar17 == puVar20)) goto LAB_02753118;
  lVar2 = 0xc;
  if (*(char *)((long)puVar17 + (10 - (long)puVar20)) != '\0') {
    lVar2 = 0x1c;
  }
  lVar2 = (long)puVar17 + (lVar2 - (long)puVar20);
  if (lVar2 == 0) goto LAB_02753118;
  uVar21 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar20));
  *(undefined4 *)puVar8 = 0xfffffffe;
  if (uVar21 == 0) goto LAB_02753118;
  piVar22 = (int *)(lVar2 + 4);
  while (piVar22[-1] != 0x797f5754) {
    piVar22 = piVar22 + 2;
    uVar21 = uVar21 - 1;
    if (uVar21 == 0) goto LAB_02753118;
  }
  iVar11 = 0;
  if (*piVar22 != -1) {
    iVar11 = *piVar22;
  }
  *(int *)puVar8 = iVar11;
  uVar1 = *puVar17;
  goto joined_r0x02752f98;
LAB_0275312c:
  uVar16 = 0;
  if ((undefined2 *)((ulong)uVar4 + (long)puVar17) != (undefined2 *)0x0) {
    uVar16 = *(undefined2 *)((ulong)uVar4 + (long)puVar17);
  }
LAB_0275311c:
  if (uVar18 < 0x100) {
    puVar19 = param_1 + uVar18;
  }
  else {
LAB_02752c90:
    puVar19 = param_1;
  }
  *puVar19 = uVar16;
LAB_02752ca0:
  uVar15 = uVar15 + 1;
  if (uVar15 == uVar14) {
    return;
  }
  goto LAB_02752cac;
LAB_02753118:
  uVar16 = 0;
  goto LAB_0275311c;
}

