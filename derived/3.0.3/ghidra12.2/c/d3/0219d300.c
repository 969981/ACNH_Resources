
undefined * FUN_0219d300(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined *puVar5;
  uint *puVar6;
  long lVar7;
  int iVar8;
  char cVar9;
  ulong uVar10;
  int *piVar11;
  undefined *puVar12;
  
  puVar5 = PTR_DAT_04bc25f0;
  puVar1 = PTR_DAT_04bc25e8;
  lVar7 = *(long *)PTR_DAT_04bb3968;
  if (*(long *)(param_1 + 0xaa0) == 0 || lVar7 == 0) {
    return (undefined *)0x0;
  }
  uVar2 = *(uint *)(*(long *)(param_1 + 0xaa0) + 4);
  if ((int)*(uint *)(lVar7 + 0x168f0) < 1) {
    if (*(long *)(lVar7 + 0x167e0) == 0) {
      return (undefined *)0x0;
    }
    puVar6 = *(uint **)(*(long *)(lVar7 + 0x167e0) + 8);
    if (puVar6 == (uint *)0x0) {
      return (undefined *)0x0;
    }
    if ((uVar2 < *(uint *)(lVar7 + 0x167f8)) &&
       (*(char *)(*(long *)(lVar7 + 0x16800) + (long)(int)uVar2) == '\0')) {
      return (undefined *)0x0;
    }
    if (*puVar6 <= uVar2) {
      return (undefined *)0x0;
    }
    if (puVar6[1] == 0) {
      return (undefined *)0x0;
    }
    if ((ushort)puVar6[2] == 0) {
      return (undefined *)0x0;
    }
    iVar8 = 0xc;
    if (*(char *)((long)puVar6 + 10) != '\0') {
      iVar8 = 0x1c;
    }
    puVar6 = (uint *)((ulong)(puVar6[1] * uVar2 + (uint)(ushort)puVar6[2] * 8 + iVar8) +
                     (long)puVar6);
  }
  else {
    if (*(uint *)(lVar7 + 0x168f0) <= uVar2) {
      return (undefined *)0x0;
    }
    if (*(uint *)(lVar7 + 0x168e0) <= uVar2) {
      uVar2 = 0;
    }
    puVar6 = *(uint **)(*(long *)(lVar7 + 0x168e8) + (ulong)uVar2 * 8);
  }
  if (puVar6 == (uint *)0x0) {
    return (undefined *)0x0;
  }
  uVar2 = *puVar6;
  if (uVar2 == 0) {
LAB_0219d438:
    puVar12 = (undefined *)0x0;
LAB_0219d43c:
    puVar1 = PTR_DAT_04c48740;
    if (puVar12 != (undefined *)0x0) {
      puVar1 = puVar12;
    }
    return puVar1;
  }
  cVar9 = *PTR_DAT_04bc25e8;
  do {
    if (cVar9 == '\0') {
      cVar9 = '\x01';
      *(undefined8 *)puVar5 = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
      *puVar1 = 1;
      uVar2 = *puVar6;
    }
    else {
      uVar3 = *(uint *)puVar5;
      if (-1 < (int)uVar3) {
        puVar12 = (undefined *)((ulong)uVar3 + (long)puVar6);
        goto LAB_0219d43c;
      }
      if (uVar3 != 0xffffffff) goto LAB_0219d438;
    }
    puVar4 = (uint *)(ulong)uVar2;
    puVar12 = (undefined *)0x0;
    if ((puVar4 == (uint *)0x0) || (puVar12 = (undefined *)0x0, puVar6 == puVar4))
    goto LAB_0219d43c;
    lVar7 = 0xc;
    if (*(char *)((long)puVar6 + (10 - (long)puVar4)) != '\0') {
      lVar7 = 0x1c;
    }
    lVar7 = (long)puVar6 + (lVar7 - (long)puVar4);
    puVar12 = (undefined *)0x0;
    if (lVar7 == 0) goto LAB_0219d43c;
    uVar10 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar4));
    *(undefined4 *)puVar5 = 0xfffffffe;
    if (uVar10 == 0) goto LAB_0219d438;
    piVar11 = (int *)(lVar7 + 4);
    while (piVar11[-1] != 0x2c2ac67) {
      piVar11 = piVar11 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) goto LAB_0219d438;
    }
    iVar8 = 0;
    if (*piVar11 != -1) {
      iVar8 = *piVar11;
    }
    *(int *)puVar5 = iVar8;
    uVar2 = *puVar6;
    if (uVar2 == 0) goto LAB_0219d438;
  } while( true );
}

