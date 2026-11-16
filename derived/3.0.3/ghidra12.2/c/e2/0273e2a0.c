
/* WARNING: Type propagation algorithm not settling */

void FUN_0273e2a0(undefined2 *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined2 uVar7;
  uint *puVar8;
  uint uVar9;
  undefined2 *puVar10;
  ulong uVar11;
  uint *puVar12;
  int *piVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  char cVar18;
  
  puVar5 = PTR_DAT_04bb5810;
  puVar4 = PTR_DAT_04bb5808;
  lVar14 = *(long *)PTR_DAT_04bb2208;
  uVar15 = *(uint *)(lVar14 + 0xa40);
  if (((int)uVar15 < 1) &&
     (((*(long *)(lVar14 + 0x930) == 0 ||
       (puVar8 = *(uint **)(*(long *)(lVar14 + 0x930) + 8), puVar8 == (uint *)0x0)) ||
      (uVar15 = *puVar8, uVar15 == 0)))) {
    return;
  }
  uVar16 = 0;
  cVar18 = *PTR_DAT_04bb5808;
LAB_0273e318:
  if (0 < (int)*(uint *)(lVar14 + 0xa40)) {
    if (*(uint *)(lVar14 + 0xa40) <= uVar16) goto LAB_0273e30c;
    uVar1 = uVar16;
    if (*(uint *)(lVar14 + 0xa30) <= uVar16) {
      uVar1 = 0;
    }
    puVar8 = *(uint **)(*(long *)(lVar14 + 0xa38) + (ulong)uVar1 * 8);
    if (puVar8 == (uint *)0x0) goto LAB_0273e30c;
LAB_0273e344:
    uVar1 = *puVar8;
    while (uVar1 != 0) {
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
        uVar11 = (ulong)*(uint *)(puVar5 + 0x14);
        if (-1 < (int)*(uint *)(puVar5 + 0x14)) {
          if (((ushort *)(uVar11 + (long)puVar8) == (ushort *)0x0) ||
             (*(ushort *)(uVar11 + (long)puVar8) < 0x400)) goto LAB_0273e3ec;
          goto LAB_0273e30c;
        }
        if (uVar11 != 0xffffffff) goto LAB_0273e3ec;
      }
      lVar3 = (long)puVar8 - (ulong)*puVar8;
      if (*puVar8 == 0) {
        uVar11 = 0xffffffff;
        goto LAB_0273e3ec;
      }
      if (lVar3 == 0) {
        uVar11 = 0xffffffff;
        goto LAB_0273e3ec;
      }
      lVar2 = 0xc;
      if (*(char *)(lVar3 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      if (lVar2 + lVar3 == 0) {
        uVar11 = 0xffffffff;
        goto LAB_0273e3ec;
      }
      uVar11 = (ulong)*(ushort *)(lVar3 + 8);
      *(undefined4 *)(puVar5 + 0x14) = 0xfffffffe;
      if (uVar11 == 0) {
        uVar11 = 0xfffffffe;
        goto LAB_0273e3ec;
      }
      piVar13 = (int *)(lVar2 + lVar3 + 4);
      while (piVar13[-1] != 0x54706054) {
        piVar13 = piVar13 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) {
          uVar11 = 0xfffffffe;
          goto LAB_0273e3ec;
        }
      }
      iVar17 = 0;
      if (*piVar13 != -1) {
        iVar17 = *piVar13;
      }
      *(int *)(puVar5 + 0x14) = iVar17;
      uVar1 = *puVar8;
    }
LAB_0273e300:
    uVar7 = 0;
    goto LAB_0273e304;
  }
  if (((((*(long *)(lVar14 + 0x930) != 0) &&
        (puVar8 = *(uint **)(*(long *)(lVar14 + 0x930) + 8), puVar8 != (uint *)0x0)) &&
       ((*(uint *)(lVar14 + 0x948) <= uVar16 ||
        (*(char *)(*(long *)(lVar14 + 0x950) + (long)(int)uVar16) != '\0')))) &&
      ((uVar16 < *puVar8 && (puVar8[1] != 0)))) && ((ushort)puVar8[2] != 0)) {
    iVar17 = 0xc;
    if (*(char *)((long)puVar8 + 10) != '\0') {
      iVar17 = 0x1c;
    }
    puVar8 = (uint *)((ulong)(puVar8[1] * uVar16 + (uint)(ushort)puVar8[2] * 8 + iVar17) +
                     (long)puVar8);
    if (puVar8 != (uint *)0x0) goto LAB_0273e344;
  }
  goto LAB_0273e30c;
LAB_0273e3ec:
  if (*puVar8 == 0) goto LAB_0273e300;
  if (cVar18 != '\0') {
    if ((int)uVar11 < 0) {
      if ((uVar11 == 0xffffffff) && (uVar1 = *puVar8, uVar1 != 0)) goto LAB_0273e42c;
    }
    else if ((ushort *)(uVar11 + (long)puVar8) != (ushort *)0x0) {
      uVar9 = (uint)*(ushort *)(uVar11 + (long)puVar8);
      uVar1 = *puVar8;
      goto joined_r0x0273e514;
    }
LAB_0273e560:
    uVar9 = 0;
    uVar1 = *puVar8;
    goto joined_r0x0273e514;
  }
  cVar18 = '\x01';
  *(undefined8 *)puVar5 = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
  *puVar4 = 1;
  *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
  uVar1 = *puVar8;
  if (uVar1 == 0) goto LAB_0273e560;
LAB_0273e42c:
  puVar12 = (uint *)(ulong)uVar1;
  if (puVar8 == puVar12) {
LAB_0273e50c:
    uVar9 = 0;
    uVar1 = *puVar8;
    goto joined_r0x0273e514;
  }
  lVar3 = 0xc;
  if (*(char *)((long)puVar8 + (10 - (long)puVar12)) != '\0') {
    lVar3 = 0x1c;
  }
  lVar3 = (long)puVar8 + (lVar3 - (long)puVar12);
  if (lVar3 == 0) goto LAB_0273e50c;
  uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar12));
  *(undefined4 *)(puVar5 + 0x14) = 0xfffffffe;
  if (uVar11 == 0) goto LAB_0273e560;
  puVar12 = (uint *)(lVar3 + 4);
  while (puVar12[-1] != 0x54706054) {
    puVar12 = puVar12 + 2;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) goto LAB_0273e560;
  }
  uVar11 = 0;
  if (*puVar12 != 0xffffffff) {
    uVar11 = (ulong)*puVar12;
  }
  *(int *)(puVar5 + 0x14) = (int)uVar11;
  goto LAB_0273e3ec;
