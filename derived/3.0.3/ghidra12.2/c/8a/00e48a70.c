
void FUN_00e48a70(uint param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int *piVar6;
  uint *puVar7;
  undefined2 uVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  uint uVar12;
  char cVar13;
  ulong uVar14;
  uint uVar15;
  undefined *local_20;
  long lStack_18;
  
  puVar5 = PTR_DAT_04bb94e8;
  puVar4 = PTR_DAT_04bb94e0;
  lVar9 = *(long *)PTR_DAT_04bb26a8;
  lVar10 = *(long *)(lVar9 + 0x19f7b0);
  if (lVar10 == 0) {
    return;
  }
  uVar12 = (param_1 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if (*(uint *)(lVar10 + 0x1d8) <= uVar12) {
    return;
  }
  puVar11 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar12 * 8);
  if (puVar11 == (uint *)0x0) {
    return;
  }
  uVar12 = *puVar11;
  if (uVar12 != 0) {
    cVar13 = *PTR_DAT_04bb94e0;
    do {
      puVar7 = (uint *)(ulong)uVar12;
      if (cVar13 != '\0') {
        uVar12 = *(uint *)puVar5;
        if ((int)uVar12 < 0) {
          if (uVar12 != 0xffffffff) goto LAB_00e48bb0;
          uVar12 = 0xfffe;
          if (puVar7 != (uint *)0x0) goto LAB_00e48b28;
        }
        else {
          if ((ushort *)((ulong)uVar12 + (long)puVar11) == (ushort *)0x0) goto LAB_00e48bb0;
          uVar12 = (uint)*(ushort *)((ulong)uVar12 + (long)puVar11);
        }
LAB_00e48bb4:
        uVar3 = *puVar11;
        if (uVar3 == 0) goto LAB_00e48c58;
        uVar15 = *(uint *)(puVar5 + 8);
        goto LAB_00e48bd4;
      }
      *(undefined8 *)puVar5 = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
      cVar13 = '\x01';
      puVar7 = (uint *)(ulong)*puVar11;
      *puVar4 = 1;
      uVar12 = 0xfffe;
      if (puVar7 == (uint *)0x0) goto LAB_00e48bb4;
LAB_00e48b28:
      uVar12 = 0xfffe;
      if (puVar11 == puVar7) goto LAB_00e48bb4;
      lVar10 = 0xc;
      if (*(char *)((long)puVar11 + (10 - (long)puVar7)) != '\0') {
        lVar10 = 0x1c;
      }
      lVar10 = (long)puVar11 + (lVar10 - (long)puVar7);
      if (lVar10 == 0) {
LAB_00e48bb0:
        uVar12 = 0xfffe;
        goto LAB_00e48bb4;
      }
      uVar14 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar7));
      *(undefined4 *)puVar5 = 0xfffffffe;
      if (uVar14 == 0) goto LAB_00e48bb0;
      piVar6 = (int *)(lVar10 + 4);
      while (piVar6[-1] != 0x4e46c669) {
        piVar6 = piVar6 + 2;
        uVar14 = uVar14 - 1;
        if (uVar14 == 0) goto LAB_00e48bb0;
      }
      iVar1 = 0;
      if (*piVar6 != -1) {
        iVar1 = *piVar6;
      }
      *(int *)puVar5 = iVar1;
      uVar12 = *puVar11;
    } while (uVar12 != 0);
  }
  uVar8 = 0;
  uVar12 = 0xfffe;
  goto LAB_00e48c5c;
LAB_00e48bd4:
  if ((int)uVar15 < 0) {
    if ((uVar15 != 0xffffffff) || (lVar10 = (long)puVar11 - (ulong)uVar3, lVar10 == 0))
    goto LAB_00e48c58;
    lVar2 = 0xc;
    if (*(char *)(lVar10 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar10 == 0) goto LAB_00e48c58;
    uVar14 = (ulong)*(ushort *)(lVar10 + 8);
    *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
    if (uVar14 == 0) goto LAB_00e48c58;
    puVar7 = (uint *)(lVar2 + lVar10 + 4);
    while (puVar7[-1] != 0x46c45907) {
      puVar7 = puVar7 + 2;
      uVar14 = uVar14 - 1;
      if (uVar14 == 0) goto LAB_00e48c58;
    }
    uVar15 = 0;
    if (*puVar7 != 0xffffffff) {
      uVar15 = *puVar7;
    }
    *(uint *)(puVar5 + 8) = uVar15;
    uVar3 = *puVar11;
    if (uVar3 == 0) goto LAB_00e48c58;
    goto LAB_00e48bd4;
  }
  if ((undefined2 *)((long)puVar11 + (ulong)uVar15) != (undefined2 *)0x0) {
    uVar8 = *(undefined2 *)((long)puVar11 + (ulong)uVar15);
    goto LAB_00e48c5c;
  }
LAB_00e48c58:
  uVar8 = 0;
LAB_00e48c5c:
  puVar5 = PTR_DAT_04bb9500;
  puVar4 = PTR_DAT_04bb94f8;
  lVar10 = *(long *)(lVar9 + 0x19f7a8);
  if (((lVar10 != 0) &&
      (uVar12 = uVar12 - *(ushort *)(lVar10 + 0x1f8), uVar12 < *(uint *)(lVar10 + 0x1d8))) &&
     (puVar11 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar12 * 8),
     puVar11 != (uint *)0x0)) {
    uVar12 = *puVar11;
    if (uVar12 != 0) {
      cVar13 = *PTR_DAT_04bb94f8;
      do {
        if (cVar13 == '\0') {
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          cVar13 = '\x01';
          uVar12 = *puVar11;
          *puVar4 = 1;
        }
        else {
          uVar3 = *(uint *)(puVar5 + 4);
          if (-1 < (int)uVar3) {
            lVar10 = (ulong)uVar3 + (long)puVar11;
            goto LAB_00e48d58;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar7 = (uint *)(ulong)uVar12;
        lVar10 = 0;
        if ((puVar7 == (uint *)0x0) || (puVar11 == puVar7)) goto LAB_00e48d58;
        lVar10 = 0xc;
        if (*(char *)((long)puVar11 + (10 - (long)puVar7)) != '\0') {
          lVar10 = 0x1c;
        }
        lVar2 = (long)puVar11 + (lVar10 - (long)puVar7);
        lVar10 = 0;
        if (lVar2 == 0) goto LAB_00e48d58;
        uVar14 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar7));
        *(undefined4 *)(puVar5 + 4) = 0xfffffffe;
        if (uVar14 == 0) break;
        piVar6 = (int *)(lVar2 + 4);
        while (piVar6[-1] != 0x13ab5198) {
          piVar6 = piVar6 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) goto LAB_00e48d54;
        }
        iVar1 = 0;
        if (*piVar6 != -1) {
          iVar1 = *piVar6;
        }
        *(int *)(puVar5 + 4) = iVar1;
        uVar12 = *puVar11;
        if (uVar12 == 0) break;
      } while( true );
    }
LAB_00e48d54:
    lVar10 = 0;
LAB_00e48d58:
    lStack_18 = *(long *)PTR_PTR_04bb94f0;
    if (lVar10 != 0) {
      lStack_18 = lVar10;
    }
    local_20 = PTR_DAT_04bb2020 + 0x10;
    FUN_02a0d6e0(lVar9 + 0xa7660,&local_20,uVar8);
  }
  return;
}

