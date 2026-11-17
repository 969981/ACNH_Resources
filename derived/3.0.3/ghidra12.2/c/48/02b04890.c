
uint FUN_02b04890(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  char cVar9;
  uint uVar10;
  ulong uVar11;
  uint *puVar12;
  int *piVar13;
  
  puVar4 = PTR_DAT_04bb5be8;
  puVar3 = PTR_DAT_04bb5be0;
  puVar6 = *(uint **)(param_1 + 8);
  if ((puVar6 == (uint *)0x0) || (*puVar6 == 0)) {
LAB_02b04980:
    uVar10 = 0;
LAB_02b04984:
    lVar7 = *(long *)PTR_DAT_04bb46c8;
    if (((((lVar7 != 0) &&
          (uVar10 = uVar10 - *(ushort *)(lVar7 + 0x200), uVar10 < *(uint *)(lVar7 + 0x1e0))) &&
         (lVar8 = *(long *)(*(long *)(lVar7 + 0x1e8) + (long)(int)uVar10 * 8), lVar8 != 0)) &&
        ((*(long *)(lVar7 + 0xb8) != 0 &&
         (puVar6 = *(uint **)(*(long *)(lVar7 + 0xb8) + 8), puVar6 != (uint *)0x0)))) &&
       ((*puVar6 != 0 && ((uVar10 = puVar6[1], uVar10 != 0 && ((ulong)(ushort)puVar6[2] != 0)))))) {
      lVar2 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar6 + lVar2 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar2 != 0) {
        uVar5 = 0;
        if ((ulong)uVar10 != 0) {
          uVar5 = (uint)((ulong)(lVar8 - lVar2) / (ulong)uVar10);
        }
        if (*puVar6 <= uVar5) {
          uVar5 = 0xffffffff;
        }
        if ((0 < *(int *)(lVar7 + 0x1c8)) && (uVar5 < *(uint *)(lVar7 + 0x1d0))) {
          uVar5 = (uint)*(short *)(*(long *)(lVar7 + 0x1d8) + (long)(int)uVar5 * 2);
        }
        if (uVar5 != 0xffffffff) {
          return uVar5;
        }
      }
    }
    return 0;
  }
  cVar9 = *PTR_DAT_04bb5be0;
  do {
    if (cVar9 == '\0') {
      cVar9 = '\x01';
      *(undefined8 *)puVar4 = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
      *puVar3 = 1;
      *(undefined4 *)(puVar4 + 0x20) = 0xffffffff;
      *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
    }
    else {
      uVar10 = *(uint *)(puVar4 + 8);
      if (-1 < (int)uVar10) {
        if ((ushort *)((ulong)uVar10 + (long)puVar6) == (ushort *)0x0) goto LAB_02b04980;
        uVar10 = (uint)*(ushort *)((ulong)uVar10 + (long)puVar6);
        goto LAB_02b04984;
      }
      if (uVar10 != 0xffffffff) goto LAB_02b04980;
    }
    puVar12 = (uint *)(ulong)*puVar6;
    uVar10 = 0;
    if ((*puVar6 == 0) || (puVar6 == puVar12)) goto LAB_02b04984;
    lVar7 = 0xc;
    if (*(char *)((long)puVar6 + (10 - (long)puVar12)) != '\0') {
      lVar7 = 0x1c;
    }
    lVar7 = (long)puVar6 + (lVar7 - (long)puVar12);
    if (lVar7 == 0) goto LAB_02b04980;
    uVar11 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar12));
    *(undefined4 *)(puVar4 + 8) = 0xfffffffe;
    uVar10 = 0;
    if (uVar11 == 0) goto LAB_02b04984;
    piVar13 = (int *)(lVar7 + 4);
    while (piVar13[-1] != -0x63d2923a) {
      piVar13 = piVar13 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) {
        uVar10 = 0;
        goto LAB_02b04984;
      }
    }
    uVar10 = 0;
    iVar1 = 0;
    if (*piVar13 != -1) {
      iVar1 = *piVar13;
    }
    *(int *)(puVar4 + 8) = iVar1;
    if (*puVar6 == 0) goto LAB_02b04984;
  } while( true );
}

