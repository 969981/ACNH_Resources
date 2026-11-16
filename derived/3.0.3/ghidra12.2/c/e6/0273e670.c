
void FUN_0273e670(undefined2 *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined2 uVar7;
  uint *puVar8;
  ushort uVar9;
  undefined2 *puVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  char cVar15;
  uint *puVar16;
  int *piVar17;
  uint *puVar18;
  ulong uVar19;
  
  puVar5 = PTR_DAT_04bb6388;
  puVar4 = PTR_DAT_04bb5810;
  puVar3 = PTR_DAT_04bb5808;
  lVar11 = *(long *)PTR_DAT_04bb2208;
  uVar12 = *(uint *)(lVar11 + 0xa40);
  if (((int)uVar12 < 1) &&
     (((*(long *)(lVar11 + 0x930) == 0 ||
       (puVar8 = *(uint **)(*(long *)(lVar11 + 0x930) + 8), puVar8 == (uint *)0x0)) ||
      (uVar12 = *puVar8, uVar12 == 0)))) {
    return;
  }
  uVar13 = 0;
  cVar15 = *PTR_DAT_04bb5808;
LAB_0273e6fc:
  if (0 < (int)*(uint *)(lVar11 + 0xa40)) {
    if (uVar13 < *(uint *)(lVar11 + 0xa40)) {
      uVar1 = uVar13;
      if (*(uint *)(lVar11 + 0xa30) <= uVar13) {
        uVar1 = 0;
      }
      puVar8 = *(uint **)(*(long *)(lVar11 + 0xa38) + (ulong)uVar1 * 8);
      if (puVar8 != (uint *)0x0) goto LAB_0273e728;
    }
    goto switchD_0273e75c_default;
  }
  if (((((*(long *)(lVar11 + 0x930) == 0) ||
        (puVar8 = *(uint **)(*(long *)(lVar11 + 0x930) + 8), puVar8 == (uint *)0x0)) ||
       ((uVar13 < *(uint *)(lVar11 + 0x948) &&
        (*(char *)(*(long *)(lVar11 + 0x950) + (long)(int)uVar13) == '\0')))) ||
      ((*puVar8 <= uVar13 || (puVar8[1] == 0)))) || ((ushort)puVar8[2] == 0))
  goto switchD_0273e75c_default;
  iVar14 = 0xc;
  if (*(char *)((long)puVar8 + 10) != '\0') {
    iVar14 = 0x1c;
  }
  puVar8 = (uint *)((ulong)(puVar8[1] * uVar13 + (uint)(ushort)puVar8[2] * 8 + iVar14) +
                   (long)puVar8);
  if (puVar8 == (uint *)0x0) goto switchD_0273e75c_default;
LAB_0273e728:
  uVar1 = *puVar8;
  if (uVar1 == 0 || puVar8 == (uint *)(ulong)uVar1) {
LAB_0273e738:
    uVar9 = 0;
  }
  else {
    puVar16 = (uint *)((long)puVar8 - (long)(ulong)uVar1);
    uVar9 = 0;
    if (*puVar16 != 0) {
      uVar1 = puVar16[1];
      if ((uVar1 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
        lVar2 = 0xc;
        if (*(char *)((long)puVar16 + 10) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar16 + lVar2 + (ulong)(ushort)puVar16[2] * 8;
        if (lVar2 != 0) {
          uVar6 = 0;
          if ((ulong)uVar1 != 0) {
            uVar6 = (uint)((ulong)((long)puVar8 - lVar2) / (ulong)uVar1);
          }
          if (*puVar16 <= uVar6) {
            uVar6 = 0xffffffff;
          }
          if ((uVar6 < *(uint *)puVar5) &&
             (uVar9 = *(ushort *)(*(long *)(puVar5 + 8) + (long)(int)uVar6 * 2), uVar9 < 5))
          goto LAB_0273e73c;
        }
      }
      goto LAB_0273e738;
    }
  }
LAB_0273e73c:
  switch(uVar9) {
  case 1:
    if (*param_2 != 0) goto switchD_0273e75c_caseD_3;
    break;
  case 2:
    if ((*param_2 != 0) || (*(char *)((long)param_2 + 0x2a) != '\0')) goto switchD_0273e75c_caseD_3;
    break;
  case 3:
switchD_0273e75c_caseD_3:
    while (*puVar8 != 0) {
      if (cVar15 != '\0') {
        uVar1 = *(uint *)(puVar4 + 0x14);
        if ((int)uVar1 < 0) {
          if (uVar1 != 0xffffffff) goto LAB_0273e9d4;
          puVar16 = (uint *)(ulong)*puVar8;
          if (*puVar8 != 0) goto LAB_0273e8bc;
          puVar16 = (uint *)0x0;
        }
        else {
          puVar16 = (uint *)0x0;
          if ((ushort *)((ulong)uVar1 + (long)puVar8) != (ushort *)0x0) {
            puVar16 = (uint *)(ulong)*(ushort *)((ulong)uVar1 + (long)puVar8);
          }
        }
LAB_0273e908:
        uVar1 = *puVar8;
        goto joined_r0x0273e90c;
      }
      cVar15 = '\x01';
      *(undefined8 *)puVar4 = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
      *puVar3 = 1;
      *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
      puVar16 = (uint *)(ulong)*puVar8;
      if (*puVar8 == 0) goto LAB_0273e908;
LAB_0273e8bc:
      if (puVar8 == puVar16) {
LAB_0273e9d4:
        puVar16 = (uint *)0x0;
        goto LAB_0273e908;
      }
      lVar2 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar16)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar8 + (lVar2 - (long)puVar16);
      if (lVar2 == 0) goto LAB_0273e9d4;
      uVar19 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar16));
      *(undefined4 *)(puVar4 + 0x14) = 0xfffffffe;
      puVar16 = (uint *)0x0;
      if (uVar19 == 0) goto LAB_0273e908;
      piVar17 = (int *)(lVar2 + 4);
      while (piVar17[-1] != 0x54706054) {
        piVar17 = piVar17 + 2;
        uVar19 = uVar19 - 1;
        puVar16 = (uint *)0x0;
        if (uVar19 == 0) goto LAB_0273e908;
      }
      iVar14 = 0;
      if (*piVar17 != -1) {
        iVar14 = *piVar17;
      }
      *(int *)(puVar4 + 0x14) = iVar14;
    }
    uVar7 = 0;
    goto LAB_0273e6e8;
  case 4:
    if (0 < *param_2) goto switchD_0273e75c_caseD_3;
  }
  goto switchD_0273e75c_default;
