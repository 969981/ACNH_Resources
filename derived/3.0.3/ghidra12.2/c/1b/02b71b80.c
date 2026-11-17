
uint FUN_02b71b80(ushort *param_1,ushort *param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ushort uVar8;
  int *piVar9;
  ushort uVar10;
  uint uVar11;
  long lVar12;
  uint *puVar13;
  char cVar14;
  ulong uVar15;
  
  puVar7 = PTR_DAT_04bc4678;
  puVar6 = PTR_DAT_04bc4670;
  lVar12 = *(long *)PTR_DAT_04bb5008;
  uVar8 = *(ushort *)(lVar12 + 0x1bf0);
  uVar11 = *(uint *)(lVar12 + 0x1bd0);
  uVar4 = (uint)*param_1 - (uint)uVar8;
  if (((uVar4 < uVar11) &&
      (puVar13 = *(uint **)(*(long *)(lVar12 + 0x1bd8) + (long)(int)uVar4 * 8),
      puVar13 != (uint *)0x0)) && (uVar4 = *puVar13, uVar4 != 0)) {
    cVar14 = *PTR_DAT_04bc4670;
    do {
      if (cVar14 == '\0') {
        cVar14 = '\x01';
        *(undefined8 *)puVar7 = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
        *puVar6 = 1;
        *(undefined4 *)(puVar7 + 0x10) = 0xffffffff;
        uVar4 = *puVar13;
      }
      else {
        uVar3 = *(uint *)puVar7;
        if (-1 < (int)uVar3) {
          uVar10 = 0;
          if ((ushort *)((ulong)uVar3 + (long)puVar13) != (ushort *)0x0) {
            uVar10 = *(ushort *)((ulong)uVar3 + (long)puVar13);
          }
          goto LAB_02b71c90;
        }
        if (uVar3 != 0xffffffff) break;
      }
      puVar5 = (uint *)(ulong)uVar4;
      uVar10 = 0;
      if ((puVar5 == (uint *)0x0) || (uVar10 = 0, puVar13 == puVar5)) goto LAB_02b71c90;
      lVar2 = 0xc;
      if (*(char *)((long)puVar13 + (10 - (long)puVar5)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar13 + (lVar2 - (long)puVar5);
      if (lVar2 == 0) break;
      uVar15 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar5));
      *(undefined4 *)puVar7 = 0xfffffffe;
      uVar10 = 0;
      if (uVar15 == 0) goto LAB_02b71c90;
      piVar9 = (int *)(lVar2 + 4);
      while (piVar9[-1] != 0x37d4e515) {
        piVar9 = piVar9 + 2;
        uVar15 = uVar15 - 1;
        if (uVar15 == 0) {
          uVar10 = 0;
          goto LAB_02b71c90;
        }
      }
      uVar10 = 0;
      iVar1 = 0;
      if (*piVar9 != -1) {
        iVar1 = *piVar9;
      }
      *(int *)puVar7 = iVar1;
      uVar4 = *puVar13;
      if (uVar4 == 0) goto LAB_02b71c90;
    } while( true );
  }
  uVar10 = 0;
LAB_02b71c90:
  puVar7 = PTR_DAT_04bc4678;
  puVar6 = PTR_DAT_04bc4670;
  uVar4 = (uint)*param_2 - (uint)uVar8;
  if (((uVar11 <= uVar4) ||
      (puVar13 = *(uint **)(*(long *)(lVar12 + 0x1bd8) + (long)(int)uVar4 * 8),
      puVar13 == (uint *)0x0)) || (uVar11 = *puVar13, uVar11 == 0)) {
LAB_02b71dac:
    uVar8 = 0;
LAB_02b71db0:
    if (uVar10 < uVar8) {
      return 0xffffffff;
    }
    if (uVar10 != uVar8) {
      return 1;
    }
    uVar11 = 0xffffffff;
    if (*param_2 <= *param_1) {
      uVar11 = (uint)(*param_1 != *param_2);
    }
    return uVar11;
  }
  cVar14 = *PTR_DAT_04bc4670;
  do {
    if (cVar14 == '\0') {
      cVar14 = '\x01';
      *(undefined8 *)puVar7 = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
      *puVar6 = 1;
      *(undefined4 *)(puVar7 + 0x10) = 0xffffffff;
      uVar11 = *puVar13;
    }
    else {
      uVar4 = *(uint *)puVar7;
      if (-1 < (int)uVar4) {
        if ((ushort *)((ulong)uVar4 + (long)puVar13) == (ushort *)0x0) goto LAB_02b71dac;
        uVar8 = *(ushort *)((ulong)uVar4 + (long)puVar13);
        goto LAB_02b71db0;
      }
      if (uVar4 != 0xffffffff) goto LAB_02b71dac;
    }
    puVar5 = (uint *)(ulong)uVar11;
    uVar8 = 0;
    if ((puVar5 == (uint *)0x0) || (uVar8 = 0, puVar13 == puVar5)) goto LAB_02b71db0;
    lVar12 = 0xc;
    if (*(char *)((long)puVar13 + (10 - (long)puVar5)) != '\0') {
      lVar12 = 0x1c;
    }
    lVar12 = (long)puVar13 + (lVar12 - (long)puVar5);
    uVar8 = 0;
    if (lVar12 == 0) goto LAB_02b71db0;
    uVar15 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar5));
    *(undefined4 *)puVar7 = 0xfffffffe;
    if (uVar15 == 0) goto LAB_02b71dac;
    piVar9 = (int *)(lVar12 + 4);
    while (piVar9[-1] != 0x37d4e515) {
      piVar9 = piVar9 + 2;
      uVar15 = uVar15 - 1;
      if (uVar15 == 0) goto LAB_02b71dac;
    }
    uVar8 = 0;
    iVar1 = 0;
    if (*piVar9 != -1) {
      iVar1 = *piVar9;
    }
    *(int *)puVar7 = iVar1;
    uVar11 = *puVar13;
    if (uVar11 == 0) goto LAB_02b71db0;
  } while( true );
}

