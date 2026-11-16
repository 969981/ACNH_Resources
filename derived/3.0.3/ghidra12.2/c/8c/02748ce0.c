
void FUN_02748ce0(undefined2 *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined2 uVar7;
  uint *puVar8;
  byte bVar9;
  undefined2 *puVar10;
  uint *puVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  char cVar17;
  int *piVar18;
  
  puVar5 = PTR_DAT_04bb6370;
  puVar4 = PTR_DAT_04bb6368;
  lVar13 = *(long *)PTR_DAT_04bb2208;
  uVar14 = *(uint *)(lVar13 + 0x600);
  if (((int)uVar14 < 1) &&
     (((*(long *)(lVar13 + 0x4f0) == 0 ||
       (puVar8 = *(uint **)(*(long *)(lVar13 + 0x4f0) + 8), puVar8 == (uint *)0x0)) ||
      (uVar14 = *puVar8, uVar14 == 0)))) {
    return;
  }
  uVar15 = 0;
  cVar17 = *PTR_DAT_04bb6368;
LAB_02748d6c:
  if (0 < (int)*(uint *)(lVar13 + 0x600)) {
    if (uVar15 < *(uint *)(lVar13 + 0x600)) {
      uVar6 = uVar15;
      if (*(uint *)(lVar13 + 0x5f0) <= uVar15) {
        uVar6 = 0;
      }
      puVar8 = *(uint **)(*(long *)(lVar13 + 0x5f8) + (ulong)uVar6 * 8);
      if (puVar8 != (uint *)0x0) goto LAB_02748d98;
    }
    goto switchD_02748ef4_default;
  }
  if (((((*(long *)(lVar13 + 0x4f0) == 0) ||
        (puVar8 = *(uint **)(*(long *)(lVar13 + 0x4f0) + 8), puVar8 == (uint *)0x0)) ||
       ((uVar15 < *(uint *)(lVar13 + 0x508) &&
        (*(char *)(*(long *)(lVar13 + 0x510) + (long)(int)uVar15) == '\0')))) ||
      ((*puVar8 <= uVar15 || (puVar8[1] == 0)))) || ((ushort)puVar8[2] == 0))
  goto switchD_02748ef4_default;
  iVar16 = 0xc;
  if (*(char *)((long)puVar8 + 10) != '\0') {
    iVar16 = 0x1c;
  }
  puVar8 = (uint *)((ulong)(puVar8[1] * uVar15 + (uint)(ushort)puVar8[2] * 8 + iVar16) +
                   (long)puVar8);
  if (puVar8 == (uint *)0x0) goto switchD_02748ef4_default;
LAB_02748d98:
  bVar9 = 0;
  if (*puVar8 != 0) {
    do {
      if (cVar17 != '\0') {
        uVar6 = *(uint *)(puVar5 + 0xc);
        if ((int)uVar6 < 0) {
          if (uVar6 == 0xffffffff) {
            uVar6 = *puVar8;
            if (uVar6 != 0) goto LAB_02748ddc;
            bVar9 = 0;
            goto LAB_02748ed4;
          }
        }
        else {
          bVar9 = 0;
          if (((byte *)((ulong)uVar6 + (long)puVar8) == (byte *)0x0) ||
             (bVar9 = *(byte *)((ulong)uVar6 + (long)puVar8), bVar9 < 5)) goto LAB_02748ed4;
        }
LAB_02748ed0:
        bVar9 = 0;
        goto LAB_02748ed4;
      }
      cVar17 = '\x01';
      *(undefined8 *)puVar5 = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
      *puVar4 = 1;
      *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
      *(undefined4 *)(puVar5 + 0x18) = 0xffffffff;
      uVar6 = *puVar8;
      bVar9 = 0;
      if (uVar6 == 0) goto LAB_02748ed4;
LAB_02748ddc:
      puVar11 = (uint *)(ulong)uVar6;
      if (puVar8 == puVar11) goto LAB_02748ed0;
      lVar1 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar11)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar8 + (lVar1 - (long)puVar11);
      if (lVar1 == 0) goto LAB_02748ed0;
      uVar12 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar11));
      *(undefined4 *)(puVar5 + 0xc) = 0xfffffffe;
      bVar9 = 0;
      if (uVar12 == 0) goto LAB_02748ed4;
      piVar18 = (int *)(lVar1 + 4);
      while (piVar18[-1] != 0x5140e4b4) {
        piVar18 = piVar18 + 2;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) {
          bVar9 = 0;
          goto LAB_02748ed4;
        }
      }
      iVar16 = 0;
      if (*piVar18 != -1) {
        iVar16 = *piVar18;
      }
      *(int *)(puVar5 + 0xc) = iVar16;
    } while (*puVar8 != 0);
    bVar9 = 0;
  }
