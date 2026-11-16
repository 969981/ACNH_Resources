
void FUN_027a5750(long param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  long lVar6;
  ushort uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  undefined4 *puVar17;
  undefined1 *puVar18;
  char cVar19;
  uint *puVar20;
  ulong uVar21;
  int *piVar22;
  
  puVar11 = PTR_DAT_04bb6448;
  puVar10 = PTR_DAT_04bb6440;
  puVar9 = PTR_DAT_04bb2208;
  lVar16 = *(long *)PTR_DAT_04bb2208;
  uVar14 = *(uint *)(lVar16 + 0x1c0);
  if (((int)uVar14 < 1) &&
     (((*(long *)(lVar16 + 0xb0) == 0 ||
       (puVar13 = *(uint **)(*(long *)(lVar16 + 0xb0) + 8), puVar13 == (uint *)0x0)) ||
      (uVar14 = *puVar13, uVar14 == 0)))) {
    return;
  }
  puVar3 = (undefined4 *)(param_1 + 0x2298);
  uVar15 = 0;
  puVar4 = (undefined1 *)(param_1 + 0x1698);
  puVar1 = (undefined4 *)(param_1 + 0xe98);
  puVar2 = (undefined1 *)(param_1 + 0x5298);
LAB_027a5810:
  if ((int)*(uint *)(lVar16 + 0x1d40) < 1) {
    if (((((*(long *)(lVar16 + 0x1c30) != 0) &&
          (puVar13 = *(uint **)(*(long *)(lVar16 + 0x1c30) + 8), puVar13 != (uint *)0x0)) &&
         ((*(uint *)(lVar16 + 0x1c48) <= uVar15 ||
          (*(char *)(*(long *)(lVar16 + 0x1c50) + (long)(int)uVar15) != '\0')))) &&
        ((uVar15 < *puVar13 && (puVar13[1] != 0)))) && ((ushort)puVar13[2] != 0)) {
      iVar12 = 0xc;
      if (*(char *)((long)puVar13 + 10) != '\0') {
        iVar12 = 0x1c;
      }
      puVar13 = (uint *)((ulong)(puVar13[1] * uVar15 + (uint)(ushort)puVar13[2] * 8 + iVar12) +
                        (long)puVar13);
      goto joined_r0x027a5950;
    }
  }
  else if (uVar15 < *(uint *)(lVar16 + 0x1d40)) {
    uVar5 = uVar15;
    if (*(uint *)(lVar16 + 0x1d30) <= uVar15) {
      uVar5 = 0;
    }
    puVar13 = *(uint **)(*(long *)(lVar16 + 0x1d38) + (ulong)uVar5 * 8);
joined_r0x027a5950:
    if ((puVar13 != (uint *)0x0) && (*puVar13 != 0)) {
      cVar19 = *puVar10;
      do {
        if (cVar19 == '\0') {
          cVar19 = '\x01';
          *(undefined8 *)puVar11 = 0xffffffffffffffff;
          *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
          *puVar10 = 1;
          *(undefined4 *)(puVar11 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar11 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar11 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar11 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar11 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar11 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar11 + 0x48) = 0xffffffffffffffff;
        }
        else {
          uVar5 = *(uint *)(puVar11 + 0x40);
          if (-1 < (int)uVar5) {
            if (((char *)((ulong)uVar5 + (long)puVar13) != (char *)0x0) &&
               (*(char *)((ulong)uVar5 + (long)puVar13) != '\0')) {
              uVar5 = *puVar13;
              puVar17 = puVar1;
              if (uVar5 == 0) goto LAB_027a59e8;
              uVar21 = (ulong)*(uint *)(puVar11 + 0x3c);
              goto LAB_027a5978;
            }
            break;
          }
          if (uVar5 != 0xffffffff) break;
        }
        lVar8 = (long)puVar13 - (ulong)*puVar13;
        if ((*puVar13 == 0) || (lVar8 == 0)) break;
        lVar6 = 0xc;
        if (*(char *)(lVar8 + 10) != '\0') {
          lVar6 = 0x1c;
        }
        if (lVar6 + lVar8 == 0) break;
        uVar21 = (ulong)*(ushort *)(lVar8 + 8);
        *(undefined4 *)(puVar11 + 0x40) = 0xfffffffe;
        if (uVar21 == 0) break;
        piVar22 = (int *)(lVar6 + lVar8 + 4);
        while (piVar22[-1] != -0x412da57a) {
          piVar22 = piVar22 + 2;
          uVar21 = uVar21 - 1;
          if (uVar21 == 0) goto LAB_027a5804;
        }
        iVar12 = 0;
        if (*piVar22 != -1) {
          iVar12 = *piVar22;
        }
        *(int *)(puVar11 + 0x40) = iVar12;
        if (*puVar13 == 0) break;
      } while( true );
    }
  }
  goto LAB_027a5804;
LAB_027a5978:
  if ((int)uVar21 < 0) {
    if ((uVar21 != 0xffffffff) || (lVar16 = (long)puVar13 - (ulong)uVar5, lVar16 == 0))
    goto LAB_027a59e8;
    lVar8 = 0xc;
    if (*(char *)(lVar16 + 10) != '\0') {
      lVar8 = 0x1c;
    }
    if (lVar8 + lVar16 == 0) goto LAB_027a59e8;
    uVar21 = (ulong)*(ushort *)(lVar16 + 8);
    *(undefined4 *)(puVar11 + 0x3c) = 0xfffffffe;
    if (uVar21 == 0) goto LAB_027a59e8;
    puVar20 = (uint *)(lVar8 + lVar16 + 4);
    while (puVar20[-1] != 0x54706054) {
      puVar20 = puVar20 + 2;
      uVar21 = uVar21 - 1;
      if (uVar21 == 0) goto LAB_027a59e8;
    }
    uVar21 = 0;
    if (*puVar20 != 0xffffffff) {
      uVar21 = (ulong)*puVar20;
    }
    *(int *)(puVar11 + 0x3c) = (int)uVar21;
    uVar5 = *puVar13;
    if (uVar5 == 0) goto LAB_027a59e8;
    goto LAB_027a5978;
  }
  if (((ushort *)(uVar21 + (long)puVar13) != (ushort *)0x0) &&
     (uVar7 = *(ushort *)(uVar21 + (long)puVar13), uVar7 < 0x200)) {
    puVar17 = puVar1 + uVar7;
  }
LAB_027a59e8:
  *puVar17 = 0;
  uVar5 = *puVar13;
  puVar18 = puVar4;
  if (uVar5 != 0) {
    uVar21 = (ulong)*(uint *)(puVar11 + 0x3c);
    while ((int)uVar21 < 0) {
      if ((uVar21 != 0xffffffff) || (lVar16 = (long)puVar13 - (ulong)uVar5, lVar16 == 0))
      goto LAB_027a5a6c;
      lVar8 = 0xc;
      if (*(char *)(lVar16 + 10) != '\0') {
        lVar8 = 0x1c;
      }
      if (lVar8 + lVar16 == 0) goto LAB_027a5a6c;
      uVar21 = (ulong)*(ushort *)(lVar16 + 8);
      *(undefined4 *)(puVar11 + 0x3c) = 0xfffffffe;
      if (uVar21 == 0) goto LAB_027a5a6c;
      puVar20 = (uint *)(lVar8 + lVar16 + 4);
      while (puVar20[-1] != 0x54706054) {
        puVar20 = puVar20 + 2;
        uVar21 = uVar21 - 1;
        if (uVar21 == 0) goto LAB_027a5a6c;
      }
      uVar21 = 0;
      if (*puVar20 != 0xffffffff) {
        uVar21 = (ulong)*puVar20;
      }
      *(int *)(puVar11 + 0x3c) = (int)uVar21;
      uVar5 = *puVar13;
      if (uVar5 == 0) goto LAB_027a5a6c;
    }
    if (((ushort *)(uVar21 + (long)puVar13) != (ushort *)0x0) &&
       (uVar7 = *(ushort *)(uVar21 + (long)puVar13), uVar7 < 0x200)) {
      puVar18 = puVar4 + (ulong)uVar7 * 6;
    }
  }
LAB_027a5a6c:
  *puVar18 = 0;
  puVar17 = puVar3;
  if (*puVar13 != 0) {
    cVar19 = *puVar10;
    do {
      if (cVar19 == '\0') {
        cVar19 = '\x01';
        *(undefined8 *)puVar11 = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
        *puVar10 = 1;
        *(undefined4 *)(puVar11 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x48) = 0xffffffffffffffff;
      }
      else {
        uVar5 = *(uint *)(puVar11 + 0x3c);
        if (-1 < (int)uVar5) {
          if (((ushort *)((ulong)uVar5 + (long)puVar13) != (ushort *)0x0) &&
             (uVar7 = *(ushort *)((ulong)uVar5 + (long)puVar13), uVar7 < 0x200)) {
            puVar17 = puVar3 + (ulong)uVar7 * 6;
          }
          break;
        }
        if (uVar5 != 0xffffffff) break;
      }
      lVar16 = (long)puVar13 - (ulong)*puVar13;
      if ((*puVar13 == 0) || (lVar16 == 0)) break;
      lVar8 = 0xc;
      if (*(char *)(lVar16 + 10) != '\0') {
        lVar8 = 0x1c;
      }
      if (lVar8 + lVar16 == 0) break;
      uVar21 = (ulong)*(ushort *)(lVar16 + 8);
      *(undefined4 *)(puVar11 + 0x3c) = 0xfffffffe;
      if (uVar21 == 0) break;
      piVar22 = (int *)(lVar8 + lVar16 + 4);
      while (piVar22[-1] != 0x54706054) {
        piVar22 = piVar22 + 2;
        uVar21 = uVar21 - 1;
        if (uVar21 == 0) goto LAB_027a5b28;
      }
      iVar12 = 0;
      if (*piVar22 != -1) {
        iVar12 = *piVar22;
      }
      *(int *)(puVar11 + 0x3c) = iVar12;
      if (*puVar13 == 0) break;
    } while( true );
  }
LAB_027a5b28:
  *puVar17 = 0;
  puVar18 = puVar4;
  if (*puVar13 != 0) {
    cVar19 = *puVar10;
    do {
      if (cVar19 == '\0') {
        cVar19 = '\x01';
        *(undefined8 *)puVar11 = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
        *puVar10 = 1;
        *(undefined4 *)(puVar11 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x48) = 0xffffffffffffffff;
      }
      else {
        uVar5 = *(uint *)(puVar11 + 0x3c);
        if (-1 < (int)uVar5) {
          if (((ushort *)((ulong)uVar5 + (long)puVar13) != (ushort *)0x0) &&
             (uVar7 = *(ushort *)((ulong)uVar5 + (long)puVar13), uVar7 < 0x200)) {
            puVar18 = puVar4 + (ulong)uVar7 * 6;
          }
          break;
        }
        if (uVar5 != 0xffffffff) break;
      }
      lVar16 = (long)puVar13 - (ulong)*puVar13;
      if ((*puVar13 == 0) || (lVar16 == 0)) break;
      lVar8 = 0xc;
      if (*(char *)(lVar16 + 10) != '\0') {
        lVar8 = 0x1c;
      }
      if (lVar8 + lVar16 == 0) break;
      uVar21 = (ulong)*(ushort *)(lVar16 + 8);
      *(undefined4 *)(puVar11 + 0x3c) = 0xfffffffe;
      if (uVar21 == 0) break;
      piVar22 = (int *)(lVar8 + lVar16 + 4);
      while (piVar22[-1] != 0x54706054) {
        piVar22 = piVar22 + 2;
        uVar21 = uVar21 - 1;
        if (uVar21 == 0) goto LAB_027a5be8;
      }
      iVar12 = 0;
      if (*piVar22 != -1) {
        iVar12 = *piVar22;
      }
      *(int *)(puVar11 + 0x3c) = iVar12;
      if (*puVar13 == 0) break;
    } while( true );
  }
LAB_027a5be8:
  puVar18[1] = 0;
  puVar17 = puVar3;
  if (*puVar13 != 0) {
    cVar19 = *puVar10;
    do {
      if (cVar19 == '\0') {
        cVar19 = '\x01';
        *(undefined8 *)puVar11 = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
        *puVar10 = 1;
        *(undefined4 *)(puVar11 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x48) = 0xffffffffffffffff;
      }
      else {
        uVar5 = *(uint *)(puVar11 + 0x3c);
        if (-1 < (int)uVar5) {
          if (((ushort *)((ulong)uVar5 + (long)puVar13) != (ushort *)0x0) &&
             (uVar7 = *(ushort *)((ulong)uVar5 + (long)puVar13), uVar7 < 0x200)) {
            puVar17 = puVar3 + (ulong)uVar7 * 6;
          }
          break;
        }
        if (uVar5 != 0xffffffff) break;
      }
      lVar16 = (long)puVar13 - (ulong)*puVar13;
      if ((*puVar13 == 0) || (lVar16 == 0)) break;
      lVar8 = 0xc;
      if (*(char *)(lVar16 + 10) != '\0') {
        lVar8 = 0x1c;
      }
      if (lVar8 + lVar16 == 0) break;
      uVar21 = (ulong)*(ushort *)(lVar16 + 8);
      *(undefined4 *)(puVar11 + 0x3c) = 0xfffffffe;
      if (uVar21 == 0) break;
      piVar22 = (int *)(lVar8 + lVar16 + 4);
      while (piVar22[-1] != 0x54706054) {
        piVar22 = piVar22 + 2;
        uVar21 = uVar21 - 1;
        if (uVar21 == 0) goto LAB_027a5ca8;
      }
      iVar12 = 0;
      if (*piVar22 != -1) {
        iVar12 = *piVar22;
      }
      *(int *)(puVar11 + 0x3c) = iVar12;
      if (*puVar13 == 0) break;
    } while( true );
  }
LAB_027a5ca8:
  puVar17[1] = 0;
  puVar18 = puVar4;
  if (*puVar13 != 0) {
    cVar19 = *puVar10;
    do {
      if (cVar19 == '\0') {
        cVar19 = '\x01';
        *(undefined8 *)puVar11 = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
        *puVar10 = 1;
        *(undefined4 *)(puVar11 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x48) = 0xffffffffffffffff;
      }
      else {
        uVar5 = *(uint *)(puVar11 + 0x3c);
        if (-1 < (int)uVar5) {
          if (((ushort *)((ulong)uVar5 + (long)puVar13) != (ushort *)0x0) &&
             (uVar7 = *(ushort *)((ulong)uVar5 + (long)puVar13), uVar7 < 0x200)) {
            puVar18 = puVar4 + (ulong)uVar7 * 6;
          }
          break;
        }
        if (uVar5 != 0xffffffff) break;
      }
      lVar16 = (long)puVar13 - (ulong)*puVar13;
      if ((*puVar13 == 0) || (lVar16 == 0)) break;
      lVar8 = 0xc;
      if (*(char *)(lVar16 + 10) != '\0') {
        lVar8 = 0x1c;
      }
      if (lVar8 + lVar16 == 0) break;
      uVar21 = (ulong)*(ushort *)(lVar16 + 8);
      *(undefined4 *)(puVar11 + 0x3c) = 0xfffffffe;
      if (uVar21 == 0) break;
      piVar22 = (int *)(lVar8 + lVar16 + 4);
      while (piVar22[-1] != 0x54706054) {
        piVar22 = piVar22 + 2;
        uVar21 = uVar21 - 1;
        if (uVar21 == 0) goto LAB_027a5d68;
      }
      iVar12 = 0;
      if (*piVar22 != -1) {
        iVar12 = *piVar22;
      }
      *(int *)(puVar11 + 0x3c) = iVar12;
      if (*puVar13 == 0) break;
    } while( true );
  }
LAB_027a5d68:
  puVar18[2] = 0;
  puVar17 = puVar3;
  if (*puVar13 != 0) {
    cVar19 = *puVar10;
    do {
      if (cVar19 == '\0') {
        cVar19 = '\x01';
        *(undefined8 *)puVar11 = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
        *puVar10 = 1;
        *(undefined4 *)(puVar11 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x48) = 0xffffffffffffffff;
      }
      else {
        uVar5 = *(uint *)(puVar11 + 0x3c);
        if (-1 < (int)uVar5) {
          if (((ushort *)((ulong)uVar5 + (long)puVar13) != (ushort *)0x0) &&
             (uVar7 = *(ushort *)((ulong)uVar5 + (long)puVar13), uVar7 < 0x200)) {
            puVar17 = puVar3 + (ulong)uVar7 * 6;
          }
          break;
        }
        if (uVar5 != 0xffffffff) break;
      }
      lVar16 = (long)puVar13 - (ulong)*puVar13;
      if ((*puVar13 == 0) || (lVar16 == 0)) break;
      lVar8 = 0xc;
      if (*(char *)(lVar16 + 10) != '\0') {
        lVar8 = 0x1c;
      }
      if (lVar8 + lVar16 == 0) break;
      uVar21 = (ulong)*(ushort *)(lVar16 + 8);
      *(undefined4 *)(puVar11 + 0x3c) = 0xfffffffe;
      if (uVar21 == 0) break;
      piVar22 = (int *)(lVar8 + lVar16 + 4);
      while (piVar22[-1] != 0x54706054) {
        piVar22 = piVar22 + 2;
        uVar21 = uVar21 - 1;
        if (uVar21 == 0) goto LAB_027a5e28;
      }
      iVar12 = 0;
      if (*piVar22 != -1) {
        iVar12 = *piVar22;
      }
      *(int *)(puVar11 + 0x3c) = iVar12;
      if (*puVar13 == 0) break;
    } while( true );
  }
LAB_027a5e28:
  puVar17[2] = 0;
  puVar18 = puVar4;
  if (*puVar13 != 0) {
    cVar19 = *puVar10;
    do {
      if (cVar19 == '\0') {
        cVar19 = '\x01';
        *(undefined8 *)puVar11 = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
        *puVar10 = 1;
        *(undefined4 *)(puVar11 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x48) = 0xffffffffffffffff;
      }
      else {
        uVar5 = *(uint *)(puVar11 + 0x3c);
        if (-1 < (int)uVar5) {
          if (((ushort *)((ulong)uVar5 + (long)puVar13) != (ushort *)0x0) &&
             (uVar7 = *(ushort *)((ulong)uVar5 + (long)puVar13), uVar7 < 0x200)) {
            puVar18 = puVar4 + (ulong)uVar7 * 6;
          }
          break;
        }
        if (uVar5 != 0xffffffff) break;
      }
      lVar16 = (long)puVar13 - (ulong)*puVar13;
      if ((*puVar13 == 0) || (lVar16 == 0)) break;
      lVar8 = 0xc;
      if (*(char *)(lVar16 + 10) != '\0') {
        lVar8 = 0x1c;
      }
      if (lVar8 + lVar16 == 0) break;
      uVar21 = (ulong)*(ushort *)(lVar16 + 8);
      *(undefined4 *)(puVar11 + 0x3c) = 0xfffffffe;
      if (uVar21 == 0) break;
      piVar22 = (int *)(lVar8 + lVar16 + 4);
      while (piVar22[-1] != 0x54706054) {
        piVar22 = piVar22 + 2;
        uVar21 = uVar21 - 1;
        if (uVar21 == 0) goto LAB_027a5ee8;
      }
      iVar12 = 0;
      if (*piVar22 != -1) {
        iVar12 = *piVar22;
      }
      *(int *)(puVar11 + 0x3c) = iVar12;
      if (*puVar13 == 0) break;
    } while( true );
  }
LAB_027a5ee8:
  puVar18[3] = 0;
  puVar17 = puVar3;
  if (*puVar13 != 0) {
    cVar19 = *puVar10;
    do {
      if (cVar19 == '\0') {
        cVar19 = '\x01';
        *(undefined8 *)puVar11 = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
        *puVar10 = 1;
        *(undefined4 *)(puVar11 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x48) = 0xffffffffffffffff;
      }
      else {
        uVar5 = *(uint *)(puVar11 + 0x3c);
        if (-1 < (int)uVar5) {
          if (((ushort *)((ulong)uVar5 + (long)puVar13) != (ushort *)0x0) &&
             (uVar7 = *(ushort *)((ulong)uVar5 + (long)puVar13), uVar7 < 0x200)) {
            puVar17 = puVar3 + (ulong)uVar7 * 6;
          }
          break;
        }
        if (uVar5 != 0xffffffff) break;
      }
      lVar16 = (long)puVar13 - (ulong)*puVar13;
      if ((*puVar13 == 0) || (lVar16 == 0)) break;
      lVar8 = 0xc;
      if (*(char *)(lVar16 + 10) != '\0') {
        lVar8 = 0x1c;
      }
      if (lVar8 + lVar16 == 0) break;
      uVar21 = (ulong)*(ushort *)(lVar16 + 8);
      *(undefined4 *)(puVar11 + 0x3c) = 0xfffffffe;
      if (uVar21 == 0) break;
      piVar22 = (int *)(lVar8 + lVar16 + 4);
      while (piVar22[-1] != 0x54706054) {
        piVar22 = piVar22 + 2;
        uVar21 = uVar21 - 1;
        if (uVar21 == 0) goto LAB_027a5fa8;
      }
      iVar12 = 0;
      if (*piVar22 != -1) {
        iVar12 = *piVar22;
      }
      *(int *)(puVar11 + 0x3c) = iVar12;
      if (*puVar13 == 0) break;
    } while( true );
  }
LAB_027a5fa8:
  puVar17[3] = 0;
  puVar18 = puVar4;
  if (*puVar13 != 0) {
    cVar19 = *puVar10;
    do {
      if (cVar19 == '\0') {
        cVar19 = '\x01';
        *(undefined8 *)puVar11 = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
        *puVar10 = 1;
        *(undefined4 *)(puVar11 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x48) = 0xffffffffffffffff;
      }
      else {
        uVar5 = *(uint *)(puVar11 + 0x3c);
        if (-1 < (int)uVar5) {
          if (((ushort *)((ulong)uVar5 + (long)puVar13) != (ushort *)0x0) &&
             (uVar7 = *(ushort *)((ulong)uVar5 + (long)puVar13), uVar7 < 0x200)) {
            puVar18 = puVar4 + (ulong)uVar7 * 6;
          }
          break;
        }
        if (uVar5 != 0xffffffff) break;
      }
      lVar16 = (long)puVar13 - (ulong)*puVar13;
      if ((*puVar13 == 0) || (lVar16 == 0)) break;
      lVar8 = 0xc;
      if (*(char *)(lVar16 + 10) != '\0') {
        lVar8 = 0x1c;
      }
      if (lVar8 + lVar16 == 0) break;
      uVar21 = (ulong)*(ushort *)(lVar16 + 8);
      *(undefined4 *)(puVar11 + 0x3c) = 0xfffffffe;
      if (uVar21 == 0) break;
      piVar22 = (int *)(lVar8 + lVar16 + 4);
      while (piVar22[-1] != 0x54706054) {
        piVar22 = piVar22 + 2;
        uVar21 = uVar21 - 1;
        if (uVar21 == 0) goto LAB_027a6068;
      }
      iVar12 = 0;
      if (*piVar22 != -1) {
        iVar12 = *piVar22;
      }
      *(int *)(puVar11 + 0x3c) = iVar12;
      if (*puVar13 == 0) break;
    } while( true );
  }
LAB_027a6068:
  puVar18[4] = 0;
  puVar17 = puVar3;
  if (*puVar13 != 0) {
    cVar19 = *puVar10;
    do {
      if (cVar19 == '\0') {
        cVar19 = '\x01';
        *(undefined8 *)puVar11 = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
        *puVar10 = 1;
        *(undefined4 *)(puVar11 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x48) = 0xffffffffffffffff;
      }
      else {
        uVar5 = *(uint *)(puVar11 + 0x3c);
        if (-1 < (int)uVar5) {
          if (((ushort *)((ulong)uVar5 + (long)puVar13) != (ushort *)0x0) &&
             (uVar7 = *(ushort *)((ulong)uVar5 + (long)puVar13), uVar7 < 0x200)) {
            puVar17 = puVar3 + (ulong)uVar7 * 6;
          }
          break;
        }
        if (uVar5 != 0xffffffff) break;
      }
      lVar16 = (long)puVar13 - (ulong)*puVar13;
      if ((*puVar13 == 0) || (lVar16 == 0)) break;
      lVar8 = 0xc;
      if (*(char *)(lVar16 + 10) != '\0') {
        lVar8 = 0x1c;
      }
      if (lVar8 + lVar16 == 0) break;
      uVar21 = (ulong)*(ushort *)(lVar16 + 8);
      *(undefined4 *)(puVar11 + 0x3c) = 0xfffffffe;
      if (uVar21 == 0) break;
      piVar22 = (int *)(lVar8 + lVar16 + 4);
      while (piVar22[-1] != 0x54706054) {
        piVar22 = piVar22 + 2;
        uVar21 = uVar21 - 1;
        if (uVar21 == 0) goto LAB_027a6128;
      }
      iVar12 = 0;
      if (*piVar22 != -1) {
        iVar12 = *piVar22;
      }
      *(int *)(puVar11 + 0x3c) = iVar12;
      if (*puVar13 == 0) break;
    } while( true );
  }
LAB_027a6128:
  puVar17[4] = 0;
  puVar18 = puVar4;
  if (*puVar13 != 0) {
    cVar19 = *puVar10;
    do {
      if (cVar19 == '\0') {
        cVar19 = '\x01';
        *(undefined8 *)puVar11 = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
        *puVar10 = 1;
        *(undefined4 *)(puVar11 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x48) = 0xffffffffffffffff;
      }
      else {
        uVar5 = *(uint *)(puVar11 + 0x3c);
        if (-1 < (int)uVar5) {
          if (((ushort *)((ulong)uVar5 + (long)puVar13) != (ushort *)0x0) &&
             (uVar7 = *(ushort *)((ulong)uVar5 + (long)puVar13), uVar7 < 0x200)) {
            puVar18 = puVar4 + (ulong)uVar7 * 6;
          }
          break;
        }
        if (uVar5 != 0xffffffff) break;
      }
      lVar16 = (long)puVar13 - (ulong)*puVar13;
      if ((*puVar13 == 0) || (lVar16 == 0)) break;
      lVar8 = 0xc;
      if (*(char *)(lVar16 + 10) != '\0') {
        lVar8 = 0x1c;
      }
      if (lVar8 + lVar16 == 0) break;
      uVar21 = (ulong)*(ushort *)(lVar16 + 8);
      *(undefined4 *)(puVar11 + 0x3c) = 0xfffffffe;
      if (uVar21 == 0) break;
      piVar22 = (int *)(lVar8 + lVar16 + 4);
      while (piVar22[-1] != 0x54706054) {
        piVar22 = piVar22 + 2;
        uVar21 = uVar21 - 1;
        if (uVar21 == 0) goto LAB_027a61e8;
      }
      iVar12 = 0;
      if (*piVar22 != -1) {
        iVar12 = *piVar22;
      }
      *(int *)(puVar11 + 0x3c) = iVar12;
      if (*puVar13 == 0) break;
    } while( true );
  }
LAB_027a61e8:
  puVar18[5] = 0;
  puVar17 = puVar3;
  if (*puVar13 != 0) {
    cVar19 = *puVar10;
    do {
      if (cVar19 == '\0') {
        cVar19 = '\x01';
        *(undefined8 *)puVar11 = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
        *puVar10 = 1;
        *(undefined4 *)(puVar11 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x48) = 0xffffffffffffffff;
      }
      else {
        uVar5 = *(uint *)(puVar11 + 0x3c);
        if (-1 < (int)uVar5) {
          if (((ushort *)((ulong)uVar5 + (long)puVar13) != (ushort *)0x0) &&
             (uVar7 = *(ushort *)((ulong)uVar5 + (long)puVar13), uVar7 < 0x200)) {
            puVar17 = puVar3 + (ulong)uVar7 * 6;
          }
          break;
        }
        if (uVar5 != 0xffffffff) break;
      }
      lVar16 = (long)puVar13 - (ulong)*puVar13;
      if ((*puVar13 == 0) || (lVar16 == 0)) break;
      lVar8 = 0xc;
      if (*(char *)(lVar16 + 10) != '\0') {
        lVar8 = 0x1c;
      }
      if (lVar8 + lVar16 == 0) break;
      uVar21 = (ulong)*(ushort *)(lVar16 + 8);
      *(undefined4 *)(puVar11 + 0x3c) = 0xfffffffe;
      if (uVar21 == 0) break;
      piVar22 = (int *)(lVar8 + lVar16 + 4);
      while (piVar22[-1] != 0x54706054) {
        piVar22 = piVar22 + 2;
        uVar21 = uVar21 - 1;
        if (uVar21 == 0) goto LAB_027a62a8;
      }
      iVar12 = 0;
      if (*piVar22 != -1) {
        iVar12 = *piVar22;
      }
      *(int *)(puVar11 + 0x3c) = iVar12;
      if (*puVar13 == 0) break;
    } while( true );
  }
LAB_027a62a8:
  puVar17[5] = 0;
  puVar18 = puVar2;
  if (*puVar13 != 0) {
    cVar19 = *puVar10;
    do {
      if (cVar19 == '\0') {
        cVar19 = '\x01';
        *(undefined8 *)puVar11 = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
        *puVar10 = 1;
        *(undefined4 *)(puVar11 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar11 + 0x48) = 0xffffffffffffffff;
      }
      else {
        uVar5 = *(uint *)(puVar11 + 0x3c);
        if (-1 < (int)uVar5) {
          if (((ushort *)((ulong)uVar5 + (long)puVar13) != (ushort *)0x0) &&
             (uVar7 = *(ushort *)((ulong)uVar5 + (long)puVar13), uVar7 < 0x200)) {
            puVar18 = puVar2 + uVar7;
          }
          break;
        }
        if (uVar5 != 0xffffffff) break;
      }
      lVar16 = (long)puVar13 - (ulong)*puVar13;
      if ((*puVar13 == 0) || (lVar16 == 0)) break;
      lVar8 = 0xc;
      if (*(char *)(lVar16 + 10) != '\0') {
        lVar8 = 0x1c;
      }
      if (lVar8 + lVar16 == 0) break;
      uVar21 = (ulong)*(ushort *)(lVar16 + 8);
      *(undefined4 *)(puVar11 + 0x3c) = 0xfffffffe;
      if (uVar21 == 0) break;
      piVar22 = (int *)(lVar8 + lVar16 + 4);
      while (piVar22[-1] != 0x54706054) {
        piVar22 = piVar22 + 2;
        uVar21 = uVar21 - 1;
        if (uVar21 == 0) goto LAB_027a57fc;
      }
      iVar12 = 0;
      if (*piVar22 != -1) {
        iVar12 = *piVar22;
      }
      *(int *)(puVar11 + 0x3c) = iVar12;
      if (*puVar13 == 0) break;
    } while( true );
  }
LAB_027a57fc:
  *puVar18 = 0;
  lVar16 = *(long *)puVar9;
LAB_027a5804:
  uVar15 = uVar15 + 1;
  if (uVar15 == uVar14) {
    return;
  }
  goto LAB_027a5810;
}

