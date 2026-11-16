
void FUN_0273be90(undefined2 *param_1,long *param_2)

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
  
  puVar5 = PTR_DAT_04bb63d0;
  puVar4 = PTR_DAT_04bb63c8;
  lVar13 = *(long *)PTR_DAT_04bb2208;
  uVar14 = *(uint *)(lVar13 + 0x12a0);
  if (((int)uVar14 < 1) &&
     (((*(long *)(lVar13 + 0x1190) == 0 ||
       (puVar8 = *(uint **)(*(long *)(lVar13 + 0x1190) + 8), puVar8 == (uint *)0x0)) ||
      (uVar14 = *puVar8, uVar14 == 0)))) {
    return;
  }
  uVar15 = 0;
  cVar17 = *PTR_DAT_04bb63c8;
LAB_0273bf1c:
  if (0 < (int)*(uint *)(lVar13 + 0x12a0)) {
    if (uVar15 < *(uint *)(lVar13 + 0x12a0)) {
      uVar6 = uVar15;
      if (*(uint *)(lVar13 + 0x1290) <= uVar15) {
        uVar6 = 0;
      }
      puVar8 = *(uint **)(*(long *)(lVar13 + 0x1298) + (ulong)uVar6 * 8);
      if (puVar8 != (uint *)0x0) goto LAB_0273bf48;
    }
    goto switchD_0273c0a4_default;
  }
  if (((((*(long *)(lVar13 + 0x1190) == 0) ||
        (puVar8 = *(uint **)(*(long *)(lVar13 + 0x1190) + 8), puVar8 == (uint *)0x0)) ||
       ((uVar15 < *(uint *)(lVar13 + 0x11a8) &&
        (*(char *)(*(long *)(lVar13 + 0x11b0) + (long)(int)uVar15) == '\0')))) ||
      ((*puVar8 <= uVar15 || (puVar8[1] == 0)))) || ((ushort)puVar8[2] == 0))
  goto switchD_0273c0a4_default;
  iVar16 = 0xc;
  if (*(char *)((long)puVar8 + 10) != '\0') {
    iVar16 = 0x1c;
  }
  puVar8 = (uint *)((ulong)(puVar8[1] * uVar15 + (uint)(ushort)puVar8[2] * 8 + iVar16) +
                   (long)puVar8);
  if (puVar8 == (uint *)0x0) goto switchD_0273c0a4_default;
