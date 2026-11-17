
void FUN_02a0d880(undefined8 param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  int *piVar7;
  undefined2 uVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  uint uVar12;
  char cVar13;
  ulong uVar14;
  uint uVar15;
  undefined *local_20;
  long local_18;
  
  puVar5 = PTR_DAT_04bb94e8;
  puVar4 = PTR_DAT_04bb94e0;
  lVar9 = *(long *)PTR_DAT_04bb26a8;
  lVar10 = *(long *)(lVar9 + 0x19f7b0);
  uVar12 = (param_2 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
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
      puVar6 = (uint *)(ulong)uVar12;
      if (cVar13 != '\0') {
        uVar12 = *(uint *)puVar5;
        if ((int)uVar12 < 0) {
          if (uVar12 != 0xffffffff) goto LAB_02a0d9b4;
          uVar12 = 0xfffe;
          if (puVar6 != (uint *)0x0) goto LAB_02a0d934;
        }
        else {
          if ((ushort *)((ulong)uVar12 + (long)puVar11) == (ushort *)0x0) goto LAB_02a0d9b4;
          uVar12 = (uint)*(ushort *)((ulong)uVar12 + (long)puVar11);
        }
LAB_02a0d9b8:
        uVar3 = *puVar11;
        if (uVar3 == 0) goto LAB_02a0da58;
        uVar15 = *(uint *)(puVar5 + 8);
        goto LAB_02a0d9d8;
      }
      cVar13 = '\x01';
      *(undefined8 *)puVar5 = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
      *puVar4 = 1;
      puVar6 = (uint *)(ulong)*puVar11;
      uVar12 = 0xfffe;
      if (puVar6 == (uint *)0x0) goto LAB_02a0d9b8;
LAB_02a0d934:
      uVar12 = 0xfffe;
      if (puVar11 == puVar6) goto LAB_02a0d9b8;
      lVar10 = 0xc;
      if (*(char *)((long)puVar11 + (10 - (long)puVar6)) != '\0') {
        lVar10 = 0x1c;
      }
      lVar10 = (long)puVar11 + (lVar10 - (long)puVar6);
      if (lVar10 == 0) {
LAB_02a0d9b4:
        uVar12 = 0xfffe;
        goto LAB_02a0d9b8;
      }
      uVar14 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar6));
      *(undefined4 *)puVar5 = 0xfffffffe;
      if (uVar14 == 0) goto LAB_02a0d9b4;
      piVar7 = (int *)(lVar10 + 4);
      while (piVar7[-1] != 0x4e46c669) {
        piVar7 = piVar7 + 2;
        uVar14 = uVar14 - 1;
        if (uVar14 == 0) goto LAB_02a0d9b4;
      }
      iVar1 = 0;
      if (*piVar7 != -1) {
        iVar1 = *piVar7;
      }
      *(int *)puVar5 = iVar1;
      uVar12 = *puVar11;
    } while (uVar12 != 0);
  }
  uVar8 = 0;
  uVar12 = 0xfffe;
  goto LAB_02a0da5c;
LAB_02a0d9d8:
  if ((int)uVar15 < 0) {
    if ((uVar15 != 0xffffffff) || (lVar10 = (long)puVar11 - (ulong)uVar3, lVar10 == 0))
    goto LAB_02a0da58;
    lVar2 = 0xc;
    if (*(char *)(lVar10 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar10 == 0) goto LAB_02a0da58;
    uVar14 = (ulong)*(ushort *)(lVar10 + 8);
    *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
    if (uVar14 == 0) goto LAB_02a0da58;
    puVar6 = (uint *)(lVar2 + lVar10 + 4);
    while (puVar6[-1] != 0x46c45907) {
      puVar6 = puVar6 + 2;
      uVar14 = uVar14 - 1;
      if (uVar14 == 0) goto LAB_02a0da58;
    }
    uVar15 = 0;
    if (*puVar6 != 0xffffffff) {
      uVar15 = *puVar6;
    }
    *(uint *)(puVar5 + 8) = uVar15;
    uVar3 = *puVar11;
    if (uVar3 == 0) goto LAB_02a0da58;
    goto LAB_02a0d9d8;
  }
  if ((undefined2 *)((long)puVar11 + (ulong)uVar15) != (undefined2 *)0x0) {
    uVar8 = *(undefined2 *)((long)puVar11 + (ulong)uVar15);
    goto LAB_02a0da5c;
  }
LAB_02a0da58:
  uVar8 = 0;
LAB_02a0da5c:
  puVar5 = PTR_DAT_04bb9500;
  puVar4 = PTR_DAT_04bb94f8;
  local_20 = PTR_DAT_04bb2020 + 0x10;
  lVar9 = *(long *)(lVar9 + 0x19f7a8);
  uVar12 = uVar12 - *(ushort *)(lVar9 + 0x1f8);
  if ((uVar12 < *(uint *)(lVar9 + 0x1d8)) &&
     (puVar11 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar12 * 8), puVar11 != (uint *)0x0
     )) {
    uVar12 = *puVar11;
    if (uVar12 != 0) {
      cVar13 = *PTR_DAT_04bb94f8;
      do {
        if (cVar13 == '\0') {
          cVar13 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *puVar4 = 1;
          uVar12 = *puVar11;
        }
        else {
          uVar3 = *(uint *)(puVar5 + 4);
          if (-1 < (int)uVar3) {
            lVar9 = (ulong)uVar3 + (long)puVar11;
            goto LAB_02a0db68;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar6 = (uint *)(ulong)uVar12;
        lVar9 = 0;
        if ((puVar6 == (uint *)0x0) || (lVar9 = 0, puVar11 == puVar6)) goto LAB_02a0db68;
        lVar9 = 0xc;
        if (*(char *)((long)puVar11 + (10 - (long)puVar6)) != '\0') {
          lVar9 = 0x1c;
        }
        lVar10 = (long)puVar11 + (lVar9 - (long)puVar6);
        lVar9 = 0;
        if (lVar10 == 0) goto LAB_02a0db68;
        uVar14 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar6));
        *(undefined4 *)(puVar5 + 4) = 0xfffffffe;
        if (uVar14 == 0) break;
        piVar7 = (int *)(lVar10 + 4);
        while (piVar7[-1] != 0x13ab5198) {
          piVar7 = piVar7 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) goto LAB_02a0db64;
        }
        iVar1 = 0;
        if (*piVar7 != -1) {
          iVar1 = *piVar7;
        }
        *(int *)(puVar5 + 4) = iVar1;
        uVar12 = *puVar11;
        if (uVar12 == 0) break;
      } while( true );
    }
LAB_02a0db64:
    lVar9 = 0;
LAB_02a0db68:
    local_18 = *(long *)PTR_PTR_04bb94f0;
    if (lVar9 != 0) {
      local_18 = lVar9;
    }
    FUN_02a0d6e0(param_1,&local_20,uVar8);
  }
  return;
}