LAB_02748ed4:
  switch(bVar9) {
  case 1:
    if (*param_2 != 0) goto switchD_02748ef4_caseD_3;
    break;
  case 2:
    if ((*param_2 != 0) || (*(char *)((long)param_2 + 0x2a) != '\0')) goto switchD_02748ef4_caseD_3;
    break;
  case 3:
switchD_02748ef4_caseD_3:
    while (*puVar8 != 0) {
      if (cVar17 != '\0') {
        uVar6 = *(uint *)(puVar5 + 8);
        if ((int)uVar6 < 0) {
          if (uVar6 != 0xffffffff) goto LAB_027490a4;
          puVar11 = (uint *)(ulong)*puVar8;
          if (*puVar8 != 0) goto LAB_02748f8c;
          puVar11 = (uint *)0x0;
        }
        else {
          puVar11 = (uint *)0x0;
          if ((ushort *)((ulong)uVar6 + (long)puVar8) != (ushort *)0x0) {
            puVar11 = (uint *)(ulong)*(ushort *)((ulong)uVar6 + (long)puVar8);
          }
        }
LAB_02748fd8:
        uVar6 = *puVar8;
        goto joined_r0x02748fdc;
      }
      cVar17 = '\x01';
      *(undefined8 *)puVar5 = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
      *puVar4 = 1;
      *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
      *(undefined4 *)(puVar5 + 0x18) = 0xffffffff;
      puVar11 = (uint *)(ulong)*puVar8;
      if (*puVar8 == 0) goto LAB_02748fd8;
LAB_02748f8c:
      if (puVar8 == puVar11) {
LAB_027490a4:
        puVar11 = (uint *)0x0;
        goto LAB_02748fd8;
      }
      lVar1 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar11)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar8 + (lVar1 - (long)puVar11);
      if (lVar1 == 0) goto LAB_027490a4;
      uVar12 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar11));
      *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
      puVar11 = (uint *)0x0;
      if (uVar12 == 0) goto LAB_02748fd8;
      piVar18 = (int *)(lVar1 + 4);
      while (piVar18[-1] != 0x54706054) {
        piVar18 = piVar18 + 2;
        uVar12 = uVar12 - 1;
        puVar11 = (uint *)0x0;
        if (uVar12 == 0) goto LAB_02748fd8;
      }
      iVar16 = 0;
      if (*piVar18 != -1) {
        iVar16 = *piVar18;
      }
      *(int *)(puVar5 + 8) = iVar16;
    }
    uVar7 = 0;
    goto LAB_02748d54;
  case 4:
    if (0 < *param_2) goto switchD_02748ef4_caseD_3;
  }
  goto switchD_02748ef4_default;
joined_r0x02748fdc:
  if (uVar6 == 0) goto LAB_02749088;
  if (cVar17 == '\0') {
    cVar17 = '\x01';
    *(undefined8 *)puVar5 = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
    *puVar4 = 1;
    *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
    *(undefined4 *)(puVar5 + 0x18) = 0xffffffff;
    uVar6 = *puVar8;
  }
  else {
    uVar2 = *(uint *)puVar5;
    if (-1 < (int)uVar2) {
      uVar6 = 0;
      if ((uint *)((ulong)uVar2 + (long)puVar8) != (uint *)0x0) {
        uVar6 = *(uint *)((ulong)uVar2 + (long)puVar8);
      }
      goto LAB_0274908c;
    }
    if (uVar2 != 0xffffffff) goto LAB_02749088;
  }
  puVar3 = (uint *)(ulong)uVar6;
  if ((puVar3 == (uint *)0x0) || (puVar8 == puVar3)) goto LAB_02749088;
  lVar1 = 0xc;
  if (*(char *)((long)puVar8 + (10 - (long)puVar3)) != '\0') {
    lVar1 = 0x1c;
  }
  lVar1 = (long)puVar8 + (lVar1 - (long)puVar3);
  if (lVar1 == 0) goto LAB_02749088;
  uVar12 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar3));
  *(undefined4 *)puVar5 = 0xfffffffe;
  if (uVar12 == 0) goto LAB_02749088;
  piVar18 = (int *)(lVar1 + 4);
  while (piVar18[-1] != 0x4c24f1cf) {
    piVar18 = piVar18 + 2;
    uVar12 = uVar12 - 1;
    if (uVar12 == 0) goto LAB_02749088;
  }
  iVar16 = 0;
  if (*piVar18 != -1) {
    iVar16 = *piVar18;
  }
  *(int *)puVar5 = iVar16;
  uVar6 = *puVar8;
  goto joined_r0x02748fdc;
LAB_02749088:
  uVar6 = 0;
LAB_0274908c:
  if (0xfffe < uVar6) {
    uVar6 = 0xffff;
  }
  uVar7 = (undefined2)uVar6;
  if ((uint)puVar11 < 0x100) {
    puVar10 = param_1 + (long)puVar11;
  }
  else {
LAB_02748d54:
    puVar10 = param_1;
  }
  *puVar10 = uVar7;
switchD_02748ef4_default:
  uVar15 = uVar15 + 1;
  if (uVar15 == uVar14) {
    return;
  }
  goto LAB_02748d6c;
}