LAB_0273bf48:
  bVar9 = 0;
  if (*puVar8 != 0) {
    do {
      if (cVar17 != '\0') {
        uVar6 = *(uint *)(puVar5 + 0xc);
        if ((int)uVar6 < 0) {
          if (uVar6 == 0xffffffff) {
            uVar6 = *puVar8;
            if (uVar6 != 0) goto LAB_0273bf8c;
            bVar9 = 0;
            goto LAB_0273c084;
          }
        }
        else {
          bVar9 = 0;
          if (((byte *)((ulong)uVar6 + (long)puVar8) == (byte *)0x0) ||
             (bVar9 = *(byte *)((ulong)uVar6 + (long)puVar8), bVar9 < 5)) goto LAB_0273c084;
        }
LAB_0273c080:
        bVar9 = 0;
        goto LAB_0273c084;
      }
      cVar17 = '\x01';
      *(undefined8 *)puVar5 = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
      *puVar4 = 1;
      *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
      *(undefined4 *)(puVar5 + 0x18) = 0xffffffff;
      uVar6 = *puVar8;
      bVar9 = 0;
      if (uVar6 == 0) goto LAB_0273c084;
LAB_0273bf8c:
      puVar11 = (uint *)(ulong)uVar6;
      if (puVar8 == puVar11) goto LAB_0273c080;
      lVar1 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar11)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar8 + (lVar1 - (long)puVar11);
      if (lVar1 == 0) goto LAB_0273c080;
      uVar12 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar11));
      *(undefined4 *)(puVar5 + 0xc) = 0xfffffffe;
      bVar9 = 0;
      if (uVar12 == 0) goto LAB_0273c084;
      piVar18 = (int *)(lVar1 + 4);
      while (piVar18[-1] != 0x5140e4b4) {
        piVar18 = piVar18 + 2;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) {
          bVar9 = 0;
          goto LAB_0273c084;
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
LAB_0273c084:
  switch(bVar9) {
  case 1:
    if (*param_2 != 0) goto switchD_0273c0a4_caseD_3;
    break;
  case 2:
    if ((*param_2 != 0) || (*(char *)((long)param_2 + 0x2a) != '\0')) goto switchD_0273c0a4_caseD_3;
    break;
  case 3:
switchD_0273c0a4_caseD_3:
    while (*puVar8 != 0) {
      if (cVar17 != '\0') {
        uVar6 = *(uint *)(puVar5 + 8);
        if ((int)uVar6 < 0) {
          if (uVar6 != 0xffffffff) goto LAB_0273c254;
          puVar11 = (uint *)(ulong)*puVar8;
          if (*puVar8 != 0) goto LAB_0273c13c;
          puVar11 = (uint *)0x0;
        }
        else {
          puVar11 = (uint *)0x0;
          if ((ushort *)((ulong)uVar6 + (long)puVar8) != (ushort *)0x0) {
            puVar11 = (uint *)(ulong)*(ushort *)((ulong)uVar6 + (long)puVar8);
          }
        }
LAB_0273c188:
        uVar6 = *puVar8;
        goto joined_r0x0273c18c;
      }
      cVar17 = '\x01';
      *(undefined8 *)puVar5 = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
      *puVar4 = 1;
      *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
      *(undefined4 *)(puVar5 + 0x18) = 0xffffffff;
      puVar11 = (uint *)(ulong)*puVar8;
      if (*puVar8 == 0) goto LAB_0273c188;
LAB_0273c13c:
      if (puVar8 == puVar11) {
LAB_0273c254:
        puVar11 = (uint *)0x0;
        goto LAB_0273c188;
      }
      lVar1 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar11)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar8 + (lVar1 - (long)puVar11);
      if (lVar1 == 0) goto LAB_0273c254;
      uVar12 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar11));
      *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
      puVar11 = (uint *)0x0;
      if (uVar12 == 0) goto LAB_0273c188;
      piVar18 = (int *)(lVar1 + 4);
      while (piVar18[-1] != 0x54706054) {
        piVar18 = piVar18 + 2;
        uVar12 = uVar12 - 1;
        puVar11 = (uint *)0x0;
        if (uVar12 == 0) goto LAB_0273c188;
      }
      iVar16 = 0;
      if (*piVar18 != -1) {
        iVar16 = *piVar18;
      }
      *(int *)(puVar5 + 8) = iVar16;
    }
    uVar7 = 0;
    goto LAB_0273bf04;
  case 4:
    if (0 < *param_2) goto switchD_0273c0a4_caseD_3;
  }
  goto switchD_0273c0a4_default;
joined_r0x0273c18c:
  if (uVar6 == 0) goto LAB_0273c238;
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
      goto LAB_0273c23c;
    }
    if (uVar2 != 0xffffffff) goto LAB_0273c238;
  }
  puVar3 = (uint *)(ulong)uVar6;
  if ((puVar3 == (uint *)0x0) || (puVar8 == puVar3)) goto LAB_0273c238;
  lVar1 = 0xc;
  if (*(char *)((long)puVar8 + (10 - (long)puVar3)) != '\0') {
    lVar1 = 0x1c;
  }
  lVar1 = (long)puVar8 + (lVar1 - (long)puVar3);
  if (lVar1 == 0) goto LAB_0273c238;
  uVar12 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar3));
  *(undefined4 *)puVar5 = 0xfffffffe;
  if (uVar12 == 0) goto LAB_0273c238;
  piVar18 = (int *)(lVar1 + 4);
  while (piVar18[-1] != 0x4c24f1cf) {
    piVar18 = piVar18 + 2;
    uVar12 = uVar12 - 1;
    if (uVar12 == 0) goto LAB_0273c238;
  }
  iVar16 = 0;
  if (*piVar18 != -1) {
    iVar16 = *piVar18;
  }
  *(int *)puVar5 = iVar16;
  uVar6 = *puVar8;
  goto joined_r0x0273c18c;
LAB_0273c238:
  uVar6 = 0;
LAB_0273c23c:
  if (0xfffe < uVar6) {
    uVar6 = 0xffff;
  }
  uVar7 = (undefined2)uVar6;
  if ((uint)puVar11 < 0x80) {
    puVar10 = param_1 + (long)puVar11;
  }
  else {
LAB_0273bf04:
    puVar10 = param_1;
  }
  *puVar10 = uVar7;
switchD_0273c0a4_default:
  uVar15 = uVar15 + 1;
  if (uVar15 == uVar14) {
    return;
  }
  goto LAB_0273bf1c;
}

