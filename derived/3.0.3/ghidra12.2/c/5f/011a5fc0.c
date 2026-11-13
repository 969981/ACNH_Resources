
undefined * FUN_011a5fc0(long param_1)

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
    return PTR_DAT_04c47e40;
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
          return PTR_DAT_04c47e40;
        }
        if (*(short *)((ulong)uVar5 + (long)puVar7) == 0) {
          return PTR_DAT_04c47e40;
        }
        puVar7 = *(uint **)(param_1 + 8);
        uVar5 = *puVar7;
        if (uVar5 == 0) goto LAB_011a614c;
        uVar9 = *(uint *)(puVar4 + 0x1c);
        break;
      }
      if (uVar5 != 0xffffffff) {
        return PTR_DAT_04c47e40;
      }
      uVar5 = *puVar7;
    }
    if (uVar5 == 0) {
      return PTR_DAT_04c47e40;
    }
    puVar10 = (uint *)(ulong)uVar5;
    if (puVar7 == puVar10) {
      return PTR_DAT_04c47e40;
    }
    lVar2 = 0xc;
    if (*(char *)((long)puVar7 + (10 - (long)puVar10)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar7 + (lVar2 - (long)puVar10);
    if (lVar2 == 0) {
      return PTR_DAT_04c47e40;
    }
    uVar11 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar10));
    *(undefined4 *)(puVar4 + 0xc) = 0xfffffffe;
    if (uVar11 == 0) {
      return PTR_DAT_04c47e40;
    }
    piVar12 = (int *)(lVar2 + 4);
    while (piVar12[-1] != 0x54706054) {
      piVar12 = piVar12 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) {
        return PTR_DAT_04c47e40;
      }
    }
    iVar1 = 0;
    if (*piVar12 != -1) {
      iVar1 = *piVar12;
    }
    *(int *)(puVar4 + 0xc) = iVar1;
    if (*puVar7 == 0) {
      return PTR_DAT_04c47e40;
    }
  } while( true );
LAB_011a60e0:
  if (-1 < (int)uVar9) {
    puVar6 = (undefined *)((long)puVar7 + (ulong)uVar9);
    goto LAB_011a6150;
  }
  if ((uVar9 != 0xffffffff) || (lVar2 = (long)puVar7 - (ulong)uVar5, lVar2 == 0)) {
LAB_011a614c:
    puVar6 = (undefined *)0x0;
LAB_011a6150:
    puVar4 = *(undefined **)PTR_PTR_04bb5c38;
    if (puVar6 != (undefined *)0x0) {
      puVar4 = puVar6;
    }
    return puVar4;
  }
  lVar3 = 0xc;
  if (*(char *)(lVar2 + 10) != '\0') {
    lVar3 = 0x1c;
  }
  if (lVar3 + lVar2 == 0) goto LAB_011a614c;
  uVar11 = (ulong)*(ushort *)(lVar2 + 8);
  *(undefined4 *)(puVar4 + 0x1c) = 0xfffffffe;
  if (uVar11 == 0) goto LAB_011a614c;
  puVar10 = (uint *)(lVar3 + lVar2 + 4);
  while (puVar10[-1] != 0xdf881359) {
    puVar10 = puVar10 + 2;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) goto LAB_011a614c;
  }
  uVar9 = 0;
  if (*puVar10 != 0xffffffff) {
    uVar9 = *puVar10;
  }
  *(uint *)(puVar4 + 0x1c) = uVar9;
  uVar5 = *puVar7;
  if (uVar5 == 0) goto LAB_011a614c;
  goto LAB_011a60e0;
}

