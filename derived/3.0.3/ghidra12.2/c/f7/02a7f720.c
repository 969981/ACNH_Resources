
long FUN_02a7f720(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  long lVar7;
  char cVar8;
  uint uVar9;
  ulong uVar10;
  uint *puVar11;
  int *piVar12;
  
  puVar5 = PTR_DAT_04bc4580;
  puVar4 = PTR_DAT_04bc4578;
  puVar6 = *(uint **)(param_1 + 8);
  if ((puVar6 != (uint *)0x0) && (*puVar6 != 0)) {
    cVar8 = *PTR_DAT_04bc4578;
    do {
      if (cVar8 == '\0') {
        cVar8 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
      }
      else {
        uVar9 = *(uint *)(puVar5 + 4);
        if (-1 < (int)uVar9) {
          if ((ushort *)((ulong)uVar9 + (long)puVar6) == (ushort *)0x0) break;
          uVar9 = (uint)*(ushort *)((ulong)uVar9 + (long)puVar6);
          goto LAB_02a7f814;
        }
        if (uVar9 != 0xffffffff) break;
      }
      puVar11 = (uint *)(ulong)*puVar6;
      uVar9 = 0;
      if ((*puVar6 == 0) || (puVar6 == puVar11)) goto LAB_02a7f814;
      lVar7 = 0xc;
      if (*(char *)((long)puVar6 + (10 - (long)puVar11)) != '\0') {
        lVar7 = 0x1c;
      }
      lVar7 = (long)puVar6 + (lVar7 - (long)puVar11);
      if (lVar7 == 0) break;
      uVar10 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar11));
      *(undefined4 *)(puVar5 + 4) = 0xfffffffe;
      uVar9 = 0;
      if (uVar10 == 0) goto LAB_02a7f814;
      piVar12 = (int *)(lVar7 + 4);
      while (piVar12[-1] != -0x11631973) {
        piVar12 = piVar12 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          uVar9 = 0;
          goto LAB_02a7f814;
        }
      }
      uVar9 = 0;
      iVar2 = 0;
      if (*piVar12 != -1) {
        iVar2 = *piVar12;
      }
      *(int *)(puVar5 + 4) = iVar2;
      if (*puVar6 == 0) goto LAB_02a7f814;
    } while( true );
  }
  uVar9 = 0;
LAB_02a7f814:
  puVar5 = PTR_DAT_04bb5c00;
  puVar4 = PTR_DAT_04bb5bf8;
  lVar7 = *(long *)PTR_DAT_04bb5008;
  uVar9 = uVar9 - *(ushort *)(lVar7 + 0x11f0);
  if ((*(uint *)(lVar7 + 0x11d0) <= uVar9) ||
     (puVar6 = *(uint **)(*(long *)(lVar7 + 0x11d8) + (long)(int)uVar9 * 8), puVar6 == (uint *)0x0))
  {
    return *(long *)PTR_PTR_04bc45c0;
  }
  uVar9 = *puVar6;
  if (uVar9 == 0) {
LAB_02a7f914:
    lVar7 = 0;
LAB_02a7f918:
    lVar1 = *(long *)PTR_PTR_04bb5bf0;
    if (lVar7 != 0) {
      lVar1 = lVar7;
    }
    return lVar1;
  }
  cVar8 = *PTR_DAT_04bb5bf8;
  do {
    if (cVar8 == '\0') {
      cVar8 = '\x01';
      *(undefined8 *)puVar5 = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
      *puVar4 = 1;
      *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
      uVar9 = *puVar6;
    }
    else {
      uVar3 = *(uint *)(puVar5 + 0xc);
      if (-1 < (int)uVar3) {
        lVar7 = (ulong)uVar3 + (long)puVar6;
        goto LAB_02a7f918;
      }
      if (uVar3 != 0xffffffff) goto LAB_02a7f914;
    }
    puVar11 = (uint *)(ulong)uVar9;
    lVar7 = 0;
    if ((puVar11 == (uint *)0x0) || (lVar7 = 0, puVar6 == puVar11)) goto LAB_02a7f918;
    lVar7 = 0xc;
    if (*(char *)((long)puVar6 + (10 - (long)puVar11)) != '\0') {
      lVar7 = 0x1c;
    }
    lVar1 = (long)puVar6 + (lVar7 - (long)puVar11);
    lVar7 = 0;
    if (lVar1 == 0) goto LAB_02a7f918;
    uVar10 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar11));
    *(undefined4 *)(puVar5 + 0xc) = 0xfffffffe;
    if (uVar10 == 0) goto LAB_02a7f914;
    piVar12 = (int *)(lVar1 + 4);
    while (piVar12[-1] != 0x68cf5938) {
      piVar12 = piVar12 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) goto LAB_02a7f914;
    }
    iVar2 = 0;
    if (*piVar12 != -1) {
      iVar2 = *piVar12;
    }
    *(int *)(puVar5 + 0xc) = iVar2;
    uVar9 = *puVar6;
    if (uVar9 == 0) goto LAB_02a7f914;
  } while( true );
}

