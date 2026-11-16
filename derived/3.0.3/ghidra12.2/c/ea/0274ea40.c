
void FUN_0274ea40(undefined2 *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
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
LAB_0274eadc:
  if ((int)*(uint *)(lVar14 + 0x1c0) < 1) {
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
      goto joined_r0x0274ec20;
    }
  }
  else if (uVar16 < *(uint *)(lVar14 + 0x1c0)) {
    uVar6 = uVar16;
    if (*(uint *)(lVar14 + 0x1b0) <= uVar16) {
      uVar6 = 0;
    }
    puVar8 = *(uint **)(*(long *)(lVar14 + 0x1b8) + (ulong)uVar6 * 8);
joined_r0x0274ec20:
    if ((puVar8 != (uint *)0x0) && (*puVar8 != 0)) {
      do {
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
          uVar6 = *(uint *)(puVar5 + 0x14);
          if (-1 < (int)uVar6) {
            if (((char *)((ulong)uVar6 + (long)puVar8) != (char *)0x0) &&
               (*(char *)((ulong)uVar6 + (long)puVar8) != '\0')) {
              uVar6 = *puVar8;
              goto joined_r0x0274ec3c;
            }
            break;
          }
          if (uVar6 != 0xffffffff) break;
        }
        lVar3 = (long)puVar8 - (ulong)*puVar8;
        if ((*puVar8 == 0) || (lVar3 == 0)) break;
        lVar1 = 0xc;
        if (*(char *)(lVar3 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        if (lVar1 + lVar3 == 0) break;
        uVar10 = (ulong)*(ushort *)(lVar3 + 8);
        *(undefined4 *)(puVar5 + 0x14) = 0xfffffffe;
        if (uVar10 == 0) break;
        piVar12 = (int *)(lVar1 + lVar3 + 4);
        while (piVar12[-1] != -0x3bc93197) {
          piVar12 = piVar12 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) goto LAB_0274ead0;
        }
        iVar17 = 0;
        if (*piVar12 != -1) {
          iVar17 = *piVar12;
        }
        *(int *)(puVar5 + 0x14) = iVar17;
        if (*puVar8 == 0) break;
      } while( true );
    }
  }
  goto LAB_0274ead0;
joined_r0x0274ec3c:
  if (uVar6 == 0) goto LAB_0274eac4;
  if (cVar18 != '\0') {
    uVar6 = *(uint *)(puVar5 + 8);
    if ((int)uVar6 < 0) {
      if (uVar6 == 0xffffffff) goto LAB_0274ec88;
      goto LAB_0274ed94;
    }
    puVar11 = (uint *)0x0;
    if ((ushort *)((ulong)uVar6 + (long)puVar8) != (ushort *)0x0) {
      puVar11 = (uint *)(ulong)*(ushort *)((ulong)uVar6 + (long)puVar8);
    }
LAB_0274ecd8:
    uVar6 = *puVar8;
    goto joined_r0x0274ecdc;
  }
  cVar18 = '\x01';
  *(undefined8 *)puVar5 = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
  *puVar4 = 1;
  *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
LAB_0274ec88:
  puVar11 = (uint *)(ulong)*puVar8;
  if (*puVar8 == 0) goto LAB_0274ecd8;
  if (puVar8 == puVar11) {
LAB_0274ed94:
    puVar11 = (uint *)0x0;
    goto LAB_0274ecd8;
  }
  lVar3 = 0xc;
  if (*(char *)((long)puVar8 + (10 - (long)puVar11)) != '\0') {
    lVar3 = 0x1c;
  }
  lVar3 = (long)puVar8 + (lVar3 - (long)puVar11);
  if (lVar3 == 0) goto LAB_0274ed94;
  uVar10 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar11));
  *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
  puVar11 = (uint *)0x0;
  if (uVar10 == 0) goto LAB_0274ecd8;
  piVar12 = (int *)(lVar3 + 4);
  while (piVar12[-1] != 0x54706054) {
    piVar12 = piVar12 + 2;
    uVar10 = uVar10 - 1;
    puVar11 = (uint *)0x0;
    if (uVar10 == 0) goto LAB_0274ecd8;
  }
  iVar17 = 0;
  if (*piVar12 != -1) {
    iVar17 = *piVar12;
  }
  *(int *)(puVar5 + 8) = iVar17;
  uVar6 = *puVar8;
  goto joined_r0x0274ec3c;
LAB_0274eac4:
  uVar7 = 0;
  goto LAB_0274eac8;
joined_r0x0274ecdc:
  if (uVar6 == 0) goto LAB_0274ed78;
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
    uVar2 = *(uint *)puVar5;
    if (-1 < (int)uVar2) {
      uVar6 = 0;
      if ((uint *)((ulong)uVar2 + (long)puVar8) != (uint *)0x0) {
        uVar6 = *(uint *)((ulong)uVar2 + (long)puVar8);
      }
      goto LAB_0274ed7c;
    }
    if (uVar2 != 0xffffffff) goto LAB_0274ed78;
  }
  puVar13 = (uint *)(ulong)uVar6;
  if ((puVar13 == (uint *)0x0) || (puVar8 == puVar13)) goto LAB_0274ed78;
  lVar3 = 0xc;
  if (*(char *)((long)puVar8 + (10 - (long)puVar13)) != '\0') {
    lVar3 = 0x1c;
  }
  lVar3 = (long)puVar8 + (lVar3 - (long)puVar13);
  if (lVar3 == 0) goto LAB_0274ed78;
  uVar10 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar13));
  *(undefined4 *)puVar5 = 0xfffffffe;
  if (uVar10 == 0) goto LAB_0274ed78;
  piVar12 = (int *)(lVar3 + 4);
  while (piVar12[-1] != 0x4c24f1cf) {
    piVar12 = piVar12 + 2;
    uVar10 = uVar10 - 1;
    if (uVar10 == 0) goto LAB_0274ed78;
  }
  iVar17 = 0;
  if (*piVar12 != -1) {
    iVar17 = *piVar12;
  }
  *(int *)puVar5 = iVar17;
  uVar6 = *puVar8;
  goto joined_r0x0274ecdc;
LAB_0274ed78:
  uVar6 = 0;
LAB_0274ed7c:
  if (0xfffe < uVar6) {
    uVar6 = 0xffff;
  }
  uVar7 = (undefined2)uVar6;
  if ((uint)puVar11 < 0x800) {
    puVar9 = param_1 + (long)puVar11;
    goto LAB_0274eacc;
  }
LAB_0274eac8:
  puVar9 = param_1;
LAB_0274eacc:
  *puVar9 = uVar7;
LAB_0274ead0:
  uVar16 = uVar16 + 1;
  if (uVar16 == uVar15) {
    return;
  }
  goto LAB_0274eadc;
}

