
void FUN_02b60ed0(undefined4 *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined2 uVar8;
  int *piVar9;
  long lVar10;
  uint *puVar11;
  char cVar12;
  ulong uVar13;
  
  puVar7 = PTR_DAT_04bb5c00;
  puVar6 = PTR_DAT_04bb5bf8;
  lVar10 = *(long *)PTR_DAT_04bb5008;
  uVar4 = (param_2 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x11f0);
  if ((*(uint *)(lVar10 + 0x11d0) <= uVar4) ||
     (puVar11 = *(uint **)(*(long *)(lVar10 + 0x11d8) + (long)(int)uVar4 * 8),
     puVar11 == (uint *)0x0)) {
    uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    *param_1 = *(undefined4 *)PTR_DAT_04bb37e0;
    param_1[1] = uVar2;
    return;
  }
  uVar4 = *puVar11;
  if (uVar4 == 0) {
LAB_02b60ffc:
    uVar8 = 0xfffe;
LAB_02b61000:
    *(undefined2 *)param_1 = uVar8;
    *(undefined2 *)((long)param_1 + 2) = 0;
    param_1[1] = 0;
    FUN_0277d4ac(param_1);
    return;
  }
  cVar12 = *PTR_DAT_04bb5bf8;
  do {
    if (cVar12 == '\0') {
      cVar12 = '\x01';
      *(undefined8 *)puVar7 = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
      *puVar6 = 1;
      *(undefined4 *)(puVar7 + 0x10) = 0xffffffff;
      uVar4 = *puVar11;
    }
    else {
      uVar3 = *(uint *)(puVar7 + 4);
      if (-1 < (int)uVar3) {
        if ((undefined2 *)((ulong)uVar3 + (long)puVar11) != (undefined2 *)0x0) {
          uVar8 = *(undefined2 *)((ulong)uVar3 + (long)puVar11);
          goto LAB_02b61000;
        }
        goto LAB_02b60ffc;
      }
      if (uVar3 != 0xffffffff) goto LAB_02b60ffc;
    }
    puVar5 = (uint *)(ulong)uVar4;
    uVar8 = 0xfffe;
    if ((puVar5 == (uint *)0x0) || (uVar8 = 0xfffe, puVar11 == puVar5)) goto LAB_02b61000;
    lVar10 = 0xc;
    if (*(char *)((long)puVar11 + (10 - (long)puVar5)) != '\0') {
      lVar10 = 0x1c;
    }
    lVar10 = (long)puVar11 + (lVar10 - (long)puVar5);
    if (lVar10 == 0) goto LAB_02b60ffc;
    uVar13 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar5));
    *(undefined4 *)(puVar7 + 4) = 0xfffffffe;
    if (uVar13 == 0) goto LAB_02b60ffc;
    piVar9 = (int *)(lVar10 + 4);
    while (piVar9[-1] != -0x3cc576b2) {
      piVar9 = piVar9 + 2;
      uVar13 = uVar13 - 1;
      if (uVar13 == 0) goto LAB_02b60ffc;
    }
    iVar1 = 0;
    if (*piVar9 != -1) {
      iVar1 = *piVar9;
    }
    *(int *)(puVar7 + 4) = iVar1;
    uVar4 = *puVar11;
    if (uVar4 == 0) goto LAB_02b60ffc;
  } while( true );
}

