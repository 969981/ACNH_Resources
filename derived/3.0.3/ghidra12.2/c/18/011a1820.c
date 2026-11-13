
undefined * FUN_011a1820(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined *puVar7;
  uint *puVar8;
  char cVar9;
  ulong uVar10;
  int *piVar11;
  undefined *puVar12;
  
  puVar7 = PTR_DAT_04bb5c30;
  puVar3 = PTR_DAT_04bb5c28;
  puVar8 = *(uint **)(param_1 + 8);
  if (puVar8 == (uint *)0x0) {
    return PTR_DAT_04c47e38;
  }
  uVar4 = *puVar8;
  if (uVar4 == 0) {
LAB_011a1908:
    puVar12 = (undefined *)0x0;
LAB_011a190c:
    puVar3 = *(undefined **)PTR_PTR_04bb5c20;
    if (puVar12 != (undefined *)0x0) {
      puVar3 = puVar12;
    }
    return puVar3;
  }
  cVar9 = *PTR_DAT_04bb5c28;
  do {
    if (cVar9 == '\0') {
      cVar9 = '\x01';
      *(undefined8 *)puVar7 = 0xffffffffffffffff;
      *puVar3 = 1;
      uVar4 = *puVar8;
    }
    else {
      uVar5 = *(uint *)(puVar7 + 4);
      if (-1 < (int)uVar5) {
        puVar12 = (undefined *)((ulong)uVar5 + (long)puVar8);
        goto LAB_011a190c;
      }
      if (uVar5 != 0xffffffff) goto LAB_011a1908;
    }
    puVar6 = (uint *)(ulong)uVar4;
    puVar12 = (undefined *)0x0;
    if ((puVar6 == (uint *)0x0) || (puVar12 = (undefined *)0x0, puVar8 == puVar6))
    goto LAB_011a190c;
    lVar2 = 0xc;
    if (*(char *)((long)puVar8 + (10 - (long)puVar6)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar8 + (lVar2 - (long)puVar6);
    puVar12 = (undefined *)0x0;
    if (lVar2 == 0) goto LAB_011a190c;
    uVar10 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar6));
    *(undefined4 *)(puVar7 + 4) = 0xfffffffe;
    if (uVar10 == 0) goto LAB_011a1908;
    piVar11 = (int *)(lVar2 + 4);
    while (piVar11[-1] != 0x39b5a93d) {
      piVar11 = piVar11 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) goto LAB_011a1908;
    }
    iVar1 = 0;
    if (*piVar11 != -1) {
      iVar1 = *piVar11;
    }
    *(int *)(puVar7 + 4) = iVar1;
    uVar4 = *puVar8;
    if (uVar4 == 0) goto LAB_011a1908;
  } while( true );
}

