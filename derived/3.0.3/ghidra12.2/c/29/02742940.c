
void FUN_02742940(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined2 uVar7;
  uint *puVar8;
  long lVar9;
  char cVar10;
  uint *puVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined *local_70;
  long lStack_68;
  
  puVar6 = PTR_DAT_04bb63a8;
  puVar5 = PTR_DAT_04bb63a0;
  lVar9 = *(long *)PTR_DAT_04bb2208;
  uVar15 = *(uint *)(lVar9 + 0xe60);
  if (((int)uVar15 < 1) &&
     (((*(long *)(lVar9 + 0xd50) == 0 ||
       (puVar8 = *(uint **)(*(long *)(lVar9 + 0xd50) + 8), puVar8 == (uint *)0x0)) ||
      (uVar15 = *puVar8, uVar15 == 0)))) {
    return;
  }
  uVar16 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  plVar14 = (long *)PTR_PTR_04bb6398;
LAB_02742a5c:
  if ((int)*(uint *)(lVar9 + 0xe60) < 1) {
    if (((((*(long *)(lVar9 + 0xd50) != 0) &&
          (puVar8 = *(uint **)(*(long *)(lVar9 + 0xd50) + 8), puVar8 != (uint *)0x0)) &&
         ((*(uint *)(lVar9 + 0xd68) <= uVar16 ||
          (*(char *)(*(long *)(lVar9 + 0xd70) + (long)(int)uVar16) != '\0')))) &&
        ((uVar16 < *puVar8 && (puVar8[1] != 0)))) && ((ushort)puVar8[2] != 0)) {
      iVar17 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        iVar17 = 0x1c;
      }
      puVar8 = (uint *)((ulong)(puVar8[1] * uVar16 + (uint)(ushort)puVar8[2] * 8 + iVar17) +
                       (long)puVar8);
      goto joined_r0x02742ba0;
    }
  }
  else if (uVar16 < *(uint *)(lVar9 + 0xe60)) {
    uVar2 = uVar16;
    if (*(uint *)(lVar9 + 0xe50) <= uVar16) {
      uVar2 = 0;
    }
    puVar8 = *(uint **)(*(long *)(lVar9 + 0xe58) + (ulong)uVar2 * 8);
joined_r0x02742ba0:
    if ((puVar8 != (uint *)0x0) && (*puVar8 != 0)) {
      cVar10 = *puVar5;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
        }
        else {
          uVar2 = *(uint *)(puVar6 + 0x14);
          if (-1 < (int)uVar2) {
            if (((char *)((ulong)uVar2 + (long)puVar8) != (char *)0x0) &&
               (*(char *)((ulong)uVar2 + (long)puVar8) != '\0')) {
              uVar2 = *puVar8;
              if (uVar2 == 0) goto LAB_02742c34;
              uVar12 = (ulong)*(uint *)(puVar6 + 0x20);
              goto LAB_02742bc4;
            }
            break;
          }
          if (uVar2 != 0xffffffff) break;
        }
        lVar4 = (long)puVar8 - (ulong)*puVar8;
        if ((*puVar8 == 0) || (lVar4 == 0)) break;
        lVar3 = 0xc;
        if (*(char *)(lVar4 + 10) != '\0') {
          lVar3 = 0x1c;
        }
        if (lVar3 + lVar4 == 0) break;
        uVar12 = (ulong)*(ushort *)(lVar4 + 8);
        *(undefined4 *)(puVar6 + 0x14) = 0xfffffffe;
        if (uVar12 == 0) break;
        piVar13 = (int *)(lVar3 + lVar4 + 4);
        while (piVar13[-1] != 0x3c7fb88f) {
          piVar13 = piVar13 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) goto LAB_02742a50;
        }
        iVar17 = 0;
        if (*piVar13 != -1) {
          iVar17 = *piVar13;
        }
        *(int *)(puVar6 + 0x14) = iVar17;
        if (*puVar8 == 0) break;
      } while( true );
    }
  }
  goto LAB_02742a50;
  while( true ) {
    lVar4 = (long)puVar8 - (ulong)uVar2;
    lVar9 = 0;
    if (lVar4 == 0) goto LAB_02742c38;
    lVar3 = 0xc;
    if (*(char *)(lVar4 + 10) != '\0') {
      lVar3 = 0x1c;
    }
    if (lVar3 + lVar4 == 0) break;
    uVar12 = (ulong)*(ushort *)(lVar4 + 8);
    *(undefined4 *)(puVar6 + 0x20) = 0xfffffffe;
    lVar9 = 0;
    if (uVar12 == 0) goto LAB_02742c38;
    puVar11 = (uint *)(lVar3 + lVar4 + 4);
    while (puVar11[-1] != 0x45f320f2) {
      puVar11 = puVar11 + 2;
      uVar12 = uVar12 - 1;
      if (uVar12 == 0) {
        lVar9 = 0;
        goto LAB_02742c38;
      }
    }
    uVar12 = 0;
    if (*puVar11 != 0xffffffff) {
      uVar12 = (ulong)*puVar11;
    }
    *(int *)(puVar6 + 0x20) = (int)uVar12;
    uVar2 = *puVar8;
    if (uVar2 == 0) break;
LAB_02742bc4:
    if (-1 < (int)uVar12) {
      lVar9 = uVar12 + (long)puVar8;
      goto LAB_02742c38;
    }
    if (uVar12 != 0xffffffff) break;
  }
LAB_02742c34:
  lVar9 = 0;
LAB_02742c38:
  lStack_68 = *plVar14;
  if (lVar9 != 0) {
    lStack_68 = lVar9;
  }
  uVar2 = *puVar8;
  if (uVar2 != 0) {
    uVar12 = (ulong)*(uint *)puVar6;
    while ((int)uVar12 < 0) {
      if ((uVar12 != 0xffffffff) || (lVar9 = (long)puVar8 - (ulong)uVar2, lVar9 == 0))
      goto LAB_02742a0c;
      lVar4 = 0xc;
      if (*(char *)(lVar9 + 10) != '\0') {
        lVar4 = 0x1c;
      }
      if (lVar4 + lVar9 == 0) goto LAB_02742a0c;
      uVar12 = (ulong)*(ushort *)(lVar9 + 8);
      *(undefined4 *)puVar6 = 0xfffffffe;
      if (uVar12 == 0) goto LAB_02742a0c;
      puVar11 = (uint *)(lVar4 + lVar9 + 4);
      while (puVar11[-1] != 0x797f5754) {
        puVar11 = puVar11 + 2;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) goto LAB_02742a0c;
      }
      uVar12 = 0;
      if (*puVar11 != 0xffffffff) {
        uVar12 = (ulong)*puVar11;
      }
      *(int *)puVar6 = (int)uVar12;
      uVar2 = *puVar8;
      if (uVar2 == 0) goto LAB_02742a0c;
    }
    if ((undefined2 *)(uVar12 + (long)puVar8) != (undefined2 *)0x0) {
      uVar7 = *(undefined2 *)(uVar12 + (long)puVar8);
      goto LAB_02742a10;
    }
  }
LAB_02742a0c:
  uVar7 = 0;
LAB_02742a10:
  local_70 = puVar1;
  FUN_02742300(param_1,&local_70,uVar7);
  lVar9 = *(long *)PTR_DAT_04bb2208;
  plVar14 = (long *)PTR_PTR_04bb6398;
LAB_02742a50:
  uVar16 = uVar16 + 1;
  if (uVar16 == uVar15) {
    return;
  }
  goto LAB_02742a5c;
}