joined_r0x0273e514:
  if (uVar1 == 0) goto LAB_0273e618;
  if (cVar18 == '\0') {
    cVar18 = '\x01';
    *(undefined8 *)puVar5 = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
    *puVar4 = 1;
    *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
    uVar1 = *puVar8;
  }
  else {
    uVar1 = *(uint *)(puVar5 + 4);
    if (-1 < (int)uVar1) {
      uVar6 = 0;
      if ((uint *)((ulong)uVar1 + (long)puVar8) != (uint *)0x0) {
        uVar6 = *(uint *)((ulong)uVar1 + (long)puVar8);
      }
      goto LAB_0273e61c;
    }
    if (uVar1 != 0xffffffff) goto LAB_0273e618;
    uVar1 = *puVar8;
  }
  if ((uVar1 == 0) || (puVar12 = (uint *)(ulong)uVar1, puVar8 == puVar12)) goto LAB_0273e618;
  lVar3 = 0xc;
  if (*(char *)((long)puVar8 + (10 - (long)puVar12)) != '\0') {
    lVar3 = 0x1c;
  }
  lVar3 = (long)puVar8 + (lVar3 - (long)puVar12);
  if (lVar3 == 0) goto LAB_0273e618;
  uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar12));
  *(undefined4 *)(puVar5 + 4) = 0xfffffffe;
  if (uVar11 == 0) goto LAB_0273e618;
  piVar13 = (int *)(lVar3 + 4);
  while (piVar13[-1] != 0x4c24f1cf) {
    piVar13 = piVar13 + 2;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) goto LAB_0273e618;
  }
  iVar17 = 0;
  if (*piVar13 != -1) {
    iVar17 = *piVar13;
  }
  *(int *)(puVar5 + 4) = iVar17;
  uVar1 = *puVar8;
  goto joined_r0x0273e514;
LAB_0273e618:
  uVar6 = 0;
LAB_0273e61c:
  if (0xfffe < uVar6) {
    uVar6 = 0xffff;
  }
  uVar7 = (undefined2)uVar6;
  if (uVar9 < 0x400) {
    puVar10 = param_1 + uVar9;
  }
  else {
LAB_0273e304:
    puVar10 = param_1;
  }
  *puVar10 = uVar7;
LAB_0273e30c:
  uVar16 = uVar16 + 1;
  if (uVar16 == uVar15) {
    return;
  }
  goto LAB_0273e318;
}

