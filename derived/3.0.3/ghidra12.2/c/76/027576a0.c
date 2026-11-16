
void FUN_027576a0(undefined2 *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  undefined2 uVar8;
  uint *puVar9;
  undefined2 *puVar10;
  uint *puVar11;
  int *piVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  char cVar18;
  
  puVar6 = PTR_DAT_04bb6468;
  puVar5 = PTR_DAT_04bb6460;
  lVar14 = *(long *)PTR_DAT_04bb2208;
  uVar15 = *(uint *)(lVar14 + 0x1f60);
  if (((int)uVar15 < 1) &&
     (((*(long *)(lVar14 + 0x1e50) == 0 ||
       (puVar9 = *(uint **)(*(long *)(lVar14 + 0x1e50) + 8), puVar9 == (uint *)0x0)) ||
      (uVar15 = *puVar9, uVar15 == 0)))) {
    return;
  }
  uVar16 = 0;
  cVar18 = *PTR_DAT_04bb6460;
LAB_02757720:
  if ((int)*(uint *)(lVar14 + 0x1f60) < 1) {
    if (((((*(long *)(lVar14 + 0x1e50) == 0) ||
          (puVar9 = *(uint **)(*(long *)(lVar14 + 0x1e50) + 8), puVar9 == (uint *)0x0)) ||
         ((uVar16 < *(uint *)(lVar14 + 0x1e68) &&
          (*(char *)(*(long *)(lVar14 + 0x1e70) + (long)(int)uVar16) == '\0')))) ||
        ((*puVar9 <= uVar16 || (puVar9[1] == 0)))) || ((ushort)puVar9[2] == 0)) goto LAB_02757714;
    iVar17 = 0xc;
    if (*(char *)((long)puVar9 + 10) != '\0') {
      iVar17 = 0x1c;
    }
    puVar9 = (uint *)((ulong)(puVar9[1] * uVar16 + (uint)(ushort)puVar9[2] * 8 + iVar17) +
                     (long)puVar9);
    if (puVar9 == (uint *)0x0) goto LAB_02757714;
LAB_0275774c:
    uVar7 = 0;
    if (*puVar9 != 0) {
      do {
        if (cVar18 != '\0') {
          uVar2 = *(uint *)(puVar6 + 0xc);
          if ((int)uVar2 < 0) {
            if (uVar2 == 0xffffffff) {
              uVar2 = *puVar9;
              if (uVar2 != 0) goto LAB_0275778c;
              uVar7 = 0;
              goto LAB_02757884;
            }
          }
          else {
            uVar7 = 0;
            if (((byte *)((ulong)uVar2 + (long)puVar9) == (byte *)0x0) ||
               (bVar3 = *(byte *)((ulong)uVar2 + (long)puVar9), uVar7 = (uint)bVar3, bVar3 < 5))
            goto LAB_02757884;
          }
LAB_02757880:
          uVar7 = 0;
          goto LAB_02757884;
        }
        cVar18 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
        uVar2 = *puVar9;
        uVar7 = 0;
        if (uVar2 == 0) goto LAB_02757884;
LAB_0275778c:
        puVar11 = (uint *)(ulong)uVar2;
        if (puVar9 == puVar11) goto LAB_02757880;
        lVar1 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar11)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar9 + (lVar1 - (long)puVar11);
        if (lVar1 == 0) goto LAB_02757880;
        uVar13 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar11));
        *(undefined4 *)(puVar6 + 0xc) = 0xfffffffe;
        uVar7 = 0;
        if (uVar13 == 0) goto LAB_02757884;
        piVar12 = (int *)(lVar1 + 4);
        while (piVar12[-1] != 0x5140e4b4) {
          piVar12 = piVar12 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) {
            uVar7 = 0;
            goto LAB_02757884;
          }
        }
        iVar17 = 0;
        if (*piVar12 != -1) {
          iVar17 = *piVar12;
        }
        *(int *)(puVar6 + 0xc) = iVar17;
      } while (*puVar9 != 0);
      uVar7 = 0;
    }
LAB_02757884:
    if (1 < uVar7 - 2) {
      if (uVar7 == 1) {
        if (*param_2 != 0) goto LAB_027578d4;
      }
      else if ((uVar7 == 4) && (0 < *param_2)) goto LAB_027578d4;
      goto LAB_02757714;
    }
