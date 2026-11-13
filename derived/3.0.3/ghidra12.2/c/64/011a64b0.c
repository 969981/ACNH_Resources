
undefined * FUN_011a64b0(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  undefined *puVar6;
  uint *puVar7;
  char cVar8;
  uint uVar9;
  uint *puVar10;
  ulong uVar11;
  int *piVar12;
  
  puVar4 = PTR_DAT_04bb5c48;
  puVar6 = PTR_DAT_04bb5c40;
  puVar7 = *(uint **)(param_1 + 8);
  if ((puVar7 == (uint *)0x0) || (*puVar7 == 0)) {
    return PTR_DAT_04c47e50;
  }
  cVar8 = *PTR_DAT_04bb5c40;
  do {
    if (cVar8 == '\0') {
      cVar8 = '\x01';
      *(undefined8 *)puVar4 = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
      *puVar6 = 1;
      *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
      uVar5 = *puVar7;
    }
    else {
      uVar5 = *(uint *)(puVar4 + 0xc);
      if (-1 < (int)uVar5) {
        if ((short *)((ulong)uVar5 + (long)puVar7) == (short *)0x0) {
          return PTR_DAT_04c47e50;
        }
        if (*(short *)((ulong)uVar5 + (long)puVar7) == 0) {
          return PTR_DAT_04c47e50;
        }
        puVar7 = *(uint **)(param_1 + 8);
        uVar5 = *puVar7;
        if (uVar5 == 0) goto LAB_011a663c;
        uVar9 = *(uint *)(puVar4 + 0x14);
        break;
      }
      if (uVar5 != 0xffffffff) {
        return PTR_DAT_04c47e50;
      }
      uVar5 = *puVar7;
    }
    if (uVar5 == 0) {
      return PTR_DAT_04c47e50;
    }
    puVar10 = (uint *)(ulong)uVar5;
    if (puVar7 == puVar10) {
      return PTR_DAT_04c47e50;
    }
    lVar2 = 0xc;
    if (*(char *)((long)puVar7 + (10 - (long)puVar10)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar7 + (lVar2 - (long)puVar10);
    if (lVar2 == 0) {
      return PTR_DAT_04c47e50;
    }
    uVar11 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar10));
    *(undefined4 *)(puVar4 + 0xc) = 0xfffffffe;
    if (uVar11 == 0) {
      return PTR_DAT_04c47e50;
    }
    piVar12 = (int *)(lVar2 + 4);
    while (piVar12[-1] != 0x54706054) {
      piVar12 = piVar12 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) {
        return PTR_DAT_04c47e50;
      }
    }
    iVar1 = 0;
    if (*piVar12 != -1) {
      iVar1 = *piVar12;
    }
    *(int *)(puVar4 + 0xc) = iVar1;
    if (*puVar7 == 0) {
      return PTR_DAT_04c47e50;
    }
  } while( true );
LAB_011a65d0:
  if (-1 < (int)uVar9) {
    puVar6 = (undefined *)((long)puVar7 + (ulong)uVar9);
    goto LAB_011a6640;
  }
  if ((uVar9 != 0xffffffff) || (lVar2 = (long)puVar7 - (ulong)uVar5, lVar2 == 0)) {
LAB_011a663c:
    puVar6 = (undefined *)0x0;
LAB_011a6640:
    puVar4 = PTR_DAT_04c47e48;
    if (puVar6 != (undefined *)0x0) {
      puVar4 = puVar6;
    }
    return puVar4;
  }
  lVar3 = 0xc;
  if (*(char *)(lVar2 + 10) != '\0') {
    lVar3 = 0x1c;
  }
  if (lVar3 + lVar2 == 0) goto LAB_011a663c;
  uVar11 = (ulong)*(ushort *)(lVar2 + 8);
  *(undefined4 *)(puVar4 + 0x14) = 0xfffffffe;
  if (uVar11 == 0) goto LAB_011a663c;
  puVar10 = (uint *)(lVar3 + lVar2 + 4);
  while (puVar10[-1] != 0x364c173e) {
    puVar10 = puVar10 + 2;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) goto LAB_011a663c;
  }
  uVar9 = 0;
  if (*puVar10 != 0xffffffff) {
    uVar9 = *puVar10;
  }
  *(uint *)(puVar4 + 0x14) = uVar9;
  uVar5 = *puVar7;
  if (uVar5 == 0) goto LAB_011a663c;
  goto LAB_011a65d0;
}

