
void FUN_027b6820(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 uVar7;
  uint *puVar8;
  char cVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  int *piVar13;
  long *plVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined *local_70;
  long lStack_68;
  
  puVar6 = PTR_DAT_04bb6360;
  puVar5 = PTR_DAT_04bb6358;
  lVar15 = *(long *)PTR_DAT_04bb2208;
  if ((lVar15 == 0) ||
     ((uVar16 = *(uint *)(lVar15 + 0x3e0), (int)uVar16 < 1 &&
      (((*(long *)(lVar15 + 0x2d0) == 0 ||
        (puVar8 = *(uint **)(*(long *)(lVar15 + 0x2d0) + 8), puVar8 == (uint *)0x0)) ||
       (uVar16 = *puVar8, uVar16 == 0)))))) {
    return;
  }
  uVar17 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  plVar14 = (long *)PTR_PTR_04bb6350;
LAB_027b6930:
  if ((int)*(uint *)(lVar15 + 0x3e0) < 1) {
    if (((((*(long *)(lVar15 + 0x2d0) != 0) &&
          (puVar8 = *(uint **)(*(long *)(lVar15 + 0x2d0) + 8), puVar8 != (uint *)0x0)) &&
         ((*(uint *)(lVar15 + 0x2e8) <= uVar17 ||
          (*(char *)(*(long *)(lVar15 + 0x2f0) + (long)(int)uVar17) != '\0')))) &&
        ((uVar17 < *puVar8 && (puVar8[1] != 0)))) && ((ushort)puVar8[2] != 0)) {
      iVar18 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        iVar18 = 0x1c;
      }
      puVar8 = (uint *)((ulong)(puVar8[1] * uVar17 + (uint)(ushort)puVar8[2] * 8 + iVar18) +
                       (long)puVar8);
      goto joined_r0x027b6a70;
    }
  }
  else if (uVar17 < *(uint *)(lVar15 + 0x3e0)) {
    uVar2 = uVar17;
    if (*(uint *)(lVar15 + 0x3d0) <= uVar17) {
      uVar2 = 0;
    }
    puVar8 = *(uint **)(*(long *)(lVar15 + 0x3d8) + (ulong)uVar2 * 8);
joined_r0x027b6a70:
    if ((puVar8 != (uint *)0x0) && (*puVar8 != 0)) {
      cVar9 = *puVar5;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
        }
        else {
          uVar2 = *(uint *)(puVar6 + 0x10);
          if (-1 < (int)uVar2) {
            if (((char *)((ulong)uVar2 + (long)puVar8) != (char *)0x0) &&
               (*(char *)((ulong)uVar2 + (long)puVar8) != '\0')) {
              uVar2 = *puVar8;
              if (uVar2 == 0) goto LAB_027b6b04;
              uVar11 = (ulong)*(uint *)(puVar6 + 0x1c);
              goto LAB_027b6a94;
            }
            break;
          }
          if (uVar2 != 0xffffffff) break;
        }
        lVar10 = (long)puVar8 - (ulong)*puVar8;
        if ((*puVar8 == 0) || (lVar10 == 0)) break;
        lVar3 = 0xc;
        if (*(char *)(lVar10 + 10) != '\0') {
          lVar3 = 0x1c;
        }
        if (lVar3 + lVar10 == 0) break;
        uVar11 = (ulong)*(ushort *)(lVar10 + 8);
        *(undefined4 *)(puVar6 + 0x10) = 0xfffffffe;
        if (uVar11 == 0) break;
        piVar13 = (int *)(lVar3 + lVar10 + 4);
        while (piVar13[-1] != -0x72bfe209) {
          piVar13 = piVar13 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_027b6924;
        }
        iVar18 = 0;
        if (*piVar13 != -1) {
          iVar18 = *piVar13;
        }
        *(int *)(puVar6 + 0x10) = iVar18;
        if (*puVar8 == 0) break;
      } while( true );
    }
  }
  goto LAB_027b6924;
  while( true ) {
    lVar3 = (long)puVar8 - (ulong)uVar2;
    lVar10 = 0;
    if (lVar3 == 0) goto LAB_027b6b08;
    lVar4 = 0xc;
    if (*(char *)(lVar3 + 10) != '\0') {
      lVar4 = 0x1c;
    }
    if (lVar4 + lVar3 == 0) break;
    uVar11 = (ulong)*(ushort *)(lVar3 + 8);
    *(undefined4 *)(puVar6 + 0x1c) = 0xfffffffe;
    lVar10 = 0;
    if (uVar11 == 0) goto LAB_027b6b08;
    puVar12 = (uint *)(lVar4 + lVar3 + 4);
    while (puVar12[-1] != 0x45f320f2) {
      puVar12 = puVar12 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) {
        lVar10 = 0;
        goto LAB_027b6b08;
      }
    }
    uVar11 = 0;
    if (*puVar12 != 0xffffffff) {
      uVar11 = (ulong)*puVar12;
    }
    *(int *)(puVar6 + 0x1c) = (int)uVar11;
    uVar2 = *puVar8;
    if (uVar2 == 0) break;
LAB_027b6a94:
    if (-1 < (int)uVar11) {
      lVar10 = uVar11 + (long)puVar8;
      goto LAB_027b6b08;
    }
    if (uVar11 != 0xffffffff) break;
  }
LAB_027b6b04:
  lVar10 = 0;
LAB_027b6b08:
  lStack_68 = *plVar14;
  if (lVar10 != 0) {
    lStack_68 = lVar10;
  }
  uVar2 = *puVar8;
  if (uVar2 != 0) {
    uVar11 = (ulong)*(uint *)(puVar6 + 0x14);
    while ((int)uVar11 < 0) {
      if ((uVar11 != 0xffffffff) || (lVar10 = (long)puVar8 - (ulong)uVar2, lVar10 == 0))
      goto LAB_027b68f0;
      lVar3 = 0xc;
      if (*(char *)(lVar10 + 10) != '\0') {
        lVar3 = 0x1c;
      }
      if (lVar3 + lVar10 == 0) goto LAB_027b68f0;
      uVar11 = (ulong)*(ushort *)(lVar10 + 8);
      *(undefined4 *)(puVar6 + 0x14) = 0xfffffffe;
      if (uVar11 == 0) goto LAB_027b68f0;
      puVar12 = (uint *)(lVar3 + lVar10 + 4);
      while (puVar12[-1] != 0xd55938bd) {
        puVar12 = puVar12 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) goto LAB_027b68f0;
      }
      uVar11 = 0;
      if (*puVar12 != 0xffffffff) {
        uVar11 = (ulong)*puVar12;
      }
      *(int *)(puVar6 + 0x14) = (int)uVar11;
      uVar2 = *puVar8;
      if (uVar2 == 0) goto LAB_027b68f0;
    }
    if ((undefined1 *)(uVar11 + (long)puVar8) != (undefined1 *)0x0) {
      uVar7 = *(undefined1 *)(uVar11 + (long)puVar8);
      goto LAB_027b68f4;
    }
  }
LAB_027b68f0:
  uVar7 = 0;
LAB_027b68f4:
  local_70 = puVar1;
  FUN_02747170(param_1 + 0x38,&local_70,uVar7);
  plVar14 = (long *)PTR_PTR_04bb6350;
LAB_027b6924:
  uVar17 = uVar17 + 1;
  if (uVar17 == uVar16) {
    return;
  }
  goto LAB_027b6930;
}