LAB_027578d4:
    while (*puVar9 != 0) {
      if (cVar18 != '\0') {
        uVar7 = *(uint *)(puVar6 + 8);
        if ((int)uVar7 < 0) {
          if (uVar7 != 0xffffffff) goto LAB_02757a34;
          puVar11 = (uint *)(ulong)*puVar9;
          if (*puVar9 != 0) goto LAB_02757918;
          puVar11 = (uint *)0x0;
        }
        else {
          puVar11 = (uint *)0x0;
          if ((ushort *)((ulong)uVar7 + (long)puVar9) != (ushort *)0x0) {
            puVar11 = (uint *)(ulong)*(ushort *)((ulong)uVar7 + (long)puVar9);
          }
        }
LAB_02757968:
        uVar7 = *puVar9;
        goto joined_r0x0275796c;
      }
      cVar18 = '\x01';
      *(undefined8 *)puVar6 = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
      *puVar5 = 1;
      *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
      puVar11 = (uint *)(ulong)*puVar9;
      if (*puVar9 == 0) goto LAB_02757968;
LAB_02757918:
      if (puVar9 == puVar11) {
LAB_02757a34:
        puVar11 = (uint *)0x0;
        goto LAB_02757968;
      }
      lVar1 = 0xc;
      if (*(char *)((long)puVar9 + (10 - (long)puVar11)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar9 + (lVar1 - (long)puVar11);
      if (lVar1 == 0) goto LAB_02757a34;
      uVar13 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar11));
      *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
      puVar11 = (uint *)0x0;
      if (uVar13 == 0) goto LAB_02757968;
      piVar12 = (int *)(lVar1 + 4);
      while (piVar12[-1] != 0x54706054) {
        piVar12 = piVar12 + 2;
        uVar13 = uVar13 - 1;
        puVar11 = (uint *)0x0;
        if (uVar13 == 0) goto LAB_02757968;
      }
      iVar17 = 0;
      if (*piVar12 != -1) {
        iVar17 = *piVar12;
      }
      *(int *)(puVar6 + 8) = iVar17;
    }
    uVar8 = 0;
    goto LAB_0275770c;
  }
  if (uVar16 < *(uint *)(lVar14 + 0x1f60)) {
    uVar7 = uVar16;
    if (*(uint *)(lVar14 + 0x1f50) <= uVar16) {
      uVar7 = 0;
    }
    puVar9 = *(uint **)(*(long *)(lVar14 + 0x1f58) + (ulong)uVar7 * 8);
    if (puVar9 != (uint *)0x0) goto LAB_0275774c;
  }
  goto LAB_02757714;
joined_r0x0275796c:
  if (uVar7 == 0) goto LAB_02757a18;
  if (cVar18 == '\0') {
    cVar18 = '\x01';
    *(undefined8 *)puVar6 = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
    *puVar5 = 1;
    *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
    uVar7 = *puVar9;
  }
  else {
    uVar2 = *(uint *)puVar6;
    if (-1 < (int)uVar2) {
      uVar7 = 0;
      if ((uint *)((ulong)uVar2 + (long)puVar9) != (uint *)0x0) {
        uVar7 = *(uint *)((ulong)uVar2 + (long)puVar9);
      }
      goto LAB_02757a1c;
    }
    if (uVar2 != 0xffffffff) goto LAB_02757a18;
  }
  puVar4 = (uint *)(ulong)uVar7;
  if ((puVar4 == (uint *)0x0) || (puVar9 == puVar4)) goto LAB_02757a18;
  lVar1 = 0xc;
  if (*(char *)((long)puVar9 + (10 - (long)puVar4)) != '\0') {
    lVar1 = 0x1c;
  }
  lVar1 = (long)puVar9 + (lVar1 - (long)puVar4);
  if (lVar1 == 0) goto LAB_02757a18;
  uVar13 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar4));
  *(undefined4 *)puVar6 = 0xfffffffe;
  if (uVar13 == 0) goto LAB_02757a18;
  piVar12 = (int *)(lVar1 + 4);
  while (piVar12[-1] != 0x4c24f1cf) {
    piVar12 = piVar12 + 2;
    uVar13 = uVar13 - 1;
    if (uVar13 == 0) goto LAB_02757a18;
  }
  iVar17 = 0;
  if (*piVar12 != -1) {
    iVar17 = *piVar12;
  }
  *(int *)puVar6 = iVar17;
  uVar7 = *puVar9;
  goto joined_r0x0275796c;
LAB_02757a18:
  uVar7 = 0;
LAB_02757a1c:
  if (0xfffe < uVar7) {
    uVar7 = 0xffff;
  }
  uVar8 = (undefined2)uVar7;
  if ((uint)puVar11 < 0x800) {
    puVar10 = param_1 + (long)puVar11;
  }
  else {
LAB_0275770c:
    puVar10 = param_1;
  }
  *puVar10 = uVar8;
LAB_02757714:
  uVar16 = uVar16 + 1;
  if (uVar16 == uVar15) {
    return;
  }
  goto LAB_02757720;
}

