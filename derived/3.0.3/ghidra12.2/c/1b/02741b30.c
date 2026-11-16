
void FUN_02741b30(undefined2 *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined2 uVar7;
  uint *puVar8;
  undefined2 *puVar9;
  ulong uVar10;
  uint *puVar11;
  int *piVar12;
  uint *puVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  char cVar18;
  
  puVar6 = PTR_DAT_04bb63a8;
  puVar5 = PTR_DAT_04bb63a0;
  lVar14 = *(long *)PTR_DAT_04bb2208;
  uVar15 = *(uint *)(lVar14 + 0xe60);
  if (((int)uVar15 < 1) &&
     (((*(long *)(lVar14 + 0xd50) == 0 ||
       (puVar8 = *(uint **)(*(long *)(lVar14 + 0xd50) + 8), puVar8 == (uint *)0x0)) ||
      (uVar15 = *puVar8, uVar15 == 0)))) {
    return;
  }
  uVar16 = 0;
  cVar18 = *PTR_DAT_04bb63a0;
LAB_02741bc0:
  if ((int)*(uint *)(lVar14 + 0xe60) < 1) {
    if (((((*(long *)(lVar14 + 0xd50) != 0) &&
          (puVar8 = *(uint **)(*(long *)(lVar14 + 0xd50) + 8), puVar8 != (uint *)0x0)) &&
         ((*(uint *)(lVar14 + 0xd68) <= uVar16 ||
          (*(char *)(*(long *)(lVar14 + 0xd70) + (long)(int)uVar16) != '\0')))) &&
        ((uVar16 < *puVar8 && (puVar8[1] != 0)))) && ((ushort)puVar8[2] != 0)) {
      iVar17 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        iVar17 = 0x1c;
      }
      puVar8 = (uint *)((ulong)(puVar8[1] * uVar16 + (uint)(ushort)puVar8[2] * 8 + iVar17) +
                       (long)puVar8);
      goto joined_r0x02741d00;
    }
  }
  else if (uVar16 < *(uint *)(lVar14 + 0xe60)) {
    uVar1 = uVar16;
    if (*(uint *)(lVar14 + 0xe50) <= uVar16) {
      uVar1 = 0;
    }
    puVar8 = *(uint **)(*(long *)(lVar14 + 0xe58) + (ulong)uVar1 * 8);
joined_r0x02741d00:
    if ((puVar8 != (uint *)0x0) && (*puVar8 != 0)) {
      do {
        if (cVar18 == '\0') {
          cVar18 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
        }
        else {
          uVar1 = *(uint *)(puVar6 + 0x10);
          if (-1 < (int)uVar1) {
            if (((char *)((ulong)uVar1 + (long)puVar8) != (char *)0x0) &&
               (*(char *)((ulong)uVar1 + (long)puVar8) != '\0')) {
              uVar1 = *puVar8;
              goto joined_r0x02741d1c;
            }
            break;
          }
          if (uVar1 != 0xffffffff) break;
        }
        lVar4 = (long)puVar8 - (ulong)*puVar8;
        if ((*puVar8 == 0) || (lVar4 == 0)) break;
        lVar2 = 0xc;
        if (*(char *)(lVar4 + 10) != '\0') {
          lVar2 = 0x1c;
        }
        if (lVar2 + lVar4 == 0) break;
        uVar10 = (ulong)*(ushort *)(lVar4 + 8);
        *(undefined4 *)(puVar6 + 0x10) = 0xfffffffe;
        if (uVar10 == 0) break;
        piVar12 = (int *)(lVar2 + lVar4 + 4);
        while (piVar12[-1] != 0x3dad9135) {
          piVar12 = piVar12 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) goto LAB_02741bb4;
        }
        iVar17 = 0;
        if (*piVar12 != -1) {
          iVar17 = *piVar12;
        }
        *(int *)(puVar6 + 0x10) = iVar17;
        if (*puVar8 == 0) break;
      } while( true );
    }
  }
  goto LAB_02741bb4;