joined_r0x0273e90c:
  if (uVar1 == 0) goto LAB_0273e9b8;
  if (cVar15 == '\0') {
    cVar15 = '\x01';
    *(undefined8 *)puVar4 = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
    *puVar3 = 1;
    *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
    uVar1 = *puVar8;
  }
  else {
    uVar1 = *(uint *)(puVar4 + 4);
    if (-1 < (int)uVar1) {
      uVar6 = 0;
      if ((uint *)((ulong)uVar1 + (long)puVar8) != (uint *)0x0) {
        uVar6 = *(uint *)((ulong)uVar1 + (long)puVar8);
      }
      goto LAB_0273e9bc;
    }
    if (uVar1 != 0xffffffff) goto LAB_0273e9b8;
    uVar1 = *puVar8;
  }
  if ((uVar1 == 0) || (puVar18 = (uint *)(ulong)uVar1, puVar8 == puVar18)) goto LAB_0273e9b8;
  lVar2 = 0xc;
  if (*(char *)((long)puVar8 + (10 - (long)puVar18)) != '\0') {
    lVar2 = 0x1c;
  }
  lVar2 = (long)puVar8 + (lVar2 - (long)puVar18);
  if (lVar2 == 0) goto LAB_0273e9b8;
  uVar19 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar18));
  *(undefined4 *)(puVar4 + 4) = 0xfffffffe;
  if (uVar19 == 0) goto LAB_0273e9b8;
  piVar17 = (int *)(lVar2 + 4);
  while (piVar17[-1] != 0x4c24f1cf) {
    piVar17 = piVar17 + 2;
    uVar19 = uVar19 - 1;
    if (uVar19 == 0) goto LAB_0273e9b8;
  }
  iVar14 = 0;
  if (*piVar17 != -1) {
    iVar14 = *piVar17;
  }
  *(int *)(puVar4 + 4) = iVar14;
  uVar1 = *puVar8;
  goto joined_r0x0273e90c;
LAB_0273e9b8:
  uVar6 = 0;
LAB_0273e9bc:
  if (0xfffe < uVar6) {
    uVar6 = 0xffff;
  }
  uVar7 = (undefined2)uVar6;
  if ((uint)puVar16 < 0x400) {
    puVar10 = param_1 + (long)puVar16;
  }
  else {
LAB_0273e6e8:
    puVar10 = param_1;
  }
  *puVar10 = uVar7;
switchD_0273e75c_default:
  uVar13 = uVar13 + 1;
  if (uVar13 == uVar12) {
    return;
  }
  goto LAB_0273e6fc;
}