joined_r0x02741d1c:
  if (uVar1 == 0) goto LAB_02741ba8;
  if (cVar18 != '\0') {
    uVar1 = *(uint *)(puVar6 + 8);
    if ((int)uVar1 < 0) {
      if (uVar1 == 0xffffffff) goto LAB_02741d68;
      goto LAB_02741e6c;
    }
    puVar11 = (uint *)0x0;
    if ((ushort *)((ulong)uVar1 + (long)puVar8) != (ushort *)0x0) {
      puVar11 = (uint *)(ulong)*(ushort *)((ulong)uVar1 + (long)puVar8);
    }
LAB_02741db8:
    uVar1 = *puVar8;
    goto joined_r0x02741dbc;
  }
  cVar18 = '\x01';
  *(undefined8 *)puVar6 = 0xffffffffffffffff;
  *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
  *puVar5 = 1;
  *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
LAB_02741d68:
  puVar11 = (uint *)(ulong)*puVar8;
  if (*puVar8 == 0) goto LAB_02741db8;
  if (puVar8 == puVar11) {
LAB_02741e6c:
    puVar11 = (uint *)0x0;
    goto LAB_02741db8;
  }
  lVar4 = 0xc;
  if (*(char *)((long)puVar8 + (10 - (long)puVar11)) != '\0') {
    lVar4 = 0x1c;
  }
  lVar4 = (long)puVar8 + (lVar4 - (long)puVar11);
  if (lVar4 == 0) goto LAB_02741e6c;
  uVar10 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar11));
  *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
  puVar11 = (uint *)0x0;
  if (uVar10 == 0) goto LAB_02741db8;
  piVar12 = (int *)(lVar4 + 4);
  while (piVar12[-1] != 0x54706054) {
    piVar12 = piVar12 + 2;
    uVar10 = uVar10 - 1;
    puVar11 = (uint *)0x0;
    if (uVar10 == 0) goto LAB_02741db8;
  }
  iVar17 = 0;
  if (*piVar12 != -1) {
    iVar17 = *piVar12;
  }
  *(int *)(puVar6 + 8) = iVar17;
  uVar1 = *puVar8;
  goto joined_r0x02741d1c;
LAB_02741ba8:
  uVar7 = 0;
  goto LAB_02741bac;
joined_r0x02741dbc:
  if (uVar1 == 0) goto LAB_02741e58;
  if (cVar18 == '\0') {
    cVar18 = '\x01';
    *(undefined8 *)puVar6 = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
    *puVar5 = 1;
    *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
    uVar1 = *puVar8;
  }
  else {
    uVar3 = *(uint *)puVar6;
    if (-1 < (int)uVar3) {
      uVar7 = 0;
      if ((undefined2 *)((ulong)uVar3 + (long)puVar8) != (undefined2 *)0x0) {
        uVar7 = *(undefined2 *)((ulong)uVar3 + (long)puVar8);
      }
      goto LAB_02741e5c;
    }
    if (uVar3 != 0xffffffff) goto LAB_02741e58;
  }
  puVar13 = (uint *)(ulong)uVar1;
  if ((puVar13 == (uint *)0x0) || (puVar8 == puVar13)) goto LAB_02741e58;
  lVar4 = 0xc;
  if (*(char *)((long)puVar8 + (10 - (long)puVar13)) != '\0') {
    lVar4 = 0x1c;
  }
  lVar4 = (long)puVar8 + (lVar4 - (long)puVar13);
  if (lVar4 == 0) goto LAB_02741e58;
  uVar10 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar13));
  *(undefined4 *)puVar6 = 0xfffffffe;
  if (uVar10 == 0) goto LAB_02741e58;
  piVar12 = (int *)(lVar4 + 4);
  while (piVar12[-1] != 0x797f5754) {
    piVar12 = piVar12 + 2;
    uVar10 = uVar10 - 1;
    if (uVar10 == 0) goto LAB_02741e58;
  }
  iVar17 = 0;
  if (*piVar12 != -1) {
    iVar17 = *piVar12;
  }
  *(int *)puVar6 = iVar17;
  uVar1 = *puVar8;
  goto joined_r0x02741dbc;
LAB_02741e58:
  uVar7 = 0;
LAB_02741e5c:
  if ((uint)puVar11 < 0x80) {
    puVar9 = param_1 + (long)puVar11;
    goto LAB_02741bb0;
  }
LAB_02741bac:
  puVar9 = param_1;
LAB_02741bb0:
  *puVar9 = uVar7;
LAB_02741bb4:
  uVar16 = uVar16 + 1;
  if (uVar16 == uVar15) {
    return;
  }
  goto LAB_02741bc0;
}

